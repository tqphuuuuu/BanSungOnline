// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/LiveLinkInterface/Public/LiveLinkSubjectSettings.h"
#include "Runtime/LiveLinkInterface/Public/LiveLinkTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkSubjectSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkDefaultSubjectSettings();
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkDefaultSubjectSettings_NoRegister();
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkFrameInterpolationProcessor_NoRegister();
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkFramePreProcessor_NoRegister();
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkFrameTranslator_NoRegister();
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkRole_NoRegister();
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSubjectRemapper_NoRegister();
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSubjectSettings();
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSubjectSettings_NoRegister();
LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectKey();
UPackage* Z_Construct_UPackage__Script_LiveLinkInterface();
// End Cross Module References

// Begin Class ULiveLinkDefaultSubjectSettings
void ULiveLinkDefaultSubjectSettings::StaticRegisterNativesULiveLinkDefaultSubjectSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkDefaultSubjectSettings);
UClass* Z_Construct_UClass_ULiveLinkDefaultSubjectSettings_NoRegister()
{
	return ULiveLinkDefaultSubjectSettings::StaticClass();
}
struct Z_Construct_UClass_ULiveLinkDefaultSubjectSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Utility class that allows specifying default values for Subject settings.\n */" },
		{ "IncludePath", "LiveLinkSubjectSettings.h" },
		{ "ModuleRelativePath", "Public/LiveLinkSubjectSettings.h" },
		{ "ToolTip", "Utility class that allows specifying default values for Subject settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRebroadcastSubjectsByDefault_MetaData[] = {
		{ "Comment", "/** Whether subjects should be rebroadcasted by default. */" },
		{ "ModuleRelativePath", "Public/LiveLinkSubjectSettings.h" },
		{ "ToolTip", "Whether subjects should be rebroadcasted by default." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowEditingRebroadcastProperty_MetaData[] = {
		{ "Comment", "/**\n\x09 * Whether a user should be able to edit the bRebroadcastSubject property.\n\x09 * Setting this to false in a target config will prevent a user from turning on or off the rebroadcast flag on a subject.\n\x09 *\n\x09 */" },
		{ "ModuleRelativePath", "Public/LiveLinkSubjectSettings.h" },
		{ "ToolTip", "Whether a user should be able to edit the bRebroadcastSubject property.\nSetting this to false in a target config will prevent a user from turning on or off the rebroadcast flag on a subject." },
	};
#endif // WITH_METADATA
	static void NewProp_bRebroadcastSubjectsByDefault_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRebroadcastSubjectsByDefault;
	static void NewProp_bAllowEditingRebroadcastProperty_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowEditingRebroadcastProperty;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkDefaultSubjectSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_ULiveLinkDefaultSubjectSettings_Statics::NewProp_bRebroadcastSubjectsByDefault_SetBit(void* Obj)
{
	((ULiveLinkDefaultSubjectSettings*)Obj)->bRebroadcastSubjectsByDefault = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULiveLinkDefaultSubjectSettings_Statics::NewProp_bRebroadcastSubjectsByDefault = { "bRebroadcastSubjectsByDefault", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULiveLinkDefaultSubjectSettings), &Z_Construct_UClass_ULiveLinkDefaultSubjectSettings_Statics::NewProp_bRebroadcastSubjectsByDefault_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRebroadcastSubjectsByDefault_MetaData), NewProp_bRebroadcastSubjectsByDefault_MetaData) };
void Z_Construct_UClass_ULiveLinkDefaultSubjectSettings_Statics::NewProp_bAllowEditingRebroadcastProperty_SetBit(void* Obj)
{
	((ULiveLinkDefaultSubjectSettings*)Obj)->bAllowEditingRebroadcastProperty = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULiveLinkDefaultSubjectSettings_Statics::NewProp_bAllowEditingRebroadcastProperty = { "bAllowEditingRebroadcastProperty", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULiveLinkDefaultSubjectSettings), &Z_Construct_UClass_ULiveLinkDefaultSubjectSettings_Statics::NewProp_bAllowEditingRebroadcastProperty_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowEditingRebroadcastProperty_MetaData), NewProp_bAllowEditingRebroadcastProperty_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkDefaultSubjectSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkDefaultSubjectSettings_Statics::NewProp_bRebroadcastSubjectsByDefault,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkDefaultSubjectSettings_Statics::NewProp_bAllowEditingRebroadcastProperty,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkDefaultSubjectSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULiveLinkDefaultSubjectSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkDefaultSubjectSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkDefaultSubjectSettings_Statics::ClassParams = {
	&ULiveLinkDefaultSubjectSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULiveLinkDefaultSubjectSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkDefaultSubjectSettings_Statics::PropPointers),
	0,
	0x000000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkDefaultSubjectSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_ULiveLinkDefaultSubjectSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULiveLinkDefaultSubjectSettings()
{
	if (!Z_Registration_Info_UClass_ULiveLinkDefaultSubjectSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkDefaultSubjectSettings.OuterSingleton, Z_Construct_UClass_ULiveLinkDefaultSubjectSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULiveLinkDefaultSubjectSettings.OuterSingleton;
}
template<> LIVELINKINTERFACE_API UClass* StaticClass<ULiveLinkDefaultSubjectSettings>()
{
	return ULiveLinkDefaultSubjectSettings::StaticClass();
}
ULiveLinkDefaultSubjectSettings::ULiveLinkDefaultSubjectSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkDefaultSubjectSettings);
ULiveLinkDefaultSubjectSettings::~ULiveLinkDefaultSubjectSettings() {}
// End Class ULiveLinkDefaultSubjectSettings

// Begin Class ULiveLinkSubjectSettings
void ULiveLinkSubjectSettings::StaticRegisterNativesULiveLinkSubjectSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkSubjectSettings);
UClass* Z_Construct_UClass_ULiveLinkSubjectSettings_NoRegister()
{
	return ULiveLinkSubjectSettings::StaticClass();
}
struct Z_Construct_UClass_ULiveLinkSubjectSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// Base class for live link subject settings\n" },
		{ "IncludePath", "LiveLinkSubjectSettings.h" },
		{ "ModuleRelativePath", "Public/LiveLinkSubjectSettings.h" },
		{ "ToolTip", "Base class for live link subject settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreProcessors_Inner_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** List of available preprocessor the subject will use. */" },
		{ "DisplayName", "Pre Processors" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LiveLinkSubjectSettings.h" },
		{ "ToolTip", "List of available preprocessor the subject will use." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreProcessors_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** List of available preprocessor the subject will use. */" },
		{ "DisplayName", "Pre Processors" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LiveLinkSubjectSettings.h" },
		{ "ToolTip", "List of available preprocessor the subject will use." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpolationProcessor_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** The interpolation processor the subject will use. */" },
		{ "DisplayName", "Interpolation" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LiveLinkSubjectSettings.h" },
		{ "ToolTip", "The interpolation processor the subject will use." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Translators_Inner_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** List of available translator the subject can use. */" },
		{ "DisplayName", "Translators" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LiveLinkSubjectSettings.h" },
		{ "ToolTip", "List of available translator the subject can use." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Translators_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** List of available translator the subject can use. */" },
		{ "DisplayName", "Translators" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LiveLinkSubjectSettings.h" },
		{ "ToolTip", "List of available translator the subject can use." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Remapper_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** Remapper used to modify incoming static and frame data for a subject. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LiveLinkSubjectSettings.h" },
		{ "ToolTip", "Remapper used to modify incoming static and frame data for a subject." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Role_MetaData[] = {
		{ "ModuleRelativePath", "Public/LiveLinkSubjectSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameRate_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** Last FrameRate estimated by the subject. If in Timecode mode, this will come directly from the QualifiedFrameTime. */" },
		{ "ModuleRelativePath", "Public/LiveLinkSubjectSettings.h" },
		{ "ToolTip", "Last FrameRate estimated by the subject. If in Timecode mode, this will come directly from the QualifiedFrameTime." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowModifyingRebroadcast_MetaData[] = {
		{ "Comment", "/** Allows settings to dictate whether the rebroadcast flag is editable. */" },
		{ "ModuleRelativePath", "Public/LiveLinkSubjectSettings.h" },
		{ "ToolTip", "Allows settings to dictate whether the rebroadcast flag is editable." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRebroadcastSubject_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** If enabled, rebroadcast this subject */" },
		{ "EditCondition", "bAllowModifyingRebroadcast" },
		{ "ModuleRelativePath", "Public/LiveLinkSubjectSettings.h" },
		{ "ToolTip", "If enabled, rebroadcast this subject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginalSourceName_MetaData[] = {
		{ "Comment", "/** For sources created through LiveLinkHub, this contains the name of the original source for display purposes.*/" },
		{ "ModuleRelativePath", "Public/LiveLinkSubjectSettings.h" },
		{ "ToolTip", "For sources created through LiveLinkHub, this contains the name of the original source for display purposes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "Comment", "/** Key of the subject that owns this setting. */" },
		{ "ModuleRelativePath", "Public/LiveLinkSubjectSettings.h" },
		{ "ToolTip", "Key of the subject that owns this setting." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreProcessors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PreProcessors;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InterpolationProcessor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Translators_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Translators;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Remapper;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Role;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FrameRate;
	static void NewProp_bAllowModifyingRebroadcast_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowModifyingRebroadcast;
	static void NewProp_bRebroadcastSubject_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRebroadcastSubject;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OriginalSourceName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkSubjectSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_PreProcessors_Inner = { "PreProcessors", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULiveLinkFramePreProcessor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreProcessors_Inner_MetaData), NewProp_PreProcessors_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_PreProcessors = { "PreProcessors", nullptr, (EPropertyFlags)0x0114008000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkSubjectSettings, PreProcessors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreProcessors_MetaData), NewProp_PreProcessors_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_InterpolationProcessor = { "InterpolationProcessor", nullptr, (EPropertyFlags)0x0116000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkSubjectSettings, InterpolationProcessor), Z_Construct_UClass_ULiveLinkFrameInterpolationProcessor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpolationProcessor_MetaData), NewProp_InterpolationProcessor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_Translators_Inner = { "Translators", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULiveLinkFrameTranslator_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Translators_Inner_MetaData), NewProp_Translators_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_Translators = { "Translators", nullptr, (EPropertyFlags)0x0114008000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkSubjectSettings, Translators), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Translators_MetaData), NewProp_Translators_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_Remapper = { "Remapper", nullptr, (EPropertyFlags)0x0116000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkSubjectSettings, Remapper), Z_Construct_UClass_ULiveLinkSubjectRemapper_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Remapper_MetaData), NewProp_Remapper_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_Role = { "Role", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkSubjectSettings, Role), Z_Construct_UClass_UClass, Z_Construct_UClass_ULiveLinkRole_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Role_MetaData), NewProp_Role_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_FrameRate = { "FrameRate", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkSubjectSettings, FrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameRate_MetaData), NewProp_FrameRate_MetaData) };
void Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_bAllowModifyingRebroadcast_SetBit(void* Obj)
{
	((ULiveLinkSubjectSettings*)Obj)->bAllowModifyingRebroadcast = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_bAllowModifyingRebroadcast = { "bAllowModifyingRebroadcast", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULiveLinkSubjectSettings), &Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_bAllowModifyingRebroadcast_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowModifyingRebroadcast_MetaData), NewProp_bAllowModifyingRebroadcast_MetaData) };
void Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_bRebroadcastSubject_SetBit(void* Obj)
{
	((ULiveLinkSubjectSettings*)Obj)->bRebroadcastSubject = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_bRebroadcastSubject = { "bRebroadcastSubject", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULiveLinkSubjectSettings), &Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_bRebroadcastSubject_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRebroadcastSubject_MetaData), NewProp_bRebroadcastSubject_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_OriginalSourceName = { "OriginalSourceName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkSubjectSettings, OriginalSourceName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginalSourceName_MetaData), NewProp_OriginalSourceName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkSubjectSettings, Key), Z_Construct_UScriptStruct_FLiveLinkSubjectKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) }; // 896940852
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_PreProcessors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_PreProcessors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_InterpolationProcessor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_Translators_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_Translators,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_Remapper,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_Role,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_FrameRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_bAllowModifyingRebroadcast,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_bRebroadcastSubject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_OriginalSourceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_Key,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::ClassParams = {
	&ULiveLinkSubjectSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULiveLinkSubjectSettings()
{
	if (!Z_Registration_Info_UClass_ULiveLinkSubjectSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkSubjectSettings.OuterSingleton, Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULiveLinkSubjectSettings.OuterSingleton;
}
template<> LIVELINKINTERFACE_API UClass* StaticClass<ULiveLinkSubjectSettings>()
{
	return ULiveLinkSubjectSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkSubjectSettings);
ULiveLinkSubjectSettings::~ULiveLinkSubjectSettings() {}
// End Class ULiveLinkSubjectSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSubjectSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkDefaultSubjectSettings, ULiveLinkDefaultSubjectSettings::StaticClass, TEXT("ULiveLinkDefaultSubjectSettings"), &Z_Registration_Info_UClass_ULiveLinkDefaultSubjectSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkDefaultSubjectSettings), 723651732U) },
		{ Z_Construct_UClass_ULiveLinkSubjectSettings, ULiveLinkSubjectSettings::StaticClass, TEXT("ULiveLinkSubjectSettings"), &Z_Registration_Info_UClass_ULiveLinkSubjectSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkSubjectSettings), 108827946U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSubjectSettings_h_1206748997(TEXT("/Script/LiveLinkInterface"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSubjectSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSubjectSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
