// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weapon/Weapon.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BANSUNGONLINE_Weapon_generated_h
#error "Weapon.generated.h already included, missing '#pragma once' in Weapon.h"
#endif
#define BANSUNGONLINE_Weapon_generated_h

#define FID_GameOnline_BanSungOnline_BanSungOnline_Source_BanSungOnline_Weapon_Weapon_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFire);


#define FID_GameOnline_BanSungOnline_BanSungOnline_Source_BanSungOnline_Weapon_Weapon_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeapon(); \
	friend struct Z_Construct_UClass_AWeapon_Statics; \
public: \
	DECLARE_CLASS(AWeapon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BanSungOnline"), NO_API) \
	DECLARE_SERIALIZER(AWeapon) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		IsAttached=NETFIELD_REP_START, \
		Ammo, \
		CurrentAmmo, \
		Projectitle, \
		ShootOneByOne, \
		bCanFireRifle, \
		NETFIELD_REP_END=bCanFireRifle	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_GameOnline_BanSungOnline_BanSungOnline_Source_BanSungOnline_Weapon_Weapon_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AWeapon(AWeapon&&); \
	AWeapon(const AWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeapon) \
	NO_API virtual ~AWeapon();


#define FID_GameOnline_BanSungOnline_BanSungOnline_Source_BanSungOnline_Weapon_Weapon_h_10_PROLOG
#define FID_GameOnline_BanSungOnline_BanSungOnline_Source_BanSungOnline_Weapon_Weapon_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameOnline_BanSungOnline_BanSungOnline_Source_BanSungOnline_Weapon_Weapon_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GameOnline_BanSungOnline_BanSungOnline_Source_BanSungOnline_Weapon_Weapon_h_13_INCLASS_NO_PURE_DECLS \
	FID_GameOnline_BanSungOnline_BanSungOnline_Source_BanSungOnline_Weapon_Weapon_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BANSUNGONLINE_API UClass* StaticClass<class AWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameOnline_BanSungOnline_BanSungOnline_Source_BanSungOnline_Weapon_Weapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
