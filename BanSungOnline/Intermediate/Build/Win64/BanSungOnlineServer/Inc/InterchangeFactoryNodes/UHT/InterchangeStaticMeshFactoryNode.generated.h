// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeStaticMeshFactoryNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FSoftObjectPath;
#ifdef INTERCHANGEFACTORYNODES_InterchangeStaticMeshFactoryNode_generated_h
#error "InterchangeStaticMeshFactoryNode.generated.h already included, missing '#pragma once' in InterchangeStaticMeshFactoryNode.h"
#endif
#define INTERCHANGEFACTORYNODES_InterchangeStaticMeshFactoryNode_generated_h

#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeStaticMeshFactoryNode_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCustomMaxLumenMeshCards); \
	DECLARE_FUNCTION(execGetCustomMaxLumenMeshCards); \
	DECLARE_FUNCTION(execSetCustomDistanceFieldReplacementMesh); \
	DECLARE_FUNCTION(execGetCustomDistanceFieldReplacementMesh); \
	DECLARE_FUNCTION(execSetCustomDistanceFieldResolutionScale); \
	DECLARE_FUNCTION(execGetCustomDistanceFieldResolutionScale); \
	DECLARE_FUNCTION(execSetCustomBuildScale3D); \
	DECLARE_FUNCTION(execGetCustomBuildScale3D); \
	DECLARE_FUNCTION(execSetCustomDstLightmapIndex); \
	DECLARE_FUNCTION(execGetCustomDstLightmapIndex); \
	DECLARE_FUNCTION(execSetCustomSrcLightmapIndex); \
	DECLARE_FUNCTION(execGetCustomSrcLightmapIndex); \
	DECLARE_FUNCTION(execSetCustomMinLightmapResolution); \
	DECLARE_FUNCTION(execGetCustomMinLightmapResolution); \
	DECLARE_FUNCTION(execSetCustomSupportFaceRemap); \
	DECLARE_FUNCTION(execGetCustomSupportFaceRemap); \
	DECLARE_FUNCTION(execSetCustomGenerateDistanceFieldAsIfTwoSided); \
	DECLARE_FUNCTION(execGetCustomGenerateDistanceFieldAsIfTwoSided); \
	DECLARE_FUNCTION(execSetCustomGenerateLightmapUVs); \
	DECLARE_FUNCTION(execGetCustomGenerateLightmapUVs); \
	DECLARE_FUNCTION(execSetCustomBuildReversedIndexBuffer); \
	DECLARE_FUNCTION(execGetCustomBuildReversedIndexBuffer); \
	DECLARE_FUNCTION(execRemoveSocketUd); \
	DECLARE_FUNCTION(execAddSocketUids); \
	DECLARE_FUNCTION(execAddSocketUid); \
	DECLARE_FUNCTION(execGetSocketUids); \
	DECLARE_FUNCTION(execGetSocketUidCount); \
	DECLARE_FUNCTION(execSetCustomBuildNanite); \
	DECLARE_FUNCTION(execGetCustomBuildNanite); \
	DECLARE_FUNCTION(execSetLODScreenSizes); \
	DECLARE_FUNCTION(execGetLODScreenSizes); \
	DECLARE_FUNCTION(execGetLODScreenSizeCount); \
	DECLARE_FUNCTION(execSetCustomAutoComputeLODScreenSizes); \
	DECLARE_FUNCTION(execGetCustomAutoComputeLODScreenSizes); \
	DECLARE_FUNCTION(execGetObjectClass); \
	DECLARE_FUNCTION(execInitializeStaticMeshNode);


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeStaticMeshFactoryNode_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeStaticMeshFactoryNode(); \
	friend struct Z_Construct_UClass_UInterchangeStaticMeshFactoryNode_Statics; \
public: \
	DECLARE_CLASS(UInterchangeStaticMeshFactoryNode, UInterchangeMeshFactoryNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeFactoryNodes"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeStaticMeshFactoryNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeStaticMeshFactoryNode_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInterchangeStaticMeshFactoryNode(UInterchangeStaticMeshFactoryNode&&); \
	UInterchangeStaticMeshFactoryNode(const UInterchangeStaticMeshFactoryNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeStaticMeshFactoryNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeStaticMeshFactoryNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeStaticMeshFactoryNode) \
	NO_API virtual ~UInterchangeStaticMeshFactoryNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeStaticMeshFactoryNode_h_29_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeStaticMeshFactoryNode_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeStaticMeshFactoryNode_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeStaticMeshFactoryNode_h_32_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeStaticMeshFactoryNode_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGEFACTORYNODES_API UClass* StaticClass<class UInterchangeStaticMeshFactoryNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeStaticMeshFactoryNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
