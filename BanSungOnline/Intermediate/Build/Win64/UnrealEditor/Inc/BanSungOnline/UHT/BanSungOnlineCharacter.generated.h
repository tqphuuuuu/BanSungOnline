// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BanSungOnlineCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AWeapon;
#ifdef BANSUNGONLINE_BanSungOnlineCharacter_generated_h
#error "BanSungOnlineCharacter.generated.h already included, missing '#pragma once' in BanSungOnlineCharacter.h"
#endif
#define BANSUNGONLINE_BanSungOnlineCharacter_generated_h

#define FID_CloneLai_BanSungOnline_BanSungOnline_Source_BanSungOnline_BanSungOnlineCharacter_h_9_DELEGATE \
BANSUNGONLINE_API void FShowHealth_DelegateWrapper(const FMulticastScriptDelegate& ShowHealth);


#define FID_CloneLai_BanSungOnline_BanSungOnline_Source_BanSungOnline_BanSungOnlineCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ChangeHealthClient_Implementation(); \
	virtual void ChangeHealth_Implementation(); \
	DECLARE_FUNCTION(execChangeHealthClient); \
	DECLARE_FUNCTION(execChangeHealth); \
	DECLARE_FUNCTION(execIsWeaponVisible);


#define FID_CloneLai_BanSungOnline_BanSungOnline_Source_BanSungOnline_BanSungOnlineCharacter_h_16_CALLBACK_WRAPPERS
#define FID_CloneLai_BanSungOnline_BanSungOnline_Source_BanSungOnline_BanSungOnlineCharacter_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABanSungOnlineCharacter(); \
	friend struct Z_Construct_UClass_ABanSungOnlineCharacter_Statics; \
public: \
	DECLARE_CLASS(ABanSungOnlineCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BanSungOnline"), NO_API) \
	DECLARE_SERIALIZER(ABanSungOnlineCharacter) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Mouse=NETFIELD_REP_START, \
		HiddenWeapon, \
		CurrentWeapon, \
		Health, \
		MaxHealth, \
		bCanRotate, \
		NETFIELD_REP_END=bCanRotate	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_CloneLai_BanSungOnline_BanSungOnline_Source_BanSungOnline_BanSungOnlineCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABanSungOnlineCharacter(ABanSungOnlineCharacter&&); \
	ABanSungOnlineCharacter(const ABanSungOnlineCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABanSungOnlineCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABanSungOnlineCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABanSungOnlineCharacter) \
	NO_API virtual ~ABanSungOnlineCharacter();


#define FID_CloneLai_BanSungOnline_BanSungOnline_Source_BanSungOnline_BanSungOnlineCharacter_h_13_PROLOG
#define FID_CloneLai_BanSungOnline_BanSungOnline_Source_BanSungOnline_BanSungOnlineCharacter_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CloneLai_BanSungOnline_BanSungOnline_Source_BanSungOnline_BanSungOnlineCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CloneLai_BanSungOnline_BanSungOnline_Source_BanSungOnline_BanSungOnlineCharacter_h_16_CALLBACK_WRAPPERS \
	FID_CloneLai_BanSungOnline_BanSungOnline_Source_BanSungOnline_BanSungOnlineCharacter_h_16_INCLASS_NO_PURE_DECLS \
	FID_CloneLai_BanSungOnline_BanSungOnline_Source_BanSungOnline_BanSungOnlineCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BANSUNGONLINE_API UClass* StaticClass<class ABanSungOnlineCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CloneLai_BanSungOnline_BanSungOnline_Source_BanSungOnline_BanSungOnlineCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
