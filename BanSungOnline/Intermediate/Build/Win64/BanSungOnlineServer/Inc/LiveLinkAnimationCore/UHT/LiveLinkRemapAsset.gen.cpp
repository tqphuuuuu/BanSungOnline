// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/LiveLinkAnimationCore/Public/LiveLinkRemapAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkRemapAsset() {}

// Begin Cross Module References
LIVELINKANIMATIONCORE_API UClass* Z_Construct_UClass_ULiveLinkRemapAsset();
LIVELINKANIMATIONCORE_API UClass* Z_Construct_UClass_ULiveLinkRemapAsset_NoRegister();
LIVELINKANIMATIONCORE_API UClass* Z_Construct_UClass_ULiveLinkRetargetAsset();
UPackage* Z_Construct_UPackage__Script_LiveLinkAnimationCore();
// End Cross Module References

// Begin Class ULiveLinkRemapAsset Function GetRemappedBoneName
struct LiveLinkRemapAsset_eventGetRemappedBoneName_Parms
{
	FName BoneName;
	FName ReturnValue;
};
static const FName NAME_ULiveLinkRemapAsset_GetRemappedBoneName = FName(TEXT("GetRemappedBoneName"));
FName ULiveLinkRemapAsset::GetRemappedBoneName(FName BoneName) const
{
	UFunction* Func = FindFunctionChecked(NAME_ULiveLinkRemapAsset_GetRemappedBoneName);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		LiveLinkRemapAsset_eventGetRemappedBoneName_Parms Parms;
		Parms.BoneName=BoneName;
		const_cast<ULiveLinkRemapAsset*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<ULiveLinkRemapAsset*>(this)->GetRemappedBoneName_Implementation(BoneName);
	}
}
struct Z_Construct_UFunction_ULiveLinkRemapAsset_GetRemappedBoneName_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Live Link Remap" },
		{ "Comment", "/** Blueprint Implementable function for getting a remapped bone name from the original */" },
		{ "ModuleRelativePath", "Public/LiveLinkRemapAsset.h" },
		{ "ToolTip", "Blueprint Implementable function for getting a remapped bone name from the original" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULiveLinkRemapAsset_GetRemappedBoneName_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LiveLinkRemapAsset_eventGetRemappedBoneName_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULiveLinkRemapAsset_GetRemappedBoneName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LiveLinkRemapAsset_eventGetRemappedBoneName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkRemapAsset_GetRemappedBoneName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkRemapAsset_GetRemappedBoneName_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkRemapAsset_GetRemappedBoneName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkRemapAsset_GetRemappedBoneName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkRemapAsset_GetRemappedBoneName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkRemapAsset, nullptr, "GetRemappedBoneName", nullptr, nullptr, Z_Construct_UFunction_ULiveLinkRemapAsset_GetRemappedBoneName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkRemapAsset_GetRemappedBoneName_Statics::PropPointers), sizeof(LiveLinkRemapAsset_eventGetRemappedBoneName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C02, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkRemapAsset_GetRemappedBoneName_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULiveLinkRemapAsset_GetRemappedBoneName_Statics::Function_MetaDataParams) };
static_assert(sizeof(LiveLinkRemapAsset_eventGetRemappedBoneName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULiveLinkRemapAsset_GetRemappedBoneName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULiveLinkRemapAsset_GetRemappedBoneName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULiveLinkRemapAsset::execGetRemappedBoneName)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetRemappedBoneName_Implementation(Z_Param_BoneName);
	P_NATIVE_END;
}
// End Class ULiveLinkRemapAsset Function GetRemappedBoneName

// Begin Class ULiveLinkRemapAsset Function GetRemappedCurveName
struct LiveLinkRemapAsset_eventGetRemappedCurveName_Parms
{
	FName CurveName;
	FName ReturnValue;
};
static const FName NAME_ULiveLinkRemapAsset_GetRemappedCurveName = FName(TEXT("GetRemappedCurveName"));
FName ULiveLinkRemapAsset::GetRemappedCurveName(FName CurveName) const
{
	UFunction* Func = FindFunctionChecked(NAME_ULiveLinkRemapAsset_GetRemappedCurveName);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		LiveLinkRemapAsset_eventGetRemappedCurveName_Parms Parms;
		Parms.CurveName=CurveName;
		const_cast<ULiveLinkRemapAsset*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<ULiveLinkRemapAsset*>(this)->GetRemappedCurveName_Implementation(CurveName);
	}
}
struct Z_Construct_UFunction_ULiveLinkRemapAsset_GetRemappedCurveName_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Live Link Remap" },
		{ "Comment", "/** Blueprint Implementable function for getting a remapped curve name from the original */" },
		{ "ModuleRelativePath", "Public/LiveLinkRemapAsset.h" },
		{ "ToolTip", "Blueprint Implementable function for getting a remapped curve name from the original" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CurveName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULiveLinkRemapAsset_GetRemappedCurveName_Statics::NewProp_CurveName = { "CurveName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LiveLinkRemapAsset_eventGetRemappedCurveName_Parms, CurveName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULiveLinkRemapAsset_GetRemappedCurveName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LiveLinkRemapAsset_eventGetRemappedCurveName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkRemapAsset_GetRemappedCurveName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkRemapAsset_GetRemappedCurveName_Statics::NewProp_CurveName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkRemapAsset_GetRemappedCurveName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkRemapAsset_GetRemappedCurveName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkRemapAsset_GetRemappedCurveName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkRemapAsset, nullptr, "GetRemappedCurveName", nullptr, nullptr, Z_Construct_UFunction_ULiveLinkRemapAsset_GetRemappedCurveName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkRemapAsset_GetRemappedCurveName_Statics::PropPointers), sizeof(LiveLinkRemapAsset_eventGetRemappedCurveName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C02, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkRemapAsset_GetRemappedCurveName_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULiveLinkRemapAsset_GetRemappedCurveName_Statics::Function_MetaDataParams) };
static_assert(sizeof(LiveLinkRemapAsset_eventGetRemappedCurveName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULiveLinkRemapAsset_GetRemappedCurveName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULiveLinkRemapAsset_GetRemappedCurveName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULiveLinkRemapAsset::execGetRemappedCurveName)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_CurveName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetRemappedCurveName_Implementation(Z_Param_CurveName);
	P_NATIVE_END;
}
// End Class ULiveLinkRemapAsset Function GetRemappedCurveName

// Begin Class ULiveLinkRemapAsset Function RemapCurveElements
struct LiveLinkRemapAsset_eventRemapCurveElements_Parms
{
	TMap<FName,float> CurveItems;
};
static const FName NAME_ULiveLinkRemapAsset_RemapCurveElements = FName(TEXT("RemapCurveElements"));
void ULiveLinkRemapAsset::RemapCurveElements(TMap<FName,float>& CurveItems) const
{
	UFunction* Func = FindFunctionChecked(NAME_ULiveLinkRemapAsset_RemapCurveElements);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		LiveLinkRemapAsset_eventRemapCurveElements_Parms Parms;
		Parms.CurveItems=CurveItems;
		const_cast<ULiveLinkRemapAsset*>(this)->ProcessEvent(Func,&Parms);
		CurveItems=Parms.CurveItems;
	}
	else
	{
		const_cast<ULiveLinkRemapAsset*>(this)->RemapCurveElements_Implementation(CurveItems);
	}
}
struct Z_Construct_UFunction_ULiveLinkRemapAsset_RemapCurveElements_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Live Link Remap" },
		{ "Comment", "/** Blueprint Implementable function for remapping, adding or otherwise modifying the curve element data from Live Link. This is run after GetRemappedCurveName */" },
		{ "ModuleRelativePath", "Public/LiveLinkRemapAsset.h" },
		{ "ToolTip", "Blueprint Implementable function for remapping, adding or otherwise modifying the curve element data from Live Link. This is run after GetRemappedCurveName" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurveItems_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CurveItems_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CurveItems;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULiveLinkRemapAsset_RemapCurveElements_Statics::NewProp_CurveItems_ValueProp = { "CurveItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULiveLinkRemapAsset_RemapCurveElements_Statics::NewProp_CurveItems_Key_KeyProp = { "CurveItems_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_ULiveLinkRemapAsset_RemapCurveElements_Statics::NewProp_CurveItems = { "CurveItems", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LiveLinkRemapAsset_eventRemapCurveElements_Parms, CurveItems), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkRemapAsset_RemapCurveElements_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkRemapAsset_RemapCurveElements_Statics::NewProp_CurveItems_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkRemapAsset_RemapCurveElements_Statics::NewProp_CurveItems_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkRemapAsset_RemapCurveElements_Statics::NewProp_CurveItems,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkRemapAsset_RemapCurveElements_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkRemapAsset_RemapCurveElements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkRemapAsset, nullptr, "RemapCurveElements", nullptr, nullptr, Z_Construct_UFunction_ULiveLinkRemapAsset_RemapCurveElements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkRemapAsset_RemapCurveElements_Statics::PropPointers), sizeof(LiveLinkRemapAsset_eventRemapCurveElements_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C02, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkRemapAsset_RemapCurveElements_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULiveLinkRemapAsset_RemapCurveElements_Statics::Function_MetaDataParams) };
static_assert(sizeof(LiveLinkRemapAsset_eventRemapCurveElements_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULiveLinkRemapAsset_RemapCurveElements()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULiveLinkRemapAsset_RemapCurveElements_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULiveLinkRemapAsset::execRemapCurveElements)
{
	P_GET_TMAP_REF(FName,float,Z_Param_Out_CurveItems);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemapCurveElements_Implementation(Z_Param_Out_CurveItems);
	P_NATIVE_END;
}
// End Class ULiveLinkRemapAsset Function RemapCurveElements

// Begin Class ULiveLinkRemapAsset
void ULiveLinkRemapAsset::StaticRegisterNativesULiveLinkRemapAsset()
{
	UClass* Class = ULiveLinkRemapAsset::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetRemappedBoneName", &ULiveLinkRemapAsset::execGetRemappedBoneName },
		{ "GetRemappedCurveName", &ULiveLinkRemapAsset::execGetRemappedCurveName },
		{ "RemapCurveElements", &ULiveLinkRemapAsset::execRemapCurveElements },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkRemapAsset);
UClass* Z_Construct_UClass_ULiveLinkRemapAsset_NoRegister()
{
	return ULiveLinkRemapAsset::StaticClass();
}
struct Z_Construct_UClass_ULiveLinkRemapAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Remap asset for data coming from Live Link. Allows simple application of bone transforms into current pose based on name remapping only\n" },
		{ "IncludePath", "LiveLinkRemapAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LiveLinkRemapAsset.h" },
		{ "ToolTip", "Remap asset for data coming from Live Link. Allows simple application of bone transforms into current pose based on name remapping only" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULiveLinkRemapAsset_GetRemappedBoneName, "GetRemappedBoneName" }, // 3355773837
		{ &Z_Construct_UFunction_ULiveLinkRemapAsset_GetRemappedCurveName, "GetRemappedCurveName" }, // 3340011000
		{ &Z_Construct_UFunction_ULiveLinkRemapAsset_RemapCurveElements, "RemapCurveElements" }, // 2679235922
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkRemapAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULiveLinkRemapAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULiveLinkRetargetAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkAnimationCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkRemapAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkRemapAsset_Statics::ClassParams = {
	&ULiveLinkRemapAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkRemapAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_ULiveLinkRemapAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULiveLinkRemapAsset()
{
	if (!Z_Registration_Info_UClass_ULiveLinkRemapAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkRemapAsset.OuterSingleton, Z_Construct_UClass_ULiveLinkRemapAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULiveLinkRemapAsset.OuterSingleton;
}
template<> LIVELINKANIMATIONCORE_API UClass* StaticClass<ULiveLinkRemapAsset>()
{
	return ULiveLinkRemapAsset::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkRemapAsset);
// End Class ULiveLinkRemapAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkRemapAsset_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkRemapAsset, ULiveLinkRemapAsset::StaticClass, TEXT("ULiveLinkRemapAsset"), &Z_Registration_Info_UClass_ULiveLinkRemapAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkRemapAsset), 2204958992U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkRemapAsset_h_2925040256(TEXT("/Script/LiveLinkAnimationCore"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkRemapAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkRemapAsset_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
