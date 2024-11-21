// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraSimCache.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
enum class ENiagaraSimCacheAttributeCaptureMode : uint8;
struct FLinearColor;
struct FNiagaraID;
#ifdef NIAGARA_NiagaraSimCache_generated_h
#error "NiagaraSimCache.generated.h already included, missing '#pragma once' in NiagaraSimCache.h"
#endif
#define NIAGARA_NiagaraSimCache_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCache_h_45_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraSimCacheCreateParameters>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCache_h_137_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffers_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraSimCacheDataBuffers>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCache_h_170_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraSimCacheEmitterFrame_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraSimCacheEmitterFrame>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCache_h_186_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraSimCacheSystemFrame_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraSimCacheSystemFrame>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCache_h_198_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraSimCacheFrame_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraSimCacheFrame>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCache_h_222_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraSimCacheVariable_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraSimCacheVariable>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCache_h_251_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraSimCacheDataBuffersLayout>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCache_h_362_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraSimCacheLayout_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraSimCacheLayout>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCache_h_401_RPC_WRAPPERS \
	DECLARE_FUNCTION(execReadDataInterfaceAs); \
	DECLARE_FUNCTION(execReadQuatAttributeWithRebase); \
	DECLARE_FUNCTION(execReadQuatAttribute); \
	DECLARE_FUNCTION(execReadPositionAttributeWithRebase); \
	DECLARE_FUNCTION(execReadPositionAttribute); \
	DECLARE_FUNCTION(execReadIDAttribute); \
	DECLARE_FUNCTION(execReadColorAttribute); \
	DECLARE_FUNCTION(execReadVector4Attribute); \
	DECLARE_FUNCTION(execReadVectorAttribute); \
	DECLARE_FUNCTION(execReadVector2Attribute); \
	DECLARE_FUNCTION(execReadFloatAttribute); \
	DECLARE_FUNCTION(execReadIntAttribute); \
	DECLARE_FUNCTION(execGetEmitterNames); \
	DECLARE_FUNCTION(execGetEmitterName); \
	DECLARE_FUNCTION(execGetNumEmitters); \
	DECLARE_FUNCTION(execGetNumFrames); \
	DECLARE_FUNCTION(execGetStartSeconds); \
	DECLARE_FUNCTION(execGetAttributeCaptureMode); \
	DECLARE_FUNCTION(execIsEmpty); \
	DECLARE_FUNCTION(execIsCacheValid);


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCache_h_401_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UNiagaraSimCache, NIAGARA_API)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCache_h_401_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraSimCache(); \
	friend struct Z_Construct_UClass_UNiagaraSimCache_Statics; \
public: \
	DECLARE_CLASS(UNiagaraSimCache, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NIAGARA_API) \
	DECLARE_SERIALIZER(UNiagaraSimCache) \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCache_h_401_ARCHIVESERIALIZER


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCache_h_401_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraSimCache(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraSimCache) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraSimCache); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraSimCache); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraSimCache(UNiagaraSimCache&&); \
	UNiagaraSimCache(const UNiagaraSimCache&); \
public: \
	NIAGARA_API virtual ~UNiagaraSimCache();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCache_h_392_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCache_h_401_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCache_h_401_RPC_WRAPPERS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCache_h_401_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCache_h_401_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNiagaraSimCache>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCache_h


#define FOREACH_ENUM_ENIAGARASIMCACHEATTRIBUTECAPTUREMODE(op) \
	op(ENiagaraSimCacheAttributeCaptureMode::All) \
	op(ENiagaraSimCacheAttributeCaptureMode::RenderingOnly) \
	op(ENiagaraSimCacheAttributeCaptureMode::ExplicitAttributes) 

enum class ENiagaraSimCacheAttributeCaptureMode : uint8;
template<> struct TIsUEnumClass<ENiagaraSimCacheAttributeCaptureMode> { enum { Value = true }; };
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraSimCacheAttributeCaptureMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
