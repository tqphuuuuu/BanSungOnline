// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Elements/Object/ObjectElementCounterInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectElementCounterInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UObjectElementCounterInterface();
ENGINE_API UClass* Z_Construct_UClass_UObjectElementCounterInterface_NoRegister();
TYPEDELEMENTFRAMEWORK_API UClass* Z_Construct_UClass_UTypedElementCounterInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UObjectElementCounterInterface
void UObjectElementCounterInterface::StaticRegisterNativesUObjectElementCounterInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UObjectElementCounterInterface);
UClass* Z_Construct_UClass_UObjectElementCounterInterface_NoRegister()
{
	return UObjectElementCounterInterface::StaticClass();
}
struct Z_Construct_UClass_UObjectElementCounterInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Elements/Object/ObjectElementCounterInterface.h" },
		{ "ModuleRelativePath", "Public/Elements/Object/ObjectElementCounterInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjectElementCounterInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UObjectElementCounterInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectElementCounterInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UObjectElementCounterInterface_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UTypedElementCounterInterface_NoRegister, (int32)VTABLE_OFFSET(UObjectElementCounterInterface, ITypedElementCounterInterface), false },  // 4003565332
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UObjectElementCounterInterface_Statics::ClassParams = {
	&UObjectElementCounterInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectElementCounterInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UObjectElementCounterInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UObjectElementCounterInterface()
{
	if (!Z_Registration_Info_UClass_UObjectElementCounterInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UObjectElementCounterInterface.OuterSingleton, Z_Construct_UClass_UObjectElementCounterInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UObjectElementCounterInterface.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UObjectElementCounterInterface>()
{
	return UObjectElementCounterInterface::StaticClass();
}
UObjectElementCounterInterface::UObjectElementCounterInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectElementCounterInterface);
UObjectElementCounterInterface::~UObjectElementCounterInterface() {}
// End Class UObjectElementCounterInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Object_ObjectElementCounterInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UObjectElementCounterInterface, UObjectElementCounterInterface::StaticClass, TEXT("UObjectElementCounterInterface"), &Z_Registration_Info_UClass_UObjectElementCounterInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UObjectElementCounterInterface), 2027354334U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Object_ObjectElementCounterInterface_h_371739524(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Object_ObjectElementCounterInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Object_ObjectElementCounterInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
