// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DNAAsset.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RIGLOGICMODULE_DNAAsset_generated_h
#error "DNAAsset.generated.h already included, missing '#pragma once' in DNAAsset.h"
#endif
#define RIGLOGICMODULE_DNAAsset_generated_h

#define FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_DNAAsset_h_38_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UDNAAsset, NO_API)


#define FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_DNAAsset_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDNAAsset(); \
	friend struct Z_Construct_UClass_UDNAAsset_Statics; \
public: \
	DECLARE_CLASS(UDNAAsset, UAssetUserData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RigLogicModule"), NO_API) \
	DECLARE_SERIALIZER(UDNAAsset) \
	FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_DNAAsset_h_38_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_DNAAsset_h_38_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDNAAsset(UDNAAsset&&); \
	UDNAAsset(const UDNAAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDNAAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDNAAsset); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDNAAsset)


#define FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_DNAAsset_h_35_PROLOG
#define FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_DNAAsset_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_DNAAsset_h_38_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_DNAAsset_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RIGLOGICMODULE_API UClass* StaticClass<class UDNAAsset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_DNAAsset_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
