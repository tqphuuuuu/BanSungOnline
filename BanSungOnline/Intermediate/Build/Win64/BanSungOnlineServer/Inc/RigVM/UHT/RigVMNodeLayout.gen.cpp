// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVM/Public/RigVMCore/RigVMNodeLayout.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMNodeLayout() {}

// Begin Cross Module References
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMNodeLayout();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMPinCategory();
UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References

// Begin ScriptStruct FRigVMPinCategory
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMPinCategory;
class UScriptStruct* FRigVMPinCategory::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMPinCategory.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMPinCategory.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMPinCategory, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMPinCategory"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMPinCategory.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMPinCategory>()
{
	return FRigVMPinCategory::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMPinCategory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMNodeLayout.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[] = {
		{ "Category", "FunctionArgument" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMNodeLayout.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Elements_MetaData[] = {
		{ "Category", "FunctionArgument" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMNodeLayout.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExpandedByDefault_MetaData[] = {
		{ "Category", "FunctionArgument" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMNodeLayout.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Elements_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Elements;
	static void NewProp_bExpandedByDefault_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExpandedByDefault;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMPinCategory>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMPinCategory_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMPinCategory, Path), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Path_MetaData), NewProp_Path_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMPinCategory_Statics::NewProp_Elements_Inner = { "Elements", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigVMPinCategory_Statics::NewProp_Elements = { "Elements", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMPinCategory, Elements), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Elements_MetaData), NewProp_Elements_MetaData) };
void Z_Construct_UScriptStruct_FRigVMPinCategory_Statics::NewProp_bExpandedByDefault_SetBit(void* Obj)
{
	((FRigVMPinCategory*)Obj)->bExpandedByDefault = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMPinCategory_Statics::NewProp_bExpandedByDefault = { "bExpandedByDefault", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigVMPinCategory), &Z_Construct_UScriptStruct_FRigVMPinCategory_Statics::NewProp_bExpandedByDefault_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExpandedByDefault_MetaData), NewProp_bExpandedByDefault_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMPinCategory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMPinCategory_Statics::NewProp_Path,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMPinCategory_Statics::NewProp_Elements_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMPinCategory_Statics::NewProp_Elements,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMPinCategory_Statics::NewProp_bExpandedByDefault,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMPinCategory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMPinCategory_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	nullptr,
	&NewStructOps,
	"RigVMPinCategory",
	Z_Construct_UScriptStruct_FRigVMPinCategory_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMPinCategory_Statics::PropPointers),
	sizeof(FRigVMPinCategory),
	alignof(FRigVMPinCategory),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMPinCategory_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMPinCategory_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMPinCategory()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMPinCategory.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMPinCategory.InnerSingleton, Z_Construct_UScriptStruct_FRigVMPinCategory_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMPinCategory.InnerSingleton;
}
// End ScriptStruct FRigVMPinCategory

// Begin ScriptStruct FRigVMNodeLayout
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMNodeLayout;
class UScriptStruct* FRigVMNodeLayout::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMNodeLayout.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMNodeLayout.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMNodeLayout, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMNodeLayout"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMNodeLayout.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMNodeLayout>()
{
	return FRigVMNodeLayout::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMNodeLayout_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMNodeLayout.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Categories_MetaData[] = {
		{ "Category", "FunctionArgument" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMNodeLayout.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PinIndexInCategory_MetaData[] = {
		{ "Category", "FunctionArgument" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMNodeLayout.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayNames_MetaData[] = {
		{ "Category", "FunctionArgument" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMNodeLayout.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Categories_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Categories;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PinIndexInCategory_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PinIndexInCategory_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PinIndexInCategory;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayNames_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayNames_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_DisplayNames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMNodeLayout>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMNodeLayout_Statics::NewProp_Categories_Inner = { "Categories", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigVMPinCategory, METADATA_PARAMS(0, nullptr) }; // 462790532
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigVMNodeLayout_Statics::NewProp_Categories = { "Categories", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMNodeLayout, Categories), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Categories_MetaData), NewProp_Categories_MetaData) }; // 462790532
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMNodeLayout_Statics::NewProp_PinIndexInCategory_ValueProp = { "PinIndexInCategory", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMNodeLayout_Statics::NewProp_PinIndexInCategory_Key_KeyProp = { "PinIndexInCategory_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FRigVMNodeLayout_Statics::NewProp_PinIndexInCategory = { "PinIndexInCategory", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMNodeLayout, PinIndexInCategory), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PinIndexInCategory_MetaData), NewProp_PinIndexInCategory_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMNodeLayout_Statics::NewProp_DisplayNames_ValueProp = { "DisplayNames", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMNodeLayout_Statics::NewProp_DisplayNames_Key_KeyProp = { "DisplayNames_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FRigVMNodeLayout_Statics::NewProp_DisplayNames = { "DisplayNames", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMNodeLayout, DisplayNames), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayNames_MetaData), NewProp_DisplayNames_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMNodeLayout_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMNodeLayout_Statics::NewProp_Categories_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMNodeLayout_Statics::NewProp_Categories,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMNodeLayout_Statics::NewProp_PinIndexInCategory_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMNodeLayout_Statics::NewProp_PinIndexInCategory_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMNodeLayout_Statics::NewProp_PinIndexInCategory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMNodeLayout_Statics::NewProp_DisplayNames_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMNodeLayout_Statics::NewProp_DisplayNames_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMNodeLayout_Statics::NewProp_DisplayNames,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMNodeLayout_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMNodeLayout_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	nullptr,
	&NewStructOps,
	"RigVMNodeLayout",
	Z_Construct_UScriptStruct_FRigVMNodeLayout_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMNodeLayout_Statics::PropPointers),
	sizeof(FRigVMNodeLayout),
	alignof(FRigVMNodeLayout),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMNodeLayout_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMNodeLayout_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMNodeLayout()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMNodeLayout.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMNodeLayout.InnerSingleton, Z_Construct_UScriptStruct_FRigVMNodeLayout_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMNodeLayout.InnerSingleton;
}
// End ScriptStruct FRigVMNodeLayout

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMNodeLayout_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigVMPinCategory::StaticStruct, Z_Construct_UScriptStruct_FRigVMPinCategory_Statics::NewStructOps, TEXT("RigVMPinCategory"), &Z_Registration_Info_UScriptStruct_RigVMPinCategory, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMPinCategory), 462790532U) },
		{ FRigVMNodeLayout::StaticStruct, Z_Construct_UScriptStruct_FRigVMNodeLayout_Statics::NewStructOps, TEXT("RigVMNodeLayout"), &Z_Registration_Info_UScriptStruct_RigVMNodeLayout, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMNodeLayout), 3464523780U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMNodeLayout_h_4123947685(TEXT("/Script/RigVM"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMNodeLayout_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMNodeLayout_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
