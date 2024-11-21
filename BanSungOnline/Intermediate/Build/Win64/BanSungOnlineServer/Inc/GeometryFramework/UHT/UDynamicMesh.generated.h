// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UDynamicMesh.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDynamicMesh;
#ifdef GEOMETRYFRAMEWORK_UDynamicMesh_generated_h
#error "UDynamicMesh.generated.h already included, missing '#pragma once' in UDynamicMesh.h"
#endif
#define GEOMETRYFRAMEWORK_UDynamicMesh_generated_h

#define FID_Engine_Source_Runtime_GeometryFramework_Public_UDynamicMesh_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDynamicMeshGenerator(); \
	friend struct Z_Construct_UClass_UDynamicMeshGenerator_Statics; \
public: \
	DECLARE_CLASS(UDynamicMeshGenerator, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/GeometryFramework"), GEOMETRYFRAMEWORK_API) \
	DECLARE_SERIALIZER(UDynamicMeshGenerator)


#define FID_Engine_Source_Runtime_GeometryFramework_Public_UDynamicMesh_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEOMETRYFRAMEWORK_API UDynamicMeshGenerator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDynamicMeshGenerator(UDynamicMeshGenerator&&); \
	UDynamicMeshGenerator(const UDynamicMeshGenerator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEOMETRYFRAMEWORK_API, UDynamicMeshGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamicMeshGenerator); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamicMeshGenerator) \
	GEOMETRYFRAMEWORK_API virtual ~UDynamicMeshGenerator();


#define FID_Engine_Source_Runtime_GeometryFramework_Public_UDynamicMesh_h_21_PROLOG
#define FID_Engine_Source_Runtime_GeometryFramework_Public_UDynamicMesh_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_GeometryFramework_Public_UDynamicMesh_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_GeometryFramework_Public_UDynamicMesh_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOMETRYFRAMEWORK_API UClass* StaticClass<class UDynamicMeshGenerator>();

#define FID_Engine_Source_Runtime_GeometryFramework_Public_UDynamicMesh_h_70_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDynamicMeshChangeInfo_Statics; \
	GEOMETRYFRAMEWORK_API static class UScriptStruct* StaticStruct();


template<> GEOMETRYFRAMEWORK_API UScriptStruct* StaticStruct<struct FDynamicMeshChangeInfo>();

#define FID_Engine_Source_Runtime_GeometryFramework_Public_UDynamicMesh_h_92_DELEGATE \
GEOMETRYFRAMEWORK_API void FOnDynamicMeshModifiedBP_DelegateWrapper(const FMulticastScriptDelegate& OnDynamicMeshModifiedBP, UDynamicMesh* Mesh);


#define FID_Engine_Source_Runtime_GeometryFramework_Public_UDynamicMesh_h_105_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetTriangleCount); \
	DECLARE_FUNCTION(execIsEmpty); \
	DECLARE_FUNCTION(execResetToCube); \
	DECLARE_FUNCTION(execReset);


#define FID_Engine_Source_Runtime_GeometryFramework_Public_UDynamicMesh_h_105_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UDynamicMesh, GEOMETRYFRAMEWORK_API)


#define FID_Engine_Source_Runtime_GeometryFramework_Public_UDynamicMesh_h_105_INCLASS \
private: \
	static void StaticRegisterNativesUDynamicMesh(); \
	friend struct Z_Construct_UClass_UDynamicMesh_Statics; \
public: \
	DECLARE_CLASS(UDynamicMesh, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryFramework"), GEOMETRYFRAMEWORK_API) \
	DECLARE_SERIALIZER(UDynamicMesh) \
	FID_Engine_Source_Runtime_GeometryFramework_Public_UDynamicMesh_h_105_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UDynamicMesh*>(this); }


#define FID_Engine_Source_Runtime_GeometryFramework_Public_UDynamicMesh_h_105_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEOMETRYFRAMEWORK_API UDynamicMesh(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamicMesh) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEOMETRYFRAMEWORK_API, UDynamicMesh); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamicMesh); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDynamicMesh(UDynamicMesh&&); \
	UDynamicMesh(const UDynamicMesh&); \
public: \
	GEOMETRYFRAMEWORK_API virtual ~UDynamicMesh();


#define FID_Engine_Source_Runtime_GeometryFramework_Public_UDynamicMesh_h_99_PROLOG
#define FID_Engine_Source_Runtime_GeometryFramework_Public_UDynamicMesh_h_105_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_GeometryFramework_Public_UDynamicMesh_h_105_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_GeometryFramework_Public_UDynamicMesh_h_105_INCLASS \
	FID_Engine_Source_Runtime_GeometryFramework_Public_UDynamicMesh_h_105_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOMETRYFRAMEWORK_API UClass* StaticClass<class UDynamicMesh>();

#define FID_Engine_Source_Runtime_GeometryFramework_Public_UDynamicMesh_h_370_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFreeAllMeshes); \
	DECLARE_FUNCTION(execReturnAllMeshes); \
	DECLARE_FUNCTION(execReturnMesh); \
	DECLARE_FUNCTION(execRequestMesh);


#define FID_Engine_Source_Runtime_GeometryFramework_Public_UDynamicMesh_h_370_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDynamicMeshPool(); \
	friend struct Z_Construct_UClass_UDynamicMeshPool_Statics; \
public: \
	DECLARE_CLASS(UDynamicMeshPool, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GeometryFramework"), GEOMETRYFRAMEWORK_API) \
	DECLARE_SERIALIZER(UDynamicMeshPool)


#define FID_Engine_Source_Runtime_GeometryFramework_Public_UDynamicMesh_h_370_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEOMETRYFRAMEWORK_API UDynamicMeshPool(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDynamicMeshPool(UDynamicMeshPool&&); \
	UDynamicMeshPool(const UDynamicMeshPool&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEOMETRYFRAMEWORK_API, UDynamicMeshPool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamicMeshPool); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamicMeshPool) \
	GEOMETRYFRAMEWORK_API virtual ~UDynamicMeshPool();


#define FID_Engine_Source_Runtime_GeometryFramework_Public_UDynamicMesh_h_367_PROLOG
#define FID_Engine_Source_Runtime_GeometryFramework_Public_UDynamicMesh_h_370_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_GeometryFramework_Public_UDynamicMesh_h_370_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_GeometryFramework_Public_UDynamicMesh_h_370_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_GeometryFramework_Public_UDynamicMesh_h_370_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOMETRYFRAMEWORK_API UClass* StaticClass<class UDynamicMeshPool>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_GeometryFramework_Public_UDynamicMesh_h


#define FOREACH_ENUM_EDYNAMICMESHCHANGETYPE(op) \
	op(EDynamicMeshChangeType::GeneralEdit) \
	op(EDynamicMeshChangeType::MeshChange) \
	op(EDynamicMeshChangeType::MeshReplacementChange) \
	op(EDynamicMeshChangeType::MeshVertexChange) \
	op(EDynamicMeshChangeType::DeformationEdit) \
	op(EDynamicMeshChangeType::AttributeEdit) 

enum class EDynamicMeshChangeType : uint8;
template<> struct TIsUEnumClass<EDynamicMeshChangeType> { enum { Value = true }; };
template<> GEOMETRYFRAMEWORK_API UEnum* StaticEnum<EDynamicMeshChangeType>();

#define FOREACH_ENUM_EDYNAMICMESHATTRIBUTECHANGEFLAGS(op) \
	op(EDynamicMeshAttributeChangeFlags::Unknown) \
	op(EDynamicMeshAttributeChangeFlags::MeshTopology) \
	op(EDynamicMeshAttributeChangeFlags::VertexPositions) \
	op(EDynamicMeshAttributeChangeFlags::NormalsTangents) \
	op(EDynamicMeshAttributeChangeFlags::VertexColors) \
	op(EDynamicMeshAttributeChangeFlags::UVs) \
	op(EDynamicMeshAttributeChangeFlags::TriangleGroups) 

enum class EDynamicMeshAttributeChangeFlags : uint8;
template<> struct TIsUEnumClass<EDynamicMeshAttributeChangeFlags> { enum { Value = true }; };
template<> GEOMETRYFRAMEWORK_API UEnum* StaticEnum<EDynamicMeshAttributeChangeFlags>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
