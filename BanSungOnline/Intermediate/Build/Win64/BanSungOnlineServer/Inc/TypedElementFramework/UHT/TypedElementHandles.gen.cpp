// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/TypedElementFramework/Public/Elements/Common/TypedElementHandles.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypedElementHandles() {}

// Begin Cross Module References
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTedsRowHandle();
UPackage* Z_Construct_UPackage__Script_TypedElementFramework();
// End Cross Module References

// Begin ScriptStruct FTedsRowHandle
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TedsRowHandle;
class UScriptStruct* FTedsRowHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TedsRowHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TedsRowHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTedsRowHandle, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TedsRowHandle"));
	}
	return Z_Registration_Info_UScriptStruct_TedsRowHandle.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTedsRowHandle>()
{
	return FTedsRowHandle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTedsRowHandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/*\n * FTedsRowHandle is a strongly typed wrapper around UE::Editor::DataStorage::RowHandle and should only be used in cases where you need the extra info.\n * E.g for reflection/UHT or for template specializing something that needs to know the semantics of the row handle.\n * For all other cases, you should use the regular typedef UE::Editor::DataStorage::RowHandle\n */" },
		{ "ModuleRelativePath", "Public/Elements/Common/TypedElementHandles.h" },
		{ "ToolTip", "* FTedsRowHandle is a strongly typed wrapper around UE::Editor::DataStorage::RowHandle and should only be used in cases where you need the extra info.\n* E.g for reflection/UHT or for template specializing something that needs to know the semantics of the row handle.\n* For all other cases, you should use the regular typedef UE::Editor::DataStorage::RowHandle" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RowHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/Common/TypedElementHandles.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt64PropertyParams NewProp_RowHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTedsRowHandle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FUInt64PropertyParams Z_Construct_UScriptStruct_FTedsRowHandle_Statics::NewProp_RowHandle = { "RowHandle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTedsRowHandle, RowHandle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RowHandle_MetaData), NewProp_RowHandle_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTedsRowHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTedsRowHandle_Statics::NewProp_RowHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTedsRowHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTedsRowHandle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	nullptr,
	&NewStructOps,
	"TedsRowHandle",
	Z_Construct_UScriptStruct_FTedsRowHandle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTedsRowHandle_Statics::PropPointers),
	sizeof(FTedsRowHandle),
	alignof(FTedsRowHandle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTedsRowHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTedsRowHandle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTedsRowHandle()
{
	if (!Z_Registration_Info_UScriptStruct_TedsRowHandle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TedsRowHandle.InnerSingleton, Z_Construct_UScriptStruct_FTedsRowHandle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TedsRowHandle.InnerSingleton;
}
// End ScriptStruct FTedsRowHandle

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Common_TypedElementHandles_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTedsRowHandle::StaticStruct, Z_Construct_UScriptStruct_FTedsRowHandle_Statics::NewStructOps, TEXT("TedsRowHandle"), &Z_Registration_Info_UScriptStruct_TedsRowHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTedsRowHandle), 3490165900U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Common_TypedElementHandles_h_3903390887(TEXT("/Script/TypedElementFramework"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Common_TypedElementHandles_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Common_TypedElementHandles_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
