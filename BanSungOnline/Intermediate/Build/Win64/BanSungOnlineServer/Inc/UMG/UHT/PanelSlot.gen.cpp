// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Components/PanelSlot.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePanelSlot() {}

// Begin Cross Module References
UMG_API UClass* Z_Construct_UClass_UPanelSlot();
UMG_API UClass* Z_Construct_UClass_UPanelSlot_NoRegister();
UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UVisual();
UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin Class UPanelSlot Function GetContent
struct Z_Construct_UFunction_UPanelSlot_GetContent_Statics
{
	struct PanelSlot_eventGetContent_Parms
	{
		UWidget* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Layout|Panel Slot" },
		{ "ModuleRelativePath", "Public/Components/PanelSlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPanelSlot_GetContent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PanelSlot_eventGetContent_Parms, ReturnValue), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPanelSlot_GetContent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPanelSlot_GetContent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPanelSlot_GetContent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPanelSlot_GetContent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPanelSlot, nullptr, "GetContent", nullptr, nullptr, Z_Construct_UFunction_UPanelSlot_GetContent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPanelSlot_GetContent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPanelSlot_GetContent_Statics::PanelSlot_eventGetContent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPanelSlot_GetContent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPanelSlot_GetContent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPanelSlot_GetContent_Statics::PanelSlot_eventGetContent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPanelSlot_GetContent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPanelSlot_GetContent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPanelSlot::execGetContent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UWidget**)Z_Param__Result=P_THIS->GetContent();
	P_NATIVE_END;
}
// End Class UPanelSlot Function GetContent

// Begin Class UPanelSlot
void UPanelSlot::StaticRegisterNativesUPanelSlot()
{
	UClass* Class = UPanelSlot::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetContent", &UPanelSlot::execGetContent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPanelSlot);
UClass* Z_Construct_UClass_UPanelSlot_NoRegister()
{
	return UPanelSlot::StaticClass();
}
struct Z_Construct_UClass_UPanelSlot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** The base class for all Slots in UMG. */" },
		{ "IncludePath", "Components/PanelSlot.h" },
		{ "ModuleRelativePath", "Public/Components/PanelSlot.h" },
		{ "ToolTip", "The base class for all Slots in UMG." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/PanelSlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/PanelSlot.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Parent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Content;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPanelSlot_GetContent, "GetContent" }, // 1584474705
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPanelSlot>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPanelSlot_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0116000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPanelSlot, Parent), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parent_MetaData), NewProp_Parent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPanelSlot_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0116000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPanelSlot, Content), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Content_MetaData), NewProp_Content_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPanelSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPanelSlot_Statics::NewProp_Parent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPanelSlot_Statics::NewProp_Content,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPanelSlot_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPanelSlot_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVisual,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPanelSlot_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPanelSlot_Statics::ClassParams = {
	&UPanelSlot::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPanelSlot_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPanelSlot_Statics::PropPointers),
	0,
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPanelSlot_Statics::Class_MetaDataParams), Z_Construct_UClass_UPanelSlot_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPanelSlot()
{
	if (!Z_Registration_Info_UClass_UPanelSlot.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPanelSlot.OuterSingleton, Z_Construct_UClass_UPanelSlot_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPanelSlot.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<UPanelSlot>()
{
	return UPanelSlot::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPanelSlot);
UPanelSlot::~UPanelSlot() {}
// End Class UPanelSlot

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_PanelSlot_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPanelSlot, UPanelSlot::StaticClass, TEXT("UPanelSlot"), &Z_Registration_Info_UClass_UPanelSlot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPanelSlot), 1765972748U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_PanelSlot_h_3407805654(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_PanelSlot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_PanelSlot_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
