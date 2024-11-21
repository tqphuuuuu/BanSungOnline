// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TransferMeshTool.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MESHMODELINGTOOLSEXP_TransferMeshTool_generated_h
#error "TransferMeshTool.generated.h already included, missing '#pragma once' in TransferMeshTool.h"
#endif
#define MESHMODELINGTOOLSEXP_TransferMeshTool_generated_h

#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_TransferMeshTool_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTransferMeshToolBuilder(); \
	friend struct Z_Construct_UClass_UTransferMeshToolBuilder_Statics; \
public: \
	DECLARE_CLASS(UTransferMeshToolBuilder, UMultiSelectionMeshEditingToolBuilder, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingToolsExp"), NO_API) \
	DECLARE_SERIALIZER(UTransferMeshToolBuilder)


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_TransferMeshTool_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTransferMeshToolBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTransferMeshToolBuilder(UTransferMeshToolBuilder&&); \
	UTransferMeshToolBuilder(const UTransferMeshToolBuilder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTransferMeshToolBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTransferMeshToolBuilder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTransferMeshToolBuilder) \
	NO_API virtual ~UTransferMeshToolBuilder();


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_TransferMeshTool_h_15_PROLOG
#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_TransferMeshTool_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_TransferMeshTool_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_TransferMeshTool_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<class UTransferMeshToolBuilder>();

#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_TransferMeshTool_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetTargetLODNamesFunc); \
	DECLARE_FUNCTION(execGetSourceLODNamesFunc);


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_TransferMeshTool_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTransferMeshToolProperties(); \
	friend struct Z_Construct_UClass_UTransferMeshToolProperties_Statics; \
public: \
	DECLARE_CLASS(UTransferMeshToolProperties, UInteractiveToolPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingToolsExp"), NO_API) \
	DECLARE_SERIALIZER(UTransferMeshToolProperties)


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_TransferMeshTool_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTransferMeshToolProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTransferMeshToolProperties(UTransferMeshToolProperties&&); \
	UTransferMeshToolProperties(const UTransferMeshToolProperties&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTransferMeshToolProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTransferMeshToolProperties); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTransferMeshToolProperties) \
	NO_API virtual ~UTransferMeshToolProperties();


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_TransferMeshTool_h_31_PROLOG
#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_TransferMeshTool_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_TransferMeshTool_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_TransferMeshTool_h_34_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_TransferMeshTool_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<class UTransferMeshToolProperties>();

#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_TransferMeshTool_h_86_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTransferMeshTool(); \
	friend struct Z_Construct_UClass_UTransferMeshTool_Statics; \
public: \
	DECLARE_CLASS(UTransferMeshTool, UMultiSelectionMeshEditingTool, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingToolsExp"), NO_API) \
	DECLARE_SERIALIZER(UTransferMeshTool) \
	virtual UObject* _getUObject() const override { return const_cast<UTransferMeshTool*>(this); }


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_TransferMeshTool_h_86_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTransferMeshTool(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTransferMeshTool(UTransferMeshTool&&); \
	UTransferMeshTool(const UTransferMeshTool&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTransferMeshTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTransferMeshTool); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTransferMeshTool) \
	NO_API virtual ~UTransferMeshTool();


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_TransferMeshTool_h_81_PROLOG
#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_TransferMeshTool_h_86_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_TransferMeshTool_h_86_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_TransferMeshTool_h_86_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<class UTransferMeshTool>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_TransferMeshTool_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
