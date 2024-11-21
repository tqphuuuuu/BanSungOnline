// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/Interfaces/TypedElementAssetDataInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAssetData;
struct FScriptTypedElementHandle;
#ifdef TYPEDELEMENTRUNTIME_TypedElementAssetDataInterface_generated_h
#error "TypedElementAssetDataInterface.generated.h already included, missing '#pragma once' in TypedElementAssetDataInterface.h"
#endif
#define TYPEDELEMENTRUNTIME_TypedElementAssetDataInterface_generated_h

#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementAssetDataInterface_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTypedElementAssetDataReferencedOptions_Statics; \
	TYPEDELEMENTRUNTIME_API static class UScriptStruct* StaticStruct();


template<> TYPEDELEMENTRUNTIME_API UScriptStruct* StaticStruct<struct FTypedElementAssetDataReferencedOptions>();

#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementAssetDataInterface_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAssetData); \
	DECLARE_FUNCTION(execGetAllReferencedAssetDatas);


#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementAssetDataInterface_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TYPEDELEMENTRUNTIME_API UTypedElementAssetDataInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTypedElementAssetDataInterface(UTypedElementAssetDataInterface&&); \
	UTypedElementAssetDataInterface(const UTypedElementAssetDataInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TYPEDELEMENTRUNTIME_API, UTypedElementAssetDataInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTypedElementAssetDataInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTypedElementAssetDataInterface) \
	TYPEDELEMENTRUNTIME_API virtual ~UTypedElementAssetDataInterface();


#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementAssetDataInterface_h_34_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUTypedElementAssetDataInterface(); \
	friend struct Z_Construct_UClass_UTypedElementAssetDataInterface_Statics; \
public: \
	DECLARE_CLASS(UTypedElementAssetDataInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/TypedElementRuntime"), TYPEDELEMENTRUNTIME_API) \
	DECLARE_SERIALIZER(UTypedElementAssetDataInterface)


#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementAssetDataInterface_h_34_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementAssetDataInterface_h_34_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementAssetDataInterface_h_34_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementAssetDataInterface_h_34_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ITypedElementAssetDataInterface() {} \
public: \
	typedef UTypedElementAssetDataInterface UClassType; \
	typedef ITypedElementAssetDataInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementAssetDataInterface_h_31_PROLOG
#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementAssetDataInterface_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementAssetDataInterface_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementAssetDataInterface_h_34_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TYPEDELEMENTRUNTIME_API UClass* StaticClass<class UTypedElementAssetDataInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementAssetDataInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
