// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BanSungOnline/BanSungOnlineCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBanSungOnlineCharacter() {}

// Begin Cross Module References
BANSUNGONLINE_API UClass* Z_Construct_UClass_ABanSungOnlineCharacter();
BANSUNGONLINE_API UClass* Z_Construct_UClass_ABanSungOnlineCharacter_NoRegister();
BANSUNGONLINE_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
BANSUNGONLINE_API UFunction* Z_Construct_UDelegateFunction_BanSungOnline_ShowHealth__DelegateSignature();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_BanSungOnline();
// End Cross Module References

// Begin Delegate FShowHealth
struct Z_Construct_UDelegateFunction_BanSungOnline_ShowHealth__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BanSungOnlineCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BanSungOnline_ShowHealth__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BanSungOnline, nullptr, "ShowHealth__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BanSungOnline_ShowHealth__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BanSungOnline_ShowHealth__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_BanSungOnline_ShowHealth__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BanSungOnline_ShowHealth__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FShowHealth_DelegateWrapper(const FMulticastScriptDelegate& ShowHealth)
{
	ShowHealth.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FShowHealth

// Begin Class ABanSungOnlineCharacter Function IsWeaponVisible
struct Z_Construct_UFunction_ABanSungOnlineCharacter_IsWeaponVisible_Statics
{
	struct BanSungOnlineCharacter_eventIsWeaponVisible_Parms
	{
		TSubclassOf<AWeapon> WeaponClass;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Ki\xe1\xbb\x83m tra hi\xe1\xbb\x83n th\xe1\xbb\x8b c\xe1\xbb\xa7""a s\xc3\xbang\n" },
#endif
		{ "ModuleRelativePath", "BanSungOnlineCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ki\xe1\xbb\x83m tra hi\xe1\xbb\x83n th\xe1\xbb\x8b c\xe1\xbb\xa7""a s\xc3\xbang" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_WeaponClass;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ABanSungOnlineCharacter_IsWeaponVisible_Statics::NewProp_WeaponClass = { "WeaponClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BanSungOnlineCharacter_eventIsWeaponVisible_Parms, WeaponClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ABanSungOnlineCharacter_IsWeaponVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BanSungOnlineCharacter_eventIsWeaponVisible_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABanSungOnlineCharacter_IsWeaponVisible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BanSungOnlineCharacter_eventIsWeaponVisible_Parms), &Z_Construct_UFunction_ABanSungOnlineCharacter_IsWeaponVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABanSungOnlineCharacter_IsWeaponVisible_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABanSungOnlineCharacter_IsWeaponVisible_Statics::NewProp_WeaponClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABanSungOnlineCharacter_IsWeaponVisible_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABanSungOnlineCharacter_IsWeaponVisible_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABanSungOnlineCharacter_IsWeaponVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABanSungOnlineCharacter, nullptr, "IsWeaponVisible", nullptr, nullptr, Z_Construct_UFunction_ABanSungOnlineCharacter_IsWeaponVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABanSungOnlineCharacter_IsWeaponVisible_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABanSungOnlineCharacter_IsWeaponVisible_Statics::BanSungOnlineCharacter_eventIsWeaponVisible_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABanSungOnlineCharacter_IsWeaponVisible_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABanSungOnlineCharacter_IsWeaponVisible_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABanSungOnlineCharacter_IsWeaponVisible_Statics::BanSungOnlineCharacter_eventIsWeaponVisible_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABanSungOnlineCharacter_IsWeaponVisible()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABanSungOnlineCharacter_IsWeaponVisible_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABanSungOnlineCharacter::execIsWeaponVisible)
{
	P_GET_OBJECT(UClass,Z_Param_WeaponClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsWeaponVisible(Z_Param_WeaponClass);
	P_NATIVE_END;
}
// End Class ABanSungOnlineCharacter Function IsWeaponVisible

// Begin Class ABanSungOnlineCharacter
void ABanSungOnlineCharacter::StaticRegisterNativesABanSungOnlineCharacter()
{
	UClass* Class = ABanSungOnlineCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "IsWeaponVisible", &ABanSungOnlineCharacter::execIsWeaponVisible },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABanSungOnlineCharacter);
UClass* Z_Construct_UClass_ABanSungOnlineCharacter_NoRegister()
{
	return ABanSungOnlineCharacter::StaticClass();
}
struct Z_Construct_UClass_ABanSungOnlineCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BanSungOnlineCharacter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "BanSungOnlineCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mouse_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// H\xc3\xa0m th\xc3\xaam v\xc5\xa9 kh\xc3\xad\n" },
#endif
		{ "ModuleRelativePath", "BanSungOnlineCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "H\xc3\xa0m th\xc3\xaam v\xc5\xa9 kh\xc3\xad" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HiddenWeapon_MetaData[] = {
		{ "ModuleRelativePath", "BanSungOnlineCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentWeapon_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "BanSungOnlineCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cur_weapon_MetaData[] = {
		{ "Category", "BanSungOnlineCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Bi\xe1\xba\xbfn hi\xe1\xbb\x87n UI\n" },
#endif
		{ "ModuleRelativePath", "BanSungOnlineCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bi\xe1\xba\xbfn hi\xe1\xbb\x87n UI" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "BanSungOnlineCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "MaxHealth" },
		{ "ModuleRelativePath", "BanSungOnlineCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowHealth_MetaData[] = {
		{ "ModuleRelativePath", "BanSungOnlineCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TopDownCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Top down camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BanSungOnlineCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Top down camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera above the character */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BanSungOnlineCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera above the character" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Mouse;
	static void NewProp_HiddenWeapon_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HiddenWeapon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentWeapon;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Cur_weapon;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ShowHealth;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TopDownCameraComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABanSungOnlineCharacter_IsWeaponVisible, "IsWeaponVisible" }, // 1205703907
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABanSungOnlineCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABanSungOnlineCharacter_Statics::NewProp_Mouse = { "Mouse", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABanSungOnlineCharacter, Mouse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mouse_MetaData), NewProp_Mouse_MetaData) };
void Z_Construct_UClass_ABanSungOnlineCharacter_Statics::NewProp_HiddenWeapon_SetBit(void* Obj)
{
	((ABanSungOnlineCharacter*)Obj)->HiddenWeapon = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABanSungOnlineCharacter_Statics::NewProp_HiddenWeapon = { "HiddenWeapon", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABanSungOnlineCharacter), &Z_Construct_UClass_ABanSungOnlineCharacter_Statics::NewProp_HiddenWeapon_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HiddenWeapon_MetaData), NewProp_HiddenWeapon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABanSungOnlineCharacter_Statics::NewProp_CurrentWeapon = { "CurrentWeapon", nullptr, (EPropertyFlags)0x0010000000000035, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABanSungOnlineCharacter, CurrentWeapon), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentWeapon_MetaData), NewProp_CurrentWeapon_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABanSungOnlineCharacter_Statics::NewProp_Cur_weapon = { "Cur_weapon", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABanSungOnlineCharacter, Cur_weapon), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cur_weapon_MetaData), NewProp_Cur_weapon_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABanSungOnlineCharacter_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABanSungOnlineCharacter, Health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABanSungOnlineCharacter_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABanSungOnlineCharacter, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ABanSungOnlineCharacter_Statics::NewProp_ShowHealth = { "ShowHealth", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABanSungOnlineCharacter, ShowHealth), Z_Construct_UDelegateFunction_BanSungOnline_ShowHealth__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowHealth_MetaData), NewProp_ShowHealth_MetaData) }; // 1430727102
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABanSungOnlineCharacter_Statics::NewProp_TopDownCameraComponent = { "TopDownCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABanSungOnlineCharacter, TopDownCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TopDownCameraComponent_MetaData), NewProp_TopDownCameraComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABanSungOnlineCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABanSungOnlineCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABanSungOnlineCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABanSungOnlineCharacter_Statics::NewProp_Mouse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABanSungOnlineCharacter_Statics::NewProp_HiddenWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABanSungOnlineCharacter_Statics::NewProp_CurrentWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABanSungOnlineCharacter_Statics::NewProp_Cur_weapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABanSungOnlineCharacter_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABanSungOnlineCharacter_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABanSungOnlineCharacter_Statics::NewProp_ShowHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABanSungOnlineCharacter_Statics::NewProp_TopDownCameraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABanSungOnlineCharacter_Statics::NewProp_CameraBoom,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABanSungOnlineCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABanSungOnlineCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_BanSungOnline,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABanSungOnlineCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABanSungOnlineCharacter_Statics::ClassParams = {
	&ABanSungOnlineCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABanSungOnlineCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABanSungOnlineCharacter_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABanSungOnlineCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ABanSungOnlineCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABanSungOnlineCharacter()
{
	if (!Z_Registration_Info_UClass_ABanSungOnlineCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABanSungOnlineCharacter.OuterSingleton, Z_Construct_UClass_ABanSungOnlineCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABanSungOnlineCharacter.OuterSingleton;
}
template<> BANSUNGONLINE_API UClass* StaticClass<ABanSungOnlineCharacter>()
{
	return ABanSungOnlineCharacter::StaticClass();
}
void ABanSungOnlineCharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_Mouse(TEXT("Mouse"));
	static const FName Name_HiddenWeapon(TEXT("HiddenWeapon"));
	static const FName Name_CurrentWeapon(TEXT("CurrentWeapon"));
	static const FName Name_Health(TEXT("Health"));
	static const FName Name_MaxHealth(TEXT("MaxHealth"));
	const bool bIsValid = true
		&& Name_Mouse == ClassReps[(int32)ENetFields_Private::Mouse].Property->GetFName()
		&& Name_HiddenWeapon == ClassReps[(int32)ENetFields_Private::HiddenWeapon].Property->GetFName()
		&& Name_CurrentWeapon == ClassReps[(int32)ENetFields_Private::CurrentWeapon].Property->GetFName()
		&& Name_Health == ClassReps[(int32)ENetFields_Private::Health].Property->GetFName()
		&& Name_MaxHealth == ClassReps[(int32)ENetFields_Private::MaxHealth].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ABanSungOnlineCharacter"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABanSungOnlineCharacter);
ABanSungOnlineCharacter::~ABanSungOnlineCharacter() {}
// End Class ABanSungOnlineCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_BanSungOnline_BanSungOnline_Source_BanSungOnline_BanSungOnlineCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABanSungOnlineCharacter, ABanSungOnlineCharacter::StaticClass, TEXT("ABanSungOnlineCharacter"), &Z_Registration_Info_UClass_ABanSungOnlineCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABanSungOnlineCharacter), 338011448U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BanSungOnline_BanSungOnline_Source_BanSungOnline_BanSungOnlineCharacter_h_585037981(TEXT("/Script/BanSungOnline"),
	Z_CompiledInDeferFile_FID_BanSungOnline_BanSungOnline_Source_BanSungOnline_BanSungOnlineCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BanSungOnline_BanSungOnline_Source_BanSungOnline_BanSungOnlineCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
