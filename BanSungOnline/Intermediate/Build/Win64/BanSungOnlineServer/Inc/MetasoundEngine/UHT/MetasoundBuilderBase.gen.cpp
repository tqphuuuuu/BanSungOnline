// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MetasoundEngine/Public/MetasoundBuilderBase.h"
#include "MetasoundFrontend/Public/MetasoundFrontendDocument.h"
#include "MetasoundFrontend/Public/MetasoundFrontendDocumentBuilder.h"
#include "MetasoundFrontend/Public/MetasoundFrontendLiteral.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMetasoundBuilderBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
METASOUNDENGINE_API UClass* Z_Construct_UClass_UMetaSoundBuilderBase();
METASOUNDENGINE_API UClass* Z_Construct_UClass_UMetaSoundBuilderBase_NoRegister();
METASOUNDENGINE_API UEnum* Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult();
METASOUNDENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMetaSoundBuilderNodeInputHandle();
METASOUNDENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMetaSoundBuilderNodeOutputHandle();
METASOUNDENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMetaSoundBuilderOptions();
METASOUNDENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMetaSoundNodeHandle();
METASOUNDFRONTEND_API UClass* Z_Construct_UClass_UMetaSoundDocumentInterface_NoRegister();
METASOUNDFRONTEND_API UEnum* Z_Construct_UEnum_MetasoundFrontend_EMetasoundFrontendVertexAccessType();
METASOUNDFRONTEND_API UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendClassName();
METASOUNDFRONTEND_API UScriptStruct* Z_Construct_UScriptStruct_FMetaSoundFrontendDocumentBuilder();
METASOUNDFRONTEND_API UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendLiteral();
METASOUNDFRONTEND_API UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendVersion();
METASOUNDFRONTEND_API UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendVertexHandle();
UPackage* Z_Construct_UPackage__Script_MetasoundEngine();
// End Cross Module References

// Begin ScriptStruct FMetaSoundBuilderNodeInputHandle
static_assert(std::is_polymorphic<FMetaSoundBuilderNodeInputHandle>() == std::is_polymorphic<FMetasoundFrontendVertexHandle>(), "USTRUCT FMetaSoundBuilderNodeInputHandle cannot be polymorphic unless super FMetasoundFrontendVertexHandle is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetaSoundBuilderNodeInputHandle;
class UScriptStruct* FMetaSoundBuilderNodeInputHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetaSoundBuilderNodeInputHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetaSoundBuilderNodeInputHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetaSoundBuilderNodeInputHandle, (UObject*)Z_Construct_UPackage__Script_MetasoundEngine(), TEXT("MetaSoundBuilderNodeInputHandle"));
	}
	return Z_Registration_Info_UScriptStruct_MetaSoundBuilderNodeInputHandle.OuterSingleton;
}
template<> METASOUNDENGINE_API UScriptStruct* StaticStruct<FMetaSoundBuilderNodeInputHandle>()
{
	return FMetaSoundBuilderNodeInputHandle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMetaSoundBuilderNodeInputHandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// namespace Metasound::Engine\n" },
		{ "DisplayName", "MetaSound Node Input Handle" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderBase.h" },
		{ "ToolTip", "namespace Metasound::Engine" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetaSoundBuilderNodeInputHandle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetaSoundBuilderNodeInputHandle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEngine,
	Z_Construct_UScriptStruct_FMetasoundFrontendVertexHandle,
	&NewStructOps,
	"MetaSoundBuilderNodeInputHandle",
	nullptr,
	0,
	sizeof(FMetaSoundBuilderNodeInputHandle),
	alignof(FMetaSoundBuilderNodeInputHandle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetaSoundBuilderNodeInputHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMetaSoundBuilderNodeInputHandle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMetaSoundBuilderNodeInputHandle()
{
	if (!Z_Registration_Info_UScriptStruct_MetaSoundBuilderNodeInputHandle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetaSoundBuilderNodeInputHandle.InnerSingleton, Z_Construct_UScriptStruct_FMetaSoundBuilderNodeInputHandle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MetaSoundBuilderNodeInputHandle.InnerSingleton;
}
// End ScriptStruct FMetaSoundBuilderNodeInputHandle

// Begin ScriptStruct FMetaSoundBuilderNodeOutputHandle
static_assert(std::is_polymorphic<FMetaSoundBuilderNodeOutputHandle>() == std::is_polymorphic<FMetasoundFrontendVertexHandle>(), "USTRUCT FMetaSoundBuilderNodeOutputHandle cannot be polymorphic unless super FMetasoundFrontendVertexHandle is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetaSoundBuilderNodeOutputHandle;
class UScriptStruct* FMetaSoundBuilderNodeOutputHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetaSoundBuilderNodeOutputHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetaSoundBuilderNodeOutputHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetaSoundBuilderNodeOutputHandle, (UObject*)Z_Construct_UPackage__Script_MetasoundEngine(), TEXT("MetaSoundBuilderNodeOutputHandle"));
	}
	return Z_Registration_Info_UScriptStruct_MetaSoundBuilderNodeOutputHandle.OuterSingleton;
}
template<> METASOUNDENGINE_API UScriptStruct* StaticStruct<FMetaSoundBuilderNodeOutputHandle>()
{
	return FMetaSoundBuilderNodeOutputHandle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMetaSoundBuilderNodeOutputHandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "MetaSound Node Output Handle" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderBase.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetaSoundBuilderNodeOutputHandle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetaSoundBuilderNodeOutputHandle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEngine,
	Z_Construct_UScriptStruct_FMetasoundFrontendVertexHandle,
	&NewStructOps,
	"MetaSoundBuilderNodeOutputHandle",
	nullptr,
	0,
	sizeof(FMetaSoundBuilderNodeOutputHandle),
	alignof(FMetaSoundBuilderNodeOutputHandle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetaSoundBuilderNodeOutputHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMetaSoundBuilderNodeOutputHandle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMetaSoundBuilderNodeOutputHandle()
{
	if (!Z_Registration_Info_UScriptStruct_MetaSoundBuilderNodeOutputHandle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetaSoundBuilderNodeOutputHandle.InnerSingleton, Z_Construct_UScriptStruct_FMetaSoundBuilderNodeOutputHandle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MetaSoundBuilderNodeOutputHandle.InnerSingleton;
}
// End ScriptStruct FMetaSoundBuilderNodeOutputHandle

// Begin ScriptStruct FMetaSoundNodeHandle
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetaSoundNodeHandle;
class UScriptStruct* FMetaSoundNodeHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetaSoundNodeHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetaSoundNodeHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetaSoundNodeHandle, (UObject*)Z_Construct_UPackage__Script_MetasoundEngine(), TEXT("MetaSoundNodeHandle"));
	}
	return Z_Registration_Info_UScriptStruct_MetaSoundNodeHandle.OuterSingleton;
}
template<> METASOUNDENGINE_API UScriptStruct* StaticStruct<FMetaSoundNodeHandle>()
{
	return FMetaSoundNodeHandle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMetaSoundNodeHandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "MetaSound Node Handle" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeID_MetaData[] = {
		{ "ModuleRelativePath", "Public/MetasoundBuilderBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetaSoundNodeHandle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetaSoundNodeHandle_Statics::NewProp_NodeID = { "NodeID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetaSoundNodeHandle, NodeID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeID_MetaData), NewProp_NodeID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMetaSoundNodeHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetaSoundNodeHandle_Statics::NewProp_NodeID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetaSoundNodeHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetaSoundNodeHandle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEngine,
	nullptr,
	&NewStructOps,
	"MetaSoundNodeHandle",
	Z_Construct_UScriptStruct_FMetaSoundNodeHandle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetaSoundNodeHandle_Statics::PropPointers),
	sizeof(FMetaSoundNodeHandle),
	alignof(FMetaSoundNodeHandle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetaSoundNodeHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMetaSoundNodeHandle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMetaSoundNodeHandle()
{
	if (!Z_Registration_Info_UScriptStruct_MetaSoundNodeHandle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetaSoundNodeHandle.InnerSingleton, Z_Construct_UScriptStruct_FMetaSoundNodeHandle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MetaSoundNodeHandle.InnerSingleton;
}
// End ScriptStruct FMetaSoundNodeHandle

// Begin ScriptStruct FMetaSoundBuilderOptions
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetaSoundBuilderOptions;
class UScriptStruct* FMetaSoundBuilderOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetaSoundBuilderOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetaSoundBuilderOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetaSoundBuilderOptions, (UObject*)Z_Construct_UPackage__Script_MetasoundEngine(), TEXT("MetaSoundBuilderOptions"));
	}
	return Z_Registration_Info_UScriptStruct_MetaSoundBuilderOptions.OuterSingleton;
}
template<> METASOUNDENGINE_API UScriptStruct* StaticStruct<FMetaSoundBuilderOptions>()
{
	return FMetaSoundBuilderOptions::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMetaSoundBuilderOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "MetaSound|Builder" },
		{ "Comment", "// Name of generated object. If object already exists, used as the base name to ensure new object is unique.\n// If left 'None', creates unique name.\n" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderBase.h" },
		{ "ToolTip", "Name of generated object. If object already exists, used as the base name to ensure new object is unique.\nIf left 'None', creates unique name." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceUniqueClassName_MetaData[] = {
		{ "AdvancedDisplay", "" },
		{ "Category", "MetaSound|Builder" },
		{ "Comment", "// If the resulting MetaSound is building over an existing document, a unique class name will be generated,\n// invalidating any referencing MetaSounds and registering the MetaSound as a new entry in the Frontend. If\n// building a new document, option is ignored (new document always generates a unique class name).\n" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderBase.h" },
		{ "ToolTip", "If the resulting MetaSound is building over an existing document, a unique class name will be generated,\ninvalidating any referencing MetaSounds and registering the MetaSound as a new entry in the Frontend. If\nbuilding a new document, option is ignored (new document always generates a unique class name)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAddToRegistry_MetaData[] = {
		{ "Comment", "// If true, adds MetaSound to node registry, making it available\n// for reference by other dynamically created MetaSounds.\n" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderBase.h" },
		{ "ToolTip", "If true, adds MetaSound to node registry, making it available\nfor reference by other dynamically created MetaSounds." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExistingMetaSound_MetaData[] = {
		{ "Comment", "// If set, builder overwrites the given MetaSound's document with the builder's copy\n// (ignores the Name field above).\n" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderBase.h" },
		{ "ToolTip", "If set, builder overwrites the given MetaSound's document with the builder's copy\n(ignores the Name field above)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static void NewProp_bForceUniqueClassName_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceUniqueClassName;
	static void NewProp_bAddToRegistry_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddToRegistry;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_ExistingMetaSound;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetaSoundBuilderOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMetaSoundBuilderOptions_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetaSoundBuilderOptions, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
void Z_Construct_UScriptStruct_FMetaSoundBuilderOptions_Statics::NewProp_bForceUniqueClassName_SetBit(void* Obj)
{
	((FMetaSoundBuilderOptions*)Obj)->bForceUniqueClassName = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMetaSoundBuilderOptions_Statics::NewProp_bForceUniqueClassName = { "bForceUniqueClassName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMetaSoundBuilderOptions), &Z_Construct_UScriptStruct_FMetaSoundBuilderOptions_Statics::NewProp_bForceUniqueClassName_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceUniqueClassName_MetaData), NewProp_bForceUniqueClassName_MetaData) };
void Z_Construct_UScriptStruct_FMetaSoundBuilderOptions_Statics::NewProp_bAddToRegistry_SetBit(void* Obj)
{
	((FMetaSoundBuilderOptions*)Obj)->bAddToRegistry = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMetaSoundBuilderOptions_Statics::NewProp_bAddToRegistry = { "bAddToRegistry", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMetaSoundBuilderOptions), &Z_Construct_UScriptStruct_FMetaSoundBuilderOptions_Statics::NewProp_bAddToRegistry_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAddToRegistry_MetaData), NewProp_bAddToRegistry_MetaData) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UScriptStruct_FMetaSoundBuilderOptions_Statics::NewProp_ExistingMetaSound = { "ExistingMetaSound", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetaSoundBuilderOptions, ExistingMetaSound), Z_Construct_UClass_UMetaSoundDocumentInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExistingMetaSound_MetaData), NewProp_ExistingMetaSound_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMetaSoundBuilderOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetaSoundBuilderOptions_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetaSoundBuilderOptions_Statics::NewProp_bForceUniqueClassName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetaSoundBuilderOptions_Statics::NewProp_bAddToRegistry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetaSoundBuilderOptions_Statics::NewProp_ExistingMetaSound,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetaSoundBuilderOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetaSoundBuilderOptions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEngine,
	nullptr,
	&NewStructOps,
	"MetaSoundBuilderOptions",
	Z_Construct_UScriptStruct_FMetaSoundBuilderOptions_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetaSoundBuilderOptions_Statics::PropPointers),
	sizeof(FMetaSoundBuilderOptions),
	alignof(FMetaSoundBuilderOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetaSoundBuilderOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMetaSoundBuilderOptions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMetaSoundBuilderOptions()
{
	if (!Z_Registration_Info_UScriptStruct_MetaSoundBuilderOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetaSoundBuilderOptions.InnerSingleton, Z_Construct_UScriptStruct_FMetaSoundBuilderOptions_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MetaSoundBuilderOptions.InnerSingleton;
}
// End ScriptStruct FMetaSoundBuilderOptions

// Begin Enum EMetaSoundBuilderResult
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMetaSoundBuilderResult;
static UEnum* EMetaSoundBuilderResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMetaSoundBuilderResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMetaSoundBuilderResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, (UObject*)Z_Construct_UPackage__Script_MetasoundEngine(), TEXT("EMetaSoundBuilderResult"));
	}
	return Z_Registration_Info_UEnum_EMetaSoundBuilderResult.OuterSingleton;
}
template<> METASOUNDENGINE_API UEnum* StaticEnum<EMetaSoundBuilderResult>()
{
	return EMetaSoundBuilderResult_StaticEnum();
}
struct Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "MetaSound Builder Result" },
		{ "Failed.Name", "EMetaSoundBuilderResult::Failed" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderBase.h" },
		{ "Succeeded.Name", "EMetaSoundBuilderResult::Succeeded" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMetaSoundBuilderResult::Succeeded", (int64)EMetaSoundBuilderResult::Succeeded },
		{ "EMetaSoundBuilderResult::Failed", (int64)EMetaSoundBuilderResult::Failed },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MetasoundEngine,
	nullptr,
	"EMetaSoundBuilderResult",
	"EMetaSoundBuilderResult",
	Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult()
{
	if (!Z_Registration_Info_UEnum_EMetaSoundBuilderResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMetaSoundBuilderResult.InnerSingleton, Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMetaSoundBuilderResult.InnerSingleton;
}
// End Enum EMetaSoundBuilderResult

// Begin Class UMetaSoundBuilderBase Function AddGraphInputNode
struct Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphInputNode_Statics
{
	struct MetaSoundBuilderBase_eventAddGraphInputNode_Parms
	{
		FName Name;
		FName DataType;
		FMetasoundFrontendLiteral DefaultValue;
		EMetaSoundBuilderResult OutResult;
		bool bIsConstructorInput;
		FMetaSoundBuilderNodeOutputHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "3" },
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Adds a graph input node with the given name, DataType, and sets the graph input to default value.\n// Returns the new input node's output handle if it was successfully created, or an invalid handle if it failed.\n" },
		{ "CPP_Default_bIsConstructorInput", "false" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderBase.h" },
		{ "ToolTip", "Adds a graph input node with the given name, DataType, and sets the graph input to default value.\nReturns the new input node's output handle if it was successfully created, or an invalid handle if it failed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Output Handle" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DataType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultValue;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static void NewProp_bIsConstructorInput_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsConstructorInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphInputNode_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventAddGraphInputNode_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphInputNode_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventAddGraphInputNode_Parms, DataType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphInputNode_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventAddGraphInputNode_Parms, DefaultValue), Z_Construct_UScriptStruct_FMetasoundFrontendLiteral, METADATA_PARAMS(0, nullptr) }; // 1401040219
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphInputNode_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphInputNode_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventAddGraphInputNode_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 1238801088
void Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphInputNode_Statics::NewProp_bIsConstructorInput_SetBit(void* Obj)
{
	((MetaSoundBuilderBase_eventAddGraphInputNode_Parms*)Obj)->bIsConstructorInput = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphInputNode_Statics::NewProp_bIsConstructorInput = { "bIsConstructorInput", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MetaSoundBuilderBase_eventAddGraphInputNode_Parms), &Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphInputNode_Statics::NewProp_bIsConstructorInput_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphInputNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventAddGraphInputNode_Parms, ReturnValue), Z_Construct_UScriptStruct_FMetaSoundBuilderNodeOutputHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 731065117
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphInputNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphInputNode_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphInputNode_Statics::NewProp_DataType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphInputNode_Statics::NewProp_DefaultValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphInputNode_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphInputNode_Statics::NewProp_OutResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphInputNode_Statics::NewProp_bIsConstructorInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphInputNode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphInputNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphInputNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "AddGraphInputNode", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphInputNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphInputNode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphInputNode_Statics::MetaSoundBuilderBase_eventAddGraphInputNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphInputNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphInputNode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphInputNode_Statics::MetaSoundBuilderBase_eventAddGraphInputNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphInputNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphInputNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execAddGraphInputNode)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_GET_PROPERTY(FNameProperty,Z_Param_DataType);
	P_GET_STRUCT(FMetasoundFrontendLiteral,Z_Param_DefaultValue);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_GET_UBOOL(Z_Param_bIsConstructorInput);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMetaSoundBuilderNodeOutputHandle*)Z_Param__Result=P_THIS->AddGraphInputNode(Z_Param_Name,Z_Param_DataType,Z_Param_DefaultValue,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult),Z_Param_bIsConstructorInput);
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function AddGraphInputNode

// Begin Class UMetaSoundBuilderBase Function AddGraphOutputNode
struct Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphOutputNode_Statics
{
	struct MetaSoundBuilderBase_eventAddGraphOutputNode_Parms
	{
		FName Name;
		FName DataType;
		FMetasoundFrontendLiteral DefaultValue;
		EMetaSoundBuilderResult OutResult;
		bool bIsConstructorOutput;
		FMetaSoundBuilderNodeInputHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "3" },
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Adds a graph output node with the given name, DataType, and sets output node's input to default value.\n// Returns the new output node's input handle if it was successfully created, or an invalid handle if it failed.\n" },
		{ "CPP_Default_bIsConstructorOutput", "false" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderBase.h" },
		{ "ToolTip", "Adds a graph output node with the given name, DataType, and sets output node's input to default value.\nReturns the new output node's input handle if it was successfully created, or an invalid handle if it failed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Input Handle" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DataType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultValue;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static void NewProp_bIsConstructorOutput_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsConstructorOutput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphOutputNode_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventAddGraphOutputNode_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphOutputNode_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventAddGraphOutputNode_Parms, DataType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphOutputNode_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventAddGraphOutputNode_Parms, DefaultValue), Z_Construct_UScriptStruct_FMetasoundFrontendLiteral, METADATA_PARAMS(0, nullptr) }; // 1401040219
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphOutputNode_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphOutputNode_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventAddGraphOutputNode_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 1238801088
void Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphOutputNode_Statics::NewProp_bIsConstructorOutput_SetBit(void* Obj)
{
	((MetaSoundBuilderBase_eventAddGraphOutputNode_Parms*)Obj)->bIsConstructorOutput = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphOutputNode_Statics::NewProp_bIsConstructorOutput = { "bIsConstructorOutput", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MetaSoundBuilderBase_eventAddGraphOutputNode_Parms), &Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphOutputNode_Statics::NewProp_bIsConstructorOutput_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphOutputNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventAddGraphOutputNode_Parms, ReturnValue), Z_Construct_UScriptStruct_FMetaSoundBuilderNodeInputHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 943726435
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphOutputNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphOutputNode_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphOutputNode_Statics::NewProp_DataType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphOutputNode_Statics::NewProp_DefaultValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphOutputNode_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphOutputNode_Statics::NewProp_OutResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphOutputNode_Statics::NewProp_bIsConstructorOutput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphOutputNode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphOutputNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphOutputNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "AddGraphOutputNode", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphOutputNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphOutputNode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphOutputNode_Statics::MetaSoundBuilderBase_eventAddGraphOutputNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphOutputNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphOutputNode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphOutputNode_Statics::MetaSoundBuilderBase_eventAddGraphOutputNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphOutputNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphOutputNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execAddGraphOutputNode)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_GET_PROPERTY(FNameProperty,Z_Param_DataType);
	P_GET_STRUCT(FMetasoundFrontendLiteral,Z_Param_DefaultValue);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_GET_UBOOL(Z_Param_bIsConstructorOutput);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMetaSoundBuilderNodeInputHandle*)Z_Param__Result=P_THIS->AddGraphOutputNode(Z_Param_Name,Z_Param_DataType,Z_Param_DefaultValue,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult),Z_Param_bIsConstructorOutput);
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function AddGraphOutputNode

// Begin Class UMetaSoundBuilderBase Function AddInterface
struct Z_Construct_UFunction_UMetaSoundBuilderBase_AddInterface_Statics
{
	struct MetaSoundBuilderBase_eventAddInterface_Parms
	{
		FName InterfaceName;
		EMetaSoundBuilderResult OutResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Adds an interface registered with the given name to the graph, adding associated input and output nodes.\n" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderBase.h" },
		{ "ToolTip", "Adds an interface registered with the given name to the graph, adding associated input and output nodes." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InterfaceName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_AddInterface_Statics::NewProp_InterfaceName = { "InterfaceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventAddInterface_Parms, InterfaceName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_AddInterface_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_AddInterface_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventAddInterface_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 1238801088
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_AddInterface_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_AddInterface_Statics::NewProp_InterfaceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_AddInterface_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_AddInterface_Statics::NewProp_OutResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_AddInterface_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_AddInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "AddInterface", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_AddInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_AddInterface_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_AddInterface_Statics::MetaSoundBuilderBase_eventAddInterface_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_AddInterface_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_AddInterface_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_AddInterface_Statics::MetaSoundBuilderBase_eventAddInterface_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_AddInterface()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_AddInterface_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execAddInterface)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InterfaceName);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddInterface(Z_Param_InterfaceName,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function AddInterface

// Begin Class UMetaSoundBuilderBase Function AddNode
struct Z_Construct_UFunction_UMetaSoundBuilderBase_AddNode_Statics
{
	struct MetaSoundBuilderBase_eventAddNode_Parms
	{
		TScriptInterface<IMetaSoundDocumentInterface> NodeClass;
		EMetaSoundBuilderResult OutResult;
		FMetaSoundNodeHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Adds a node to the graph using the provided MetaSound asset as its defining NodeClass.\n// Returns a node handle to the created node if successful, or an invalid handle if it failed.\n" },
		{ "DisplayName", "Add MetaSound Node From Asset Class" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderBase.h" },
		{ "ToolTip", "Adds a node to the graph using the provided MetaSound asset as its defining NodeClass.\nReturns a node handle to the created node if successful, or an invalid handle if it failed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeClass_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Node Handle" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_NodeClass;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_AddNode_Statics::NewProp_NodeClass = { "NodeClass", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventAddNode_Parms, NodeClass), Z_Construct_UClass_UMetaSoundDocumentInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeClass_MetaData), NewProp_NodeClass_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_AddNode_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_AddNode_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventAddNode_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 1238801088
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_AddNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventAddNode_Parms, ReturnValue), Z_Construct_UScriptStruct_FMetaSoundNodeHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 2128061789
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_AddNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_AddNode_Statics::NewProp_NodeClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_AddNode_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_AddNode_Statics::NewProp_OutResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_AddNode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_AddNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_AddNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "AddNode", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_AddNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_AddNode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_AddNode_Statics::MetaSoundBuilderBase_eventAddNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_AddNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_AddNode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_AddNode_Statics::MetaSoundBuilderBase_eventAddNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_AddNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_AddNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execAddNode)
{
	P_GET_TINTERFACE_REF(IMetaSoundDocumentInterface,Z_Param_Out_NodeClass);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMetaSoundNodeHandle*)Z_Param__Result=P_THIS->AddNode(Z_Param_Out_NodeClass,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function AddNode

// Begin Class UMetaSoundBuilderBase Function AddNodeByClassName
struct Z_Construct_UFunction_UMetaSoundBuilderBase_AddNodeByClassName_Statics
{
	struct MetaSoundBuilderBase_eventAddNodeByClassName_Parms
	{
		FMetasoundFrontendClassName ClassName;
		EMetaSoundBuilderResult OutResult;
		int32 MajorVersion;
		FMetaSoundNodeHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Adds node referencing the highest native class version of the given class name to the document.\n// Returns a node handle to the created node if successful, or an invalid handle if it failed.\n" },
		{ "CPP_Default_MajorVersion", "1" },
		{ "DisplayName", "Add MetaSound Node By ClassName" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderBase.h" },
		{ "ToolTip", "Adds node referencing the highest native class version of the given class name to the document.\nReturns a node handle to the created node if successful, or an invalid handle if it failed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClassName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Node Handle" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClassName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MajorVersion;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_AddNodeByClassName_Statics::NewProp_ClassName = { "ClassName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventAddNodeByClassName_Parms, ClassName), Z_Construct_UScriptStruct_FMetasoundFrontendClassName, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClassName_MetaData), NewProp_ClassName_MetaData) }; // 1123578214
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_AddNodeByClassName_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_AddNodeByClassName_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventAddNodeByClassName_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 1238801088
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_AddNodeByClassName_Statics::NewProp_MajorVersion = { "MajorVersion", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventAddNodeByClassName_Parms, MajorVersion), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_AddNodeByClassName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventAddNodeByClassName_Parms, ReturnValue), Z_Construct_UScriptStruct_FMetaSoundNodeHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 2128061789
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_AddNodeByClassName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_AddNodeByClassName_Statics::NewProp_ClassName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_AddNodeByClassName_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_AddNodeByClassName_Statics::NewProp_OutResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_AddNodeByClassName_Statics::NewProp_MajorVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_AddNodeByClassName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_AddNodeByClassName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_AddNodeByClassName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "AddNodeByClassName", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_AddNodeByClassName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_AddNodeByClassName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_AddNodeByClassName_Statics::MetaSoundBuilderBase_eventAddNodeByClassName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_AddNodeByClassName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_AddNodeByClassName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_AddNodeByClassName_Statics::MetaSoundBuilderBase_eventAddNodeByClassName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_AddNodeByClassName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_AddNodeByClassName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execAddNodeByClassName)
{
	P_GET_STRUCT_REF(FMetasoundFrontendClassName,Z_Param_Out_ClassName);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_GET_PROPERTY(FIntProperty,Z_Param_MajorVersion);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMetaSoundNodeHandle*)Z_Param__Result=P_THIS->AddNodeByClassName(Z_Param_Out_ClassName,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult),Z_Param_MajorVersion);
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function AddNodeByClassName

// Begin Class UMetaSoundBuilderBase Function Build
struct Z_Construct_UFunction_UMetaSoundBuilderBase_Build_Statics
{
	struct MetaSoundBuilderBase_eventBuild_Parms
	{
		UObject* Parent;
		FMetaSoundBuilderOptions Options;
		TScriptInterface<IMetaSoundDocumentInterface> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "DisplayName", "Build (Soft Deprecated. Parent no longer supported and field is ignored.)" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderBase.h" },
		{ "WorldContext", "Parent" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "MetaSound" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Parent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_Build_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventBuild_Parms, Parent), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_Build_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventBuild_Parms, Options), Z_Construct_UScriptStruct_FMetaSoundBuilderOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Options_MetaData), NewProp_Options_MetaData) }; // 3870668642
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_Build_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventBuild_Parms, ReturnValue), Z_Construct_UClass_UMetaSoundDocumentInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_Build_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_Build_Statics::NewProp_Parent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_Build_Statics::NewProp_Options,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_Build_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_Build_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_Build_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "Build", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_Build_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_Build_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_Build_Statics::MetaSoundBuilderBase_eventBuild_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_Build_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_Build_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_Build_Statics::MetaSoundBuilderBase_eventBuild_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_Build()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_Build_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execBuild)
{
	P_GET_OBJECT(UObject,Z_Param_Parent);
	P_GET_STRUCT_REF(FMetaSoundBuilderOptions,Z_Param_Out_Options);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TScriptInterface<IMetaSoundDocumentInterface>*)Z_Param__Result=P_THIS->Build(Z_Param_Parent,Z_Param_Out_Options);
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function Build

// Begin Class UMetaSoundBuilderBase Function BuildAndOverwriteMetaSound
struct Z_Construct_UFunction_UMetaSoundBuilderBase_BuildAndOverwriteMetaSound_Statics
{
	struct MetaSoundBuilderBase_eventBuildAndOverwriteMetaSound_Parms
	{
		TScriptInterface<IMetaSoundDocumentInterface> ExistingMetaSound;
		bool bForceUniqueClassName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Copies a transient MetaSound with the provided builder options, copying the underlying MetaSound\n// managed by this builder and registering it with the MetaSound Node Registry as a unique name.\n// If 'Force Unique Class Name' is true, registers MetaSound as a new class in the registry, potentially\n// invalidating existing references in other MetaSounds. Not permissible to overwrite MetaSound asset,\n// only transient MetaSound (see EditorSubsystem for overwriting assets at edit time).\n" },
		{ "CPP_Default_bForceUniqueClassName", "false" },
		{ "DisplayName", "Build And Overwrite MetaSound" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderBase.h" },
		{ "ToolTip", "Copies a transient MetaSound with the provided builder options, copying the underlying MetaSound\nmanaged by this builder and registering it with the MetaSound Node Registry as a unique name.\nIf 'Force Unique Class Name' is true, registers MetaSound as a new class in the registry, potentially\ninvalidating existing references in other MetaSounds. Not permissible to overwrite MetaSound asset,\nonly transient MetaSound (see EditorSubsystem for overwriting assets at edit time)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExistingMetaSound_MetaData[] = {
		{ "DisplayName", "Existing MetaSound" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_ExistingMetaSound;
	static void NewProp_bForceUniqueClassName_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceUniqueClassName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_BuildAndOverwriteMetaSound_Statics::NewProp_ExistingMetaSound = { "ExistingMetaSound", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventBuildAndOverwriteMetaSound_Parms, ExistingMetaSound), Z_Construct_UClass_UMetaSoundDocumentInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExistingMetaSound_MetaData), NewProp_ExistingMetaSound_MetaData) };
void Z_Construct_UFunction_UMetaSoundBuilderBase_BuildAndOverwriteMetaSound_Statics::NewProp_bForceUniqueClassName_SetBit(void* Obj)
{
	((MetaSoundBuilderBase_eventBuildAndOverwriteMetaSound_Parms*)Obj)->bForceUniqueClassName = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_BuildAndOverwriteMetaSound_Statics::NewProp_bForceUniqueClassName = { "bForceUniqueClassName", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MetaSoundBuilderBase_eventBuildAndOverwriteMetaSound_Parms), &Z_Construct_UFunction_UMetaSoundBuilderBase_BuildAndOverwriteMetaSound_Statics::NewProp_bForceUniqueClassName_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_BuildAndOverwriteMetaSound_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_BuildAndOverwriteMetaSound_Statics::NewProp_ExistingMetaSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_BuildAndOverwriteMetaSound_Statics::NewProp_bForceUniqueClassName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_BuildAndOverwriteMetaSound_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_BuildAndOverwriteMetaSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "BuildAndOverwriteMetaSound", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_BuildAndOverwriteMetaSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_BuildAndOverwriteMetaSound_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_BuildAndOverwriteMetaSound_Statics::MetaSoundBuilderBase_eventBuildAndOverwriteMetaSound_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_BuildAndOverwriteMetaSound_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_BuildAndOverwriteMetaSound_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_BuildAndOverwriteMetaSound_Statics::MetaSoundBuilderBase_eventBuildAndOverwriteMetaSound_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_BuildAndOverwriteMetaSound()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_BuildAndOverwriteMetaSound_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execBuildAndOverwriteMetaSound)
{
	P_GET_TINTERFACE(IMetaSoundDocumentInterface,Z_Param_ExistingMetaSound);
	P_GET_UBOOL(Z_Param_bForceUniqueClassName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BuildAndOverwriteMetaSound(Z_Param_ExistingMetaSound,Z_Param_bForceUniqueClassName);
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function BuildAndOverwriteMetaSound

// Begin Class UMetaSoundBuilderBase Function BuildNewMetaSound
struct Z_Construct_UFunction_UMetaSoundBuilderBase_BuildNewMetaSound_Statics
{
	struct MetaSoundBuilderBase_eventBuildNewMetaSound_Parms
	{
		FName NameBase;
		TScriptInterface<IMetaSoundDocumentInterface> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Builds a transient MetaSound with the provided builder options, copying the underlying MetaSound\n// managed by this builder and registering it with the MetaSound Node Registry as a unique class. If\n// existing MetaSound exists with the provided NameBase, will make object with unique name with the given\n// NameBase as prefix.\n" },
		{ "DisplayName", "Build New MetaSound" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderBase.h" },
		{ "ToolTip", "Builds a transient MetaSound with the provided builder options, copying the underlying MetaSound\nmanaged by this builder and registering it with the MetaSound Node Registry as a unique class. If\nexisting MetaSound exists with the provided NameBase, will make object with unique name with the given\nNameBase as prefix." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "New MetaSound" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_NameBase;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_BuildNewMetaSound_Statics::NewProp_NameBase = { "NameBase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventBuildNewMetaSound_Parms, NameBase), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_BuildNewMetaSound_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventBuildNewMetaSound_Parms, ReturnValue), Z_Construct_UClass_UMetaSoundDocumentInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_BuildNewMetaSound_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_BuildNewMetaSound_Statics::NewProp_NameBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_BuildNewMetaSound_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_BuildNewMetaSound_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_BuildNewMetaSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "BuildNewMetaSound", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_BuildNewMetaSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_BuildNewMetaSound_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_BuildNewMetaSound_Statics::MetaSoundBuilderBase_eventBuildNewMetaSound_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_BuildNewMetaSound_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_BuildNewMetaSound_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_BuildNewMetaSound_Statics::MetaSoundBuilderBase_eventBuildNewMetaSound_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_BuildNewMetaSound()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_BuildNewMetaSound_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execBuildNewMetaSound)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_NameBase);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TScriptInterface<IMetaSoundDocumentInterface>*)Z_Param__Result=P_THIS->BuildNewMetaSound(Z_Param_NameBase);
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function BuildNewMetaSound

// Begin Class UMetaSoundBuilderBase Function ConnectNodeInputsToMatchingGraphInterfaceInputs
struct Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputsToMatchingGraphInterfaceInputs_Statics
{
	struct MetaSoundBuilderBase_eventConnectNodeInputsToMatchingGraphInterfaceInputs_Parms
	{
		FMetaSoundNodeHandle NodeHandle;
		EMetaSoundBuilderResult OutResult;
		TArray<FMetaSoundBuilderNodeOutputHandle> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Connects a given node's inputs to all graph inputs for shared interfaces implemented on both the node's referenced class and the builder's MetaSound graph. Returns outputs of connected input nodes.\n" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderBase.h" },
		{ "ToolTip", "Connects a given node's inputs to all graph inputs for shared interfaces implemented on both the node's referenced class and the builder's MetaSound graph. Returns outputs of connected input nodes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Connected Graph Input Node Outputs" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeHandle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputsToMatchingGraphInterfaceInputs_Statics::NewProp_NodeHandle = { "NodeHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventConnectNodeInputsToMatchingGraphInterfaceInputs_Parms, NodeHandle), Z_Construct_UScriptStruct_FMetaSoundNodeHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeHandle_MetaData), NewProp_NodeHandle_MetaData) }; // 2128061789
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputsToMatchingGraphInterfaceInputs_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputsToMatchingGraphInterfaceInputs_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventConnectNodeInputsToMatchingGraphInterfaceInputs_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 1238801088
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputsToMatchingGraphInterfaceInputs_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMetaSoundBuilderNodeOutputHandle, METADATA_PARAMS(0, nullptr) }; // 731065117
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputsToMatchingGraphInterfaceInputs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventConnectNodeInputsToMatchingGraphInterfaceInputs_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 731065117
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputsToMatchingGraphInterfaceInputs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputsToMatchingGraphInterfaceInputs_Statics::NewProp_NodeHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputsToMatchingGraphInterfaceInputs_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputsToMatchingGraphInterfaceInputs_Statics::NewProp_OutResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputsToMatchingGraphInterfaceInputs_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputsToMatchingGraphInterfaceInputs_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputsToMatchingGraphInterfaceInputs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputsToMatchingGraphInterfaceInputs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "ConnectNodeInputsToMatchingGraphInterfaceInputs", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputsToMatchingGraphInterfaceInputs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputsToMatchingGraphInterfaceInputs_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputsToMatchingGraphInterfaceInputs_Statics::MetaSoundBuilderBase_eventConnectNodeInputsToMatchingGraphInterfaceInputs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputsToMatchingGraphInterfaceInputs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputsToMatchingGraphInterfaceInputs_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputsToMatchingGraphInterfaceInputs_Statics::MetaSoundBuilderBase_eventConnectNodeInputsToMatchingGraphInterfaceInputs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputsToMatchingGraphInterfaceInputs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputsToMatchingGraphInterfaceInputs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execConnectNodeInputsToMatchingGraphInterfaceInputs)
{
	P_GET_STRUCT_REF(FMetaSoundNodeHandle,Z_Param_Out_NodeHandle);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FMetaSoundBuilderNodeOutputHandle>*)Z_Param__Result=P_THIS->ConnectNodeInputsToMatchingGraphInterfaceInputs(Z_Param_Out_NodeHandle,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function ConnectNodeInputsToMatchingGraphInterfaceInputs

// Begin Class UMetaSoundBuilderBase Function ConnectNodeInputToGraphInput
struct Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputToGraphInput_Statics
{
	struct MetaSoundBuilderBase_eventConnectNodeInputToGraphInput_Parms
	{
		FName GraphInputName;
		FMetaSoundBuilderNodeInputHandle NodeInputHandle;
		EMetaSoundBuilderResult OutResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Connects a given node input to the graph input with the given name.\n" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderBase.h" },
		{ "ToolTip", "Connects a given node input to the graph input with the given name." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeInputHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_GraphInputName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeInputHandle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputToGraphInput_Statics::NewProp_GraphInputName = { "GraphInputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventConnectNodeInputToGraphInput_Parms, GraphInputName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputToGraphInput_Statics::NewProp_NodeInputHandle = { "NodeInputHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventConnectNodeInputToGraphInput_Parms, NodeInputHandle), Z_Construct_UScriptStruct_FMetaSoundBuilderNodeInputHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeInputHandle_MetaData), NewProp_NodeInputHandle_MetaData) }; // 943726435
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputToGraphInput_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputToGraphInput_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventConnectNodeInputToGraphInput_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 1238801088
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputToGraphInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputToGraphInput_Statics::NewProp_GraphInputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputToGraphInput_Statics::NewProp_NodeInputHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputToGraphInput_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputToGraphInput_Statics::NewProp_OutResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputToGraphInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputToGraphInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "ConnectNodeInputToGraphInput", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputToGraphInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputToGraphInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputToGraphInput_Statics::MetaSoundBuilderBase_eventConnectNodeInputToGraphInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputToGraphInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputToGraphInput_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputToGraphInput_Statics::MetaSoundBuilderBase_eventConnectNodeInputToGraphInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputToGraphInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputToGraphInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execConnectNodeInputToGraphInput)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_GraphInputName);
	P_GET_STRUCT_REF(FMetaSoundBuilderNodeInputHandle,Z_Param_Out_NodeInputHandle);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ConnectNodeInputToGraphInput(Z_Param_GraphInputName,Z_Param_Out_NodeInputHandle,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function ConnectNodeInputToGraphInput

// Begin Class UMetaSoundBuilderBase Function ConnectNodeOutputsToMatchingGraphInterfaceOutputs
struct Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputsToMatchingGraphInterfaceOutputs_Statics
{
	struct MetaSoundBuilderBase_eventConnectNodeOutputsToMatchingGraphInterfaceOutputs_Parms
	{
		FMetaSoundNodeHandle NodeHandle;
		EMetaSoundBuilderResult OutResult;
		TArray<FMetaSoundBuilderNodeInputHandle> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Connects a given node's outputs to all graph outputs for shared interfaces implemented on both the node's referenced class and the builder's MetaSound graph. Returns inputs of connected output nodes.\n" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderBase.h" },
		{ "ToolTip", "Connects a given node's outputs to all graph outputs for shared interfaces implemented on both the node's referenced class and the builder's MetaSound graph. Returns inputs of connected output nodes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Connected Graph Output Node Inputs" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeHandle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputsToMatchingGraphInterfaceOutputs_Statics::NewProp_NodeHandle = { "NodeHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventConnectNodeOutputsToMatchingGraphInterfaceOutputs_Parms, NodeHandle), Z_Construct_UScriptStruct_FMetaSoundNodeHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeHandle_MetaData), NewProp_NodeHandle_MetaData) }; // 2128061789
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputsToMatchingGraphInterfaceOutputs_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputsToMatchingGraphInterfaceOutputs_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventConnectNodeOutputsToMatchingGraphInterfaceOutputs_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 1238801088
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputsToMatchingGraphInterfaceOutputs_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMetaSoundBuilderNodeInputHandle, METADATA_PARAMS(0, nullptr) }; // 943726435
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputsToMatchingGraphInterfaceOutputs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventConnectNodeOutputsToMatchingGraphInterfaceOutputs_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 943726435
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputsToMatchingGraphInterfaceOutputs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputsToMatchingGraphInterfaceOutputs_Statics::NewProp_NodeHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputsToMatchingGraphInterfaceOutputs_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputsToMatchingGraphInterfaceOutputs_Statics::NewProp_OutResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputsToMatchingGraphInterfaceOutputs_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputsToMatchingGraphInterfaceOutputs_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputsToMatchingGraphInterfaceOutputs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputsToMatchingGraphInterfaceOutputs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "ConnectNodeOutputsToMatchingGraphInterfaceOutputs", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputsToMatchingGraphInterfaceOutputs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputsToMatchingGraphInterfaceOutputs_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputsToMatchingGraphInterfaceOutputs_Statics::MetaSoundBuilderBase_eventConnectNodeOutputsToMatchingGraphInterfaceOutputs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputsToMatchingGraphInterfaceOutputs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputsToMatchingGraphInterfaceOutputs_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputsToMatchingGraphInterfaceOutputs_Statics::MetaSoundBuilderBase_eventConnectNodeOutputsToMatchingGraphInterfaceOutputs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputsToMatchingGraphInterfaceOutputs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputsToMatchingGraphInterfaceOutputs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execConnectNodeOutputsToMatchingGraphInterfaceOutputs)
{
	P_GET_STRUCT_REF(FMetaSoundNodeHandle,Z_Param_Out_NodeHandle);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FMetaSoundBuilderNodeInputHandle>*)Z_Param__Result=P_THIS->ConnectNodeOutputsToMatchingGraphInterfaceOutputs(Z_Param_Out_NodeHandle,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function ConnectNodeOutputsToMatchingGraphInterfaceOutputs

// Begin Class UMetaSoundBuilderBase Function ConnectNodeOutputToGraphOutput
struct Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputToGraphOutput_Statics
{
	struct MetaSoundBuilderBase_eventConnectNodeOutputToGraphOutput_Parms
	{
		FName GraphOutputName;
		FMetaSoundBuilderNodeOutputHandle NodeOutputHandle;
		EMetaSoundBuilderResult OutResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Connects a given node output to the graph output with the given name.\n" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderBase.h" },
		{ "ToolTip", "Connects a given node output to the graph output with the given name." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeOutputHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_GraphOutputName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeOutputHandle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputToGraphOutput_Statics::NewProp_GraphOutputName = { "GraphOutputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventConnectNodeOutputToGraphOutput_Parms, GraphOutputName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputToGraphOutput_Statics::NewProp_NodeOutputHandle = { "NodeOutputHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventConnectNodeOutputToGraphOutput_Parms, NodeOutputHandle), Z_Construct_UScriptStruct_FMetaSoundBuilderNodeOutputHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeOutputHandle_MetaData), NewProp_NodeOutputHandle_MetaData) }; // 731065117
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputToGraphOutput_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputToGraphOutput_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventConnectNodeOutputToGraphOutput_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 1238801088
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputToGraphOutput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputToGraphOutput_Statics::NewProp_GraphOutputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputToGraphOutput_Statics::NewProp_NodeOutputHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputToGraphOutput_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputToGraphOutput_Statics::NewProp_OutResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputToGraphOutput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputToGraphOutput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "ConnectNodeOutputToGraphOutput", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputToGraphOutput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputToGraphOutput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputToGraphOutput_Statics::MetaSoundBuilderBase_eventConnectNodeOutputToGraphOutput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputToGraphOutput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputToGraphOutput_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputToGraphOutput_Statics::MetaSoundBuilderBase_eventConnectNodeOutputToGraphOutput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputToGraphOutput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputToGraphOutput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execConnectNodeOutputToGraphOutput)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_GraphOutputName);
	P_GET_STRUCT_REF(FMetaSoundBuilderNodeOutputHandle,Z_Param_Out_NodeOutputHandle);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ConnectNodeOutputToGraphOutput(Z_Param_GraphOutputName,Z_Param_Out_NodeOutputHandle,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function ConnectNodeOutputToGraphOutput

// Begin Class UMetaSoundBuilderBase Function ConnectNodes
struct Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodes_Statics
{
	struct MetaSoundBuilderBase_eventConnectNodes_Parms
	{
		FMetaSoundBuilderNodeOutputHandle NodeOutputHandle;
		FMetaSoundBuilderNodeInputHandle NodeInputHandle;
		EMetaSoundBuilderResult OutResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Connects node output to a node input. Does *NOT* provide loop detection for performance reasons.  Loop detection is checked on class registration when built or played.\n// Returns succeeded if connection made, failed if connection already exists with input, the data types do not match, or the connection is not supported due to access type\n// incompatibility (ex. constructor input to non-constructor input).\n" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderBase.h" },
		{ "ToolTip", "Connects node output to a node input. Does *NOT* provide loop detection for performance reasons.  Loop detection is checked on class registration when built or played.\nReturns succeeded if connection made, failed if connection already exists with input, the data types do not match, or the connection is not supported due to access type\nincompatibility (ex. constructor input to non-constructor input)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeOutputHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeInputHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeOutputHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeInputHandle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodes_Statics::NewProp_NodeOutputHandle = { "NodeOutputHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventConnectNodes_Parms, NodeOutputHandle), Z_Construct_UScriptStruct_FMetaSoundBuilderNodeOutputHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeOutputHandle_MetaData), NewProp_NodeOutputHandle_MetaData) }; // 731065117
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodes_Statics::NewProp_NodeInputHandle = { "NodeInputHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventConnectNodes_Parms, NodeInputHandle), Z_Construct_UScriptStruct_FMetaSoundBuilderNodeInputHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeInputHandle_MetaData), NewProp_NodeInputHandle_MetaData) }; // 943726435
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodes_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodes_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventConnectNodes_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 1238801088
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodes_Statics::NewProp_NodeOutputHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodes_Statics::NewProp_NodeInputHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodes_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodes_Statics::NewProp_OutResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "ConnectNodes", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodes_Statics::MetaSoundBuilderBase_eventConnectNodes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodes_Statics::MetaSoundBuilderBase_eventConnectNodes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execConnectNodes)
{
	P_GET_STRUCT_REF(FMetaSoundBuilderNodeOutputHandle,Z_Param_Out_NodeOutputHandle);
	P_GET_STRUCT_REF(FMetaSoundBuilderNodeInputHandle,Z_Param_Out_NodeInputHandle);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ConnectNodes(Z_Param_Out_NodeOutputHandle,Z_Param_Out_NodeInputHandle,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function ConnectNodes

// Begin Class UMetaSoundBuilderBase Function ConnectNodesByInterfaceBindings
struct Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodesByInterfaceBindings_Statics
{
	struct MetaSoundBuilderBase_eventConnectNodesByInterfaceBindings_Parms
	{
		FMetaSoundNodeHandle FromNodeHandle;
		FMetaSoundNodeHandle ToNodeHandle;
		EMetaSoundBuilderResult OutResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Connects two nodes using defined MetaSound Interface Bindings registered with the MetaSound Interface registry.\n" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderBase.h" },
		{ "ToolTip", "Connects two nodes using defined MetaSound Interface Bindings registered with the MetaSound Interface registry." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FromNodeHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToNodeHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FromNodeHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ToNodeHandle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodesByInterfaceBindings_Statics::NewProp_FromNodeHandle = { "FromNodeHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventConnectNodesByInterfaceBindings_Parms, FromNodeHandle), Z_Construct_UScriptStruct_FMetaSoundNodeHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FromNodeHandle_MetaData), NewProp_FromNodeHandle_MetaData) }; // 2128061789
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodesByInterfaceBindings_Statics::NewProp_ToNodeHandle = { "ToNodeHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventConnectNodesByInterfaceBindings_Parms, ToNodeHandle), Z_Construct_UScriptStruct_FMetaSoundNodeHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToNodeHandle_MetaData), NewProp_ToNodeHandle_MetaData) }; // 2128061789
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodesByInterfaceBindings_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodesByInterfaceBindings_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventConnectNodesByInterfaceBindings_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 1238801088
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodesByInterfaceBindings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodesByInterfaceBindings_Statics::NewProp_FromNodeHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodesByInterfaceBindings_Statics::NewProp_ToNodeHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodesByInterfaceBindings_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodesByInterfaceBindings_Statics::NewProp_OutResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodesByInterfaceBindings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodesByInterfaceBindings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "ConnectNodesByInterfaceBindings", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodesByInterfaceBindings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodesByInterfaceBindings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodesByInterfaceBindings_Statics::MetaSoundBuilderBase_eventConnectNodesByInterfaceBindings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodesByInterfaceBindings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodesByInterfaceBindings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodesByInterfaceBindings_Statics::MetaSoundBuilderBase_eventConnectNodesByInterfaceBindings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodesByInterfaceBindings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodesByInterfaceBindings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execConnectNodesByInterfaceBindings)
{
	P_GET_STRUCT_REF(FMetaSoundNodeHandle,Z_Param_Out_FromNodeHandle);
	P_GET_STRUCT_REF(FMetaSoundNodeHandle,Z_Param_Out_ToNodeHandle);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ConnectNodesByInterfaceBindings(Z_Param_Out_FromNodeHandle,Z_Param_Out_ToNodeHandle,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function ConnectNodesByInterfaceBindings

// Begin Class UMetaSoundBuilderBase Function ContainsNode
struct Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNode_Statics
{
	struct MetaSoundBuilderBase_eventContainsNode_Parms
	{
		FMetaSoundNodeHandle Node;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Returns whether node exists.\n" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderBase.h" },
		{ "ToolTip", "Returns whether node exists." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "IsValid" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNode_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventContainsNode_Parms, Node), Z_Construct_UScriptStruct_FMetaSoundNodeHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Node_MetaData), NewProp_Node_MetaData) }; // 2128061789
void Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MetaSoundBuilderBase_eventContainsNode_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MetaSoundBuilderBase_eventContainsNode_Parms), &Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNode_Statics::NewProp_Node,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "ContainsNode", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNode_Statics::MetaSoundBuilderBase_eventContainsNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNode_Statics::MetaSoundBuilderBase_eventContainsNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execContainsNode)
{
	P_GET_STRUCT_REF(FMetaSoundNodeHandle,Z_Param_Out_Node);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ContainsNode(Z_Param_Out_Node);
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function ContainsNode

// Begin Class UMetaSoundBuilderBase Function ContainsNodeInput
struct Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNodeInput_Statics
{
	struct MetaSoundBuilderBase_eventContainsNodeInput_Parms
	{
		FMetaSoundBuilderNodeInputHandle Input;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Returns whether node input exists.\n" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderBase.h" },
		{ "ToolTip", "Returns whether node input exists." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "IsValid" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNodeInput_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventContainsNodeInput_Parms, Input), Z_Construct_UScriptStruct_FMetaSoundBuilderNodeInputHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 943726435
void Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNodeInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MetaSoundBuilderBase_eventContainsNodeInput_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNodeInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MetaSoundBuilderBase_eventContainsNodeInput_Parms), &Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNodeInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNodeInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNodeInput_Statics::NewProp_Input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNodeInput_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNodeInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNodeInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "ContainsNodeInput", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNodeInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNodeInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNodeInput_Statics::MetaSoundBuilderBase_eventContainsNodeInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNodeInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNodeInput_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNodeInput_Statics::MetaSoundBuilderBase_eventContainsNodeInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNodeInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNodeInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execContainsNodeInput)
{
	P_GET_STRUCT_REF(FMetaSoundBuilderNodeInputHandle,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ContainsNodeInput(Z_Param_Out_Input);
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function ContainsNodeInput

// Begin Class UMetaSoundBuilderBase Function ContainsNodeOutput
struct Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNodeOutput_Statics
{
	struct MetaSoundBuilderBase_eventContainsNodeOutput_Parms
	{
		FMetaSoundBuilderNodeOutputHandle Output;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Returns whether node output exists.\n" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderBase.h" },
		{ "ToolTip", "Returns whether node output exists." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Output_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "IsValid" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNodeOutput_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventContainsNodeOutput_Parms, Output), Z_Construct_UScriptStruct_FMetaSoundBuilderNodeOutputHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Output_MetaData), NewProp_Output_MetaData) }; // 731065117
void Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNodeOutput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MetaSoundBuilderBase_eventContainsNodeOutput_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNodeOutput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MetaSoundBuilderBase_eventContainsNodeOutput_Parms), &Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNodeOutput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNodeOutput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNodeOutput_Statics::NewProp_Output,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNodeOutput_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNodeOutput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNodeOutput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "ContainsNodeOutput", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNodeOutput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNodeOutput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNodeOutput_Statics::MetaSoundBuilderBase_eventContainsNodeOutput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNodeOutput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNodeOutput_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNodeOutput_Statics::MetaSoundBuilderBase_eventContainsNodeOutput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNodeOutput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNodeOutput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execContainsNodeOutput)
{
	P_GET_STRUCT_REF(FMetaSoundBuilderNodeOutputHandle,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ContainsNodeOutput(Z_Param_Out_Output);
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function ContainsNodeOutput

// Begin Class UMetaSoundBuilderBase Function ConvertFromPreset
struct Z_Construct_UFunction_UMetaSoundBuilderBase_ConvertFromPreset_Statics
{
	struct MetaSoundBuilderBase_eventConvertFromPreset_Parms
	{
		EMetaSoundBuilderResult OutResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Converts this preset to a fully accessible MetaSound; sets result to succeeded if it was converted successfully and failed if it was not.\n" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderBase.h" },
		{ "ToolTip", "Converts this preset to a fully accessible MetaSound; sets result to succeeded if it was converted successfully and failed if it was not." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_ConvertFromPreset_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_ConvertFromPreset_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventConvertFromPreset_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 1238801088
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_ConvertFromPreset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_ConvertFromPreset_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_ConvertFromPreset_Statics::NewProp_OutResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_ConvertFromPreset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_ConvertFromPreset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "ConvertFromPreset", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_ConvertFromPreset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_ConvertFromPreset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_ConvertFromPreset_Statics::MetaSoundBuilderBase_eventConvertFromPreset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_ConvertFromPreset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_ConvertFromPreset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_ConvertFromPreset_Statics::MetaSoundBuilderBase_eventConvertFromPreset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_ConvertFromPreset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_ConvertFromPreset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execConvertFromPreset)
{
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ConvertFromPreset((EMetaSoundBuilderResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function ConvertFromPreset

// Begin Class UMetaSoundBuilderBase Function ConvertToPreset
struct Z_Construct_UFunction_UMetaSoundBuilderBase_ConvertToPreset_Statics
{
	struct MetaSoundBuilderBase_eventConvertToPreset_Parms
	{
		TScriptInterface<IMetaSoundDocumentInterface> ReferencedNodeClass;
		EMetaSoundBuilderResult OutResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Convert this builder to a MetaSound source preset with the given referenced source builder \n" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderBase.h" },
		{ "ToolTip", "Convert this builder to a MetaSound source preset with the given referenced source builder" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReferencedNodeClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_ReferencedNodeClass;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_ConvertToPreset_Statics::NewProp_ReferencedNodeClass = { "ReferencedNodeClass", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventConvertToPreset_Parms, ReferencedNodeClass), Z_Construct_UClass_UMetaSoundDocumentInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReferencedNodeClass_MetaData), NewProp_ReferencedNodeClass_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_ConvertToPreset_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_ConvertToPreset_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventConvertToPreset_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 1238801088
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_ConvertToPreset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_ConvertToPreset_Statics::NewProp_ReferencedNodeClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_ConvertToPreset_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_ConvertToPreset_Statics::NewProp_OutResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_ConvertToPreset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_ConvertToPreset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "ConvertToPreset", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_ConvertToPreset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_ConvertToPreset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_ConvertToPreset_Statics::MetaSoundBuilderBase_eventConvertToPreset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_ConvertToPreset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_ConvertToPreset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_ConvertToPreset_Statics::MetaSoundBuilderBase_eventConvertToPreset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_ConvertToPreset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_ConvertToPreset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execConvertToPreset)
{
	P_GET_TINTERFACE_REF(IMetaSoundDocumentInterface,Z_Param_Out_ReferencedNodeClass);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ConvertToPreset(Z_Param_Out_ReferencedNodeClass,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function ConvertToPreset

// Begin Class UMetaSoundBuilderBase Function DisconnectNodeInput
struct Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodeInput_Statics
{
	struct MetaSoundBuilderBase_eventDisconnectNodeInput_Parms
	{
		FMetaSoundBuilderNodeInputHandle NodeInputHandle;
		EMetaSoundBuilderResult OutResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Removes connection to a given node input. Returns success if connection was removed, failed if not.\n" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderBase.h" },
		{ "ToolTip", "Removes connection to a given node input. Returns success if connection was removed, failed if not." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeInputHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeInputHandle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodeInput_Statics::NewProp_NodeInputHandle = { "NodeInputHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventDisconnectNodeInput_Parms, NodeInputHandle), Z_Construct_UScriptStruct_FMetaSoundBuilderNodeInputHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeInputHandle_MetaData), NewProp_NodeInputHandle_MetaData) }; // 943726435
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodeInput_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodeInput_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventDisconnectNodeInput_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 1238801088
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodeInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodeInput_Statics::NewProp_NodeInputHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodeInput_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodeInput_Statics::NewProp_OutResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodeInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodeInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "DisconnectNodeInput", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodeInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodeInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodeInput_Statics::MetaSoundBuilderBase_eventDisconnectNodeInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodeInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodeInput_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodeInput_Statics::MetaSoundBuilderBase_eventDisconnectNodeInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodeInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodeInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execDisconnectNodeInput)
{
	P_GET_STRUCT_REF(FMetaSoundBuilderNodeInputHandle,Z_Param_Out_NodeInputHandle);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisconnectNodeInput(Z_Param_Out_NodeInputHandle,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function DisconnectNodeInput

// Begin Class UMetaSoundBuilderBase Function DisconnectNodeOutput
struct Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodeOutput_Statics
{
	struct MetaSoundBuilderBase_eventDisconnectNodeOutput_Parms
	{
		FMetaSoundBuilderNodeOutputHandle NodeOutputHandle;
		EMetaSoundBuilderResult OutResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Removes all connections from a given node output. Returns success if all connections were removed, failed if not.\n" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderBase.h" },
		{ "ToolTip", "Removes all connections from a given node output. Returns success if all connections were removed, failed if not." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeOutputHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeOutputHandle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodeOutput_Statics::NewProp_NodeOutputHandle = { "NodeOutputHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventDisconnectNodeOutput_Parms, NodeOutputHandle), Z_Construct_UScriptStruct_FMetaSoundBuilderNodeOutputHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeOutputHandle_MetaData), NewProp_NodeOutputHandle_MetaData) }; // 731065117
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodeOutput_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodeOutput_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventDisconnectNodeOutput_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 1238801088
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodeOutput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodeOutput_Statics::NewProp_NodeOutputHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodeOutput_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodeOutput_Statics::NewProp_OutResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodeOutput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodeOutput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "DisconnectNodeOutput", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodeOutput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodeOutput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodeOutput_Statics::MetaSoundBuilderBase_eventDisconnectNodeOutput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodeOutput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodeOutput_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodeOutput_Statics::MetaSoundBuilderBase_eventDisconnectNodeOutput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodeOutput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodeOutput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execDisconnectNodeOutput)
{
	P_GET_STRUCT_REF(FMetaSoundBuilderNodeOutputHandle,Z_Param_Out_NodeOutputHandle);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisconnectNodeOutput(Z_Param_Out_NodeOutputHandle,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function DisconnectNodeOutput

// Begin Class UMetaSoundBuilderBase Function DisconnectNodes
struct Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodes_Statics
{
	struct MetaSoundBuilderBase_eventDisconnectNodes_Parms
	{
		FMetaSoundBuilderNodeOutputHandle NodeOutputHandle;
		FMetaSoundBuilderNodeInputHandle NodeInputHandle;
		EMetaSoundBuilderResult OutResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Disconnects node output to a node input. Returns success if connection was removed, failed if not.\n" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderBase.h" },
		{ "ToolTip", "Disconnects node output to a node input. Returns success if connection was removed, failed if not." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeOutputHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeInputHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeOutputHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeInputHandle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodes_Statics::NewProp_NodeOutputHandle = { "NodeOutputHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventDisconnectNodes_Parms, NodeOutputHandle), Z_Construct_UScriptStruct_FMetaSoundBuilderNodeOutputHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeOutputHandle_MetaData), NewProp_NodeOutputHandle_MetaData) }; // 731065117
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodes_Statics::NewProp_NodeInputHandle = { "NodeInputHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventDisconnectNodes_Parms, NodeInputHandle), Z_Construct_UScriptStruct_FMetaSoundBuilderNodeInputHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeInputHandle_MetaData), NewProp_NodeInputHandle_MetaData) }; // 943726435
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodes_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodes_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventDisconnectNodes_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 1238801088
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodes_Statics::NewProp_NodeOutputHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodes_Statics::NewProp_NodeInputHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodes_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodes_Statics::NewProp_OutResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "DisconnectNodes", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodes_Statics::MetaSoundBuilderBase_eventDisconnectNodes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodes_Statics::MetaSoundBuilderBase_eventDisconnectNodes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execDisconnectNodes)
{
	P_GET_STRUCT_REF(FMetaSoundBuilderNodeOutputHandle,Z_Param_Out_NodeOutputHandle);
	P_GET_STRUCT_REF(FMetaSoundBuilderNodeInputHandle,Z_Param_Out_NodeInputHandle);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisconnectNodes(Z_Param_Out_NodeOutputHandle,Z_Param_Out_NodeInputHandle,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function DisconnectNodes

// Begin Class UMetaSoundBuilderBase Function DisconnectNodesByInterfaceBindings
struct Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodesByInterfaceBindings_Statics
{
	struct MetaSoundBuilderBase_eventDisconnectNodesByInterfaceBindings_Parms
	{
		FMetaSoundNodeHandle FromNodeHandle;
		FMetaSoundNodeHandle ToNodeHandle;
		EMetaSoundBuilderResult OutResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Disconnects two nodes using defined MetaSound Interface Bindings registered with the MetaSound Interface registry. Returns success if\n// all connections were found and removed, failed if any connections were not.\n" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderBase.h" },
		{ "ToolTip", "Disconnects two nodes using defined MetaSound Interface Bindings registered with the MetaSound Interface registry. Returns success if\nall connections were found and removed, failed if any connections were not." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FromNodeHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToNodeHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FromNodeHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ToNodeHandle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodesByInterfaceBindings_Statics::NewProp_FromNodeHandle = { "FromNodeHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventDisconnectNodesByInterfaceBindings_Parms, FromNodeHandle), Z_Construct_UScriptStruct_FMetaSoundNodeHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FromNodeHandle_MetaData), NewProp_FromNodeHandle_MetaData) }; // 2128061789
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodesByInterfaceBindings_Statics::NewProp_ToNodeHandle = { "ToNodeHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventDisconnectNodesByInterfaceBindings_Parms, ToNodeHandle), Z_Construct_UScriptStruct_FMetaSoundNodeHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToNodeHandle_MetaData), NewProp_ToNodeHandle_MetaData) }; // 2128061789
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodesByInterfaceBindings_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodesByInterfaceBindings_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventDisconnectNodesByInterfaceBindings_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 1238801088
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodesByInterfaceBindings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodesByInterfaceBindings_Statics::NewProp_FromNodeHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodesByInterfaceBindings_Statics::NewProp_ToNodeHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodesByInterfaceBindings_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodesByInterfaceBindings_Statics::NewProp_OutResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodesByInterfaceBindings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodesByInterfaceBindings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "DisconnectNodesByInterfaceBindings", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodesByInterfaceBindings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodesByInterfaceBindings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodesByInterfaceBindings_Statics::MetaSoundBuilderBase_eventDisconnectNodesByInterfaceBindings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodesByInterfaceBindings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodesByInterfaceBindings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodesByInterfaceBindings_Statics::MetaSoundBuilderBase_eventDisconnectNodesByInterfaceBindings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodesByInterfaceBindings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodesByInterfaceBindings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execDisconnectNodesByInterfaceBindings)
{
	P_GET_STRUCT_REF(FMetaSoundNodeHandle,Z_Param_Out_FromNodeHandle);
	P_GET_STRUCT_REF(FMetaSoundNodeHandle,Z_Param_Out_ToNodeHandle);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisconnectNodesByInterfaceBindings(Z_Param_Out_FromNodeHandle,Z_Param_Out_ToNodeHandle,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function DisconnectNodesByInterfaceBindings

// Begin Class UMetaSoundBuilderBase Function FindGraphInputNode
struct Z_Construct_UFunction_UMetaSoundBuilderBase_FindGraphInputNode_Statics
{
	struct MetaSoundBuilderBase_eventFindGraphInputNode_Parms
	{
		FName InputName;
		EMetaSoundBuilderResult OutResult;
		FMetaSoundNodeHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Returns graph input node by the given name if it exists, or an invalid handle if not found.\n" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderBase.h" },
		{ "ToolTip", "Returns graph input node by the given name if it exists, or an invalid handle if not found." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Node Handle" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InputName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindGraphInputNode_Statics::NewProp_InputName = { "InputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventFindGraphInputNode_Parms, InputName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindGraphInputNode_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindGraphInputNode_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventFindGraphInputNode_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 1238801088
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindGraphInputNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventFindGraphInputNode_Parms, ReturnValue), Z_Construct_UScriptStruct_FMetaSoundNodeHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 2128061789
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_FindGraphInputNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindGraphInputNode_Statics::NewProp_InputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindGraphInputNode_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindGraphInputNode_Statics::NewProp_OutResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindGraphInputNode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_FindGraphInputNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindGraphInputNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "FindGraphInputNode", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_FindGraphInputNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_FindGraphInputNode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_FindGraphInputNode_Statics::MetaSoundBuilderBase_eventFindGraphInputNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_FindGraphInputNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_FindGraphInputNode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_FindGraphInputNode_Statics::MetaSoundBuilderBase_eventFindGraphInputNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_FindGraphInputNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_FindGraphInputNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execFindGraphInputNode)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InputName);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMetaSoundNodeHandle*)Z_Param__Result=P_THIS->FindGraphInputNode(Z_Param_InputName,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function FindGraphInputNode

// Begin Class UMetaSoundBuilderBase Function FindGraphOutputNode
struct Z_Construct_UFunction_UMetaSoundBuilderBase_FindGraphOutputNode_Statics
{
	struct MetaSoundBuilderBase_eventFindGraphOutputNode_Parms
	{
		FName OutputName;
		EMetaSoundBuilderResult OutResult;
		FMetaSoundNodeHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Returns graph output node by the given name if it exists, or an invalid handle if not found.\n" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderBase.h" },
		{ "ToolTip", "Returns graph output node by the given name if it exists, or an invalid handle if not found." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Node Handle" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_OutputName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindGraphOutputNode_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventFindGraphOutputNode_Parms, OutputName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindGraphOutputNode_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindGraphOutputNode_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventFindGraphOutputNode_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 1238801088
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindGraphOutputNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventFindGraphOutputNode_Parms, ReturnValue), Z_Construct_UScriptStruct_FMetaSoundNodeHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 2128061789
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_FindGraphOutputNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindGraphOutputNode_Statics::NewProp_OutputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindGraphOutputNode_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindGraphOutputNode_Statics::NewProp_OutResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindGraphOutputNode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_FindGraphOutputNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindGraphOutputNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "FindGraphOutputNode", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_FindGraphOutputNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_FindGraphOutputNode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_FindGraphOutputNode_Statics::MetaSoundBuilderBase_eventFindGraphOutputNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_FindGraphOutputNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_FindGraphOutputNode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_FindGraphOutputNode_Statics::MetaSoundBuilderBase_eventFindGraphOutputNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_FindGraphOutputNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_FindGraphOutputNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execFindGraphOutputNode)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_OutputName);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMetaSoundNodeHandle*)Z_Param__Result=P_THIS->FindGraphOutputNode(Z_Param_OutputName,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function FindGraphOutputNode

// Begin Class UMetaSoundBuilderBase Function FindInterfaceInputNodes
struct Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceInputNodes_Statics
{
	struct MetaSoundBuilderBase_eventFindInterfaceInputNodes_Parms
	{
		FName InterfaceName;
		EMetaSoundBuilderResult OutResult;
		TArray<FMetaSoundNodeHandle> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Returns input nodes associated with a given interface.\n" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderBase.h" },
		{ "ToolTip", "Returns input nodes associated with a given interface." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Input Node Handles" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InterfaceName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceInputNodes_Statics::NewProp_InterfaceName = { "InterfaceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventFindInterfaceInputNodes_Parms, InterfaceName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceInputNodes_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceInputNodes_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventFindInterfaceInputNodes_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 1238801088
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceInputNodes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMetaSoundNodeHandle, METADATA_PARAMS(0, nullptr) }; // 2128061789
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceInputNodes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventFindInterfaceInputNodes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 2128061789
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceInputNodes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceInputNodes_Statics::NewProp_InterfaceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceInputNodes_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceInputNodes_Statics::NewProp_OutResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceInputNodes_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceInputNodes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceInputNodes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceInputNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "FindInterfaceInputNodes", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceInputNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceInputNodes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceInputNodes_Statics::MetaSoundBuilderBase_eventFindInterfaceInputNodes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceInputNodes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceInputNodes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceInputNodes_Statics::MetaSoundBuilderBase_eventFindInterfaceInputNodes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceInputNodes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceInputNodes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execFindInterfaceInputNodes)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InterfaceName);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FMetaSoundNodeHandle>*)Z_Param__Result=P_THIS->FindInterfaceInputNodes(Z_Param_InterfaceName,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function FindInterfaceInputNodes

// Begin Class UMetaSoundBuilderBase Function FindInterfaceOutputNodes
struct Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceOutputNodes_Statics
{
	struct MetaSoundBuilderBase_eventFindInterfaceOutputNodes_Parms
	{
		FName InterfaceName;
		EMetaSoundBuilderResult OutResult;
		TArray<FMetaSoundNodeHandle> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Returns output nodes associated with a given interface.\n" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderBase.h" },
		{ "ToolTip", "Returns output nodes associated with a given interface." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Output Node Handles" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InterfaceName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceOutputNodes_Statics::NewProp_InterfaceName = { "InterfaceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventFindInterfaceOutputNodes_Parms, InterfaceName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceOutputNodes_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceOutputNodes_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventFindInterfaceOutputNodes_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 1238801088
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceOutputNodes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMetaSoundNodeHandle, METADATA_PARAMS(0, nullptr) }; // 2128061789
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceOutputNodes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventFindInterfaceOutputNodes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 2128061789
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceOutputNodes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceOutputNodes_Statics::NewProp_InterfaceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceOutputNodes_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceOutputNodes_Statics::NewProp_OutResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceOutputNodes_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceOutputNodes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceOutputNodes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceOutputNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "FindInterfaceOutputNodes", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceOutputNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceOutputNodes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceOutputNodes_Statics::MetaSoundBuilderBase_eventFindInterfaceOutputNodes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceOutputNodes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceOutputNodes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceOutputNodes_Statics::MetaSoundBuilderBase_eventFindInterfaceOutputNodes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceOutputNodes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceOutputNodes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execFindInterfaceOutputNodes)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InterfaceName);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FMetaSoundNodeHandle>*)Z_Param__Result=P_THIS->FindInterfaceOutputNodes(Z_Param_InterfaceName,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function FindInterfaceOutputNodes

// Begin Class UMetaSoundBuilderBase Function FindNodeClassVersion
struct Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeClassVersion_Statics
{
	struct MetaSoundBuilderBase_eventFindNodeClassVersion_Parms
	{
		FMetaSoundNodeHandle NodeHandle;
		EMetaSoundBuilderResult OutResult;
		FMetasoundFrontendVersion ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Returns output's parent node if the input is valid, otherwise returns invalid node handle.\n" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderBase.h" },
		{ "ToolTip", "Returns output's parent node if the input is valid, otherwise returns invalid node handle." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Node ClassVersion" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeHandle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeClassVersion_Statics::NewProp_NodeHandle = { "NodeHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventFindNodeClassVersion_Parms, NodeHandle), Z_Construct_UScriptStruct_FMetaSoundNodeHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeHandle_MetaData), NewProp_NodeHandle_MetaData) }; // 2128061789
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeClassVersion_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeClassVersion_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventFindNodeClassVersion_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 1238801088
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeClassVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventFindNodeClassVersion_Parms, ReturnValue), Z_Construct_UScriptStruct_FMetasoundFrontendVersion, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 3999094279
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeClassVersion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeClassVersion_Statics::NewProp_NodeHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeClassVersion_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeClassVersion_Statics::NewProp_OutResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeClassVersion_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeClassVersion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeClassVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "FindNodeClassVersion", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeClassVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeClassVersion_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeClassVersion_Statics::MetaSoundBuilderBase_eventFindNodeClassVersion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeClassVersion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeClassVersion_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeClassVersion_Statics::MetaSoundBuilderBase_eventFindNodeClassVersion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeClassVersion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeClassVersion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execFindNodeClassVersion)
{
	P_GET_STRUCT_REF(FMetaSoundNodeHandle,Z_Param_Out_NodeHandle);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMetasoundFrontendVersion*)Z_Param__Result=P_THIS->FindNodeClassVersion(Z_Param_Out_NodeHandle,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function FindNodeClassVersion

// Begin Class UMetaSoundBuilderBase Function FindNodeInputByName
struct Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputByName_Statics
{
	struct MetaSoundBuilderBase_eventFindNodeInputByName_Parms
	{
		FMetaSoundNodeHandle NodeHandle;
		FName InputName;
		EMetaSoundBuilderResult OutResult;
		FMetaSoundBuilderNodeInputHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Returns node input by the given name if it exists, or an invalid handle if not found.\n" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderBase.h" },
		{ "ToolTip", "Returns node input by the given name if it exists, or an invalid handle if not found." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Input Handle" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeHandle;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InputName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputByName_Statics::NewProp_NodeHandle = { "NodeHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventFindNodeInputByName_Parms, NodeHandle), Z_Construct_UScriptStruct_FMetaSoundNodeHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeHandle_MetaData), NewProp_NodeHandle_MetaData) }; // 2128061789
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputByName_Statics::NewProp_InputName = { "InputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventFindNodeInputByName_Parms, InputName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputByName_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputByName_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventFindNodeInputByName_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 1238801088
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventFindNodeInputByName_Parms, ReturnValue), Z_Construct_UScriptStruct_FMetaSoundBuilderNodeInputHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 943726435
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputByName_Statics::NewProp_NodeHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputByName_Statics::NewProp_InputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputByName_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputByName_Statics::NewProp_OutResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "FindNodeInputByName", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputByName_Statics::MetaSoundBuilderBase_eventFindNodeInputByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputByName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputByName_Statics::MetaSoundBuilderBase_eventFindNodeInputByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execFindNodeInputByName)
{
	P_GET_STRUCT_REF(FMetaSoundNodeHandle,Z_Param_Out_NodeHandle);
	P_GET_PROPERTY(FNameProperty,Z_Param_InputName);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMetaSoundBuilderNodeInputHandle*)Z_Param__Result=P_THIS->FindNodeInputByName(Z_Param_Out_NodeHandle,Z_Param_InputName,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function FindNodeInputByName

// Begin Class UMetaSoundBuilderBase Function FindNodeInputParent
struct Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputParent_Statics
{
	struct MetaSoundBuilderBase_eventFindNodeInputParent_Parms
	{
		FMetaSoundBuilderNodeInputHandle InputHandle;
		EMetaSoundBuilderResult OutResult;
		FMetaSoundNodeHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Returns input's parent node if the input is valid, otherwise returns invalid node handle.\n" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderBase.h" },
		{ "ToolTip", "Returns input's parent node if the input is valid, otherwise returns invalid node handle." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Node Handle" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputHandle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputParent_Statics::NewProp_InputHandle = { "InputHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventFindNodeInputParent_Parms, InputHandle), Z_Construct_UScriptStruct_FMetaSoundBuilderNodeInputHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputHandle_MetaData), NewProp_InputHandle_MetaData) }; // 943726435
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputParent_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputParent_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventFindNodeInputParent_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 1238801088
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputParent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventFindNodeInputParent_Parms, ReturnValue), Z_Construct_UScriptStruct_FMetaSoundNodeHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 2128061789
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputParent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputParent_Statics::NewProp_InputHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputParent_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputParent_Statics::NewProp_OutResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputParent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputParent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputParent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "FindNodeInputParent", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputParent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputParent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputParent_Statics::MetaSoundBuilderBase_eventFindNodeInputParent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputParent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputParent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputParent_Statics::MetaSoundBuilderBase_eventFindNodeInputParent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputParent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputParent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execFindNodeInputParent)
{
	P_GET_STRUCT_REF(FMetaSoundBuilderNodeInputHandle,Z_Param_Out_InputHandle);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMetaSoundNodeHandle*)Z_Param__Result=P_THIS->FindNodeInputParent(Z_Param_Out_InputHandle,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function FindNodeInputParent

// Begin Class UMetaSoundBuilderBase Function FindNodeInputs
struct Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputs_Statics
{
	struct MetaSoundBuilderBase_eventFindNodeInputs_Parms
	{
		FMetaSoundNodeHandle NodeHandle;
		EMetaSoundBuilderResult OutResult;
		TArray<FMetaSoundBuilderNodeInputHandle> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Returns all node inputs.\n" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderBase.h" },
		{ "ToolTip", "Returns all node inputs." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Input  Handles" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeHandle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputs_Statics::NewProp_NodeHandle = { "NodeHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventFindNodeInputs_Parms, NodeHandle), Z_Construct_UScriptStruct_FMetaSoundNodeHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeHandle_MetaData), NewProp_NodeHandle_MetaData) }; // 2128061789
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputs_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputs_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventFindNodeInputs_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 1238801088
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputs_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMetaSoundBuilderNodeInputHandle, METADATA_PARAMS(0, nullptr) }; // 943726435
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventFindNodeInputs_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 943726435
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputs_Statics::NewProp_NodeHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputs_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputs_Statics::NewProp_OutResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputs_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputs_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "FindNodeInputs", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputs_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputs_Statics::MetaSoundBuilderBase_eventFindNodeInputs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputs_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputs_Statics::MetaSoundBuilderBase_eventFindNodeInputs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execFindNodeInputs)
{
	P_GET_STRUCT_REF(FMetaSoundNodeHandle,Z_Param_Out_NodeHandle);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FMetaSoundBuilderNodeInputHandle>*)Z_Param__Result=P_THIS->FindNodeInputs(Z_Param_Out_NodeHandle,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function FindNodeInputs

// Begin Class UMetaSoundBuilderBase Function FindNodeInputsByDataType
struct Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputsByDataType_Statics
{
	struct MetaSoundBuilderBase_eventFindNodeInputsByDataType_Parms
	{
		FMetaSoundNodeHandle NodeHandle;
		EMetaSoundBuilderResult OutResult;
		FName DataType;
		TArray<FMetaSoundBuilderNodeInputHandle> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Returns node inputs by the given DataType (ex. \"Audio\", \"Trigger\", \"String\", \"Bool\", \"Float\", \"Int32\", etc.).\n" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderBase.h" },
		{ "ToolTip", "Returns node inputs by the given DataType (ex. \"Audio\", \"Trigger\", \"String\", \"Bool\", \"Float\", \"Int32\", etc.)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Input Handles" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeHandle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DataType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputsByDataType_Statics::NewProp_NodeHandle = { "NodeHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventFindNodeInputsByDataType_Parms, NodeHandle), Z_Construct_UScriptStruct_FMetaSoundNodeHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeHandle_MetaData), NewProp_NodeHandle_MetaData) }; // 2128061789
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputsByDataType_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputsByDataType_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventFindNodeInputsByDataType_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 1238801088
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputsByDataType_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventFindNodeInputsByDataType_Parms, DataType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputsByDataType_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMetaSoundBuilderNodeInputHandle, METADATA_PARAMS(0, nullptr) }; // 943726435
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputsByDataType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventFindNodeInputsByDataType_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 943726435
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputsByDataType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputsByDataType_Statics::NewProp_NodeHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputsByDataType_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputsByDataType_Statics::NewProp_OutResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputsByDataType_Statics::NewProp_DataType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputsByDataType_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputsByDataType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputsByDataType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputsByDataType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "FindNodeInputsByDataType", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputsByDataType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputsByDataType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputsByDataType_Statics::MetaSoundBuilderBase_eventFindNodeInputsByDataType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputsByDataType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputsByDataType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputsByDataType_Statics::MetaSoundBuilderBase_eventFindNodeInputsByDataType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputsByDataType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputsByDataType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execFindNodeInputsByDataType)
{
	P_GET_STRUCT_REF(FMetaSoundNodeHandle,Z_Param_Out_NodeHandle);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_GET_PROPERTY(FNameProperty,Z_Param_DataType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FMetaSoundBuilderNodeInputHandle>*)Z_Param__Result=P_THIS->FindNodeInputsByDataType(Z_Param_Out_NodeHandle,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult),Z_Param_DataType);
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function FindNodeInputsByDataType

// Begin Class UMetaSoundBuilderBase Function FindNodeOutputByName
struct Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputByName_Statics
{
	struct MetaSoundBuilderBase_eventFindNodeOutputByName_Parms
	{
		FMetaSoundNodeHandle NodeHandle;
		FName OutputName;
		EMetaSoundBuilderResult OutResult;
		FMetaSoundBuilderNodeOutputHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Returns node output by the given name.\n" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderBase.h" },
		{ "ToolTip", "Returns node output by the given name." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Output Handle" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeHandle;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OutputName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputByName_Statics::NewProp_NodeHandle = { "NodeHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventFindNodeOutputByName_Parms, NodeHandle), Z_Construct_UScriptStruct_FMetaSoundNodeHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeHandle_MetaData), NewProp_NodeHandle_MetaData) }; // 2128061789
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputByName_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventFindNodeOutputByName_Parms, OutputName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputByName_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputByName_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventFindNodeOutputByName_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 1238801088
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventFindNodeOutputByName_Parms, ReturnValue), Z_Construct_UScriptStruct_FMetaSoundBuilderNodeOutputHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 731065117
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputByName_Statics::NewProp_NodeHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputByName_Statics::NewProp_OutputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputByName_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputByName_Statics::NewProp_OutResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "FindNodeOutputByName", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputByName_Statics::MetaSoundBuilderBase_eventFindNodeOutputByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputByName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputByName_Statics::MetaSoundBuilderBase_eventFindNodeOutputByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execFindNodeOutputByName)
{
	P_GET_STRUCT_REF(FMetaSoundNodeHandle,Z_Param_Out_NodeHandle);
	P_GET_PROPERTY(FNameProperty,Z_Param_OutputName);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMetaSoundBuilderNodeOutputHandle*)Z_Param__Result=P_THIS->FindNodeOutputByName(Z_Param_Out_NodeHandle,Z_Param_OutputName,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function FindNodeOutputByName

// Begin Class UMetaSoundBuilderBase Function FindNodeOutputParent
struct Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputParent_Statics
{
	struct MetaSoundBuilderBase_eventFindNodeOutputParent_Parms
	{
		FMetaSoundBuilderNodeOutputHandle OutputHandle;
		EMetaSoundBuilderResult OutResult;
		FMetaSoundNodeHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Returns output's parent node if the input is valid, otherwise returns invalid node handle.\n" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderBase.h" },
		{ "ToolTip", "Returns output's parent node if the input is valid, otherwise returns invalid node handle." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Node Handle" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutputHandle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputParent_Statics::NewProp_OutputHandle = { "OutputHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventFindNodeOutputParent_Parms, OutputHandle), Z_Construct_UScriptStruct_FMetaSoundBuilderNodeOutputHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputHandle_MetaData), NewProp_OutputHandle_MetaData) }; // 731065117
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputParent_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputParent_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventFindNodeOutputParent_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 1238801088
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputParent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventFindNodeOutputParent_Parms, ReturnValue), Z_Construct_UScriptStruct_FMetaSoundNodeHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 2128061789
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputParent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputParent_Statics::NewProp_OutputHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputParent_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputParent_Statics::NewProp_OutResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputParent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputParent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputParent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "FindNodeOutputParent", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputParent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputParent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputParent_Statics::MetaSoundBuilderBase_eventFindNodeOutputParent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputParent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputParent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputParent_Statics::MetaSoundBuilderBase_eventFindNodeOutputParent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputParent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputParent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execFindNodeOutputParent)
{
	P_GET_STRUCT_REF(FMetaSoundBuilderNodeOutputHandle,Z_Param_Out_OutputHandle);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMetaSoundNodeHandle*)Z_Param__Result=P_THIS->FindNodeOutputParent(Z_Param_Out_OutputHandle,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function FindNodeOutputParent

// Begin Class UMetaSoundBuilderBase Function FindNodeOutputs
struct Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputs_Statics
{
	struct MetaSoundBuilderBase_eventFindNodeOutputs_Parms
	{
		FMetaSoundNodeHandle NodeHandle;
		EMetaSoundBuilderResult OutResult;
		TArray<FMetaSoundBuilderNodeOutputHandle> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Returns all node outputs.\n" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderBase.h" },
		{ "ToolTip", "Returns all node outputs." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Output Handles" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeHandle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputs_Statics::NewProp_NodeHandle = { "NodeHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventFindNodeOutputs_Parms, NodeHandle), Z_Construct_UScriptStruct_FMetaSoundNodeHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeHandle_MetaData), NewProp_NodeHandle_MetaData) }; // 2128061789
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputs_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputs_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventFindNodeOutputs_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 1238801088
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputs_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMetaSoundBuilderNodeOutputHandle, METADATA_PARAMS(0, nullptr) }; // 731065117
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventFindNodeOutputs_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 731065117
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputs_Statics::NewProp_NodeHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputs_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputs_Statics::NewProp_OutResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputs_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputs_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "FindNodeOutputs", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputs_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputs_Statics::MetaSoundBuilderBase_eventFindNodeOutputs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputs_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputs_Statics::MetaSoundBuilderBase_eventFindNodeOutputs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execFindNodeOutputs)
{
	P_GET_STRUCT_REF(FMetaSoundNodeHandle,Z_Param_Out_NodeHandle);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FMetaSoundBuilderNodeOutputHandle>*)Z_Param__Result=P_THIS->FindNodeOutputs(Z_Param_Out_NodeHandle,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function FindNodeOutputs

// Begin Class UMetaSoundBuilderBase Function FindNodeOutputsByDataType
struct Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputsByDataType_Statics
{
	struct MetaSoundBuilderBase_eventFindNodeOutputsByDataType_Parms
	{
		FMetaSoundNodeHandle NodeHandle;
		EMetaSoundBuilderResult OutResult;
		FName DataType;
		TArray<FMetaSoundBuilderNodeOutputHandle> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Returns node outputs by the given DataType (ex. \"Audio\", \"Trigger\", \"String\", \"Bool\", \"Float\", \"Int32\", etc.).\n" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderBase.h" },
		{ "ToolTip", "Returns node outputs by the given DataType (ex. \"Audio\", \"Trigger\", \"String\", \"Bool\", \"Float\", \"Int32\", etc.)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Output Handles" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeHandle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DataType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputsByDataType_Statics::NewProp_NodeHandle = { "NodeHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventFindNodeOutputsByDataType_Parms, NodeHandle), Z_Construct_UScriptStruct_FMetaSoundNodeHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeHandle_MetaData), NewProp_NodeHandle_MetaData) }; // 2128061789
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputsByDataType_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputsByDataType_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventFindNodeOutputsByDataType_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 1238801088
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputsByDataType_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventFindNodeOutputsByDataType_Parms, DataType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputsByDataType_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMetaSoundBuilderNodeOutputHandle, METADATA_PARAMS(0, nullptr) }; // 731065117
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputsByDataType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventFindNodeOutputsByDataType_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 731065117
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputsByDataType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputsByDataType_Statics::NewProp_NodeHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputsByDataType_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputsByDataType_Statics::NewProp_OutResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputsByDataType_Statics::NewProp_DataType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputsByDataType_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputsByDataType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputsByDataType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputsByDataType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "FindNodeOutputsByDataType", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputsByDataType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputsByDataType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputsByDataType_Statics::MetaSoundBuilderBase_eventFindNodeOutputsByDataType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputsByDataType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputsByDataType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputsByDataType_Statics::MetaSoundBuilderBase_eventFindNodeOutputsByDataType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputsByDataType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputsByDataType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execFindNodeOutputsByDataType)
{
	P_GET_STRUCT_REF(FMetaSoundNodeHandle,Z_Param_Out_NodeHandle);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_GET_PROPERTY(FNameProperty,Z_Param_DataType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FMetaSoundBuilderNodeOutputHandle>*)Z_Param__Result=P_THIS->FindNodeOutputsByDataType(Z_Param_Out_NodeHandle,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult),Z_Param_DataType);
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function FindNodeOutputsByDataType

// Begin Class UMetaSoundBuilderBase Function GetNodeInputClassDefault
struct Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputClassDefault_Statics
{
	struct MetaSoundBuilderBase_eventGetNodeInputClassDefault_Parms
	{
		FMetaSoundBuilderNodeInputHandle InputHandle;
		EMetaSoundBuilderResult OutResult;
		FMetasoundFrontendLiteral ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Returns node input's class literal value if set, otherwise fails and returns default literal.\n" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderBase.h" },
		{ "ToolTip", "Returns node input's class literal value if set, otherwise fails and returns default literal." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Default" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputHandle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputClassDefault_Statics::NewProp_InputHandle = { "InputHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventGetNodeInputClassDefault_Parms, InputHandle), Z_Construct_UScriptStruct_FMetaSoundBuilderNodeInputHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputHandle_MetaData), NewProp_InputHandle_MetaData) }; // 943726435
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputClassDefault_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputClassDefault_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventGetNodeInputClassDefault_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 1238801088
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputClassDefault_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventGetNodeInputClassDefault_Parms, ReturnValue), Z_Construct_UScriptStruct_FMetasoundFrontendLiteral, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 1401040219
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputClassDefault_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputClassDefault_Statics::NewProp_InputHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputClassDefault_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputClassDefault_Statics::NewProp_OutResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputClassDefault_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputClassDefault_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputClassDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "GetNodeInputClassDefault", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputClassDefault_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputClassDefault_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputClassDefault_Statics::MetaSoundBuilderBase_eventGetNodeInputClassDefault_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputClassDefault_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputClassDefault_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputClassDefault_Statics::MetaSoundBuilderBase_eventGetNodeInputClassDefault_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputClassDefault()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputClassDefault_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execGetNodeInputClassDefault)
{
	P_GET_STRUCT_REF(FMetaSoundBuilderNodeInputHandle,Z_Param_Out_InputHandle);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMetasoundFrontendLiteral*)Z_Param__Result=P_THIS->GetNodeInputClassDefault(Z_Param_Out_InputHandle,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function GetNodeInputClassDefault

// Begin Class UMetaSoundBuilderBase Function GetNodeInputData
struct Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputData_Statics
{
	struct MetaSoundBuilderBase_eventGetNodeInputData_Parms
	{
		FMetaSoundBuilderNodeInputHandle InputHandle;
		FName Name;
		FName DataType;
		EMetaSoundBuilderResult OutResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Returns node input's data if valid (including things like name and datatype).\n" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderBase.h" },
		{ "ToolTip", "Returns node input's data if valid (including things like name and datatype)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputHandle;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DataType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputData_Statics::NewProp_InputHandle = { "InputHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventGetNodeInputData_Parms, InputHandle), Z_Construct_UScriptStruct_FMetaSoundBuilderNodeInputHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputHandle_MetaData), NewProp_InputHandle_MetaData) }; // 943726435
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventGetNodeInputData_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputData_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventGetNodeInputData_Parms, DataType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputData_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputData_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventGetNodeInputData_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 1238801088
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputData_Statics::NewProp_InputHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputData_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputData_Statics::NewProp_DataType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputData_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputData_Statics::NewProp_OutResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "GetNodeInputData", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputData_Statics::MetaSoundBuilderBase_eventGetNodeInputData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputData_Statics::MetaSoundBuilderBase_eventGetNodeInputData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execGetNodeInputData)
{
	P_GET_STRUCT_REF(FMetaSoundBuilderNodeInputHandle,Z_Param_Out_InputHandle);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Name);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_DataType);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetNodeInputData(Z_Param_Out_InputHandle,Z_Param_Out_Name,Z_Param_Out_DataType,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function GetNodeInputData

// Begin Class UMetaSoundBuilderBase Function GetNodeInputDefault
struct Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputDefault_Statics
{
	struct MetaSoundBuilderBase_eventGetNodeInputDefault_Parms
	{
		FMetaSoundBuilderNodeInputHandle InputHandle;
		EMetaSoundBuilderResult OutResult;
		FMetasoundFrontendLiteral ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Returns node input's literal value if set on graph, otherwise fails and returns default literal.\n" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderBase.h" },
		{ "ToolTip", "Returns node input's literal value if set on graph, otherwise fails and returns default literal." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Default" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputHandle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputDefault_Statics::NewProp_InputHandle = { "InputHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventGetNodeInputDefault_Parms, InputHandle), Z_Construct_UScriptStruct_FMetaSoundBuilderNodeInputHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputHandle_MetaData), NewProp_InputHandle_MetaData) }; // 943726435
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputDefault_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputDefault_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventGetNodeInputDefault_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 1238801088
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputDefault_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventGetNodeInputDefault_Parms, ReturnValue), Z_Construct_UScriptStruct_FMetasoundFrontendLiteral, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 1401040219
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputDefault_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputDefault_Statics::NewProp_InputHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputDefault_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputDefault_Statics::NewProp_OutResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputDefault_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputDefault_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "GetNodeInputDefault", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputDefault_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputDefault_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputDefault_Statics::MetaSoundBuilderBase_eventGetNodeInputDefault_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputDefault_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputDefault_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputDefault_Statics::MetaSoundBuilderBase_eventGetNodeInputDefault_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputDefault()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputDefault_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execGetNodeInputDefault)
{
	P_GET_STRUCT_REF(FMetaSoundBuilderNodeInputHandle,Z_Param_Out_InputHandle);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMetasoundFrontendLiteral*)Z_Param__Result=P_THIS->GetNodeInputDefault(Z_Param_Out_InputHandle,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function GetNodeInputDefault

// Begin Class UMetaSoundBuilderBase Function GetNodeInputIsConstructorPin
struct Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputIsConstructorPin_Statics
{
	struct MetaSoundBuilderBase_eventGetNodeInputIsConstructorPin_Parms
	{
		FMetaSoundBuilderNodeInputHandle InputHandle;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Returns whether the given node input is a constructor pin\n" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderBase.h" },
		{ "ToolTip", "Returns whether the given node input is a constructor pin" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Is Constructor Pin" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputHandle;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputIsConstructorPin_Statics::NewProp_InputHandle = { "InputHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventGetNodeInputIsConstructorPin_Parms, InputHandle), Z_Construct_UScriptStruct_FMetaSoundBuilderNodeInputHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputHandle_MetaData), NewProp_InputHandle_MetaData) }; // 943726435
void Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputIsConstructorPin_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MetaSoundBuilderBase_eventGetNodeInputIsConstructorPin_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputIsConstructorPin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MetaSoundBuilderBase_eventGetNodeInputIsConstructorPin_Parms), &Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputIsConstructorPin_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputIsConstructorPin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputIsConstructorPin_Statics::NewProp_InputHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputIsConstructorPin_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputIsConstructorPin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputIsConstructorPin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "GetNodeInputIsConstructorPin", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputIsConstructorPin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputIsConstructorPin_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputIsConstructorPin_Statics::MetaSoundBuilderBase_eventGetNodeInputIsConstructorPin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputIsConstructorPin_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputIsConstructorPin_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputIsConstructorPin_Statics::MetaSoundBuilderBase_eventGetNodeInputIsConstructorPin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputIsConstructorPin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputIsConstructorPin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execGetNodeInputIsConstructorPin)
{
	P_GET_STRUCT_REF(FMetaSoundBuilderNodeInputHandle,Z_Param_Out_InputHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetNodeInputIsConstructorPin(Z_Param_Out_InputHandle);
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function GetNodeInputIsConstructorPin

// Begin Class UMetaSoundBuilderBase Function GetNodeOutputData
struct Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeOutputData_Statics
{
	struct MetaSoundBuilderBase_eventGetNodeOutputData_Parms
	{
		FMetaSoundBuilderNodeOutputHandle OutputHandle;
		FName Name;
		FName DataType;
		EMetaSoundBuilderResult OutResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Returns node output's data if valid (including things like name and datatype).\n" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderBase.h" },
		{ "ToolTip", "Returns node output's data if valid (including things like name and datatype)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutputHandle;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DataType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeOutputData_Statics::NewProp_OutputHandle = { "OutputHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventGetNodeOutputData_Parms, OutputHandle), Z_Construct_UScriptStruct_FMetaSoundBuilderNodeOutputHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputHandle_MetaData), NewProp_OutputHandle_MetaData) }; // 731065117
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeOutputData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventGetNodeOutputData_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeOutputData_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventGetNodeOutputData_Parms, DataType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeOutputData_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeOutputData_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventGetNodeOutputData_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 1238801088
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeOutputData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeOutputData_Statics::NewProp_OutputHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeOutputData_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeOutputData_Statics::NewProp_DataType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeOutputData_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeOutputData_Statics::NewProp_OutResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeOutputData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeOutputData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "GetNodeOutputData", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeOutputData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeOutputData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeOutputData_Statics::MetaSoundBuilderBase_eventGetNodeOutputData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeOutputData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeOutputData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeOutputData_Statics::MetaSoundBuilderBase_eventGetNodeOutputData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeOutputData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeOutputData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execGetNodeOutputData)
{
	P_GET_STRUCT_REF(FMetaSoundBuilderNodeOutputHandle,Z_Param_Out_OutputHandle);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Name);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_DataType);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetNodeOutputData(Z_Param_Out_OutputHandle,Z_Param_Out_Name,Z_Param_Out_DataType,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function GetNodeOutputData

// Begin Class UMetaSoundBuilderBase Function GetNodeOutputIsConstructorPin
struct Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeOutputIsConstructorPin_Statics
{
	struct MetaSoundBuilderBase_eventGetNodeOutputIsConstructorPin_Parms
	{
		FMetaSoundBuilderNodeOutputHandle OutputHandle;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Returns whether the given node output is a constructor pin\n" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderBase.h" },
		{ "ToolTip", "Returns whether the given node output is a constructor pin" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Is Constructor Pin" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutputHandle;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeOutputIsConstructorPin_Statics::NewProp_OutputHandle = { "OutputHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventGetNodeOutputIsConstructorPin_Parms, OutputHandle), Z_Construct_UScriptStruct_FMetaSoundBuilderNodeOutputHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputHandle_MetaData), NewProp_OutputHandle_MetaData) }; // 731065117
void Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeOutputIsConstructorPin_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MetaSoundBuilderBase_eventGetNodeOutputIsConstructorPin_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeOutputIsConstructorPin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MetaSoundBuilderBase_eventGetNodeOutputIsConstructorPin_Parms), &Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeOutputIsConstructorPin_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeOutputIsConstructorPin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeOutputIsConstructorPin_Statics::NewProp_OutputHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeOutputIsConstructorPin_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeOutputIsConstructorPin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeOutputIsConstructorPin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "GetNodeOutputIsConstructorPin", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeOutputIsConstructorPin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeOutputIsConstructorPin_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeOutputIsConstructorPin_Statics::MetaSoundBuilderBase_eventGetNodeOutputIsConstructorPin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeOutputIsConstructorPin_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeOutputIsConstructorPin_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeOutputIsConstructorPin_Statics::MetaSoundBuilderBase_eventGetNodeOutputIsConstructorPin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeOutputIsConstructorPin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeOutputIsConstructorPin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execGetNodeOutputIsConstructorPin)
{
	P_GET_STRUCT_REF(FMetaSoundBuilderNodeOutputHandle,Z_Param_Out_OutputHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetNodeOutputIsConstructorPin(Z_Param_Out_OutputHandle);
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function GetNodeOutputIsConstructorPin

// Begin Class UMetaSoundBuilderBase Function GetReferencedPresetAsset
struct Z_Construct_UFunction_UMetaSoundBuilderBase_GetReferencedPresetAsset_Statics
{
	struct MetaSoundBuilderBase_eventGetReferencedPresetAsset_Parms
	{
		UObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Return the asset referenced by this preset builder. Returns nullptr if the builder is not a preset.\n" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderBase.h" },
		{ "ToolTip", "Return the asset referenced by this preset builder. Returns nullptr if the builder is not a preset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Referenced Preset" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_GetReferencedPresetAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventGetReferencedPresetAsset_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_GetReferencedPresetAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_GetReferencedPresetAsset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_GetReferencedPresetAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_GetReferencedPresetAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "GetReferencedPresetAsset", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_GetReferencedPresetAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_GetReferencedPresetAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_GetReferencedPresetAsset_Statics::MetaSoundBuilderBase_eventGetReferencedPresetAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_GetReferencedPresetAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_GetReferencedPresetAsset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_GetReferencedPresetAsset_Statics::MetaSoundBuilderBase_eventGetReferencedPresetAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_GetReferencedPresetAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_GetReferencedPresetAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execGetReferencedPresetAsset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UObject**)Z_Param__Result=P_THIS->GetReferencedPresetAsset();
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function GetReferencedPresetAsset

// Begin Class UMetaSoundBuilderBase Function GetRootGraphClassName
struct Z_Construct_UFunction_UMetaSoundBuilderBase_GetRootGraphClassName_Statics
{
	struct MetaSoundBuilderBase_eventGetRootGraphClassName_Parms
	{
		FMetasoundFrontendClassName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder|Advanced" },
		{ "Comment", "// Returns the MetaSound asset's graph class name (used by the MetaSound Node Class Registry)\n" },
		{ "DisplayName", "Get MetaSound Class Name" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderBase.h" },
		{ "ToolTip", "Returns the MetaSound asset's graph class name (used by the MetaSound Node Class Registry)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Class Name" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_GetRootGraphClassName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventGetRootGraphClassName_Parms, ReturnValue), Z_Construct_UScriptStruct_FMetasoundFrontendClassName, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 1123578214
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_GetRootGraphClassName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_GetRootGraphClassName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_GetRootGraphClassName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_GetRootGraphClassName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "GetRootGraphClassName", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_GetRootGraphClassName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_GetRootGraphClassName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_GetRootGraphClassName_Statics::MetaSoundBuilderBase_eventGetRootGraphClassName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_GetRootGraphClassName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_GetRootGraphClassName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_GetRootGraphClassName_Statics::MetaSoundBuilderBase_eventGetRootGraphClassName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_GetRootGraphClassName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_GetRootGraphClassName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execGetRootGraphClassName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMetasoundFrontendClassName*)Z_Param__Result=P_THIS->GetRootGraphClassName();
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function GetRootGraphClassName

// Begin Class UMetaSoundBuilderBase Function InterfaceIsDeclared
struct Z_Construct_UFunction_UMetaSoundBuilderBase_InterfaceIsDeclared_Statics
{
	struct MetaSoundBuilderBase_eventInterfaceIsDeclared_Parms
	{
		FName InterfaceName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Returns if a given interface is declared.\n" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderBase.h" },
		{ "ToolTip", "Returns if a given interface is declared." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Is Declared" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InterfaceName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_InterfaceIsDeclared_Statics::NewProp_InterfaceName = { "InterfaceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventInterfaceIsDeclared_Parms, InterfaceName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMetaSoundBuilderBase_InterfaceIsDeclared_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MetaSoundBuilderBase_eventInterfaceIsDeclared_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_InterfaceIsDeclared_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MetaSoundBuilderBase_eventInterfaceIsDeclared_Parms), &Z_Construct_UFunction_UMetaSoundBuilderBase_InterfaceIsDeclared_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_InterfaceIsDeclared_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_InterfaceIsDeclared_Statics::NewProp_InterfaceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_InterfaceIsDeclared_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_InterfaceIsDeclared_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_InterfaceIsDeclared_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "InterfaceIsDeclared", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_InterfaceIsDeclared_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_InterfaceIsDeclared_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_InterfaceIsDeclared_Statics::MetaSoundBuilderBase_eventInterfaceIsDeclared_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_InterfaceIsDeclared_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_InterfaceIsDeclared_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_InterfaceIsDeclared_Statics::MetaSoundBuilderBase_eventInterfaceIsDeclared_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_InterfaceIsDeclared()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_InterfaceIsDeclared_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execInterfaceIsDeclared)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InterfaceName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->InterfaceIsDeclared(Z_Param_InterfaceName);
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function InterfaceIsDeclared

// Begin Class UMetaSoundBuilderBase Function IsPreset
struct Z_Construct_UFunction_UMetaSoundBuilderBase_IsPreset_Statics
{
	struct MetaSoundBuilderBase_eventIsPreset_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Returns whether this is a preset.\n" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderBase.h" },
		{ "ToolTip", "Returns whether this is a preset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Is Preset" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMetaSoundBuilderBase_IsPreset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MetaSoundBuilderBase_eventIsPreset_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_IsPreset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MetaSoundBuilderBase_eventIsPreset_Parms), &Z_Construct_UFunction_UMetaSoundBuilderBase_IsPreset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_IsPreset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_IsPreset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_IsPreset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_IsPreset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "IsPreset", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_IsPreset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_IsPreset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_IsPreset_Statics::MetaSoundBuilderBase_eventIsPreset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_IsPreset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_IsPreset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_IsPreset_Statics::MetaSoundBuilderBase_eventIsPreset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_IsPreset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_IsPreset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execIsPreset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPreset();
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function IsPreset

// Begin Class UMetaSoundBuilderBase Function NodeInputIsConnected
struct Z_Construct_UFunction_UMetaSoundBuilderBase_NodeInputIsConnected_Statics
{
	struct MetaSoundBuilderBase_eventNodeInputIsConnected_Parms
	{
		FMetaSoundBuilderNodeInputHandle InputHandle;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Returns if a given node input has connections.\n" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderBase.h" },
		{ "ToolTip", "Returns if a given node input has connections." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Connected" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputHandle;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_NodeInputIsConnected_Statics::NewProp_InputHandle = { "InputHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventNodeInputIsConnected_Parms, InputHandle), Z_Construct_UScriptStruct_FMetaSoundBuilderNodeInputHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputHandle_MetaData), NewProp_InputHandle_MetaData) }; // 943726435
void Z_Construct_UFunction_UMetaSoundBuilderBase_NodeInputIsConnected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MetaSoundBuilderBase_eventNodeInputIsConnected_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_NodeInputIsConnected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MetaSoundBuilderBase_eventNodeInputIsConnected_Parms), &Z_Construct_UFunction_UMetaSoundBuilderBase_NodeInputIsConnected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_NodeInputIsConnected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_NodeInputIsConnected_Statics::NewProp_InputHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_NodeInputIsConnected_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_NodeInputIsConnected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_NodeInputIsConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "NodeInputIsConnected", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_NodeInputIsConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_NodeInputIsConnected_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_NodeInputIsConnected_Statics::MetaSoundBuilderBase_eventNodeInputIsConnected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_NodeInputIsConnected_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_NodeInputIsConnected_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_NodeInputIsConnected_Statics::MetaSoundBuilderBase_eventNodeInputIsConnected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_NodeInputIsConnected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_NodeInputIsConnected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execNodeInputIsConnected)
{
	P_GET_STRUCT_REF(FMetaSoundBuilderNodeInputHandle,Z_Param_Out_InputHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->NodeInputIsConnected(Z_Param_Out_InputHandle);
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function NodeInputIsConnected

// Begin Class UMetaSoundBuilderBase Function NodeOutputIsConnected
struct Z_Construct_UFunction_UMetaSoundBuilderBase_NodeOutputIsConnected_Statics
{
	struct MetaSoundBuilderBase_eventNodeOutputIsConnected_Parms
	{
		FMetaSoundBuilderNodeOutputHandle OutputHandle;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Returns if a given node output is connected.\n" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderBase.h" },
		{ "ToolTip", "Returns if a given node output is connected." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Connected" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutputHandle;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_NodeOutputIsConnected_Statics::NewProp_OutputHandle = { "OutputHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventNodeOutputIsConnected_Parms, OutputHandle), Z_Construct_UScriptStruct_FMetaSoundBuilderNodeOutputHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputHandle_MetaData), NewProp_OutputHandle_MetaData) }; // 731065117
void Z_Construct_UFunction_UMetaSoundBuilderBase_NodeOutputIsConnected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MetaSoundBuilderBase_eventNodeOutputIsConnected_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_NodeOutputIsConnected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MetaSoundBuilderBase_eventNodeOutputIsConnected_Parms), &Z_Construct_UFunction_UMetaSoundBuilderBase_NodeOutputIsConnected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_NodeOutputIsConnected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_NodeOutputIsConnected_Statics::NewProp_OutputHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_NodeOutputIsConnected_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_NodeOutputIsConnected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_NodeOutputIsConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "NodeOutputIsConnected", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_NodeOutputIsConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_NodeOutputIsConnected_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_NodeOutputIsConnected_Statics::MetaSoundBuilderBase_eventNodeOutputIsConnected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_NodeOutputIsConnected_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_NodeOutputIsConnected_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_NodeOutputIsConnected_Statics::MetaSoundBuilderBase_eventNodeOutputIsConnected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_NodeOutputIsConnected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_NodeOutputIsConnected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execNodeOutputIsConnected)
{
	P_GET_STRUCT_REF(FMetaSoundBuilderNodeOutputHandle,Z_Param_Out_OutputHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->NodeOutputIsConnected(Z_Param_Out_OutputHandle);
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function NodeOutputIsConnected

// Begin Class UMetaSoundBuilderBase Function NodesAreConnected
struct Z_Construct_UFunction_UMetaSoundBuilderBase_NodesAreConnected_Statics
{
	struct MetaSoundBuilderBase_eventNodesAreConnected_Parms
	{
		FMetaSoundBuilderNodeOutputHandle OutputHandle;
		FMetaSoundBuilderNodeInputHandle InputHandle;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Returns if a given node output and node input are connected.\n" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderBase.h" },
		{ "ToolTip", "Returns if a given node output and node input are connected." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Connected" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutputHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputHandle;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_NodesAreConnected_Statics::NewProp_OutputHandle = { "OutputHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventNodesAreConnected_Parms, OutputHandle), Z_Construct_UScriptStruct_FMetaSoundBuilderNodeOutputHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputHandle_MetaData), NewProp_OutputHandle_MetaData) }; // 731065117
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_NodesAreConnected_Statics::NewProp_InputHandle = { "InputHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventNodesAreConnected_Parms, InputHandle), Z_Construct_UScriptStruct_FMetaSoundBuilderNodeInputHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputHandle_MetaData), NewProp_InputHandle_MetaData) }; // 943726435
void Z_Construct_UFunction_UMetaSoundBuilderBase_NodesAreConnected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MetaSoundBuilderBase_eventNodesAreConnected_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_NodesAreConnected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MetaSoundBuilderBase_eventNodesAreConnected_Parms), &Z_Construct_UFunction_UMetaSoundBuilderBase_NodesAreConnected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_NodesAreConnected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_NodesAreConnected_Statics::NewProp_OutputHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_NodesAreConnected_Statics::NewProp_InputHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_NodesAreConnected_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_NodesAreConnected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_NodesAreConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "NodesAreConnected", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_NodesAreConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_NodesAreConnected_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_NodesAreConnected_Statics::MetaSoundBuilderBase_eventNodesAreConnected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_NodesAreConnected_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_NodesAreConnected_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_NodesAreConnected_Statics::MetaSoundBuilderBase_eventNodesAreConnected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_NodesAreConnected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_NodesAreConnected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execNodesAreConnected)
{
	P_GET_STRUCT_REF(FMetaSoundBuilderNodeOutputHandle,Z_Param_Out_OutputHandle);
	P_GET_STRUCT_REF(FMetaSoundBuilderNodeInputHandle,Z_Param_Out_InputHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->NodesAreConnected(Z_Param_Out_OutputHandle,Z_Param_Out_InputHandle);
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function NodesAreConnected

// Begin Class UMetaSoundBuilderBase Function RemoveGraphInput
struct Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveGraphInput_Statics
{
	struct MetaSoundBuilderBase_eventRemoveGraphInput_Parms
	{
		FName Name;
		EMetaSoundBuilderResult OutResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Removes graph input if it exists; sets result to succeeded if it was removed and failed if it was not.\n" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderBase.h" },
		{ "ToolTip", "Removes graph input if it exists; sets result to succeeded if it was removed and failed if it was not." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveGraphInput_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventRemoveGraphInput_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveGraphInput_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveGraphInput_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventRemoveGraphInput_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 1238801088
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveGraphInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveGraphInput_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveGraphInput_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveGraphInput_Statics::NewProp_OutResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveGraphInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveGraphInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "RemoveGraphInput", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveGraphInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveGraphInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveGraphInput_Statics::MetaSoundBuilderBase_eventRemoveGraphInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveGraphInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveGraphInput_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveGraphInput_Statics::MetaSoundBuilderBase_eventRemoveGraphInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveGraphInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveGraphInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execRemoveGraphInput)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveGraphInput(Z_Param_Name,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function RemoveGraphInput

// Begin Class UMetaSoundBuilderBase Function RemoveGraphOutput
struct Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveGraphOutput_Statics
{
	struct MetaSoundBuilderBase_eventRemoveGraphOutput_Parms
	{
		FName Name;
		EMetaSoundBuilderResult OutResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Removes graph output if it exists; sets result to succeeded if it was removed and failed if it was not.\n" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderBase.h" },
		{ "ToolTip", "Removes graph output if it exists; sets result to succeeded if it was removed and failed if it was not." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveGraphOutput_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventRemoveGraphOutput_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveGraphOutput_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveGraphOutput_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventRemoveGraphOutput_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 1238801088
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveGraphOutput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveGraphOutput_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveGraphOutput_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveGraphOutput_Statics::NewProp_OutResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveGraphOutput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveGraphOutput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "RemoveGraphOutput", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveGraphOutput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveGraphOutput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveGraphOutput_Statics::MetaSoundBuilderBase_eventRemoveGraphOutput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveGraphOutput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveGraphOutput_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveGraphOutput_Statics::MetaSoundBuilderBase_eventRemoveGraphOutput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveGraphOutput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveGraphOutput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execRemoveGraphOutput)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveGraphOutput(Z_Param_Name,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function RemoveGraphOutput

// Begin Class UMetaSoundBuilderBase Function RemoveInterface
struct Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveInterface_Statics
{
	struct MetaSoundBuilderBase_eventRemoveInterface_Parms
	{
		FName InterfaceName;
		EMetaSoundBuilderResult OutResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Removes the interface with the given name from the builder's MetaSound. Removes any graph inputs\n// and outputs associated with the given interface and their respective connections (if any).\n" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderBase.h" },
		{ "ToolTip", "Removes the interface with the given name from the builder's MetaSound. Removes any graph inputs\nand outputs associated with the given interface and their respective connections (if any)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InterfaceName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveInterface_Statics::NewProp_InterfaceName = { "InterfaceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventRemoveInterface_Parms, InterfaceName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveInterface_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveInterface_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventRemoveInterface_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 1238801088
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveInterface_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveInterface_Statics::NewProp_InterfaceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveInterface_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveInterface_Statics::NewProp_OutResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveInterface_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "RemoveInterface", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveInterface_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveInterface_Statics::MetaSoundBuilderBase_eventRemoveInterface_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveInterface_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveInterface_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveInterface_Statics::MetaSoundBuilderBase_eventRemoveInterface_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveInterface()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveInterface_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execRemoveInterface)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InterfaceName);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveInterface(Z_Param_InterfaceName,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function RemoveInterface

// Begin Class UMetaSoundBuilderBase Function RemoveNode
struct Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveNode_Statics
{
	struct MetaSoundBuilderBase_eventRemoveNode_Parms
	{
		FMetaSoundNodeHandle NodeHandle;
		EMetaSoundBuilderResult OutResult;
		bool bRemoveUnusedDependencies;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Removes node and any associated connections from the builder's MetaSound. (Advanced) Optionally, remove unused dependencies\n// from the internal dependendency list on successful removal of node.\n" },
		{ "CPP_Default_bRemoveUnusedDependencies", "true" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderBase.h" },
		{ "ToolTip", "Removes node and any associated connections from the builder's MetaSound. (Advanced) Optionally, remove unused dependencies\nfrom the internal dependendency list on successful removal of node." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeHandle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static void NewProp_bRemoveUnusedDependencies_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveUnusedDependencies;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveNode_Statics::NewProp_NodeHandle = { "NodeHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventRemoveNode_Parms, NodeHandle), Z_Construct_UScriptStruct_FMetaSoundNodeHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeHandle_MetaData), NewProp_NodeHandle_MetaData) }; // 2128061789
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveNode_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveNode_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventRemoveNode_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 1238801088
void Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveNode_Statics::NewProp_bRemoveUnusedDependencies_SetBit(void* Obj)
{
	((MetaSoundBuilderBase_eventRemoveNode_Parms*)Obj)->bRemoveUnusedDependencies = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveNode_Statics::NewProp_bRemoveUnusedDependencies = { "bRemoveUnusedDependencies", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MetaSoundBuilderBase_eventRemoveNode_Parms), &Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveNode_Statics::NewProp_bRemoveUnusedDependencies_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveNode_Statics::NewProp_NodeHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveNode_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveNode_Statics::NewProp_OutResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveNode_Statics::NewProp_bRemoveUnusedDependencies,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "RemoveNode", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveNode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveNode_Statics::MetaSoundBuilderBase_eventRemoveNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveNode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveNode_Statics::MetaSoundBuilderBase_eventRemoveNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execRemoveNode)
{
	P_GET_STRUCT_REF(FMetaSoundNodeHandle,Z_Param_Out_NodeHandle);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_GET_UBOOL(Z_Param_bRemoveUnusedDependencies);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveNode(Z_Param_Out_NodeHandle,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult),Z_Param_bRemoveUnusedDependencies);
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function RemoveNode

// Begin Class UMetaSoundBuilderBase Function RemoveNodeInputDefault
struct Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveNodeInputDefault_Statics
{
	struct MetaSoundBuilderBase_eventRemoveNodeInputDefault_Parms
	{
		FMetaSoundBuilderNodeInputHandle InputHandle;
		EMetaSoundBuilderResult OutResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Removes node input literal default if set, reverting the value to be whatever the node class defaults the value to.\n// Returns success if value was removed, false if not removed (i.e. wasn't set to begin with).\n" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderBase.h" },
		{ "ToolTip", "Removes node input literal default if set, reverting the value to be whatever the node class defaults the value to.\nReturns success if value was removed, false if not removed (i.e. wasn't set to begin with)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputHandle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveNodeInputDefault_Statics::NewProp_InputHandle = { "InputHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventRemoveNodeInputDefault_Parms, InputHandle), Z_Construct_UScriptStruct_FMetaSoundBuilderNodeInputHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputHandle_MetaData), NewProp_InputHandle_MetaData) }; // 943726435
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveNodeInputDefault_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveNodeInputDefault_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventRemoveNodeInputDefault_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 1238801088
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveNodeInputDefault_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveNodeInputDefault_Statics::NewProp_InputHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveNodeInputDefault_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveNodeInputDefault_Statics::NewProp_OutResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveNodeInputDefault_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveNodeInputDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "RemoveNodeInputDefault", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveNodeInputDefault_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveNodeInputDefault_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveNodeInputDefault_Statics::MetaSoundBuilderBase_eventRemoveNodeInputDefault_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveNodeInputDefault_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveNodeInputDefault_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveNodeInputDefault_Statics::MetaSoundBuilderBase_eventRemoveNodeInputDefault_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveNodeInputDefault()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveNodeInputDefault_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execRemoveNodeInputDefault)
{
	P_GET_STRUCT_REF(FMetaSoundBuilderNodeInputHandle,Z_Param_Out_InputHandle);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveNodeInputDefault(Z_Param_Out_InputHandle,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function RemoveNodeInputDefault

// Begin Class UMetaSoundBuilderBase Function RemoveUnusedDependencies
struct Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveUnusedDependencies_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Removes dependencies in document that are no longer referenced by nodes\n" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderBase.h" },
		{ "ToolTip", "Removes dependencies in document that are no longer referenced by nodes" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveUnusedDependencies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "RemoveUnusedDependencies", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveUnusedDependencies_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveUnusedDependencies_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveUnusedDependencies()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveUnusedDependencies_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execRemoveUnusedDependencies)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveUnusedDependencies();
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function RemoveUnusedDependencies

// Begin Class UMetaSoundBuilderBase Function SetGraphInputAccessType
struct Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputAccessType_Statics
{
	struct MetaSoundBuilderBase_eventSetGraphInputAccessType_Parms
	{
		FName InputName;
		EMetasoundFrontendVertexAccessType AccessType;
		EMetaSoundBuilderResult OutResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Disconnects the given graph input's respective template nodes and sets the graph input's AccessType should it not match the current AccessType.\n// Result succeeds if the AccessType was successfully changed or if the provided AccessType is already the input's current AccessType.\n" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderBase.h" },
		{ "ToolTip", "Disconnects the given graph input's respective template nodes and sets the graph input's AccessType should it not match the current AccessType.\nResult succeeds if the AccessType was successfully changed or if the provided AccessType is already the input's current AccessType." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InputName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AccessType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AccessType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputAccessType_Statics::NewProp_InputName = { "InputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventSetGraphInputAccessType_Parms, InputName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputAccessType_Statics::NewProp_AccessType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputAccessType_Statics::NewProp_AccessType = { "AccessType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventSetGraphInputAccessType_Parms, AccessType), Z_Construct_UEnum_MetasoundFrontend_EMetasoundFrontendVertexAccessType, METADATA_PARAMS(0, nullptr) }; // 2298378053
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputAccessType_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputAccessType_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventSetGraphInputAccessType_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 1238801088
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputAccessType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputAccessType_Statics::NewProp_InputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputAccessType_Statics::NewProp_AccessType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputAccessType_Statics::NewProp_AccessType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputAccessType_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputAccessType_Statics::NewProp_OutResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputAccessType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputAccessType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "SetGraphInputAccessType", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputAccessType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputAccessType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputAccessType_Statics::MetaSoundBuilderBase_eventSetGraphInputAccessType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputAccessType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputAccessType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputAccessType_Statics::MetaSoundBuilderBase_eventSetGraphInputAccessType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputAccessType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputAccessType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execSetGraphInputAccessType)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InputName);
	P_GET_ENUM(EMetasoundFrontendVertexAccessType,Z_Param_AccessType);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGraphInputAccessType(Z_Param_InputName,EMetasoundFrontendVertexAccessType(Z_Param_AccessType),(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function SetGraphInputAccessType

// Begin Class UMetaSoundBuilderBase Function SetGraphInputDataType
struct Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputDataType_Statics
{
	struct MetaSoundBuilderBase_eventSetGraphInputDataType_Parms
	{
		FName InputName;
		FName DataType;
		EMetaSoundBuilderResult OutResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Disconnects the given graph input's respective template nodes and sets the graph input's DataType should it not match the current DataType.\n// Result succeeds if the DataType was successfully changed or if the provided DataType is already the input's current DataType.\n" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderBase.h" },
		{ "ToolTip", "Disconnects the given graph input's respective template nodes and sets the graph input's DataType should it not match the current DataType.\nResult succeeds if the DataType was successfully changed or if the provided DataType is already the input's current DataType." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InputName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DataType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputDataType_Statics::NewProp_InputName = { "InputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventSetGraphInputDataType_Parms, InputName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputDataType_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventSetGraphInputDataType_Parms, DataType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputDataType_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputDataType_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventSetGraphInputDataType_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 1238801088
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputDataType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputDataType_Statics::NewProp_InputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputDataType_Statics::NewProp_DataType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputDataType_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputDataType_Statics::NewProp_OutResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputDataType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputDataType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "SetGraphInputDataType", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputDataType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputDataType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputDataType_Statics::MetaSoundBuilderBase_eventSetGraphInputDataType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputDataType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputDataType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputDataType_Statics::MetaSoundBuilderBase_eventSetGraphInputDataType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputDataType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputDataType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execSetGraphInputDataType)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InputName);
	P_GET_PROPERTY(FNameProperty,Z_Param_DataType);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGraphInputDataType(Z_Param_InputName,Z_Param_DataType,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function SetGraphInputDataType

// Begin Class UMetaSoundBuilderBase Function SetGraphInputDefault
struct Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputDefault_Statics
{
	struct MetaSoundBuilderBase_eventSetGraphInputDefault_Parms
	{
		FName InputName;
		FMetasoundFrontendLiteral Literal;
		EMetaSoundBuilderResult OutResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Sets the input node's default value, overriding the default provided by the referenced graph if the graph is a preset.\n" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderBase.h" },
		{ "ToolTip", "Sets the input node's default value, overriding the default provided by the referenced graph if the graph is a preset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Literal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InputName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Literal;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputDefault_Statics::NewProp_InputName = { "InputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventSetGraphInputDefault_Parms, InputName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputDefault_Statics::NewProp_Literal = { "Literal", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventSetGraphInputDefault_Parms, Literal), Z_Construct_UScriptStruct_FMetasoundFrontendLiteral, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Literal_MetaData), NewProp_Literal_MetaData) }; // 1401040219
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputDefault_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputDefault_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventSetGraphInputDefault_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 1238801088
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputDefault_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputDefault_Statics::NewProp_InputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputDefault_Statics::NewProp_Literal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputDefault_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputDefault_Statics::NewProp_OutResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputDefault_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "SetGraphInputDefault", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputDefault_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputDefault_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputDefault_Statics::MetaSoundBuilderBase_eventSetGraphInputDefault_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputDefault_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputDefault_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputDefault_Statics::MetaSoundBuilderBase_eventSetGraphInputDefault_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputDefault()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputDefault_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execSetGraphInputDefault)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InputName);
	P_GET_STRUCT_REF(FMetasoundFrontendLiteral,Z_Param_Out_Literal);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGraphInputDefault(Z_Param_InputName,Z_Param_Out_Literal,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function SetGraphInputDefault

// Begin Class UMetaSoundBuilderBase Function SetGraphInputName
struct Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputName_Statics
{
	struct MetaSoundBuilderBase_eventSetGraphInputName_Parms
	{
		FName InputName;
		FName NewName;
		EMetaSoundBuilderResult OutResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Sets the given graph input's name to the new name. \n// Result succeeds if the name was successfully changed or the new name is the same as the old name, and fails if the given input name doesn't exist.\n" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderBase.h" },
		{ "ToolTip", "Sets the given graph input's name to the new name.\nResult succeeds if the name was successfully changed or the new name is the same as the old name, and fails if the given input name doesn't exist." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InputName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NewName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputName_Statics::NewProp_InputName = { "InputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventSetGraphInputName_Parms, InputName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputName_Statics::NewProp_NewName = { "NewName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventSetGraphInputName_Parms, NewName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputName_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputName_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventSetGraphInputName_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 1238801088
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputName_Statics::NewProp_InputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputName_Statics::NewProp_NewName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputName_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputName_Statics::NewProp_OutResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "SetGraphInputName", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputName_Statics::MetaSoundBuilderBase_eventSetGraphInputName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputName_Statics::MetaSoundBuilderBase_eventSetGraphInputName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execSetGraphInputName)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InputName);
	P_GET_PROPERTY(FNameProperty,Z_Param_NewName);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGraphInputName(Z_Param_InputName,Z_Param_NewName,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function SetGraphInputName

// Begin Class UMetaSoundBuilderBase Function SetGraphOutputAccessType
struct Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphOutputAccessType_Statics
{
	struct MetaSoundBuilderBase_eventSetGraphOutputAccessType_Parms
	{
		FName OutputName;
		EMetasoundFrontendVertexAccessType AccessType;
		EMetaSoundBuilderResult OutResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Disconnects the given graph output's respective template nodes and sets the graph output's AccessType should it not match the current AccessType.\n// Result succeeds if the AccessType was successfully changed or if the provided AccessType is already the output's current AccessType.\n" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderBase.h" },
		{ "ToolTip", "Disconnects the given graph output's respective template nodes and sets the graph output's AccessType should it not match the current AccessType.\nResult succeeds if the AccessType was successfully changed or if the provided AccessType is already the output's current AccessType." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_OutputName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AccessType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AccessType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphOutputAccessType_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventSetGraphOutputAccessType_Parms, OutputName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphOutputAccessType_Statics::NewProp_AccessType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphOutputAccessType_Statics::NewProp_AccessType = { "AccessType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventSetGraphOutputAccessType_Parms, AccessType), Z_Construct_UEnum_MetasoundFrontend_EMetasoundFrontendVertexAccessType, METADATA_PARAMS(0, nullptr) }; // 2298378053
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphOutputAccessType_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphOutputAccessType_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventSetGraphOutputAccessType_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 1238801088
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphOutputAccessType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphOutputAccessType_Statics::NewProp_OutputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphOutputAccessType_Statics::NewProp_AccessType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphOutputAccessType_Statics::NewProp_AccessType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphOutputAccessType_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphOutputAccessType_Statics::NewProp_OutResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphOutputAccessType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphOutputAccessType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "SetGraphOutputAccessType", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphOutputAccessType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphOutputAccessType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphOutputAccessType_Statics::MetaSoundBuilderBase_eventSetGraphOutputAccessType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphOutputAccessType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphOutputAccessType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphOutputAccessType_Statics::MetaSoundBuilderBase_eventSetGraphOutputAccessType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphOutputAccessType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphOutputAccessType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execSetGraphOutputAccessType)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_OutputName);
	P_GET_ENUM(EMetasoundFrontendVertexAccessType,Z_Param_AccessType);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGraphOutputAccessType(Z_Param_OutputName,EMetasoundFrontendVertexAccessType(Z_Param_AccessType),(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function SetGraphOutputAccessType

// Begin Class UMetaSoundBuilderBase Function SetGraphOutputDataType
struct Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphOutputDataType_Statics
{
	struct MetaSoundBuilderBase_eventSetGraphOutputDataType_Parms
	{
		FName OutputName;
		FName DataType;
		EMetaSoundBuilderResult OutResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Disconnects the given graph output's respective template nodes and sets the graph output's DataType should it not match the current DataType.\n// Result succeeds if the DataType was successfully changed or if the provided DataType is already the output's current DataType.\n" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderBase.h" },
		{ "ToolTip", "Disconnects the given graph output's respective template nodes and sets the graph output's DataType should it not match the current DataType.\nResult succeeds if the DataType was successfully changed or if the provided DataType is already the output's current DataType." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_OutputName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DataType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphOutputDataType_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventSetGraphOutputDataType_Parms, OutputName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphOutputDataType_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventSetGraphOutputDataType_Parms, DataType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphOutputDataType_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphOutputDataType_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventSetGraphOutputDataType_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 1238801088
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphOutputDataType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphOutputDataType_Statics::NewProp_OutputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphOutputDataType_Statics::NewProp_DataType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphOutputDataType_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphOutputDataType_Statics::NewProp_OutResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphOutputDataType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphOutputDataType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "SetGraphOutputDataType", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphOutputDataType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphOutputDataType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphOutputDataType_Statics::MetaSoundBuilderBase_eventSetGraphOutputDataType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphOutputDataType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphOutputDataType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphOutputDataType_Statics::MetaSoundBuilderBase_eventSetGraphOutputDataType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphOutputDataType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphOutputDataType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execSetGraphOutputDataType)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_OutputName);
	P_GET_PROPERTY(FNameProperty,Z_Param_DataType);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGraphOutputDataType(Z_Param_OutputName,Z_Param_DataType,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function SetGraphOutputDataType

// Begin Class UMetaSoundBuilderBase Function SetGraphOutputName
struct Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphOutputName_Statics
{
	struct MetaSoundBuilderBase_eventSetGraphOutputName_Parms
	{
		FName OutputName;
		FName NewName;
		EMetaSoundBuilderResult OutResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Sets the given graph output's name to the new name. \n// Result succeeds if the name was successfully changed or the new name is the same as the old name, and fails if the given output name doesn't exist.\n" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderBase.h" },
		{ "ToolTip", "Sets the given graph output's name to the new name.\nResult succeeds if the name was successfully changed or the new name is the same as the old name, and fails if the given output name doesn't exist." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_OutputName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NewName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphOutputName_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventSetGraphOutputName_Parms, OutputName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphOutputName_Statics::NewProp_NewName = { "NewName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventSetGraphOutputName_Parms, NewName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphOutputName_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphOutputName_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventSetGraphOutputName_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 1238801088
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphOutputName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphOutputName_Statics::NewProp_OutputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphOutputName_Statics::NewProp_NewName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphOutputName_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphOutputName_Statics::NewProp_OutResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphOutputName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphOutputName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "SetGraphOutputName", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphOutputName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphOutputName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphOutputName_Statics::MetaSoundBuilderBase_eventSetGraphOutputName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphOutputName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphOutputName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphOutputName_Statics::MetaSoundBuilderBase_eventSetGraphOutputName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphOutputName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphOutputName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execSetGraphOutputName)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_OutputName);
	P_GET_PROPERTY(FNameProperty,Z_Param_NewName);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGraphOutputName(Z_Param_OutputName,Z_Param_NewName,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function SetGraphOutputName

// Begin Class UMetaSoundBuilderBase Function SetNodeInputDefault
struct Z_Construct_UFunction_UMetaSoundBuilderBase_SetNodeInputDefault_Statics
{
	struct MetaSoundBuilderBase_eventSetNodeInputDefault_Parms
	{
		FMetaSoundBuilderNodeInputHandle NodeInputHandle;
		FMetasoundFrontendLiteral Literal;
		EMetaSoundBuilderResult OutResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Sets the node's input default value (used if no connection to the given node input is present)\n" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderBase.h" },
		{ "ToolTip", "Sets the node's input default value (used if no connection to the given node input is present)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeInputHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Literal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeInputHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Literal;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_SetNodeInputDefault_Statics::NewProp_NodeInputHandle = { "NodeInputHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventSetNodeInputDefault_Parms, NodeInputHandle), Z_Construct_UScriptStruct_FMetaSoundBuilderNodeInputHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeInputHandle_MetaData), NewProp_NodeInputHandle_MetaData) }; // 943726435
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_SetNodeInputDefault_Statics::NewProp_Literal = { "Literal", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventSetNodeInputDefault_Parms, Literal), Z_Construct_UScriptStruct_FMetasoundFrontendLiteral, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Literal_MetaData), NewProp_Literal_MetaData) }; // 1401040219
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_SetNodeInputDefault_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_SetNodeInputDefault_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventSetNodeInputDefault_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 1238801088
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_SetNodeInputDefault_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_SetNodeInputDefault_Statics::NewProp_NodeInputHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_SetNodeInputDefault_Statics::NewProp_Literal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_SetNodeInputDefault_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_SetNodeInputDefault_Statics::NewProp_OutResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_SetNodeInputDefault_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_SetNodeInputDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "SetNodeInputDefault", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_SetNodeInputDefault_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_SetNodeInputDefault_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_SetNodeInputDefault_Statics::MetaSoundBuilderBase_eventSetNodeInputDefault_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_SetNodeInputDefault_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_SetNodeInputDefault_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_SetNodeInputDefault_Statics::MetaSoundBuilderBase_eventSetNodeInputDefault_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_SetNodeInputDefault()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_SetNodeInputDefault_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execSetNodeInputDefault)
{
	P_GET_STRUCT_REF(FMetaSoundBuilderNodeInputHandle,Z_Param_Out_NodeInputHandle);
	P_GET_STRUCT_REF(FMetasoundFrontendLiteral,Z_Param_Out_Literal);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetNodeInputDefault(Z_Param_Out_NodeInputHandle,Z_Param_Out_Literal,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function SetNodeInputDefault

// Begin Class UMetaSoundBuilderBase
void UMetaSoundBuilderBase::StaticRegisterNativesUMetaSoundBuilderBase()
{
	UClass* Class = UMetaSoundBuilderBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddGraphInputNode", &UMetaSoundBuilderBase::execAddGraphInputNode },
		{ "AddGraphOutputNode", &UMetaSoundBuilderBase::execAddGraphOutputNode },
		{ "AddInterface", &UMetaSoundBuilderBase::execAddInterface },
		{ "AddNode", &UMetaSoundBuilderBase::execAddNode },
		{ "AddNodeByClassName", &UMetaSoundBuilderBase::execAddNodeByClassName },
		{ "Build", &UMetaSoundBuilderBase::execBuild },
		{ "BuildAndOverwriteMetaSound", &UMetaSoundBuilderBase::execBuildAndOverwriteMetaSound },
		{ "BuildNewMetaSound", &UMetaSoundBuilderBase::execBuildNewMetaSound },
		{ "ConnectNodeInputsToMatchingGraphInterfaceInputs", &UMetaSoundBuilderBase::execConnectNodeInputsToMatchingGraphInterfaceInputs },
		{ "ConnectNodeInputToGraphInput", &UMetaSoundBuilderBase::execConnectNodeInputToGraphInput },
		{ "ConnectNodeOutputsToMatchingGraphInterfaceOutputs", &UMetaSoundBuilderBase::execConnectNodeOutputsToMatchingGraphInterfaceOutputs },
		{ "ConnectNodeOutputToGraphOutput", &UMetaSoundBuilderBase::execConnectNodeOutputToGraphOutput },
		{ "ConnectNodes", &UMetaSoundBuilderBase::execConnectNodes },
		{ "ConnectNodesByInterfaceBindings", &UMetaSoundBuilderBase::execConnectNodesByInterfaceBindings },
		{ "ContainsNode", &UMetaSoundBuilderBase::execContainsNode },
		{ "ContainsNodeInput", &UMetaSoundBuilderBase::execContainsNodeInput },
		{ "ContainsNodeOutput", &UMetaSoundBuilderBase::execContainsNodeOutput },
		{ "ConvertFromPreset", &UMetaSoundBuilderBase::execConvertFromPreset },
		{ "ConvertToPreset", &UMetaSoundBuilderBase::execConvertToPreset },
		{ "DisconnectNodeInput", &UMetaSoundBuilderBase::execDisconnectNodeInput },
		{ "DisconnectNodeOutput", &UMetaSoundBuilderBase::execDisconnectNodeOutput },
		{ "DisconnectNodes", &UMetaSoundBuilderBase::execDisconnectNodes },
		{ "DisconnectNodesByInterfaceBindings", &UMetaSoundBuilderBase::execDisconnectNodesByInterfaceBindings },
		{ "FindGraphInputNode", &UMetaSoundBuilderBase::execFindGraphInputNode },
		{ "FindGraphOutputNode", &UMetaSoundBuilderBase::execFindGraphOutputNode },
		{ "FindInterfaceInputNodes", &UMetaSoundBuilderBase::execFindInterfaceInputNodes },
		{ "FindInterfaceOutputNodes", &UMetaSoundBuilderBase::execFindInterfaceOutputNodes },
		{ "FindNodeClassVersion", &UMetaSoundBuilderBase::execFindNodeClassVersion },
		{ "FindNodeInputByName", &UMetaSoundBuilderBase::execFindNodeInputByName },
		{ "FindNodeInputParent", &UMetaSoundBuilderBase::execFindNodeInputParent },
		{ "FindNodeInputs", &UMetaSoundBuilderBase::execFindNodeInputs },
		{ "FindNodeInputsByDataType", &UMetaSoundBuilderBase::execFindNodeInputsByDataType },
		{ "FindNodeOutputByName", &UMetaSoundBuilderBase::execFindNodeOutputByName },
		{ "FindNodeOutputParent", &UMetaSoundBuilderBase::execFindNodeOutputParent },
		{ "FindNodeOutputs", &UMetaSoundBuilderBase::execFindNodeOutputs },
		{ "FindNodeOutputsByDataType", &UMetaSoundBuilderBase::execFindNodeOutputsByDataType },
		{ "GetNodeInputClassDefault", &UMetaSoundBuilderBase::execGetNodeInputClassDefault },
		{ "GetNodeInputData", &UMetaSoundBuilderBase::execGetNodeInputData },
		{ "GetNodeInputDefault", &UMetaSoundBuilderBase::execGetNodeInputDefault },
		{ "GetNodeInputIsConstructorPin", &UMetaSoundBuilderBase::execGetNodeInputIsConstructorPin },
		{ "GetNodeOutputData", &UMetaSoundBuilderBase::execGetNodeOutputData },
		{ "GetNodeOutputIsConstructorPin", &UMetaSoundBuilderBase::execGetNodeOutputIsConstructorPin },
		{ "GetReferencedPresetAsset", &UMetaSoundBuilderBase::execGetReferencedPresetAsset },
		{ "GetRootGraphClassName", &UMetaSoundBuilderBase::execGetRootGraphClassName },
		{ "InterfaceIsDeclared", &UMetaSoundBuilderBase::execInterfaceIsDeclared },
		{ "IsPreset", &UMetaSoundBuilderBase::execIsPreset },
		{ "NodeInputIsConnected", &UMetaSoundBuilderBase::execNodeInputIsConnected },
		{ "NodeOutputIsConnected", &UMetaSoundBuilderBase::execNodeOutputIsConnected },
		{ "NodesAreConnected", &UMetaSoundBuilderBase::execNodesAreConnected },
		{ "RemoveGraphInput", &UMetaSoundBuilderBase::execRemoveGraphInput },
		{ "RemoveGraphOutput", &UMetaSoundBuilderBase::execRemoveGraphOutput },
		{ "RemoveInterface", &UMetaSoundBuilderBase::execRemoveInterface },
		{ "RemoveNode", &UMetaSoundBuilderBase::execRemoveNode },
		{ "RemoveNodeInputDefault", &UMetaSoundBuilderBase::execRemoveNodeInputDefault },
		{ "RemoveUnusedDependencies", &UMetaSoundBuilderBase::execRemoveUnusedDependencies },
		{ "SetGraphInputAccessType", &UMetaSoundBuilderBase::execSetGraphInputAccessType },
		{ "SetGraphInputDataType", &UMetaSoundBuilderBase::execSetGraphInputDataType },
		{ "SetGraphInputDefault", &UMetaSoundBuilderBase::execSetGraphInputDefault },
		{ "SetGraphInputName", &UMetaSoundBuilderBase::execSetGraphInputName },
		{ "SetGraphOutputAccessType", &UMetaSoundBuilderBase::execSetGraphOutputAccessType },
		{ "SetGraphOutputDataType", &UMetaSoundBuilderBase::execSetGraphOutputDataType },
		{ "SetGraphOutputName", &UMetaSoundBuilderBase::execSetGraphOutputName },
		{ "SetNodeInputDefault", &UMetaSoundBuilderBase::execSetNodeInputDefault },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMetaSoundBuilderBase);
UClass* Z_Construct_UClass_UMetaSoundBuilderBase_NoRegister()
{
	return UMetaSoundBuilderBase::StaticClass();
}
struct Z_Construct_UClass_UMetaSoundBuilderBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Base implementation of MetaSound builder */" },
		{ "DisplayName", "MetaSound Builder Base" },
		{ "IncludePath", "MetasoundBuilderBase.h" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderBase.h" },
		{ "ToolTip", "Base implementation of MetaSound builder" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Builder_MetaData[] = {
		{ "ModuleRelativePath", "Public/MetasoundBuilderBase.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClassName_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "5.5 - No longer used. ClassName should be queried from associated FrontendBuilder's MetaSound" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsAttached_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "5.4 - All source builders now operate on an underlying document source document that is also used to audition." },
		{ "ModuleRelativePath", "Public/MetasoundBuilderBase.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Builder;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClassName;
	static void NewProp_bIsAttached_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAttached;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphInputNode, "AddGraphInputNode" }, // 2159561864
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphOutputNode, "AddGraphOutputNode" }, // 2183745008
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_AddInterface, "AddInterface" }, // 1801355677
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_AddNode, "AddNode" }, // 1408295894
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_AddNodeByClassName, "AddNodeByClassName" }, // 262413998
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_Build, "Build" }, // 880456122
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_BuildAndOverwriteMetaSound, "BuildAndOverwriteMetaSound" }, // 1750278851
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_BuildNewMetaSound, "BuildNewMetaSound" }, // 3150145409
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputsToMatchingGraphInterfaceInputs, "ConnectNodeInputsToMatchingGraphInterfaceInputs" }, // 220618896
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputToGraphInput, "ConnectNodeInputToGraphInput" }, // 1740340087
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputsToMatchingGraphInterfaceOutputs, "ConnectNodeOutputsToMatchingGraphInterfaceOutputs" }, // 1036211650
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputToGraphOutput, "ConnectNodeOutputToGraphOutput" }, // 2191479327
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodes, "ConnectNodes" }, // 3685137332
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodesByInterfaceBindings, "ConnectNodesByInterfaceBindings" }, // 2013662867
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNode, "ContainsNode" }, // 2838909558
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNodeInput, "ContainsNodeInput" }, // 4246901076
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNodeOutput, "ContainsNodeOutput" }, // 894653475
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_ConvertFromPreset, "ConvertFromPreset" }, // 1955916426
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_ConvertToPreset, "ConvertToPreset" }, // 4289495705
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodeInput, "DisconnectNodeInput" }, // 4115681207
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodeOutput, "DisconnectNodeOutput" }, // 3117692
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodes, "DisconnectNodes" }, // 674872227
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodesByInterfaceBindings, "DisconnectNodesByInterfaceBindings" }, // 51109976
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_FindGraphInputNode, "FindGraphInputNode" }, // 1128871810
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_FindGraphOutputNode, "FindGraphOutputNode" }, // 2176675815
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceInputNodes, "FindInterfaceInputNodes" }, // 4292824190
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceOutputNodes, "FindInterfaceOutputNodes" }, // 3987206052
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeClassVersion, "FindNodeClassVersion" }, // 61290720
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputByName, "FindNodeInputByName" }, // 3858176923
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputParent, "FindNodeInputParent" }, // 2239190439
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputs, "FindNodeInputs" }, // 3268273869
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputsByDataType, "FindNodeInputsByDataType" }, // 1500590664
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputByName, "FindNodeOutputByName" }, // 4094040410
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputParent, "FindNodeOutputParent" }, // 899462931
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputs, "FindNodeOutputs" }, // 3043107555
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputsByDataType, "FindNodeOutputsByDataType" }, // 1328054250
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputClassDefault, "GetNodeInputClassDefault" }, // 1774985292
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputData, "GetNodeInputData" }, // 1003972412
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputDefault, "GetNodeInputDefault" }, // 3003497775
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputIsConstructorPin, "GetNodeInputIsConstructorPin" }, // 2423919401
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeOutputData, "GetNodeOutputData" }, // 1516677367
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeOutputIsConstructorPin, "GetNodeOutputIsConstructorPin" }, // 1875596740
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_GetReferencedPresetAsset, "GetReferencedPresetAsset" }, // 4127797080
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_GetRootGraphClassName, "GetRootGraphClassName" }, // 2856834937
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_InterfaceIsDeclared, "InterfaceIsDeclared" }, // 1445116834
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_IsPreset, "IsPreset" }, // 3058081937
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_NodeInputIsConnected, "NodeInputIsConnected" }, // 845710085
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_NodeOutputIsConnected, "NodeOutputIsConnected" }, // 3604021947
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_NodesAreConnected, "NodesAreConnected" }, // 1928071395
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveGraphInput, "RemoveGraphInput" }, // 14120481
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveGraphOutput, "RemoveGraphOutput" }, // 716438315
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveInterface, "RemoveInterface" }, // 2704326500
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveNode, "RemoveNode" }, // 3716538039
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveNodeInputDefault, "RemoveNodeInputDefault" }, // 1692254124
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveUnusedDependencies, "RemoveUnusedDependencies" }, // 2806572055
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputAccessType, "SetGraphInputAccessType" }, // 135393213
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputDataType, "SetGraphInputDataType" }, // 1996454803
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputDefault, "SetGraphInputDefault" }, // 453830102
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputName, "SetGraphInputName" }, // 2023676486
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphOutputAccessType, "SetGraphOutputAccessType" }, // 648200829
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphOutputDataType, "SetGraphOutputDataType" }, // 2921405366
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphOutputName, "SetGraphOutputName" }, // 724937079
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_SetNodeInputDefault, "SetNodeInputDefault" }, // 571529130
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMetaSoundBuilderBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMetaSoundBuilderBase_Statics::NewProp_Builder = { "Builder", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMetaSoundBuilderBase, Builder), Z_Construct_UScriptStruct_FMetaSoundFrontendDocumentBuilder, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Builder_MetaData), NewProp_Builder_MetaData) }; // 1379049186
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMetaSoundBuilderBase_Statics::NewProp_ClassName = { "ClassName", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMetaSoundBuilderBase, ClassName), Z_Construct_UScriptStruct_FMetasoundFrontendClassName, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClassName_MetaData), NewProp_ClassName_MetaData) }; // 1123578214
void Z_Construct_UClass_UMetaSoundBuilderBase_Statics::NewProp_bIsAttached_SetBit(void* Obj)
{
	((UMetaSoundBuilderBase*)Obj)->bIsAttached = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMetaSoundBuilderBase_Statics::NewProp_bIsAttached = { "bIsAttached", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMetaSoundBuilderBase), &Z_Construct_UClass_UMetaSoundBuilderBase_Statics::NewProp_bIsAttached_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsAttached_MetaData), NewProp_bIsAttached_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMetaSoundBuilderBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundBuilderBase_Statics::NewProp_Builder,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundBuilderBase_Statics::NewProp_ClassName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundBuilderBase_Statics::NewProp_bIsAttached,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundBuilderBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMetaSoundBuilderBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundBuilderBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMetaSoundBuilderBase_Statics::ClassParams = {
	&UMetaSoundBuilderBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMetaSoundBuilderBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundBuilderBase_Statics::PropPointers),
	0,
	0x001000A9u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundBuilderBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UMetaSoundBuilderBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMetaSoundBuilderBase()
{
	if (!Z_Registration_Info_UClass_UMetaSoundBuilderBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMetaSoundBuilderBase.OuterSingleton, Z_Construct_UClass_UMetaSoundBuilderBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMetaSoundBuilderBase.OuterSingleton;
}
template<> METASOUNDENGINE_API UClass* StaticClass<UMetaSoundBuilderBase>()
{
	return UMetaSoundBuilderBase::StaticClass();
}
UMetaSoundBuilderBase::UMetaSoundBuilderBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMetaSoundBuilderBase);
UMetaSoundBuilderBase::~UMetaSoundBuilderBase() {}
// End Class UMetaSoundBuilderBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderBase_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMetaSoundBuilderResult_StaticEnum, TEXT("EMetaSoundBuilderResult"), &Z_Registration_Info_UEnum_EMetaSoundBuilderResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1238801088U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMetaSoundBuilderNodeInputHandle::StaticStruct, Z_Construct_UScriptStruct_FMetaSoundBuilderNodeInputHandle_Statics::NewStructOps, TEXT("MetaSoundBuilderNodeInputHandle"), &Z_Registration_Info_UScriptStruct_MetaSoundBuilderNodeInputHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetaSoundBuilderNodeInputHandle), 943726435U) },
		{ FMetaSoundBuilderNodeOutputHandle::StaticStruct, Z_Construct_UScriptStruct_FMetaSoundBuilderNodeOutputHandle_Statics::NewStructOps, TEXT("MetaSoundBuilderNodeOutputHandle"), &Z_Registration_Info_UScriptStruct_MetaSoundBuilderNodeOutputHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetaSoundBuilderNodeOutputHandle), 731065117U) },
		{ FMetaSoundNodeHandle::StaticStruct, Z_Construct_UScriptStruct_FMetaSoundNodeHandle_Statics::NewStructOps, TEXT("MetaSoundNodeHandle"), &Z_Registration_Info_UScriptStruct_MetaSoundNodeHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetaSoundNodeHandle), 2128061789U) },
		{ FMetaSoundBuilderOptions::StaticStruct, Z_Construct_UScriptStruct_FMetaSoundBuilderOptions_Statics::NewStructOps, TEXT("MetaSoundBuilderOptions"), &Z_Registration_Info_UScriptStruct_MetaSoundBuilderOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetaSoundBuilderOptions), 3870668642U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMetaSoundBuilderBase, UMetaSoundBuilderBase::StaticClass, TEXT("UMetaSoundBuilderBase"), &Z_Registration_Info_UClass_UMetaSoundBuilderBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMetaSoundBuilderBase), 3553532644U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderBase_h_3267750194(TEXT("/Script/MetasoundEngine"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderBase_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderBase_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderBase_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
