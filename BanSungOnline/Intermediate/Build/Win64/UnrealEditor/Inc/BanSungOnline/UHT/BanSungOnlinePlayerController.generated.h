// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BanSungOnlinePlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AWeapon;
#ifdef BANSUNGONLINE_BanSungOnlinePlayerController_generated_h
#error "BanSungOnlinePlayerController.generated.h already included, missing '#pragma once' in BanSungOnlinePlayerController.h"
#endif
#define BANSUNGONLINE_BanSungOnlinePlayerController_generated_h

#define FID_BanSungOnline_BanSungOnline_Source_BanSungOnline_BanSungOnlinePlayerController_h_17_DELEGATE \
BANSUNGONLINE_API void FDisplayWBBulletCount_DelegateWrapper(const FMulticastScriptDelegate& DisplayWBBulletCount);


#define FID_BanSungOnline_BanSungOnline_Source_BanSungOnline_BanSungOnlinePlayerController_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnShooting_Implementation(); \
	virtual void ReplaceWeapon_Implementation(AWeapon* NewWeapon); \
	virtual void ReloadGun_Implementation(); \
	virtual void SetFalse_Implementation(); \
	virtual bool Server_ShowWeapon_Validate(int32 ); \
	virtual void Server_ShowWeapon_Implementation(int32 Type); \
	virtual void WeaponFiring_Implementation(AWeapon* Weapon, FVector MouseLocation); \
	virtual void Server_Test_Implementation(FVector MouseLocation); \
	DECLARE_FUNCTION(execOnShooting); \
	DECLARE_FUNCTION(execReplaceWeapon); \
	DECLARE_FUNCTION(execReloadGun); \
	DECLARE_FUNCTION(execSetFalse); \
	DECLARE_FUNCTION(execServer_ShowWeapon); \
	DECLARE_FUNCTION(execWeaponFiring); \
	DECLARE_FUNCTION(execServer_Test);


#define FID_BanSungOnline_BanSungOnline_Source_BanSungOnline_BanSungOnlinePlayerController_h_25_CALLBACK_WRAPPERS
#define FID_BanSungOnline_BanSungOnline_Source_BanSungOnline_BanSungOnlinePlayerController_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABanSungOnlinePlayerController(); \
	friend struct Z_Construct_UClass_ABanSungOnlinePlayerController_Statics; \
public: \
	DECLARE_CLASS(ABanSungOnlinePlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BanSungOnline"), NO_API) \
	DECLARE_SERIALIZER(ABanSungOnlinePlayerController) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		isReloading=NETFIELD_REP_START, \
		CachedDestination, \
		NETFIELD_REP_END=CachedDestination	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_BanSungOnline_BanSungOnline_Source_BanSungOnline_BanSungOnlinePlayerController_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABanSungOnlinePlayerController(ABanSungOnlinePlayerController&&); \
	ABanSungOnlinePlayerController(const ABanSungOnlinePlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABanSungOnlinePlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABanSungOnlinePlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABanSungOnlinePlayerController) \
	NO_API virtual ~ABanSungOnlinePlayerController();


#define FID_BanSungOnline_BanSungOnline_Source_BanSungOnline_BanSungOnlinePlayerController_h_22_PROLOG
#define FID_BanSungOnline_BanSungOnline_Source_BanSungOnline_BanSungOnlinePlayerController_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BanSungOnline_BanSungOnline_Source_BanSungOnline_BanSungOnlinePlayerController_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_BanSungOnline_BanSungOnline_Source_BanSungOnline_BanSungOnlinePlayerController_h_25_CALLBACK_WRAPPERS \
	FID_BanSungOnline_BanSungOnline_Source_BanSungOnline_BanSungOnlinePlayerController_h_25_INCLASS_NO_PURE_DECLS \
	FID_BanSungOnline_BanSungOnline_Source_BanSungOnline_BanSungOnlinePlayerController_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BANSUNGONLINE_API UClass* StaticClass<class ABanSungOnlinePlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BanSungOnline_BanSungOnline_Source_BanSungOnline_BanSungOnlinePlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
