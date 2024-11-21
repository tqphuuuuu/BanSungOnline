// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TargetInterfaces/StaticMeshBackedTarget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERACTIVETOOLSFRAMEWORK_StaticMeshBackedTarget_generated_h
#error "StaticMeshBackedTarget.generated.h already included, missing '#pragma once' in StaticMeshBackedTarget.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_StaticMeshBackedTarget_generated_h

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_StaticMeshBackedTarget_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERACTIVETOOLSFRAMEWORK_API UStaticMeshBackedTarget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UStaticMeshBackedTarget(UStaticMeshBackedTarget&&); \
	UStaticMeshBackedTarget(const UStaticMeshBackedTarget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, UStaticMeshBackedTarget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStaticMeshBackedTarget); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStaticMeshBackedTarget) \
	INTERACTIVETOOLSFRAMEWORK_API virtual ~UStaticMeshBackedTarget();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_StaticMeshBackedTarget_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUStaticMeshBackedTarget(); \
	friend struct Z_Construct_UClass_UStaticMeshBackedTarget_Statics; \
public: \
	DECLARE_CLASS(UStaticMeshBackedTarget, UAssetBackedTarget, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), INTERACTIVETOOLSFRAMEWORK_API) \
	DECLARE_SERIALIZER(UStaticMeshBackedTarget)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_StaticMeshBackedTarget_h_16_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_StaticMeshBackedTarget_h_16_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_StaticMeshBackedTarget_h_16_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_StaticMeshBackedTarget_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IStaticMeshBackedTarget() {} \
public: \
	typedef UStaticMeshBackedTarget UClassType; \
	typedef IStaticMeshBackedTarget ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_StaticMeshBackedTarget_h_13_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_StaticMeshBackedTarget_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_StaticMeshBackedTarget_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<class UStaticMeshBackedTarget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_StaticMeshBackedTarget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
