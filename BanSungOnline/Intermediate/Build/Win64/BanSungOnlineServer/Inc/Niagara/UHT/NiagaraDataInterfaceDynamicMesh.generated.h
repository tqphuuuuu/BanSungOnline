// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataInterface/NiagaraDataInterfaceDynamicMesh.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARA_NiagaraDataInterfaceDynamicMesh_generated_h
#error "NiagaraDataInterfaceDynamicMesh.generated.h already included, missing '#pragma once' in NiagaraDataInterfaceDynamicMesh.h"
#endif
#define NIAGARA_NiagaraDataInterfaceDynamicMesh_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceDynamicMesh_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraDynamicMeshSection_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraDynamicMeshSection>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceDynamicMesh_h_33_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraDynamicMeshMaterial_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraDynamicMeshMaterial>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceDynamicMesh_h_55_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraDataInterfaceDynamicMesh(); \
	friend struct Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics; \
public: \
	DECLARE_CLASS(UNiagaraDataInterfaceDynamicMesh, UNiagaraDataInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NIAGARA_API) \
	DECLARE_SERIALIZER(UNiagaraDataInterfaceDynamicMesh) \
	virtual UObject* _getUObject() const override { return const_cast<UNiagaraDataInterfaceDynamicMesh*>(this); }


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceDynamicMesh_h_55_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraDataInterfaceDynamicMesh(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDataInterfaceDynamicMesh) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraDataInterfaceDynamicMesh); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataInterfaceDynamicMesh); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraDataInterfaceDynamicMesh(UNiagaraDataInterfaceDynamicMesh&&); \
	UNiagaraDataInterfaceDynamicMesh(const UNiagaraDataInterfaceDynamicMesh&); \
public: \
	NIAGARA_API virtual ~UNiagaraDataInterfaceDynamicMesh();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceDynamicMesh_h_52_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceDynamicMesh_h_55_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceDynamicMesh_h_55_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceDynamicMesh_h_55_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNiagaraDataInterfaceDynamicMesh>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceDynamicMesh_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS