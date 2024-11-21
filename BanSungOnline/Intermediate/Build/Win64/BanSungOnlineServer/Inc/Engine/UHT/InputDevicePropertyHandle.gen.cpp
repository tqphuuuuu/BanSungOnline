// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/GameFramework/InputDevicePropertyHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputDevicePropertyHandle() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputDevicePropertyHandle();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FInputDevicePropertyHandle
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputDevicePropertyHandle;
class UScriptStruct* FInputDevicePropertyHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputDevicePropertyHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputDevicePropertyHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputDevicePropertyHandle, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("InputDevicePropertyHandle"));
	}
	return Z_Registration_Info_UScriptStruct_InputDevicePropertyHandle.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FInputDevicePropertyHandle>()
{
	return FInputDevicePropertyHandle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInputDevicePropertyHandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A handle to an active input device property that is being used by the InputDeviceSubsytem. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDevicePropertyHandle.h" },
		{ "ToolTip", "A handle to an active input device property that is being used by the InputDeviceSubsytem." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InternalId_MetaData[] = {
		{ "Comment", "/** The internal ID of this handle. Populated by the private constructor in AcquireValidHandle */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDevicePropertyHandle.h" },
		{ "ToolTip", "The internal ID of this handle. Populated by the private constructor in AcquireValidHandle" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_InternalId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputDevicePropertyHandle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FInputDevicePropertyHandle_Statics::NewProp_InternalId = { "InternalId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputDevicePropertyHandle, InternalId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InternalId_MetaData), NewProp_InternalId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputDevicePropertyHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputDevicePropertyHandle_Statics::NewProp_InternalId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputDevicePropertyHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputDevicePropertyHandle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"InputDevicePropertyHandle",
	Z_Construct_UScriptStruct_FInputDevicePropertyHandle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputDevicePropertyHandle_Statics::PropPointers),
	sizeof(FInputDevicePropertyHandle),
	alignof(FInputDevicePropertyHandle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputDevicePropertyHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInputDevicePropertyHandle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInputDevicePropertyHandle()
{
	if (!Z_Registration_Info_UScriptStruct_InputDevicePropertyHandle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputDevicePropertyHandle.InnerSingleton, Z_Construct_UScriptStruct_FInputDevicePropertyHandle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InputDevicePropertyHandle.InnerSingleton;
}
// End ScriptStruct FInputDevicePropertyHandle

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDevicePropertyHandle_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInputDevicePropertyHandle::StaticStruct, Z_Construct_UScriptStruct_FInputDevicePropertyHandle_Statics::NewStructOps, TEXT("InputDevicePropertyHandle"), &Z_Registration_Info_UScriptStruct_InputDevicePropertyHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputDevicePropertyHandle), 158936348U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDevicePropertyHandle_h_3440193304(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDevicePropertyHandle_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDevicePropertyHandle_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
