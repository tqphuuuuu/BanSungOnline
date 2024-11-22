// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Projectitle/Projectitle.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef BANSUNGONLINE_Projectitle_generated_h
#error "Projectitle.generated.h already included, missing '#pragma once' in Projectitle.h"
#endif
#define BANSUNGONLINE_Projectitle_generated_h

#define FID_BanSungOnline_BanSungOnline_BanSungOnline_Source_BanSungOnline_Projectitle_Projectitle_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOverlap);


#define FID_BanSungOnline_BanSungOnline_BanSungOnline_Source_BanSungOnline_Projectitle_Projectitle_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectitle(); \
	friend struct Z_Construct_UClass_AProjectitle_Statics; \
public: \
	DECLARE_CLASS(AProjectitle, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BanSungOnline"), NO_API) \
	DECLARE_SERIALIZER(AProjectitle) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Velocity=NETFIELD_REP_START, \
		NETFIELD_REP_END=Velocity	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_BanSungOnline_BanSungOnline_BanSungOnline_Source_BanSungOnline_Projectitle_Projectitle_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AProjectitle(AProjectitle&&); \
	AProjectitle(const AProjectitle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectitle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectitle); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectitle) \
	NO_API virtual ~AProjectitle();


#define FID_BanSungOnline_BanSungOnline_BanSungOnline_Source_BanSungOnline_Projectitle_Projectitle_h_9_PROLOG
#define FID_BanSungOnline_BanSungOnline_BanSungOnline_Source_BanSungOnline_Projectitle_Projectitle_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BanSungOnline_BanSungOnline_BanSungOnline_Source_BanSungOnline_Projectitle_Projectitle_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_BanSungOnline_BanSungOnline_BanSungOnline_Source_BanSungOnline_Projectitle_Projectitle_h_12_INCLASS_NO_PURE_DECLS \
	FID_BanSungOnline_BanSungOnline_BanSungOnline_Source_BanSungOnline_Projectitle_Projectitle_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BANSUNGONLINE_API UClass* StaticClass<class AProjectitle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BanSungOnline_BanSungOnline_BanSungOnline_Source_BanSungOnline_Projectitle_Projectitle_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
