// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NNEDenoiserSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NNEDENOISER_NNEDenoiserSettings_generated_h
#error "NNEDenoiserSettings.generated.h already included, missing '#pragma once' in NNEDenoiserSettings.h"
#endif
#define NNEDENOISER_NNEDenoiserSettings_generated_h

#define FID_Engine_Plugins_NNE_NNEDenoiser_Source_NNEDenoiser_Public_NNEDenoiserSettings_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNNEDenoiserSettings(); \
	friend struct Z_Construct_UClass_UNNEDenoiserSettings_Statics; \
public: \
	DECLARE_CLASS(UNNEDenoiserSettings, UDeveloperSettingsBackedByCVars, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NNEDenoiser"), NO_API) \
	DECLARE_SERIALIZER(UNNEDenoiserSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_NNE_NNEDenoiser_Source_NNEDenoiser_Public_NNEDenoiserSettings_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNNEDenoiserSettings(UNNEDenoiserSettings&&); \
	UNNEDenoiserSettings(const UNNEDenoiserSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNNEDenoiserSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNNEDenoiserSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNNEDenoiserSettings) \
	NO_API virtual ~UNNEDenoiserSettings();


#define FID_Engine_Plugins_NNE_NNEDenoiser_Source_NNEDenoiser_Public_NNEDenoiserSettings_h_21_PROLOG
#define FID_Engine_Plugins_NNE_NNEDenoiser_Source_NNEDenoiser_Public_NNEDenoiserSettings_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_NNE_NNEDenoiser_Source_NNEDenoiser_Public_NNEDenoiserSettings_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_NNE_NNEDenoiser_Source_NNEDenoiser_Public_NNEDenoiserSettings_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NNEDENOISER_API UClass* StaticClass<class UNNEDenoiserSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_NNE_NNEDenoiser_Source_NNEDenoiser_Public_NNEDenoiserSettings_h


#define FOREACH_ENUM_EDENOISERRUNTIMETYPE(op) \
	op(CPU) \
	op(GPU) \
	op(RDG) 

enum EDenoiserRuntimeType : uint8;
template<> NNEDENOISER_API UEnum* StaticEnum<EDenoiserRuntimeType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
