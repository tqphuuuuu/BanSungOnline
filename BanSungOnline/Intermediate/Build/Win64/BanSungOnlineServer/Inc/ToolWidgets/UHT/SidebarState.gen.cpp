// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Developer/ToolWidgets/Public/Sidebar/SidebarState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSidebarState() {}

// Begin Cross Module References
TOOLWIDGETS_API UScriptStruct* Z_Construct_UScriptStruct_FSidebarDrawerState();
TOOLWIDGETS_API UScriptStruct* Z_Construct_UScriptStruct_FSidebarState();
UPackage* Z_Construct_UPackage__Script_ToolWidgets();
// End Cross Module References

// Begin ScriptStruct FSidebarDrawerState
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SidebarDrawerState;
class UScriptStruct* FSidebarDrawerState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SidebarDrawerState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SidebarDrawerState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSidebarDrawerState, (UObject*)Z_Construct_UPackage__Script_ToolWidgets(), TEXT("SidebarDrawerState"));
	}
	return Z_Registration_Info_UScriptStruct_SidebarDrawerState.OuterSingleton;
}
template<> TOOLWIDGETS_API UScriptStruct* StaticStruct<FSidebarDrawerState>()
{
	return FSidebarDrawerState::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSidebarDrawerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Represents the state of a sidebar drawer to be saved/restored to/from config. */" },
		{ "ModuleRelativePath", "Public/Sidebar/SidebarState.h" },
		{ "ToolTip", "Represents the state of a sidebar drawer to be saved/restored to/from config." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawerId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sidebar/SidebarState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedSections_MetaData[] = {
		{ "Comment", "/** Names of all sections that were last selected */" },
		{ "ModuleRelativePath", "Public/Sidebar/SidebarState.h" },
		{ "ToolTip", "Names of all sections that were last selected" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsPinned_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sidebar/SidebarState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDocked_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sidebar/SidebarState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_DrawerId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SelectedSections_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_SelectedSections;
	static void NewProp_bIsPinned_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPinned;
	static void NewProp_bIsDocked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDocked;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSidebarDrawerState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSidebarDrawerState_Statics::NewProp_DrawerId = { "DrawerId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSidebarDrawerState, DrawerId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawerId_MetaData), NewProp_DrawerId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSidebarDrawerState_Statics::NewProp_SelectedSections_ElementProp = { "SelectedSections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FSidebarDrawerState_Statics::NewProp_SelectedSections = { "SelectedSections", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSidebarDrawerState, SelectedSections), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedSections_MetaData), NewProp_SelectedSections_MetaData) };
void Z_Construct_UScriptStruct_FSidebarDrawerState_Statics::NewProp_bIsPinned_SetBit(void* Obj)
{
	((FSidebarDrawerState*)Obj)->bIsPinned = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSidebarDrawerState_Statics::NewProp_bIsPinned = { "bIsPinned", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSidebarDrawerState), &Z_Construct_UScriptStruct_FSidebarDrawerState_Statics::NewProp_bIsPinned_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsPinned_MetaData), NewProp_bIsPinned_MetaData) };
void Z_Construct_UScriptStruct_FSidebarDrawerState_Statics::NewProp_bIsDocked_SetBit(void* Obj)
{
	((FSidebarDrawerState*)Obj)->bIsDocked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSidebarDrawerState_Statics::NewProp_bIsDocked = { "bIsDocked", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSidebarDrawerState), &Z_Construct_UScriptStruct_FSidebarDrawerState_Statics::NewProp_bIsDocked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDocked_MetaData), NewProp_bIsDocked_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSidebarDrawerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSidebarDrawerState_Statics::NewProp_DrawerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSidebarDrawerState_Statics::NewProp_SelectedSections_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSidebarDrawerState_Statics::NewProp_SelectedSections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSidebarDrawerState_Statics::NewProp_bIsPinned,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSidebarDrawerState_Statics::NewProp_bIsDocked,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSidebarDrawerState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSidebarDrawerState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ToolWidgets,
	nullptr,
	&NewStructOps,
	"SidebarDrawerState",
	Z_Construct_UScriptStruct_FSidebarDrawerState_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSidebarDrawerState_Statics::PropPointers),
	sizeof(FSidebarDrawerState),
	alignof(FSidebarDrawerState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSidebarDrawerState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSidebarDrawerState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSidebarDrawerState()
{
	if (!Z_Registration_Info_UScriptStruct_SidebarDrawerState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SidebarDrawerState.InnerSingleton, Z_Construct_UScriptStruct_FSidebarDrawerState_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SidebarDrawerState.InnerSingleton;
}
// End ScriptStruct FSidebarDrawerState

// Begin ScriptStruct FSidebarState
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SidebarState;
class UScriptStruct* FSidebarState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SidebarState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SidebarState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSidebarState, (UObject*)Z_Construct_UPackage__Script_ToolWidgets(), TEXT("SidebarState"));
	}
	return Z_Registration_Info_UScriptStruct_SidebarState.OuterSingleton;
}
template<> TOOLWIDGETS_API UScriptStruct* StaticStruct<FSidebarState>()
{
	return FSidebarState::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSidebarState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Represents the state of a sidebar to be saved/restored to/from config. */" },
		{ "ModuleRelativePath", "Public/Sidebar/SidebarState.h" },
		{ "ToolTip", "Represents the state of a sidebar to be saved/restored to/from config." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHidden_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sidebar/SidebarState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawerSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sidebar/SidebarState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContentSize_MetaData[] = {
		{ "Comment", "/** Save the other splitter slot size to exactly restore the size when a drawer is docked in a SSplitter widget. */" },
		{ "ModuleRelativePath", "Public/Sidebar/SidebarState.h" },
		{ "ToolTip", "Save the other splitter slot size to exactly restore the size when a drawer is docked in a SSplitter widget." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawerStates_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sidebar/SidebarState.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bHidden_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHidden;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DrawerSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ContentSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DrawerStates_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DrawerStates;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSidebarState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FSidebarState_Statics::NewProp_bHidden_SetBit(void* Obj)
{
	((FSidebarState*)Obj)->bHidden = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSidebarState_Statics::NewProp_bHidden = { "bHidden", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSidebarState), &Z_Construct_UScriptStruct_FSidebarState_Statics::NewProp_bHidden_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHidden_MetaData), NewProp_bHidden_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSidebarState_Statics::NewProp_DrawerSize = { "DrawerSize", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSidebarState, DrawerSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawerSize_MetaData), NewProp_DrawerSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSidebarState_Statics::NewProp_ContentSize = { "ContentSize", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSidebarState, ContentSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContentSize_MetaData), NewProp_ContentSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSidebarState_Statics::NewProp_DrawerStates_Inner = { "DrawerStates", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSidebarDrawerState, METADATA_PARAMS(0, nullptr) }; // 3003700677
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSidebarState_Statics::NewProp_DrawerStates = { "DrawerStates", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSidebarState, DrawerStates), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawerStates_MetaData), NewProp_DrawerStates_MetaData) }; // 3003700677
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSidebarState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSidebarState_Statics::NewProp_bHidden,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSidebarState_Statics::NewProp_DrawerSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSidebarState_Statics::NewProp_ContentSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSidebarState_Statics::NewProp_DrawerStates_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSidebarState_Statics::NewProp_DrawerStates,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSidebarState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSidebarState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ToolWidgets,
	nullptr,
	&NewStructOps,
	"SidebarState",
	Z_Construct_UScriptStruct_FSidebarState_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSidebarState_Statics::PropPointers),
	sizeof(FSidebarState),
	alignof(FSidebarState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSidebarState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSidebarState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSidebarState()
{
	if (!Z_Registration_Info_UScriptStruct_SidebarState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SidebarState.InnerSingleton, Z_Construct_UScriptStruct_FSidebarState_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SidebarState.InnerSingleton;
}
// End ScriptStruct FSidebarState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolWidgets_Public_Sidebar_SidebarState_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSidebarDrawerState::StaticStruct, Z_Construct_UScriptStruct_FSidebarDrawerState_Statics::NewStructOps, TEXT("SidebarDrawerState"), &Z_Registration_Info_UScriptStruct_SidebarDrawerState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSidebarDrawerState), 3003700677U) },
		{ FSidebarState::StaticStruct, Z_Construct_UScriptStruct_FSidebarState_Statics::NewStructOps, TEXT("SidebarState"), &Z_Registration_Info_UScriptStruct_SidebarState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSidebarState), 4027267458U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolWidgets_Public_Sidebar_SidebarState_h_2560986801(TEXT("/Script/ToolWidgets"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolWidgets_Public_Sidebar_SidebarState_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolWidgets_Public_Sidebar_SidebarState_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
