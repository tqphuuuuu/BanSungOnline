//
// C:\\GitHub\\BanSungOnline\\BanSungOnline\\Intermediate\\Build\\Win64\\x64\\BanSungOnlineServer\\Development\\Chaos\\XPBDAnisotropicSpringConstraints.ispc.generated.dummy_avx512skx.h
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

#ifndef __ISPC_STRUCT_FIntVector__
#define __ISPC_STRUCT_FIntVector__
struct FIntVector {
    int32_t V[3];
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

#ifndef __ISPC_STRUCT_FIntVector2__
#define __ISPC_STRUCT_FIntVector2__
struct FIntVector2 {
    int32_t V[2];
};
#endif


///////////////////////////////////////////////////////////////////////////
// Functions exported from ispc code
///////////////////////////////////////////////////////////////////////////
#if defined(__cplusplus) && (! defined(__ISPC_NO_EXTERN_C) || !__ISPC_NO_EXTERN_C )
extern "C" {
#endif // __cplusplus
#if defined(__cplusplus)
    extern void ApplyXPBDAnisoAxialSpringConstraints(struct FVector4f * PandInvM, const struct FIntVector * Constraints, const float * Barys, const float * Dists, const struct FVector3f * WarpWeftBiasBaseMultiplers, float * Lambdas, const float Dt, const struct FVector3f &Stiffness, const int32_t NumConstraints);
#else
    extern void ApplyXPBDAnisoAxialSpringConstraints(struct FVector4f * PandInvM, const struct FIntVector * Constraints, const float * Barys, const float * Dists, const struct FVector3f * WarpWeftBiasBaseMultiplers, float * Lambdas, const float Dt, const struct FVector3f *Stiffness, const int32_t NumConstraints);
#endif // ApplyXPBDAnisoAxialSpringConstraints function declaraion
#if defined(__cplusplus)
    extern void ApplyXPBDAnisoAxialSpringConstraintsWithDamping(struct FVector4f * PandInvM, const struct FVector3f * X, const struct FIntVector * Constraints, const float * Barys, const float * Dists, const struct FVector3f * WarpWeftBiasBaseMultiplers, float * Lambdas, const float Dt, const struct FVector3f &Stiffness, const float DampingRatio, const int32_t NumConstraints);
#else
    extern void ApplyXPBDAnisoAxialSpringConstraintsWithDamping(struct FVector4f * PandInvM, const struct FVector3f * X, const struct FIntVector * Constraints, const float * Barys, const float * Dists, const struct FVector3f * WarpWeftBiasBaseMultiplers, float * Lambdas, const float Dt, const struct FVector3f *Stiffness, const float DampingRatio, const int32_t NumConstraints);
#endif // ApplyXPBDAnisoAxialSpringConstraintsWithDamping function declaraion
#if defined(__cplusplus)
    extern void ApplyXPBDAnisoAxialSpringConstraintsWithDampingAndWeightMaps(struct FVector4f * PandInvM, const struct FVector3f * X, const struct FIntVector * Constraints, const float * Barys, const float * Dists, const struct FVector3f * WarpWeftBiasBaseMultiplers, float * Lambdas, const float Dt, const bool StiffnessHasMap, const struct FVector2f &StiffnessOffsetRange, const float * StiffnessMapValues, const bool StiffnessWeftHasMap, const struct FVector2f &StiffnessWeftOffsetRange, const float * StiffnessWeftMapValues, const bool StiffnessBiasHasMap, const struct FVector2f &StiffnessBiasOffsetRange, const float * StiffnessBiasMapValues, const bool DampingHasMap, const struct FVector2f &DampingOffsetRange, const float * DampingMapValues, const int32_t NumConstraints);
#else
    extern void ApplyXPBDAnisoAxialSpringConstraintsWithDampingAndWeightMaps(struct FVector4f * PandInvM, const struct FVector3f * X, const struct FIntVector * Constraints, const float * Barys, const float * Dists, const struct FVector3f * WarpWeftBiasBaseMultiplers, float * Lambdas, const float Dt, const bool StiffnessHasMap, const struct FVector2f *StiffnessOffsetRange, const float * StiffnessMapValues, const bool StiffnessWeftHasMap, const struct FVector2f *StiffnessWeftOffsetRange, const float * StiffnessWeftMapValues, const bool StiffnessBiasHasMap, const struct FVector2f *StiffnessBiasOffsetRange, const float * StiffnessBiasMapValues, const bool DampingHasMap, const struct FVector2f *DampingOffsetRange, const float * DampingMapValues, const int32_t NumConstraints);
#endif // ApplyXPBDAnisoAxialSpringConstraintsWithDampingAndWeightMaps function declaraion
#if defined(__cplusplus)
    extern void ApplyXPBDAnisoAxialSpringConstraintsWithWeightMaps(struct FVector4f * PandInvM, const struct FIntVector * Constraints, const float * Barys, const float * Dists, const struct FVector3f * WarpWeftBiasBaseMultiplers, float * Lambdas, const float Dt, const bool StiffnessHasMap, const struct FVector2f &StiffnessOffsetRange, const float * StiffnessMapValues, const bool StiffnessWeftHasMap, const struct FVector2f &StiffnessWeftOffsetRange, const float * StiffnessWeftMapValues, const bool StiffnessBiasHasMap, const struct FVector2f &StiffnessBiasOffsetRange, const float * StiffnessBiasMapValues, const int32_t NumConstraints);
#else
    extern void ApplyXPBDAnisoAxialSpringConstraintsWithWeightMaps(struct FVector4f * PandInvM, const struct FIntVector * Constraints, const float * Barys, const float * Dists, const struct FVector3f * WarpWeftBiasBaseMultiplers, float * Lambdas, const float Dt, const bool StiffnessHasMap, const struct FVector2f *StiffnessOffsetRange, const float * StiffnessMapValues, const bool StiffnessWeftHasMap, const struct FVector2f *StiffnessWeftOffsetRange, const float * StiffnessWeftMapValues, const bool StiffnessBiasHasMap, const struct FVector2f *StiffnessBiasOffsetRange, const float * StiffnessBiasMapValues, const int32_t NumConstraints);
#endif // ApplyXPBDAnisoAxialSpringConstraintsWithWeightMaps function declaraion
#if defined(__cplusplus)
    extern void ApplyXPBDAnisoAxialSpringDampingConstraints(struct FVector4f * PandInvM, const struct FVector3f * X, const struct FIntVector * Constraints, const float * Barys, const float * Dists, const struct FVector3f * WarpWeftBiasBaseMultiplers, float * Lambdas, const float Dt, const struct FVector3f &Stiffness, const float DampingRatio, const int32_t NumConstraints);
#else
    extern void ApplyXPBDAnisoAxialSpringDampingConstraints(struct FVector4f * PandInvM, const struct FVector3f * X, const struct FIntVector * Constraints, const float * Barys, const float * Dists, const struct FVector3f * WarpWeftBiasBaseMultiplers, float * Lambdas, const float Dt, const struct FVector3f *Stiffness, const float DampingRatio, const int32_t NumConstraints);
#endif // ApplyXPBDAnisoAxialSpringDampingConstraints function declaraion
#if defined(__cplusplus)
    extern void ApplyXPBDAnisoAxialSpringDampingConstraintsWithWeightMaps(struct FVector4f * PandInvM, const struct FVector3f * X, const struct FIntVector * Constraints, const float * Barys, const float * Dists, const struct FVector3f * WarpWeftBiasBaseMultiplers, float * Lambdas, const float Dt, const bool StiffnessHasMap, const struct FVector2f &StiffnessOffsetRange, const float * StiffnessMapValues, const bool StiffnessWeftHasMap, const struct FVector2f &StiffnessWeftOffsetRange, const float * StiffnessWeftMapValues, const bool StiffnessBiasHasMap, const struct FVector2f &StiffnessBiasOffsetRange, const float * StiffnessBiasMapValues, const bool DampingHasMap, const struct FVector2f &DampingOffsetRange, const float * DampingMapValues, const int32_t NumConstraints);
#else
    extern void ApplyXPBDAnisoAxialSpringDampingConstraintsWithWeightMaps(struct FVector4f * PandInvM, const struct FVector3f * X, const struct FIntVector * Constraints, const float * Barys, const float * Dists, const struct FVector3f * WarpWeftBiasBaseMultiplers, float * Lambdas, const float Dt, const bool StiffnessHasMap, const struct FVector2f *StiffnessOffsetRange, const float * StiffnessMapValues, const bool StiffnessWeftHasMap, const struct FVector2f *StiffnessWeftOffsetRange, const float * StiffnessWeftMapValues, const bool StiffnessBiasHasMap, const struct FVector2f *StiffnessBiasOffsetRange, const float * StiffnessBiasMapValues, const bool DampingHasMap, const struct FVector2f *DampingOffsetRange, const float * DampingMapValues, const int32_t NumConstraints);
#endif // ApplyXPBDAnisoAxialSpringDampingConstraintsWithWeightMaps function declaraion
#if defined(__cplusplus)
    extern void ApplyXPBDAnisoSpringConstraints(struct FVector4f * PandInvM, const struct FIntVector2 * Constraints, const float * Dists, const struct FVector3f * WarpWeftBiasBaseMultiplers, float * Lambdas, const float Dt, const struct FVector3f &Stiffness, const int32_t NumConstraints);
#else
    extern void ApplyXPBDAnisoSpringConstraints(struct FVector4f * PandInvM, const struct FIntVector2 * Constraints, const float * Dists, const struct FVector3f * WarpWeftBiasBaseMultiplers, float * Lambdas, const float Dt, const struct FVector3f *Stiffness, const int32_t NumConstraints);
#endif // ApplyXPBDAnisoSpringConstraints function declaraion
#if defined(__cplusplus)
    extern void ApplyXPBDAnisoSpringConstraintsWithDamping(struct FVector4f * PandInvM, const struct FVector3f * X, const struct FIntVector2 * Constraints, const float * Dists, const struct FVector3f * WarpWeftBiasBaseMultiplers, float * Lambdas, const float Dt, const struct FVector3f &Stiffness, const float DampingRatio, const int32_t NumConstraints);
#else
    extern void ApplyXPBDAnisoSpringConstraintsWithDamping(struct FVector4f * PandInvM, const struct FVector3f * X, const struct FIntVector2 * Constraints, const float * Dists, const struct FVector3f * WarpWeftBiasBaseMultiplers, float * Lambdas, const float Dt, const struct FVector3f *Stiffness, const float DampingRatio, const int32_t NumConstraints);
#endif // ApplyXPBDAnisoSpringConstraintsWithDamping function declaraion
#if defined(__cplusplus)
    extern void ApplyXPBDAnisoSpringConstraintsWithDampingAndWeightMaps(struct FVector4f * PandInvM, const struct FVector3f * X, const struct FIntVector2 * Constraints, const float * Dists, const struct FVector3f * WarpWeftBiasBaseMultiplers, float * Lambdas, const float Dt, const bool StiffnessHasMap, const struct FVector2f &StiffnessOffsetRange, const float * StiffnessMapValues, const bool StiffnessWeftHasMap, const struct FVector2f &StiffnessWeftOffsetRange, const float * StiffnessWeftMapValues, const bool StiffnessBiasHasMap, const struct FVector2f &StiffnessBiasOffsetRange, const float * StiffnessBiasMapValues, const bool DampingHasMap, const struct FVector2f &DampingOffsetRange, const float * DampingMapValues, const int32_t NumConstraints);
#else
    extern void ApplyXPBDAnisoSpringConstraintsWithDampingAndWeightMaps(struct FVector4f * PandInvM, const struct FVector3f * X, const struct FIntVector2 * Constraints, const float * Dists, const struct FVector3f * WarpWeftBiasBaseMultiplers, float * Lambdas, const float Dt, const bool StiffnessHasMap, const struct FVector2f *StiffnessOffsetRange, const float * StiffnessMapValues, const bool StiffnessWeftHasMap, const struct FVector2f *StiffnessWeftOffsetRange, const float * StiffnessWeftMapValues, const bool StiffnessBiasHasMap, const struct FVector2f *StiffnessBiasOffsetRange, const float * StiffnessBiasMapValues, const bool DampingHasMap, const struct FVector2f *DampingOffsetRange, const float * DampingMapValues, const int32_t NumConstraints);
#endif // ApplyXPBDAnisoSpringConstraintsWithDampingAndWeightMaps function declaraion
#if defined(__cplusplus)
    extern void ApplyXPBDAnisoSpringConstraintsWithWeightMaps(struct FVector4f * PandInvM, const struct FIntVector2 * Constraints, const float * Dists, const struct FVector3f * WarpWeftBiasBaseMultiplers, float * Lambdas, const float Dt, const bool StiffnessHasMap, const struct FVector2f &StiffnessOffsetRange, const float * StiffnessMapValues, const bool StiffnessWeftHasMap, const struct FVector2f &StiffnessWeftOffsetRange, const float * StiffnessWeftMapValues, const bool StiffnessBiasHasMap, const struct FVector2f &StiffnessBiasOffsetRange, const float * StiffnessBiasMapValues, const int32_t NumConstraints);
#else
    extern void ApplyXPBDAnisoSpringConstraintsWithWeightMaps(struct FVector4f * PandInvM, const struct FIntVector2 * Constraints, const float * Dists, const struct FVector3f * WarpWeftBiasBaseMultiplers, float * Lambdas, const float Dt, const bool StiffnessHasMap, const struct FVector2f *StiffnessOffsetRange, const float * StiffnessMapValues, const bool StiffnessWeftHasMap, const struct FVector2f *StiffnessWeftOffsetRange, const float * StiffnessWeftMapValues, const bool StiffnessBiasHasMap, const struct FVector2f *StiffnessBiasOffsetRange, const float * StiffnessBiasMapValues, const int32_t NumConstraints);
#endif // ApplyXPBDAnisoSpringConstraintsWithWeightMaps function declaraion
#if defined(__cplusplus)
    extern void ApplyXPBDAnisoSpringDampingConstraints(struct FVector4f * PandInvM, const struct FVector3f * X, const struct FIntVector2 * Constraints, const float * Dists, const struct FVector3f * WarpWeftBiasBaseMultiplers, float * Lambdas, const float Dt, const struct FVector3f &Stiffness, const float DampingRatio, const int32_t NumConstraints);
#else
    extern void ApplyXPBDAnisoSpringDampingConstraints(struct FVector4f * PandInvM, const struct FVector3f * X, const struct FIntVector2 * Constraints, const float * Dists, const struct FVector3f * WarpWeftBiasBaseMultiplers, float * Lambdas, const float Dt, const struct FVector3f *Stiffness, const float DampingRatio, const int32_t NumConstraints);
#endif // ApplyXPBDAnisoSpringDampingConstraints function declaraion
#if defined(__cplusplus)
    extern void ApplyXPBDAnisoSpringDampingConstraintsWithWeightMaps(struct FVector4f * PandInvM, const struct FVector3f * X, const struct FIntVector2 * Constraints, const float * Dists, const struct FVector3f * WarpWeftBiasBaseMultiplers, float * Lambdas, const float Dt, const bool StiffnessHasMap, const struct FVector2f &StiffnessOffsetRange, const float * StiffnessMapValues, const bool StiffnessWeftHasMap, const struct FVector2f &StiffnessWeftOffsetRange, const float * StiffnessWeftMapValues, const bool StiffnessBiasHasMap, const struct FVector2f &StiffnessBiasOffsetRange, const float * StiffnessBiasMapValues, const bool DampingHasMap, const struct FVector2f &DampingOffsetRange, const float * DampingMapValues, const int32_t NumConstraints);
#else
    extern void ApplyXPBDAnisoSpringDampingConstraintsWithWeightMaps(struct FVector4f * PandInvM, const struct FVector3f * X, const struct FIntVector2 * Constraints, const float * Dists, const struct FVector3f * WarpWeftBiasBaseMultiplers, float * Lambdas, const float Dt, const bool StiffnessHasMap, const struct FVector2f *StiffnessOffsetRange, const float * StiffnessMapValues, const bool StiffnessWeftHasMap, const struct FVector2f *StiffnessWeftOffsetRange, const float * StiffnessWeftMapValues, const bool StiffnessBiasHasMap, const struct FVector2f *StiffnessBiasOffsetRange, const float * StiffnessBiasMapValues, const bool DampingHasMap, const struct FVector2f *DampingOffsetRange, const float * DampingMapValues, const int32_t NumConstraints);
#endif // ApplyXPBDAnisoSpringDampingConstraintsWithWeightMaps function declaraion
#if defined(__cplusplus) && (! defined(__ISPC_NO_EXTERN_C) || !__ISPC_NO_EXTERN_C )
} /* end extern C */
#endif // __cplusplus


#ifdef __cplusplus
} /* namespace */
#endif // __cplusplus
