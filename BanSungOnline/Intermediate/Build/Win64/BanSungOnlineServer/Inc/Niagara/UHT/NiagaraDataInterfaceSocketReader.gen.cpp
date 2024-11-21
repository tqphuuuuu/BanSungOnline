// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Internal/DataInterface/NiagaraDataInterfaceSocketReader.h"
#include "Niagara/Public/NiagaraCommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceSocketReader() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceSocketReader();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceSocketReader_NoRegister();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENDISocketReaderSourceMode();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraUserParameterBinding();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Enum ENDISocketReaderSourceMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENDISocketReaderSourceMode;
static UEnum* ENDISocketReaderSourceMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENDISocketReaderSourceMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENDISocketReaderSourceMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENDISocketReaderSourceMode, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENDISocketReaderSourceMode"));
	}
	return Z_Registration_Info_UEnum_ENDISocketReaderSourceMode.OuterSingleton;
}
template<> NIAGARA_API UEnum* StaticEnum<ENDISocketReaderSourceMode>()
{
	return ENDISocketReaderSourceMode_StaticEnum();
}
struct Z_Construct_UEnum_Niagara_ENDISocketReaderSourceMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AttachedParentOnly.Comment", "// Read from the attached parent only\n// This will traverse the attachment hierarchy\n" },
		{ "AttachedParentOnly.Name", "ENDISocketReaderSourceMode::AttachedParentOnly" },
		{ "AttachedParentOnly.ToolTip", "Read from the attached parent only\nThis will traverse the attachment hierarchy" },
		{ "Default.Comment", "// Reads in the order of Parameter Binding -> Attached Parent -> Source\n" },
		{ "Default.Name", "ENDISocketReaderSourceMode::Default" },
		{ "Default.ToolTip", "Reads in the order of Parameter Binding -> Attached Parent -> Source" },
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceSocketReader.h" },
		{ "ParameterBindingOnly.Comment", "// Read from the parameter binding only\n" },
		{ "ParameterBindingOnly.Name", "ENDISocketReaderSourceMode::ParameterBindingOnly" },
		{ "ParameterBindingOnly.ToolTip", "Read from the parameter binding only" },
		{ "SourceOnly.Comment", "// Read from the source only\n// This will read the Source Actor first then Source Asset\n" },
		{ "SourceOnly.Name", "ENDISocketReaderSourceMode::SourceOnly" },
		{ "SourceOnly.ToolTip", "Read from the source only\nThis will read the Source Actor first then Source Asset" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENDISocketReaderSourceMode::Default", (int64)ENDISocketReaderSourceMode::Default },
		{ "ENDISocketReaderSourceMode::ParameterBindingOnly", (int64)ENDISocketReaderSourceMode::ParameterBindingOnly },
		{ "ENDISocketReaderSourceMode::AttachedParentOnly", (int64)ENDISocketReaderSourceMode::AttachedParentOnly },
		{ "ENDISocketReaderSourceMode::SourceOnly", (int64)ENDISocketReaderSourceMode::SourceOnly },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENDISocketReaderSourceMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	"ENDISocketReaderSourceMode",
	"ENDISocketReaderSourceMode",
	Z_Construct_UEnum_Niagara_ENDISocketReaderSourceMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENDISocketReaderSourceMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENDISocketReaderSourceMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Niagara_ENDISocketReaderSourceMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Niagara_ENDISocketReaderSourceMode()
{
	if (!Z_Registration_Info_UEnum_ENDISocketReaderSourceMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENDISocketReaderSourceMode.InnerSingleton, Z_Construct_UEnum_Niagara_ENDISocketReaderSourceMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENDISocketReaderSourceMode.InnerSingleton;
}
// End Enum ENDISocketReaderSourceMode

// Begin Class UNiagaraDataInterfaceSocketReader
void UNiagaraDataInterfaceSocketReader::StaticRegisterNativesUNiagaraDataInterfaceSocketReader()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceSocketReader);
UClass* Z_Construct_UClass_UNiagaraDataInterfaceSocketReader_NoRegister()
{
	return UNiagaraDataInterfaceSocketReader::StaticClass();
}
struct Z_Construct_UClass_UNiagaraDataInterfaceSocketReader_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Actor" },
		{ "Comment", "/**\nData interface for reading sockets from various sources.\nThis can be from a live component in the scene or from a static / skeletal mesh asset.\n*/" },
		{ "DisplayName", "Socket Reader" },
		{ "IncludePath", "DataInterface/NiagaraDataInterfaceSocketReader.h" },
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceSocketReader.h" },
		{ "ToolTip", "Data interface for reading sockets from various sources.\nThis can be from a live component in the scene or from a static / skeletal mesh asset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceMode_MetaData[] = {
		{ "Category", "SocketReader" },
		{ "Comment", "/** Controls how we find the object we want to read sockets from. */" },
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceSocketReader.h" },
		{ "ToolTip", "Controls how we find the object we want to read sockets from." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilteredSockets_MetaData[] = {
		{ "Category", "SocketReader" },
		{ "Comment", "/** List of filtered sockets. */" },
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceSocketReader.h" },
		{ "ToolTip", "List of filtered sockets." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditorPreviewAsset_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.StaticMesh,/Script/Engine.SkeletalMesh" },
		{ "Category", "SocketReader" },
		{ "Comment", "/** When previewing in the editor this is the asset to use to gather the socket information. */" },
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceSocketReader.h" },
		{ "ToolTip", "When previewing in the editor this is the asset to use to gather the socket information." },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceActor_MetaData[] = {
		{ "Category", "SocketReader" },
		{ "Comment", "/** Source actor to read sockets from. */" },
		{ "EditCondition", "SourceMode == ENDISocketReaderSourceMode::Default || SourceMode == ENDISocketReaderSourceMode::SourceOnly" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceSocketReader.h" },
		{ "ToolTip", "Source actor to read sockets from." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceAsset_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.StaticMesh,/Script/Engine.SkeletalMesh" },
		{ "Category", "SocketReader" },
		{ "Comment", "/** Source object asset to read sockets from, the transsform for these would be in relation to the Niagara system. */" },
		{ "EditCondition", "SourceMode == ENDISocketReaderSourceMode::Default || SourceMode == ENDISocketReaderSourceMode::SourceOnly" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceSocketReader.h" },
		{ "ToolTip", "Source object asset to read sockets from, the transsform for these would be in relation to the Niagara system." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachComponentClass_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.SceneComponent" },
		{ "Category", "SocketReader" },
		{ "Comment", "/** When looking for an attached parent component only accept this type of component. */" },
		{ "EditCondition", "SourceMode == ENDISocketReaderSourceMode::Default || SourceMode == ENDISocketReaderSourceMode::AttachedParentOnly" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceSocketReader.h" },
		{ "ToolTip", "When looking for an attached parent component only accept this type of component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachComponentTag_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.SceneComponent" },
		{ "Category", "SocketReader" },
		{ "Comment", "/** When looking for an attached parent component it must have this tag to be considered. */" },
		{ "EditCondition", "SourceMode == ENDISocketReaderSourceMode::Default || SourceMode == ENDISocketReaderSourceMode::AttachedParentOnly" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceSocketReader.h" },
		{ "ToolTip", "When looking for an attached parent component it must have this tag to be considered." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectParameterBinding_MetaData[] = {
		{ "Category", "SocketReader" },
		{ "Comment", "/**\n\x09Source object parameter binding.\n\x09Note: Source Mode impacts the order of operations.\n\x09*/" },
		{ "EditCondition", "SourceMode == ENDISocketReaderSourceMode::Default || SourceMode == ENDISocketReaderSourceMode::ParameterBindingOnly" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceSocketReader.h" },
		{ "ToolTip", "Source object parameter binding.\nNote: Source Mode impacts the order of operations." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateSocketsPerFrame_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/**\n\x09When enabled we will read update the sockets transforms each frame.\n\x09This is not required in all cases as the sockets might not be able to move.\n\x09*/" },
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceSocketReader.h" },
		{ "ToolTip", "When enabled we will read update the sockets transforms each frame.\nThis is not required in all cases as the sockets might not be able to move." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequireCurrentFrameData_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/** When this option is disabled, we use the previous frame's data for the skeletal mesh and can often issue the simulation early. This greatly\n\x09reduces overhead and allows the game thread to run faster, but comes at a tradeoff if the dependencies might leave gaps or other visual artifacts.*/" },
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceSocketReader.h" },
		{ "ToolTip", "When this option is disabled, we use the previous frame's data for the skeletal mesh and can often issue the simulation early. This greatly\n      reduces overhead and allows the game thread to run faster, but comes at a tradeoff if the dependencies might leave gaps or other visual artifacts." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SourceMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SourceMode;
	static const UECodeGen_Private::FNamePropertyParams NewProp_FilteredSockets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FilteredSockets;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_EditorPreviewAsset;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FLazyObjectPropertyParams NewProp_SourceActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceAsset;
	static const UECodeGen_Private::FClassPropertyParams NewProp_AttachComponentClass;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AttachComponentTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectParameterBinding;
	static void NewProp_bUpdateSocketsPerFrame_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateSocketsPerFrame;
	static void NewProp_bRequireCurrentFrameData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequireCurrentFrameData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceSocketReader>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSocketReader_Statics::NewProp_SourceMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSocketReader_Statics::NewProp_SourceMode = { "SourceMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceSocketReader, SourceMode), Z_Construct_UEnum_Niagara_ENDISocketReaderSourceMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceMode_MetaData), NewProp_SourceMode_MetaData) }; // 2853614018
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSocketReader_Statics::NewProp_FilteredSockets_Inner = { "FilteredSockets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSocketReader_Statics::NewProp_FilteredSockets = { "FilteredSockets", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceSocketReader, FilteredSockets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilteredSockets_MetaData), NewProp_FilteredSockets_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSocketReader_Statics::NewProp_EditorPreviewAsset = { "EditorPreviewAsset", nullptr, (EPropertyFlags)0x0014000800000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceSocketReader, EditorPreviewAsset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditorPreviewAsset_MetaData), NewProp_EditorPreviewAsset_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FLazyObjectPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSocketReader_Statics::NewProp_SourceActor = { "SourceActor", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::LazyObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceSocketReader, SourceActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceActor_MetaData), NewProp_SourceActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSocketReader_Statics::NewProp_SourceAsset = { "SourceAsset", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceSocketReader, SourceAsset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceAsset_MetaData), NewProp_SourceAsset_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSocketReader_Statics::NewProp_AttachComponentClass = { "AttachComponentClass", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceSocketReader, AttachComponentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachComponentClass_MetaData), NewProp_AttachComponentClass_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSocketReader_Statics::NewProp_AttachComponentTag = { "AttachComponentTag", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceSocketReader, AttachComponentTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachComponentTag_MetaData), NewProp_AttachComponentTag_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSocketReader_Statics::NewProp_ObjectParameterBinding = { "ObjectParameterBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceSocketReader, ObjectParameterBinding), Z_Construct_UScriptStruct_FNiagaraUserParameterBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectParameterBinding_MetaData), NewProp_ObjectParameterBinding_MetaData) }; // 174428838
void Z_Construct_UClass_UNiagaraDataInterfaceSocketReader_Statics::NewProp_bUpdateSocketsPerFrame_SetBit(void* Obj)
{
	((UNiagaraDataInterfaceSocketReader*)Obj)->bUpdateSocketsPerFrame = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSocketReader_Statics::NewProp_bUpdateSocketsPerFrame = { "bUpdateSocketsPerFrame", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraDataInterfaceSocketReader), &Z_Construct_UClass_UNiagaraDataInterfaceSocketReader_Statics::NewProp_bUpdateSocketsPerFrame_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUpdateSocketsPerFrame_MetaData), NewProp_bUpdateSocketsPerFrame_MetaData) };
void Z_Construct_UClass_UNiagaraDataInterfaceSocketReader_Statics::NewProp_bRequireCurrentFrameData_SetBit(void* Obj)
{
	((UNiagaraDataInterfaceSocketReader*)Obj)->bRequireCurrentFrameData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSocketReader_Statics::NewProp_bRequireCurrentFrameData = { "bRequireCurrentFrameData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraDataInterfaceSocketReader), &Z_Construct_UClass_UNiagaraDataInterfaceSocketReader_Statics::NewProp_bRequireCurrentFrameData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequireCurrentFrameData_MetaData), NewProp_bRequireCurrentFrameData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceSocketReader_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSocketReader_Statics::NewProp_SourceMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSocketReader_Statics::NewProp_SourceMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSocketReader_Statics::NewProp_FilteredSockets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSocketReader_Statics::NewProp_FilteredSockets,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSocketReader_Statics::NewProp_EditorPreviewAsset,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSocketReader_Statics::NewProp_SourceActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSocketReader_Statics::NewProp_SourceAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSocketReader_Statics::NewProp_AttachComponentClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSocketReader_Statics::NewProp_AttachComponentTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSocketReader_Statics::NewProp_ObjectParameterBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSocketReader_Statics::NewProp_bUpdateSocketsPerFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSocketReader_Statics::NewProp_bRequireCurrentFrameData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSocketReader_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceSocketReader_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSocketReader_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceSocketReader_Statics::ClassParams = {
	&UNiagaraDataInterfaceSocketReader::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraDataInterfaceSocketReader_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSocketReader_Statics::PropPointers),
	0,
	0x000830A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSocketReader_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraDataInterfaceSocketReader_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraDataInterfaceSocketReader()
{
	if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceSocketReader.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceSocketReader.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceSocketReader_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraDataInterfaceSocketReader.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceSocketReader>()
{
	return UNiagaraDataInterfaceSocketReader::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceSocketReader);
UNiagaraDataInterfaceSocketReader::~UNiagaraDataInterfaceSocketReader() {}
// End Class UNiagaraDataInterfaceSocketReader

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceSocketReader_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ENDISocketReaderSourceMode_StaticEnum, TEXT("ENDISocketReaderSourceMode"), &Z_Registration_Info_UEnum_ENDISocketReaderSourceMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2853614018U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceSocketReader, UNiagaraDataInterfaceSocketReader::StaticClass, TEXT("UNiagaraDataInterfaceSocketReader"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceSocketReader, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceSocketReader), 1790905744U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceSocketReader_h_3445794986(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceSocketReader_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceSocketReader_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceSocketReader_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceSocketReader_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
