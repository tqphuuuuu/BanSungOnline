// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusCore/Private/DataInterfaces/OptimusDataInterfaceAdvancedSkeleton.h"
#include "OptimusCore/Public/OptimusDataType.h"
#include "OptimusCore/Public/OptimusValueContainerStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusDataInterfaceAdvancedSkeleton() {}

// Begin Cross Module References
COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeDataProvider();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusAdvancedSkeletonDataInterface();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusAdvancedSkeletonDataInterface_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusAdvancedSkeletonDataProvider();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusAdvancedSkeletonDataProvider_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComputeDataInterface();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusDeformerInstance_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusDeformerInstanceAccessor_NoRegister();
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusAnimAttributeBufferArray();
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusAnimAttributeBufferDescription();
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusDataTypeRef();
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusValueContainerStruct();
UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References

// Begin ScriptStruct FOptimusAnimAttributeBufferDescription
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusAnimAttributeBufferDescription;
class UScriptStruct* FOptimusAnimAttributeBufferDescription::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusAnimAttributeBufferDescription.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusAnimAttributeBufferDescription.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusAnimAttributeBufferDescription, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusAnimAttributeBufferDescription"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusAnimAttributeBufferDescription.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusAnimAttributeBufferDescription>()
{
	return FOptimusAnimAttributeBufferDescription::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOptimusAnimAttributeBufferDescription_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceAdvancedSkeleton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Data Interface" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceAdvancedSkeleton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataType_MetaData[] = {
		{ "Category", "Data Interface" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceAdvancedSkeleton.h" },
		{ "UseInPerBoneAnimAttribute", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValueStruct_MetaData[] = {
		{ "Category", "Data Interface" },
		{ "Comment", "// Default value if the animation attribute is not found\n" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceAdvancedSkeleton.h" },
		{ "ToolTip", "Default value if the animation attribute is not found" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HlslId_MetaData[] = {
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceAdvancedSkeleton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PinName_MetaData[] = {
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceAdvancedSkeleton.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultValueStruct;
	static const UECodeGen_Private::FStrPropertyParams NewProp_HlslId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PinName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusAnimAttributeBufferDescription>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOptimusAnimAttributeBufferDescription_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusAnimAttributeBufferDescription, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOptimusAnimAttributeBufferDescription_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusAnimAttributeBufferDescription, DataType), Z_Construct_UScriptStruct_FOptimusDataTypeRef, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataType_MetaData), NewProp_DataType_MetaData) }; // 1626052194
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOptimusAnimAttributeBufferDescription_Statics::NewProp_DefaultValueStruct = { "DefaultValueStruct", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusAnimAttributeBufferDescription, DefaultValueStruct), Z_Construct_UScriptStruct_FOptimusValueContainerStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValueStruct_MetaData), NewProp_DefaultValueStruct_MetaData) }; // 2317148538
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOptimusAnimAttributeBufferDescription_Statics::NewProp_HlslId = { "HlslId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusAnimAttributeBufferDescription, HlslId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HlslId_MetaData), NewProp_HlslId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FOptimusAnimAttributeBufferDescription_Statics::NewProp_PinName = { "PinName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusAnimAttributeBufferDescription, PinName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PinName_MetaData), NewProp_PinName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOptimusAnimAttributeBufferDescription_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusAnimAttributeBufferDescription_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusAnimAttributeBufferDescription_Statics::NewProp_DataType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusAnimAttributeBufferDescription_Statics::NewProp_DefaultValueStruct,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusAnimAttributeBufferDescription_Statics::NewProp_HlslId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusAnimAttributeBufferDescription_Statics::NewProp_PinName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusAnimAttributeBufferDescription_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusAnimAttributeBufferDescription_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	nullptr,
	&NewStructOps,
	"OptimusAnimAttributeBufferDescription",
	Z_Construct_UScriptStruct_FOptimusAnimAttributeBufferDescription_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusAnimAttributeBufferDescription_Statics::PropPointers),
	sizeof(FOptimusAnimAttributeBufferDescription),
	alignof(FOptimusAnimAttributeBufferDescription),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusAnimAttributeBufferDescription_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOptimusAnimAttributeBufferDescription_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOptimusAnimAttributeBufferDescription()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusAnimAttributeBufferDescription.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusAnimAttributeBufferDescription.InnerSingleton, Z_Construct_UScriptStruct_FOptimusAnimAttributeBufferDescription_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OptimusAnimAttributeBufferDescription.InnerSingleton;
}
// End ScriptStruct FOptimusAnimAttributeBufferDescription

// Begin ScriptStruct FOptimusAnimAttributeBufferArray
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusAnimAttributeBufferArray;
class UScriptStruct* FOptimusAnimAttributeBufferArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusAnimAttributeBufferArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusAnimAttributeBufferArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusAnimAttributeBufferArray, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusAnimAttributeBufferArray"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusAnimAttributeBufferArray.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusAnimAttributeBufferArray>()
{
	return FOptimusAnimAttributeBufferArray::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOptimusAnimAttributeBufferArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceAdvancedSkeleton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InnerArray_MetaData[] = {
		{ "Category", "Data Interface" },
		{ "DisplayName", "Animation Attributes" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceAdvancedSkeleton.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InnerArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InnerArray;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusAnimAttributeBufferArray>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOptimusAnimAttributeBufferArray_Statics::NewProp_InnerArray_Inner = { "InnerArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOptimusAnimAttributeBufferDescription, METADATA_PARAMS(0, nullptr) }; // 167589644
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOptimusAnimAttributeBufferArray_Statics::NewProp_InnerArray = { "InnerArray", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusAnimAttributeBufferArray, InnerArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InnerArray_MetaData), NewProp_InnerArray_MetaData) }; // 167589644
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOptimusAnimAttributeBufferArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusAnimAttributeBufferArray_Statics::NewProp_InnerArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusAnimAttributeBufferArray_Statics::NewProp_InnerArray,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusAnimAttributeBufferArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusAnimAttributeBufferArray_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	nullptr,
	&NewStructOps,
	"OptimusAnimAttributeBufferArray",
	Z_Construct_UScriptStruct_FOptimusAnimAttributeBufferArray_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusAnimAttributeBufferArray_Statics::PropPointers),
	sizeof(FOptimusAnimAttributeBufferArray),
	alignof(FOptimusAnimAttributeBufferArray),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusAnimAttributeBufferArray_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOptimusAnimAttributeBufferArray_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOptimusAnimAttributeBufferArray()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusAnimAttributeBufferArray.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusAnimAttributeBufferArray.InnerSingleton, Z_Construct_UScriptStruct_FOptimusAnimAttributeBufferArray_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OptimusAnimAttributeBufferArray.InnerSingleton;
}
// End ScriptStruct FOptimusAnimAttributeBufferArray

// Begin Class UOptimusAdvancedSkeletonDataInterface
void UOptimusAdvancedSkeletonDataInterface::StaticRegisterNativesUOptimusAdvancedSkeletonDataInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusAdvancedSkeletonDataInterface);
UClass* Z_Construct_UClass_UOptimusAdvancedSkeletonDataInterface_NoRegister()
{
	return UOptimusAdvancedSkeletonDataInterface::StaticClass();
}
struct Z_Construct_UClass_UOptimusAdvancedSkeletonDataInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "ComputeFramework" },
		{ "Comment", "/** Compute Framework Data Interface for skeletal data. */" },
		{ "IncludePath", "DataInterfaces/OptimusDataInterfaceAdvancedSkeleton.h" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceAdvancedSkeleton.h" },
		{ "ToolTip", "Compute Framework Data Interface for skeletal data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkinWeightProfile_MetaData[] = {
		{ "Category", "Data Interface" },
		{ "Comment", "//~ End UComputeDataInterface Interface\n" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceAdvancedSkeleton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableLayeredSkinning_MetaData[] = {
		{ "Category", "Data Interface" },
		{ "Comment", "// If turned on, another set of bone matrices are computed per-frame to allow for layered skinning.\n// It is typically used with a secondary skin weight profile storing the weights of a subset of bones like tweaker bones.\n// The bind matrices for these bones are dynamic and computed based on their parent's current transform instead of initial transform\n" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceAdvancedSkeleton.h" },
		{ "ToolTip", "If turned on, another set of bone matrices are computed per-frame to allow for layered skinning.\nIt is typically used with a secondary skin weight profile storing the weights of a subset of bones like tweaker bones.\nThe bind matrices for these bones are dynamic and computed based on their parent's current transform instead of initial transform" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeBufferArray_MetaData[] = {
		{ "Category", "Data Interface" },
		{ "Comment", "// Per-bone animation attributes, allows for custom bone data to be used in kernels, one of the places you can create\n// animation attributes is Control Rig\n" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceAdvancedSkeleton.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Per-bone animation attributes, allows for custom bone data to be used in kernels, one of the places you can create\nanimation attributes is Control Rig" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SkinWeightProfile;
	static void NewProp_bEnableLayeredSkinning_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableLayeredSkinning;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeBufferArray;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusAdvancedSkeletonDataInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOptimusAdvancedSkeletonDataInterface_Statics::NewProp_SkinWeightProfile = { "SkinWeightProfile", nullptr, (EPropertyFlags)0x0010000000000011, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusAdvancedSkeletonDataInterface, SkinWeightProfile), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinWeightProfile_MetaData), NewProp_SkinWeightProfile_MetaData) };
void Z_Construct_UClass_UOptimusAdvancedSkeletonDataInterface_Statics::NewProp_bEnableLayeredSkinning_SetBit(void* Obj)
{
	((UOptimusAdvancedSkeletonDataInterface*)Obj)->bEnableLayeredSkinning = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimusAdvancedSkeletonDataInterface_Statics::NewProp_bEnableLayeredSkinning = { "bEnableLayeredSkinning", nullptr, (EPropertyFlags)0x0010000000000011, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimusAdvancedSkeletonDataInterface), &Z_Construct_UClass_UOptimusAdvancedSkeletonDataInterface_Statics::NewProp_bEnableLayeredSkinning_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableLayeredSkinning_MetaData), NewProp_bEnableLayeredSkinning_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOptimusAdvancedSkeletonDataInterface_Statics::NewProp_AttributeBufferArray = { "AttributeBufferArray", nullptr, (EPropertyFlags)0x0010000000000011, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusAdvancedSkeletonDataInterface, AttributeBufferArray), Z_Construct_UScriptStruct_FOptimusAnimAttributeBufferArray, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeBufferArray_MetaData), NewProp_AttributeBufferArray_MetaData) }; // 1715634501
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusAdvancedSkeletonDataInterface_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusAdvancedSkeletonDataInterface_Statics::NewProp_SkinWeightProfile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusAdvancedSkeletonDataInterface_Statics::NewProp_bEnableLayeredSkinning,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusAdvancedSkeletonDataInterface_Statics::NewProp_AttributeBufferArray,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusAdvancedSkeletonDataInterface_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOptimusAdvancedSkeletonDataInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOptimusComputeDataInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusAdvancedSkeletonDataInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusAdvancedSkeletonDataInterface_Statics::ClassParams = {
	&UOptimusAdvancedSkeletonDataInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOptimusAdvancedSkeletonDataInterface_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusAdvancedSkeletonDataInterface_Statics::PropPointers),
	0,
	0x001100A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusAdvancedSkeletonDataInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusAdvancedSkeletonDataInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusAdvancedSkeletonDataInterface()
{
	if (!Z_Registration_Info_UClass_UOptimusAdvancedSkeletonDataInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusAdvancedSkeletonDataInterface.OuterSingleton, Z_Construct_UClass_UOptimusAdvancedSkeletonDataInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusAdvancedSkeletonDataInterface.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusAdvancedSkeletonDataInterface>()
{
	return UOptimusAdvancedSkeletonDataInterface::StaticClass();
}
UOptimusAdvancedSkeletonDataInterface::UOptimusAdvancedSkeletonDataInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusAdvancedSkeletonDataInterface);
UOptimusAdvancedSkeletonDataInterface::~UOptimusAdvancedSkeletonDataInterface() {}
// End Class UOptimusAdvancedSkeletonDataInterface

// Begin Class UOptimusAdvancedSkeletonDataProvider
void UOptimusAdvancedSkeletonDataProvider::StaticRegisterNativesUOptimusAdvancedSkeletonDataProvider()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusAdvancedSkeletonDataProvider);
UClass* Z_Construct_UClass_UOptimusAdvancedSkeletonDataProvider_NoRegister()
{
	return UOptimusAdvancedSkeletonDataProvider::StaticClass();
}
struct Z_Construct_UClass_UOptimusAdvancedSkeletonDataProvider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "ComputeFramework" },
		{ "Comment", "/** Compute Framework Data Provider for reading skeletal mesh. */" },
		{ "IncludePath", "DataInterfaces/OptimusDataInterfaceAdvancedSkeleton.h" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceAdvancedSkeleton.h" },
		{ "ToolTip", "Compute Framework Data Provider for reading skeletal mesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[] = {
		{ "Category", "Binding" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceAdvancedSkeleton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeformerInstance_MetaData[] = {
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceAdvancedSkeleton.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DeformerInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusAdvancedSkeletonDataProvider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOptimusAdvancedSkeletonDataProvider_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusAdvancedSkeletonDataProvider, SkeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMesh_MetaData), NewProp_SkeletalMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOptimusAdvancedSkeletonDataProvider_Statics::NewProp_DeformerInstance = { "DeformerInstance", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusAdvancedSkeletonDataProvider, DeformerInstance), Z_Construct_UClass_UOptimusDeformerInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeformerInstance_MetaData), NewProp_DeformerInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusAdvancedSkeletonDataProvider_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusAdvancedSkeletonDataProvider_Statics::NewProp_SkeletalMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusAdvancedSkeletonDataProvider_Statics::NewProp_DeformerInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusAdvancedSkeletonDataProvider_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOptimusAdvancedSkeletonDataProvider_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UComputeDataProvider,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusAdvancedSkeletonDataProvider_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UOptimusAdvancedSkeletonDataProvider_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UOptimusDeformerInstanceAccessor_NoRegister, (int32)VTABLE_OFFSET(UOptimusAdvancedSkeletonDataProvider, IOptimusDeformerInstanceAccessor), false },  // 1833869264
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusAdvancedSkeletonDataProvider_Statics::ClassParams = {
	&UOptimusAdvancedSkeletonDataProvider::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOptimusAdvancedSkeletonDataProvider_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusAdvancedSkeletonDataProvider_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x008010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusAdvancedSkeletonDataProvider_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusAdvancedSkeletonDataProvider_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusAdvancedSkeletonDataProvider()
{
	if (!Z_Registration_Info_UClass_UOptimusAdvancedSkeletonDataProvider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusAdvancedSkeletonDataProvider.OuterSingleton, Z_Construct_UClass_UOptimusAdvancedSkeletonDataProvider_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusAdvancedSkeletonDataProvider.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusAdvancedSkeletonDataProvider>()
{
	return UOptimusAdvancedSkeletonDataProvider::StaticClass();
}
UOptimusAdvancedSkeletonDataProvider::UOptimusAdvancedSkeletonDataProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusAdvancedSkeletonDataProvider);
UOptimusAdvancedSkeletonDataProvider::~UOptimusAdvancedSkeletonDataProvider() {}
// End Class UOptimusAdvancedSkeletonDataProvider

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceAdvancedSkeleton_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOptimusAnimAttributeBufferDescription::StaticStruct, Z_Construct_UScriptStruct_FOptimusAnimAttributeBufferDescription_Statics::NewStructOps, TEXT("OptimusAnimAttributeBufferDescription"), &Z_Registration_Info_UScriptStruct_OptimusAnimAttributeBufferDescription, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusAnimAttributeBufferDescription), 167589644U) },
		{ FOptimusAnimAttributeBufferArray::StaticStruct, Z_Construct_UScriptStruct_FOptimusAnimAttributeBufferArray_Statics::NewStructOps, TEXT("OptimusAnimAttributeBufferArray"), &Z_Registration_Info_UScriptStruct_OptimusAnimAttributeBufferArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusAnimAttributeBufferArray), 1715634501U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusAdvancedSkeletonDataInterface, UOptimusAdvancedSkeletonDataInterface::StaticClass, TEXT("UOptimusAdvancedSkeletonDataInterface"), &Z_Registration_Info_UClass_UOptimusAdvancedSkeletonDataInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusAdvancedSkeletonDataInterface), 3926698994U) },
		{ Z_Construct_UClass_UOptimusAdvancedSkeletonDataProvider, UOptimusAdvancedSkeletonDataProvider::StaticClass, TEXT("UOptimusAdvancedSkeletonDataProvider"), &Z_Registration_Info_UClass_UOptimusAdvancedSkeletonDataProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusAdvancedSkeletonDataProvider), 2290253019U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceAdvancedSkeleton_h_2616948341(TEXT("/Script/OptimusCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceAdvancedSkeleton_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceAdvancedSkeleton_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceAdvancedSkeleton_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceAdvancedSkeleton_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
