// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Kismet/KismetRenderingLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCanvas;
class UMaterialInterface;
class UObject;
class UPrimitiveComponent;
class UTexture2D;
class UTexture2DArray;
class UTextureCube;
class UTextureRenderTarget2D;
class UTextureRenderTarget2DArray;
class UTextureRenderTargetCube;
class UTextureRenderTargetVolume;
class UVolumeTexture;
struct FColor;
struct FDrawToRenderTargetContext;
struct FLinearColor;
struct FMinimalViewInfo;
struct FSkelMeshSkinWeightInfo;
#ifdef ENGINE_KismetRenderingLibrary_generated_h
#error "KismetRenderingLibrary.generated.h already included, missing '#pragma once' in KismetRenderingLibrary.h"
#endif
#define ENGINE_KismetRenderingLibrary_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetRenderingLibrary_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDrawToRenderTargetContext_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FDrawToRenderTargetContext>();

#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetRenderingLibrary_h_35_RPC_WRAPPERS \
	DECLARE_FUNCTION(execRefreshPathTracingOutput); \
	DECLARE_FUNCTION(execEnablePathTracing); \
	DECLARE_FUNCTION(execCalculateProjectionMatrix); \
	DECLARE_FUNCTION(execSetCastInsetShadowForAllAttachments); \
	DECLARE_FUNCTION(execBreakSkinWeightInfo); \
	DECLARE_FUNCTION(execMakeSkinWeightInfo); \
	DECLARE_FUNCTION(execEndDrawCanvasToRenderTarget); \
	DECLARE_FUNCTION(execBeginDrawCanvasToRenderTarget); \
	DECLARE_FUNCTION(execImportBufferAsTexture2D); \
	DECLARE_FUNCTION(execImportFileAsTexture2D); \
	DECLARE_FUNCTION(execExportTexture2D); \
	DECLARE_FUNCTION(execReadRenderTargetRawUVArea); \
	DECLARE_FUNCTION(execReadRenderTargetRaw); \
	DECLARE_FUNCTION(execReadRenderTargetRawUV); \
	DECLARE_FUNCTION(execReadRenderTargetRawPixelArea); \
	DECLARE_FUNCTION(execReadRenderTargetRawPixel); \
	DECLARE_FUNCTION(execReadRenderTarget); \
	DECLARE_FUNCTION(execReadRenderTargetUV); \
	DECLARE_FUNCTION(execReadRenderTargetPixel); \
	DECLARE_FUNCTION(execExportRenderTarget); \
	DECLARE_FUNCTION(execConvertRenderTargetToTextureVolumeEditorOnly); \
	DECLARE_FUNCTION(execConvertRenderTargetToTextureCubeEditorOnly); \
	DECLARE_FUNCTION(execConvertRenderTargetToTexture2DArrayEditorOnly); \
	DECLARE_FUNCTION(execConvertRenderTargetToTexture2DEditorOnly); \
	DECLARE_FUNCTION(execRenderTargetCreateStaticVolumeTextureEditorOnly); \
	DECLARE_FUNCTION(execRenderTargetCreateStaticTextureCubeEditorOnly); \
	DECLARE_FUNCTION(execRenderTargetCreateStaticTexture2DArrayEditorOnly); \
	DECLARE_FUNCTION(execRenderTargetCreateStaticTexture2DEditorOnly); \
	DECLARE_FUNCTION(execDrawMaterialToRenderTarget); \
	DECLARE_FUNCTION(execResizeRenderTarget2D); \
	DECLARE_FUNCTION(execReleaseRenderTarget2D); \
	DECLARE_FUNCTION(execCreateRenderTargetVolume); \
	DECLARE_FUNCTION(execCreateRenderTarget2DArray); \
	DECLARE_FUNCTION(execCreateRenderTarget2D); \
	DECLARE_FUNCTION(execClearRenderTarget2D);


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetRenderingLibrary_h_35_INCLASS \
private: \
	static void StaticRegisterNativesUKismetRenderingLibrary(); \
	friend struct Z_Construct_UClass_UKismetRenderingLibrary_Statics; \
public: \
	DECLARE_CLASS(UKismetRenderingLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UKismetRenderingLibrary)


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetRenderingLibrary_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UKismetRenderingLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKismetRenderingLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UKismetRenderingLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKismetRenderingLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UKismetRenderingLibrary(UKismetRenderingLibrary&&); \
	UKismetRenderingLibrary(const UKismetRenderingLibrary&); \
public: \
	ENGINE_API virtual ~UKismetRenderingLibrary();


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetRenderingLibrary_h_32_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetRenderingLibrary_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetRenderingLibrary_h_35_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetRenderingLibrary_h_35_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetRenderingLibrary_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UKismetRenderingLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetRenderingLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
