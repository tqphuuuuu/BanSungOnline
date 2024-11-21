// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/PostBufferBlurUpdater.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UMG_PostBufferBlurUpdater_generated_h
#error "PostBufferBlurUpdater.generated.h already included, missing '#pragma once' in PostBufferBlurUpdater.h"
#endif
#define UMG_PostBufferBlurUpdater_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Components_PostBufferBlurUpdater_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPostBufferBlurUpdater(); \
	friend struct Z_Construct_UClass_UPostBufferBlurUpdater_Statics; \
public: \
	DECLARE_CLASS(UPostBufferBlurUpdater, USlatePostBufferProcessorUpdater, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), UMG_API) \
	DECLARE_SERIALIZER(UPostBufferBlurUpdater)


#define FID_Engine_Source_Runtime_UMG_Public_Components_PostBufferBlurUpdater_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API UPostBufferBlurUpdater(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPostBufferBlurUpdater(UPostBufferBlurUpdater&&); \
	UPostBufferBlurUpdater(const UPostBufferBlurUpdater&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UPostBufferBlurUpdater); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPostBufferBlurUpdater); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPostBufferBlurUpdater) \
	UMG_API virtual ~UPostBufferBlurUpdater();


#define FID_Engine_Source_Runtime_UMG_Public_Components_PostBufferBlurUpdater_h_18_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_PostBufferBlurUpdater_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_PostBufferBlurUpdater_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_PostBufferBlurUpdater_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UPostBufferBlurUpdater>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_PostBufferBlurUpdater_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
