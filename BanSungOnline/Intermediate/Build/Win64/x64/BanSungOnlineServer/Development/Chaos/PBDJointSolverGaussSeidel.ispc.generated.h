//
// C:\\GameOnline\\BanSungOnline\\BanSungOnline\\Intermediate\\Build\\Win64\\x64\\BanSungOnlineServer\\Development\\Chaos\\PBDJointSolverGaussSeidel.ispc.generated.dummy.h
// (Header automatically generated by the ispc compiler.)
// DO NOT EDIT THIS FILE.
//

#pragma once
#include <stdint.h>



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

#ifndef __ISPC_STRUCT_FVector4__
#define __ISPC_STRUCT_FVector4__
struct FVector4 {
    double V[4];
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

#ifndef __ISPC_STRUCT_FVector__
#define __ISPC_STRUCT_FVector__
struct FVector {
    double V[3];
};
#endif

#ifndef __ISPC_STRUCT_FMatrix__
#define __ISPC_STRUCT_FMatrix__
struct FMatrix {
    double M[16];
};
#endif

#ifndef __ISPC_STRUCT_FPBDJointSolver__
#define __ISPC_STRUCT_FPBDJointSolver__
struct FPBDJointSolver {
    struct FTransform XLs[2];
    struct FVector InvILs[2];
    double InvMs[2];
    struct FVector Xs[2];
    struct FVector4 Rs[2];
    struct FVector Ps[2];
    struct FVector4 Qs[2];
    struct FVector Vs[2];
    struct FVector Ws[2];
    struct FMatrix InvIs[2];
    struct FVector InitPs[2];
    struct FVector4 InitQs[2];
    struct FVector InitXs[2];
    struct FVector4 InitRs[2];
    struct FVector NetLinearImpulse;
    struct FVector NetAngularImpulse;
    struct FVector LinearHardLambda;
    struct FVector AngularHardLambda;
    double LinearSoftLambda;
    double TwistSoftLambda;
    double SwingSoftLambda;
    struct FVector LinearDriveLambdas;
    struct FVector RotationDriveLambdas;
    double SolverStiffness;
    struct FVector LinearConstraintPadding;
    struct FVector AngularConstraintPadding;
    double PositionTolerance;
    double AngleTolerance;
    struct FVector LastPs[2];
    struct FVector4 LastQs[2];
    int32_t NumActiveConstraints;
    bool bIsActive;
};
#endif


///////////////////////////////////////////////////////////////////////////
// Functions exported from ispc code
///////////////////////////////////////////////////////////////////////////
#if defined(__cplusplus) && (! defined(__ISPC_NO_EXTERN_C) || !__ISPC_NO_EXTERN_C )
extern "C" {
#endif // __cplusplus
#if defined(__cplusplus)
    extern void ApplyPointPositionConstraintDD(struct FPBDJointSolver * M, const struct FVector &CX, const double InStiffness);
#else
    extern void ApplyPointPositionConstraintDD(struct FPBDJointSolver * M, const struct FVector *CX, const double InStiffness);
#endif // ApplyPointPositionConstraintDD function declaraion
#if defined(__cplusplus)
    extern void ApplyPointPositionConstraintKD(struct FPBDJointSolver * M, const int32_t KIndex, const int32_t DIndex, const struct FVector &CX, const double InStiffness);
#else
    extern void ApplyPointPositionConstraintKD(struct FPBDJointSolver * M, const int32_t KIndex, const int32_t DIndex, const struct FVector *CX, const double InStiffness);
#endif // ApplyPointPositionConstraintKD function declaraion
#if defined(__cplusplus)
    extern void ApplyPositionConstraintSoft(struct FPBDJointSolver * M, const double Dt, const double JointStiffness, const double JointDamping, const bool bAccelerationMode, const struct FVector &Axis, const double Delta, const double TargetVel, double &Lambda);
#else
    extern void ApplyPositionConstraintSoft(struct FPBDJointSolver * M, const double Dt, const double JointStiffness, const double JointDamping, const bool bAccelerationMode, const struct FVector *Axis, const double Delta, const double TargetVel, double *Lambda);
#endif // ApplyPositionConstraintSoft function declaraion
#if defined(__cplusplus)
    extern void ApplyRotationConstraintSoftDD(struct FPBDJointSolver * M, const double Dt, const double JointStiffness, const double JointDamping, const bool bAccelerationMode, const struct FVector &Axis, const double Angle, const double AngVelTarget, double &Lambda);
#else
    extern void ApplyRotationConstraintSoftDD(struct FPBDJointSolver * M, const double Dt, const double JointStiffness, const double JointDamping, const bool bAccelerationMode, const struct FVector *Axis, const double Angle, const double AngVelTarget, double *Lambda);
#endif // ApplyRotationConstraintSoftDD function declaraion
#if defined(__cplusplus)
    extern void ApplyRotationConstraintSoftKD(struct FPBDJointSolver * M, const int32_t KIndex, const int32_t DIndex, const double Dt, const double JointStiffness, const double JointDamping, const bool bAccelerationMode, const struct FVector &Axis, const double Angle, const double AngVelTarget, double &Lambda);
#else
    extern void ApplyRotationConstraintSoftKD(struct FPBDJointSolver * M, const int32_t KIndex, const int32_t DIndex, const double Dt, const double JointStiffness, const double JointDamping, const bool bAccelerationMode, const struct FVector *Axis, const double Angle, const double AngVelTarget, double *Lambda);
#endif // ApplyRotationConstraintSoftKD function declaraion
#if defined(__cplusplus)
    extern void ApplyRotationDelta2(struct FPBDJointSolver * M, const struct FVector &DR0, const struct FVector &DR1);
#else
    extern void ApplyRotationDelta2(struct FPBDJointSolver * M, const struct FVector *DR0, const struct FVector *DR1);
#endif // ApplyRotationDelta2 function declaraion
    extern int32_t SizeofFPBDJointSolver();
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
