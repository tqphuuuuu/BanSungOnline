// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "USDAssetCache.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef USDCLASSES_USDAssetCache_generated_h
#error "USDAssetCache.generated.h already included, missing '#pragma once' in USDAssetCache.h"
#endif
#define USDCLASSES_USDAssetCache_generated_h

#define FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDAssetCache_h_16_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UUsdAssetCache, NO_API)


#define FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDAssetCache_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUsdAssetCache(); \
	friend struct Z_Construct_UClass_UUsdAssetCache_Statics; \
public: \
	DECLARE_CLASS(UUsdAssetCache, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/USDClasses"), NO_API) \
	DECLARE_SERIALIZER(UUsdAssetCache) \
	FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDAssetCache_h_16_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDAssetCache_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UUsdAssetCache(UUsdAssetCache&&); \
	UUsdAssetCache(const UUsdAssetCache&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUsdAssetCache); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUsdAssetCache); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUsdAssetCache) \
	NO_API virtual ~UUsdAssetCache();


#define FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDAssetCache_h_12_PROLOG
#define FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDAssetCache_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDAssetCache_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDAssetCache_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> USDCLASSES_API UClass* StaticClass<class UUsdAssetCache>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDAssetCache_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
