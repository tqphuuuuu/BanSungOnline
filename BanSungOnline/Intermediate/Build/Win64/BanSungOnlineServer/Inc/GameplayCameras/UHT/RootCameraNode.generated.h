// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/RootCameraNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYCAMERAS_RootCameraNode_generated_h
#error "RootCameraNode.generated.h already included, missing '#pragma once' in RootCameraNode.h"
#endif
#define GAMEPLAYCAMERAS_RootCameraNode_generated_h

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_RootCameraNode_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURootCameraNode(); \
	friend struct Z_Construct_UClass_URootCameraNode_Statics; \
public: \
	DECLARE_CLASS(URootCameraNode, UCameraNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/GameplayCameras"), GAMEPLAYCAMERAS_API) \
	DECLARE_SERIALIZER(URootCameraNode)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_RootCameraNode_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYCAMERAS_API URootCameraNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URootCameraNode(URootCameraNode&&); \
	URootCameraNode(const URootCameraNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYCAMERAS_API, URootCameraNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URootCameraNode); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URootCameraNode) \
	GAMEPLAYCAMERAS_API virtual ~URootCameraNode();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_RootCameraNode_h_30_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_RootCameraNode_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_RootCameraNode_h_33_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_RootCameraNode_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYCAMERAS_API UClass* StaticClass<class URootCameraNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_RootCameraNode_h


#define FOREACH_ENUM_ECAMERARIGLAYER(op) \
	op(ECameraRigLayer::Base) \
	op(ECameraRigLayer::Main) \
	op(ECameraRigLayer::Global) \
	op(ECameraRigLayer::Visual) 

enum class ECameraRigLayer : uint8;
template<> struct TIsUEnumClass<ECameraRigLayer> { enum { Value = true }; };
template<> GAMEPLAYCAMERAS_API UEnum* StaticEnum<ECameraRigLayer>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
