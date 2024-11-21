// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ImgMediaSource.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef IMGMEDIA_ImgMediaSource_generated_h
#error "ImgMediaSource.generated.h already included, missing '#pragma once' in ImgMediaSource.h"
#endif
#define IMGMEDIA_ImgMediaSource_generated_h

#define FID_Engine_Plugins_Media_ImgMedia_Source_ImgMedia_Public_ImgMediaSource_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FImgMediaSourceCustomizationSequenceProxy_Statics; \
	static class UScriptStruct* StaticStruct();


template<> IMGMEDIA_API UScriptStruct* StaticStruct<struct FImgMediaSourceCustomizationSequenceProxy>();

#define FID_Engine_Plugins_Media_ImgMedia_Source_ImgMedia_Public_ImgMediaSource_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRemoveTargetObject); \
	DECLARE_FUNCTION(execAddTargetObject); \
	DECLARE_FUNCTION(execSetTokenizedSequencePath); \
	DECLARE_FUNCTION(execSetSequencePath); \
	DECLARE_FUNCTION(execGetSequencePath); \
	DECLARE_FUNCTION(execGetProxies);


#define FID_Engine_Plugins_Media_ImgMedia_Source_ImgMedia_Public_ImgMediaSource_h_45_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UImgMediaSource, NO_API)


#define FID_Engine_Plugins_Media_ImgMedia_Source_ImgMedia_Public_ImgMediaSource_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUImgMediaSource(); \
	friend struct Z_Construct_UClass_UImgMediaSource_Statics; \
public: \
	DECLARE_CLASS(UImgMediaSource, UBaseMediaSource, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ImgMedia"), NO_API) \
	DECLARE_SERIALIZER(UImgMediaSource) \
	FID_Engine_Plugins_Media_ImgMedia_Source_ImgMedia_Public_ImgMediaSource_h_45_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Media_ImgMedia_Source_ImgMedia_Public_ImgMediaSource_h_45_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UImgMediaSource(UImgMediaSource&&); \
	UImgMediaSource(const UImgMediaSource&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UImgMediaSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UImgMediaSource); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UImgMediaSource) \
	NO_API virtual ~UImgMediaSource();


#define FID_Engine_Plugins_Media_ImgMedia_Source_ImgMedia_Public_ImgMediaSource_h_41_PROLOG
#define FID_Engine_Plugins_Media_ImgMedia_Source_ImgMedia_Public_ImgMediaSource_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_ImgMedia_Source_ImgMedia_Public_ImgMediaSource_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_ImgMedia_Source_ImgMedia_Public_ImgMediaSource_h_45_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_ImgMedia_Source_ImgMedia_Public_ImgMediaSource_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IMGMEDIA_API UClass* StaticClass<class UImgMediaSource>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_ImgMedia_Source_ImgMedia_Public_ImgMediaSource_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
