// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseGizmos/GizmoBoxComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERACTIVETOOLSFRAMEWORK_GizmoBoxComponent_generated_h
#error "GizmoBoxComponent.generated.h already included, missing '#pragma once' in GizmoBoxComponent.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_GizmoBoxComponent_generated_h

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoBoxComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGizmoBoxComponent(); \
	friend struct Z_Construct_UClass_UGizmoBoxComponent_Statics; \
public: \
	DECLARE_CLASS(UGizmoBoxComponent, UGizmoBaseComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), INTERACTIVETOOLSFRAMEWORK_API) \
	DECLARE_SERIALIZER(UGizmoBoxComponent)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoBoxComponent_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERACTIVETOOLSFRAMEWORK_API UGizmoBoxComponent(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGizmoBoxComponent(UGizmoBoxComponent&&); \
	UGizmoBoxComponent(const UGizmoBoxComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, UGizmoBoxComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGizmoBoxComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGizmoBoxComponent) \
	INTERACTIVETOOLSFRAMEWORK_API virtual ~UGizmoBoxComponent();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoBoxComponent_h_14_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoBoxComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoBoxComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoBoxComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<class UGizmoBoxComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoBoxComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS