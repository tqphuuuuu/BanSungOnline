// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paper2D/Classes/PaperTileMapComponent.h"
#include "Paper2D/Classes/PaperTileLayer.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperTileMapComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMeshComponent();
PAPER2D_API UClass* Z_Construct_UClass_UPaperTileLayer_NoRegister();
PAPER2D_API UClass* Z_Construct_UClass_UPaperTileMap_NoRegister();
PAPER2D_API UClass* Z_Construct_UClass_UPaperTileMapComponent();
PAPER2D_API UClass* Z_Construct_UClass_UPaperTileMapComponent_NoRegister();
PAPER2D_API UClass* Z_Construct_UClass_UPaperTileSet_NoRegister();
PAPER2D_API UScriptStruct* Z_Construct_UScriptStruct_FPaperTileInfo();
UPackage* Z_Construct_UPackage__Script_Paper2D();
// End Cross Module References

// Begin Class UPaperTileMapComponent Function AddNewLayer
struct Z_Construct_UFunction_UPaperTileMapComponent_AddNewLayer_Statics
{
	struct PaperTileMapComponent_eventAddNewLayer_Parms
	{
		UPaperTileLayer* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Creates and adds a new layer to the tile map\n// Note: This will only work on components that own their own tile map (OwnsTileMap returns true), you cannot modify standalone tile map assets\n" },
		{ "ModuleRelativePath", "Classes/PaperTileMapComponent.h" },
		{ "ToolTip", "Creates and adds a new layer to the tile map\nNote: This will only work on components that own their own tile map (OwnsTileMap returns true), you cannot modify standalone tile map assets" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_AddNewLayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperTileMapComponent_eventAddNewLayer_Parms, ReturnValue), Z_Construct_UClass_UPaperTileLayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperTileMapComponent_AddNewLayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_AddNewLayer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_AddNewLayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperTileMapComponent_AddNewLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperTileMapComponent, nullptr, "AddNewLayer", nullptr, nullptr, Z_Construct_UFunction_UPaperTileMapComponent_AddNewLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_AddNewLayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPaperTileMapComponent_AddNewLayer_Statics::PaperTileMapComponent_eventAddNewLayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_AddNewLayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPaperTileMapComponent_AddNewLayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPaperTileMapComponent_AddNewLayer_Statics::PaperTileMapComponent_eventAddNewLayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPaperTileMapComponent_AddNewLayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPaperTileMapComponent_AddNewLayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPaperTileMapComponent::execAddNewLayer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPaperTileLayer**)Z_Param__Result=P_THIS->AddNewLayer();
	P_NATIVE_END;
}
// End Class UPaperTileMapComponent Function AddNewLayer

// Begin Class UPaperTileMapComponent Function CreateNewTileMap
struct Z_Construct_UFunction_UPaperTileMapComponent_CreateNewTileMap_Statics
{
	struct PaperTileMapComponent_eventCreateNewTileMap_Parms
	{
		int32 MapWidth;
		int32 MapHeight;
		int32 TileWidth;
		int32 TileHeight;
		float PixelsPerUnrealUnit;
		bool bCreateLayer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sprite" },
		{ "Comment", "/**\n\x09 * Creates a new tile map of the specified size, replacing the TileMap reference (or dropping the previous owned one)\n\x09 *\n\x09 * @param MapWidth Width of the map (in tiles)\n\x09 * @param MapHeight Height of the map (in tiles)\n\x09 * @param TileWidth Width of one tile (in pixels)\n\x09 * @param TileHeight Height of one tile (in pixels)\n\x09 * @param bCreateLayer Should an empty layer be created?\n\x09 */" },
		{ "CPP_Default_bCreateLayer", "true" },
		{ "CPP_Default_MapHeight", "4" },
		{ "CPP_Default_MapWidth", "4" },
		{ "CPP_Default_PixelsPerUnrealUnit", "1.000000" },
		{ "CPP_Default_TileHeight", "32" },
		{ "CPP_Default_TileWidth", "32" },
		{ "ModuleRelativePath", "Classes/PaperTileMapComponent.h" },
		{ "ToolTip", "Creates a new tile map of the specified size, replacing the TileMap reference (or dropping the previous owned one)\n\n@param MapWidth Width of the map (in tiles)\n@param MapHeight Height of the map (in tiles)\n@param TileWidth Width of one tile (in pixels)\n@param TileHeight Height of one tile (in pixels)\n@param bCreateLayer Should an empty layer be created?" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MapWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MapHeight;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TileWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TileHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PixelsPerUnrealUnit;
	static void NewProp_bCreateLayer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateLayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_CreateNewTileMap_Statics::NewProp_MapWidth = { "MapWidth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperTileMapComponent_eventCreateNewTileMap_Parms, MapWidth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_CreateNewTileMap_Statics::NewProp_MapHeight = { "MapHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperTileMapComponent_eventCreateNewTileMap_Parms, MapHeight), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_CreateNewTileMap_Statics::NewProp_TileWidth = { "TileWidth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperTileMapComponent_eventCreateNewTileMap_Parms, TileWidth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_CreateNewTileMap_Statics::NewProp_TileHeight = { "TileHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperTileMapComponent_eventCreateNewTileMap_Parms, TileHeight), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_CreateNewTileMap_Statics::NewProp_PixelsPerUnrealUnit = { "PixelsPerUnrealUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperTileMapComponent_eventCreateNewTileMap_Parms, PixelsPerUnrealUnit), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPaperTileMapComponent_CreateNewTileMap_Statics::NewProp_bCreateLayer_SetBit(void* Obj)
{
	((PaperTileMapComponent_eventCreateNewTileMap_Parms*)Obj)->bCreateLayer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_CreateNewTileMap_Statics::NewProp_bCreateLayer = { "bCreateLayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PaperTileMapComponent_eventCreateNewTileMap_Parms), &Z_Construct_UFunction_UPaperTileMapComponent_CreateNewTileMap_Statics::NewProp_bCreateLayer_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperTileMapComponent_CreateNewTileMap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_CreateNewTileMap_Statics::NewProp_MapWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_CreateNewTileMap_Statics::NewProp_MapHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_CreateNewTileMap_Statics::NewProp_TileWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_CreateNewTileMap_Statics::NewProp_TileHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_CreateNewTileMap_Statics::NewProp_PixelsPerUnrealUnit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_CreateNewTileMap_Statics::NewProp_bCreateLayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_CreateNewTileMap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperTileMapComponent_CreateNewTileMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperTileMapComponent, nullptr, "CreateNewTileMap", nullptr, nullptr, Z_Construct_UFunction_UPaperTileMapComponent_CreateNewTileMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_CreateNewTileMap_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPaperTileMapComponent_CreateNewTileMap_Statics::PaperTileMapComponent_eventCreateNewTileMap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_CreateNewTileMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPaperTileMapComponent_CreateNewTileMap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPaperTileMapComponent_CreateNewTileMap_Statics::PaperTileMapComponent_eventCreateNewTileMap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPaperTileMapComponent_CreateNewTileMap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPaperTileMapComponent_CreateNewTileMap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPaperTileMapComponent::execCreateNewTileMap)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_MapWidth);
	P_GET_PROPERTY(FIntProperty,Z_Param_MapHeight);
	P_GET_PROPERTY(FIntProperty,Z_Param_TileWidth);
	P_GET_PROPERTY(FIntProperty,Z_Param_TileHeight);
	P_GET_PROPERTY(FFloatProperty,Z_Param_PixelsPerUnrealUnit);
	P_GET_UBOOL(Z_Param_bCreateLayer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateNewTileMap(Z_Param_MapWidth,Z_Param_MapHeight,Z_Param_TileWidth,Z_Param_TileHeight,Z_Param_PixelsPerUnrealUnit,Z_Param_bCreateLayer);
	P_NATIVE_END;
}
// End Class UPaperTileMapComponent Function CreateNewTileMap

// Begin Class UPaperTileMapComponent Function GetLayerColor
struct Z_Construct_UFunction_UPaperTileMapComponent_GetLayerColor_Statics
{
	struct PaperTileMapComponent_eventGetLayerColor_Parms
	{
		int32 Layer;
		FLinearColor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Gets the per-layer color multiplier for a specific layer (multiplied with the tile map color and passed to the material as a vertex color)\n" },
		{ "CPP_Default_Layer", "0" },
		{ "ModuleRelativePath", "Classes/PaperTileMapComponent.h" },
		{ "ToolTip", "Gets the per-layer color multiplier for a specific layer (multiplied with the tile map color and passed to the material as a vertex color)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Layer;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_GetLayerColor_Statics::NewProp_Layer = { "Layer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperTileMapComponent_eventGetLayerColor_Parms, Layer), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_GetLayerColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperTileMapComponent_eventGetLayerColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperTileMapComponent_GetLayerColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_GetLayerColor_Statics::NewProp_Layer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_GetLayerColor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_GetLayerColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperTileMapComponent_GetLayerColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperTileMapComponent, nullptr, "GetLayerColor", nullptr, nullptr, Z_Construct_UFunction_UPaperTileMapComponent_GetLayerColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_GetLayerColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPaperTileMapComponent_GetLayerColor_Statics::PaperTileMapComponent_eventGetLayerColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_GetLayerColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPaperTileMapComponent_GetLayerColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPaperTileMapComponent_GetLayerColor_Statics::PaperTileMapComponent_eventGetLayerColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPaperTileMapComponent_GetLayerColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPaperTileMapComponent_GetLayerColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPaperTileMapComponent::execGetLayerColor)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Layer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLinearColor*)Z_Param__Result=P_THIS->GetLayerColor(Z_Param_Layer);
	P_NATIVE_END;
}
// End Class UPaperTileMapComponent Function GetLayerColor

// Begin Class UPaperTileMapComponent Function GetMapSize
struct Z_Construct_UFunction_UPaperTileMapComponent_GetMapSize_Statics
{
	struct PaperTileMapComponent_eventGetMapSize_Parms
	{
		int32 MapWidth;
		int32 MapHeight;
		int32 NumLayers;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Returns the size of the tile map\n" },
		{ "ModuleRelativePath", "Classes/PaperTileMapComponent.h" },
		{ "ToolTip", "Returns the size of the tile map" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MapWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MapHeight;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumLayers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_GetMapSize_Statics::NewProp_MapWidth = { "MapWidth", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperTileMapComponent_eventGetMapSize_Parms, MapWidth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_GetMapSize_Statics::NewProp_MapHeight = { "MapHeight", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperTileMapComponent_eventGetMapSize_Parms, MapHeight), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_GetMapSize_Statics::NewProp_NumLayers = { "NumLayers", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperTileMapComponent_eventGetMapSize_Parms, NumLayers), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperTileMapComponent_GetMapSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_GetMapSize_Statics::NewProp_MapWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_GetMapSize_Statics::NewProp_MapHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_GetMapSize_Statics::NewProp_NumLayers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_GetMapSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperTileMapComponent_GetMapSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperTileMapComponent, nullptr, "GetMapSize", nullptr, nullptr, Z_Construct_UFunction_UPaperTileMapComponent_GetMapSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_GetMapSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPaperTileMapComponent_GetMapSize_Statics::PaperTileMapComponent_eventGetMapSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_GetMapSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPaperTileMapComponent_GetMapSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPaperTileMapComponent_GetMapSize_Statics::PaperTileMapComponent_eventGetMapSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPaperTileMapComponent_GetMapSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPaperTileMapComponent_GetMapSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPaperTileMapComponent::execGetMapSize)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_MapWidth);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_MapHeight);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_NumLayers);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMapSize(Z_Param_Out_MapWidth,Z_Param_Out_MapHeight,Z_Param_Out_NumLayers);
	P_NATIVE_END;
}
// End Class UPaperTileMapComponent Function GetMapSize

// Begin Class UPaperTileMapComponent Function GetTile
struct Z_Construct_UFunction_UPaperTileMapComponent_GetTile_Statics
{
	struct PaperTileMapComponent_eventGetTile_Parms
	{
		int32 X;
		int32 Y;
		int32 Layer;
		FPaperTileInfo ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Returns the contents of a specified tile cell\n" },
		{ "Layer", "0" },
		{ "ModuleRelativePath", "Classes/PaperTileMapComponent.h" },
		{ "ToolTip", "Returns the contents of a specified tile cell" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_X;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Layer;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_GetTile_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperTileMapComponent_eventGetTile_Parms, X), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_GetTile_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperTileMapComponent_eventGetTile_Parms, Y), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_GetTile_Statics::NewProp_Layer = { "Layer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperTileMapComponent_eventGetTile_Parms, Layer), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_GetTile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperTileMapComponent_eventGetTile_Parms, ReturnValue), Z_Construct_UScriptStruct_FPaperTileInfo, METADATA_PARAMS(0, nullptr) }; // 3247895172
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperTileMapComponent_GetTile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_GetTile_Statics::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_GetTile_Statics::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_GetTile_Statics::NewProp_Layer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_GetTile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_GetTile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperTileMapComponent_GetTile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperTileMapComponent, nullptr, "GetTile", nullptr, nullptr, Z_Construct_UFunction_UPaperTileMapComponent_GetTile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_GetTile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPaperTileMapComponent_GetTile_Statics::PaperTileMapComponent_eventGetTile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_GetTile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPaperTileMapComponent_GetTile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPaperTileMapComponent_GetTile_Statics::PaperTileMapComponent_eventGetTile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPaperTileMapComponent_GetTile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPaperTileMapComponent_GetTile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPaperTileMapComponent::execGetTile)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_X);
	P_GET_PROPERTY(FIntProperty,Z_Param_Y);
	P_GET_PROPERTY(FIntProperty,Z_Param_Layer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FPaperTileInfo*)Z_Param__Result=P_THIS->GetTile(Z_Param_X,Z_Param_Y,Z_Param_Layer);
	P_NATIVE_END;
}
// End Class UPaperTileMapComponent Function GetTile

// Begin Class UPaperTileMapComponent Function GetTileCenterPosition
struct Z_Construct_UFunction_UPaperTileMapComponent_GetTileCenterPosition_Statics
{
	struct PaperTileMapComponent_eventGetTileCenterPosition_Parms
	{
		int32 TileX;
		int32 TileY;
		int32 LayerIndex;
		bool bWorldSpace;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Returns the position of the center of the specified tile\n" },
		{ "CPP_Default_bWorldSpace", "false" },
		{ "CPP_Default_LayerIndex", "0" },
		{ "ModuleRelativePath", "Classes/PaperTileMapComponent.h" },
		{ "ToolTip", "Returns the position of the center of the specified tile" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TileX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TileY;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LayerIndex;
	static void NewProp_bWorldSpace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWorldSpace;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_GetTileCenterPosition_Statics::NewProp_TileX = { "TileX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperTileMapComponent_eventGetTileCenterPosition_Parms, TileX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_GetTileCenterPosition_Statics::NewProp_TileY = { "TileY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperTileMapComponent_eventGetTileCenterPosition_Parms, TileY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_GetTileCenterPosition_Statics::NewProp_LayerIndex = { "LayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperTileMapComponent_eventGetTileCenterPosition_Parms, LayerIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPaperTileMapComponent_GetTileCenterPosition_Statics::NewProp_bWorldSpace_SetBit(void* Obj)
{
	((PaperTileMapComponent_eventGetTileCenterPosition_Parms*)Obj)->bWorldSpace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_GetTileCenterPosition_Statics::NewProp_bWorldSpace = { "bWorldSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PaperTileMapComponent_eventGetTileCenterPosition_Parms), &Z_Construct_UFunction_UPaperTileMapComponent_GetTileCenterPosition_Statics::NewProp_bWorldSpace_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_GetTileCenterPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperTileMapComponent_eventGetTileCenterPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperTileMapComponent_GetTileCenterPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_GetTileCenterPosition_Statics::NewProp_TileX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_GetTileCenterPosition_Statics::NewProp_TileY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_GetTileCenterPosition_Statics::NewProp_LayerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_GetTileCenterPosition_Statics::NewProp_bWorldSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_GetTileCenterPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_GetTileCenterPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperTileMapComponent_GetTileCenterPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperTileMapComponent, nullptr, "GetTileCenterPosition", nullptr, nullptr, Z_Construct_UFunction_UPaperTileMapComponent_GetTileCenterPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_GetTileCenterPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPaperTileMapComponent_GetTileCenterPosition_Statics::PaperTileMapComponent_eventGetTileCenterPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_GetTileCenterPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPaperTileMapComponent_GetTileCenterPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPaperTileMapComponent_GetTileCenterPosition_Statics::PaperTileMapComponent_eventGetTileCenterPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPaperTileMapComponent_GetTileCenterPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPaperTileMapComponent_GetTileCenterPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPaperTileMapComponent::execGetTileCenterPosition)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_TileX);
	P_GET_PROPERTY(FIntProperty,Z_Param_TileY);
	P_GET_PROPERTY(FIntProperty,Z_Param_LayerIndex);
	P_GET_UBOOL(Z_Param_bWorldSpace);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetTileCenterPosition(Z_Param_TileX,Z_Param_TileY,Z_Param_LayerIndex,Z_Param_bWorldSpace);
	P_NATIVE_END;
}
// End Class UPaperTileMapComponent Function GetTileCenterPosition

// Begin Class UPaperTileMapComponent Function GetTileCornerPosition
struct Z_Construct_UFunction_UPaperTileMapComponent_GetTileCornerPosition_Statics
{
	struct PaperTileMapComponent_eventGetTileCornerPosition_Parms
	{
		int32 TileX;
		int32 TileY;
		int32 LayerIndex;
		bool bWorldSpace;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Returns the position of the top left corner of the specified tile\n" },
		{ "CPP_Default_bWorldSpace", "false" },
		{ "CPP_Default_LayerIndex", "0" },
		{ "ModuleRelativePath", "Classes/PaperTileMapComponent.h" },
		{ "ToolTip", "Returns the position of the top left corner of the specified tile" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TileX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TileY;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LayerIndex;
	static void NewProp_bWorldSpace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWorldSpace;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_GetTileCornerPosition_Statics::NewProp_TileX = { "TileX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperTileMapComponent_eventGetTileCornerPosition_Parms, TileX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_GetTileCornerPosition_Statics::NewProp_TileY = { "TileY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperTileMapComponent_eventGetTileCornerPosition_Parms, TileY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_GetTileCornerPosition_Statics::NewProp_LayerIndex = { "LayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperTileMapComponent_eventGetTileCornerPosition_Parms, LayerIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPaperTileMapComponent_GetTileCornerPosition_Statics::NewProp_bWorldSpace_SetBit(void* Obj)
{
	((PaperTileMapComponent_eventGetTileCornerPosition_Parms*)Obj)->bWorldSpace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_GetTileCornerPosition_Statics::NewProp_bWorldSpace = { "bWorldSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PaperTileMapComponent_eventGetTileCornerPosition_Parms), &Z_Construct_UFunction_UPaperTileMapComponent_GetTileCornerPosition_Statics::NewProp_bWorldSpace_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_GetTileCornerPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperTileMapComponent_eventGetTileCornerPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperTileMapComponent_GetTileCornerPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_GetTileCornerPosition_Statics::NewProp_TileX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_GetTileCornerPosition_Statics::NewProp_TileY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_GetTileCornerPosition_Statics::NewProp_LayerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_GetTileCornerPosition_Statics::NewProp_bWorldSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_GetTileCornerPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_GetTileCornerPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperTileMapComponent_GetTileCornerPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperTileMapComponent, nullptr, "GetTileCornerPosition", nullptr, nullptr, Z_Construct_UFunction_UPaperTileMapComponent_GetTileCornerPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_GetTileCornerPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPaperTileMapComponent_GetTileCornerPosition_Statics::PaperTileMapComponent_eventGetTileCornerPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_GetTileCornerPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPaperTileMapComponent_GetTileCornerPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPaperTileMapComponent_GetTileCornerPosition_Statics::PaperTileMapComponent_eventGetTileCornerPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPaperTileMapComponent_GetTileCornerPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPaperTileMapComponent_GetTileCornerPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPaperTileMapComponent::execGetTileCornerPosition)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_TileX);
	P_GET_PROPERTY(FIntProperty,Z_Param_TileY);
	P_GET_PROPERTY(FIntProperty,Z_Param_LayerIndex);
	P_GET_UBOOL(Z_Param_bWorldSpace);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetTileCornerPosition(Z_Param_TileX,Z_Param_TileY,Z_Param_LayerIndex,Z_Param_bWorldSpace);
	P_NATIVE_END;
}
// End Class UPaperTileMapComponent Function GetTileCornerPosition

// Begin Class UPaperTileMapComponent Function GetTileMapColor
struct Z_Construct_UFunction_UPaperTileMapComponent_GetTileMapColor_Statics
{
	struct PaperTileMapComponent_eventGetTileMapColor_Parms
	{
		FLinearColor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Gets the tile map global color multiplier (multiplied with the per-layer color and passed to the material as a vertex color)\n" },
		{ "ModuleRelativePath", "Classes/PaperTileMapComponent.h" },
		{ "ToolTip", "Gets the tile map global color multiplier (multiplied with the per-layer color and passed to the material as a vertex color)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_GetTileMapColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperTileMapComponent_eventGetTileMapColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperTileMapComponent_GetTileMapColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_GetTileMapColor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_GetTileMapColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperTileMapComponent_GetTileMapColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperTileMapComponent, nullptr, "GetTileMapColor", nullptr, nullptr, Z_Construct_UFunction_UPaperTileMapComponent_GetTileMapColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_GetTileMapColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPaperTileMapComponent_GetTileMapColor_Statics::PaperTileMapComponent_eventGetTileMapColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_GetTileMapColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPaperTileMapComponent_GetTileMapColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPaperTileMapComponent_GetTileMapColor_Statics::PaperTileMapComponent_eventGetTileMapColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPaperTileMapComponent_GetTileMapColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPaperTileMapComponent_GetTileMapColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPaperTileMapComponent::execGetTileMapColor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLinearColor*)Z_Param__Result=P_THIS->GetTileMapColor();
	P_NATIVE_END;
}
// End Class UPaperTileMapComponent Function GetTileMapColor

// Begin Class UPaperTileMapComponent Function GetTilePolygon
struct Z_Construct_UFunction_UPaperTileMapComponent_GetTilePolygon_Statics
{
	struct PaperTileMapComponent_eventGetTilePolygon_Parms
	{
		int32 TileX;
		int32 TileY;
		TArray<FVector> Points;
		int32 LayerIndex;
		bool bWorldSpace;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Returns the polygon for the specified tile (will be 4 or 6 vertices as a rectangle, diamond, or hexagon)\n" },
		{ "CPP_Default_bWorldSpace", "false" },
		{ "CPP_Default_LayerIndex", "0" },
		{ "ModuleRelativePath", "Classes/PaperTileMapComponent.h" },
		{ "ToolTip", "Returns the polygon for the specified tile (will be 4 or 6 vertices as a rectangle, diamond, or hexagon)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TileX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TileY;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LayerIndex;
	static void NewProp_bWorldSpace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWorldSpace;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_GetTilePolygon_Statics::NewProp_TileX = { "TileX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperTileMapComponent_eventGetTilePolygon_Parms, TileX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_GetTilePolygon_Statics::NewProp_TileY = { "TileY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperTileMapComponent_eventGetTilePolygon_Parms, TileY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_GetTilePolygon_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_GetTilePolygon_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperTileMapComponent_eventGetTilePolygon_Parms, Points), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_GetTilePolygon_Statics::NewProp_LayerIndex = { "LayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperTileMapComponent_eventGetTilePolygon_Parms, LayerIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPaperTileMapComponent_GetTilePolygon_Statics::NewProp_bWorldSpace_SetBit(void* Obj)
{
	((PaperTileMapComponent_eventGetTilePolygon_Parms*)Obj)->bWorldSpace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_GetTilePolygon_Statics::NewProp_bWorldSpace = { "bWorldSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PaperTileMapComponent_eventGetTilePolygon_Parms), &Z_Construct_UFunction_UPaperTileMapComponent_GetTilePolygon_Statics::NewProp_bWorldSpace_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperTileMapComponent_GetTilePolygon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_GetTilePolygon_Statics::NewProp_TileX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_GetTilePolygon_Statics::NewProp_TileY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_GetTilePolygon_Statics::NewProp_Points_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_GetTilePolygon_Statics::NewProp_Points,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_GetTilePolygon_Statics::NewProp_LayerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_GetTilePolygon_Statics::NewProp_bWorldSpace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_GetTilePolygon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperTileMapComponent_GetTilePolygon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperTileMapComponent, nullptr, "GetTilePolygon", nullptr, nullptr, Z_Construct_UFunction_UPaperTileMapComponent_GetTilePolygon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_GetTilePolygon_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPaperTileMapComponent_GetTilePolygon_Statics::PaperTileMapComponent_eventGetTilePolygon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_GetTilePolygon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPaperTileMapComponent_GetTilePolygon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPaperTileMapComponent_GetTilePolygon_Statics::PaperTileMapComponent_eventGetTilePolygon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPaperTileMapComponent_GetTilePolygon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPaperTileMapComponent_GetTilePolygon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPaperTileMapComponent::execGetTilePolygon)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_TileX);
	P_GET_PROPERTY(FIntProperty,Z_Param_TileY);
	P_GET_TARRAY_REF(FVector,Z_Param_Out_Points);
	P_GET_PROPERTY(FIntProperty,Z_Param_LayerIndex);
	P_GET_UBOOL(Z_Param_bWorldSpace);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetTilePolygon(Z_Param_TileX,Z_Param_TileY,Z_Param_Out_Points,Z_Param_LayerIndex,Z_Param_bWorldSpace);
	P_NATIVE_END;
}
// End Class UPaperTileMapComponent Function GetTilePolygon

// Begin Class UPaperTileMapComponent Function MakeTileMapEditable
struct Z_Construct_UFunction_UPaperTileMapComponent_MakeTileMapEditable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Makes the tile map asset pointed to by this component editable.  Nothing happens if it was already instanced, but\n// if the tile map is an asset reference, it is cloned to make a unique instance.\n" },
		{ "ModuleRelativePath", "Classes/PaperTileMapComponent.h" },
		{ "ToolTip", "Makes the tile map asset pointed to by this component editable.  Nothing happens if it was already instanced, but\nif the tile map is an asset reference, it is cloned to make a unique instance." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperTileMapComponent_MakeTileMapEditable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperTileMapComponent, nullptr, "MakeTileMapEditable", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_MakeTileMapEditable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPaperTileMapComponent_MakeTileMapEditable_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPaperTileMapComponent_MakeTileMapEditable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPaperTileMapComponent_MakeTileMapEditable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPaperTileMapComponent::execMakeTileMapEditable)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MakeTileMapEditable();
	P_NATIVE_END;
}
// End Class UPaperTileMapComponent Function MakeTileMapEditable

// Begin Class UPaperTileMapComponent Function OwnsTileMap
struct Z_Construct_UFunction_UPaperTileMapComponent_OwnsTileMap_Statics
{
	struct PaperTileMapComponent_eventOwnsTileMap_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Does this component own the tile map (is it instanced instead of being an asset reference)?\n" },
		{ "ModuleRelativePath", "Classes/PaperTileMapComponent.h" },
		{ "ToolTip", "Does this component own the tile map (is it instanced instead of being an asset reference)?" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UPaperTileMapComponent_OwnsTileMap_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PaperTileMapComponent_eventOwnsTileMap_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_OwnsTileMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PaperTileMapComponent_eventOwnsTileMap_Parms), &Z_Construct_UFunction_UPaperTileMapComponent_OwnsTileMap_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperTileMapComponent_OwnsTileMap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_OwnsTileMap_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_OwnsTileMap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperTileMapComponent_OwnsTileMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperTileMapComponent, nullptr, "OwnsTileMap", nullptr, nullptr, Z_Construct_UFunction_UPaperTileMapComponent_OwnsTileMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_OwnsTileMap_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPaperTileMapComponent_OwnsTileMap_Statics::PaperTileMapComponent_eventOwnsTileMap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_OwnsTileMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPaperTileMapComponent_OwnsTileMap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPaperTileMapComponent_OwnsTileMap_Statics::PaperTileMapComponent_eventOwnsTileMap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPaperTileMapComponent_OwnsTileMap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPaperTileMapComponent_OwnsTileMap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPaperTileMapComponent::execOwnsTileMap)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->OwnsTileMap();
	P_NATIVE_END;
}
// End Class UPaperTileMapComponent Function OwnsTileMap

// Begin Class UPaperTileMapComponent Function RebuildCollision
struct Z_Construct_UFunction_UPaperTileMapComponent_RebuildCollision_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Rebuilds collision for the tile map\n" },
		{ "ModuleRelativePath", "Classes/PaperTileMapComponent.h" },
		{ "ToolTip", "Rebuilds collision for the tile map" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperTileMapComponent_RebuildCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperTileMapComponent, nullptr, "RebuildCollision", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_RebuildCollision_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPaperTileMapComponent_RebuildCollision_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPaperTileMapComponent_RebuildCollision()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPaperTileMapComponent_RebuildCollision_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPaperTileMapComponent::execRebuildCollision)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RebuildCollision();
	P_NATIVE_END;
}
// End Class UPaperTileMapComponent Function RebuildCollision

// Begin Class UPaperTileMapComponent Function ResizeMap
struct Z_Construct_UFunction_UPaperTileMapComponent_ResizeMap_Statics
{
	struct PaperTileMapComponent_eventResizeMap_Parms
	{
		int32 NewWidthInTiles;
		int32 NewHeightInTiles;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Resizes the tile map (Note: This will only work on components that own their own tile map (OwnsTileMap returns true), you cannot modify standalone tile map assets) \n" },
		{ "ModuleRelativePath", "Classes/PaperTileMapComponent.h" },
		{ "ToolTip", "Resizes the tile map (Note: This will only work on components that own their own tile map (OwnsTileMap returns true), you cannot modify standalone tile map assets)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewWidthInTiles;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewHeightInTiles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_ResizeMap_Statics::NewProp_NewWidthInTiles = { "NewWidthInTiles", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperTileMapComponent_eventResizeMap_Parms, NewWidthInTiles), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_ResizeMap_Statics::NewProp_NewHeightInTiles = { "NewHeightInTiles", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperTileMapComponent_eventResizeMap_Parms, NewHeightInTiles), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperTileMapComponent_ResizeMap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_ResizeMap_Statics::NewProp_NewWidthInTiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_ResizeMap_Statics::NewProp_NewHeightInTiles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_ResizeMap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperTileMapComponent_ResizeMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperTileMapComponent, nullptr, "ResizeMap", nullptr, nullptr, Z_Construct_UFunction_UPaperTileMapComponent_ResizeMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_ResizeMap_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPaperTileMapComponent_ResizeMap_Statics::PaperTileMapComponent_eventResizeMap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_ResizeMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPaperTileMapComponent_ResizeMap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPaperTileMapComponent_ResizeMap_Statics::PaperTileMapComponent_eventResizeMap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPaperTileMapComponent_ResizeMap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPaperTileMapComponent_ResizeMap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPaperTileMapComponent::execResizeMap)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewWidthInTiles);
	P_GET_PROPERTY(FIntProperty,Z_Param_NewHeightInTiles);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResizeMap(Z_Param_NewWidthInTiles,Z_Param_NewHeightInTiles);
	P_NATIVE_END;
}
// End Class UPaperTileMapComponent Function ResizeMap

// Begin Class UPaperTileMapComponent Function SetDefaultCollisionThickness
struct Z_Construct_UFunction_UPaperTileMapComponent_SetDefaultCollisionThickness_Statics
{
	struct PaperTileMapComponent_eventSetDefaultCollisionThickness_Parms
	{
		float Thickness;
		bool bRebuildCollision;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Sets the default thickness for any layers that don't override the collision thickness\n// Note: This will only work on components that own their own tile map (OwnsTileMap returns true), you cannot modify standalone tile map assets\n" },
		{ "CPP_Default_bRebuildCollision", "true" },
		{ "ModuleRelativePath", "Classes/PaperTileMapComponent.h" },
		{ "ToolTip", "Sets the default thickness for any layers that don't override the collision thickness\nNote: This will only work on components that own their own tile map (OwnsTileMap returns true), you cannot modify standalone tile map assets" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
	static void NewProp_bRebuildCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRebuildCollision;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_SetDefaultCollisionThickness_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperTileMapComponent_eventSetDefaultCollisionThickness_Parms, Thickness), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPaperTileMapComponent_SetDefaultCollisionThickness_Statics::NewProp_bRebuildCollision_SetBit(void* Obj)
{
	((PaperTileMapComponent_eventSetDefaultCollisionThickness_Parms*)Obj)->bRebuildCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_SetDefaultCollisionThickness_Statics::NewProp_bRebuildCollision = { "bRebuildCollision", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PaperTileMapComponent_eventSetDefaultCollisionThickness_Parms), &Z_Construct_UFunction_UPaperTileMapComponent_SetDefaultCollisionThickness_Statics::NewProp_bRebuildCollision_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperTileMapComponent_SetDefaultCollisionThickness_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_SetDefaultCollisionThickness_Statics::NewProp_Thickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_SetDefaultCollisionThickness_Statics::NewProp_bRebuildCollision,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_SetDefaultCollisionThickness_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperTileMapComponent_SetDefaultCollisionThickness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperTileMapComponent, nullptr, "SetDefaultCollisionThickness", nullptr, nullptr, Z_Construct_UFunction_UPaperTileMapComponent_SetDefaultCollisionThickness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_SetDefaultCollisionThickness_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPaperTileMapComponent_SetDefaultCollisionThickness_Statics::PaperTileMapComponent_eventSetDefaultCollisionThickness_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_SetDefaultCollisionThickness_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPaperTileMapComponent_SetDefaultCollisionThickness_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPaperTileMapComponent_SetDefaultCollisionThickness_Statics::PaperTileMapComponent_eventSetDefaultCollisionThickness_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPaperTileMapComponent_SetDefaultCollisionThickness()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPaperTileMapComponent_SetDefaultCollisionThickness_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPaperTileMapComponent::execSetDefaultCollisionThickness)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Thickness);
	P_GET_UBOOL(Z_Param_bRebuildCollision);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDefaultCollisionThickness(Z_Param_Thickness,Z_Param_bRebuildCollision);
	P_NATIVE_END;
}
// End Class UPaperTileMapComponent Function SetDefaultCollisionThickness

// Begin Class UPaperTileMapComponent Function SetLayerCollision
struct Z_Construct_UFunction_UPaperTileMapComponent_SetLayerCollision_Statics
{
	struct PaperTileMapComponent_eventSetLayerCollision_Parms
	{
		int32 Layer;
		bool bHasCollision;
		bool bOverrideThickness;
		float CustomThickness;
		bool bOverrideOffset;
		float CustomOffset;
		bool bRebuildCollision;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Sets the collision thickness for a specific layer\n// Note: This will only work on components that own their own tile map (OwnsTileMap returns true), you cannot modify standalone tile map assets\n" },
		{ "CPP_Default_bHasCollision", "true" },
		{ "CPP_Default_bOverrideOffset", "false" },
		{ "CPP_Default_bOverrideThickness", "true" },
		{ "CPP_Default_bRebuildCollision", "true" },
		{ "CPP_Default_CustomOffset", "0.000000" },
		{ "CPP_Default_CustomThickness", "50.000000" },
		{ "CPP_Default_Layer", "0" },
		{ "ModuleRelativePath", "Classes/PaperTileMapComponent.h" },
		{ "ToolTip", "Sets the collision thickness for a specific layer\nNote: This will only work on components that own their own tile map (OwnsTileMap returns true), you cannot modify standalone tile map assets" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Layer;
	static void NewProp_bHasCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasCollision;
	static void NewProp_bOverrideThickness_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideThickness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CustomThickness;
	static void NewProp_bOverrideOffset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CustomOffset;
	static void NewProp_bRebuildCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRebuildCollision;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_SetLayerCollision_Statics::NewProp_Layer = { "Layer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperTileMapComponent_eventSetLayerCollision_Parms, Layer), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPaperTileMapComponent_SetLayerCollision_Statics::NewProp_bHasCollision_SetBit(void* Obj)
{
	((PaperTileMapComponent_eventSetLayerCollision_Parms*)Obj)->bHasCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_SetLayerCollision_Statics::NewProp_bHasCollision = { "bHasCollision", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PaperTileMapComponent_eventSetLayerCollision_Parms), &Z_Construct_UFunction_UPaperTileMapComponent_SetLayerCollision_Statics::NewProp_bHasCollision_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPaperTileMapComponent_SetLayerCollision_Statics::NewProp_bOverrideThickness_SetBit(void* Obj)
{
	((PaperTileMapComponent_eventSetLayerCollision_Parms*)Obj)->bOverrideThickness = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_SetLayerCollision_Statics::NewProp_bOverrideThickness = { "bOverrideThickness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PaperTileMapComponent_eventSetLayerCollision_Parms), &Z_Construct_UFunction_UPaperTileMapComponent_SetLayerCollision_Statics::NewProp_bOverrideThickness_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_SetLayerCollision_Statics::NewProp_CustomThickness = { "CustomThickness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperTileMapComponent_eventSetLayerCollision_Parms, CustomThickness), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPaperTileMapComponent_SetLayerCollision_Statics::NewProp_bOverrideOffset_SetBit(void* Obj)
{
	((PaperTileMapComponent_eventSetLayerCollision_Parms*)Obj)->bOverrideOffset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_SetLayerCollision_Statics::NewProp_bOverrideOffset = { "bOverrideOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PaperTileMapComponent_eventSetLayerCollision_Parms), &Z_Construct_UFunction_UPaperTileMapComponent_SetLayerCollision_Statics::NewProp_bOverrideOffset_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_SetLayerCollision_Statics::NewProp_CustomOffset = { "CustomOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperTileMapComponent_eventSetLayerCollision_Parms, CustomOffset), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPaperTileMapComponent_SetLayerCollision_Statics::NewProp_bRebuildCollision_SetBit(void* Obj)
{
	((PaperTileMapComponent_eventSetLayerCollision_Parms*)Obj)->bRebuildCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_SetLayerCollision_Statics::NewProp_bRebuildCollision = { "bRebuildCollision", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PaperTileMapComponent_eventSetLayerCollision_Parms), &Z_Construct_UFunction_UPaperTileMapComponent_SetLayerCollision_Statics::NewProp_bRebuildCollision_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperTileMapComponent_SetLayerCollision_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_SetLayerCollision_Statics::NewProp_Layer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_SetLayerCollision_Statics::NewProp_bHasCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_SetLayerCollision_Statics::NewProp_bOverrideThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_SetLayerCollision_Statics::NewProp_CustomThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_SetLayerCollision_Statics::NewProp_bOverrideOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_SetLayerCollision_Statics::NewProp_CustomOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_SetLayerCollision_Statics::NewProp_bRebuildCollision,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_SetLayerCollision_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperTileMapComponent_SetLayerCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperTileMapComponent, nullptr, "SetLayerCollision", nullptr, nullptr, Z_Construct_UFunction_UPaperTileMapComponent_SetLayerCollision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_SetLayerCollision_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPaperTileMapComponent_SetLayerCollision_Statics::PaperTileMapComponent_eventSetLayerCollision_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_SetLayerCollision_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPaperTileMapComponent_SetLayerCollision_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPaperTileMapComponent_SetLayerCollision_Statics::PaperTileMapComponent_eventSetLayerCollision_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPaperTileMapComponent_SetLayerCollision()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPaperTileMapComponent_SetLayerCollision_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPaperTileMapComponent::execSetLayerCollision)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Layer);
	P_GET_UBOOL(Z_Param_bHasCollision);
	P_GET_UBOOL(Z_Param_bOverrideThickness);
	P_GET_PROPERTY(FFloatProperty,Z_Param_CustomThickness);
	P_GET_UBOOL(Z_Param_bOverrideOffset);
	P_GET_PROPERTY(FFloatProperty,Z_Param_CustomOffset);
	P_GET_UBOOL(Z_Param_bRebuildCollision);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLayerCollision(Z_Param_Layer,Z_Param_bHasCollision,Z_Param_bOverrideThickness,Z_Param_CustomThickness,Z_Param_bOverrideOffset,Z_Param_CustomOffset,Z_Param_bRebuildCollision);
	P_NATIVE_END;
}
// End Class UPaperTileMapComponent Function SetLayerCollision

// Begin Class UPaperTileMapComponent Function SetLayerColor
struct Z_Construct_UFunction_UPaperTileMapComponent_SetLayerColor_Statics
{
	struct PaperTileMapComponent_eventSetLayerColor_Parms
	{
		FLinearColor NewColor;
		int32 Layer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Sets the per-layer color multiplier for a specific layer (multiplied with the tile map color and passed to the material as a vertex color)\n// Note: This will only work on components that own their own tile map (OwnsTileMap returns true), you cannot modify standalone tile map assets\n" },
		{ "CPP_Default_Layer", "0" },
		{ "ModuleRelativePath", "Classes/PaperTileMapComponent.h" },
		{ "ToolTip", "Sets the per-layer color multiplier for a specific layer (multiplied with the tile map color and passed to the material as a vertex color)\nNote: This will only work on components that own their own tile map (OwnsTileMap returns true), you cannot modify standalone tile map assets" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewColor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Layer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_SetLayerColor_Statics::NewProp_NewColor = { "NewColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperTileMapComponent_eventSetLayerColor_Parms, NewColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_SetLayerColor_Statics::NewProp_Layer = { "Layer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperTileMapComponent_eventSetLayerColor_Parms, Layer), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperTileMapComponent_SetLayerColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_SetLayerColor_Statics::NewProp_NewColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_SetLayerColor_Statics::NewProp_Layer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_SetLayerColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperTileMapComponent_SetLayerColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperTileMapComponent, nullptr, "SetLayerColor", nullptr, nullptr, Z_Construct_UFunction_UPaperTileMapComponent_SetLayerColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_SetLayerColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPaperTileMapComponent_SetLayerColor_Statics::PaperTileMapComponent_eventSetLayerColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_SetLayerColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPaperTileMapComponent_SetLayerColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPaperTileMapComponent_SetLayerColor_Statics::PaperTileMapComponent_eventSetLayerColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPaperTileMapComponent_SetLayerColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPaperTileMapComponent_SetLayerColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPaperTileMapComponent::execSetLayerColor)
{
	P_GET_STRUCT(FLinearColor,Z_Param_NewColor);
	P_GET_PROPERTY(FIntProperty,Z_Param_Layer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLayerColor(Z_Param_NewColor,Z_Param_Layer);
	P_NATIVE_END;
}
// End Class UPaperTileMapComponent Function SetLayerColor

// Begin Class UPaperTileMapComponent Function SetTile
struct Z_Construct_UFunction_UPaperTileMapComponent_SetTile_Statics
{
	struct PaperTileMapComponent_eventSetTile_Parms
	{
		int32 X;
		int32 Y;
		int32 Layer;
		FPaperTileInfo NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Modifies the contents of a specified tile cell (Note: This will only work on components that own their own tile map (OwnsTileMap returns true), you cannot modify standalone tile map assets)\n// Note: Does not update collision by default, call RebuildCollision after all edits have been done in a frame if necessary\n" },
		{ "Layer", "0" },
		{ "ModuleRelativePath", "Classes/PaperTileMapComponent.h" },
		{ "ToolTip", "Modifies the contents of a specified tile cell (Note: This will only work on components that own their own tile map (OwnsTileMap returns true), you cannot modify standalone tile map assets)\nNote: Does not update collision by default, call RebuildCollision after all edits have been done in a frame if necessary" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_X;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Layer;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_SetTile_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperTileMapComponent_eventSetTile_Parms, X), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_SetTile_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperTileMapComponent_eventSetTile_Parms, Y), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_SetTile_Statics::NewProp_Layer = { "Layer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperTileMapComponent_eventSetTile_Parms, Layer), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_SetTile_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperTileMapComponent_eventSetTile_Parms, NewValue), Z_Construct_UScriptStruct_FPaperTileInfo, METADATA_PARAMS(0, nullptr) }; // 3247895172
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperTileMapComponent_SetTile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_SetTile_Statics::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_SetTile_Statics::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_SetTile_Statics::NewProp_Layer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_SetTile_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_SetTile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperTileMapComponent_SetTile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperTileMapComponent, nullptr, "SetTile", nullptr, nullptr, Z_Construct_UFunction_UPaperTileMapComponent_SetTile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_SetTile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPaperTileMapComponent_SetTile_Statics::PaperTileMapComponent_eventSetTile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_SetTile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPaperTileMapComponent_SetTile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPaperTileMapComponent_SetTile_Statics::PaperTileMapComponent_eventSetTile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPaperTileMapComponent_SetTile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPaperTileMapComponent_SetTile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPaperTileMapComponent::execSetTile)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_X);
	P_GET_PROPERTY(FIntProperty,Z_Param_Y);
	P_GET_PROPERTY(FIntProperty,Z_Param_Layer);
	P_GET_STRUCT(FPaperTileInfo,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTile(Z_Param_X,Z_Param_Y,Z_Param_Layer,Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class UPaperTileMapComponent Function SetTile

// Begin Class UPaperTileMapComponent Function SetTileMap
struct Z_Construct_UFunction_UPaperTileMapComponent_SetTileMap_Statics
{
	struct PaperTileMapComponent_eventSetTileMap_Parms
	{
		UPaperTileMap* NewTileMap;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sprite" },
		{ "Comment", "/** Change the PaperTileMap used by this instance. */" },
		{ "ModuleRelativePath", "Classes/PaperTileMapComponent.h" },
		{ "ToolTip", "Change the PaperTileMap used by this instance." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewTileMap;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_SetTileMap_Statics::NewProp_NewTileMap = { "NewTileMap", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperTileMapComponent_eventSetTileMap_Parms, NewTileMap), Z_Construct_UClass_UPaperTileMap_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPaperTileMapComponent_SetTileMap_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PaperTileMapComponent_eventSetTileMap_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_SetTileMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PaperTileMapComponent_eventSetTileMap_Parms), &Z_Construct_UFunction_UPaperTileMapComponent_SetTileMap_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperTileMapComponent_SetTileMap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_SetTileMap_Statics::NewProp_NewTileMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_SetTileMap_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_SetTileMap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperTileMapComponent_SetTileMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperTileMapComponent, nullptr, "SetTileMap", nullptr, nullptr, Z_Construct_UFunction_UPaperTileMapComponent_SetTileMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_SetTileMap_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPaperTileMapComponent_SetTileMap_Statics::PaperTileMapComponent_eventSetTileMap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_SetTileMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPaperTileMapComponent_SetTileMap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPaperTileMapComponent_SetTileMap_Statics::PaperTileMapComponent_eventSetTileMap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPaperTileMapComponent_SetTileMap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPaperTileMapComponent_SetTileMap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPaperTileMapComponent::execSetTileMap)
{
	P_GET_OBJECT(UPaperTileMap,Z_Param_NewTileMap);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetTileMap(Z_Param_NewTileMap);
	P_NATIVE_END;
}
// End Class UPaperTileMapComponent Function SetTileMap

// Begin Class UPaperTileMapComponent Function SetTileMapColor
struct Z_Construct_UFunction_UPaperTileMapComponent_SetTileMapColor_Statics
{
	struct PaperTileMapComponent_eventSetTileMapColor_Parms
	{
		FLinearColor NewColor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Sets the tile map global color multiplier (multiplied with the per-layer color and passed to the material as a vertex color)\n" },
		{ "ModuleRelativePath", "Classes/PaperTileMapComponent.h" },
		{ "ToolTip", "Sets the tile map global color multiplier (multiplied with the per-layer color and passed to the material as a vertex color)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_SetTileMapColor_Statics::NewProp_NewColor = { "NewColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperTileMapComponent_eventSetTileMapColor_Parms, NewColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperTileMapComponent_SetTileMapColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_SetTileMapColor_Statics::NewProp_NewColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_SetTileMapColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperTileMapComponent_SetTileMapColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperTileMapComponent, nullptr, "SetTileMapColor", nullptr, nullptr, Z_Construct_UFunction_UPaperTileMapComponent_SetTileMapColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_SetTileMapColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPaperTileMapComponent_SetTileMapColor_Statics::PaperTileMapComponent_eventSetTileMapColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_SetTileMapColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPaperTileMapComponent_SetTileMapColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPaperTileMapComponent_SetTileMapColor_Statics::PaperTileMapComponent_eventSetTileMapColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPaperTileMapComponent_SetTileMapColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPaperTileMapComponent_SetTileMapColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPaperTileMapComponent::execSetTileMapColor)
{
	P_GET_STRUCT(FLinearColor,Z_Param_NewColor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTileMapColor(Z_Param_NewColor);
	P_NATIVE_END;
}
// End Class UPaperTileMapComponent Function SetTileMapColor

// Begin Class UPaperTileMapComponent
void UPaperTileMapComponent::StaticRegisterNativesUPaperTileMapComponent()
{
	UClass* Class = UPaperTileMapComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddNewLayer", &UPaperTileMapComponent::execAddNewLayer },
		{ "CreateNewTileMap", &UPaperTileMapComponent::execCreateNewTileMap },
		{ "GetLayerColor", &UPaperTileMapComponent::execGetLayerColor },
		{ "GetMapSize", &UPaperTileMapComponent::execGetMapSize },
		{ "GetTile", &UPaperTileMapComponent::execGetTile },
		{ "GetTileCenterPosition", &UPaperTileMapComponent::execGetTileCenterPosition },
		{ "GetTileCornerPosition", &UPaperTileMapComponent::execGetTileCornerPosition },
		{ "GetTileMapColor", &UPaperTileMapComponent::execGetTileMapColor },
		{ "GetTilePolygon", &UPaperTileMapComponent::execGetTilePolygon },
		{ "MakeTileMapEditable", &UPaperTileMapComponent::execMakeTileMapEditable },
		{ "OwnsTileMap", &UPaperTileMapComponent::execOwnsTileMap },
		{ "RebuildCollision", &UPaperTileMapComponent::execRebuildCollision },
		{ "ResizeMap", &UPaperTileMapComponent::execResizeMap },
		{ "SetDefaultCollisionThickness", &UPaperTileMapComponent::execSetDefaultCollisionThickness },
		{ "SetLayerCollision", &UPaperTileMapComponent::execSetLayerCollision },
		{ "SetLayerColor", &UPaperTileMapComponent::execSetLayerColor },
		{ "SetTile", &UPaperTileMapComponent::execSetTile },
		{ "SetTileMap", &UPaperTileMapComponent::execSetTileMap },
		{ "SetTileMapColor", &UPaperTileMapComponent::execSetTileMapColor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPaperTileMapComponent);
UClass* Z_Construct_UClass_UPaperTileMapComponent_NoRegister()
{
	return UPaperTileMapComponent::StaticClass();
}
struct Z_Construct_UClass_UPaperTileMapComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Paper2D" },
		{ "Comment", "/**\n * A component that handles rendering and collision for a single instance of a UPaperTileMap asset.\n *\n * This component is created when you drag a tile map asset from the content browser into a Blueprint, or\n * contained inside of the actor created when you drag one into the level.\n *\n * NOTE: This is an beta preview class.  While not considered production-ready, it is a step beyond\n * 'experimental' and is being provided as a preview of things to come:\n *  - We will try to provide forward-compatibility for content you create.\n *  - The classes may change significantly in the future.\n *  - The code is in an early state and may not meet the desired polish / quality bar.\n *  - There is probably no documentation or example content yet.\n *  - They will be promoted out of 'beta' when they are production ready.\n *\n * @see UPrimitiveComponent, UPaperTileMap\n */" },
		{ "DevelopmentStatus", "EarlyAccess" },
		{ "HideCategories", "Object Mobility Trigger" },
		{ "IncludePath", "PaperTileMapComponent.h" },
		{ "ModuleRelativePath", "Classes/PaperTileMapComponent.h" },
		{ "ToolTip", "A component that handles rendering and collision for a single instance of a UPaperTileMap asset.\n\nThis component is created when you drag a tile map asset from the content browser into a Blueprint, or\ncontained inside of the actor created when you drag one into the level.\n\nNOTE: This is an beta preview class.  While not considered production-ready, it is a step beyond\n'experimental' and is being provided as a preview of things to come:\n - We will try to provide forward-compatibility for content you create.\n - The classes may change significantly in the future.\n - The code is in an early state and may not meet the desired polish / quality bar.\n - There is probably no documentation or example content yet.\n - They will be promoted out of 'beta' when they are production ready.\n\n@see UPrimitiveComponent, UPaperTileMap" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapWidth_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PaperTileMapComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapHeight_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PaperTileMapComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileWidth_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PaperTileMapComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileHeight_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PaperTileMapComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultLayerTileSet_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PaperTileMapComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PaperTileMapComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileLayers_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PaperTileMapComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileMapColor_MetaData[] = {
		{ "Category", "Materials" },
		{ "Comment", "// The color of the tile map (multiplied with the per-layer color and passed to the material as a vertex color)\n" },
		{ "ModuleRelativePath", "Classes/PaperTileMapComponent.h" },
		{ "ToolTip", "The color of the tile map (multiplied with the per-layer color and passed to the material as a vertex color)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseSingleLayerIndex_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "// The index of the single layer to use if enabled\n" },
		{ "EditCondition", "bUseSingleLayer" },
		{ "ModuleRelativePath", "Classes/PaperTileMapComponent.h" },
		{ "ToolTip", "The index of the single layer to use if enabled" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseSingleLayer_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "// Should we draw a single layer?\n" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/PaperTileMapComponent.h" },
		{ "ToolTip", "Should we draw a single layer?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileMap_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "// The tile map used by this component\n" },
		{ "ModuleRelativePath", "Classes/PaperTileMapComponent.h" },
		{ "ToolTip", "The tile map used by this component" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowPerTileGridWhenSelected_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "// Should this component show a tile grid when the component is selected?\n" },
		{ "ModuleRelativePath", "Classes/PaperTileMapComponent.h" },
		{ "ToolTip", "Should this component show a tile grid when the component is selected?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowPerLayerGridWhenSelected_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "// Should this component show an outline around each layer when the component is selected?\n" },
		{ "ModuleRelativePath", "Classes/PaperTileMapComponent.h" },
		{ "ToolTip", "Should this component show an outline around each layer when the component is selected?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowOutlineWhenUnselected_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "// Should this component show an outline around the first layer when the component is not selected?\n" },
		{ "ModuleRelativePath", "Classes/PaperTileMapComponent.h" },
		{ "ToolTip", "Should this component show an outline around the first layer when the component is not selected?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowPerTileGridWhenUnselected_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "// Should this component show a tile grid when the component is not selected?\n" },
		{ "ModuleRelativePath", "Classes/PaperTileMapComponent.h" },
		{ "ToolTip", "Should this component show a tile grid when the component is not selected?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowPerLayerGridWhenUnselected_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "// Should this component show an outline around each layer when the component is not selected?\n" },
		{ "ModuleRelativePath", "Classes/PaperTileMapComponent.h" },
		{ "ToolTip", "Should this component show an outline around each layer when the component is not selected?" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MapWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MapHeight;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TileWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TileHeight;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultLayerTileSet;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TileLayers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TileLayers;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TileMapColor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UseSingleLayerIndex;
	static void NewProp_bUseSingleLayer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSingleLayer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TileMap;
#if WITH_EDITORONLY_DATA
	static void NewProp_bShowPerTileGridWhenSelected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowPerTileGridWhenSelected;
	static void NewProp_bShowPerLayerGridWhenSelected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowPerLayerGridWhenSelected;
	static void NewProp_bShowOutlineWhenUnselected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowOutlineWhenUnselected;
	static void NewProp_bShowPerTileGridWhenUnselected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowPerTileGridWhenUnselected;
	static void NewProp_bShowPerLayerGridWhenUnselected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowPerLayerGridWhenUnselected;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPaperTileMapComponent_AddNewLayer, "AddNewLayer" }, // 2982106997
		{ &Z_Construct_UFunction_UPaperTileMapComponent_CreateNewTileMap, "CreateNewTileMap" }, // 3991550525
		{ &Z_Construct_UFunction_UPaperTileMapComponent_GetLayerColor, "GetLayerColor" }, // 1293785033
		{ &Z_Construct_UFunction_UPaperTileMapComponent_GetMapSize, "GetMapSize" }, // 540897976
		{ &Z_Construct_UFunction_UPaperTileMapComponent_GetTile, "GetTile" }, // 2658257759
		{ &Z_Construct_UFunction_UPaperTileMapComponent_GetTileCenterPosition, "GetTileCenterPosition" }, // 3193385311
		{ &Z_Construct_UFunction_UPaperTileMapComponent_GetTileCornerPosition, "GetTileCornerPosition" }, // 798707909
		{ &Z_Construct_UFunction_UPaperTileMapComponent_GetTileMapColor, "GetTileMapColor" }, // 2443438618
		{ &Z_Construct_UFunction_UPaperTileMapComponent_GetTilePolygon, "GetTilePolygon" }, // 2979947109
		{ &Z_Construct_UFunction_UPaperTileMapComponent_MakeTileMapEditable, "MakeTileMapEditable" }, // 2695862494
		{ &Z_Construct_UFunction_UPaperTileMapComponent_OwnsTileMap, "OwnsTileMap" }, // 2737247908
		{ &Z_Construct_UFunction_UPaperTileMapComponent_RebuildCollision, "RebuildCollision" }, // 1495811798
		{ &Z_Construct_UFunction_UPaperTileMapComponent_ResizeMap, "ResizeMap" }, // 1934509626
		{ &Z_Construct_UFunction_UPaperTileMapComponent_SetDefaultCollisionThickness, "SetDefaultCollisionThickness" }, // 1695838038
		{ &Z_Construct_UFunction_UPaperTileMapComponent_SetLayerCollision, "SetLayerCollision" }, // 740042223
		{ &Z_Construct_UFunction_UPaperTileMapComponent_SetLayerColor, "SetLayerColor" }, // 183436613
		{ &Z_Construct_UFunction_UPaperTileMapComponent_SetTile, "SetTile" }, // 2314904307
		{ &Z_Construct_UFunction_UPaperTileMapComponent_SetTileMap, "SetTileMap" }, // 2447324244
		{ &Z_Construct_UFunction_UPaperTileMapComponent_SetTileMapColor, "SetTileMapColor" }, // 2910634778
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperTileMapComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_MapWidth = { "MapWidth", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperTileMapComponent, MapWidth_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapWidth_MetaData), NewProp_MapWidth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_MapHeight = { "MapHeight", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperTileMapComponent, MapHeight_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapHeight_MetaData), NewProp_MapHeight_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_TileWidth = { "TileWidth", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperTileMapComponent, TileWidth_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileWidth_MetaData), NewProp_TileWidth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_TileHeight = { "TileHeight", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperTileMapComponent, TileHeight_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileHeight_MetaData), NewProp_TileHeight_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_DefaultLayerTileSet = { "DefaultLayerTileSet", nullptr, (EPropertyFlags)0x0144000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperTileMapComponent, DefaultLayerTileSet_DEPRECATED), Z_Construct_UClass_UPaperTileSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultLayerTileSet_MetaData), NewProp_DefaultLayerTileSet_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0144000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperTileMapComponent, Material_DEPRECATED), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Material_MetaData), NewProp_Material_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_TileLayers_Inner = { "TileLayers", nullptr, (EPropertyFlags)0x0104000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPaperTileLayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_TileLayers = { "TileLayers", nullptr, (EPropertyFlags)0x0144000020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperTileMapComponent, TileLayers_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileLayers_MetaData), NewProp_TileLayers_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_TileMapColor = { "TileMapColor", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperTileMapComponent, TileMapColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileMapColor_MetaData), NewProp_TileMapColor_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_UseSingleLayerIndex = { "UseSingleLayerIndex", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperTileMapComponent, UseSingleLayerIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseSingleLayerIndex_MetaData), NewProp_UseSingleLayerIndex_MetaData) };
void Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_bUseSingleLayer_SetBit(void* Obj)
{
	((UPaperTileMapComponent*)Obj)->bUseSingleLayer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_bUseSingleLayer = { "bUseSingleLayer", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPaperTileMapComponent), &Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_bUseSingleLayer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseSingleLayer_MetaData), NewProp_bUseSingleLayer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_TileMap = { "TileMap", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperTileMapComponent, TileMap), Z_Construct_UClass_UPaperTileMap_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileMap_MetaData), NewProp_TileMap_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_bShowPerTileGridWhenSelected_SetBit(void* Obj)
{
	((UPaperTileMapComponent*)Obj)->bShowPerTileGridWhenSelected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_bShowPerTileGridWhenSelected = { "bShowPerTileGridWhenSelected", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPaperTileMapComponent), &Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_bShowPerTileGridWhenSelected_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowPerTileGridWhenSelected_MetaData), NewProp_bShowPerTileGridWhenSelected_MetaData) };
void Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_bShowPerLayerGridWhenSelected_SetBit(void* Obj)
{
	((UPaperTileMapComponent*)Obj)->bShowPerLayerGridWhenSelected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_bShowPerLayerGridWhenSelected = { "bShowPerLayerGridWhenSelected", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPaperTileMapComponent), &Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_bShowPerLayerGridWhenSelected_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowPerLayerGridWhenSelected_MetaData), NewProp_bShowPerLayerGridWhenSelected_MetaData) };
void Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_bShowOutlineWhenUnselected_SetBit(void* Obj)
{
	((UPaperTileMapComponent*)Obj)->bShowOutlineWhenUnselected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_bShowOutlineWhenUnselected = { "bShowOutlineWhenUnselected", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPaperTileMapComponent), &Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_bShowOutlineWhenUnselected_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowOutlineWhenUnselected_MetaData), NewProp_bShowOutlineWhenUnselected_MetaData) };
void Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_bShowPerTileGridWhenUnselected_SetBit(void* Obj)
{
	((UPaperTileMapComponent*)Obj)->bShowPerTileGridWhenUnselected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_bShowPerTileGridWhenUnselected = { "bShowPerTileGridWhenUnselected", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPaperTileMapComponent), &Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_bShowPerTileGridWhenUnselected_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowPerTileGridWhenUnselected_MetaData), NewProp_bShowPerTileGridWhenUnselected_MetaData) };
void Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_bShowPerLayerGridWhenUnselected_SetBit(void* Obj)
{
	((UPaperTileMapComponent*)Obj)->bShowPerLayerGridWhenUnselected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_bShowPerLayerGridWhenUnselected = { "bShowPerLayerGridWhenUnselected", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPaperTileMapComponent), &Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_bShowPerLayerGridWhenUnselected_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowPerLayerGridWhenUnselected_MetaData), NewProp_bShowPerLayerGridWhenUnselected_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPaperTileMapComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_MapWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_MapHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_TileWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_TileHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_DefaultLayerTileSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_TileLayers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_TileLayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_TileMapColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_UseSingleLayerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_bUseSingleLayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_TileMap,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_bShowPerTileGridWhenSelected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_bShowPerLayerGridWhenSelected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_bShowOutlineWhenUnselected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_bShowPerTileGridWhenUnselected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_bShowPerLayerGridWhenUnselected,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileMapComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPaperTileMapComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMeshComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Paper2D,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileMapComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperTileMapComponent_Statics::ClassParams = {
	&UPaperTileMapComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPaperTileMapComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileMapComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileMapComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPaperTileMapComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPaperTileMapComponent()
{
	if (!Z_Registration_Info_UClass_UPaperTileMapComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperTileMapComponent.OuterSingleton, Z_Construct_UClass_UPaperTileMapComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPaperTileMapComponent.OuterSingleton;
}
template<> PAPER2D_API UClass* StaticClass<UPaperTileMapComponent>()
{
	return UPaperTileMapComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperTileMapComponent);
UPaperTileMapComponent::~UPaperTileMapComponent() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UPaperTileMapComponent)
// End Class UPaperTileMapComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPaperTileMapComponent, UPaperTileMapComponent::StaticClass, TEXT("UPaperTileMapComponent"), &Z_Registration_Info_UClass_UPaperTileMapComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperTileMapComponent), 401302346U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapComponent_h_1539370691(TEXT("/Script/Paper2D"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
