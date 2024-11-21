// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MetasoundEngine/Public/MetasoundSettings.h"
#include "MetasoundFrontend/Public/MetasoundFrontendDocument.h"
#include "Runtime/CoreUObject/Public/UObject/PerPlatformProperties.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMetasoundSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformBool();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformFloat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformInt();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
METASOUNDENGINE_API UClass* Z_Construct_UClass_UMetaSoundQualityHelper();
METASOUNDENGINE_API UClass* Z_Construct_UClass_UMetaSoundQualityHelper_NoRegister();
METASOUNDENGINE_API UClass* Z_Construct_UClass_UMetaSoundSettings();
METASOUNDENGINE_API UClass* Z_Construct_UClass_UMetaSoundSettings_NoRegister();
METASOUNDENGINE_API UEnum* Z_Construct_UEnum_MetasoundEngine_EMetaSoundMessageLevel();
METASOUNDENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDefaultMetaSoundAssetAutoUpdateSettings();
METASOUNDENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMetaSoundPageSettings();
METASOUNDENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMetaSoundQualitySettings();
METASOUNDFRONTEND_API UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendClassName();
UPackage* Z_Construct_UPackage__Script_MetasoundEngine();
// End Cross Module References

// Begin Enum EMetaSoundMessageLevel
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMetaSoundMessageLevel;
static UEnum* EMetaSoundMessageLevel_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMetaSoundMessageLevel.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMetaSoundMessageLevel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MetasoundEngine_EMetaSoundMessageLevel, (UObject*)Z_Construct_UPackage__Script_MetasoundEngine(), TEXT("EMetaSoundMessageLevel"));
	}
	return Z_Registration_Info_UEnum_EMetaSoundMessageLevel.OuterSingleton;
}
template<> METASOUNDENGINE_API UEnum* StaticEnum<EMetaSoundMessageLevel>()
{
	return EMetaSoundMessageLevel_StaticEnum();
}
struct Z_Construct_UEnum_MetasoundEngine_EMetaSoundMessageLevel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Error.Name", "EMetaSoundMessageLevel::Error" },
		{ "Info.Name", "EMetaSoundMessageLevel::Info" },
		{ "ModuleRelativePath", "Public/MetasoundSettings.h" },
		{ "Warning.Name", "EMetaSoundMessageLevel::Warning" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMetaSoundMessageLevel::Error", (int64)EMetaSoundMessageLevel::Error },
		{ "EMetaSoundMessageLevel::Warning", (int64)EMetaSoundMessageLevel::Warning },
		{ "EMetaSoundMessageLevel::Info", (int64)EMetaSoundMessageLevel::Info },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MetasoundEngine_EMetaSoundMessageLevel_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MetasoundEngine,
	nullptr,
	"EMetaSoundMessageLevel",
	"EMetaSoundMessageLevel",
	Z_Construct_UEnum_MetasoundEngine_EMetaSoundMessageLevel_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MetasoundEngine_EMetaSoundMessageLevel_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MetasoundEngine_EMetaSoundMessageLevel_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MetasoundEngine_EMetaSoundMessageLevel_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MetasoundEngine_EMetaSoundMessageLevel()
{
	if (!Z_Registration_Info_UEnum_EMetaSoundMessageLevel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMetaSoundMessageLevel.InnerSingleton, Z_Construct_UEnum_MetasoundEngine_EMetaSoundMessageLevel_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMetaSoundMessageLevel.InnerSingleton;
}
// End Enum EMetaSoundMessageLevel

// Begin ScriptStruct FDefaultMetaSoundAssetAutoUpdateSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DefaultMetaSoundAssetAutoUpdateSettings;
class UScriptStruct* FDefaultMetaSoundAssetAutoUpdateSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DefaultMetaSoundAssetAutoUpdateSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DefaultMetaSoundAssetAutoUpdateSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDefaultMetaSoundAssetAutoUpdateSettings, (UObject*)Z_Construct_UPackage__Script_MetasoundEngine(), TEXT("DefaultMetaSoundAssetAutoUpdateSettings"));
	}
	return Z_Registration_Info_UScriptStruct_DefaultMetaSoundAssetAutoUpdateSettings.OuterSingleton;
}
template<> METASOUNDENGINE_API UScriptStruct* StaticStruct<FDefaultMetaSoundAssetAutoUpdateSettings>()
{
	return FDefaultMetaSoundAssetAutoUpdateSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDefaultMetaSoundAssetAutoUpdateSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MetasoundSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MetaSound_MetaData[] = {
		{ "AllowedClasses", "/Script/MetasoundEngine.MetaSound, /Script/MetasoundEngine.MetaSoundSource" },
		{ "Category", "AutoUpdate" },
		{ "Comment", "/** MetaSound to prevent from AutoUpdate. */" },
		{ "ModuleRelativePath", "Public/MetasoundSettings.h" },
		{ "ToolTip", "MetaSound to prevent from AutoUpdate." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MetaSound;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDefaultMetaSoundAssetAutoUpdateSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDefaultMetaSoundAssetAutoUpdateSettings_Statics::NewProp_MetaSound = { "MetaSound", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDefaultMetaSoundAssetAutoUpdateSettings, MetaSound), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MetaSound_MetaData), NewProp_MetaSound_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDefaultMetaSoundAssetAutoUpdateSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDefaultMetaSoundAssetAutoUpdateSettings_Statics::NewProp_MetaSound,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDefaultMetaSoundAssetAutoUpdateSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDefaultMetaSoundAssetAutoUpdateSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEngine,
	nullptr,
	&NewStructOps,
	"DefaultMetaSoundAssetAutoUpdateSettings",
	Z_Construct_UScriptStruct_FDefaultMetaSoundAssetAutoUpdateSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDefaultMetaSoundAssetAutoUpdateSettings_Statics::PropPointers),
	sizeof(FDefaultMetaSoundAssetAutoUpdateSettings),
	alignof(FDefaultMetaSoundAssetAutoUpdateSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDefaultMetaSoundAssetAutoUpdateSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDefaultMetaSoundAssetAutoUpdateSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDefaultMetaSoundAssetAutoUpdateSettings()
{
	if (!Z_Registration_Info_UScriptStruct_DefaultMetaSoundAssetAutoUpdateSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DefaultMetaSoundAssetAutoUpdateSettings.InnerSingleton, Z_Construct_UScriptStruct_FDefaultMetaSoundAssetAutoUpdateSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DefaultMetaSoundAssetAutoUpdateSettings.InnerSingleton;
}
// End ScriptStruct FDefaultMetaSoundAssetAutoUpdateSettings

// Begin Class UMetaSoundQualityHelper Function GetQualityNames
struct Z_Construct_UFunction_UMetaSoundQualityHelper_GetQualityNames_Statics
{
	struct MetaSoundQualityHelper_eventGetQualityNames_Parms
	{
		TArray<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09* Returns a list of quality settings to present to a combobox\n\x09* */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use UMetaSoundSettings::GetQualityNames instead" },
		{ "ModuleRelativePath", "Public/MetasoundSettings.h" },
		{ "ToolTip", "Returns a list of quality settings to present to a combobox" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundQualityHelper_GetQualityNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMetaSoundQualityHelper_GetQualityNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundQualityHelper_eventGetQualityNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundQualityHelper_GetQualityNames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundQualityHelper_GetQualityNames_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundQualityHelper_GetQualityNames_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundQualityHelper_GetQualityNames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundQualityHelper_GetQualityNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundQualityHelper, nullptr, "GetQualityNames", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundQualityHelper_GetQualityNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundQualityHelper_GetQualityNames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundQualityHelper_GetQualityNames_Statics::MetaSoundQualityHelper_eventGetQualityNames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundQualityHelper_GetQualityNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundQualityHelper_GetQualityNames_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundQualityHelper_GetQualityNames_Statics::MetaSoundQualityHelper_eventGetQualityNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundQualityHelper_GetQualityNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundQualityHelper_GetQualityNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundQualityHelper::execGetQualityNames)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FName>*)Z_Param__Result=UMetaSoundQualityHelper::GetQualityNames();
	P_NATIVE_END;
}
// End Class UMetaSoundQualityHelper Function GetQualityNames

// Begin Class UMetaSoundQualityHelper
void UMetaSoundQualityHelper::StaticRegisterNativesUMetaSoundQualityHelper()
{
	UClass* Class = UMetaSoundQualityHelper::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetQualityNames", &UMetaSoundQualityHelper::execGetQualityNames },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMetaSoundQualityHelper);
UClass* Z_Construct_UClass_UMetaSoundQualityHelper_NoRegister()
{
	return UMetaSoundQualityHelper::StaticClass();
}
struct Z_Construct_UClass_UMetaSoundQualityHelper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MetasoundSettings.h" },
		{ "ModuleRelativePath", "Public/MetasoundSettings.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMetaSoundQualityHelper_GetQualityNames, "GetQualityNames" }, // 825050769
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMetaSoundQualityHelper>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMetaSoundQualityHelper_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundQualityHelper_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMetaSoundQualityHelper_Statics::ClassParams = {
	&UMetaSoundQualityHelper::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x011000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundQualityHelper_Statics::Class_MetaDataParams), Z_Construct_UClass_UMetaSoundQualityHelper_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMetaSoundQualityHelper()
{
	if (!Z_Registration_Info_UClass_UMetaSoundQualityHelper.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMetaSoundQualityHelper.OuterSingleton, Z_Construct_UClass_UMetaSoundQualityHelper_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMetaSoundQualityHelper.OuterSingleton;
}
template<> METASOUNDENGINE_API UClass* StaticClass<UMetaSoundQualityHelper>()
{
	return UMetaSoundQualityHelper::StaticClass();
}
UMetaSoundQualityHelper::UMetaSoundQualityHelper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMetaSoundQualityHelper);
UMetaSoundQualityHelper::~UMetaSoundQualityHelper() {}
// End Class UMetaSoundQualityHelper

// Begin ScriptStruct FMetaSoundPageSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetaSoundPageSettings;
class UScriptStruct* FMetaSoundPageSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetaSoundPageSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetaSoundPageSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetaSoundPageSettings, (UObject*)Z_Construct_UPackage__Script_MetasoundEngine(), TEXT("MetaSoundPageSettings"));
	}
	return Z_Registration_Info_UScriptStruct_MetaSoundPageSettings.OuterSingleton;
}
template<> METASOUNDENGINE_API UScriptStruct* StaticStruct<FMetaSoundPageSettings>()
{
	return FMetaSoundPageSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMetaSoundPageSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MetasoundSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UniqueId_MetaData[] = {
		{ "ModuleRelativePath", "Public/MetasoundSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Pages" },
		{ "Comment", "/** Name of this page's setting to be displayed in editors and used for identification from Blueprint/native API. */" },
		{ "EditCondition", "!bIsDefaultPage" },
		{ "ModuleRelativePath", "Public/MetasoundSettings.h" },
		{ "ToolTip", "Name of this page's setting to be displayed in editors and used for identification from Blueprint/native API." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanTarget_MetaData[] = {
		{ "Category", "Pages" },
		{ "Comment", "// When true, page asset data (i.e. graphs and input defaults) can be targeted\n// for the most applicable platform/platform group. If associated asset data is\n// defined, will always be cooked. If false, asset page data is only cooked if it is\n// resolved to from a higher-indexed page setting and is not set to explicitly\n// \"ExcludeFromCook\".\n" },
		{ "DisplayName", "Targetable" },
		{ "ModuleRelativePath", "Public/MetasoundSettings.h" },
		{ "ToolTip", "When true, page asset data (i.e. graphs and input defaults) can be targeted\nfor the most applicable platform/platform group. If associated asset data is\ndefined, will always be cooked. If false, asset page data is only cooked if it is\nresolved to from a higher-indexed page setting and is not set to explicitly\n\"ExcludeFromCook\"." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDefaultPage_MetaData[] = {
		{ "Category", "Pages" },
		{ "Comment", "// Just used to inform edit condition to enable/disable exclude from cook. Maintained by ConformPageSettings on object load/mutation.\n// EditCondition meta mark-up is hack to avoid boolean being default added to name field\n" },
		{ "EditCondition", "FALSE" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MetasoundSettings.h" },
		{ "ToolTip", "Just used to inform edit condition to enable/disable exclude from cook. Maintained by ConformPageSettings on object load/mutation.\nEditCondition meta mark-up is hack to avoid boolean being default added to name field" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExcludeFromCook_MetaData[] = {
		{ "Category", "Pages" },
		{ "Comment", "// When true, exclude page data when cooking from the assigned platform(s)/platform group(s).\n// If false, page data may or may not be included in cook depending on whether or not the given\n// page data is required in order to ensure a value is always resolved for the cook platform target(s).\n// (Ignored if 'Targetable' is true for most applicable platform/platform group).\n" },
		{ "EditCondition", "!bIsDefaultPage" },
		{ "ModuleRelativePath", "Public/MetasoundSettings.h" },
		{ "ToolTip", "When true, exclude page data when cooking from the assigned platform(s)/platform group(s).\nIf false, page data may or may not be included in cook depending on whether or not the given\npage data is required in order to ensure a value is always resolved for the cook platform target(s).\n(Ignored if 'Targetable' is true for most applicable platform/platform group)." },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UniqueId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CanTarget;
	static void NewProp_bIsDefaultPage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDefaultPage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExcludeFromCook;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetaSoundPageSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetaSoundPageSettings_Statics::NewProp_UniqueId = { "UniqueId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetaSoundPageSettings, UniqueId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UniqueId_MetaData), NewProp_UniqueId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMetaSoundPageSettings_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetaSoundPageSettings, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetaSoundPageSettings_Statics::NewProp_CanTarget = { "CanTarget", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetaSoundPageSettings, CanTarget), Z_Construct_UScriptStruct_FPerPlatformBool, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanTarget_MetaData), NewProp_CanTarget_MetaData) }; // 1037277855
void Z_Construct_UScriptStruct_FMetaSoundPageSettings_Statics::NewProp_bIsDefaultPage_SetBit(void* Obj)
{
	((FMetaSoundPageSettings*)Obj)->bIsDefaultPage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMetaSoundPageSettings_Statics::NewProp_bIsDefaultPage = { "bIsDefaultPage", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMetaSoundPageSettings), &Z_Construct_UScriptStruct_FMetaSoundPageSettings_Statics::NewProp_bIsDefaultPage_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDefaultPage_MetaData), NewProp_bIsDefaultPage_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetaSoundPageSettings_Statics::NewProp_ExcludeFromCook = { "ExcludeFromCook", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetaSoundPageSettings, ExcludeFromCook), Z_Construct_UScriptStruct_FPerPlatformBool, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExcludeFromCook_MetaData), NewProp_ExcludeFromCook_MetaData) }; // 1037277855
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMetaSoundPageSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetaSoundPageSettings_Statics::NewProp_UniqueId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetaSoundPageSettings_Statics::NewProp_Name,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetaSoundPageSettings_Statics::NewProp_CanTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetaSoundPageSettings_Statics::NewProp_bIsDefaultPage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetaSoundPageSettings_Statics::NewProp_ExcludeFromCook,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetaSoundPageSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetaSoundPageSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEngine,
	nullptr,
	&NewStructOps,
	"MetaSoundPageSettings",
	Z_Construct_UScriptStruct_FMetaSoundPageSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetaSoundPageSettings_Statics::PropPointers),
	sizeof(FMetaSoundPageSettings),
	alignof(FMetaSoundPageSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetaSoundPageSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMetaSoundPageSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMetaSoundPageSettings()
{
	if (!Z_Registration_Info_UScriptStruct_MetaSoundPageSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetaSoundPageSettings.InnerSingleton, Z_Construct_UScriptStruct_FMetaSoundPageSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MetaSoundPageSettings.InnerSingleton;
}
// End ScriptStruct FMetaSoundPageSettings

// Begin ScriptStruct FMetaSoundQualitySettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetaSoundQualitySettings;
class UScriptStruct* FMetaSoundQualitySettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetaSoundQualitySettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetaSoundQualitySettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetaSoundQualitySettings, (UObject*)Z_Construct_UPackage__Script_MetasoundEngine(), TEXT("MetaSoundQualitySettings"));
	}
	return Z_Registration_Info_UScriptStruct_MetaSoundQualitySettings.OuterSingleton;
}
template<> METASOUNDENGINE_API UScriptStruct* StaticStruct<FMetaSoundQualitySettings>()
{
	return FMetaSoundQualitySettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMetaSoundQualitySettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MetasoundSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UniqueId_MetaData[] = {
		{ "Comment", "/** A hidden GUID that will be generated once when adding a new entry. This prevents orphaning of renamed entries. **/" },
		{ "ModuleRelativePath", "Public/MetasoundSettings.h" },
		{ "ToolTip", "A hidden GUID that will be generated once when adding a new entry. This prevents orphaning of renamed entries. *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Quality" },
		{ "Comment", "/** Name of this quality setting. This will appear in the quality dropdown list.\n\x09\x09The names should be unique but are not guaranteed to be (use guid for unique match) **/" },
		{ "ModuleRelativePath", "Public/MetasoundSettings.h" },
		{ "ToolTip", "Name of this quality setting. This will appear in the quality dropdown list.\n              The names should be unique but are not guaranteed to be (use guid for unique match) *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SampleRate_MetaData[] = {
		{ "Category", "Quality" },
		{ "ClampMax", "96000" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Sample Rate (in Hz). NOTE: A Zero value will have no effect and use the Device Rate. **/" },
		{ "ModuleRelativePath", "Public/MetasoundSettings.h" },
		{ "ToolTip", "Sample Rate (in Hz). NOTE: A Zero value will have no effect and use the Device Rate. *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockRate_MetaData[] = {
		{ "Category", "Quality" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Block Rate (in Hz). NOTE: A Zero value will have no effect and use the Default (100)  **/" },
		{ "ModuleRelativePath", "Public/MetasoundSettings.h" },
		{ "ToolTip", "Block Rate (in Hz). NOTE: A Zero value will have no effect and use the Default (100)  *" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UniqueId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SampleRate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlockRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetaSoundQualitySettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetaSoundQualitySettings_Statics::NewProp_UniqueId = { "UniqueId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetaSoundQualitySettings, UniqueId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UniqueId_MetaData), NewProp_UniqueId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMetaSoundQualitySettings_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetaSoundQualitySettings, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetaSoundQualitySettings_Statics::NewProp_SampleRate = { "SampleRate", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetaSoundQualitySettings, SampleRate), Z_Construct_UScriptStruct_FPerPlatformInt, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SampleRate_MetaData), NewProp_SampleRate_MetaData) }; // 73410253
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetaSoundQualitySettings_Statics::NewProp_BlockRate = { "BlockRate", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetaSoundQualitySettings, BlockRate), Z_Construct_UScriptStruct_FPerPlatformFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockRate_MetaData), NewProp_BlockRate_MetaData) }; // 2119628
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMetaSoundQualitySettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetaSoundQualitySettings_Statics::NewProp_UniqueId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetaSoundQualitySettings_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetaSoundQualitySettings_Statics::NewProp_SampleRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetaSoundQualitySettings_Statics::NewProp_BlockRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetaSoundQualitySettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetaSoundQualitySettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEngine,
	nullptr,
	&NewStructOps,
	"MetaSoundQualitySettings",
	Z_Construct_UScriptStruct_FMetaSoundQualitySettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetaSoundQualitySettings_Statics::PropPointers),
	sizeof(FMetaSoundQualitySettings),
	alignof(FMetaSoundQualitySettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetaSoundQualitySettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMetaSoundQualitySettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMetaSoundQualitySettings()
{
	if (!Z_Registration_Info_UScriptStruct_MetaSoundQualitySettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetaSoundQualitySettings.InnerSingleton, Z_Construct_UScriptStruct_FMetaSoundQualitySettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MetaSoundQualitySettings.InnerSingleton;
}
// End ScriptStruct FMetaSoundQualitySettings

// Begin Class UMetaSoundSettings Function GetPageNames
#if WITH_EDITOR
struct Z_Construct_UFunction_UMetaSoundSettings_GetPageNames_Statics
{
	struct MetaSoundSettings_eventGetPageNames_Parms
	{
		TArray<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/* Returns an array of page names. Can be used to present to a combobox. Ex:\n\x09 * UPROPERTY(... meta=(GetOptions=\"MetasoundEngine.MetaSoundSettings.GetPageNames\"))\n\x09 * FName Page;\n\x09*/" },
		{ "ModuleRelativePath", "Public/MetasoundSettings.h" },
		{ "ToolTip", "Returns an array of page names. Can be used to present to a combobox. Ex:\n       * UPROPERTY(... meta=(GetOptions=\"MetasoundEngine.MetaSoundSettings.GetPageNames\"))\n       * FName Page;" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundSettings_GetPageNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMetaSoundSettings_GetPageNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundSettings_eventGetPageNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundSettings_GetPageNames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundSettings_GetPageNames_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundSettings_GetPageNames_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundSettings_GetPageNames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundSettings_GetPageNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundSettings, nullptr, "GetPageNames", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundSettings_GetPageNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundSettings_GetPageNames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundSettings_GetPageNames_Statics::MetaSoundSettings_eventGetPageNames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundSettings_GetPageNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundSettings_GetPageNames_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundSettings_GetPageNames_Statics::MetaSoundSettings_eventGetPageNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundSettings_GetPageNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundSettings_GetPageNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(UMetaSoundSettings::execGetPageNames)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FName>*)Z_Param__Result=UMetaSoundSettings::GetPageNames();
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class UMetaSoundSettings Function GetPageNames

// Begin Class UMetaSoundSettings Function GetQualityNames
#if WITH_EDITOR
struct Z_Construct_UFunction_UMetaSoundSettings_GetQualityNames_Statics
{
	struct MetaSoundSettings_eventGetQualityNames_Parms
	{
		TArray<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/* Returns an array of quality setting names. Can be used to present to a combobox. Ex:\n\x09 * UPROPERTY(... meta=(GetOptions=\"MetasoundEngine.MetaSoundSettings.GetQualityNames\"))\n\x09 * FName QualitySetting;\n\x09*/" },
		{ "ModuleRelativePath", "Public/MetasoundSettings.h" },
		{ "ToolTip", "Returns an array of quality setting names. Can be used to present to a combobox. Ex:\n       * UPROPERTY(... meta=(GetOptions=\"MetasoundEngine.MetaSoundSettings.GetQualityNames\"))\n       * FName QualitySetting;" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundSettings_GetQualityNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMetaSoundSettings_GetQualityNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundSettings_eventGetQualityNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundSettings_GetQualityNames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundSettings_GetQualityNames_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundSettings_GetQualityNames_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundSettings_GetQualityNames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundSettings_GetQualityNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundSettings, nullptr, "GetQualityNames", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundSettings_GetQualityNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundSettings_GetQualityNames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundSettings_GetQualityNames_Statics::MetaSoundSettings_eventGetQualityNames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundSettings_GetQualityNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundSettings_GetQualityNames_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundSettings_GetQualityNames_Statics::MetaSoundSettings_eventGetQualityNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundSettings_GetQualityNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundSettings_GetQualityNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(UMetaSoundSettings::execGetQualityNames)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FName>*)Z_Param__Result=UMetaSoundSettings::GetQualityNames();
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class UMetaSoundSettings Function GetQualityNames

// Begin Class UMetaSoundSettings
void UMetaSoundSettings::StaticRegisterNativesUMetaSoundSettings()
{
#if WITH_EDITOR
	UClass* Class = UMetaSoundSettings::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetPageNames", &UMetaSoundSettings::execGetPageNames },
		{ "GetQualityNames", &UMetaSoundSettings::execGetQualityNames },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
#endif // WITH_EDITOR
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMetaSoundSettings);
UClass* Z_Construct_UClass_UMetaSoundSettings_NoRegister()
{
	return UMetaSoundSettings::StaticClass();
}
struct Z_Construct_UClass_UMetaSoundSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "MetaSounds" },
		{ "IncludePath", "MetasoundSettings.h" },
		{ "ModuleRelativePath", "Public/MetasoundSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoUpdateEnabled_MetaData[] = {
		{ "Category", "AutoUpdate" },
		{ "Comment", "/** If true, AutoUpdate is enabled, increasing load times.  If false, skips AutoUpdate on load, but can result in MetaSounds failing to load, \n\x09  * register, and execute if interface differences are present. */" },
		{ "ModuleRelativePath", "Public/MetasoundSettings.h" },
		{ "ToolTip", "If true, AutoUpdate is enabled, increasing load times.  If false, skips AutoUpdate on load, but can result in MetaSounds failing to load,\nregister, and execute if interface differences are present." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoUpdateDenylist_MetaData[] = {
		{ "Category", "AutoUpdate" },
		{ "Comment", "/** List of native MetaSound classes whose node references should not be AutoUpdated. */" },
		{ "DisplayName", "DenyList" },
		{ "EditCondition", "bAutoUpdateEnabled" },
		{ "ModuleRelativePath", "Public/MetasoundSettings.h" },
		{ "ToolTip", "List of native MetaSound classes whose node references should not be AutoUpdated." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoUpdateAssetDenylist_MetaData[] = {
		{ "Category", "AutoUpdate" },
		{ "Comment", "/** List of MetaSound assets whose node references should not be AutoUpdated. */" },
		{ "DisplayName", "Asset DenyList" },
		{ "EditCondition", "bAutoUpdateEnabled" },
		{ "ModuleRelativePath", "Public/MetasoundSettings.h" },
		{ "ToolTip", "List of MetaSound assets whose node references should not be AutoUpdated." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoUpdateLogWarningOnDroppedConnection_MetaData[] = {
		{ "Category", "AutoUpdate" },
		{ "Comment", "/** If true, warnings will be logged if updating a node results in existing connections being discarded. */" },
		{ "DisplayName", "Log Warning on Dropped Connection" },
		{ "EditCondition", "bAutoUpdateEnabled" },
		{ "ModuleRelativePath", "Public/MetasoundSettings.h" },
		{ "ToolTip", "If true, warnings will be logged if updating a node results in existing connections being discarded." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectoriesToRegister_MetaData[] = {
		{ "Category", "Registration" },
		{ "Comment", "/** Directories to scan & automatically register MetaSound post initial asset scan on engine start-up.\n\x09  * May speed up subsequent calls to playback MetaSounds post asset scan but increases application load time.\n\x09  * See 'MetaSoundAssetSubsystem::RegisterAssetClassesInDirectories' to dynamically register or \n\x09  * 'MetaSoundAssetSubsystem::UnregisterAssetClassesInDirectories' to unregister asset classes.\n\x09  */" },
		{ "LongPackageName", "" },
		{ "ModuleRelativePath", "Public/MetasoundSettings.h" },
		{ "RelativePath", "" },
		{ "ToolTip", "Directories to scan & automatically register MetaSound post initial asset scan on engine start-up.\nMay speed up subsequent calls to playback MetaSounds post asset scan but increases application load time.\nSee 'MetaSoundAssetSubsystem::RegisterAssetClassesInDirectories' to dynamically register or\n'MetaSoundAssetSubsystem::UnregisterAssetClassesInDirectories' to unregister asset classes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DenyListCacheChangeID_MetaData[] = {
		{ "ModuleRelativePath", "Public/MetasoundSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetPageName_MetaData[] = {
		{ "Category", "Pages (Experimental)" },
		{ "Comment", "/** Page Name to target when attempting to execute MetaSound. If target page is not implemented (or cooked in a runtime build)\n\x09  * for the active platform, uses order of cooked pages (see 'Page Settings' for order) falling back to lower index-ordered page\n\x09  * implemented in MetaSound asset. If no fallback is found, uses default implementation.\n\x09  */" },
		{ "GetOptions", "MetasoundEngine.MetaSoundSettings.GetPageNames" },
		{ "ModuleRelativePath", "Public/MetasoundSettings.h" },
		{ "ToolTip", "Page Name to target when attempting to execute MetaSound. If target page is not implemented (or cooked in a runtime build)\nfor the active platform, uses order of cooked pages (see 'Page Settings' for order) falling back to lower index-ordered page\nimplemented in MetaSound asset. If no fallback is found, uses default implementation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPageSettings_MetaData[] = {
		{ "Category", "Pages (Experimental)" },
		{ "Comment", "/** Default page settings to be used in editor and if no other page settings are targeted or defined. */" },
		{ "ModuleRelativePath", "Public/MetasoundSettings.h" },
		{ "ToolTip", "Default page settings to be used in editor and if no other page settings are targeted or defined." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PageSettings_MetaData[] = {
		{ "Category", "Pages (Experimental)" },
		{ "Comment", "/** Array of possible page settings that can be added to a MetaSound object. Order\n\x09  * defines default fallback logic whereby a higher index-ordered page\n\x09  * implemented in a MetaSound asset is higher priority (see 'Target Page').\n\x09  */" },
		{ "ModuleRelativePath", "Public/MetasoundSettings.h" },
		{ "ToolTip", "Array of possible page settings that can be added to a MetaSound object. Order\ndefines default fallback logic whereby a higher index-ordered page\nimplemented in a MetaSound asset is higher priority (see 'Target Page')." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QualitySettings_MetaData[] = {
		{ "Category", "Quality" },
		{ "Comment", "/** Array of possible quality settings for Metasounds to chose from */" },
		{ "ModuleRelativePath", "Public/MetasoundSettings.h" },
		{ "ToolTip", "Array of possible quality settings for Metasounds to chose from" },
	};
#endif // WITH_METADATA
	static void NewProp_bAutoUpdateEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoUpdateEnabled;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AutoUpdateDenylist_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AutoUpdateDenylist;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AutoUpdateAssetDenylist_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AutoUpdateAssetDenylist;
	static void NewProp_bAutoUpdateLogWarningOnDroppedConnection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoUpdateLogWarningOnDroppedConnection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DirectoriesToRegister_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DirectoriesToRegister;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DenyListCacheChangeID;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TargetPageName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultPageSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PageSettings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PageSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_QualitySettings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_QualitySettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMetaSoundSettings_GetPageNames, "GetPageNames" }, // 2502950033
		{ &Z_Construct_UFunction_UMetaSoundSettings_GetQualityNames, "GetQualityNames" }, // 909081454
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
#endif // WITH_EDITOR
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMetaSoundSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_bAutoUpdateEnabled_SetBit(void* Obj)
{
	((UMetaSoundSettings*)Obj)->bAutoUpdateEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_bAutoUpdateEnabled = { "bAutoUpdateEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMetaSoundSettings), &Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_bAutoUpdateEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoUpdateEnabled_MetaData), NewProp_bAutoUpdateEnabled_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_AutoUpdateDenylist_Inner = { "AutoUpdateDenylist", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMetasoundFrontendClassName, METADATA_PARAMS(0, nullptr) }; // 1123578214
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_AutoUpdateDenylist = { "AutoUpdateDenylist", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMetaSoundSettings, AutoUpdateDenylist), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoUpdateDenylist_MetaData), NewProp_AutoUpdateDenylist_MetaData) }; // 1123578214
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_AutoUpdateAssetDenylist_Inner = { "AutoUpdateAssetDenylist", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDefaultMetaSoundAssetAutoUpdateSettings, METADATA_PARAMS(0, nullptr) }; // 3724857141
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_AutoUpdateAssetDenylist = { "AutoUpdateAssetDenylist", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMetaSoundSettings, AutoUpdateAssetDenylist), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoUpdateAssetDenylist_MetaData), NewProp_AutoUpdateAssetDenylist_MetaData) }; // 3724857141
void Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_bAutoUpdateLogWarningOnDroppedConnection_SetBit(void* Obj)
{
	((UMetaSoundSettings*)Obj)->bAutoUpdateLogWarningOnDroppedConnection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_bAutoUpdateLogWarningOnDroppedConnection = { "bAutoUpdateLogWarningOnDroppedConnection", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMetaSoundSettings), &Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_bAutoUpdateLogWarningOnDroppedConnection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoUpdateLogWarningOnDroppedConnection_MetaData), NewProp_bAutoUpdateLogWarningOnDroppedConnection_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_DirectoriesToRegister_Inner = { "DirectoriesToRegister", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_DirectoriesToRegister = { "DirectoriesToRegister", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMetaSoundSettings, DirectoriesToRegister), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectoriesToRegister_MetaData), NewProp_DirectoriesToRegister_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_DenyListCacheChangeID = { "DenyListCacheChangeID", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMetaSoundSettings, DenyListCacheChangeID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DenyListCacheChangeID_MetaData), NewProp_DenyListCacheChangeID_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_TargetPageName = { "TargetPageName", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMetaSoundSettings, TargetPageName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetPageName_MetaData), NewProp_TargetPageName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_DefaultPageSettings = { "DefaultPageSettings", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMetaSoundSettings, DefaultPageSettings), Z_Construct_UScriptStruct_FMetaSoundPageSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultPageSettings_MetaData), NewProp_DefaultPageSettings_MetaData) }; // 1176111816
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_PageSettings_Inner = { "PageSettings", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMetaSoundPageSettings, METADATA_PARAMS(0, nullptr) }; // 1176111816
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_PageSettings = { "PageSettings", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMetaSoundSettings, PageSettings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PageSettings_MetaData), NewProp_PageSettings_MetaData) }; // 1176111816
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_QualitySettings_Inner = { "QualitySettings", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMetaSoundQualitySettings, METADATA_PARAMS(0, nullptr) }; // 21179517
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_QualitySettings = { "QualitySettings", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMetaSoundSettings, QualitySettings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QualitySettings_MetaData), NewProp_QualitySettings_MetaData) }; // 21179517
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMetaSoundSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_bAutoUpdateEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_AutoUpdateDenylist_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_AutoUpdateDenylist,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_AutoUpdateAssetDenylist_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_AutoUpdateAssetDenylist,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_bAutoUpdateLogWarningOnDroppedConnection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_DirectoriesToRegister_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_DirectoriesToRegister,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_DenyListCacheChangeID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_TargetPageName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_DefaultPageSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_PageSettings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_PageSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_QualitySettings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_QualitySettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMetaSoundSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMetaSoundSettings_Statics::ClassParams = {
	&UMetaSoundSettings::StaticClass,
	"MetaSound",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	IF_WITH_EDITOR(FuncInfo, nullptr),
	Z_Construct_UClass_UMetaSoundSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UMetaSoundSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMetaSoundSettings()
{
	if (!Z_Registration_Info_UClass_UMetaSoundSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMetaSoundSettings.OuterSingleton, Z_Construct_UClass_UMetaSoundSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMetaSoundSettings.OuterSingleton;
}
template<> METASOUNDENGINE_API UClass* StaticClass<UMetaSoundSettings>()
{
	return UMetaSoundSettings::StaticClass();
}
UMetaSoundSettings::UMetaSoundSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMetaSoundSettings);
UMetaSoundSettings::~UMetaSoundSettings() {}
// End Class UMetaSoundSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMetaSoundMessageLevel_StaticEnum, TEXT("EMetaSoundMessageLevel"), &Z_Registration_Info_UEnum_EMetaSoundMessageLevel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3163770845U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDefaultMetaSoundAssetAutoUpdateSettings::StaticStruct, Z_Construct_UScriptStruct_FDefaultMetaSoundAssetAutoUpdateSettings_Statics::NewStructOps, TEXT("DefaultMetaSoundAssetAutoUpdateSettings"), &Z_Registration_Info_UScriptStruct_DefaultMetaSoundAssetAutoUpdateSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDefaultMetaSoundAssetAutoUpdateSettings), 3724857141U) },
		{ FMetaSoundPageSettings::StaticStruct, Z_Construct_UScriptStruct_FMetaSoundPageSettings_Statics::NewStructOps, TEXT("MetaSoundPageSettings"), &Z_Registration_Info_UScriptStruct_MetaSoundPageSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetaSoundPageSettings), 1176111816U) },
		{ FMetaSoundQualitySettings::StaticStruct, Z_Construct_UScriptStruct_FMetaSoundQualitySettings_Statics::NewStructOps, TEXT("MetaSoundQualitySettings"), &Z_Registration_Info_UScriptStruct_MetaSoundQualitySettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetaSoundQualitySettings), 21179517U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMetaSoundQualityHelper, UMetaSoundQualityHelper::StaticClass, TEXT("UMetaSoundQualityHelper"), &Z_Registration_Info_UClass_UMetaSoundQualityHelper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMetaSoundQualityHelper), 556407373U) },
		{ Z_Construct_UClass_UMetaSoundSettings, UMetaSoundSettings::StaticClass, TEXT("UMetaSoundSettings"), &Z_Registration_Info_UClass_UMetaSoundSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMetaSoundSettings), 1590867352U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h_3016425110(TEXT("/Script/MetasoundEngine"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
