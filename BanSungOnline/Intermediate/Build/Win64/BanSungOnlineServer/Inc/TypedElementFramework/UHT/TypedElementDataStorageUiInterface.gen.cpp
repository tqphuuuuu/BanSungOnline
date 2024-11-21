// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/TypedElementFramework/Public/Elements/Interfaces/TypedElementDataStorageUiInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypedElementDataStorageUiInterface() {}

// Begin Cross Module References
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleWidgetConstructor();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementWidgetConstructor();
UPackage* Z_Construct_UPackage__Script_TypedElementFramework();
// End Cross Module References

// Begin ScriptStruct FTypedElementWidgetConstructor
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TypedElementWidgetConstructor;
class UScriptStruct* FTypedElementWidgetConstructor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementWidgetConstructor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TypedElementWidgetConstructor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypedElementWidgetConstructor, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TypedElementWidgetConstructor"));
	}
	return Z_Registration_Info_UScriptStruct_TypedElementWidgetConstructor.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTypedElementWidgetConstructor>()
{
	return FTypedElementWidgetConstructor::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTypedElementWidgetConstructor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class used to construct Typed Element widgets with.\n * See below for the options to register a constructor with the Data Storage.\n * In most cases you want to inherit from FSimpleWidgetConstructor instead which has a simpler pipeline to create widgets\n */" },
		{ "ModuleRelativePath", "Public/Elements/Interfaces/TypedElementDataStorageUiInterface.h" },
		{ "ToolTip", "Base class used to construct Typed Element widgets with.\nSee below for the options to register a constructor with the Data Storage.\nIn most cases you want to inherit from FSimpleWidgetConstructor instead which has a simpler pipeline to create widgets" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypedElementWidgetConstructor>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypedElementWidgetConstructor_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	nullptr,
	&NewStructOps,
	"TypedElementWidgetConstructor",
	nullptr,
	0,
	sizeof(FTypedElementWidgetConstructor),
	alignof(FTypedElementWidgetConstructor),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementWidgetConstructor_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTypedElementWidgetConstructor_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTypedElementWidgetConstructor()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementWidgetConstructor.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TypedElementWidgetConstructor.InnerSingleton, Z_Construct_UScriptStruct_FTypedElementWidgetConstructor_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TypedElementWidgetConstructor.InnerSingleton;
}
// End ScriptStruct FTypedElementWidgetConstructor

// Begin ScriptStruct FSimpleWidgetConstructor
static_assert(std::is_polymorphic<FSimpleWidgetConstructor>() == std::is_polymorphic<FTypedElementWidgetConstructor>(), "USTRUCT FSimpleWidgetConstructor cannot be polymorphic unless super FTypedElementWidgetConstructor is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SimpleWidgetConstructor;
class UScriptStruct* FSimpleWidgetConstructor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SimpleWidgetConstructor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SimpleWidgetConstructor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSimpleWidgetConstructor, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("SimpleWidgetConstructor"));
	}
	return Z_Registration_Info_UScriptStruct_SimpleWidgetConstructor.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FSimpleWidgetConstructor>()
{
	return FSimpleWidgetConstructor::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSimpleWidgetConstructor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * A simple widget constructor that cuts down on most of the boilerplate, in most cases you want to inherit from this to create your widget constructor\n * Only requires you to override CreateWidget() to create the actual SWidget\n */" },
		{ "ModuleRelativePath", "Public/Elements/Interfaces/TypedElementDataStorageUiInterface.h" },
		{ "ToolTip", "A simple widget constructor that cuts down on most of the boilerplate, in most cases you want to inherit from this to create your widget constructor\nOnly requires you to override CreateWidget() to create the actual SWidget" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSimpleWidgetConstructor>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSimpleWidgetConstructor_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FTypedElementWidgetConstructor,
	&NewStructOps,
	"SimpleWidgetConstructor",
	nullptr,
	0,
	sizeof(FSimpleWidgetConstructor),
	alignof(FSimpleWidgetConstructor),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleWidgetConstructor_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSimpleWidgetConstructor_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSimpleWidgetConstructor()
{
	if (!Z_Registration_Info_UScriptStruct_SimpleWidgetConstructor.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SimpleWidgetConstructor.InnerSingleton, Z_Construct_UScriptStruct_FSimpleWidgetConstructor_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SimpleWidgetConstructor.InnerSingleton;
}
// End ScriptStruct FSimpleWidgetConstructor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageUiInterface_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTypedElementWidgetConstructor::StaticStruct, Z_Construct_UScriptStruct_FTypedElementWidgetConstructor_Statics::NewStructOps, TEXT("TypedElementWidgetConstructor"), &Z_Registration_Info_UScriptStruct_TypedElementWidgetConstructor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTypedElementWidgetConstructor), 1294909089U) },
		{ FSimpleWidgetConstructor::StaticStruct, Z_Construct_UScriptStruct_FSimpleWidgetConstructor_Statics::NewStructOps, TEXT("SimpleWidgetConstructor"), &Z_Registration_Info_UScriptStruct_SimpleWidgetConstructor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSimpleWidgetConstructor), 2112006447U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageUiInterface_h_3929702518(TEXT("/Script/TypedElementFramework"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageUiInterface_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageUiInterface_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
