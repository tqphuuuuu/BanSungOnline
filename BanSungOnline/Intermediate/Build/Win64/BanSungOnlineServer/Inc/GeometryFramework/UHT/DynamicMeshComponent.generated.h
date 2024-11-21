// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/DynamicMeshComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDynamicMesh;
class UMaterialInterface;
enum class EDynamicMeshComponentTangentsMode : uint8;
#ifdef GEOMETRYFRAMEWORK_DynamicMeshComponent_generated_h
#error "DynamicMeshComponent.generated.h already included, missing '#pragma once' in DynamicMeshComponent.h"
#endif
#define GEOMETRYFRAMEWORK_DynamicMeshComponent_generated_h

#define FID_Engine_Source_Runtime_GeometryFramework_Public_Components_DynamicMeshComponent_h_172_RPC_WRAPPERS \
	DECLARE_FUNCTION(execUpdateCollision); \
	DECLARE_FUNCTION(execSetDeferredCollisionUpdatesEnabled); \
	DECLARE_FUNCTION(execSetComplexAsSimpleCollisionEnabled); \
	DECLARE_FUNCTION(execEnableComplexAsSimpleCollision); \
	DECLARE_FUNCTION(execGetTangentsTypePure); \
	DECLARE_FUNCTION(execGetTangentsType); \
	DECLARE_FUNCTION(execSetTangentsType); \
	DECLARE_FUNCTION(execValidateMaterialSlots); \
	DECLARE_FUNCTION(execConfigureMaterialSet); \
	DECLARE_FUNCTION(execNotifyMeshVertexAttributesModified); \
	DECLARE_FUNCTION(execNotifyMeshModified); \
	DECLARE_FUNCTION(execSetAllowsGeometrySelection); \
	DECLARE_FUNCTION(execAllowsGeometrySelection); \
	DECLARE_FUNCTION(execSetDynamicMesh);


#define FID_Engine_Source_Runtime_GeometryFramework_Public_Components_DynamicMeshComponent_h_172_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UDynamicMeshComponent, GEOMETRYFRAMEWORK_API)


#define FID_Engine_Source_Runtime_GeometryFramework_Public_Components_DynamicMeshComponent_h_172_INCLASS \
private: \
	static void StaticRegisterNativesUDynamicMeshComponent(); \
	friend struct Z_Construct_UClass_UDynamicMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UDynamicMeshComponent, UBaseDynamicMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GeometryFramework"), GEOMETRYFRAMEWORK_API) \
	DECLARE_SERIALIZER(UDynamicMeshComponent) \
	FID_Engine_Source_Runtime_GeometryFramework_Public_Components_DynamicMeshComponent_h_172_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UDynamicMeshComponent*>(this); }


#define FID_Engine_Source_Runtime_GeometryFramework_Public_Components_DynamicMeshComponent_h_172_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEOMETRYFRAMEWORK_API UDynamicMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamicMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEOMETRYFRAMEWORK_API, UDynamicMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamicMeshComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDynamicMeshComponent(UDynamicMeshComponent&&); \
	UDynamicMeshComponent(const UDynamicMeshComponent&); \
public: \
	GEOMETRYFRAMEWORK_API virtual ~UDynamicMeshComponent();


#define FID_Engine_Source_Runtime_GeometryFramework_Public_Components_DynamicMeshComponent_h_169_PROLOG
#define FID_Engine_Source_Runtime_GeometryFramework_Public_Components_DynamicMeshComponent_h_172_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_GeometryFramework_Public_Components_DynamicMeshComponent_h_172_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_GeometryFramework_Public_Components_DynamicMeshComponent_h_172_INCLASS \
	FID_Engine_Source_Runtime_GeometryFramework_Public_Components_DynamicMeshComponent_h_172_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOMETRYFRAMEWORK_API UClass* StaticClass<class UDynamicMeshComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_GeometryFramework_Public_Components_DynamicMeshComponent_h


#define FOREACH_ENUM_EDYNAMICMESHCOMPONENTRENDERUPDATEMODE(op) \
	op(EDynamicMeshComponentRenderUpdateMode::NoUpdate) \
	op(EDynamicMeshComponentRenderUpdateMode::FullUpdate) \
	op(EDynamicMeshComponentRenderUpdateMode::FastUpdate) 

enum class EDynamicMeshComponentRenderUpdateMode;
template<> struct TIsUEnumClass<EDynamicMeshComponentRenderUpdateMode> { enum { Value = true }; };
template<> GEOMETRYFRAMEWORK_API UEnum* StaticEnum<EDynamicMeshComponentRenderUpdateMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
