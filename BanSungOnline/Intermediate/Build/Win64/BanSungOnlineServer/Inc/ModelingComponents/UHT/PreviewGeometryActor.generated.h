// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Drawing/PreviewGeometryActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APreviewGeometryActor;
class ULineSetComponent;
class UMaterialInterface;
class UPointSetComponent;
class UTriangleSetComponent;
class UWorld;
#ifdef MODELINGCOMPONENTS_PreviewGeometryActor_generated_h
#error "PreviewGeometryActor.generated.h already included, missing '#pragma once' in PreviewGeometryActor.h"
#endif
#define MODELINGCOMPONENTS_PreviewGeometryActor_generated_h

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_PreviewGeometryActor_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPreviewGeometryActor(); \
	friend struct Z_Construct_UClass_APreviewGeometryActor_Statics; \
public: \
	DECLARE_CLASS(APreviewGeometryActor, AInternalToolFrameworkActor, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ModelingComponents"), NO_API) \
	DECLARE_SERIALIZER(APreviewGeometryActor)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_PreviewGeometryActor_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APreviewGeometryActor(APreviewGeometryActor&&); \
	APreviewGeometryActor(const APreviewGeometryActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APreviewGeometryActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APreviewGeometryActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APreviewGeometryActor) \
	NO_API virtual ~APreviewGeometryActor();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_PreviewGeometryActor_h_16_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_PreviewGeometryActor_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_PreviewGeometryActor_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_PreviewGeometryActor_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODELINGCOMPONENTS_API UClass* StaticClass<class APreviewGeometryActor>();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_PreviewGeometryActor_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetAllPointSetsMaterial); \
	DECLARE_FUNCTION(execSetPointSetMaterial); \
	DECLARE_FUNCTION(execSetPointSetVisibility); \
	DECLARE_FUNCTION(execRemoveAllPointSets); \
	DECLARE_FUNCTION(execRemovePointSet); \
	DECLARE_FUNCTION(execFindPointSet); \
	DECLARE_FUNCTION(execAddPointSet); \
	DECLARE_FUNCTION(execSetAllLineSetsMaterial); \
	DECLARE_FUNCTION(execSetLineSetMaterial); \
	DECLARE_FUNCTION(execSetLineSetVisibility); \
	DECLARE_FUNCTION(execRemoveAllLineSets); \
	DECLARE_FUNCTION(execRemoveLineSet); \
	DECLARE_FUNCTION(execFindLineSet); \
	DECLARE_FUNCTION(execAddLineSet); \
	DECLARE_FUNCTION(execRemoveAllTriangleSets); \
	DECLARE_FUNCTION(execRemoveTriangleSet); \
	DECLARE_FUNCTION(execFindTriangleSet); \
	DECLARE_FUNCTION(execAddTriangleSet); \
	DECLARE_FUNCTION(execGetActor); \
	DECLARE_FUNCTION(execDisconnect); \
	DECLARE_FUNCTION(execCreateInWorld);


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_PreviewGeometryActor_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPreviewGeometry(); \
	friend struct Z_Construct_UClass_UPreviewGeometry_Statics; \
public: \
	DECLARE_CLASS(UPreviewGeometry, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ModelingComponents"), NO_API) \
	DECLARE_SERIALIZER(UPreviewGeometry)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_PreviewGeometryActor_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPreviewGeometry(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPreviewGeometry(UPreviewGeometry&&); \
	UPreviewGeometry(const UPreviewGeometry&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPreviewGeometry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPreviewGeometry); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPreviewGeometry)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_PreviewGeometryActor_h_37_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_PreviewGeometryActor_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_PreviewGeometryActor_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_PreviewGeometryActor_h_40_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_PreviewGeometryActor_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODELINGCOMPONENTS_API UClass* StaticClass<class UPreviewGeometry>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_PreviewGeometryActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS