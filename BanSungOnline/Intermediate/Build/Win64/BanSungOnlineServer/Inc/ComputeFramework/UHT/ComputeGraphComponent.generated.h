// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ComputeFramework/ComputeGraphComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef COMPUTEFRAMEWORK_ComputeGraphComponent_generated_h
#error "ComputeGraphComponent.generated.h already included, missing '#pragma once' in ComputeGraphComponent.h"
#endif
#define COMPUTEFRAMEWORK_ComputeGraphComponent_generated_h

#define FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeGraphComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execQueueExecute); \
	DECLARE_FUNCTION(execDestroyDataProviders); \
	DECLARE_FUNCTION(execCreateDataProviders);


#define FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeGraphComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUComputeGraphComponent(); \
	friend struct Z_Construct_UClass_UComputeGraphComponent_Statics; \
public: \
	DECLARE_CLASS(UComputeGraphComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ComputeFramework"), NO_API) \
	DECLARE_SERIALIZER(UComputeGraphComponent)


#define FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeGraphComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UComputeGraphComponent(UComputeGraphComponent&&); \
	UComputeGraphComponent(const UComputeGraphComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UComputeGraphComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComputeGraphComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UComputeGraphComponent)


#define FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeGraphComponent_h_15_PROLOG
#define FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeGraphComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeGraphComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeGraphComponent_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeGraphComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMPUTEFRAMEWORK_API UClass* StaticClass<class UComputeGraphComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeGraphComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
