// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraDataChannelHandler.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNiagaraDataChannelReader;
class UNiagaraDataChannelWriter;
#ifdef NIAGARA_NiagaraDataChannelHandler_generated_h
#error "NiagaraDataChannelHandler.generated.h already included, missing '#pragma once' in NiagaraDataChannelHandler.h"
#endif
#define NIAGARA_NiagaraDataChannelHandler_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelHandler_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetDataChannelReader); \
	DECLARE_FUNCTION(execGetDataChannelWriter);


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelHandler_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraDataChannelHandler(); \
	friend struct Z_Construct_UClass_UNiagaraDataChannelHandler_Statics; \
public: \
	DECLARE_CLASS(UNiagaraDataChannelHandler, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Niagara"), NIAGARA_API) \
	DECLARE_SERIALIZER(UNiagaraDataChannelHandler)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelHandler_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraDataChannelHandler(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraDataChannelHandler(UNiagaraDataChannelHandler&&); \
	UNiagaraDataChannelHandler(const UNiagaraDataChannelHandler&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraDataChannelHandler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataChannelHandler); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDataChannelHandler) \
	NIAGARA_API virtual ~UNiagaraDataChannelHandler();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelHandler_h_21_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelHandler_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelHandler_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelHandler_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelHandler_h_26_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNiagaraDataChannelHandler>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelHandler_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
