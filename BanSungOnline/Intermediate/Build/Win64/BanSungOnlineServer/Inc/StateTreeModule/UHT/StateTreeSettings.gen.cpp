// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StateTreeModule/Public/StateTreeSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateTreeSettings() {}

// Begin Cross Module References
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
STATETREEMODULE_API UClass* Z_Construct_UClass_UStateTreeSettings();
STATETREEMODULE_API UClass* Z_Construct_UClass_UStateTreeSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_StateTreeModule();
// End Cross Module References

// Begin Class UStateTreeSettings
void UStateTreeSettings::StaticRegisterNativesUStateTreeSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStateTreeSettings);
UClass* Z_Construct_UClass_UStateTreeSettings_NoRegister()
{
	return UStateTreeSettings::StaticClass();
}
struct Z_Construct_UClass_UStateTreeSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Default StateTree settings\n */" },
		{ "DisplayName", "StateTree" },
		{ "IncludePath", "StateTreeSettings.h" },
		{ "ModuleRelativePath", "Public/StateTreeSettings.h" },
		{ "ToolTip", "Default StateTree settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoStartDebuggerTracesOnNonEditorTargets_MetaData[] = {
		{ "Category", "StateTree" },
		{ "Comment", "/**\n\x09 * Editor targets relies on PIE and StateTreeEditor to start/stop traces.\n\x09 * This is to start traces automatically when launching Standalone, Client or Server builds. \n\x09 * It's also possible to do it manually using 'statetree.startdebuggertraces' and 'statetree.stopdebuggertraces' in the console.\n\x09 */" },
		{ "ModuleRelativePath", "Public/StateTreeSettings.h" },
		{ "ToolTip", "Editor targets relies on PIE and StateTreeEditor to start/stop traces.\nThis is to start traces automatically when launching Standalone, Client or Server builds.\nIt's also possible to do it manually using 'statetree.startdebuggertraces' and 'statetree.stopdebuggertraces' in the console." },
	};
#endif // WITH_METADATA
	static void NewProp_bAutoStartDebuggerTracesOnNonEditorTargets_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoStartDebuggerTracesOnNonEditorTargets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStateTreeSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UStateTreeSettings_Statics::NewProp_bAutoStartDebuggerTracesOnNonEditorTargets_SetBit(void* Obj)
{
	((UStateTreeSettings*)Obj)->bAutoStartDebuggerTracesOnNonEditorTargets = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStateTreeSettings_Statics::NewProp_bAutoStartDebuggerTracesOnNonEditorTargets = { "bAutoStartDebuggerTracesOnNonEditorTargets", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UStateTreeSettings), &Z_Construct_UClass_UStateTreeSettings_Statics::NewProp_bAutoStartDebuggerTracesOnNonEditorTargets_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoStartDebuggerTracesOnNonEditorTargets_MetaData), NewProp_bAutoStartDebuggerTracesOnNonEditorTargets_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStateTreeSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeSettings_Statics::NewProp_bAutoStartDebuggerTracesOnNonEditorTargets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UStateTreeSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStateTreeSettings_Statics::ClassParams = {
	&UStateTreeSettings::StaticClass,
	"StateTree",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UStateTreeSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UStateTreeSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStateTreeSettings()
{
	if (!Z_Registration_Info_UClass_UStateTreeSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStateTreeSettings.OuterSingleton, Z_Construct_UClass_UStateTreeSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStateTreeSettings.OuterSingleton;
}
template<> STATETREEMODULE_API UClass* StaticClass<UStateTreeSettings>()
{
	return UStateTreeSettings::StaticClass();
}
UStateTreeSettings::UStateTreeSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStateTreeSettings);
UStateTreeSettings::~UStateTreeSettings() {}
// End Class UStateTreeSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStateTreeSettings, UStateTreeSettings::StaticClass, TEXT("UStateTreeSettings"), &Z_Registration_Info_UClass_UStateTreeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStateTreeSettings), 2331878530U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeSettings_h_2596561231(TEXT("/Script/StateTreeModule"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
