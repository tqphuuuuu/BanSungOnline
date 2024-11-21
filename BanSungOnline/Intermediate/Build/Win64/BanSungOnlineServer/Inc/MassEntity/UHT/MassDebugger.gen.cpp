// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MassEntity/Public/MassDebugger.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassDebugger() {}

// Begin Cross Module References
MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassGenericDebugEvent();
UPackage* Z_Construct_UPackage__Script_MassEntity();
// End Cross Module References

// Begin ScriptStruct FMassGenericDebugEvent
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassGenericDebugEvent;
class UScriptStruct* FMassGenericDebugEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassGenericDebugEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassGenericDebugEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassGenericDebugEvent, (UObject*)Z_Construct_UPackage__Script_MassEntity(), TEXT("MassGenericDebugEvent"));
	}
	return Z_Registration_Info_UScriptStruct_MassGenericDebugEvent.OuterSingleton;
}
template<> MASSENTITY_API UScriptStruct* StaticStruct<FMassGenericDebugEvent>()
{
	return FMassGenericDebugEvent::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassGenericDebugEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// namespace UE::Mass::Debug\n" },
		{ "ModuleRelativePath", "Public/MassDebugger.h" },
		{ "ToolTip", "namespace UE::Mass::Debug" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassGenericDebugEvent>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassGenericDebugEvent_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassEntity,
	nullptr,
	&NewStructOps,
	"MassGenericDebugEvent",
	nullptr,
	0,
	sizeof(FMassGenericDebugEvent),
	alignof(FMassGenericDebugEvent),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassGenericDebugEvent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassGenericDebugEvent_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassGenericDebugEvent()
{
	if (!Z_Registration_Info_UScriptStruct_MassGenericDebugEvent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassGenericDebugEvent.InnerSingleton, Z_Construct_UScriptStruct_FMassGenericDebugEvent_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassGenericDebugEvent.InnerSingleton;
}
// End ScriptStruct FMassGenericDebugEvent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MassEntity_Public_MassDebugger_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMassGenericDebugEvent::StaticStruct, Z_Construct_UScriptStruct_FMassGenericDebugEvent_Statics::NewStructOps, TEXT("MassGenericDebugEvent"), &Z_Registration_Info_UScriptStruct_MassGenericDebugEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassGenericDebugEvent), 4046076115U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MassEntity_Public_MassDebugger_h_1528175181(TEXT("/Script/MassEntity"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MassEntity_Public_MassDebugger_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MassEntity_Public_MassDebugger_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
