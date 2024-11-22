// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OnlineServicesEngineInterfaceImpl.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ONLINESUBSYSTEMUTILS_OnlineServicesEngineInterfaceImpl_generated_h
#error "OnlineServicesEngineInterfaceImpl.generated.h already included, missing '#pragma once' in OnlineServicesEngineInterfaceImpl.h"
#endif
#define ONLINESUBSYSTEMUTILS_OnlineServicesEngineInterfaceImpl_generated_h

#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_OnlineServicesEngineInterfaceImpl_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUOnlineServicesEngineInterfaceImpl(); \
	friend struct Z_Construct_UClass_UOnlineServicesEngineInterfaceImpl_Statics; \
public: \
	DECLARE_CLASS(UOnlineServicesEngineInterfaceImpl, UOnlineEngineInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), NO_API) \
	DECLARE_SERIALIZER(UOnlineServicesEngineInterfaceImpl)


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_OnlineServicesEngineInterfaceImpl_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineServicesEngineInterfaceImpl(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineServicesEngineInterfaceImpl) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineServicesEngineInterfaceImpl); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineServicesEngineInterfaceImpl); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOnlineServicesEngineInterfaceImpl(UOnlineServicesEngineInterfaceImpl&&); \
	UOnlineServicesEngineInterfaceImpl(const UOnlineServicesEngineInterfaceImpl&); \
public: \
	NO_API virtual ~UOnlineServicesEngineInterfaceImpl();


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_OnlineServicesEngineInterfaceImpl_h_18_PROLOG
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_OnlineServicesEngineInterfaceImpl_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_OnlineServicesEngineInterfaceImpl_h_21_INCLASS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_OnlineServicesEngineInterfaceImpl_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<class UOnlineServicesEngineInterfaceImpl>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_OnlineServicesEngineInterfaceImpl_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS