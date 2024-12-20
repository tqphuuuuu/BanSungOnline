// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/LevelStreamingVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelStreamingVolume() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ALevelStreamingVolume();
ENGINE_API UClass* Z_Construct_UClass_ALevelStreamingVolume_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AVolume();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EStreamingVolumeUsage();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EStreamingVolumeUsage
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStreamingVolumeUsage;
static UEnum* EStreamingVolumeUsage_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EStreamingVolumeUsage.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EStreamingVolumeUsage.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EStreamingVolumeUsage, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EStreamingVolumeUsage"));
	}
	return Z_Registration_Info_UEnum_EStreamingVolumeUsage.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EStreamingVolumeUsage>()
{
	return EStreamingVolumeUsage_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EStreamingVolumeUsage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Enum for different usage cases of level streaming volumes. */" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreamingVolume.h" },
		{ "SVB_BlockingOnLoad.Name", "SVB_BlockingOnLoad" },
		{ "SVB_Loading.Name", "SVB_Loading" },
		{ "SVB_LoadingAndVisibility.Name", "SVB_LoadingAndVisibility" },
		{ "SVB_LoadingNotVisible.Name", "SVB_LoadingNotVisible" },
		{ "SVB_MAX.Name", "SVB_MAX" },
		{ "SVB_VisibilityBlockingOnLoad.Name", "SVB_VisibilityBlockingOnLoad" },
		{ "ToolTip", "Enum for different usage cases of level streaming volumes." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "SVB_Loading", (int64)SVB_Loading },
		{ "SVB_LoadingAndVisibility", (int64)SVB_LoadingAndVisibility },
		{ "SVB_VisibilityBlockingOnLoad", (int64)SVB_VisibilityBlockingOnLoad },
		{ "SVB_BlockingOnLoad", (int64)SVB_BlockingOnLoad },
		{ "SVB_LoadingNotVisible", (int64)SVB_LoadingNotVisible },
		{ "SVB_MAX", (int64)SVB_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EStreamingVolumeUsage_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EStreamingVolumeUsage",
	"EStreamingVolumeUsage",
	Z_Construct_UEnum_Engine_EStreamingVolumeUsage_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EStreamingVolumeUsage_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EStreamingVolumeUsage_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EStreamingVolumeUsage_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EStreamingVolumeUsage()
{
	if (!Z_Registration_Info_UEnum_EStreamingVolumeUsage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStreamingVolumeUsage.InnerSingleton, Z_Construct_UEnum_Engine_EStreamingVolumeUsage_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EStreamingVolumeUsage.InnerSingleton;
}
// End Enum EStreamingVolumeUsage

// Begin Class ALevelStreamingVolume
void ALevelStreamingVolume::StaticRegisterNativesALevelStreamingVolume()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALevelStreamingVolume);
UClass* Z_Construct_UClass_ALevelStreamingVolume_NoRegister()
{
	return ALevelStreamingVolume::StaticClass();
}
struct Z_Construct_UClass_ALevelStreamingVolume_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Advanced Attachment Collision Volume Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "Engine/LevelStreamingVolume.h" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreamingVolume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StreamingLevelNames_MetaData[] = {
		{ "Category", "LevelStreamingVolume" },
		{ "Comment", "/** Levels names affected by this level streaming volume. */" },
		{ "DisplayName", "Streaming Levels" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreamingVolume.h" },
		{ "ToolTip", "Levels names affected by this level streaming volume." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEditorPreVisOnly_MetaData[] = {
		{ "Category", "LevelStreamingVolume" },
		{ "Comment", "/** If true, this streaming volume should only be used for editor streaming level previs. */" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreamingVolume.h" },
		{ "ToolTip", "If true, this streaming volume should only be used for editor streaming level previs." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisabled_MetaData[] = {
		{ "Category", "LevelStreamingVolume" },
		{ "Comment", "/**\n\x09 * If true, this streaming volume is ignored by the streaming volume code.  Used to either\n\x09 * disable a level streaming volume without disassociating it from the level, or to toggle\n\x09 * the control of a level's streaming between Kismet and volume streaming.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreamingVolume.h" },
		{ "ToolTip", "If true, this streaming volume is ignored by the streaming volume code.  Used to either\ndisable a level streaming volume without disassociating it from the level, or to toggle\nthe control of a level's streaming between Kismet and volume streaming." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StreamingUsage_MetaData[] = {
		{ "Category", "LevelStreamingVolume" },
		{ "Comment", "/** Determines what this volume is used for, e.g. whether to control loading, loading and visibility or just visibilty (blocking on load) */" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreamingVolume.h" },
		{ "ToolTip", "Determines what this volume is used for, e.g. whether to control loading, loading and visibility or just visibilty (blocking on load)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_StreamingLevelNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StreamingLevelNames;
	static void NewProp_bEditorPreVisOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEditorPreVisOnly;
	static void NewProp_bDisabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisabled;
	static const UECodeGen_Private::FBytePropertyParams NewProp_StreamingUsage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALevelStreamingVolume>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ALevelStreamingVolume_Statics::NewProp_StreamingLevelNames_Inner = { "StreamingLevelNames", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALevelStreamingVolume_Statics::NewProp_StreamingLevelNames = { "StreamingLevelNames", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelStreamingVolume, StreamingLevelNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StreamingLevelNames_MetaData), NewProp_StreamingLevelNames_MetaData) };
void Z_Construct_UClass_ALevelStreamingVolume_Statics::NewProp_bEditorPreVisOnly_SetBit(void* Obj)
{
	((ALevelStreamingVolume*)Obj)->bEditorPreVisOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALevelStreamingVolume_Statics::NewProp_bEditorPreVisOnly = { "bEditorPreVisOnly", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ALevelStreamingVolume), &Z_Construct_UClass_ALevelStreamingVolume_Statics::NewProp_bEditorPreVisOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEditorPreVisOnly_MetaData), NewProp_bEditorPreVisOnly_MetaData) };
void Z_Construct_UClass_ALevelStreamingVolume_Statics::NewProp_bDisabled_SetBit(void* Obj)
{
	((ALevelStreamingVolume*)Obj)->bDisabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALevelStreamingVolume_Statics::NewProp_bDisabled = { "bDisabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ALevelStreamingVolume), &Z_Construct_UClass_ALevelStreamingVolume_Statics::NewProp_bDisabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisabled_MetaData), NewProp_bDisabled_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ALevelStreamingVolume_Statics::NewProp_StreamingUsage = { "StreamingUsage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelStreamingVolume, StreamingUsage), Z_Construct_UEnum_Engine_EStreamingVolumeUsage, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StreamingUsage_MetaData), NewProp_StreamingUsage_MetaData) }; // 2835823689
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALevelStreamingVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelStreamingVolume_Statics::NewProp_StreamingLevelNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelStreamingVolume_Statics::NewProp_StreamingLevelNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelStreamingVolume_Statics::NewProp_bEditorPreVisOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelStreamingVolume_Statics::NewProp_bDisabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelStreamingVolume_Statics::NewProp_StreamingUsage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelStreamingVolume_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ALevelStreamingVolume_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AVolume,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelStreamingVolume_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALevelStreamingVolume_Statics::ClassParams = {
	&ALevelStreamingVolume::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ALevelStreamingVolume_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ALevelStreamingVolume_Statics::PropPointers),
	0,
	0x008800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelStreamingVolume_Statics::Class_MetaDataParams), Z_Construct_UClass_ALevelStreamingVolume_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALevelStreamingVolume()
{
	if (!Z_Registration_Info_UClass_ALevelStreamingVolume.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALevelStreamingVolume.OuterSingleton, Z_Construct_UClass_ALevelStreamingVolume_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALevelStreamingVolume.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<ALevelStreamingVolume>()
{
	return ALevelStreamingVolume::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALevelStreamingVolume);
ALevelStreamingVolume::~ALevelStreamingVolume() {}
// End Class ALevelStreamingVolume

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingVolume_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EStreamingVolumeUsage_StaticEnum, TEXT("EStreamingVolumeUsage"), &Z_Registration_Info_UEnum_EStreamingVolumeUsage, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2835823689U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALevelStreamingVolume, ALevelStreamingVolume::StaticClass, TEXT("ALevelStreamingVolume"), &Z_Registration_Info_UClass_ALevelStreamingVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALevelStreamingVolume), 1521968909U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingVolume_h_1908857417(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingVolume_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingVolume_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingVolume_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
