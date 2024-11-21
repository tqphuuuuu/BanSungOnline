//
// C:\\GitHub\\BanSungOnline\\BanSungOnline\\Intermediate\\Build\\Win64\\x64\\BanSungOnlineServer\\Development\\Chaos\\PBDMinEvolution.ispc.generated.dummy_avx.h
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

#ifndef __ISPC_STRUCT_FPBDRigidArrays__
#define __ISPC_STRUCT_FPBDRigidArrays__
struct FPBDRigidArrays {
    int32_t NumParticles;
    int8_t * ObjectState;
    struct FVector * X;
    struct FVector * P;
    struct FVector4 * R;
    struct FVector4 * Q;
    struct FVector * V;
    struct FVector * PreV;
    struct FVector * W;
    struct FVector * PreW;
    struct FVector * CenterOfMass;
    struct FVector4 * RotationOfMass;
    double * InvM;
    struct FMatrix * InvI;
    struct FVector * F;
    struct FVector * T;
    struct FVector * LinearImpulse;
    struct FVector * AngularImpulse;
    int8_t * Disabled;
    int8_t * GravityEnabled;
    double * LinearEtherDrag;
    double * AngularEtherDrag;
    int8_t * HasBounds;
    struct FAABB * LocalBounds;
    struct FAABB * WorldBounds;
};
#endif

#ifndef __ISPC_STRUCT_FVector__
#define __ISPC_STRUCT_FVector__
struct FVector {
    double V[3];
};
#endif

#ifndef __ISPC_STRUCT_FVector4__
#define __ISPC_STRUCT_FVector4__
struct FVector4 {
    double V[4];
};
#endif

#ifndef __ISPC_STRUCT_FMatrix__
#define __ISPC_STRUCT_FMatrix__
struct FMatrix {
    double M[16];
};
#endif

#ifndef __ISPC_STRUCT_FAABB__
#define __ISPC_STRUCT_FAABB__
struct FAABB {
    struct FVector Min;
    struct FVector Max;
};
#endif

#ifndef __ISPC_STRUCT_FTransform__
#define __ISPC_STRUCT_FTransform__
struct FTransform {
    struct FVector4 Rotation;
    struct FVector4 Translation;
    struct FVector4 Scale3D;
};
#endif

#ifndef __ISPC_STRUCT_FSimulationSpace__
#define __ISPC_STRUCT_FSimulationSpace__
struct FSimulationSpace {
    struct FTransform Transform;
    struct FVector LinearAcceleration;
    struct FVector AngularAcceleration;
    struct FVector LinearVelocity;
    struct FVector AngularVelocity;
};
#endif

#ifndef __ISPC_STRUCT_FSimulationSpaceSettings__
#define __ISPC_STRUCT_FSimulationSpaceSettings__
struct FSimulationSpaceSettings {
    double MasterAlpha;
    double LinearAccelerationAlpha;
    double CoriolisAlpha;
    double CentrifugalAlpha;
    double EulerAlpha;
    double AngularAccelerationAlpha;
    double LinearVelocityAlpha;
    double AngularVelocityAlpha;
    struct FVector ExternalLinearEtherDrag;
};
#endif


///////////////////////////////////////////////////////////////////////////
// Functions exported from ispc code
///////////////////////////////////////////////////////////////////////////
#if defined(__cplusplus) && (! defined(__ISPC_NO_EXTERN_C) || !__ISPC_NO_EXTERN_C )
extern "C" {
#endif // __cplusplus
#if defined(__cplusplus)
    extern void MinEvolutionIntegrate(double Dt, struct FPBDRigidArrays &Rigids, struct FSimulationSpace &SimulationSpace, struct FSimulationSpaceSettings &SimulationSpaceSettings, const struct FVector &Gravity, const double BoundsExtension, const double CullDistance);
#else
    extern void MinEvolutionIntegrate(double Dt, struct FPBDRigidArrays *Rigids, struct FSimulationSpace *SimulationSpace, struct FSimulationSpaceSettings *SimulationSpaceSettings, const struct FVector *Gravity, const double BoundsExtension, const double CullDistance);
#endif // MinEvolutionIntegrate function declaraion
    extern int32_t SizeofFAABB();
    extern int32_t SizeofFPBDRigidArrays();
    extern int32_t SizeofFSimulationSpace();
    extern int32_t SizeofFSimulationSpaceSettings();
    extern int32_t SizeofFTransform();
    extern int32_t ValueOfEObjectStateTypeDynamic();
#if defined(__cplusplus) && (! defined(__ISPC_NO_EXTERN_C) || !__ISPC_NO_EXTERN_C )
} /* end extern C */
#endif // __cplusplus


#ifdef __cplusplus
} /* namespace */
#endif // __cplusplus
