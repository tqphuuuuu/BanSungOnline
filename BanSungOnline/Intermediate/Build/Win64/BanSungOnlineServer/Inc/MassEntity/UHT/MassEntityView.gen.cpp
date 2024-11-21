// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MassEntity/Public/MassEntityView.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassEntityView() {}

// Begin Cross Module References
MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassEntityView();
UPackage* Z_Construct_UPackage__Script_MassEntity();
// End Cross Module References

// Begin ScriptStruct FMassEntityView
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassEntityView;
class UScriptStruct* FMassEntityView::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassEntityView.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassEntityView.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassEntityView, (UObject*)Z_Construct_UPackage__Script_MassEntity(), TEXT("MassEntityView"));
	}
	return Z_Registration_Info_UScriptStruct_MassEntityView.OuterSingleton;
}
template<> MASSENTITY_API UScriptStruct* StaticStruct<FMassEntityView>()
{
	return FMassEntityView::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassEntityView_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** \n * The type representing a single entity in a single archetype. It's of a very transient nature so we guarantee it's \n * validity only within the scope it has been created in. Don't store it. \n */" },
		{ "ModuleRelativePath", "Public/MassEntityView.h" },
		{ "ToolTip", "The type representing a single entity in a single archetype. It's of a very transient nature so we guarantee it's\nvalidity only within the scope it has been created in. Don't store it." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassEntityView>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassEntityView_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassEntity,
	nullptr,
	&NewStructOps,
	"MassEntityView",
	nullptr,
	0,
	sizeof(FMassEntityView),
	alignof(FMassEntityView),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassEntityView_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassEntityView_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassEntityView()
{
	if (!Z_Registration_Info_UScriptStruct_MassEntityView.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassEntityView.InnerSingleton, Z_Construct_UScriptStruct_FMassEntityView_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassEntityView.InnerSingleton;
}
// End ScriptStruct FMassEntityView

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MassEntity_Public_MassEntityView_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMassEntityView::StaticStruct, Z_Construct_UScriptStruct_FMassEntityView_Statics::NewStructOps, TEXT("MassEntityView"), &Z_Registration_Info_UScriptStruct_MassEntityView, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassEntityView), 2766458553U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MassEntity_Public_MassEntityView_h_1149623486(TEXT("/Script/MassEntity"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MassEntity_Public_MassEntityView_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MassEntity_Public_MassEntityView_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
