// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusCore/Private/DataInterfaces/OptimusDataInterfaceDebugDraw.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusDataInterfaceDebugDraw() {}

// Begin Cross Module References
COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeDataProvider();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComputeDataInterface();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusDebugDrawDataInterface();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusDebugDrawDataInterface_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusDebugDrawDataProvider();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusDebugDrawDataProvider_NoRegister();
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusDebugDrawParameters();
UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References

// Begin ScriptStruct FOptimusDebugDrawParameters
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusDebugDrawParameters;
class UScriptStruct* FOptimusDebugDrawParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusDebugDrawParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusDebugDrawParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusDebugDrawParameters, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusDebugDrawParameters"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusDebugDrawParameters.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusDebugDrawParameters>()
{
	return FOptimusDebugDrawParameters::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOptimusDebugDrawParameters_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/* User controllable debug draw settings. */" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceDebugDraw.h" },
		{ "ToolTip", "User controllable debug draw settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceEnable_MetaData[] = {
		{ "Category", "DebugDraw" },
		{ "Comment", "/** \n\x09 * Force enable debug rendering. \n\x09 * Otherwise \"r.ShaderPrint 1\" needs to be set.\n\x09 */" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceDebugDraw.h" },
		{ "ToolTip", "Force enable debug rendering.\nOtherwise \"r.ShaderPrint 1\" needs to be set." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxLineCount_MetaData[] = {
		{ "Category", "DebugDraw" },
		{ "Comment", "/** Space to allocate for line collection. */" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceDebugDraw.h" },
		{ "ToolTip", "Space to allocate for line collection." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxTriangleCount_MetaData[] = {
		{ "Category", "DebugDraw" },
		{ "Comment", "/** Space to allocate for triangle collection. */" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceDebugDraw.h" },
		{ "ToolTip", "Space to allocate for triangle collection." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxCharacterCount_MetaData[] = {
		{ "Category", "DebugDraw" },
		{ "Comment", "/** Space to allocate for character collection. */" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceDebugDraw.h" },
		{ "ToolTip", "Space to allocate for character collection." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FontSize_MetaData[] = {
		{ "Category", "DebugDraw" },
		{ "Comment", "/** Font size for characters. */" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceDebugDraw.h" },
		{ "ToolTip", "Font size for characters." },
	};
#endif // WITH_METADATA
	static void NewProp_bForceEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceEnable;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxLineCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxTriangleCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxCharacterCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FontSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusDebugDrawParameters>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FOptimusDebugDrawParameters_Statics::NewProp_bForceEnable_SetBit(void* Obj)
{
	((FOptimusDebugDrawParameters*)Obj)->bForceEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOptimusDebugDrawParameters_Statics::NewProp_bForceEnable = { "bForceEnable", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FOptimusDebugDrawParameters), &Z_Construct_UScriptStruct_FOptimusDebugDrawParameters_Statics::NewProp_bForceEnable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceEnable_MetaData), NewProp_bForceEnable_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOptimusDebugDrawParameters_Statics::NewProp_MaxLineCount = { "MaxLineCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusDebugDrawParameters, MaxLineCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxLineCount_MetaData), NewProp_MaxLineCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOptimusDebugDrawParameters_Statics::NewProp_MaxTriangleCount = { "MaxTriangleCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusDebugDrawParameters, MaxTriangleCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxTriangleCount_MetaData), NewProp_MaxTriangleCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOptimusDebugDrawParameters_Statics::NewProp_MaxCharacterCount = { "MaxCharacterCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusDebugDrawParameters, MaxCharacterCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxCharacterCount_MetaData), NewProp_MaxCharacterCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOptimusDebugDrawParameters_Statics::NewProp_FontSize = { "FontSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusDebugDrawParameters, FontSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FontSize_MetaData), NewProp_FontSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOptimusDebugDrawParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusDebugDrawParameters_Statics::NewProp_bForceEnable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusDebugDrawParameters_Statics::NewProp_MaxLineCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusDebugDrawParameters_Statics::NewProp_MaxTriangleCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusDebugDrawParameters_Statics::NewProp_MaxCharacterCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusDebugDrawParameters_Statics::NewProp_FontSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusDebugDrawParameters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusDebugDrawParameters_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	nullptr,
	&NewStructOps,
	"OptimusDebugDrawParameters",
	Z_Construct_UScriptStruct_FOptimusDebugDrawParameters_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusDebugDrawParameters_Statics::PropPointers),
	sizeof(FOptimusDebugDrawParameters),
	alignof(FOptimusDebugDrawParameters),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusDebugDrawParameters_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOptimusDebugDrawParameters_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOptimusDebugDrawParameters()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusDebugDrawParameters.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusDebugDrawParameters.InnerSingleton, Z_Construct_UScriptStruct_FOptimusDebugDrawParameters_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OptimusDebugDrawParameters.InnerSingleton;
}
// End ScriptStruct FOptimusDebugDrawParameters

// Begin Class UOptimusDebugDrawDataInterface
void UOptimusDebugDrawDataInterface::StaticRegisterNativesUOptimusDebugDrawDataInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusDebugDrawDataInterface);
UClass* Z_Construct_UClass_UOptimusDebugDrawDataInterface_NoRegister()
{
	return UOptimusDebugDrawDataInterface::StaticClass();
}
struct Z_Construct_UClass_UOptimusDebugDrawDataInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "ComputeFramework" },
		{ "Comment", "/** Compute Framework Data Interface for writing skinned mesh. */" },
		{ "IncludePath", "DataInterfaces/OptimusDataInterfaceDebugDraw.h" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceDebugDraw.h" },
		{ "ToolTip", "Compute Framework Data Interface for writing skinned mesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsSupported_MetaData[] = {
		{ "Category", "DebugDraw" },
		{ "Comment", "// Make sure DirectX12 and Shader Model 6 is enabled in project settings for DebugDraw to function, since DXC is required for shader compilation. \n" },
		{ "EditCondition", "!bIsSupported" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceDebugDraw.h" },
		{ "ToolTip", "Make sure DirectX12 and Shader Model 6 is enabled in project settings for DebugDraw to function, since DXC is required for shader compilation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugDrawParameters_MetaData[] = {
		{ "Category", "DebugDraw" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceDebugDraw.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsSupported_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSupported;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DebugDrawParameters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusDebugDrawDataInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UOptimusDebugDrawDataInterface_Statics::NewProp_bIsSupported_SetBit(void* Obj)
{
	((UOptimusDebugDrawDataInterface*)Obj)->bIsSupported = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimusDebugDrawDataInterface_Statics::NewProp_bIsSupported = { "bIsSupported", nullptr, (EPropertyFlags)0x0010000000022011, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimusDebugDrawDataInterface), &Z_Construct_UClass_UOptimusDebugDrawDataInterface_Statics::NewProp_bIsSupported_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsSupported_MetaData), NewProp_bIsSupported_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOptimusDebugDrawDataInterface_Statics::NewProp_DebugDrawParameters = { "DebugDrawParameters", nullptr, (EPropertyFlags)0x0010000000000011, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusDebugDrawDataInterface, DebugDrawParameters), Z_Construct_UScriptStruct_FOptimusDebugDrawParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugDrawParameters_MetaData), NewProp_DebugDrawParameters_MetaData) }; // 3112293556
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusDebugDrawDataInterface_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusDebugDrawDataInterface_Statics::NewProp_bIsSupported,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusDebugDrawDataInterface_Statics::NewProp_DebugDrawParameters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusDebugDrawDataInterface_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOptimusDebugDrawDataInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOptimusComputeDataInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusDebugDrawDataInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusDebugDrawDataInterface_Statics::ClassParams = {
	&UOptimusDebugDrawDataInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOptimusDebugDrawDataInterface_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusDebugDrawDataInterface_Statics::PropPointers),
	0,
	0x001100A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusDebugDrawDataInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusDebugDrawDataInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusDebugDrawDataInterface()
{
	if (!Z_Registration_Info_UClass_UOptimusDebugDrawDataInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusDebugDrawDataInterface.OuterSingleton, Z_Construct_UClass_UOptimusDebugDrawDataInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusDebugDrawDataInterface.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusDebugDrawDataInterface>()
{
	return UOptimusDebugDrawDataInterface::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusDebugDrawDataInterface);
UOptimusDebugDrawDataInterface::~UOptimusDebugDrawDataInterface() {}
// End Class UOptimusDebugDrawDataInterface

// Begin Class UOptimusDebugDrawDataProvider
void UOptimusDebugDrawDataProvider::StaticRegisterNativesUOptimusDebugDrawDataProvider()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusDebugDrawDataProvider);
UClass* Z_Construct_UClass_UOptimusDebugDrawDataProvider_NoRegister()
{
	return UOptimusDebugDrawDataProvider::StaticClass();
}
struct Z_Construct_UClass_UOptimusDebugDrawDataProvider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "ComputeFramework" },
		{ "Comment", "/** Compute Framework Data Provider for writing skinned mesh. */" },
		{ "IncludePath", "DataInterfaces/OptimusDataInterfaceDebugDraw.h" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceDebugDraw.h" },
		{ "ToolTip", "Compute Framework Data Provider for writing skinned mesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimitiveComponent_MetaData[] = {
		{ "Category", "Binding" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceDebugDraw.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugDrawParameters_MetaData[] = {
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceDebugDraw.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PrimitiveComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DebugDrawParameters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusDebugDrawDataProvider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOptimusDebugDrawDataProvider_Statics::NewProp_PrimitiveComponent = { "PrimitiveComponent", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusDebugDrawDataProvider, PrimitiveComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimitiveComponent_MetaData), NewProp_PrimitiveComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOptimusDebugDrawDataProvider_Statics::NewProp_DebugDrawParameters = { "DebugDrawParameters", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusDebugDrawDataProvider, DebugDrawParameters), Z_Construct_UScriptStruct_FOptimusDebugDrawParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugDrawParameters_MetaData), NewProp_DebugDrawParameters_MetaData) }; // 3112293556
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusDebugDrawDataProvider_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusDebugDrawDataProvider_Statics::NewProp_PrimitiveComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusDebugDrawDataProvider_Statics::NewProp_DebugDrawParameters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusDebugDrawDataProvider_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOptimusDebugDrawDataProvider_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UComputeDataProvider,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusDebugDrawDataProvider_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusDebugDrawDataProvider_Statics::ClassParams = {
	&UOptimusDebugDrawDataProvider::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOptimusDebugDrawDataProvider_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusDebugDrawDataProvider_Statics::PropPointers),
	0,
	0x008010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusDebugDrawDataProvider_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusDebugDrawDataProvider_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusDebugDrawDataProvider()
{
	if (!Z_Registration_Info_UClass_UOptimusDebugDrawDataProvider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusDebugDrawDataProvider.OuterSingleton, Z_Construct_UClass_UOptimusDebugDrawDataProvider_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusDebugDrawDataProvider.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusDebugDrawDataProvider>()
{
	return UOptimusDebugDrawDataProvider::StaticClass();
}
UOptimusDebugDrawDataProvider::UOptimusDebugDrawDataProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusDebugDrawDataProvider);
UOptimusDebugDrawDataProvider::~UOptimusDebugDrawDataProvider() {}
// End Class UOptimusDebugDrawDataProvider

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceDebugDraw_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOptimusDebugDrawParameters::StaticStruct, Z_Construct_UScriptStruct_FOptimusDebugDrawParameters_Statics::NewStructOps, TEXT("OptimusDebugDrawParameters"), &Z_Registration_Info_UScriptStruct_OptimusDebugDrawParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusDebugDrawParameters), 3112293556U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusDebugDrawDataInterface, UOptimusDebugDrawDataInterface::StaticClass, TEXT("UOptimusDebugDrawDataInterface"), &Z_Registration_Info_UClass_UOptimusDebugDrawDataInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusDebugDrawDataInterface), 3238983858U) },
		{ Z_Construct_UClass_UOptimusDebugDrawDataProvider, UOptimusDebugDrawDataProvider::StaticClass, TEXT("UOptimusDebugDrawDataProvider"), &Z_Registration_Info_UClass_UOptimusDebugDrawDataProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusDebugDrawDataProvider), 811897773U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceDebugDraw_h_2281891041(TEXT("/Script/OptimusCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceDebugDraw_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceDebugDraw_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceDebugDraw_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceDebugDraw_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
