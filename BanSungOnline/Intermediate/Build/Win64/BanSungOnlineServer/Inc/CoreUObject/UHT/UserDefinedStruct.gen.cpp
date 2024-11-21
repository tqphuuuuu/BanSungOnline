// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/CoreUObject/Public/StructUtils/UserDefinedStruct.h"
#include "Serialization/StructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUserDefinedStruct() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UScriptStruct();
COREUOBJECT_API UClass* Z_Construct_UClass_UStructCookedMetaData_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UUserDefinedStruct();
COREUOBJECT_API UClass* Z_Construct_UClass_UUserDefinedStruct_NoRegister();
COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EUserDefinedStructureStatus();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
UPackage* Z_Construct_UPackage__Script_CoreUObject();
// End Cross Module References

// Begin Enum EUserDefinedStructureStatus
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUserDefinedStructureStatus;
static UEnum* EUserDefinedStructureStatus_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EUserDefinedStructureStatus.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EUserDefinedStructureStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CoreUObject_EUserDefinedStructureStatus, (UObject*)Z_Construct_UPackage__Script_CoreUObject(), TEXT("EUserDefinedStructureStatus"));
	}
	return Z_Registration_Info_UEnum_EUserDefinedStructureStatus.OuterSingleton;
}
template<> COREUOBJECT_API UEnum* StaticEnum<EUserDefinedStructureStatus>()
{
	return EUserDefinedStructureStatus_StaticEnum();
}
struct Z_Construct_UEnum_CoreUObject_EUserDefinedStructureStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StructUtils/UserDefinedStruct.h" },
		{ "UDSS_Dirty.Comment", "/** Struct has been modified but not recompiled. */" },
		{ "UDSS_Dirty.Name", "UDSS_Dirty" },
		{ "UDSS_Dirty.ToolTip", "Struct has been modified but not recompiled." },
		{ "UDSS_Duplicate.Comment", "/** Struct is a duplicate, the original one was changed. */" },
		{ "UDSS_Duplicate.Name", "UDSS_Duplicate" },
		{ "UDSS_Duplicate.ToolTip", "Struct is a duplicate, the original one was changed." },
		{ "UDSS_Error.Comment", "/** Struct tried but failed to be compiled. */" },
		{ "UDSS_Error.Name", "UDSS_Error" },
		{ "UDSS_Error.ToolTip", "Struct tried but failed to be compiled." },
		{ "UDSS_MAX.Name", "UDSS_MAX" },
		{ "UDSS_UpToDate.Comment", "/** Struct is in an unknown state. */" },
		{ "UDSS_UpToDate.Name", "UDSS_UpToDate" },
		{ "UDSS_UpToDate.ToolTip", "Struct is in an unknown state." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "UDSS_UpToDate", (int64)UDSS_UpToDate },
		{ "UDSS_Dirty", (int64)UDSS_Dirty },
		{ "UDSS_Error", (int64)UDSS_Error },
		{ "UDSS_Duplicate", (int64)UDSS_Duplicate },
		{ "UDSS_MAX", (int64)UDSS_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CoreUObject_EUserDefinedStructureStatus_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CoreUObject,
	nullptr,
	"EUserDefinedStructureStatus",
	"EUserDefinedStructureStatus",
	Z_Construct_UEnum_CoreUObject_EUserDefinedStructureStatus_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CoreUObject_EUserDefinedStructureStatus_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CoreUObject_EUserDefinedStructureStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CoreUObject_EUserDefinedStructureStatus_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CoreUObject_EUserDefinedStructureStatus()
{
	if (!Z_Registration_Info_UEnum_EUserDefinedStructureStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUserDefinedStructureStatus.InnerSingleton, Z_Construct_UEnum_CoreUObject_EUserDefinedStructureStatus_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EUserDefinedStructureStatus.InnerSingleton;
}
// End Enum EUserDefinedStructureStatus

// Begin Class UUserDefinedStruct
void UUserDefinedStruct::StaticRegisterNativesUUserDefinedStruct()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUserDefinedStruct);
UClass* Z_Construct_UClass_UUserDefinedStruct_NoRegister()
{
	return UUserDefinedStruct::StaticClass();
}
struct Z_Construct_UClass_UUserDefinedStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "StructUtils/UserDefinedStruct.h" },
		{ "ModuleRelativePath", "Public/StructUtils/UserDefinedStruct.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryStruct_MetaData[] = {
		{ "Comment", "/** The original struct, when current struct isn't a temporary duplicate, the field should be null */" },
		{ "ModuleRelativePath", "Public/StructUtils/UserDefinedStruct.h" },
		{ "ToolTip", "The original struct, when current struct isn't a temporary duplicate, the field should be null" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[] = {
		{ "ModuleRelativePath", "Public/StructUtils/UserDefinedStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditorData_MetaData[] = {
		{ "ModuleRelativePath", "Public/StructUtils/UserDefinedStruct.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[] = {
		{ "Comment", "/** Status of this struct, outside of the editor it is assumed to always be UpToDate */" },
		{ "ModuleRelativePath", "Public/StructUtils/UserDefinedStruct.h" },
		{ "ToolTip", "Status of this struct, outside of the editor it is assumed to always be UpToDate" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[] = {
		{ "Comment", "/** Uniquely identifies this specific user struct */" },
		{ "ModuleRelativePath", "Public/StructUtils/UserDefinedStruct.h" },
		{ "ToolTip", "Uniquely identifies this specific user struct" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedCookedMetaDataPtr_MetaData[] = {
		{ "ModuleRelativePath", "Public/StructUtils/UserDefinedStruct.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_PrimaryStruct;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EditorData;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Status;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Guid;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedCookedMetaDataPtr;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUserDefinedStruct>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UUserDefinedStruct_Statics::NewProp_PrimaryStruct = { "PrimaryStruct", nullptr, (EPropertyFlags)0x0014000800002000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUserDefinedStruct, PrimaryStruct), Z_Construct_UClass_UUserDefinedStruct_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimaryStruct_MetaData), NewProp_PrimaryStruct_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUserDefinedStruct_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUserDefinedStruct, ErrorMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorMessage_MetaData), NewProp_ErrorMessage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUserDefinedStruct_Statics::NewProp_EditorData = { "EditorData", nullptr, (EPropertyFlags)0x0114000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUserDefinedStruct, EditorData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditorData_MetaData), NewProp_EditorData_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUserDefinedStruct_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUserDefinedStruct, Status), Z_Construct_UEnum_CoreUObject_EUserDefinedStructureStatus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Status_MetaData), NewProp_Status_MetaData) }; // 3531760225
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUserDefinedStruct_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010010000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUserDefinedStruct, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Guid_MetaData), NewProp_Guid_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUserDefinedStruct_Statics::NewProp_CachedCookedMetaDataPtr = { "CachedCookedMetaDataPtr", nullptr, (EPropertyFlags)0x0144000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUserDefinedStruct, CachedCookedMetaDataPtr), Z_Construct_UClass_UStructCookedMetaData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedCookedMetaDataPtr_MetaData), NewProp_CachedCookedMetaDataPtr_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUserDefinedStruct_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserDefinedStruct_Statics::NewProp_PrimaryStruct,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserDefinedStruct_Statics::NewProp_ErrorMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserDefinedStruct_Statics::NewProp_EditorData,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserDefinedStruct_Statics::NewProp_Status,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserDefinedStruct_Statics::NewProp_Guid,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserDefinedStruct_Statics::NewProp_CachedCookedMetaDataPtr,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUserDefinedStruct_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUserDefinedStruct_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UScriptStruct,
	(UObject* (*)())Z_Construct_UPackage__Script_CoreUObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUserDefinedStruct_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUserDefinedStruct_Statics::ClassParams = {
	&UUserDefinedStruct::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UUserDefinedStruct_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UUserDefinedStruct_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUserDefinedStruct_Statics::Class_MetaDataParams), Z_Construct_UClass_UUserDefinedStruct_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUserDefinedStruct()
{
	if (!Z_Registration_Info_UClass_UUserDefinedStruct.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUserDefinedStruct.OuterSingleton, Z_Construct_UClass_UUserDefinedStruct_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUserDefinedStruct.OuterSingleton;
}
template<> COREUOBJECT_API UClass* StaticClass<UUserDefinedStruct>()
{
	return UUserDefinedStruct::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUserDefinedStruct);
UUserDefinedStruct::~UUserDefinedStruct() {}
IMPLEMENT_FARCHIVE_SERIALIZER(UUserDefinedStruct)
// End Class UUserDefinedStruct

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_UserDefinedStruct_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EUserDefinedStructureStatus_StaticEnum, TEXT("EUserDefinedStructureStatus"), &Z_Registration_Info_UEnum_EUserDefinedStructureStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3531760225U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUserDefinedStruct, UUserDefinedStruct::StaticClass, TEXT("UUserDefinedStruct"), &Z_Registration_Info_UClass_UUserDefinedStruct, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUserDefinedStruct), 1203971090U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_UserDefinedStruct_h_3536726952(TEXT("/Script/CoreUObject"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_UserDefinedStruct_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_UserDefinedStruct_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_UserDefinedStruct_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_UserDefinedStruct_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
