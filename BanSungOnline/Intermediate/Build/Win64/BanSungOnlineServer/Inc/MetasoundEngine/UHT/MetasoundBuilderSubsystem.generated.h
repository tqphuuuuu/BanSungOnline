// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetasoundBuilderSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IMetaSoundDocumentInterface;
class UAudioComponent;
class UMetaSoundBuilderBase;
class UMetasoundGeneratorHandle;
class UMetaSoundPatchBuilder;
class UMetaSoundSourceBuilder;
class UObject;
enum class EMetaSoundBuilderResult : uint8;
enum class EMetaSoundOutputAudioFormat : uint8;
struct FAudioParameter;
struct FMetaSoundBuilderNodeInputHandle;
struct FMetaSoundBuilderNodeOutputHandle;
struct FMetasoundFrontendLiteral;
#ifdef METASOUNDENGINE_MetasoundBuilderSubsystem_generated_h
#error "MetasoundBuilderSubsystem.generated.h already included, missing '#pragma once' in MetasoundBuilderSubsystem.h"
#endif
#define METASOUNDENGINE_MetasoundBuilderSubsystem_generated_h

#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_47_DELEGATE \
METASOUNDENGINE_API void FOnCreateAuditionGeneratorHandleDelegate_DelegateWrapper(const FScriptDelegate& OnCreateAuditionGeneratorHandleDelegate, UMetasoundGeneratorHandle* GeneratorHandle);


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaSoundPatchBuilder(); \
	friend struct Z_Construct_UClass_UMetaSoundPatchBuilder_Statics; \
public: \
	DECLARE_CLASS(UMetaSoundPatchBuilder, UMetaSoundBuilderBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MetasoundEngine"), NO_API) \
	DECLARE_SERIALIZER(UMetaSoundPatchBuilder)


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_53_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMetaSoundPatchBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMetaSoundPatchBuilder(UMetaSoundPatchBuilder&&); \
	UMetaSoundPatchBuilder(const UMetaSoundPatchBuilder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMetaSoundPatchBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaSoundPatchBuilder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetaSoundPatchBuilder) \
	NO_API virtual ~UMetaSoundPatchBuilder();


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_50_PROLOG
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_53_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_53_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> METASOUNDENGINE_API UClass* StaticClass<class UMetaSoundPatchBuilder>();

#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_71_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetQuality); \
	DECLARE_FUNCTION(execSetSampleRateOverride); \
	DECLARE_FUNCTION(execSetFormat); \
	DECLARE_FUNCTION(execSetBlockRateOverride); \
	DECLARE_FUNCTION(execGetLiveUpdatesEnabled); \
	DECLARE_FUNCTION(execAudition);


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_71_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaSoundSourceBuilder(); \
	friend struct Z_Construct_UClass_UMetaSoundSourceBuilder_Statics; \
public: \
	DECLARE_CLASS(UMetaSoundSourceBuilder, UMetaSoundBuilderBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MetasoundEngine"), NO_API) \
	DECLARE_SERIALIZER(UMetaSoundSourceBuilder)


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_71_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMetaSoundSourceBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMetaSoundSourceBuilder(UMetaSoundSourceBuilder&&); \
	UMetaSoundSourceBuilder(const UMetaSoundSourceBuilder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMetaSoundSourceBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaSoundSourceBuilder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetaSoundSourceBuilder) \
	NO_API virtual ~UMetaSoundSourceBuilder();


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_68_PROLOG
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_71_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_71_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_71_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_71_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> METASOUNDENGINE_API UClass* StaticClass<class UMetaSoundSourceBuilder>();

#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_154_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUnregisterSourceBuilder); \
	DECLARE_FUNCTION(execUnregisterPatchBuilder); \
	DECLARE_FUNCTION(execUnregisterBuilder); \
	DECLARE_FUNCTION(execSetTargetPage); \
	DECLARE_FUNCTION(execRegisterSourceBuilder); \
	DECLARE_FUNCTION(execRegisterPatchBuilder); \
	DECLARE_FUNCTION(execRegisterBuilder); \
	DECLARE_FUNCTION(execIsInterfaceRegistered); \
	DECLARE_FUNCTION(execFindSourceBuilder); \
	DECLARE_FUNCTION(execFindPatchBuilder); \
	DECLARE_FUNCTION(execFindBuilderOfDocument); \
	DECLARE_FUNCTION(execFindBuilder); \
	DECLARE_FUNCTION(execCreateMetaSoundLiteralFromParam); \
	DECLARE_FUNCTION(execCreateStringArrayMetaSoundLiteral); \
	DECLARE_FUNCTION(execCreateStringMetaSoundLiteral); \
	DECLARE_FUNCTION(execCreateObjectArrayMetaSoundLiteral); \
	DECLARE_FUNCTION(execCreateObjectMetaSoundLiteral); \
	DECLARE_FUNCTION(execCreateIntArrayMetaSoundLiteral); \
	DECLARE_FUNCTION(execCreateIntMetaSoundLiteral); \
	DECLARE_FUNCTION(execCreateFloatArrayMetaSoundLiteral); \
	DECLARE_FUNCTION(execCreateFloatMetaSoundLiteral); \
	DECLARE_FUNCTION(execCreateBoolArrayMetaSoundLiteral); \
	DECLARE_FUNCTION(execCreateBoolMetaSoundLiteral); \
	DECLARE_FUNCTION(execCreateSourcePresetBuilder); \
	DECLARE_FUNCTION(execCreatePatchPresetBuilder); \
	DECLARE_FUNCTION(execCreateSourceBuilder); \
	DECLARE_FUNCTION(execCreatePatchBuilder);


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_154_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaSoundBuilderSubsystem(); \
	friend struct Z_Construct_UClass_UMetaSoundBuilderSubsystem_Statics; \
public: \
	DECLARE_CLASS(UMetaSoundBuilderSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetasoundEngine"), NO_API) \
	DECLARE_SERIALIZER(UMetaSoundBuilderSubsystem)


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_154_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMetaSoundBuilderSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMetaSoundBuilderSubsystem(UMetaSoundBuilderSubsystem&&); \
	UMetaSoundBuilderSubsystem(const UMetaSoundBuilderSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMetaSoundBuilderSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaSoundBuilderSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMetaSoundBuilderSubsystem) \
	NO_API virtual ~UMetaSoundBuilderSubsystem();


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_151_PROLOG
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_154_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_154_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_154_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_154_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> METASOUNDENGINE_API UClass* StaticClass<class UMetaSoundBuilderSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
