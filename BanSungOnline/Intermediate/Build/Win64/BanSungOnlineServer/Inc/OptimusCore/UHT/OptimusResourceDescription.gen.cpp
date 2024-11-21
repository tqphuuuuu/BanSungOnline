// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusCore/Public/OptimusResourceDescription.h"
#include "OptimusCore/Public/OptimusDataDomain.h"
#include "OptimusCore/Public/OptimusDataType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusResourceDescription() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComponentSourceBinding_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusPersistentBufferDataInterface_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusResourceDescription();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusResourceDescription_NoRegister();
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusDataDomain();
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusDataTypeRef();
UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References

// Begin Class UOptimusResourceDescription
void UOptimusResourceDescription::StaticRegisterNativesUOptimusResourceDescription()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusResourceDescription);
UClass* Z_Construct_UClass_UOptimusResourceDescription_NoRegister()
{
	return UOptimusResourceDescription::StaticClass();
}
struct Z_Construct_UClass_UOptimusResourceDescription_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OptimusResourceDescription.h" },
		{ "ModuleRelativePath", "Public/OptimusResourceDescription.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResourceName_MetaData[] = {
		{ "Category", "ResourceDescription" },
		{ "ModuleRelativePath", "Public/OptimusResourceDescription.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataType_MetaData[] = {
		{ "Category", "ResourceDescription" },
		{ "Comment", "/** The the data type of each element of the resource */" },
		{ "ModuleRelativePath", "Public/OptimusResourceDescription.h" },
		{ "ToolTip", "The the data type of each element of the resource" },
		{ "UseInResource", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentBinding_MetaData[] = {
		{ "Category", "ResourceDescription" },
		{ "Comment", "/** The component binding that this resource description is bound to */" },
		{ "ModuleRelativePath", "Public/OptimusResourceDescription.h" },
		{ "ToolTip", "The component binding that this resource description is bound to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataDomain_MetaData[] = {
		{ "Category", "ResourceDescription" },
		{ "Comment", "/** The data domain for this resource. */" },
		{ "EditCondition", "ComponentBinding != nullptr" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/OptimusResourceDescription.h" },
		{ "ToolTip", "The data domain for this resource." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataInterface_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusResourceDescription.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ResourceName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataType;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ComponentBinding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataDomain;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DataInterface;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusResourceDescription>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOptimusResourceDescription_Statics::NewProp_ResourceName = { "ResourceName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusResourceDescription, ResourceName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResourceName_MetaData), NewProp_ResourceName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOptimusResourceDescription_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusResourceDescription, DataType), Z_Construct_UScriptStruct_FOptimusDataTypeRef, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataType_MetaData), NewProp_DataType_MetaData) }; // 1626052194
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UOptimusResourceDescription_Statics::NewProp_ComponentBinding = { "ComponentBinding", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusResourceDescription, ComponentBinding), Z_Construct_UClass_UOptimusComponentSourceBinding_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentBinding_MetaData), NewProp_ComponentBinding_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOptimusResourceDescription_Statics::NewProp_DataDomain = { "DataDomain", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusResourceDescription, DataDomain), Z_Construct_UScriptStruct_FOptimusDataDomain, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataDomain_MetaData), NewProp_DataDomain_MetaData) }; // 3408120871
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOptimusResourceDescription_Statics::NewProp_DataInterface = { "DataInterface", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusResourceDescription, DataInterface), Z_Construct_UClass_UOptimusPersistentBufferDataInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataInterface_MetaData), NewProp_DataInterface_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusResourceDescription_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusResourceDescription_Statics::NewProp_ResourceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusResourceDescription_Statics::NewProp_DataType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusResourceDescription_Statics::NewProp_ComponentBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusResourceDescription_Statics::NewProp_DataDomain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusResourceDescription_Statics::NewProp_DataInterface,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusResourceDescription_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOptimusResourceDescription_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusResourceDescription_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusResourceDescription_Statics::ClassParams = {
	&UOptimusResourceDescription::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOptimusResourceDescription_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusResourceDescription_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusResourceDescription_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusResourceDescription_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusResourceDescription()
{
	if (!Z_Registration_Info_UClass_UOptimusResourceDescription.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusResourceDescription.OuterSingleton, Z_Construct_UClass_UOptimusResourceDescription_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusResourceDescription.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusResourceDescription>()
{
	return UOptimusResourceDescription::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusResourceDescription);
UOptimusResourceDescription::~UOptimusResourceDescription() {}
// End Class UOptimusResourceDescription

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusResourceDescription_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusResourceDescription, UOptimusResourceDescription::StaticClass, TEXT("UOptimusResourceDescription"), &Z_Registration_Info_UClass_UOptimusResourceDescription, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusResourceDescription), 2265079651U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusResourceDescription_h_135091905(TEXT("/Script/OptimusCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusResourceDescription_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusResourceDescription_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
