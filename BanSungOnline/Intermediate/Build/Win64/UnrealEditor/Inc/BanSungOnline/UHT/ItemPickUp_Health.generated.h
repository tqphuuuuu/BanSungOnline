// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ItemPickUp/ItemPickUp_Health.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef BANSUNGONLINE_ItemPickUp_Health_generated_h
#error "ItemPickUp_Health.generated.h already included, missing '#pragma once' in ItemPickUp_Health.h"
#endif
#define BANSUNGONLINE_ItemPickUp_Health_generated_h

#define FID_GitHub_BanSungOnline_BanSungOnline_Source_BanSungOnline_ItemPickUp_ItemPickUp_Health_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOverlap);


#define FID_GitHub_BanSungOnline_BanSungOnline_Source_BanSungOnline_ItemPickUp_ItemPickUp_Health_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAItemPickUp_Health(); \
	friend struct Z_Construct_UClass_AItemPickUp_Health_Statics; \
public: \
	DECLARE_CLASS(AItemPickUp_Health, AItemPickUp, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BanSungOnline"), NO_API) \
	DECLARE_SERIALIZER(AItemPickUp_Health)


#define FID_GitHub_BanSungOnline_BanSungOnline_Source_BanSungOnline_ItemPickUp_ItemPickUp_Health_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AItemPickUp_Health(AItemPickUp_Health&&); \
	AItemPickUp_Health(const AItemPickUp_Health&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItemPickUp_Health); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItemPickUp_Health); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AItemPickUp_Health) \
	NO_API virtual ~AItemPickUp_Health();


#define FID_GitHub_BanSungOnline_BanSungOnline_Source_BanSungOnline_ItemPickUp_ItemPickUp_Health_h_10_PROLOG
#define FID_GitHub_BanSungOnline_BanSungOnline_Source_BanSungOnline_ItemPickUp_ItemPickUp_Health_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_BanSungOnline_BanSungOnline_Source_BanSungOnline_ItemPickUp_ItemPickUp_Health_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_BanSungOnline_BanSungOnline_Source_BanSungOnline_ItemPickUp_ItemPickUp_Health_h_13_INCLASS_NO_PURE_DECLS \
	FID_GitHub_BanSungOnline_BanSungOnline_Source_BanSungOnline_ItemPickUp_ItemPickUp_Health_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BANSUNGONLINE_API UClass* StaticClass<class AItemPickUp_Health>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_BanSungOnline_BanSungOnline_Source_BanSungOnline_ItemPickUp_ItemPickUp_Health_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
