// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BanSungOnline/ItemPickUp/ItemPickUp_AmmoPistol.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemPickUp_AmmoPistol() {}

// Begin Cross Module References
BANSUNGONLINE_API UClass* Z_Construct_UClass_AItemPickUp();
BANSUNGONLINE_API UClass* Z_Construct_UClass_AItemPickUp_AmmoPistol();
BANSUNGONLINE_API UClass* Z_Construct_UClass_AItemPickUp_AmmoPistol_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
UPackage* Z_Construct_UPackage__Script_BanSungOnline();
// End Cross Module References

// Begin Class AItemPickUp_AmmoPistol Function OnOverlap
struct Z_Construct_UFunction_AItemPickUp_AmmoPistol_OnOverlap_Statics
{
	struct ItemPickUp_AmmoPistol_eventOnOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ItemPickUp/ItemPickUp_AmmoPistol.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AItemPickUp_AmmoPistol_OnOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemPickUp_AmmoPistol_eventOnOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AItemPickUp_AmmoPistol_OnOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemPickUp_AmmoPistol_eventOnOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AItemPickUp_AmmoPistol_OnOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemPickUp_AmmoPistol_eventOnOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AItemPickUp_AmmoPistol_OnOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemPickUp_AmmoPistol_eventOnOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AItemPickUp_AmmoPistol_OnOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((ItemPickUp_AmmoPistol_eventOnOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AItemPickUp_AmmoPistol_OnOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ItemPickUp_AmmoPistol_eventOnOverlap_Parms), &Z_Construct_UFunction_AItemPickUp_AmmoPistol_OnOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AItemPickUp_AmmoPistol_OnOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemPickUp_AmmoPistol_eventOnOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AItemPickUp_AmmoPistol_OnOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItemPickUp_AmmoPistol_OnOverlap_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItemPickUp_AmmoPistol_OnOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItemPickUp_AmmoPistol_OnOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItemPickUp_AmmoPistol_OnOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItemPickUp_AmmoPistol_OnOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItemPickUp_AmmoPistol_OnOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AItemPickUp_AmmoPistol_OnOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AItemPickUp_AmmoPistol_OnOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItemPickUp_AmmoPistol, nullptr, "OnOverlap", nullptr, nullptr, Z_Construct_UFunction_AItemPickUp_AmmoPistol_OnOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AItemPickUp_AmmoPistol_OnOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AItemPickUp_AmmoPistol_OnOverlap_Statics::ItemPickUp_AmmoPistol_eventOnOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AItemPickUp_AmmoPistol_OnOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AItemPickUp_AmmoPistol_OnOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AItemPickUp_AmmoPistol_OnOverlap_Statics::ItemPickUp_AmmoPistol_eventOnOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AItemPickUp_AmmoPistol_OnOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AItemPickUp_AmmoPistol_OnOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AItemPickUp_AmmoPistol::execOnOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class AItemPickUp_AmmoPistol Function OnOverlap

// Begin Class AItemPickUp_AmmoPistol
void AItemPickUp_AmmoPistol::StaticRegisterNativesAItemPickUp_AmmoPistol()
{
	UClass* Class = AItemPickUp_AmmoPistol::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnOverlap", &AItemPickUp_AmmoPistol::execOnOverlap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AItemPickUp_AmmoPistol);
UClass* Z_Construct_UClass_AItemPickUp_AmmoPistol_NoRegister()
{
	return AItemPickUp_AmmoPistol::StaticClass();
}
struct Z_Construct_UClass_AItemPickUp_AmmoPistol_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ItemPickUp/ItemPickUp_AmmoPistol.h" },
		{ "ModuleRelativePath", "ItemPickUp/ItemPickUp_AmmoPistol.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AItemPickUp_AmmoPistol_OnOverlap, "OnOverlap" }, // 1872809005
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AItemPickUp_AmmoPistol>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AItemPickUp_AmmoPistol_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AItemPickUp,
	(UObject* (*)())Z_Construct_UPackage__Script_BanSungOnline,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AItemPickUp_AmmoPistol_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AItemPickUp_AmmoPistol_Statics::ClassParams = {
	&AItemPickUp_AmmoPistol::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AItemPickUp_AmmoPistol_Statics::Class_MetaDataParams), Z_Construct_UClass_AItemPickUp_AmmoPistol_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AItemPickUp_AmmoPistol()
{
	if (!Z_Registration_Info_UClass_AItemPickUp_AmmoPistol.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AItemPickUp_AmmoPistol.OuterSingleton, Z_Construct_UClass_AItemPickUp_AmmoPistol_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AItemPickUp_AmmoPistol.OuterSingleton;
}
template<> BANSUNGONLINE_API UClass* StaticClass<AItemPickUp_AmmoPistol>()
{
	return AItemPickUp_AmmoPistol::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AItemPickUp_AmmoPistol);
AItemPickUp_AmmoPistol::~AItemPickUp_AmmoPistol() {}
// End Class AItemPickUp_AmmoPistol

// Begin Registration
struct Z_CompiledInDeferFile_FID_GameOnline_BanSungOnline_BanSungOnline_Source_BanSungOnline_ItemPickUp_ItemPickUp_AmmoPistol_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AItemPickUp_AmmoPistol, AItemPickUp_AmmoPistol::StaticClass, TEXT("AItemPickUp_AmmoPistol"), &Z_Registration_Info_UClass_AItemPickUp_AmmoPistol, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AItemPickUp_AmmoPistol), 3747995447U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOnline_BanSungOnline_BanSungOnline_Source_BanSungOnline_ItemPickUp_ItemPickUp_AmmoPistol_h_753011025(TEXT("/Script/BanSungOnline"),
	Z_CompiledInDeferFile_FID_GameOnline_BanSungOnline_BanSungOnline_Source_BanSungOnline_ItemPickUp_ItemPickUp_AmmoPistol_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameOnline_BanSungOnline_BanSungOnline_Source_BanSungOnline_ItemPickUp_ItemPickUp_AmmoPistol_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
