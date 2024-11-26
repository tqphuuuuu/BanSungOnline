//
// C:\\GameOnline\\BanSungOnline\\BanSungOnline\\Intermediate\\Build\\Win64\\x64\\BanSungOnlineServer\\Development\\Chaos\\PBDSphericalConstraint.ispc.generated.dummy.h
// (Header automatically generated by the ispc compiler.)
// DO NOT EDIT THIS FILE.
//

#pragma once
#include <stdint.h>



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


///////////////////////////////////////////////////////////////////////////
// Functions exported from ispc code
///////////////////////////////////////////////////////////////////////////
#if defined(__cplusplus) && (! defined(__ISPC_NO_EXTERN_C) || !__ISPC_NO_EXTERN_C )
extern "C" {
#endif // __cplusplus
    extern void ApplyLegacySphericalBackstopConstraints(struct FVector4f * ParticlesPandInvM, const struct FVector3f * AnimationPositions, const struct FVector3f * AnimationNormals, const float * SphereOffsetDistances, const float * SphereRadii, const float SphereRadiiMultiplier, const int32_t ParticleOffset, const int32_t ParticleCount);
    extern void ApplyLegacySphericalBackstopConstraintsWithDistanceMap(struct FVector4f * ParticlesPandInvM, const struct FVector3f * AnimationPositions, const struct FVector3f * AnimationNormals, const float * SphereOffsetDistances, const float SphereOffsetDistancesBase, const float SphereOffsetDistancesRange, const float Radius, const int32_t ParticleOffset, const int32_t ParticleCount);
    extern void ApplyLegacySphericalBackstopConstraintsWithMaps(struct FVector4f * ParticlesPandInvM, const struct FVector3f * AnimationPositions, const struct FVector3f * AnimationNormals, const float * SphereOffsetDistances, const float * SphereRadii, const float SphereOffsetDistancesBase, const float SphereOffsetDistancesRange, const float SphereRadiiBase, const float SphereRadiiRange, const int32_t ParticleOffset, const int32_t ParticleCount);
    extern void ApplyLegacySphericalBackstopConstraintsWithRadiusMap(struct FVector4f * ParticlesPandInvM, const struct FVector3f * AnimationPositions, const struct FVector3f * AnimationNormals, const float * SphereRadii, const float SphereOffsetDistance, const float SphereRadiiBase, const float SphereRadiiRange, const int32_t ParticleOffset, const int32_t ParticleCount);
    extern void ApplyLegacySphericalBackstopConstraintsWithoutMaps(struct FVector4f * ParticlesPandInvM, const struct FVector3f * AnimationPositions, const struct FVector3f * AnimationNormals, const float SphereOffsetDistance, const float Radius, const int32_t ParticleOffset, const int32_t ParticleCount);
    extern void ApplySphericalBackstopConstraints(struct FVector4f * ParticlesPandInvM, const struct FVector3f * AnimationPositions, const struct FVector3f * AnimationNormals, const float * SphereOffsetDistances, const float * SphereRadii, const float SphereRadiiMultiplier, const int32_t ParticleOffset, const int32_t ParticleCount);
    extern void ApplySphericalBackstopConstraintsWithDistanceMap(struct FVector4f * ParticlesPandInvM, const struct FVector3f * AnimationPositions, const struct FVector3f * AnimationNormals, const float * SphereOffsetDistances, const float SphereOffsetDistancesBase, const float SphereOffsetDistancesRange, const float Radius, const int32_t ParticleOffset, const int32_t ParticleCount);
    extern void ApplySphericalBackstopConstraintsWithMaps(struct FVector4f * ParticlesPandInvM, const struct FVector3f * AnimationPositions, const struct FVector3f * AnimationNormals, const float * SphereOffsetDistances, const float * SphereRadii, const float SphereOffsetDistancesBase, const float SphereOffsetDistancesRange, const float SphereRadiiBase, const float SphereRadiiRange, const int32_t ParticleOffset, const int32_t ParticleCount);
    extern void ApplySphericalBackstopConstraintsWithRadiusMap(struct FVector4f * ParticlesPandInvM, const struct FVector3f * AnimationPositions, const struct FVector3f * AnimationNormals, const float * SphereRadii, const float SphereOffsetDistance, const float SphereRadiiBase, const float SphereRadiiRange, const int32_t ParticleOffset, const int32_t ParticleCount);
    extern void ApplySphericalBackstopConstraintsWithoutMaps(struct FVector4f * ParticlesPandInvM, const struct FVector3f * AnimationPositions, const struct FVector3f * AnimationNormals, const float SphereOffsetDistance, const float Radius, const int32_t ParticleOffset, const int32_t ParticleCount);
    extern void ApplySphericalConstraints(struct FVector4f * ParticlesPandInvM, const struct FVector3f * AnimationPositions, const float * SphereRadii, const float SphereRadiiMultiplier, const int32_t ParticleOffset, const int32_t ParticleCount);
    extern void ApplySphericalConstraintsWithMap(struct FVector4f * ParticlesPandInvM, const struct FVector3f * AnimationPositions, const float * SphereRadii, const float SphereRadiiBase, const float SphereRadiiRange, const int32_t ParticleOffset, const int32_t ParticleCount);
    extern void ApplySphericalConstraintsWithoutMap(struct FVector4f * ParticlesPandInvM, const struct FVector3f * AnimationPositions, const float Radius, const int32_t ParticleOffset, const int32_t ParticleCount);
#if defined(__cplusplus) && (! defined(__ISPC_NO_EXTERN_C) || !__ISPC_NO_EXTERN_C )
} /* end extern C */
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



#ifdef __cplusplus
} /* namespace */
#endif // __cplusplus
