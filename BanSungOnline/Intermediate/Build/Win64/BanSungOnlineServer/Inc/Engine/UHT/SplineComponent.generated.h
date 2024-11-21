// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/SplineComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
struct FSplinePoint;
#ifdef ENGINE_SplineComponent_generated_h
#error "SplineComponent.generated.h already included, missing '#pragma once' in SplineComponent.h"
#endif
#define ENGINE_SplineComponent_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_43_INCLASS \
private: \
	static void StaticRegisterNativesUSplineMetadata(); \
	friend struct Z_Construct_UClass_USplineMetadata_Statics; \
public: \
	DECLARE_CLASS(USplineMetadata, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USplineMetadata)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USplineMetadata(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USplineMetadata) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USplineMetadata); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USplineMetadata); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USplineMetadata(USplineMetadata&&); \
	USplineMetadata(const USplineMetadata&); \
public: \
	ENGINE_API virtual ~USplineMetadata();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_40_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_43_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USplineMetadata>();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_61_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSplineCurves_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSplineCurves>();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_141_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSplinePoint_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSplinePoint>();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_198_RPC_WRAPPERS \
	DECLARE_FUNCTION(execConvertSplineToPolyline_InTimeRange); \
	DECLARE_FUNCTION(execConvertSplineToPolyline_InDistanceRange); \
	DECLARE_FUNCTION(execConvertSplineToPolyLineWithDistances); \
	DECLARE_FUNCTION(execConvertSplineToPolyLine); \
	DECLARE_FUNCTION(execConvertSplineSegmentToPolyLine); \
	DECLARE_FUNCTION(execDivideSplineIntoPolylineRecursiveWithDistances); \
	DECLARE_FUNCTION(execDivideSplineIntoPolylineRecursive); \
	DECLARE_FUNCTION(execFindTransformClosestToWorldLocation); \
	DECLARE_FUNCTION(execFindScaleClosestToWorldLocation); \
	DECLARE_FUNCTION(execFindRollClosestToWorldLocation); \
	DECLARE_FUNCTION(execFindRightVectorClosestToWorldLocation); \
	DECLARE_FUNCTION(execFindUpVectorClosestToWorldLocation); \
	DECLARE_FUNCTION(execFindRotationClosestToWorldLocation); \
	DECLARE_FUNCTION(execFindTangentClosestToWorldLocation); \
	DECLARE_FUNCTION(execFindDirectionClosestToWorldLocation); \
	DECLARE_FUNCTION(execFindLocationClosestToWorldLocation); \
	DECLARE_FUNCTION(execFindInputKeyClosestToWorldLocation); \
	DECLARE_FUNCTION(execGetScaleAtTime); \
	DECLARE_FUNCTION(execGetRollAtTime); \
	DECLARE_FUNCTION(execGetTransformAtTime); \
	DECLARE_FUNCTION(execGetRightVectorAtTime); \
	DECLARE_FUNCTION(execGetUpVectorAtTime); \
	DECLARE_FUNCTION(execGetWorldRotationAtTime); \
	DECLARE_FUNCTION(execGetRotationAtTime); \
	DECLARE_FUNCTION(execGetTangentAtTime); \
	DECLARE_FUNCTION(execGetWorldDirectionAtTime); \
	DECLARE_FUNCTION(execGetDirectionAtTime); \
	DECLARE_FUNCTION(execGetWorldLocationAtTime); \
	DECLARE_FUNCTION(execGetLocationAtTime); \
	DECLARE_FUNCTION(execGetTransformAtDistanceAlongSpline); \
	DECLARE_FUNCTION(execGetScaleAtDistanceAlongSpline); \
	DECLARE_FUNCTION(execGetRollAtDistanceAlongSpline); \
	DECLARE_FUNCTION(execGetRightVectorAtDistanceAlongSpline); \
	DECLARE_FUNCTION(execGetUpVectorAtDistanceAlongSpline); \
	DECLARE_FUNCTION(execGetWorldRotationAtDistanceAlongSpline); \
	DECLARE_FUNCTION(execGetRotationAtDistanceAlongSpline); \
	DECLARE_FUNCTION(execGetWorldTangentAtDistanceAlongSpline); \
	DECLARE_FUNCTION(execGetTangentAtDistanceAlongSpline); \
	DECLARE_FUNCTION(execGetWorldDirectionAtDistanceAlongSpline); \
	DECLARE_FUNCTION(execGetDirectionAtDistanceAlongSpline); \
	DECLARE_FUNCTION(execGetWorldLocationAtDistanceAlongSpline); \
	DECLARE_FUNCTION(execGetLocationAtDistanceAlongSpline); \
	DECLARE_FUNCTION(execGetTimeAtDistanceAlongSpline); \
	DECLARE_FUNCTION(execGetInputKeyValueAtDistanceAlongSpline); \
	DECLARE_FUNCTION(execGetInputKeyAtDistanceAlongSpline); \
	DECLARE_FUNCTION(execGetDefaultUpVector); \
	DECLARE_FUNCTION(execSetDefaultUpVector); \
	DECLARE_FUNCTION(execGetSplineLength); \
	DECLARE_FUNCTION(execGetVectorPropertyAtSplinePoint); \
	DECLARE_FUNCTION(execGetFloatPropertyAtSplinePoint); \
	DECLARE_FUNCTION(execGetDistanceAlongSplineAtSplinePoint); \
	DECLARE_FUNCTION(execGetLocalLocationAndTangentAtSplinePoint); \
	DECLARE_FUNCTION(execGetLocationAndTangentAtSplinePoint); \
	DECLARE_FUNCTION(execGetTransformAtSplinePoint); \
	DECLARE_FUNCTION(execGetScaleAtSplinePoint); \
	DECLARE_FUNCTION(execGetRollAtSplinePoint); \
	DECLARE_FUNCTION(execGetRightVectorAtSplinePoint); \
	DECLARE_FUNCTION(execGetUpVectorAtSplinePoint); \
	DECLARE_FUNCTION(execGetRotationAtSplinePoint); \
	DECLARE_FUNCTION(execGetLeaveTangentAtSplinePoint); \
	DECLARE_FUNCTION(execGetArriveTangentAtSplinePoint); \
	DECLARE_FUNCTION(execGetTangentAtSplinePoint); \
	DECLARE_FUNCTION(execGetDirectionAtSplinePoint); \
	DECLARE_FUNCTION(execGetWorldLocationAtSplinePoint); \
	DECLARE_FUNCTION(execGetLocationAtSplinePoint); \
	DECLARE_FUNCTION(execGetSplinePointAt); \
	DECLARE_FUNCTION(execGetInputKeyValueAtSplinePoint); \
	DECLARE_FUNCTION(execGetNumberOfSplineSegments); \
	DECLARE_FUNCTION(execGetNumberOfSplinePoints); \
	DECLARE_FUNCTION(execSetSplinePointType); \
	DECLARE_FUNCTION(execGetSplinePointType); \
	DECLARE_FUNCTION(execSetScaleAtSplinePoint); \
	DECLARE_FUNCTION(execSetRotationAtSplinePoint); \
	DECLARE_FUNCTION(execSetUpVectorAtSplinePoint); \
	DECLARE_FUNCTION(execSetTangentsAtSplinePoint); \
	DECLARE_FUNCTION(execSetTangentAtSplinePoint); \
	DECLARE_FUNCTION(execSetWorldLocationAtSplinePoint); \
	DECLARE_FUNCTION(execSetLocationAtSplinePoint); \
	DECLARE_FUNCTION(execSetSplineLocalPoints); \
	DECLARE_FUNCTION(execSetSplineWorldPoints); \
	DECLARE_FUNCTION(execSetSplinePoints); \
	DECLARE_FUNCTION(execAddSplineLocalPoint); \
	DECLARE_FUNCTION(execAddSplineWorldPoint); \
	DECLARE_FUNCTION(execRemoveSplinePoint); \
	DECLARE_FUNCTION(execAddSplinePointAtIndex); \
	DECLARE_FUNCTION(execAddSplinePoint); \
	DECLARE_FUNCTION(execAddPoints); \
	DECLARE_FUNCTION(execAddPoint); \
	DECLARE_FUNCTION(execClearSplinePoints); \
	DECLARE_FUNCTION(execIsClosedLoop); \
	DECLARE_FUNCTION(execSetClosedLoopAtPosition); \
	DECLARE_FUNCTION(execSetClosedLoop); \
	DECLARE_FUNCTION(execSetDrawDebug); \
	DECLARE_FUNCTION(execSetTangentColor); \
	DECLARE_FUNCTION(execSetSelectedSplineSegmentColor); \
	DECLARE_FUNCTION(execSetUnselectedSplineSegmentColor); \
	DECLARE_FUNCTION(execGetVectorPropertyAtSplineInputKey); \
	DECLARE_FUNCTION(execGetFloatPropertyAtSplineInputKey); \
	DECLARE_FUNCTION(execGetDistanceAlongSplineAtLocation); \
	DECLARE_FUNCTION(execGetDistanceAlongSplineAtSplineInputKey); \
	DECLARE_FUNCTION(execGetScaleAtSplineInputKey); \
	DECLARE_FUNCTION(execGetRollAtSplineInputKey); \
	DECLARE_FUNCTION(execGetTransformAtSplineInputKey); \
	DECLARE_FUNCTION(execGetRightVectorAtSplineInputKey); \
	DECLARE_FUNCTION(execGetUpVectorAtSplineInputKey); \
	DECLARE_FUNCTION(execGetRotationAtSplineInputKey); \
	DECLARE_FUNCTION(execGetDirectionAtSplineInputKey); \
	DECLARE_FUNCTION(execGetTangentAtSplineInputKey); \
	DECLARE_FUNCTION(execGetLocationAtSplineInputKey); \
	DECLARE_FUNCTION(execSetOverrideConstructionScript); \
	DECLARE_FUNCTION(execUpdateSpline);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_198_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USplineComponent, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_198_INCLASS \
private: \
	static void StaticRegisterNativesUSplineComponent(); \
	friend struct Z_Construct_UClass_USplineComponent_Statics; \
public: \
	DECLARE_CLASS(USplineComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USplineComponent) \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_198_ARCHIVESERIALIZER \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		SplineCurves=NETFIELD_REP_START, \
		ReparamStepsPerSegment, \
		bStationaryEndpoints, \
		bSplineHasBeenEdited, \
		bInputSplinePointsToConstructionScript, \
		bClosedLoop, \
		bLoopPositionOverride, \
		LoopPosition, \
		DefaultUpVector, \
		NETFIELD_REP_END=DefaultUpVector	}; \
	ENGINE_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_198_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USplineComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USplineComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USplineComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USplineComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USplineComponent(USplineComponent&&); \
	USplineComponent(const USplineComponent&); \
public: \
	ENGINE_API virtual ~USplineComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_195_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_198_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_198_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_198_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_198_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USplineComponent>();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_911_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSplineInstanceData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FSceneComponentInstanceData Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSplineInstanceData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h


#define FOREACH_ENUM_ESPLINEPOINTTYPE(op) \
	op(ESplinePointType::Linear) \
	op(ESplinePointType::Curve) \
	op(ESplinePointType::Constant) \
	op(ESplinePointType::CurveClamped) \
	op(ESplinePointType::CurveCustomTangent) 

namespace ESplinePointType { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<ESplinePointType::Type>();

#define FOREACH_ENUM_ESPLINECOORDINATESPACE(op) \
	op(ESplineCoordinateSpace::Local) \
	op(ESplineCoordinateSpace::World) 

namespace ESplineCoordinateSpace { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<ESplineCoordinateSpace::Type>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
