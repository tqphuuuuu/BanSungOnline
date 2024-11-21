// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/DemoNetDriver.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_DemoNetDriver_generated_h
#error "DemoNetDriver.generated.h already included, missing '#pragma once' in DemoNetDriver.h"
#endif
#define ENGINE_DemoNetDriver_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DemoNetDriver_h_69_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FRollbackNetStartupActorInfo>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DemoNetDriver_h_137_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMulticastRecordOptions_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FMulticastRecordOptions>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DemoNetDriver_h_155_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UDemoNetDriver, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DemoNetDriver_h_155_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDemoNetDriver(); \
	friend struct Z_Construct_UClass_UDemoNetDriver_Statics; \
public: \
	DECLARE_CLASS(UDemoNetDriver, UNetDriver, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UDemoNetDriver) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DemoNetDriver_h_155_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DemoNetDriver_h_155_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDemoNetDriver(UDemoNetDriver&&); \
	UDemoNetDriver(const UDemoNetDriver&); \
public: \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDemoNetDriver); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDemoNetDriver)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DemoNetDriver_h_152_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DemoNetDriver_h_155_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DemoNetDriver_h_155_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DemoNetDriver_h_155_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UDemoNetDriver>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_DemoNetDriver_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
