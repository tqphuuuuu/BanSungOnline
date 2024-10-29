// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weapon/WeaponRifle.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BANSUNGONLINE_WeaponRifle_generated_h
#error "WeaponRifle.generated.h already included, missing '#pragma once' in WeaponRifle.h"
#endif
#define BANSUNGONLINE_WeaponRifle_generated_h

#define FID_BanSungOnline_Source_BanSungOnline_Weapon_WeaponRifle_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeaponRifle(); \
	friend struct Z_Construct_UClass_AWeaponRifle_Statics; \
public: \
	DECLARE_CLASS(AWeaponRifle, AWeapon, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BanSungOnline"), NO_API) \
	DECLARE_SERIALIZER(AWeaponRifle)


#define FID_BanSungOnline_Source_BanSungOnline_Weapon_WeaponRifle_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AWeaponRifle(AWeaponRifle&&); \
	AWeaponRifle(const AWeaponRifle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeaponRifle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeaponRifle); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeaponRifle) \
	NO_API virtual ~AWeaponRifle();


#define FID_BanSungOnline_Source_BanSungOnline_Weapon_WeaponRifle_h_10_PROLOG
#define FID_BanSungOnline_Source_BanSungOnline_Weapon_WeaponRifle_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BanSungOnline_Source_BanSungOnline_Weapon_WeaponRifle_h_13_INCLASS_NO_PURE_DECLS \
	FID_BanSungOnline_Source_BanSungOnline_Weapon_WeaponRifle_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BANSUNGONLINE_API UClass* StaticClass<class AWeaponRifle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BanSungOnline_Source_BanSungOnline_Weapon_WeaponRifle_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
