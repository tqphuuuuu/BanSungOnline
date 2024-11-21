// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NNEDenoiserAsset.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NNEDENOISER_NNEDenoiserAsset_generated_h
#error "NNEDenoiserAsset.generated.h already included, missing '#pragma once' in NNEDenoiserAsset.h"
#endif
#define NNEDENOISER_NNEDenoiserAsset_generated_h

#define FID_Engine_Plugins_NNE_NNEDenoiser_Source_NNEDenoiser_Public_NNEDenoiserAsset_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNNEDenoiserAsset(); \
	friend struct Z_Construct_UClass_UNNEDenoiserAsset_Statics; \
public: \
	DECLARE_CLASS(UNNEDenoiserAsset, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NNEDenoiser"), NO_API) \
	DECLARE_SERIALIZER(UNNEDenoiserAsset)


#define FID_Engine_Plugins_NNE_NNEDenoiser_Source_NNEDenoiser_Public_NNEDenoiserAsset_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNNEDenoiserAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNNEDenoiserAsset(UNNEDenoiserAsset&&); \
	UNNEDenoiserAsset(const UNNEDenoiserAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNNEDenoiserAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNNEDenoiserAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNNEDenoiserAsset) \
	NO_API virtual ~UNNEDenoiserAsset();


#define FID_Engine_Plugins_NNE_NNEDenoiser_Source_NNEDenoiser_Public_NNEDenoiserAsset_h_13_PROLOG
#define FID_Engine_Plugins_NNE_NNEDenoiser_Source_NNEDenoiser_Public_NNEDenoiserAsset_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_NNE_NNEDenoiser_Source_NNEDenoiser_Public_NNEDenoiserAsset_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_NNE_NNEDenoiser_Source_NNEDenoiser_Public_NNEDenoiserAsset_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NNEDENOISER_API UClass* StaticClass<class UNNEDenoiserAsset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_NNE_NNEDenoiser_Source_NNEDenoiser_Public_NNEDenoiserAsset_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
