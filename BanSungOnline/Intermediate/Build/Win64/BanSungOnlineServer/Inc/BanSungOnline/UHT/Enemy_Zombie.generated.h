// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Enemy/Enemy_Zombie.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BANSUNGONLINE_Enemy_Zombie_generated_h
#error "Enemy_Zombie.generated.h already included, missing '#pragma once' in Enemy_Zombie.h"
#endif
#define BANSUNGONLINE_Enemy_Zombie_generated_h

#define FID_GameOnline_BanSungOnline_BanSungOnline_Source_BanSungOnline_Enemy_Enemy_Zombie_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemy_Zombie(); \
	friend struct Z_Construct_UClass_AEnemy_Zombie_Statics; \
public: \
	DECLARE_CLASS(AEnemy_Zombie, AEnemy, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BanSungOnline"), NO_API) \
	DECLARE_SERIALIZER(AEnemy_Zombie)


#define FID_GameOnline_BanSungOnline_BanSungOnline_Source_BanSungOnline_Enemy_Enemy_Zombie_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AEnemy_Zombie(AEnemy_Zombie&&); \
	AEnemy_Zombie(const AEnemy_Zombie&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemy_Zombie); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemy_Zombie); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemy_Zombie) \
	NO_API virtual ~AEnemy_Zombie();


#define FID_GameOnline_BanSungOnline_BanSungOnline_Source_BanSungOnline_Enemy_Enemy_Zombie_h_10_PROLOG
#define FID_GameOnline_BanSungOnline_BanSungOnline_Source_BanSungOnline_Enemy_Enemy_Zombie_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameOnline_BanSungOnline_BanSungOnline_Source_BanSungOnline_Enemy_Enemy_Zombie_h_13_INCLASS_NO_PURE_DECLS \
	FID_GameOnline_BanSungOnline_BanSungOnline_Source_BanSungOnline_Enemy_Enemy_Zombie_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BANSUNGONLINE_API UClass* StaticClass<class AEnemy_Zombie>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameOnline_BanSungOnline_BanSungOnline_Source_BanSungOnline_Enemy_Enemy_Zombie_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
