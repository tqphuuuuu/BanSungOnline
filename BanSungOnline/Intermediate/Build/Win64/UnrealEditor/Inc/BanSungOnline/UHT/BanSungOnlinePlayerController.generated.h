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

#define FID_BanSungOnline_Source_BanSungOnline_BanSungOnlinePlayerController_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void WeaponFiring_Implementation(AWeapon* Weapon); \
	virtual void Server_Test_Implementation(FVector MouseLocation); \
	DECLARE_FUNCTION(execWeaponFiring); \
	DECLARE_FUNCTION(execServer_Test);


#define FID_BanSungOnline_Source_BanSungOnline_BanSungOnlinePlayerController_h_22_CALLBACK_WRAPPERS
#define FID_BanSungOnline_Source_BanSungOnline_BanSungOnlinePlayerController_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABanSungOnlinePlayerController(); \
	friend struct Z_Construct_UClass_ABanSungOnlinePlayerController_Statics; \
public: \
	DECLARE_CLASS(ABanSungOnlinePlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BanSungOnline"), NO_API) \
	DECLARE_SERIALIZER(ABanSungOnlinePlayerController)


#define FID_BanSungOnline_Source_BanSungOnline_BanSungOnlinePlayerController_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABanSungOnlinePlayerController(ABanSungOnlinePlayerController&&); \
	ABanSungOnlinePlayerController(const ABanSungOnlinePlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABanSungOnlinePlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABanSungOnlinePlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABanSungOnlinePlayerController) \
	NO_API virtual ~ABanSungOnlinePlayerController();


#define FID_BanSungOnline_Source_BanSungOnline_BanSungOnlinePlayerController_h_19_PROLOG
#define FID_BanSungOnline_Source_BanSungOnline_BanSungOnlinePlayerController_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BanSungOnline_Source_BanSungOnline_BanSungOnlinePlayerController_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_BanSungOnline_Source_BanSungOnline_BanSungOnlinePlayerController_h_22_CALLBACK_WRAPPERS \
	FID_BanSungOnline_Source_BanSungOnline_BanSungOnlinePlayerController_h_22_INCLASS_NO_PURE_DECLS \
	FID_BanSungOnline_Source_BanSungOnline_BanSungOnlinePlayerController_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BANSUNGONLINE_API UClass* StaticClass<class ABanSungOnlinePlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BanSungOnline_Source_BanSungOnline_BanSungOnlinePlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
