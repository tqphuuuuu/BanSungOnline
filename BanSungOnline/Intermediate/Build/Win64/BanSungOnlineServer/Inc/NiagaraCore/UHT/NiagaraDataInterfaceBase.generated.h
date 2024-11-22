// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraDataInterfaceBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARACORE_NiagaraDataInterfaceBase_generated_h
#error "NiagaraDataInterfaceBase.generated.h already included, missing '#pragma once' in NiagaraDataInterfaceBase.h"
#endif
#define NIAGARACORE_NiagaraDataInterfaceBase_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraCore_Public_NiagaraDataInterfaceBase_h_46_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraDataInterfaceBase(); \
	friend struct Z_Construct_UClass_UNiagaraDataInterfaceBase_Statics; \
public: \
	DECLARE_CLASS(UNiagaraDataInterfaceBase, UNiagaraMergeable, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/NiagaraCore"), NIAGARACORE_API) \
	DECLARE_SERIALIZER(UNiagaraDataInterfaceBase)


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraCore_Public_NiagaraDataInterfaceBase_h_46_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARACORE_API UNiagaraDataInterfaceBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDataInterfaceBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARACORE_API, UNiagaraDataInterfaceBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataInterfaceBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraDataInterfaceBase(UNiagaraDataInterfaceBase&&); \
	UNiagaraDataInterfaceBase(const UNiagaraDataInterfaceBase&); \
public: \
	NIAGARACORE_API virtual ~UNiagaraDataInterfaceBase();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraCore_Public_NiagaraDataInterfaceBase_h_43_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraCore_Public_NiagaraDataInterfaceBase_h_46_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraCore_Public_NiagaraDataInterfaceBase_h_46_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraCore_Public_NiagaraDataInterfaceBase_h_46_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARACORE_API UClass* StaticClass<class UNiagaraDataInterfaceBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_NiagaraCore_Public_NiagaraDataInterfaceBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS