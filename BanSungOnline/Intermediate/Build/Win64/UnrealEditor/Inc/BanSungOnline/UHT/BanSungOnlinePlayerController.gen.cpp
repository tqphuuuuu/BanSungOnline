// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BanSungOnline/BanSungOnlinePlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBanSungOnlinePlayerController() {}

// Begin Cross Module References
BANSUNGONLINE_API UClass* Z_Construct_UClass_ABanSungOnlinePlayerController();
BANSUNGONLINE_API UClass* Z_Construct_UClass_ABanSungOnlinePlayerController_NoRegister();
BANSUNGONLINE_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_BanSungOnline();
// End Cross Module References

// Begin Class ABanSungOnlinePlayerController Function Server_Test
struct BanSungOnlinePlayerController_eventServer_Test_Parms
{
	FVector MouseLocation;
};
static FName NAME_ABanSungOnlinePlayerController_Server_Test = FName(TEXT("Server_Test"));
void ABanSungOnlinePlayerController::Server_Test(FVector MouseLocation)
{
	BanSungOnlinePlayerController_eventServer_Test_Parms Parms;
	Parms.MouseLocation=MouseLocation;
	ProcessEvent(FindFunctionChecked(NAME_ABanSungOnlinePlayerController_Server_Test),&Parms);
}
struct Z_Construct_UFunction_ABanSungOnlinePlayerController_Server_Test_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*UPROPERTY(EditAnywhere,BlueprintReadOnly,Category=Input,meta=(AllowPrivateAccess=\"true\"))\n\x09UInputAction* keyBoardReloadAmmo;*/" },
#endif
		{ "ModuleRelativePath", "BanSungOnlinePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(EditAnywhere,BlueprintReadOnly,Category=Input,meta=(AllowPrivateAccess=\"true\"))\n       UInputAction* keyBoardReloadAmmo;" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MouseLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABanSungOnlinePlayerController_Server_Test_Statics::NewProp_MouseLocation = { "MouseLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BanSungOnlinePlayerController_eventServer_Test_Parms, MouseLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABanSungOnlinePlayerController_Server_Test_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABanSungOnlinePlayerController_Server_Test_Statics::NewProp_MouseLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABanSungOnlinePlayerController_Server_Test_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABanSungOnlinePlayerController_Server_Test_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABanSungOnlinePlayerController, nullptr, "Server_Test", nullptr, nullptr, Z_Construct_UFunction_ABanSungOnlinePlayerController_Server_Test_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABanSungOnlinePlayerController_Server_Test_Statics::PropPointers), sizeof(BanSungOnlinePlayerController_eventServer_Test_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00A20C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABanSungOnlinePlayerController_Server_Test_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABanSungOnlinePlayerController_Server_Test_Statics::Function_MetaDataParams) };
static_assert(sizeof(BanSungOnlinePlayerController_eventServer_Test_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABanSungOnlinePlayerController_Server_Test()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABanSungOnlinePlayerController_Server_Test_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABanSungOnlinePlayerController::execServer_Test)
{
	P_GET_STRUCT(FVector,Z_Param_MouseLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_Test_Implementation(Z_Param_MouseLocation);
	P_NATIVE_END;
}
// End Class ABanSungOnlinePlayerController Function Server_Test

// Begin Class ABanSungOnlinePlayerController Function WeaponFiring
struct BanSungOnlinePlayerController_eventWeaponFiring_Parms
{
	AWeapon* Weapon;
	FVector MouseLocation;
};
static FName NAME_ABanSungOnlinePlayerController_WeaponFiring = FName(TEXT("WeaponFiring"));
void ABanSungOnlinePlayerController::WeaponFiring(AWeapon* Weapon, FVector MouseLocation)
{
	BanSungOnlinePlayerController_eventWeaponFiring_Parms Parms;
	Parms.Weapon=Weapon;
	Parms.MouseLocation=MouseLocation;
	ProcessEvent(FindFunctionChecked(NAME_ABanSungOnlinePlayerController_WeaponFiring),&Parms);
}
struct Z_Construct_UFunction_ABanSungOnlinePlayerController_WeaponFiring_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BanSungOnlinePlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Weapon;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MouseLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABanSungOnlinePlayerController_WeaponFiring_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BanSungOnlinePlayerController_eventWeaponFiring_Parms, Weapon), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABanSungOnlinePlayerController_WeaponFiring_Statics::NewProp_MouseLocation = { "MouseLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BanSungOnlinePlayerController_eventWeaponFiring_Parms, MouseLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABanSungOnlinePlayerController_WeaponFiring_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABanSungOnlinePlayerController_WeaponFiring_Statics::NewProp_Weapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABanSungOnlinePlayerController_WeaponFiring_Statics::NewProp_MouseLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABanSungOnlinePlayerController_WeaponFiring_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABanSungOnlinePlayerController_WeaponFiring_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABanSungOnlinePlayerController, nullptr, "WeaponFiring", nullptr, nullptr, Z_Construct_UFunction_ABanSungOnlinePlayerController_WeaponFiring_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABanSungOnlinePlayerController_WeaponFiring_Statics::PropPointers), sizeof(BanSungOnlinePlayerController_eventWeaponFiring_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00A20C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABanSungOnlinePlayerController_WeaponFiring_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABanSungOnlinePlayerController_WeaponFiring_Statics::Function_MetaDataParams) };
static_assert(sizeof(BanSungOnlinePlayerController_eventWeaponFiring_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABanSungOnlinePlayerController_WeaponFiring()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABanSungOnlinePlayerController_WeaponFiring_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABanSungOnlinePlayerController::execWeaponFiring)
{
	P_GET_OBJECT(AWeapon,Z_Param_Weapon);
	P_GET_STRUCT(FVector,Z_Param_MouseLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->WeaponFiring_Implementation(Z_Param_Weapon,Z_Param_MouseLocation);
	P_NATIVE_END;
}
// End Class ABanSungOnlinePlayerController Function WeaponFiring

// Begin Class ABanSungOnlinePlayerController
void ABanSungOnlinePlayerController::StaticRegisterNativesABanSungOnlinePlayerController()
{
	UClass* Class = ABanSungOnlinePlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Server_Test", &ABanSungOnlinePlayerController::execServer_Test },
		{ "WeaponFiring", &ABanSungOnlinePlayerController::execWeaponFiring },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABanSungOnlinePlayerController);
UClass* Z_Construct_UClass_ABanSungOnlinePlayerController_NoRegister()
{
	return ABanSungOnlinePlayerController::StaticClass();
}
struct Z_Construct_UClass_ABanSungOnlinePlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "BanSungOnlinePlayerController.h" },
		{ "ModuleRelativePath", "BanSungOnlinePlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShortPressThreshold_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Time Threshold to know if it was a short press */" },
#endif
		{ "ModuleRelativePath", "BanSungOnlinePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time Threshold to know if it was a short press" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FXCursor_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** FX Class that we will spawn when clicking */" },
#endif
		{ "ModuleRelativePath", "BanSungOnlinePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FX Class that we will spawn when clicking" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MappingContext */" },
#endif
		{ "ModuleRelativePath", "BanSungOnlinePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MappingContext" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SetDestinationClickAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "BanSungOnlinePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SetDestinationTouchAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "BanSungOnlinePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Move Action\n" },
#endif
		{ "ModuleRelativePath", "BanSungOnlinePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_BoardPisol_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// T\xe1\xba\xa1o key board\n" },
#endif
		{ "ModuleRelativePath", "BanSungOnlinePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "T\xe1\xba\xa1o key board" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_BoardRifle_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "BanSungOnlinePlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "BanSungOnlinePlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Max Health" },
		{ "ModuleRelativePath", "BanSungOnlinePlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedDestination_MetaData[] = {
		{ "ModuleRelativePath", "BanSungOnlinePlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShortPressThreshold;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FXCursor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SetDestinationClickAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SetDestinationTouchAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Key_BoardPisol;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Key_BoardRifle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedDestination;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABanSungOnlinePlayerController_Server_Test, "Server_Test" }, // 9030478
		{ &Z_Construct_UFunction_ABanSungOnlinePlayerController_WeaponFiring, "WeaponFiring" }, // 117616116
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABanSungOnlinePlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABanSungOnlinePlayerController_Statics::NewProp_ShortPressThreshold = { "ShortPressThreshold", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABanSungOnlinePlayerController, ShortPressThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShortPressThreshold_MetaData), NewProp_ShortPressThreshold_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABanSungOnlinePlayerController_Statics::NewProp_FXCursor = { "FXCursor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABanSungOnlinePlayerController, FXCursor), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FXCursor_MetaData), NewProp_FXCursor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABanSungOnlinePlayerController_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABanSungOnlinePlayerController, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABanSungOnlinePlayerController_Statics::NewProp_SetDestinationClickAction = { "SetDestinationClickAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABanSungOnlinePlayerController, SetDestinationClickAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SetDestinationClickAction_MetaData), NewProp_SetDestinationClickAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABanSungOnlinePlayerController_Statics::NewProp_SetDestinationTouchAction = { "SetDestinationTouchAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABanSungOnlinePlayerController, SetDestinationTouchAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SetDestinationTouchAction_MetaData), NewProp_SetDestinationTouchAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABanSungOnlinePlayerController_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABanSungOnlinePlayerController, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABanSungOnlinePlayerController_Statics::NewProp_Key_BoardPisol = { "Key_BoardPisol", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABanSungOnlinePlayerController, Key_BoardPisol), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_BoardPisol_MetaData), NewProp_Key_BoardPisol_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABanSungOnlinePlayerController_Statics::NewProp_Key_BoardRifle = { "Key_BoardRifle", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABanSungOnlinePlayerController, Key_BoardRifle), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_BoardRifle_MetaData), NewProp_Key_BoardRifle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABanSungOnlinePlayerController_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000035, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABanSungOnlinePlayerController, Health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABanSungOnlinePlayerController_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABanSungOnlinePlayerController, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABanSungOnlinePlayerController_Statics::NewProp_CachedDestination = { "CachedDestination", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABanSungOnlinePlayerController, CachedDestination), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedDestination_MetaData), NewProp_CachedDestination_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABanSungOnlinePlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABanSungOnlinePlayerController_Statics::NewProp_ShortPressThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABanSungOnlinePlayerController_Statics::NewProp_FXCursor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABanSungOnlinePlayerController_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABanSungOnlinePlayerController_Statics::NewProp_SetDestinationClickAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABanSungOnlinePlayerController_Statics::NewProp_SetDestinationTouchAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABanSungOnlinePlayerController_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABanSungOnlinePlayerController_Statics::NewProp_Key_BoardPisol,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABanSungOnlinePlayerController_Statics::NewProp_Key_BoardRifle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABanSungOnlinePlayerController_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABanSungOnlinePlayerController_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABanSungOnlinePlayerController_Statics::NewProp_CachedDestination,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABanSungOnlinePlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABanSungOnlinePlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_BanSungOnline,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABanSungOnlinePlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABanSungOnlinePlayerController_Statics::ClassParams = {
	&ABanSungOnlinePlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABanSungOnlinePlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABanSungOnlinePlayerController_Statics::PropPointers),
	0,
	0x008002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABanSungOnlinePlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ABanSungOnlinePlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABanSungOnlinePlayerController()
{
	if (!Z_Registration_Info_UClass_ABanSungOnlinePlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABanSungOnlinePlayerController.OuterSingleton, Z_Construct_UClass_ABanSungOnlinePlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABanSungOnlinePlayerController.OuterSingleton;
}
template<> BANSUNGONLINE_API UClass* StaticClass<ABanSungOnlinePlayerController>()
{
	return ABanSungOnlinePlayerController::StaticClass();
}
void ABanSungOnlinePlayerController::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_Health(TEXT("Health"));
	static const FName Name_CachedDestination(TEXT("CachedDestination"));
	const bool bIsValid = true
		&& Name_Health == ClassReps[(int32)ENetFields_Private::Health].Property->GetFName()
		&& Name_CachedDestination == ClassReps[(int32)ENetFields_Private::CachedDestination].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ABanSungOnlinePlayerController"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABanSungOnlinePlayerController);
ABanSungOnlinePlayerController::~ABanSungOnlinePlayerController() {}
// End Class ABanSungOnlinePlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_TQPhuuuuu_Desktop_GameOnline_BanSungOnline_BanSungOnline_Source_BanSungOnline_BanSungOnlinePlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABanSungOnlinePlayerController, ABanSungOnlinePlayerController::StaticClass, TEXT("ABanSungOnlinePlayerController"), &Z_Registration_Info_UClass_ABanSungOnlinePlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABanSungOnlinePlayerController), 3469265264U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_TQPhuuuuu_Desktop_GameOnline_BanSungOnline_BanSungOnline_Source_BanSungOnline_BanSungOnlinePlayerController_h_1630191235(TEXT("/Script/BanSungOnline"),
	Z_CompiledInDeferFile_FID_Users_TQPhuuuuu_Desktop_GameOnline_BanSungOnline_BanSungOnline_Source_BanSungOnline_BanSungOnlinePlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_TQPhuuuuu_Desktop_GameOnline_BanSungOnline_BanSungOnline_Source_BanSungOnline_BanSungOnlinePlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
