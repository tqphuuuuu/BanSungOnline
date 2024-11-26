//
// C:\\GameOnline\\BanSungOnline\\BanSungOnline\\Intermediate\\Build\\Win64\\x64\\BanSungOnlineServer\\Development\\Chaos\\XPBDBendingConstraints.ispc.generated.dummy_avx512skx.h
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
///////////////////////////////////////////////////////////////////////////
// Vector types with external visibility from ispc code
///////////////////////////////////////////////////////////////////////////

#ifndef __ISPC_VECTOR_float4__
#define __ISPC_VECTOR_float4__
#ifdef _MSC_VER
__declspec( align(16) ) struct float4 { float v[4]; };
#else
struct float4 { float v[4]; } __attribute__ ((aligned(16)));
#endif
#endif



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

#ifndef __ISPC_STRUCT_FVector4f__
#define __ISPC_STRUCT_FVector4f__
struct FVector4f {
    struct float4  V;
};
#endif

#ifndef __ISPC_STRUCT_FVector3f__
#define __ISPC_STRUCT_FVector3f__
struct FVector3f {
    float V[3];
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
    extern void ApplyXPBDBendingConstraints(struct FVector4f * PandInvM, const int32_t * ConstraintIndex1, const int32_t * ConstraintIndex2, const int32_t * ConstraintIndex3, const int32_t * ConstraintIndex4, const float * RestAngles, const bool * IsBuckled, float * Lambdas, const float Dt, const float Stiffness, const float BucklingStiffness, const int32_t NumConstraints);
    extern void ApplyXPBDBendingConstraintsWithDamping(struct FVector4f * PandInvM, const struct FVector3f * X1Array, const struct FVector3f * X2Array, const struct FVector3f * X3Array, const struct FVector3f * X4Array, const int32_t * ConstraintIndex1, const int32_t * ConstraintIndex2, const int32_t * ConstraintIndex3, const int32_t * ConstraintIndex4, const float * RestAngles, const bool * IsBuckled, float * Lambdas, const float Dt, const float Stiffness, const float BucklingStiffness, const float DampingRatio, const int32_t NumConstraints);
#if defined(__cplusplus)
    extern void ApplyXPBDBendingConstraintsWithDampingAndMaps(struct FVector4f * PandInvM, const struct FVector3f * X1Array, const struct FVector3f * X2Array, const struct FVector3f * X3Array, const struct FVector3f * X4Array, const int32_t * ConstraintIndex1, const int32_t * ConstraintIndex2, const int32_t * ConstraintIndex3, const int32_t * ConstraintIndex4, const float * RestAngles, const bool * IsBuckled, float * Lambdas, const float Dt, const bool StiffnessHasMap, const struct FVector2f &StiffnessOffsetRange, const float * StiffnessMapValues, const bool BucklingStiffnessHasMap, const struct FVector2f &BucklingStiffnessOffsetRange, const float * BucklingStiffnessMapValues, const bool DampingHasMap, const struct FVector2f &DampingOffsetRange, const float * DampingMapValues, const int32_t NumConstraints);
#else
    extern void ApplyXPBDBendingConstraintsWithDampingAndMaps(struct FVector4f * PandInvM, const struct FVector3f * X1Array, const struct FVector3f * X2Array, const struct FVector3f * X3Array, const struct FVector3f * X4Array, const int32_t * ConstraintIndex1, const int32_t * ConstraintIndex2, const int32_t * ConstraintIndex3, const int32_t * ConstraintIndex4, const float * RestAngles, const bool * IsBuckled, float * Lambdas, const float Dt, const bool StiffnessHasMap, const struct FVector2f *StiffnessOffsetRange, const float * StiffnessMapValues, const bool BucklingStiffnessHasMap, const struct FVector2f *BucklingStiffnessOffsetRange, const float * BucklingStiffnessMapValues, const bool DampingHasMap, const struct FVector2f *DampingOffsetRange, const float * DampingMapValues, const int32_t NumConstraints);
#endif // ApplyXPBDBendingConstraintsWithDampingAndMaps function declaraion
#if defined(__cplusplus)
    extern void ApplyXPBDBendingConstraintsWithMaps(struct FVector4f * PandInvM, const int32_t * ConstraintIndex1, const int32_t * ConstraintIndex2, const int32_t * ConstraintIndex3, const int32_t * ConstraintIndex4, const float * RestAngles, const bool * IsBuckled, float * Lambdas, const float Dt, const bool StiffnessHasMap, const struct FVector2f &StiffnessOffsetRange, const float * StiffnessMapValues, const bool BucklingStiffnessHasMap, const struct FVector2f &BucklingStiffnessOffsetRange, const float * BucklingStiffnessMapValues, const int32_t NumConstraints);
#else
    extern void ApplyXPBDBendingConstraintsWithMaps(struct FVector4f * PandInvM, const int32_t * ConstraintIndex1, const int32_t * ConstraintIndex2, const int32_t * ConstraintIndex3, const int32_t * ConstraintIndex4, const float * RestAngles, const bool * IsBuckled, float * Lambdas, const float Dt, const bool StiffnessHasMap, const struct FVector2f *StiffnessOffsetRange, const float * StiffnessMapValues, const bool BucklingStiffnessHasMap, const struct FVector2f *BucklingStiffnessOffsetRange, const float * BucklingStiffnessMapValues, const int32_t NumConstraints);
#endif // ApplyXPBDBendingConstraintsWithMaps function declaraion
    extern void ApplyXPBDBendingDampingConstraints(struct FVector4f * PandInvM, const struct FVector3f * X1Array, const struct FVector3f * X2Array, const struct FVector3f * X3Array, const struct FVector3f * X4Array, const int32_t * ConstraintIndex1, const int32_t * ConstraintIndex2, const int32_t * ConstraintIndex3, const int32_t * ConstraintIndex4, const float * RestAngles, const bool * IsBuckled, float * Lambdas, const float Dt, const float Stiffness, const float BucklingStiffness, const float DampingRatio, const int32_t NumConstraints);
#if defined(__cplusplus)
    extern void ApplyXPBDBendingDampingConstraintsWithMaps(struct FVector4f * PandInvM, const struct FVector3f * X1Array, const struct FVector3f * X2Array, const struct FVector3f * X3Array, const struct FVector3f * X4Array, const int32_t * ConstraintIndex1, const int32_t * ConstraintIndex2, const int32_t * ConstraintIndex3, const int32_t * ConstraintIndex4, const float * RestAngles, const bool * IsBuckled, float * Lambdas, const float Dt, const bool StiffnessHasMap, const struct FVector2f &StiffnessOffsetRange, const float * StiffnessMapValues, const bool BucklingStiffnessHasMap, const struct FVector2f &BucklingStiffnessOffsetRange, const float * BucklingStiffnessMapValues, const bool DampingHasMap, const struct FVector2f &DampingOffsetRange, const float * DampingMapValues, const int32_t NumConstraints);
#else
    extern void ApplyXPBDBendingDampingConstraintsWithMaps(struct FVector4f * PandInvM, const struct FVector3f * X1Array, const struct FVector3f * X2Array, const struct FVector3f * X3Array, const struct FVector3f * X4Array, const int32_t * ConstraintIndex1, const int32_t * ConstraintIndex2, const int32_t * ConstraintIndex3, const int32_t * ConstraintIndex4, const float * RestAngles, const bool * IsBuckled, float * Lambdas, const float Dt, const bool StiffnessHasMap, const struct FVector2f *StiffnessOffsetRange, const float * StiffnessMapValues, const bool BucklingStiffnessHasMap, const struct FVector2f *BucklingStiffnessOffsetRange, const float * BucklingStiffnessMapValues, const bool DampingHasMap, const struct FVector2f *DampingOffsetRange, const float * DampingMapValues, const int32_t NumConstraints);
#endif // ApplyXPBDBendingDampingConstraintsWithMaps function declaraion
    extern void InitXPBDBendingConstraintsIsBuckled(const struct FVector3f * X, const int32_t * ConstraintIndex1, const int32_t * ConstraintIndex2, const int32_t * ConstraintIndex3, const int32_t * ConstraintIndex4, const float * RestAngles, bool * IsBuckled, struct FVector3f * X1Out, struct FVector3f * X2Out, struct FVector3f * X3Out, struct FVector3f * X4Out, const float BucklingRatio, const int32_t NumConstraints);
    extern void InitXPBDBendingConstraintsIsBuckledWithMaps(const struct FVector3f * X, const int32_t * ConstraintIndex1, const int32_t * ConstraintIndex2, const int32_t * ConstraintIndex3, const int32_t * ConstraintIndex4, const float * RestAngles, bool * IsBuckled, struct FVector3f * X1Out, struct FVector3f * X2Out, struct FVector3f * X3Out, struct FVector3f * X4Out, const uint8_t * BucklingRatioIndices, const float * BucklingRatioTable, const int32_t NumConstraints);
#if defined(__cplusplus) && (! defined(__ISPC_NO_EXTERN_C) || !__ISPC_NO_EXTERN_C )
} /* end extern C */
#endif // __cplusplus


#ifdef __cplusplus
} /* namespace */
#endif // __cplusplus
