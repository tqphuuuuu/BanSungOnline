// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FileMediaSource.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MEDIAASSETS_FileMediaSource_generated_h
#error "FileMediaSource.generated.h already included, missing '#pragma once' in FileMediaSource.h"
#endif
#define MEDIAASSETS_FileMediaSource_generated_h

#define FID_Engine_Source_Runtime_MediaAssets_Public_FileMediaSource_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetFilePath);


#define FID_Engine_Source_Runtime_MediaAssets_Public_FileMediaSource_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFileMediaSource(); \
	friend struct Z_Construct_UClass_UFileMediaSource_Statics; \
public: \
	DECLARE_CLASS(UFileMediaSource, UBaseMediaSource, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MediaAssets"), MEDIAASSETS_API) \
	DECLARE_SERIALIZER(UFileMediaSource)


#define FID_Engine_Source_Runtime_MediaAssets_Public_FileMediaSource_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MEDIAASSETS_API UFileMediaSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFileMediaSource(UFileMediaSource&&); \
	UFileMediaSource(const UFileMediaSource&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MEDIAASSETS_API, UFileMediaSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFileMediaSource); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFileMediaSource) \
	MEDIAASSETS_API virtual ~UFileMediaSource();


#define FID_Engine_Source_Runtime_MediaAssets_Public_FileMediaSource_h_20_PROLOG
#define FID_Engine_Source_Runtime_MediaAssets_Public_FileMediaSource_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MediaAssets_Public_FileMediaSource_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MediaAssets_Public_FileMediaSource_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MediaAssets_Public_FileMediaSource_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MEDIAASSETS_API UClass* StaticClass<class UFileMediaSource>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MediaAssets_Public_FileMediaSource_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
