// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Animation/Constraints/Public/ConstraintsActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConstraintsActor() {}

// Begin Cross Module References
CONSTRAINTS_API UClass* Z_Construct_UClass_AConstraintsActor();
CONSTRAINTS_API UClass* Z_Construct_UClass_AConstraintsActor_NoRegister();
CONSTRAINTS_API UClass* Z_Construct_UClass_UConstraintsManager_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_Constraints();
// End Cross Module References

// Begin Class AConstraintsActor
void AConstraintsActor::StaticRegisterNativesAConstraintsActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AConstraintsActor);
UClass* Z_Construct_UClass_AConstraintsActor_NoRegister()
{
	return AConstraintsActor::StaticClass();
}
struct Z_Construct_UClass_AConstraintsActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ConstraintsActor.h" },
		{ "ModuleRelativePath", "Public/ConstraintsActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintsManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConstraintsActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ConstraintsManager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AConstraintsActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AConstraintsActor_Statics::NewProp_ConstraintsManager = { "ConstraintsManager", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AConstraintsActor, ConstraintsManager), Z_Construct_UClass_UConstraintsManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstraintsManager_MetaData), NewProp_ConstraintsManager_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AConstraintsActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConstraintsActor_Statics::NewProp_ConstraintsManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AConstraintsActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AConstraintsActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Constraints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AConstraintsActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AConstraintsActor_Statics::ClassParams = {
	&AConstraintsActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AConstraintsActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AConstraintsActor_Statics::PropPointers),
	0,
	0x008802A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AConstraintsActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AConstraintsActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AConstraintsActor()
{
	if (!Z_Registration_Info_UClass_AConstraintsActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AConstraintsActor.OuterSingleton, Z_Construct_UClass_AConstraintsActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AConstraintsActor.OuterSingleton;
}
template<> CONSTRAINTS_API UClass* StaticClass<AConstraintsActor>()
{
	return AConstraintsActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AConstraintsActor);
// End Class AConstraintsActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AConstraintsActor, AConstraintsActor::StaticClass, TEXT("AConstraintsActor"), &Z_Registration_Info_UClass_AConstraintsActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AConstraintsActor), 3682907477U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsActor_h_112481339(TEXT("/Script/Constraints"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS