// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UVTransferTool.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MESHMODELINGTOOLSEXP_UVTransferTool_generated_h
#error "UVTransferTool.generated.h already included, missing '#pragma once' in UVTransferTool.h"
#endif
#define MESHMODELINGTOOLSEXP_UVTransferTool_generated_h

#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_UVTransferTool_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUVTransferToolBuilder(); \
	friend struct Z_Construct_UClass_UUVTransferToolBuilder_Statics; \
public: \
	DECLARE_CLASS(UUVTransferToolBuilder, UMultiTargetWithSelectionToolBuilder, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingToolsExp"), NO_API) \
	DECLARE_SERIALIZER(UUVTransferToolBuilder)


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_UVTransferTool_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUVTransferToolBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UUVTransferToolBuilder(UUVTransferToolBuilder&&); \
	UUVTransferToolBuilder(const UUVTransferToolBuilder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUVTransferToolBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUVTransferToolBuilder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUVTransferToolBuilder) \
	NO_API virtual ~UUVTransferToolBuilder();


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_UVTransferTool_h_24_PROLOG
#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_UVTransferTool_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_UVTransferTool_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_UVTransferTool_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<class UUVTransferToolBuilder>();

#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_UVTransferTool_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUVTransferToolProperties(); \
	friend struct Z_Construct_UClass_UUVTransferToolProperties_Statics; \
public: \
	DECLARE_CLASS(UUVTransferToolProperties, UInteractiveToolPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingToolsExp"), NO_API) \
	DECLARE_SERIALIZER(UUVTransferToolProperties)


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_UVTransferTool_h_41_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUVTransferToolProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UUVTransferToolProperties(UUVTransferToolProperties&&); \
	UUVTransferToolProperties(const UUVTransferToolProperties&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUVTransferToolProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUVTransferToolProperties); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUVTransferToolProperties) \
	NO_API virtual ~UUVTransferToolProperties();


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_UVTransferTool_h_38_PROLOG
#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_UVTransferTool_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_UVTransferTool_h_41_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_UVTransferTool_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<class UUVTransferToolProperties>();

#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_UVTransferTool_h_97_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUVTransferTool(); \
	friend struct Z_Construct_UClass_UUVTransferTool_Statics; \
public: \
	DECLARE_CLASS(UUVTransferTool, UMultiTargetWithSelectionTool, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingToolsExp"), NO_API) \
	DECLARE_SERIALIZER(UUVTransferTool) \
	virtual UObject* _getUObject() const override { return const_cast<UUVTransferTool*>(this); }


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_UVTransferTool_h_97_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUVTransferTool(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UUVTransferTool(UUVTransferTool&&); \
	UUVTransferTool(const UUVTransferTool&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUVTransferTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUVTransferTool); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUVTransferTool) \
	NO_API virtual ~UUVTransferTool();


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_UVTransferTool_h_92_PROLOG
#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_UVTransferTool_h_97_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_UVTransferTool_h_97_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_UVTransferTool_h_97_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<class UUVTransferTool>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_UVTransferTool_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
