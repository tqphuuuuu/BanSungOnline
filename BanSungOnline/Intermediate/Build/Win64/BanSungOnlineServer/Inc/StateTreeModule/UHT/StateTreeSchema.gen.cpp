// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StateTreeModule/Public/StateTreeSchema.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateTreeSchema() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
STATETREEMODULE_API UClass* Z_Construct_UClass_UStateTreeSchema();
STATETREEMODULE_API UClass* Z_Construct_UClass_UStateTreeSchema_NoRegister();
UPackage* Z_Construct_UPackage__Script_StateTreeModule();
// End Cross Module References

// Begin Class UStateTreeSchema
void UStateTreeSchema::StaticRegisterNativesUStateTreeSchema()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStateTreeSchema);
UClass* Z_Construct_UClass_UStateTreeSchema_NoRegister()
{
	return UStateTreeSchema::StaticClass();
}
struct Z_Construct_UClass_UStateTreeSchema_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Schema describing which inputs, evaluators, and tasks a StateTree can contain.\n * Each StateTree asset saves the schema class name in asset data tags, which can be\n * used to limit which StatTree assets can be selected per use case, i.e.:\n *\n *\x09UPROPERTY(EditDefaultsOnly, Category = AI, meta=(RequiredAssetDataTags=\"Schema=StateTreeSchema_SupaDupa\"))\n *\x09UStateTree* StateTree;\n *\n */" },
		{ "IncludePath", "StateTreeSchema.h" },
		{ "ModuleRelativePath", "Public/StateTreeSchema.h" },
		{ "ToolTip", "Schema describing which inputs, evaluators, and tasks a StateTree can contain.\nEach StateTree asset saves the schema class name in asset data tags, which can be\nused to limit which StatTree assets can be selected per use case, i.e.:\n\n    UPROPERTY(EditDefaultsOnly, Category = AI, meta=(RequiredAssetDataTags=\"Schema=StateTreeSchema_SupaDupa\"))\n    UStateTree* StateTree;" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStateTreeSchema>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UStateTreeSchema_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeSchema_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStateTreeSchema_Statics::ClassParams = {
	&UStateTreeSchema::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeSchema_Statics::Class_MetaDataParams), Z_Construct_UClass_UStateTreeSchema_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStateTreeSchema()
{
	if (!Z_Registration_Info_UClass_UStateTreeSchema.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStateTreeSchema.OuterSingleton, Z_Construct_UClass_UStateTreeSchema_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStateTreeSchema.OuterSingleton;
}
template<> STATETREEMODULE_API UClass* StaticClass<UStateTreeSchema>()
{
	return UStateTreeSchema::StaticClass();
}
UStateTreeSchema::UStateTreeSchema(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStateTreeSchema);
UStateTreeSchema::~UStateTreeSchema() {}
// End Class UStateTreeSchema

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeSchema_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStateTreeSchema, UStateTreeSchema::StaticClass, TEXT("UStateTreeSchema"), &Z_Registration_Info_UClass_UStateTreeSchema, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStateTreeSchema), 447099186U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeSchema_h_2619515661(TEXT("/Script/StateTreeModule"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeSchema_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeSchema_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
