// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Roles/LiveLinkInputDeviceRole.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LIVELINKINTERFACE_LiveLinkInputDeviceRole_generated_h
#error "LiveLinkInputDeviceRole.generated.h already included, missing '#pragma once' in LiveLinkInputDeviceRole.h"
#endif
#define LIVELINKINTERFACE_LiveLinkInputDeviceRole_generated_h

#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkInputDeviceRole_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkInputDeviceRole(); \
	friend struct Z_Construct_UClass_ULiveLinkInputDeviceRole_Statics; \
public: \
	DECLARE_CLASS(ULiveLinkInputDeviceRole, ULiveLinkBasicRole, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLinkInterface"), NO_API) \
	DECLARE_SERIALIZER(ULiveLinkInputDeviceRole)


#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkInputDeviceRole_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULiveLinkInputDeviceRole(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULiveLinkInputDeviceRole(ULiveLinkInputDeviceRole&&); \
	ULiveLinkInputDeviceRole(const ULiveLinkInputDeviceRole&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkInputDeviceRole); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkInputDeviceRole); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkInputDeviceRole) \
	NO_API virtual ~ULiveLinkInputDeviceRole();


#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkInputDeviceRole_h_16_PROLOG
#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkInputDeviceRole_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkInputDeviceRole_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkInputDeviceRole_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIVELINKINTERFACE_API UClass* StaticClass<class ULiveLinkInputDeviceRole>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkInputDeviceRole_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
