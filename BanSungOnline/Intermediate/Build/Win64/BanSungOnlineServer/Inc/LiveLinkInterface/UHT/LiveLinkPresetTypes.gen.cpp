// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/LiveLinkInterface/Public/LiveLinkPresetTypes.h"
#include "Runtime/LiveLinkInterface/Public/LiveLinkTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkPresetTypes() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkRole_NoRegister();
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSourceSettings_NoRegister();
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSubjectSettings_NoRegister();
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkVirtualSubject_NoRegister();
LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSourcePreset();
LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectKey();
LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectPreset();
UPackage* Z_Construct_UPackage__Script_LiveLinkInterface();
// End Cross Module References

// Begin ScriptStruct FLiveLinkSourcePreset
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkSourcePreset;
class UScriptStruct* FLiveLinkSourcePreset::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkSourcePreset.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkSourcePreset.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkSourcePreset, (UObject*)Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkSourcePreset"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkSourcePreset.OuterSingleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkSourcePreset>()
{
	return FLiveLinkSourcePreset::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLiveLinkSourcePreset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LiveLinkPresetTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[] = {
		{ "Category", "LiveLinkSourcePresets" },
		{ "ModuleRelativePath", "Public/LiveLinkPresetTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "Category", "LiveLinkSourcePresets" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LiveLinkPresetTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceType_MetaData[] = {
		{ "Category", "LiveLinkSourcePresets" },
		{ "Comment", "/** The SourceType when the source was saved to a Preset. */" },
		{ "ModuleRelativePath", "Public/LiveLinkPresetTypes.h" },
		{ "ToolTip", "The SourceType when the source was saved to a Preset." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Guid;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FTextPropertyParams NewProp_SourceType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkSourcePreset>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkSourcePreset_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkSourcePreset, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Guid_MetaData), NewProp_Guid_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLiveLinkSourcePreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x01160000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkSourcePreset, Settings), Z_Construct_UClass_ULiveLinkSourceSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FLiveLinkSourcePreset_Statics::NewProp_SourceType = { "SourceType", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkSourcePreset, SourceType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceType_MetaData), NewProp_SourceType_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkSourcePreset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSourcePreset_Statics::NewProp_Guid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSourcePreset_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSourcePreset_Statics::NewProp_SourceType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSourcePreset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkSourcePreset_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
	nullptr,
	&NewStructOps,
	"LiveLinkSourcePreset",
	Z_Construct_UScriptStruct_FLiveLinkSourcePreset_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSourcePreset_Statics::PropPointers),
	sizeof(FLiveLinkSourcePreset),
	alignof(FLiveLinkSourcePreset),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSourcePreset_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLiveLinkSourcePreset_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSourcePreset()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkSourcePreset.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkSourcePreset.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkSourcePreset_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkSourcePreset.InnerSingleton;
}
// End ScriptStruct FLiveLinkSourcePreset

// Begin ScriptStruct FLiveLinkSubjectPreset
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkSubjectPreset;
class UScriptStruct* FLiveLinkSubjectPreset::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkSubjectPreset.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkSubjectPreset.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkSubjectPreset, (UObject*)Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkSubjectPreset"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkSubjectPreset.OuterSingleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkSubjectPreset>()
{
	return FLiveLinkSubjectPreset::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLiveLinkSubjectPreset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LiveLinkPresetTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "Category", "LiveLinkSubjectPresets" },
		{ "ModuleRelativePath", "Public/LiveLinkPresetTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Role_MetaData[] = {
		{ "Category", "LiveLinkSubjectPresets" },
		{ "ModuleRelativePath", "Public/LiveLinkPresetTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "Category", "LiveLinkSubjectPresets" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LiveLinkPresetTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VirtualSubject_MetaData[] = {
		{ "Category", "LiveLinkSubjectPresets" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LiveLinkPresetTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "Category", "LiveLinkSubjectPresets" },
		{ "ModuleRelativePath", "Public/LiveLinkPresetTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Role;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VirtualSubject;
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkSubjectPreset>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkSubjectPreset_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkSubjectPreset, Key), Z_Construct_UScriptStruct_FLiveLinkSubjectKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) }; // 896940852
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FLiveLinkSubjectPreset_Statics::NewProp_Role = { "Role", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkSubjectPreset, Role), Z_Construct_UClass_UClass, Z_Construct_UClass_ULiveLinkRole_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Role_MetaData), NewProp_Role_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLiveLinkSubjectPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x01160000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkSubjectPreset, Settings), Z_Construct_UClass_ULiveLinkSubjectSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLiveLinkSubjectPreset_Statics::NewProp_VirtualSubject = { "VirtualSubject", nullptr, (EPropertyFlags)0x01160000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkSubjectPreset, VirtualSubject), Z_Construct_UClass_ULiveLinkVirtualSubject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VirtualSubject_MetaData), NewProp_VirtualSubject_MetaData) };
void Z_Construct_UScriptStruct_FLiveLinkSubjectPreset_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((FLiveLinkSubjectPreset*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkSubjectPreset_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLiveLinkSubjectPreset), &Z_Construct_UScriptStruct_FLiveLinkSubjectPreset_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkSubjectPreset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSubjectPreset_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSubjectPreset_Statics::NewProp_Role,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSubjectPreset_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSubjectPreset_Statics::NewProp_VirtualSubject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSubjectPreset_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSubjectPreset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkSubjectPreset_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
	nullptr,
	&NewStructOps,
	"LiveLinkSubjectPreset",
	Z_Construct_UScriptStruct_FLiveLinkSubjectPreset_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSubjectPreset_Statics::PropPointers),
	sizeof(FLiveLinkSubjectPreset),
	alignof(FLiveLinkSubjectPreset),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSubjectPreset_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLiveLinkSubjectPreset_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectPreset()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkSubjectPreset.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkSubjectPreset.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkSubjectPreset_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkSubjectPreset.InnerSingleton;
}
// End ScriptStruct FLiveLinkSubjectPreset

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkPresetTypes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLiveLinkSourcePreset::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkSourcePreset_Statics::NewStructOps, TEXT("LiveLinkSourcePreset"), &Z_Registration_Info_UScriptStruct_LiveLinkSourcePreset, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkSourcePreset), 1670012231U) },
		{ FLiveLinkSubjectPreset::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkSubjectPreset_Statics::NewStructOps, TEXT("LiveLinkSubjectPreset"), &Z_Registration_Info_UScriptStruct_LiveLinkSubjectPreset, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkSubjectPreset), 2293914654U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkPresetTypes_h_3816121145(TEXT("/Script/LiveLinkInterface"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkPresetTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkPresetTypes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
