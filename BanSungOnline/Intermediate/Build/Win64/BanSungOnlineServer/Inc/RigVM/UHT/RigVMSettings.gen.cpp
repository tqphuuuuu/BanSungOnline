// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVM/Public/RigVMSettings.h"
#include "RigVM/Public/RigVMCore/RigVMVariant.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMSettings() {}

// Begin Cross Module References
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
RIGVM_API UClass* Z_Construct_UClass_URigVMEditorSettings();
RIGVM_API UClass* Z_Construct_UClass_URigVMEditorSettings_NoRegister();
RIGVM_API UClass* Z_Construct_UClass_URigVMProjectSettings();
RIGVM_API UClass* Z_Construct_UClass_URigVMProjectSettings_NoRegister();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMTag();
UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References

// Begin Class URigVMEditorSettings
void URigVMEditorSettings::StaticRegisterNativesURigVMEditorSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URigVMEditorSettings);
UClass* Z_Construct_UClass_URigVMEditorSettings_NoRegister()
{
	return URigVMEditorSettings::StaticClass();
}
struct Z_Construct_UClass_URigVMEditorSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Customize RigVM Rig Editor.\n */" },
		{ "DisplayName", "RigVM Editor" },
		{ "IncludePath", "RigVMSettings.h" },
		{ "ModuleRelativePath", "Public/RigVMSettings.h" },
		{ "ToolTip", "Customize RigVM Rig Editor." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoLinkMutableNodes_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "// When this is checked mutable nodes (nodes with an execute pin)\n// will be hooked up automatically.\n" },
		{ "ModuleRelativePath", "Public/RigVMSettings.h" },
		{ "ToolTip", "When this is checked mutable nodes (nodes with an execute pin)\nwill be hooked up automatically." },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static void NewProp_bAutoLinkMutableNodes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoLinkMutableNodes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URigVMEditorSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_URigVMEditorSettings_Statics::NewProp_bAutoLinkMutableNodes_SetBit(void* Obj)
{
	((URigVMEditorSettings*)Obj)->bAutoLinkMutableNodes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URigVMEditorSettings_Statics::NewProp_bAutoLinkMutableNodes = { "bAutoLinkMutableNodes", nullptr, (EPropertyFlags)0x0010000800004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URigVMEditorSettings), &Z_Construct_UClass_URigVMEditorSettings_Statics::NewProp_bAutoLinkMutableNodes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoLinkMutableNodes_MetaData), NewProp_bAutoLinkMutableNodes_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URigVMEditorSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMEditorSettings_Statics::NewProp_bAutoLinkMutableNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMEditorSettings_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
UObject* (*const Z_Construct_UClass_URigVMEditorSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMEditorSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URigVMEditorSettings_Statics::ClassParams = {
	&URigVMEditorSettings::StaticClass,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_URigVMEditorSettings_Statics::PropPointers, nullptr),
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMEditorSettings_Statics::PropPointers), 0),
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMEditorSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_URigVMEditorSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URigVMEditorSettings()
{
	if (!Z_Registration_Info_UClass_URigVMEditorSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URigVMEditorSettings.OuterSingleton, Z_Construct_UClass_URigVMEditorSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URigVMEditorSettings.OuterSingleton;
}
template<> RIGVM_API UClass* StaticClass<URigVMEditorSettings>()
{
	return URigVMEditorSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URigVMEditorSettings);
URigVMEditorSettings::~URigVMEditorSettings() {}
// End Class URigVMEditorSettings

// Begin Class URigVMProjectSettings Function GetTag
struct Z_Construct_UFunction_URigVMProjectSettings_GetTag_Statics
{
	struct RigVMProjectSettings_eventGetTag_Parms
	{
		FName InTagName;
		FRigVMTag ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Variants" },
		{ "ModuleRelativePath", "Public/RigVMSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InTagName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVMProjectSettings_GetTag_Statics::NewProp_InTagName = { "InTagName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVMProjectSettings_eventGetTag_Parms, InTagName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigVMProjectSettings_GetTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVMProjectSettings_eventGetTag_Parms, ReturnValue), Z_Construct_UScriptStruct_FRigVMTag, METADATA_PARAMS(0, nullptr) }; // 604098037
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMProjectSettings_GetTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMProjectSettings_GetTag_Statics::NewProp_InTagName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMProjectSettings_GetTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMProjectSettings_GetTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMProjectSettings_GetTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMProjectSettings, nullptr, "GetTag", nullptr, nullptr, Z_Construct_UFunction_URigVMProjectSettings_GetTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMProjectSettings_GetTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigVMProjectSettings_GetTag_Statics::RigVMProjectSettings_eventGetTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMProjectSettings_GetTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigVMProjectSettings_GetTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigVMProjectSettings_GetTag_Statics::RigVMProjectSettings_eventGetTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigVMProjectSettings_GetTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMProjectSettings_GetTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URigVMProjectSettings::execGetTag)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InTagName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRigVMTag*)Z_Param__Result=P_THIS->GetTag(Z_Param_InTagName);
	P_NATIVE_END;
}
// End Class URigVMProjectSettings Function GetTag

// Begin Class URigVMProjectSettings
void URigVMProjectSettings::StaticRegisterNativesURigVMProjectSettings()
{
	UClass* Class = URigVMProjectSettings::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetTag", &URigVMProjectSettings::execGetTag },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URigVMProjectSettings);
UClass* Z_Construct_UClass_URigVMProjectSettings_NoRegister()
{
	return URigVMProjectSettings::StaticClass();
}
struct Z_Construct_UClass_URigVMProjectSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "RigVM Project Settings" },
		{ "IncludePath", "RigVMSettings.h" },
		{ "ModuleRelativePath", "Public/RigVMSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VariantTags_MetaData[] = {
		{ "Category", "Experimental" },
		{ "ModuleRelativePath", "Public/RigVMSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VariantTags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VariantTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URigVMProjectSettings_GetTag, "GetTag" }, // 2372822053
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URigVMProjectSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URigVMProjectSettings_Statics::NewProp_VariantTags_Inner = { "VariantTags", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigVMTag, METADATA_PARAMS(0, nullptr) }; // 604098037
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URigVMProjectSettings_Statics::NewProp_VariantTags = { "VariantTags", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URigVMProjectSettings, VariantTags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VariantTags_MetaData), NewProp_VariantTags_MetaData) }; // 604098037
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URigVMProjectSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMProjectSettings_Statics::NewProp_VariantTags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMProjectSettings_Statics::NewProp_VariantTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMProjectSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URigVMProjectSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMProjectSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URigVMProjectSettings_Statics::ClassParams = {
	&URigVMProjectSettings::StaticClass,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_URigVMProjectSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_URigVMProjectSettings_Statics::PropPointers),
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMProjectSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_URigVMProjectSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URigVMProjectSettings()
{
	if (!Z_Registration_Info_UClass_URigVMProjectSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URigVMProjectSettings.OuterSingleton, Z_Construct_UClass_URigVMProjectSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URigVMProjectSettings.OuterSingleton;
}
template<> RIGVM_API UClass* StaticClass<URigVMProjectSettings>()
{
	return URigVMProjectSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URigVMProjectSettings);
URigVMProjectSettings::~URigVMProjectSettings() {}
// End Class URigVMProjectSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URigVMEditorSettings, URigVMEditorSettings::StaticClass, TEXT("URigVMEditorSettings"), &Z_Registration_Info_UClass_URigVMEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URigVMEditorSettings), 633718432U) },
		{ Z_Construct_UClass_URigVMProjectSettings, URigVMProjectSettings::StaticClass, TEXT("URigVMProjectSettings"), &Z_Registration_Info_UClass_URigVMProjectSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URigVMProjectSettings), 966510938U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMSettings_h_1406663427(TEXT("/Script/RigVM"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
