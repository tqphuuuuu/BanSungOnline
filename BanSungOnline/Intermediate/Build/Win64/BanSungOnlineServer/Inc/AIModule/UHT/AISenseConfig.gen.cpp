// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/Perception/AISenseConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISenseConfig() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig();
AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Class UAISenseConfig
void UAISenseConfig::StaticRegisterNativesUAISenseConfig()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAISenseConfig);
UClass* Z_Construct_UClass_UAISenseConfig_NoRegister()
{
	return UAISenseConfig::StaticClass();
}
struct Z_Construct_UClass_UAISenseConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "AI" },
		{ "IncludePath", "Perception/AISenseConfig.h" },
		{ "ModuleRelativePath", "Classes/Perception/AISenseConfig.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugColor_MetaData[] = {
		{ "Category", "Sense" },
		{ "ModuleRelativePath", "Classes/Perception/AISenseConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAge_MetaData[] = {
		{ "Category", "Sense" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** specifies age limit after stimuli generated by this sense become forgotten. 0 means \"never\" */" },
		{ "ModuleRelativePath", "Classes/Perception/AISenseConfig.h" },
		{ "ToolTip", "specifies age limit after stimuli generated by this sense become forgotten. 0 means \"never\"" },
		{ "UIMin", "0.0" },
		{ "Units", "Seconds" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStartsEnabled_MetaData[] = {
		{ "Category", "Sense" },
		{ "Comment", "/** determines whether given sense starts in an enabled state */" },
		{ "ModuleRelativePath", "Classes/Perception/AISenseConfig.h" },
		{ "ToolTip", "determines whether given sense starts in an enabled state" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DebugColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAge;
	static void NewProp_bStartsEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartsEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISenseConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAISenseConfig_Statics::NewProp_DebugColor = { "DebugColor", nullptr, (EPropertyFlags)0x00200c0000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAISenseConfig, DebugColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugColor_MetaData), NewProp_DebugColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISenseConfig_Statics::NewProp_MaxAge = { "MaxAge", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAISenseConfig, MaxAge), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAge_MetaData), NewProp_MaxAge_MetaData) };
void Z_Construct_UClass_UAISenseConfig_Statics::NewProp_bStartsEnabled_SetBit(void* Obj)
{
	((UAISenseConfig*)Obj)->bStartsEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAISenseConfig_Statics::NewProp_bStartsEnabled = { "bStartsEnabled", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UAISenseConfig), &Z_Construct_UClass_UAISenseConfig_Statics::NewProp_bStartsEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStartsEnabled_MetaData), NewProp_bStartsEnabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISenseConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISenseConfig_Statics::NewProp_DebugColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISenseConfig_Statics::NewProp_MaxAge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISenseConfig_Statics::NewProp_bStartsEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAISenseConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAISenseConfig_Statics::ClassParams = {
	&UAISenseConfig::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAISenseConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Statics::PropPointers),
	0,
	0x000810A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UAISenseConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAISenseConfig()
{
	if (!Z_Registration_Info_UClass_UAISenseConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAISenseConfig.OuterSingleton, Z_Construct_UClass_UAISenseConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAISenseConfig.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UAISenseConfig>()
{
	return UAISenseConfig::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAISenseConfig);
UAISenseConfig::~UAISenseConfig() {}
// End Class UAISenseConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAISenseConfig, UAISenseConfig::StaticClass, TEXT("UAISenseConfig"), &Z_Registration_Info_UClass_UAISenseConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAISenseConfig), 1924890567U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_h_3681849692(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
