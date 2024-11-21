// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusCore/Private/DataInterfaces/OptimusDataInterfaceAnimAttribute.h"
#include "OptimusCore/Public/OptimusDataType.h"
#include "OptimusCore/Public/OptimusValueContainerStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusDataInterfaceAnimAttribute() {}

// Begin Cross Module References
COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeDataProvider();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusAnimAttributeDataInterface();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusAnimAttributeDataInterface_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusAnimAttributeDataProvider();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusAnimAttributeDataProvider_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComputeDataInterface();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusValueContainer_NoRegister();
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusAnimAttributeArray();
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusAnimAttributeDescription();
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusDataTypeRef();
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusValueContainerStruct();
UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References

// Begin ScriptStruct FOptimusAnimAttributeDescription
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusAnimAttributeDescription;
class UScriptStruct* FOptimusAnimAttributeDescription::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusAnimAttributeDescription.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusAnimAttributeDescription.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusAnimAttributeDescription, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusAnimAttributeDescription"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusAnimAttributeDescription.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusAnimAttributeDescription>()
{
	return FOptimusAnimAttributeDescription::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOptimusAnimAttributeDescription_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceAnimAttribute.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Data Interface" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceAnimAttribute.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[] = {
		{ "Category", "Data Interface" },
		{ "Comment", "// Used to look for attributes associated with a specific bone. Default to use the root bone\n" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceAnimAttribute.h" },
		{ "ToolTip", "Used to look for attributes associated with a specific bone. Default to use the root bone" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataType_MetaData[] = {
		{ "Category", "Data Interface" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceAnimAttribute.h" },
		{ "UseInAnimAttribute", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValueStruct_MetaData[] = {
		{ "Category", "Data Interface" },
		{ "Comment", "// Default value if the animation attribute is not found\n" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceAnimAttribute.h" },
		{ "ToolTip", "Default value if the animation attribute is not found" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HlslId_MetaData[] = {
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceAnimAttribute.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PinName_MetaData[] = {
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceAnimAttribute.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
		{ "Comment", "// Deprecated\n" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "use DefaultValueStruct instead" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceAnimAttribute.h" },
		{ "ToolTip", "Deprecated" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultValueStruct;
	static const UECodeGen_Private::FStrPropertyParams NewProp_HlslId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PinName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusAnimAttributeDescription>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOptimusAnimAttributeDescription_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusAnimAttributeDescription, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FOptimusAnimAttributeDescription_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusAnimAttributeDescription, BoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneName_MetaData), NewProp_BoneName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOptimusAnimAttributeDescription_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusAnimAttributeDescription, DataType), Z_Construct_UScriptStruct_FOptimusDataTypeRef, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataType_MetaData), NewProp_DataType_MetaData) }; // 1626052194
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOptimusAnimAttributeDescription_Statics::NewProp_DefaultValueStruct = { "DefaultValueStruct", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusAnimAttributeDescription, DefaultValueStruct), Z_Construct_UScriptStruct_FOptimusValueContainerStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValueStruct_MetaData), NewProp_DefaultValueStruct_MetaData) }; // 2317148538
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOptimusAnimAttributeDescription_Statics::NewProp_HlslId = { "HlslId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusAnimAttributeDescription, HlslId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HlslId_MetaData), NewProp_HlslId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FOptimusAnimAttributeDescription_Statics::NewProp_PinName = { "PinName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusAnimAttributeDescription, PinName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PinName_MetaData), NewProp_PinName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOptimusAnimAttributeDescription_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0144000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusAnimAttributeDescription, DefaultValue_DEPRECATED), Z_Construct_UClass_UOptimusValueContainer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValue_MetaData), NewProp_DefaultValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOptimusAnimAttributeDescription_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusAnimAttributeDescription_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusAnimAttributeDescription_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusAnimAttributeDescription_Statics::NewProp_DataType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusAnimAttributeDescription_Statics::NewProp_DefaultValueStruct,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusAnimAttributeDescription_Statics::NewProp_HlslId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusAnimAttributeDescription_Statics::NewProp_PinName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusAnimAttributeDescription_Statics::NewProp_DefaultValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusAnimAttributeDescription_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusAnimAttributeDescription_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	nullptr,
	&NewStructOps,
	"OptimusAnimAttributeDescription",
	Z_Construct_UScriptStruct_FOptimusAnimAttributeDescription_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusAnimAttributeDescription_Statics::PropPointers),
	sizeof(FOptimusAnimAttributeDescription),
	alignof(FOptimusAnimAttributeDescription),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusAnimAttributeDescription_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOptimusAnimAttributeDescription_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOptimusAnimAttributeDescription()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusAnimAttributeDescription.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusAnimAttributeDescription.InnerSingleton, Z_Construct_UScriptStruct_FOptimusAnimAttributeDescription_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OptimusAnimAttributeDescription.InnerSingleton;
}
// End ScriptStruct FOptimusAnimAttributeDescription

// Begin ScriptStruct FOptimusAnimAttributeArray
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusAnimAttributeArray;
class UScriptStruct* FOptimusAnimAttributeArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusAnimAttributeArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusAnimAttributeArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusAnimAttributeArray, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusAnimAttributeArray"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusAnimAttributeArray.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusAnimAttributeArray>()
{
	return FOptimusAnimAttributeArray::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOptimusAnimAttributeArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceAnimAttribute.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InnerArray_MetaData[] = {
		{ "Category", "Data Interface" },
		{ "DisplayName", "Animation Attributes" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceAnimAttribute.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InnerArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InnerArray;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusAnimAttributeArray>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOptimusAnimAttributeArray_Statics::NewProp_InnerArray_Inner = { "InnerArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOptimusAnimAttributeDescription, METADATA_PARAMS(0, nullptr) }; // 724855163
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOptimusAnimAttributeArray_Statics::NewProp_InnerArray = { "InnerArray", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusAnimAttributeArray, InnerArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InnerArray_MetaData), NewProp_InnerArray_MetaData) }; // 724855163
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOptimusAnimAttributeArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusAnimAttributeArray_Statics::NewProp_InnerArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusAnimAttributeArray_Statics::NewProp_InnerArray,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusAnimAttributeArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusAnimAttributeArray_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	nullptr,
	&NewStructOps,
	"OptimusAnimAttributeArray",
	Z_Construct_UScriptStruct_FOptimusAnimAttributeArray_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusAnimAttributeArray_Statics::PropPointers),
	sizeof(FOptimusAnimAttributeArray),
	alignof(FOptimusAnimAttributeArray),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusAnimAttributeArray_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOptimusAnimAttributeArray_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOptimusAnimAttributeArray()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusAnimAttributeArray.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusAnimAttributeArray.InnerSingleton, Z_Construct_UScriptStruct_FOptimusAnimAttributeArray_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OptimusAnimAttributeArray.InnerSingleton;
}
// End ScriptStruct FOptimusAnimAttributeArray

// Begin Class UOptimusAnimAttributeDataInterface
void UOptimusAnimAttributeDataInterface::StaticRegisterNativesUOptimusAnimAttributeDataInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusAnimAttributeDataInterface);
UClass* Z_Construct_UClass_UOptimusAnimAttributeDataInterface_NoRegister()
{
	return UOptimusAnimAttributeDataInterface::StaticClass();
}
struct Z_Construct_UClass_UOptimusAnimAttributeDataInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "ComputeFramework" },
		{ "Comment", "/** Compute Framework Data Interface for reading animation attributes on skeletal mesh. */" },
		{ "IncludePath", "DataInterfaces/OptimusDataInterfaceAnimAttribute.h" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceAnimAttribute.h" },
		{ "ToolTip", "Compute Framework Data Interface for reading animation attributes on skeletal mesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeArray_MetaData[] = {
		{ "Category", "Animation Attribute" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceAnimAttribute.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeArray;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusAnimAttributeDataInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOptimusAnimAttributeDataInterface_Statics::NewProp_AttributeArray = { "AttributeArray", nullptr, (EPropertyFlags)0x0010000000000011, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusAnimAttributeDataInterface, AttributeArray), Z_Construct_UScriptStruct_FOptimusAnimAttributeArray, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeArray_MetaData), NewProp_AttributeArray_MetaData) }; // 3144369737
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusAnimAttributeDataInterface_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusAnimAttributeDataInterface_Statics::NewProp_AttributeArray,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusAnimAttributeDataInterface_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOptimusAnimAttributeDataInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOptimusComputeDataInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusAnimAttributeDataInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusAnimAttributeDataInterface_Statics::ClassParams = {
	&UOptimusAnimAttributeDataInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOptimusAnimAttributeDataInterface_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusAnimAttributeDataInterface_Statics::PropPointers),
	0,
	0x001100A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusAnimAttributeDataInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusAnimAttributeDataInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusAnimAttributeDataInterface()
{
	if (!Z_Registration_Info_UClass_UOptimusAnimAttributeDataInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusAnimAttributeDataInterface.OuterSingleton, Z_Construct_UClass_UOptimusAnimAttributeDataInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusAnimAttributeDataInterface.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusAnimAttributeDataInterface>()
{
	return UOptimusAnimAttributeDataInterface::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusAnimAttributeDataInterface);
UOptimusAnimAttributeDataInterface::~UOptimusAnimAttributeDataInterface() {}
// End Class UOptimusAnimAttributeDataInterface

// Begin Class UOptimusAnimAttributeDataProvider
void UOptimusAnimAttributeDataProvider::StaticRegisterNativesUOptimusAnimAttributeDataProvider()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusAnimAttributeDataProvider);
UClass* Z_Construct_UClass_UOptimusAnimAttributeDataProvider_NoRegister()
{
	return UOptimusAnimAttributeDataProvider::StaticClass();
}
struct Z_Construct_UClass_UOptimusAnimAttributeDataProvider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "ComputeFramework" },
		{ "Comment", "/** Compute Framework Data Provider for reading animation attributes on skeletal mesh. */" },
		{ "IncludePath", "DataInterfaces/OptimusDataInterfaceAnimAttribute.h" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceAnimAttribute.h" },
		{ "ToolTip", "Compute Framework Data Provider for reading animation attributes on skeletal mesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[] = {
		{ "Category", "Binding" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceAnimAttribute.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusAnimAttributeDataProvider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOptimusAnimAttributeDataProvider_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusAnimAttributeDataProvider, SkeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMesh_MetaData), NewProp_SkeletalMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusAnimAttributeDataProvider_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusAnimAttributeDataProvider_Statics::NewProp_SkeletalMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusAnimAttributeDataProvider_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOptimusAnimAttributeDataProvider_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UComputeDataProvider,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusAnimAttributeDataProvider_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusAnimAttributeDataProvider_Statics::ClassParams = {
	&UOptimusAnimAttributeDataProvider::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOptimusAnimAttributeDataProvider_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusAnimAttributeDataProvider_Statics::PropPointers),
	0,
	0x008010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusAnimAttributeDataProvider_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusAnimAttributeDataProvider_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusAnimAttributeDataProvider()
{
	if (!Z_Registration_Info_UClass_UOptimusAnimAttributeDataProvider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusAnimAttributeDataProvider.OuterSingleton, Z_Construct_UClass_UOptimusAnimAttributeDataProvider_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusAnimAttributeDataProvider.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusAnimAttributeDataProvider>()
{
	return UOptimusAnimAttributeDataProvider::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusAnimAttributeDataProvider);
UOptimusAnimAttributeDataProvider::~UOptimusAnimAttributeDataProvider() {}
// End Class UOptimusAnimAttributeDataProvider

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceAnimAttribute_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOptimusAnimAttributeDescription::StaticStruct, Z_Construct_UScriptStruct_FOptimusAnimAttributeDescription_Statics::NewStructOps, TEXT("OptimusAnimAttributeDescription"), &Z_Registration_Info_UScriptStruct_OptimusAnimAttributeDescription, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusAnimAttributeDescription), 724855163U) },
		{ FOptimusAnimAttributeArray::StaticStruct, Z_Construct_UScriptStruct_FOptimusAnimAttributeArray_Statics::NewStructOps, TEXT("OptimusAnimAttributeArray"), &Z_Registration_Info_UScriptStruct_OptimusAnimAttributeArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusAnimAttributeArray), 3144369737U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusAnimAttributeDataInterface, UOptimusAnimAttributeDataInterface::StaticClass, TEXT("UOptimusAnimAttributeDataInterface"), &Z_Registration_Info_UClass_UOptimusAnimAttributeDataInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusAnimAttributeDataInterface), 2342989734U) },
		{ Z_Construct_UClass_UOptimusAnimAttributeDataProvider, UOptimusAnimAttributeDataProvider::StaticClass, TEXT("UOptimusAnimAttributeDataProvider"), &Z_Registration_Info_UClass_UOptimusAnimAttributeDataProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusAnimAttributeDataProvider), 2278673159U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceAnimAttribute_h_2267216623(TEXT("/Script/OptimusCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceAnimAttribute_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceAnimAttribute_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceAnimAttribute_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceAnimAttribute_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
