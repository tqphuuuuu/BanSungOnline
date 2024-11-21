// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "USDAssetCache3.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 class UObject;
 struct FSoftObjectPath;
class UObject;
struct FSoftObjectPath;
#ifdef USDCLASSES_USDAssetCache3_generated_h
#error "USDAssetCache3.generated.h already included, missing '#pragma once' in USDAssetCache3.h"
#endif
#define USDCLASSES_USDAssetCache3_generated_h

#define FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDAssetCache3_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRescanAssetDirectory); \
	DECLARE_FUNCTION(execDeleteUnreferencedAssetsWithConfirmation); \
	DECLARE_FUNCTION(execDeleteUnreferencedAssets); \
	DECLARE_FUNCTION(execIsAssetDeletable); \
	DECLARE_FUNCTION(execSetAssetDeletable); \
	DECLARE_FUNCTION(execRemoveAllAssetReferencers); \
	DECLARE_FUNCTION(execRemoveAllReferencerAssets); \
	DECLARE_FUNCTION(execRemoveAllReferencersForAsset); \
	DECLARE_FUNCTION(execRemoveAssetReferencer); \
	DECLARE_FUNCTION(execAddAssetReferencer); \
	DECLARE_FUNCTION(execLoadAndGetAllTrackedAssets); \
	DECLARE_FUNCTION(execGetAllTrackedAssets); \
	DECLARE_FUNCTION(execGetNumAssets); \
	DECLARE_FUNCTION(execIsAssetTrackedByCache); \
	DECLARE_FUNCTION(execGetHashForAsset); \
	DECLARE_FUNCTION(execGetCachedAssetPath); \
	DECLARE_FUNCTION(execGetCachedAsset); \
	DECLARE_FUNCTION(execStopTrackingAsset); \
	DECLARE_FUNCTION(execCacheAsset); \
	DECLARE_FUNCTION(execGetOrCreateCachedAsset);


#define FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDAssetCache3_h_26_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UUsdAssetCache3, NO_API)


#define FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDAssetCache3_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUsdAssetCache3(); \
	friend struct Z_Construct_UClass_UUsdAssetCache3_Statics; \
public: \
	DECLARE_CLASS(UUsdAssetCache3, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/USDClasses"), NO_API) \
	DECLARE_SERIALIZER(UUsdAssetCache3) \
	FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDAssetCache3_h_26_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDAssetCache3_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UUsdAssetCache3(UUsdAssetCache3&&); \
	UUsdAssetCache3(const UUsdAssetCache3&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUsdAssetCache3); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUsdAssetCache3); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUsdAssetCache3) \
	NO_API virtual ~UUsdAssetCache3();


#define FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDAssetCache3_h_23_PROLOG
#define FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDAssetCache3_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDAssetCache3_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDAssetCache3_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDAssetCache3_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> USDCLASSES_API UClass* StaticClass<class UUsdAssetCache3>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDAssetCache3_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
