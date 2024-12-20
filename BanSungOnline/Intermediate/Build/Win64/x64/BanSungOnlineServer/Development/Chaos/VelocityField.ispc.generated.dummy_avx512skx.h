//
// C:\\GameOnline\\BanSungOnline\\BanSungOnline\\Intermediate\\Build\\Win64\\x64\\BanSungOnlineServer\\Development\\Chaos\\VelocityField.ispc.generated.dummy_avx512skx.h
// (Header automatically generated by the ispc compiler.)
// DO NOT EDIT THIS FILE.
//

#pragma once
#include <stdint.h>

#if !defined(__cplusplus)
#if defined(__STDC_VERSION__) && (__STDC_VERSION__ >= 199901L)
#include <stdbool.h>
#else
typedef int bool;
#endif
#endif



#ifdef __cplusplus
namespace ispc { /* namespace */
#endif // __cplusplus

#ifndef __ISPC_ALIGN__
#if defined(__clang__) || !defined(_MSC_VER)
// Clang, GCC, ICC
#define __ISPC_ALIGN__(s) __attribute__((aligned(s)))
#define __ISPC_ALIGNED_STRUCT__(s) struct __ISPC_ALIGN__(s)
#else
// Visual Studio
#define __ISPC_ALIGN__(s) __declspec(align(s))
#define __ISPC_ALIGNED_STRUCT__(s) __ISPC_ALIGN__(s) struct
#endif
#endif

#ifndef __ISPC_STRUCT_FVector3f__
#define __ISPC_STRUCT_FVector3f__
struct FVector3f {
    float V[3];
};
#endif

#ifndef __ISPC_STRUCT_FIntVector__
#define __ISPC_STRUCT_FIntVector__
struct FIntVector {
    int32_t V[3];
};
#endif

#ifndef __ISPC_STRUCT_FVector2f__
#define __ISPC_STRUCT_FVector2f__
struct FVector2f {
    float V[2];
};
#endif


///////////////////////////////////////////////////////////////////////////
// Functions exported from ispc code
///////////////////////////////////////////////////////////////////////////
#if defined(__cplusplus) && (! defined(__ISPC_NO_EXTERN_C) || !__ISPC_NO_EXTERN_C )
extern "C" {
#endif // __cplusplus
#if defined(__cplusplus)
    extern void UpdateAndApplyVelocityField(struct FVector3f * Acceleration, const float * InvM, const struct FIntVector * Elements, const struct FVector3f * V, const struct FVector3f * X, const struct FVector3f &Velocity, const float QuarterRho, const float CdI, const float CdO, const float ClI, const float ClO, const float Cp, const int32_t NumElements);
#else
    extern void UpdateAndApplyVelocityField(struct FVector3f * Acceleration, const float * InvM, const struct FIntVector * Elements, const struct FVector3f * V, const struct FVector3f * X, const struct FVector3f *Velocity, const float QuarterRho, const float CdI, const float CdO, const float ClI, const float ClO, const float Cp, const int32_t NumElements);
#endif // UpdateAndApplyVelocityField function declaraion
#if defined(__cplusplus)
    extern void UpdateAndApplyVelocityFieldWithWeightMaps(struct FVector3f * Acceleration, const float * InvM, const struct FIntVector * Elements, const struct FVector3f * V, const struct FVector3f * X, const struct FVector3f &Velocity, const float QuarterRho, const bool bDragHasMap, const struct FVector2f &DragOffsetRange, const float * DragMapValues, const bool bOuterDragHasMap, const struct FVector2f &OuterDragOffsetRange, const float * OuterDragMapValues, const bool bLiftHasMap, const struct FVector2f &LiftOffsetRange, const float * LiftMapValues, const bool bOuterLiftHasMap, const struct FVector2f &OuterLiftOffsetRange, const float * OuterLiftMapValues, const bool bPressureHasMap, const struct FVector2f &PressureOffsetRange, const float * PressureMapValues, const int32_t NumElements);
#else
    extern void UpdateAndApplyVelocityFieldWithWeightMaps(struct FVector3f * Acceleration, const float * InvM, const struct FIntVector * Elements, const struct FVector3f * V, const struct FVector3f * X, const struct FVector3f *Velocity, const float QuarterRho, const bool bDragHasMap, const struct FVector2f *DragOffsetRange, const float * DragMapValues, const bool bOuterDragHasMap, const struct FVector2f *OuterDragOffsetRange, const float * OuterDragMapValues, const bool bLiftHasMap, const struct FVector2f *LiftOffsetRange, const float * LiftMapValues, const bool bOuterLiftHasMap, const struct FVector2f *OuterLiftOffsetRange, const float * OuterLiftMapValues, const bool bPressureHasMap, const struct FVector2f *PressureOffsetRange, const float * PressureMapValues, const int32_t NumElements);
#endif // UpdateAndApplyVelocityFieldWithWeightMaps function declaraion
#if defined(__cplusplus)
    extern void UpdateAndClampVelocityAndApplyVelocityField(struct FVector3f * Acceleration, const float * InvM, const struct FIntVector * Elements, const struct FVector3f * V, const struct FVector3f * X, const struct FVector3f &Velocity, const float QuarterRho, const float CdI, const float CdO, const float ClI, const float ClO, const float Cp, const int32_t NumElements, const float MaxVelocitySquared);
#else
    extern void UpdateAndClampVelocityAndApplyVelocityField(struct FVector3f * Acceleration, const float * InvM, const struct FIntVector * Elements, const struct FVector3f * V, const struct FVector3f * X, const struct FVector3f *Velocity, const float QuarterRho, const float CdI, const float CdO, const float ClI, const float ClO, const float Cp, const int32_t NumElements, const float MaxVelocitySquared);
#endif // UpdateAndClampVelocityAndApplyVelocityField function declaraion
#if defined(__cplusplus)
    extern void UpdateAndClampVelocityAndApplyVelocityFieldWithWeightMaps(struct FVector3f * Acceleration, const float * InvM, const struct FIntVector * Elements, const struct FVector3f * V, const struct FVector3f * X, const struct FVector3f &Velocity, const float QuarterRho, const bool bDragHasMap, const struct FVector2f &DragOffsetRange, const float * DragMapValues, const bool bOuterDragHasMap, const struct FVector2f &OuterDragOffsetRange, const float * OuterDragMapValues, const bool bLiftHasMap, const struct FVector2f &LiftOffsetRange, const float * LiftMapValues, const bool bOuterLiftHasMap, const struct FVector2f &OuterLiftOffsetRange, const float * OuterLiftMapValues, const bool bPressureHasMap, const struct FVector2f &PressureOffsetRange, const float * PressureMapValues, const int32_t NumElements, const float MaxVelocitySquared);
#else
    extern void UpdateAndClampVelocityAndApplyVelocityFieldWithWeightMaps(struct FVector3f * Acceleration, const float * InvM, const struct FIntVector * Elements, const struct FVector3f * V, const struct FVector3f * X, const struct FVector3f *Velocity, const float QuarterRho, const bool bDragHasMap, const struct FVector2f *DragOffsetRange, const float * DragMapValues, const bool bOuterDragHasMap, const struct FVector2f *OuterDragOffsetRange, const float * OuterDragMapValues, const bool bLiftHasMap, const struct FVector2f *LiftOffsetRange, const float * LiftMapValues, const bool bOuterLiftHasMap, const struct FVector2f *OuterLiftOffsetRange, const float * OuterLiftMapValues, const bool bPressureHasMap, const struct FVector2f *PressureOffsetRange, const float * PressureMapValues, const int32_t NumElements, const float MaxVelocitySquared);
#endif // UpdateAndClampVelocityAndApplyVelocityFieldWithWeightMaps function declaraion
#if defined(__cplusplus)
    extern void UpdateField(struct FVector3f * Forces, const struct FIntVector * Elements, const struct FVector3f * V, const struct FVector3f * X, const struct FVector3f &Velocity, const float QuarterRho, const float CdI, const float CdO, const float ClI, const float ClO, const float Cp, const int32_t NumElements);
#else
    extern void UpdateField(struct FVector3f * Forces, const struct FIntVector * Elements, const struct FVector3f * V, const struct FVector3f * X, const struct FVector3f *Velocity, const float QuarterRho, const float CdI, const float CdO, const float ClI, const float ClO, const float Cp, const int32_t NumElements);
#endif // UpdateField function declaraion
#if defined(__cplusplus)
    extern void UpdateFieldAndClampVelocity(struct FVector3f * Forces, const struct FIntVector * Elements, const struct FVector3f * V, const struct FVector3f * X, const struct FVector3f &Velocity, const float QuarterRho, const float CdI, const float CdO, const float ClI, const float ClO, const float Cp, const int32_t NumElements, const float MaxVelocitySquared);
#else
    extern void UpdateFieldAndClampVelocity(struct FVector3f * Forces, const struct FIntVector * Elements, const struct FVector3f * V, const struct FVector3f * X, const struct FVector3f *Velocity, const float QuarterRho, const float CdI, const float CdO, const float ClI, const float ClO, const float Cp, const int32_t NumElements, const float MaxVelocitySquared);
#endif // UpdateFieldAndClampVelocity function declaraion
#if defined(__cplusplus)
    extern void UpdateFieldWithWeightMaps(struct FVector3f * Forces, const struct FIntVector * Elements, const struct FVector3f * V, const struct FVector3f * X, const struct FVector3f &Velocity, const float QuarterRho, const bool bDragHasMap, const struct FVector2f &DragOffsetRange, const float * DragMapValues, const bool bOuterDragHasMap, const struct FVector2f &OuterDragOffsetRange, const float * OuterDragMapValues, const bool bLiftHasMap, const struct FVector2f &LiftOffsetRange, const float * LiftMapValues, const bool bOuterLiftHasMap, const struct FVector2f &OuterLiftOffsetRange, const float * OuterLiftMapValues, const bool bPressureHasMap, const struct FVector2f &PressureOffsetRange, const float * PressureMapValues, const int32_t NumElements);
#else
    extern void UpdateFieldWithWeightMaps(struct FVector3f * Forces, const struct FIntVector * Elements, const struct FVector3f * V, const struct FVector3f * X, const struct FVector3f *Velocity, const float QuarterRho, const bool bDragHasMap, const struct FVector2f *DragOffsetRange, const float * DragMapValues, const bool bOuterDragHasMap, const struct FVector2f *OuterDragOffsetRange, const float * OuterDragMapValues, const bool bLiftHasMap, const struct FVector2f *LiftOffsetRange, const float * LiftMapValues, const bool bOuterLiftHasMap, const struct FVector2f *OuterLiftOffsetRange, const float * OuterLiftMapValues, const bool bPressureHasMap, const struct FVector2f *PressureOffsetRange, const float * PressureMapValues, const int32_t NumElements);
#endif // UpdateFieldWithWeightMaps function declaraion
#if defined(__cplusplus)
    extern void UpdateFieldWithWeightMapsAndClampVelocity(struct FVector3f * Forces, const struct FIntVector * Elements, const struct FVector3f * V, const struct FVector3f * X, const struct FVector3f &Velocity, const float QuarterRho, const bool bDragHasMap, const struct FVector2f &DragOffsetRange, const float * DragMapValues, const bool bOuterDragHasMap, const struct FVector2f &OuterDragOffsetRange, const float * OuterDragMapValues, const bool bLiftHasMap, const struct FVector2f &LiftOffsetRange, const float * LiftMapValues, const bool bOuterLiftHasMap, const struct FVector2f &OuterLiftOffsetRange, const float * OuterLiftMapValues, const bool bPressureHasMap, const struct FVector2f &PressureOffsetRange, const float * PressureMapValues, const int32_t NumElements, const float MaxVelocitySquared);
#else
    extern void UpdateFieldWithWeightMapsAndClampVelocity(struct FVector3f * Forces, const struct FIntVector * Elements, const struct FVector3f * V, const struct FVector3f * X, const struct FVector3f *Velocity, const float QuarterRho, const bool bDragHasMap, const struct FVector2f *DragOffsetRange, const float * DragMapValues, const bool bOuterDragHasMap, const struct FVector2f *OuterDragOffsetRange, const float * OuterDragMapValues, const bool bLiftHasMap, const struct FVector2f *LiftOffsetRange, const float * LiftMapValues, const bool bOuterLiftHasMap, const struct FVector2f *OuterLiftOffsetRange, const float * OuterLiftMapValues, const bool bPressureHasMap, const struct FVector2f *PressureOffsetRange, const float * PressureMapValues, const int32_t NumElements, const float MaxVelocitySquared);
#endif // UpdateFieldWithWeightMapsAndClampVelocity function declaraion
#if defined(__cplusplus) && (! defined(__ISPC_NO_EXTERN_C) || !__ISPC_NO_EXTERN_C )
} /* end extern C */
#endif // __cplusplus


#ifdef __cplusplus
} /* namespace */
#endif // __cplusplus
