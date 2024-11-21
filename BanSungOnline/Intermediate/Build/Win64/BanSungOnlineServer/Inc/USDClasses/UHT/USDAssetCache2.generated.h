// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "USDAssetCache2.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef USDCLASSES_USDAssetCache2_generated_h
#error "USDAssetCache2.generated.h already included, missing '#pragma once' in USDAssetCache2.h"
#endif
#define USDCLASSES_USDAssetCache2_generated_h

#define FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDAssetCache2_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRefreshStorage); \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execGetAllCachedAssetPaths); \
	DECLARE_FUNCTION(execGetAllLoadedAssets); \
	DECLARE_FUNCTION(execGetAllAssetHashes); \
	DECLARE_FUNCTION(execGetNumAssets); \
	DECLARE_FUNCTION(execIsAssetOwnedByCache); \
	DECLARE_FUNCTION(execGetHashForAsset); \
	DECLARE_FUNCTION(execRemoveAllAssetReferences); \
	DECLARE_FUNCTION(execRemoveAssetReference); \
	DECLARE_FUNCTION(execAddAssetReference); \
	DECLARE_FUNCTION(execTouchAsset); \
	DECLARE_FUNCTION(execGetCachedAsset); \
	DECLARE_FUNCTION(execRemoveAsset); \
	DECLARE_FUNCTION(execCanRemoveAsset); \
	DECLARE_FUNCTION(execCacheAsset);


#define FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDAssetCache2_h_18_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UUsdAssetCache2, NO_API)


#define FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDAssetCache2_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUsdAssetCache2(); \
	friend struct Z_Construct_UClass_UUsdAssetCache2_Statics; \
public: \
	DECLARE_CLASS(UUsdAssetCache2, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/USDClasses"), NO_API) \
	DECLARE_SERIALIZER(UUsdAssetCache2) \
	FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDAssetCache2_h_18_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDAssetCache2_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UUsdAssetCache2(UUsdAssetCache2&&); \
	UUsdAssetCache2(const UUsdAssetCache2&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUsdAssetCache2); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUsdAssetCache2); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUsdAssetCache2) \
	NO_API virtual ~UUsdAssetCache2();


#define FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDAssetCache2_h_15_PROLOG
#define FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDAssetCache2_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDAssetCache2_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDAssetCache2_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDAssetCache2_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> USDCLASSES_API UClass* StaticClass<class UUsdAssetCache2>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDAssetCache2_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
