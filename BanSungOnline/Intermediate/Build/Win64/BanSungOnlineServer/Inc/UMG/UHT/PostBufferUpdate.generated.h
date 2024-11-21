// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/PostBufferUpdate.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UMG_PostBufferUpdate_generated_h
#error "PostBufferUpdate.generated.h already included, missing '#pragma once' in PostBufferUpdate.h"
#endif
#define UMG_PostBufferUpdate_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Components_PostBufferUpdate_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSlatePostBufferUpdateInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> UMG_API UScriptStruct* StaticStruct<struct FSlatePostBufferUpdateInfo>();

#define FID_Engine_Source_Runtime_UMG_Public_Components_PostBufferUpdate_h_46_ACCESSORS \
static void SetbPerformDefaultPostBufferUpdate_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Source_Runtime_UMG_Public_Components_PostBufferUpdate_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPostBufferUpdate(); \
	friend struct Z_Construct_UClass_UPostBufferUpdate_Statics; \
public: \
	DECLARE_CLASS(UPostBufferUpdate, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), UMG_API) \
	DECLARE_SERIALIZER(UPostBufferUpdate)


#define FID_Engine_Source_Runtime_UMG_Public_Components_PostBufferUpdate_h_46_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPostBufferUpdate(UPostBufferUpdate&&); \
	UPostBufferUpdate(const UPostBufferUpdate&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UPostBufferUpdate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPostBufferUpdate); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPostBufferUpdate) \
	UMG_API virtual ~UPostBufferUpdate();


#define FID_Engine_Source_Runtime_UMG_Public_Components_PostBufferUpdate_h_43_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_PostBufferUpdate_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_PostBufferUpdate_h_46_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_PostBufferUpdate_h_46_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_PostBufferUpdate_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UPostBufferUpdate>();

#define FID_Engine_Source_Runtime_UMG_Public_Components_PostBufferUpdate_h_91_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSlatePostBufferProcessorUpdater(); \
	friend struct Z_Construct_UClass_USlatePostBufferProcessorUpdater_Statics; \
public: \
	DECLARE_CLASS(USlatePostBufferProcessorUpdater, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UMG"), UMG_API) \
	DECLARE_SERIALIZER(USlatePostBufferProcessorUpdater)


#define FID_Engine_Source_Runtime_UMG_Public_Components_PostBufferUpdate_h_91_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API USlatePostBufferProcessorUpdater(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USlatePostBufferProcessorUpdater(USlatePostBufferProcessorUpdater&&); \
	USlatePostBufferProcessorUpdater(const USlatePostBufferProcessorUpdater&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, USlatePostBufferProcessorUpdater); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USlatePostBufferProcessorUpdater); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USlatePostBufferProcessorUpdater) \
	UMG_API virtual ~USlatePostBufferProcessorUpdater();


#define FID_Engine_Source_Runtime_UMG_Public_Components_PostBufferUpdate_h_88_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_PostBufferUpdate_h_91_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_PostBufferUpdate_h_91_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_PostBufferUpdate_h_91_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class USlatePostBufferProcessorUpdater>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_PostBufferUpdate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
