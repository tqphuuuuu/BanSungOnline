// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BakeMeshAttributeTool.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MESHMODELINGTOOLSEXP_BakeMeshAttributeTool_generated_h
#error "BakeMeshAttributeTool.generated.h already included, missing '#pragma once' in BakeMeshAttributeTool.h"
#endif
#define MESHMODELINGTOOLSEXP_BakeMeshAttributeTool_generated_h

#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeMeshAttributeTool_h_92_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBakeMeshAttributeTool(); \
	friend struct Z_Construct_UClass_UBakeMeshAttributeTool_Statics; \
public: \
	DECLARE_CLASS(UBakeMeshAttributeTool, UMultiSelectionMeshEditingTool, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingToolsExp"), NO_API) \
	DECLARE_SERIALIZER(UBakeMeshAttributeTool) \
	virtual UObject* _getUObject() const override { return const_cast<UBakeMeshAttributeTool*>(this); }


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeMeshAttributeTool_h_92_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBakeMeshAttributeTool(UBakeMeshAttributeTool&&); \
	UBakeMeshAttributeTool(const UBakeMeshAttributeTool&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBakeMeshAttributeTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBakeMeshAttributeTool); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBakeMeshAttributeTool) \
	NO_API virtual ~UBakeMeshAttributeTool();


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeMeshAttributeTool_h_89_PROLOG
#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeMeshAttributeTool_h_92_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeMeshAttributeTool_h_92_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeMeshAttributeTool_h_92_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<class UBakeMeshAttributeTool>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeMeshAttributeTool_h


#define FOREACH_ENUM_EBAKEMAPTYPE(op) \
	op(EBakeMapType::None) \
	op(EBakeMapType::TangentSpaceNormal) \
	op(EBakeMapType::ObjectSpaceNormal) \
	op(EBakeMapType::FaceNormal) \
	op(EBakeMapType::BentNormal) \
	op(EBakeMapType::Position) \
	op(EBakeMapType::Curvature) \
	op(EBakeMapType::AmbientOcclusion) \
	op(EBakeMapType::Texture) \
	op(EBakeMapType::MultiTexture) \
	op(EBakeMapType::VertexColor) \
	op(EBakeMapType::MaterialID) \
	op(EBakeMapType::PolyGroupID) \
	op(EBakeMapType::One) \
	op(EBakeMapType::Zero) \
	op(EBakeMapType::UVShell) \
	op(EBakeMapType::All) 

enum class EBakeMapType;
template<> struct TIsUEnumClass<EBakeMapType> { enum { Value = true }; };
template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EBakeMapType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
