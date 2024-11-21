// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetasoundAssetSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IMetaSoundDocumentInterface;
struct FMetaSoundAssetDirectory;
struct FMetasoundFrontendClassName;
struct FMetasoundFrontendVersionNumber;
#ifdef METASOUNDENGINE_MetasoundAssetSubsystem_generated_h
#error "MetasoundAssetSubsystem.generated.h already included, missing '#pragma once' in MetasoundAssetSubsystem.h"
#endif
#define METASOUNDENGINE_MetasoundAssetSubsystem_generated_h

#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundAssetSubsystem_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMetaSoundAssetDirectory_Statics; \
	static class UScriptStruct* StaticStruct();


template<> METASOUNDENGINE_API UScriptStruct* StaticStruct<struct FMetaSoundAssetDirectory>();

#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundAssetSubsystem_h_36_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMetaSoundAsyncAssetDependencies_Statics; \
	METASOUNDENGINE_API static class UScriptStruct* StaticStruct();


template<> METASOUNDENGINE_API UScriptStruct* StaticStruct<struct FMetaSoundAsyncAssetDependencies>();

#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundAssetSubsystem_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUnregisterAssetClassesInDirectories); \
	DECLARE_FUNCTION(execRegisterAssetClassesInDirectories);


#if WITH_EDITOR
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundAssetSubsystem_h_62_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execReplaceReferencesInDirectory); \
	DECLARE_FUNCTION(execReassignClassName);
#else // WITH_EDITOR
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundAssetSubsystem_h_62_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundAssetSubsystem_h_62_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaSoundAssetSubsystem(); \
	friend struct Z_Construct_UClass_UMetaSoundAssetSubsystem_Statics; \
public: \
	DECLARE_CLASS(UMetaSoundAssetSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetasoundEngine"), NO_API) \
	DECLARE_SERIALIZER(UMetaSoundAssetSubsystem)


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundAssetSubsystem_h_62_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMetaSoundAssetSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMetaSoundAssetSubsystem(UMetaSoundAssetSubsystem&&); \
	UMetaSoundAssetSubsystem(const UMetaSoundAssetSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMetaSoundAssetSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaSoundAssetSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMetaSoundAssetSubsystem) \
	NO_API virtual ~UMetaSoundAssetSubsystem();


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundAssetSubsystem_h_59_PROLOG
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundAssetSubsystem_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundAssetSubsystem_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundAssetSubsystem_h_62_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundAssetSubsystem_h_62_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundAssetSubsystem_h_62_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> METASOUNDENGINE_API UClass* StaticClass<class UMetaSoundAssetSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundAssetSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
