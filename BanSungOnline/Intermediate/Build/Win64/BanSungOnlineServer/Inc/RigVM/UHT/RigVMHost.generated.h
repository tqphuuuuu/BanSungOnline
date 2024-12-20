// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMHost.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class URigVM;
class URigVMHost;
struct FRigVMExtendedExecuteContext;
#ifdef RIGVM_RigVMHost_generated_h
#error "RigVMHost.generated.h already included, missing '#pragma once' in RigVMHost.h"
#endif
#define RIGVM_RigVMHost_generated_h

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMHost_h_26_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetExtendedExecuteContext); \
	DECLARE_FUNCTION(execGetVM); \
	DECLARE_FUNCTION(execRemoveRunOnceEvent); \
	DECLARE_FUNCTION(execRequestRunOnceEvent); \
	DECLARE_FUNCTION(execIsInitRequired); \
	DECLARE_FUNCTION(execRequestInit); \
	DECLARE_FUNCTION(execExecuteEvent); \
	DECLARE_FUNCTION(execGetSupportedEvents); \
	DECLARE_FUNCTION(execSupportsEvent); \
	DECLARE_FUNCTION(execExecute); \
	DECLARE_FUNCTION(execSetVariableFromString); \
	DECLARE_FUNCTION(execGetVariableAsString); \
	DECLARE_FUNCTION(execGetVariableType); \
	DECLARE_FUNCTION(execGetScriptAccessibleVariables); \
	DECLARE_FUNCTION(execCanExecute); \
	DECLARE_FUNCTION(execGetCurrentFramesPerSecond); \
	DECLARE_FUNCTION(execSetFramesPerSecond); \
	DECLARE_FUNCTION(execSetAbsoluteAndDeltaTime); \
	DECLARE_FUNCTION(execSetAbsoluteTime); \
	DECLARE_FUNCTION(execSetDeltaTime); \
	DECLARE_FUNCTION(execGetDeltaTime); \
	DECLARE_FUNCTION(execGetAbsoluteTime); \
	DECLARE_FUNCTION(execFindRigVMHosts);


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMHost_h_26_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(URigVMHost, NO_API)


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMHost_h_26_INCLASS \
private: \
	static void StaticRegisterNativesURigVMHost(); \
	friend struct Z_Construct_UClass_URigVMHost_Statics; \
public: \
	DECLARE_CLASS(URigVMHost, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/RigVM"), NO_API) \
	DECLARE_SERIALIZER(URigVMHost) \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMHost_h_26_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<URigVMHost*>(this); }


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMHost_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URigVMHost(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URigVMHost) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URigVMHost); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigVMHost); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URigVMHost(URigVMHost&&); \
	URigVMHost(const URigVMHost&); \
public: \
	NO_API virtual ~URigVMHost();


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMHost_h_23_PROLOG
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMHost_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMHost_h_26_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMHost_h_26_INCLASS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMHost_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RIGVM_API UClass* StaticClass<class URigVMHost>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMHost_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
