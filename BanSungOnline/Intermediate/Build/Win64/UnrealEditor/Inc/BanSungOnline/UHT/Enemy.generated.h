// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Enemy/Enemy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef BANSUNGONLINE_Enemy_generated_h
#error "Enemy.generated.h already included, missing '#pragma once' in Enemy.h"
#endif
#define BANSUNGONLINE_Enemy_generated_h

#define FID_BanSungOnline_BanSungOnline_Source_BanSungOnline_Enemy_Enemy_h_12_DELEGATE \
BANSUNGONLINE_API void FHealth_DelegateWrapper(const FMulticastScriptDelegate& Health);


#define FID_BanSungOnline_BanSungOnline_Source_BanSungOnline_Enemy_Enemy_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOverlap);


#define FID_BanSungOnline_BanSungOnline_Source_BanSungOnline_Enemy_Enemy_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemy(); \
	friend struct Z_Construct_UClass_AEnemy_Statics; \
public: \
	DECLARE_CLASS(AEnemy, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BanSungOnline"), NO_API) \
	DECLARE_SERIALIZER(AEnemy) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Health=NETFIELD_REP_START, \
		NETFIELD_REP_END=Health	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_BanSungOnline_BanSungOnline_Source_BanSungOnline_Enemy_Enemy_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AEnemy(AEnemy&&); \
	AEnemy(const AEnemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemy) \
	NO_API virtual ~AEnemy();


#define FID_BanSungOnline_BanSungOnline_Source_BanSungOnline_Enemy_Enemy_h_15_PROLOG
#define FID_BanSungOnline_BanSungOnline_Source_BanSungOnline_Enemy_Enemy_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BanSungOnline_BanSungOnline_Source_BanSungOnline_Enemy_Enemy_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_BanSungOnline_BanSungOnline_Source_BanSungOnline_Enemy_Enemy_h_18_INCLASS_NO_PURE_DECLS \
	FID_BanSungOnline_BanSungOnline_Source_BanSungOnline_Enemy_Enemy_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BANSUNGONLINE_API UClass* StaticClass<class AEnemy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BanSungOnline_BanSungOnline_Source_BanSungOnline_Enemy_Enemy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
