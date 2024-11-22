// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RecomputeUVsTool.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MESHMODELINGTOOLS_RecomputeUVsTool_generated_h
#error "RecomputeUVsTool.generated.h already included, missing '#pragma once' in RecomputeUVsTool.h"
#endif
#define MESHMODELINGTOOLS_RecomputeUVsTool_generated_h

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_RecomputeUVsTool_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURecomputeUVsToolBuilder(); \
	friend struct Z_Construct_UClass_URecomputeUVsToolBuilder_Statics; \
public: \
	DECLARE_CLASS(URecomputeUVsToolBuilder, USingleSelectionMeshEditingToolBuilder, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingTools"), NO_API) \
	DECLARE_SERIALIZER(URecomputeUVsToolBuilder)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_RecomputeUVsTool_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URecomputeUVsToolBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URecomputeUVsToolBuilder(URecomputeUVsToolBuilder&&); \
	URecomputeUVsToolBuilder(const URecomputeUVsToolBuilder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URecomputeUVsToolBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URecomputeUVsToolBuilder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URecomputeUVsToolBuilder) \
	NO_API virtual ~URecomputeUVsToolBuilder();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_RecomputeUVsTool_h_30_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_RecomputeUVsTool_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_RecomputeUVsTool_h_33_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_RecomputeUVsTool_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MESHMODELINGTOOLS_API UClass* StaticClass<class URecomputeUVsToolBuilder>();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_RecomputeUVsTool_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURecomputeUVsTool(); \
	friend struct Z_Construct_UClass_URecomputeUVsTool_Statics; \
public: \
	DECLARE_CLASS(URecomputeUVsTool, USingleSelectionMeshEditingTool, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingTools"), NO_API) \
	DECLARE_SERIALIZER(URecomputeUVsTool) \
	virtual UObject* _getUObject() const override { return const_cast<URecomputeUVsTool*>(this); }


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_RecomputeUVsTool_h_47_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URecomputeUVsTool(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URecomputeUVsTool(URecomputeUVsTool&&); \
	URecomputeUVsTool(const URecomputeUVsTool&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URecomputeUVsTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URecomputeUVsTool); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URecomputeUVsTool) \
	NO_API virtual ~URecomputeUVsTool();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_RecomputeUVsTool_h_44_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_RecomputeUVsTool_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_RecomputeUVsTool_h_47_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_RecomputeUVsTool_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MESHMODELINGTOOLS_API UClass* StaticClass<class URecomputeUVsTool>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_RecomputeUVsTool_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS