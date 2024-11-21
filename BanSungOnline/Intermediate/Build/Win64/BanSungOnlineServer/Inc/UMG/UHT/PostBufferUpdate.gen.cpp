// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Components/PostBufferUpdate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePostBufferUpdate() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ESlatePostRT();
UMG_API UClass* Z_Construct_UClass_UPostBufferUpdate();
UMG_API UClass* Z_Construct_UClass_UPostBufferUpdate_NoRegister();
UMG_API UClass* Z_Construct_UClass_USlatePostBufferProcessorUpdater();
UMG_API UClass* Z_Construct_UClass_USlatePostBufferProcessorUpdater_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidget();
UMG_API UScriptStruct* Z_Construct_UScriptStruct_FSlatePostBufferUpdateInfo();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin ScriptStruct FSlatePostBufferUpdateInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SlatePostBufferUpdateInfo;
class UScriptStruct* FSlatePostBufferUpdateInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SlatePostBufferUpdateInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SlatePostBufferUpdateInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSlatePostBufferUpdateInfo, (UObject*)Z_Construct_UPackage__Script_UMG(), TEXT("SlatePostBufferUpdateInfo"));
	}
	return Z_Registration_Info_UScriptStruct_SlatePostBufferUpdateInfo.OuterSingleton;
}
template<> UMG_API UScriptStruct* StaticStruct<FSlatePostBufferUpdateInfo>()
{
	return FSlatePostBufferUpdateInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSlatePostBufferUpdateInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Struct containing info needed to update a particular buffer\n */" },
		{ "ModuleRelativePath", "Public/Components/PostBufferUpdate.h" },
		{ "ToolTip", "Struct containing info needed to update a particular buffer" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BufferToUpdate_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Behavior" },
		{ "Comment", "/** Buffers that we should update, all of these buffers will be affected by 'bPerformDefaultPostBufferUpdate' if disabled */" },
		{ "ModuleRelativePath", "Public/Components/PostBufferUpdate.h" },
		{ "ToolTip", "Buffers that we should update, all of these buffers will be affected by 'bPerformDefaultPostBufferUpdate' if disabled" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PostParamUpdater_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Behavior" },
		{ "Comment", "/** Optional processor updater for buffer, used to update a processor within a frame */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/PostBufferUpdate.h" },
		{ "ToolTip", "Optional processor updater for buffer, used to update a processor within a frame" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_BufferToUpdate_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BufferToUpdate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PostParamUpdater;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSlatePostBufferUpdateInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSlatePostBufferUpdateInfo_Statics::NewProp_BufferToUpdate_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSlatePostBufferUpdateInfo_Statics::NewProp_BufferToUpdate = { "BufferToUpdate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSlatePostBufferUpdateInfo, BufferToUpdate), Z_Construct_UEnum_SlateCore_ESlatePostRT, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BufferToUpdate_MetaData), NewProp_BufferToUpdate_MetaData) }; // 1976715162
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSlatePostBufferUpdateInfo_Statics::NewProp_PostParamUpdater = { "PostParamUpdater", nullptr, (EPropertyFlags)0x0116000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSlatePostBufferUpdateInfo, PostParamUpdater), Z_Construct_UClass_USlatePostBufferProcessorUpdater_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostParamUpdater_MetaData), NewProp_PostParamUpdater_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSlatePostBufferUpdateInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlatePostBufferUpdateInfo_Statics::NewProp_BufferToUpdate_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlatePostBufferUpdateInfo_Statics::NewProp_BufferToUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlatePostBufferUpdateInfo_Statics::NewProp_PostParamUpdater,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlatePostBufferUpdateInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSlatePostBufferUpdateInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	nullptr,
	&NewStructOps,
	"SlatePostBufferUpdateInfo",
	Z_Construct_UScriptStruct_FSlatePostBufferUpdateInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlatePostBufferUpdateInfo_Statics::PropPointers),
	sizeof(FSlatePostBufferUpdateInfo),
	alignof(FSlatePostBufferUpdateInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlatePostBufferUpdateInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSlatePostBufferUpdateInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSlatePostBufferUpdateInfo()
{
	if (!Z_Registration_Info_UScriptStruct_SlatePostBufferUpdateInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SlatePostBufferUpdateInfo.InnerSingleton, Z_Construct_UScriptStruct_FSlatePostBufferUpdateInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SlatePostBufferUpdateInfo.InnerSingleton;
}
// End ScriptStruct FSlatePostBufferUpdateInfo

// Begin Class UPostBufferUpdate
void UPostBufferUpdate::SetbPerformDefaultPostBufferUpdate_WrapperImpl(void* Object, const void* InValue)
{
	UPostBufferUpdate* Obj = (UPostBufferUpdate*)Object;
	bool& Value = *(bool*)InValue;
	Obj->SetPerformDefaultPostBufferUpdate(Value);
}
void UPostBufferUpdate::StaticRegisterNativesUPostBufferUpdate()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPostBufferUpdate);
UClass* Z_Construct_UClass_UPostBufferUpdate_NoRegister()
{
	return UPostBufferUpdate::StaticClass();
}
struct Z_Construct_UClass_UPostBufferUpdate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Widget that when drawn, will trigger the slate post buffer to update. Does not draw anything itself.\n * This allows for you to perform layered UI / sampling effects with the GetSlatePost material functions,\n * by placing this widget after UI you would like to be processed / sampled is drawn.\n *\n * * No Children\n */" },
		{ "IncludePath", "Components/PostBufferUpdate.h" },
		{ "ModuleRelativePath", "Public/Components/PostBufferUpdate.h" },
		{ "ToolTip", "Widget that when drawn, will trigger the slate post buffer to update. Does not draw anything itself.\nThis allows for you to perform layered UI / sampling effects with the GetSlatePost material functions,\nby placing this widget after UI you would like to be processed / sampled is drawn.\n\n* No Children" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPerformDefaultPostBufferUpdate_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Behavior" },
		{ "Comment", "/** \n\x09 * True if we should do the default post buffer update of the scene before any UI.\n\x09 * If any PostBufferUpdate widget has this set as false, be default scene copy / processing will not occur.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/PostBufferUpdate.h" },
		{ "ToolTip", "True if we should do the default post buffer update of the scene before any UI.\nIf any PostBufferUpdate widget has this set as false, be default scene copy / processing will not occur." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuffersToUpdate_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Behavior" },
		{ "Comment", "/** Buffers that we should update, all of these buffers will be affected by 'bPerformDefaultPostBufferUpdate' if disabled */" },
		{ "ModuleRelativePath", "Public/Components/PostBufferUpdate.h" },
		{ "ToolTip", "Buffers that we should update, all of these buffers will be affected by 'bPerformDefaultPostBufferUpdate' if disabled" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateBufferInfos_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Behavior" },
		{ "Comment", "/** Buffer to update when this widget is drawn, along with info needed to update that buffer if desired intra-frame */" },
		{ "ModuleRelativePath", "Public/Components/PostBufferUpdate.h" },
		{ "ToolTip", "Buffer to update when this widget is drawn, along with info needed to update that buffer if desired intra-frame" },
	};
#endif // WITH_METADATA
	static void NewProp_bPerformDefaultPostBufferUpdate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPerformDefaultPostBufferUpdate;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BuffersToUpdate_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BuffersToUpdate_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BuffersToUpdate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateBufferInfos_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UpdateBufferInfos;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPostBufferUpdate>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UPostBufferUpdate_Statics::NewProp_bPerformDefaultPostBufferUpdate_SetBit(void* Obj)
{
	((UPostBufferUpdate*)Obj)->bPerformDefaultPostBufferUpdate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPostBufferUpdate_Statics::NewProp_bPerformDefaultPostBufferUpdate = { "bPerformDefaultPostBufferUpdate", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, &UPostBufferUpdate::SetbPerformDefaultPostBufferUpdate_WrapperImpl, nullptr, 1, sizeof(bool), sizeof(UPostBufferUpdate), &Z_Construct_UClass_UPostBufferUpdate_Statics::NewProp_bPerformDefaultPostBufferUpdate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPerformDefaultPostBufferUpdate_MetaData), NewProp_bPerformDefaultPostBufferUpdate_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPostBufferUpdate_Statics::NewProp_BuffersToUpdate_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPostBufferUpdate_Statics::NewProp_BuffersToUpdate_Inner = { "BuffersToUpdate", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_SlateCore_ESlatePostRT, METADATA_PARAMS(0, nullptr) }; // 1976715162
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPostBufferUpdate_Statics::NewProp_BuffersToUpdate = { "BuffersToUpdate", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPostBufferUpdate, BuffersToUpdate), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuffersToUpdate_MetaData), NewProp_BuffersToUpdate_MetaData) }; // 1976715162
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPostBufferUpdate_Statics::NewProp_UpdateBufferInfos_Inner = { "UpdateBufferInfos", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSlatePostBufferUpdateInfo, METADATA_PARAMS(0, nullptr) }; // 479869748
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPostBufferUpdate_Statics::NewProp_UpdateBufferInfos = { "UpdateBufferInfos", nullptr, (EPropertyFlags)0x0040008000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPostBufferUpdate, UpdateBufferInfos), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateBufferInfos_MetaData), NewProp_UpdateBufferInfos_MetaData) }; // 479869748
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPostBufferUpdate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPostBufferUpdate_Statics::NewProp_bPerformDefaultPostBufferUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPostBufferUpdate_Statics::NewProp_BuffersToUpdate_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPostBufferUpdate_Statics::NewProp_BuffersToUpdate_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPostBufferUpdate_Statics::NewProp_BuffersToUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPostBufferUpdate_Statics::NewProp_UpdateBufferInfos_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPostBufferUpdate_Statics::NewProp_UpdateBufferInfos,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPostBufferUpdate_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPostBufferUpdate_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPostBufferUpdate_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPostBufferUpdate_Statics::ClassParams = {
	&UPostBufferUpdate::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPostBufferUpdate_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPostBufferUpdate_Statics::PropPointers),
	0,
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPostBufferUpdate_Statics::Class_MetaDataParams), Z_Construct_UClass_UPostBufferUpdate_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPostBufferUpdate()
{
	if (!Z_Registration_Info_UClass_UPostBufferUpdate.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPostBufferUpdate.OuterSingleton, Z_Construct_UClass_UPostBufferUpdate_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPostBufferUpdate.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<UPostBufferUpdate>()
{
	return UPostBufferUpdate::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPostBufferUpdate);
UPostBufferUpdate::~UPostBufferUpdate() {}
// End Class UPostBufferUpdate

// Begin Class USlatePostBufferProcessorUpdater
void USlatePostBufferProcessorUpdater::StaticRegisterNativesUSlatePostBufferProcessorUpdater()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USlatePostBufferProcessorUpdater);
UClass* Z_Construct_UClass_USlatePostBufferProcessorUpdater_NoRegister()
{
	return USlatePostBufferProcessorUpdater::StaticClass();
}
struct Z_Construct_UClass_USlatePostBufferProcessorUpdater_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Class that can create a FPostParamUpdaterProxy whose lifetime\n * will be managed by the renderthread. This proxy will be given a \n * Post buffer processor to update mid-frame.\n */" },
		{ "IncludePath", "Components/PostBufferUpdate.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/PostBufferUpdate.h" },
		{ "ToolTip", "Class that can create a FPostParamUpdaterProxy whose lifetime\nwill be managed by the renderthread. This proxy will be given a\nPost buffer processor to update mid-frame." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSkipBufferUpdate_MetaData[] = {
		{ "Category", "Update" },
		{ "Comment", "/**\n\x09 * True implies we will skip the buffer update & only update the processor.\n\x09 * Useful to reset params for processor runs next frame\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/PostBufferUpdate.h" },
		{ "ToolTip", "True implies we will skip the buffer update & only update the processor.\nUseful to reset params for processor runs next frame" },
	};
#endif // WITH_METADATA
	static void NewProp_bSkipBufferUpdate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipBufferUpdate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USlatePostBufferProcessorUpdater>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_USlatePostBufferProcessorUpdater_Statics::NewProp_bSkipBufferUpdate_SetBit(void* Obj)
{
	((USlatePostBufferProcessorUpdater*)Obj)->bSkipBufferUpdate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USlatePostBufferProcessorUpdater_Statics::NewProp_bSkipBufferUpdate = { "bSkipBufferUpdate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USlatePostBufferProcessorUpdater), &Z_Construct_UClass_USlatePostBufferProcessorUpdater_Statics::NewProp_bSkipBufferUpdate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSkipBufferUpdate_MetaData), NewProp_bSkipBufferUpdate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USlatePostBufferProcessorUpdater_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlatePostBufferProcessorUpdater_Statics::NewProp_bSkipBufferUpdate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USlatePostBufferProcessorUpdater_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USlatePostBufferProcessorUpdater_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USlatePostBufferProcessorUpdater_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USlatePostBufferProcessorUpdater_Statics::ClassParams = {
	&USlatePostBufferProcessorUpdater::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USlatePostBufferProcessorUpdater_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USlatePostBufferProcessorUpdater_Statics::PropPointers),
	0,
	0x000830A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USlatePostBufferProcessorUpdater_Statics::Class_MetaDataParams), Z_Construct_UClass_USlatePostBufferProcessorUpdater_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USlatePostBufferProcessorUpdater()
{
	if (!Z_Registration_Info_UClass_USlatePostBufferProcessorUpdater.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USlatePostBufferProcessorUpdater.OuterSingleton, Z_Construct_UClass_USlatePostBufferProcessorUpdater_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USlatePostBufferProcessorUpdater.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<USlatePostBufferProcessorUpdater>()
{
	return USlatePostBufferProcessorUpdater::StaticClass();
}
USlatePostBufferProcessorUpdater::USlatePostBufferProcessorUpdater(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USlatePostBufferProcessorUpdater);
USlatePostBufferProcessorUpdater::~USlatePostBufferProcessorUpdater() {}
// End Class USlatePostBufferProcessorUpdater

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_PostBufferUpdate_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSlatePostBufferUpdateInfo::StaticStruct, Z_Construct_UScriptStruct_FSlatePostBufferUpdateInfo_Statics::NewStructOps, TEXT("SlatePostBufferUpdateInfo"), &Z_Registration_Info_UScriptStruct_SlatePostBufferUpdateInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSlatePostBufferUpdateInfo), 479869748U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPostBufferUpdate, UPostBufferUpdate::StaticClass, TEXT("UPostBufferUpdate"), &Z_Registration_Info_UClass_UPostBufferUpdate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPostBufferUpdate), 1874127061U) },
		{ Z_Construct_UClass_USlatePostBufferProcessorUpdater, USlatePostBufferProcessorUpdater::StaticClass, TEXT("USlatePostBufferProcessorUpdater"), &Z_Registration_Info_UClass_USlatePostBufferProcessorUpdater, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USlatePostBufferProcessorUpdater), 4196930513U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_PostBufferUpdate_h_4260522536(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_PostBufferUpdate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_PostBufferUpdate_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_PostBufferUpdate_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_PostBufferUpdate_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
