// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataInterface/NiagaraDataInterfaceSocketReader.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARA_NiagaraDataInterfaceSocketReader_generated_h
#error "NiagaraDataInterfaceSocketReader.generated.h already included, missing '#pragma once' in NiagaraDataInterfaceSocketReader.h"
#endif
#define NIAGARA_NiagaraDataInterfaceSocketReader_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceSocketReader_h_34_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraDataInterfaceSocketReader(); \
	friend struct Z_Construct_UClass_UNiagaraDataInterfaceSocketReader_Statics; \
public: \
	DECLARE_CLASS(UNiagaraDataInterfaceSocketReader, UNiagaraDataInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NIAGARA_API) \
	DECLARE_SERIALIZER(UNiagaraDataInterfaceSocketReader)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceSocketReader_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraDataInterfaceSocketReader(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDataInterfaceSocketReader) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraDataInterfaceSocketReader); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataInterfaceSocketReader); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraDataInterfaceSocketReader(UNiagaraDataInterfaceSocketReader&&); \
	UNiagaraDataInterfaceSocketReader(const UNiagaraDataInterfaceSocketReader&); \
public: \
	NIAGARA_API virtual ~UNiagaraDataInterfaceSocketReader();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceSocketReader_h_31_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceSocketReader_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceSocketReader_h_34_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceSocketReader_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNiagaraDataInterfaceSocketReader>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceSocketReader_h


#define FOREACH_ENUM_ENDISOCKETREADERSOURCEMODE(op) \
	op(ENDISocketReaderSourceMode::Default) \
	op(ENDISocketReaderSourceMode::ParameterBindingOnly) \
	op(ENDISocketReaderSourceMode::AttachedParentOnly) \
	op(ENDISocketReaderSourceMode::SourceOnly) 

enum class ENDISocketReaderSourceMode : uint8;
template<> struct TIsUEnumClass<ENDISocketReaderSourceMode> { enum { Value = true }; };
template<> NIAGARA_API UEnum* StaticEnum<ENDISocketReaderSourceMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
