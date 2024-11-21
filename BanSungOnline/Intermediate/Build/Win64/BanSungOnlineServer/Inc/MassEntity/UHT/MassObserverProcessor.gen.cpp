// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MassEntity/Public/MassObserverProcessor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassObserverProcessor() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UScriptStruct();
MASSENTITY_API UClass* Z_Construct_UClass_UMassObserverProcessor();
MASSENTITY_API UClass* Z_Construct_UClass_UMassObserverProcessor_NoRegister();
MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor();
UPackage* Z_Construct_UPackage__Script_MassEntity();
// End Cross Module References

// Begin Class UMassObserverProcessor
void UMassObserverProcessor::StaticRegisterNativesUMassObserverProcessor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassObserverProcessor);
UClass* Z_Construct_UClass_UMassObserverProcessor_NoRegister()
{
	return UMassObserverProcessor::StaticClass();
}
struct Z_Construct_UClass_UMassObserverProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MassObserverProcessor.h" },
		{ "ModuleRelativePath", "Public/MassObserverProcessor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoRegisterWithObserverRegistry_MetaData[] = {
		{ "Category", "Processor" },
		{ "ModuleRelativePath", "Public/MassObserverProcessor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObservedType_MetaData[] = {
		{ "Comment", "/** Determines which Fragment or Tag type this given UMassObserverProcessor will be observing */" },
		{ "ModuleRelativePath", "Public/MassObserverProcessor.h" },
		{ "ToolTip", "Determines which Fragment or Tag type this given UMassObserverProcessor will be observing" },
	};
#endif // WITH_METADATA
	static void NewProp_bAutoRegisterWithObserverRegistry_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoRegisterWithObserverRegistry;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ObservedType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassObserverProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UMassObserverProcessor_Statics::NewProp_bAutoRegisterWithObserverRegistry_SetBit(void* Obj)
{
	((UMassObserverProcessor*)Obj)->bAutoRegisterWithObserverRegistry = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMassObserverProcessor_Statics::NewProp_bAutoRegisterWithObserverRegistry = { "bAutoRegisterWithObserverRegistry", nullptr, (EPropertyFlags)0x0020080000014001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMassObserverProcessor), &Z_Construct_UClass_UMassObserverProcessor_Statics::NewProp_bAutoRegisterWithObserverRegistry_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoRegisterWithObserverRegistry_MetaData), NewProp_bAutoRegisterWithObserverRegistry_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMassObserverProcessor_Statics::NewProp_ObservedType = { "ObservedType", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassObserverProcessor, ObservedType), Z_Construct_UClass_UScriptStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObservedType_MetaData), NewProp_ObservedType_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassObserverProcessor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassObserverProcessor_Statics::NewProp_bAutoRegisterWithObserverRegistry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassObserverProcessor_Statics::NewProp_ObservedType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassObserverProcessor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMassObserverProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassProcessor,
	(UObject* (*)())Z_Construct_UPackage__Script_MassEntity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassObserverProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassObserverProcessor_Statics::ClassParams = {
	&UMassObserverProcessor::StaticClass,
	"Mass",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMassObserverProcessor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMassObserverProcessor_Statics::PropPointers),
	0,
	0x401030A7u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassObserverProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassObserverProcessor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMassObserverProcessor()
{
	if (!Z_Registration_Info_UClass_UMassObserverProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassObserverProcessor.OuterSingleton, Z_Construct_UClass_UMassObserverProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassObserverProcessor.OuterSingleton;
}
template<> MASSENTITY_API UClass* StaticClass<UMassObserverProcessor>()
{
	return UMassObserverProcessor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMassObserverProcessor);
UMassObserverProcessor::~UMassObserverProcessor() {}
// End Class UMassObserverProcessor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MassEntity_Public_MassObserverProcessor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassObserverProcessor, UMassObserverProcessor::StaticClass, TEXT("UMassObserverProcessor"), &Z_Registration_Info_UClass_UMassObserverProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassObserverProcessor), 747715945U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MassEntity_Public_MassObserverProcessor_h_1722688238(TEXT("/Script/MassEntity"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MassEntity_Public_MassObserverProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MassEntity_Public_MassObserverProcessor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
