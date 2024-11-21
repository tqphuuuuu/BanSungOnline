// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraRenderableMeshInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARA_NiagaraRenderableMeshInterface_generated_h
#error "NiagaraRenderableMeshInterface.generated.h already included, missing '#pragma once' in NiagaraRenderableMeshInterface.h"
#endif
#define NIAGARA_NiagaraRenderableMeshInterface_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRenderableMeshInterface_h_72_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraRenderableMeshInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraRenderableMeshInterface(UNiagaraRenderableMeshInterface&&); \
	UNiagaraRenderableMeshInterface(const UNiagaraRenderableMeshInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraRenderableMeshInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraRenderableMeshInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraRenderableMeshInterface) \
	NO_API virtual ~UNiagaraRenderableMeshInterface();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRenderableMeshInterface_h_72_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUNiagaraRenderableMeshInterface(); \
	friend struct Z_Construct_UClass_UNiagaraRenderableMeshInterface_Statics; \
public: \
	DECLARE_CLASS(UNiagaraRenderableMeshInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Niagara"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraRenderableMeshInterface)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRenderableMeshInterface_h_72_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRenderableMeshInterface_h_72_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRenderableMeshInterface_h_72_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRenderableMeshInterface_h_72_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~INiagaraRenderableMeshInterface() {} \
public: \
	typedef UNiagaraRenderableMeshInterface UClassType; \
	typedef INiagaraRenderableMeshInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRenderableMeshInterface_h_69_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRenderableMeshInterface_h_78_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRenderableMeshInterface_h_72_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNiagaraRenderableMeshInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRenderableMeshInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
