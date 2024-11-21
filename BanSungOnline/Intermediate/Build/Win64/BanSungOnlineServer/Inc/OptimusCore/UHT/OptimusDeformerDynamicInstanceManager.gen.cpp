// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusCore/Public/OptimusDeformerDynamicInstanceManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusDeformerDynamicInstanceManager() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_UMeshDeformerInstance();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusDeformerDynamicInstanceManager();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusDeformerDynamicInstanceManager_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusDeformerInstance_NoRegister();
OPTIMUSCORE_API UEnum* Z_Construct_UEnum_OptimusCore_EOptimusDeformerExecutionPhase();
UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References

// Begin Enum EOptimusDeformerExecutionPhase
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOptimusDeformerExecutionPhase;
static UEnum* EOptimusDeformerExecutionPhase_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOptimusDeformerExecutionPhase.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOptimusDeformerExecutionPhase.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OptimusCore_EOptimusDeformerExecutionPhase, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("EOptimusDeformerExecutionPhase"));
	}
	return Z_Registration_Info_UEnum_EOptimusDeformerExecutionPhase.OuterSingleton;
}
template<> OPTIMUSCORE_API UEnum* StaticEnum<EOptimusDeformerExecutionPhase>()
{
	return EOptimusDeformerExecutionPhase_StaticEnum();
}
struct Z_Construct_UEnum_OptimusCore_EOptimusDeformerExecutionPhase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AfterDefaultDeformer.Name", "EOptimusDeformerExecutionPhase::AfterDefaultDeformer" },
		{ "BeforeDefaultDeformer.Name", "EOptimusDeformerExecutionPhase::BeforeDefaultDeformer" },
		{ "ModuleRelativePath", "Public/OptimusDeformerDynamicInstanceManager.h" },
		{ "OverrideDefaultDeformer.Name", "EOptimusDeformerExecutionPhase::OverrideDefaultDeformer" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOptimusDeformerExecutionPhase::AfterDefaultDeformer", (int64)EOptimusDeformerExecutionPhase::AfterDefaultDeformer },
		{ "EOptimusDeformerExecutionPhase::OverrideDefaultDeformer", (int64)EOptimusDeformerExecutionPhase::OverrideDefaultDeformer },
		{ "EOptimusDeformerExecutionPhase::BeforeDefaultDeformer", (int64)EOptimusDeformerExecutionPhase::BeforeDefaultDeformer },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OptimusCore_EOptimusDeformerExecutionPhase_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OptimusCore,
	nullptr,
	"EOptimusDeformerExecutionPhase",
	"EOptimusDeformerExecutionPhase",
	Z_Construct_UEnum_OptimusCore_EOptimusDeformerExecutionPhase_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OptimusCore_EOptimusDeformerExecutionPhase_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OptimusCore_EOptimusDeformerExecutionPhase_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OptimusCore_EOptimusDeformerExecutionPhase_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OptimusCore_EOptimusDeformerExecutionPhase()
{
	if (!Z_Registration_Info_UEnum_EOptimusDeformerExecutionPhase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOptimusDeformerExecutionPhase.InnerSingleton, Z_Construct_UEnum_OptimusCore_EOptimusDeformerExecutionPhase_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOptimusDeformerExecutionPhase.InnerSingleton;
}
// End Enum EOptimusDeformerExecutionPhase

// Begin Class UOptimusDeformerDynamicInstanceManager
void UOptimusDeformerDynamicInstanceManager::StaticRegisterNativesUOptimusDeformerDynamicInstanceManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusDeformerDynamicInstanceManager);
UClass* Z_Construct_UClass_UOptimusDeformerDynamicInstanceManager_NoRegister()
{
	return UOptimusDeformerDynamicInstanceManager::StaticClass();
}
struct Z_Construct_UClass_UOptimusDeformerDynamicInstanceManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** \n * Enables composition of multiple deformer instances dynamically\n */" },
		{ "IncludePath", "OptimusDeformerDynamicInstanceManager.h" },
		{ "ModuleRelativePath", "Public/OptimusDeformerDynamicInstanceManager.h" },
		{ "ToolTip", "Enables composition of multiple deformer instances dynamically" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusDeformerDynamicInstanceManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GuidToRigDeformerInstanceMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusDeformerDynamicInstanceManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GuidToRigDeformerInstanceMap_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GuidToRigDeformerInstanceMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_GuidToRigDeformerInstanceMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusDeformerDynamicInstanceManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOptimusDeformerDynamicInstanceManager_Statics::NewProp_DefaultInstance = { "DefaultInstance", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusDeformerDynamicInstanceManager, DefaultInstance), Z_Construct_UClass_UOptimusDeformerInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultInstance_MetaData), NewProp_DefaultInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOptimusDeformerDynamicInstanceManager_Statics::NewProp_GuidToRigDeformerInstanceMap_ValueProp = { "GuidToRigDeformerInstanceMap", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UOptimusDeformerInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOptimusDeformerDynamicInstanceManager_Statics::NewProp_GuidToRigDeformerInstanceMap_Key_KeyProp = { "GuidToRigDeformerInstanceMap_Key", nullptr, (EPropertyFlags)0x0100000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UOptimusDeformerDynamicInstanceManager_Statics::NewProp_GuidToRigDeformerInstanceMap = { "GuidToRigDeformerInstanceMap", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusDeformerDynamicInstanceManager, GuidToRigDeformerInstanceMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GuidToRigDeformerInstanceMap_MetaData), NewProp_GuidToRigDeformerInstanceMap_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusDeformerDynamicInstanceManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusDeformerDynamicInstanceManager_Statics::NewProp_DefaultInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusDeformerDynamicInstanceManager_Statics::NewProp_GuidToRigDeformerInstanceMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusDeformerDynamicInstanceManager_Statics::NewProp_GuidToRigDeformerInstanceMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusDeformerDynamicInstanceManager_Statics::NewProp_GuidToRigDeformerInstanceMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusDeformerDynamicInstanceManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOptimusDeformerDynamicInstanceManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMeshDeformerInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusDeformerDynamicInstanceManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusDeformerDynamicInstanceManager_Statics::ClassParams = {
	&UOptimusDeformerDynamicInstanceManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOptimusDeformerDynamicInstanceManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusDeformerDynamicInstanceManager_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusDeformerDynamicInstanceManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusDeformerDynamicInstanceManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusDeformerDynamicInstanceManager()
{
	if (!Z_Registration_Info_UClass_UOptimusDeformerDynamicInstanceManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusDeformerDynamicInstanceManager.OuterSingleton, Z_Construct_UClass_UOptimusDeformerDynamicInstanceManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusDeformerDynamicInstanceManager.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusDeformerDynamicInstanceManager>()
{
	return UOptimusDeformerDynamicInstanceManager::StaticClass();
}
UOptimusDeformerDynamicInstanceManager::UOptimusDeformerDynamicInstanceManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusDeformerDynamicInstanceManager);
UOptimusDeformerDynamicInstanceManager::~UOptimusDeformerDynamicInstanceManager() {}
// End Class UOptimusDeformerDynamicInstanceManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDeformerDynamicInstanceManager_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EOptimusDeformerExecutionPhase_StaticEnum, TEXT("EOptimusDeformerExecutionPhase"), &Z_Registration_Info_UEnum_EOptimusDeformerExecutionPhase, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1301736677U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusDeformerDynamicInstanceManager, UOptimusDeformerDynamicInstanceManager::StaticClass, TEXT("UOptimusDeformerDynamicInstanceManager"), &Z_Registration_Info_UClass_UOptimusDeformerDynamicInstanceManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusDeformerDynamicInstanceManager), 2580692416U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDeformerDynamicInstanceManager_h_2467425914(TEXT("/Script/OptimusCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDeformerDynamicInstanceManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDeformerDynamicInstanceManager_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDeformerDynamicInstanceManager_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDeformerDynamicInstanceManager_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
