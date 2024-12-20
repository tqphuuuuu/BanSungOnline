// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Selection/MeshTopologySelectionMechanic.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MODELINGCOMPONENTS_MeshTopologySelectionMechanic_generated_h
#error "MeshTopologySelectionMechanic.generated.h already included, missing '#pragma once' in MeshTopologySelectionMechanic.h"
#endif
#define MODELINGCOMPONENTS_MeshTopologySelectionMechanic_generated_h

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_MeshTopologySelectionMechanic_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSelectAll); \
	DECLARE_FUNCTION(execInvertSelection);


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_MeshTopologySelectionMechanic_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMeshTopologySelectionMechanicProperties(); \
	friend struct Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics; \
public: \
	DECLARE_CLASS(UMeshTopologySelectionMechanicProperties, UInteractiveToolPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ModelingComponents"), NO_API) \
	DECLARE_SERIALIZER(UMeshTopologySelectionMechanicProperties)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_MeshTopologySelectionMechanic_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMeshTopologySelectionMechanicProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMeshTopologySelectionMechanicProperties(UMeshTopologySelectionMechanicProperties&&); \
	UMeshTopologySelectionMechanicProperties(const UMeshTopologySelectionMechanicProperties&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMeshTopologySelectionMechanicProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeshTopologySelectionMechanicProperties); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMeshTopologySelectionMechanicProperties) \
	NO_API virtual ~UMeshTopologySelectionMechanicProperties();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_MeshTopologySelectionMechanic_h_28_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_MeshTopologySelectionMechanic_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_MeshTopologySelectionMechanic_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_MeshTopologySelectionMechanic_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_MeshTopologySelectionMechanic_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODELINGCOMPONENTS_API UClass* StaticClass<class UMeshTopologySelectionMechanicProperties>();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_MeshTopologySelectionMechanic_h_127_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMeshTopologySelectionMechanic(); \
	friend struct Z_Construct_UClass_UMeshTopologySelectionMechanic_Statics; \
public: \
	DECLARE_CLASS(UMeshTopologySelectionMechanic, UInteractionMechanic, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ModelingComponents"), NO_API) \
	DECLARE_SERIALIZER(UMeshTopologySelectionMechanic)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_MeshTopologySelectionMechanic_h_127_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMeshTopologySelectionMechanic(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMeshTopologySelectionMechanic(UMeshTopologySelectionMechanic&&); \
	UMeshTopologySelectionMechanic(const UMeshTopologySelectionMechanic&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMeshTopologySelectionMechanic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeshTopologySelectionMechanic); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UMeshTopologySelectionMechanic)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_MeshTopologySelectionMechanic_h_124_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_MeshTopologySelectionMechanic_h_127_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_MeshTopologySelectionMechanic_h_127_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_MeshTopologySelectionMechanic_h_127_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODELINGCOMPONENTS_API UClass* StaticClass<class UMeshTopologySelectionMechanic>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_MeshTopologySelectionMechanic_h


#define FOREACH_ENUM_EMARQUEESELECTIONUPDATETYPE(op) \
	op(EMarqueeSelectionUpdateType::OnDrag) \
	op(EMarqueeSelectionUpdateType::OnTickAndRelease) \
	op(EMarqueeSelectionUpdateType::OnRelease) 

enum class EMarqueeSelectionUpdateType;
template<> struct TIsUEnumClass<EMarqueeSelectionUpdateType> { enum { Value = true }; };
template<> MODELINGCOMPONENTS_API UEnum* StaticEnum<EMarqueeSelectionUpdateType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
