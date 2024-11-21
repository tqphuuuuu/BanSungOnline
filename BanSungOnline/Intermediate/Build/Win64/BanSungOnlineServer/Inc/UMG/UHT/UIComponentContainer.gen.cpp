// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Extensions/UIComponentContainer.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUIComponentContainer() {}

// Begin Cross Module References
UMG_API UClass* Z_Construct_UClass_UUIComponent_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUIComponentContainer();
UMG_API UClass* Z_Construct_UClass_UUIComponentContainer_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidgetExtension();
UMG_API UScriptStruct* Z_Construct_UScriptStruct_FUIComponentTarget();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin ScriptStruct FUIComponentTarget
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UIComponentTarget;
class UScriptStruct* FUIComponentTarget::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UIComponentTarget.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UIComponentTarget.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUIComponentTarget, (UObject*)Z_Construct_UPackage__Script_UMG(), TEXT("UIComponentTarget"));
	}
	return Z_Registration_Info_UScriptStruct_UIComponentTarget.OuterSingleton;
}
template<> UMG_API UScriptStruct* StaticStruct<FUIComponentTarget>()
{
	return FUIComponentTarget::StaticStruct();
}
struct Z_Construct_UScriptStruct_FUIComponentTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Extensions/UIComponentContainer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetName_MetaData[] = {
		{ "Comment", "// We use a TargetName to resolve the Widget only at compile time and on the Runtime Widget. \n// It simplify edition in UMG Designer and make sure we do not need to keep Association in sync with the WidgetTree.\n" },
		{ "ModuleRelativePath", "Public/Extensions/UIComponentContainer.h" },
		{ "ToolTip", "We use a TargetName to resolve the Widget only at compile time and on the Runtime Widget.\nIt simplify edition in UMG Designer and make sure we do not need to keep Association in sync with the WidgetTree." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Extensions/UIComponentContainer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_TargetName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUIComponentTarget>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FUIComponentTarget_Statics::NewProp_TargetName = { "TargetName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUIComponentTarget, TargetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetName_MetaData), NewProp_TargetName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FUIComponentTarget_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0146000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUIComponentTarget, Component), Z_Construct_UClass_UUIComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUIComponentTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIComponentTarget_Statics::NewProp_TargetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIComponentTarget_Statics::NewProp_Component,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIComponentTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUIComponentTarget_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	nullptr,
	&NewStructOps,
	"UIComponentTarget",
	Z_Construct_UScriptStruct_FUIComponentTarget_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIComponentTarget_Statics::PropPointers),
	sizeof(FUIComponentTarget),
	alignof(FUIComponentTarget),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIComponentTarget_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUIComponentTarget_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUIComponentTarget()
{
	if (!Z_Registration_Info_UScriptStruct_UIComponentTarget.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UIComponentTarget.InnerSingleton, Z_Construct_UScriptStruct_FUIComponentTarget_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_UIComponentTarget.InnerSingleton;
}
// End ScriptStruct FUIComponentTarget

// Begin Class UUIComponentContainer
void UUIComponentContainer::StaticRegisterNativesUUIComponentContainer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUIComponentContainer);
UClass* Z_Construct_UClass_UUIComponentContainer_NoRegister()
{
	return UUIComponentContainer::StaticClass();
}
struct Z_Construct_UClass_UUIComponentContainer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Class that holds all the UIComponents for a UUserWidget.\n */" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "Extensions/UIComponentContainer.h" },
		{ "ModuleRelativePath", "Public/Extensions/UIComponentContainer.h" },
		{ "NotBlueprintType", "true" },
		{ "ToolTip", "Class that holds all the UIComponents for a UUserWidget." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Components_MetaData[] = {
		{ "Comment", "// Use a single TArray for the Entire UUserWidget to reduce memory usage.\n" },
		{ "ModuleRelativePath", "Public/Extensions/UIComponentContainer.h" },
		{ "ToolTip", "Use a single TArray for the Entire UUserWidget to reduce memory usage." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Components_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Components;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUIComponentContainer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUIComponentContainer_Statics::NewProp_Components_Inner = { "Components", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FUIComponentTarget, METADATA_PARAMS(0, nullptr) }; // 1834533083
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUIComponentContainer_Statics::NewProp_Components = { "Components", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIComponentContainer, Components), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Components_MetaData), NewProp_Components_MetaData) }; // 1834533083
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUIComponentContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIComponentContainer_Statics::NewProp_Components_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIComponentContainer_Statics::NewProp_Components,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUIComponentContainer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUIComponentContainer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidgetExtension,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUIComponentContainer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUIComponentContainer_Statics::ClassParams = {
	&UUIComponentContainer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UUIComponentContainer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UUIComponentContainer_Statics::PropPointers),
	0,
	0x00B000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUIComponentContainer_Statics::Class_MetaDataParams), Z_Construct_UClass_UUIComponentContainer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUIComponentContainer()
{
	if (!Z_Registration_Info_UClass_UUIComponentContainer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUIComponentContainer.OuterSingleton, Z_Construct_UClass_UUIComponentContainer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUIComponentContainer.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<UUIComponentContainer>()
{
	return UUIComponentContainer::StaticClass();
}
UUIComponentContainer::UUIComponentContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUIComponentContainer);
UUIComponentContainer::~UUIComponentContainer() {}
// End Class UUIComponentContainer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Extensions_UIComponentContainer_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FUIComponentTarget::StaticStruct, Z_Construct_UScriptStruct_FUIComponentTarget_Statics::NewStructOps, TEXT("UIComponentTarget"), &Z_Registration_Info_UScriptStruct_UIComponentTarget, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUIComponentTarget), 1834533083U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUIComponentContainer, UUIComponentContainer::StaticClass, TEXT("UUIComponentContainer"), &Z_Registration_Info_UClass_UUIComponentContainer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUIComponentContainer), 2958316538U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Extensions_UIComponentContainer_h_1920381835(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Extensions_UIComponentContainer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Extensions_UIComponentContainer_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Extensions_UIComponentContainer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Extensions_UIComponentContainer_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
