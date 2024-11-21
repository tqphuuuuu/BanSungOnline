// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataInterfaces/OptimusDataInterfaceSkinnedMeshExec.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OPTIMUSCORE_OptimusDataInterfaceSkinnedMeshExec_generated_h
#error "OptimusDataInterfaceSkinnedMeshExec.generated.h already included, missing '#pragma once' in OptimusDataInterfaceSkinnedMeshExec.h"
#endif
#define OPTIMUSCORE_OptimusDataInterfaceSkinnedMeshExec_generated_h

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkinnedMeshExec_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOptimusSkinnedMeshExecDataInterface(); \
	friend struct Z_Construct_UClass_UOptimusSkinnedMeshExecDataInterface_Statics; \
public: \
	DECLARE_CLASS(UOptimusSkinnedMeshExecDataInterface, UOptimusComputeDataInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OptimusCore"), NO_API) \
	DECLARE_SERIALIZER(UOptimusSkinnedMeshExecDataInterface) \
	virtual UObject* _getUObject() const override { return const_cast<UOptimusSkinnedMeshExecDataInterface*>(this); }


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkinnedMeshExec_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOptimusSkinnedMeshExecDataInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOptimusSkinnedMeshExecDataInterface(UOptimusSkinnedMeshExecDataInterface&&); \
	UOptimusSkinnedMeshExecDataInterface(const UOptimusSkinnedMeshExecDataInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOptimusSkinnedMeshExecDataInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusSkinnedMeshExecDataInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOptimusSkinnedMeshExecDataInterface) \
	NO_API virtual ~UOptimusSkinnedMeshExecDataInterface();


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkinnedMeshExec_h_28_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkinnedMeshExec_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkinnedMeshExec_h_33_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkinnedMeshExec_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OPTIMUSCORE_API UClass* StaticClass<class UOptimusSkinnedMeshExecDataInterface>();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkinnedMeshExec_h_71_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOptimusSkinnedMeshExecDataProvider(); \
	friend struct Z_Construct_UClass_UOptimusSkinnedMeshExecDataProvider_Statics; \
public: \
	DECLARE_CLASS(UOptimusSkinnedMeshExecDataProvider, UComputeDataProvider, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OptimusCore"), NO_API) \
	DECLARE_SERIALIZER(UOptimusSkinnedMeshExecDataProvider)


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkinnedMeshExec_h_71_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOptimusSkinnedMeshExecDataProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOptimusSkinnedMeshExecDataProvider(UOptimusSkinnedMeshExecDataProvider&&); \
	UOptimusSkinnedMeshExecDataProvider(const UOptimusSkinnedMeshExecDataProvider&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOptimusSkinnedMeshExecDataProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusSkinnedMeshExecDataProvider); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOptimusSkinnedMeshExecDataProvider) \
	NO_API virtual ~UOptimusSkinnedMeshExecDataProvider();


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkinnedMeshExec_h_68_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkinnedMeshExec_h_71_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkinnedMeshExec_h_71_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkinnedMeshExec_h_71_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OPTIMUSCORE_API UClass* StaticClass<class UOptimusSkinnedMeshExecDataProvider>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkinnedMeshExec_h


#define FOREACH_ENUM_EOPTIMUSSKINNEDMESHEXECDOMAIN(op) \
	op(EOptimusSkinnedMeshExecDomain::None) \
	op(EOptimusSkinnedMeshExecDomain::Vertex) \
	op(EOptimusSkinnedMeshExecDomain::Triangle) 

enum class EOptimusSkinnedMeshExecDomain : uint8;
template<> struct TIsUEnumClass<EOptimusSkinnedMeshExecDomain> { enum { Value = true }; };
template<> OPTIMUSCORE_API UEnum* StaticEnum<EOptimusSkinnedMeshExecDomain>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
