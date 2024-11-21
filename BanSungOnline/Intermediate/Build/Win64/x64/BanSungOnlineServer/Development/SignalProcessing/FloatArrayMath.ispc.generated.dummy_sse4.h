//
// C:\\GitHub\\BanSungOnline\\BanSungOnline\\Intermediate\\Build\\Win64\\x64\\BanSungOnlineServer\\Development\\SignalProcessing\\FloatArrayMath.ispc.generated.dummy_sse4.h
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


///////////////////////////////////////////////////////////////////////////
// Functions exported from ispc code
///////////////////////////////////////////////////////////////////////////
#if defined(__cplusplus) && (! defined(__ISPC_NO_EXTERN_C) || !__ISPC_NO_EXTERN_C )
extern "C" {
#endif // __cplusplus
    extern void ArrayAPFLongDelayProcess(const float * InSamples, const float * InDelaySamples, const int32_t InNum, float * OutSamples, float * OutDelaySamples, const float Gain);
    extern void ArrayAbs(const float * InData, float * OutData, const int32_t Num);
    extern void ArrayAbsInPlace(float * Data, const int32_t Num);
    extern void ArrayAddConstantInplace(float * OutFloatBuffer, const int32_t NumSamples, const float InConstant);
    extern void ArrayAddInPlace(const float * InData, float * InAccumulateData, const int32_t Num);
    extern void ArrayClampInPlace(float * Data, const float InMin, const float InMax, const int32_t Num);
    extern void ArrayClampMaxInPlace(float * Data, const float InMax, const int32_t Num);
    extern void ArrayClampMinInPlace(float * Data, const float InMin, const int32_t Num);
    extern void ArrayComplexConjugate(const float * InData, float * OutData, const int32_t Num);
    extern void ArrayComplexConjugateInPlace(float * InData, const int32_t Num);
    extern void ArrayComplexMultiplyAdd(const float * InA, const float * InB, float * Out, const int32_t Num);
    extern void ArrayComplexMultiplyInPlace(const float * InData1, float * InData2, const int32_t Num);
    extern void ArrayComplexToPower(const float * InRealSamples, const float * InImaginarySamples, float * OutPowerSamples, const int32_t NumSamples);
    extern void ArrayComplexToPowerInterleaved(const float * InComplexData, float * OutPowerData, const int32_t Num);
    extern void ArrayCumulativeSum(const float * InViewPtr, float * OutDataPtr, const int32_t Num);
    extern void ArrayFade(float * OutFloatBuffer, const int32_t NumSamples, const float StartValue, const float EndValue);
    extern void ArrayFade2(const float * InBuffer, const int32_t NumSamples, const float StartValue, const float EndValue, float * OutBuffer);
    extern void ArrayFloatToPcm16(const float * InBuffer, int16_t * OutBuffer, const int32_t Num);
    extern float ArrayGetAverageAbsValue(const float * Buffer, const int32_t NumSamples);
    extern float ArrayGetAverageValue(const float * Buffer, const int32_t NumSamples);
#if defined(__cplusplus)
    extern void ArrayGetEuclideanNorm(const float * InViewData, float &OutEuclideanNorm, const int32_t Num);
#else
    extern void ArrayGetEuclideanNorm(const float * InViewData, float *OutEuclideanNorm, const int32_t Num);
#endif // ArrayGetEuclideanNorm function declaraion
    extern float ArrayGetMagnitude(const float * Buffer, const int32_t NumSamples);
    extern void ArrayLerpAddInPlace(const float * InData, const float InStartMultiplier, const float InEndMultiplier, float * InAccumulateData, const int32_t Num);
    extern void ArrayLerpFractionalDelay(const float * InSamples, const float * InDelays, const float * DelayData, const int32_t * IntegerDelays, const int32_t InNum, float * OutSamples, const float MaxDelay);
    extern void ArrayMagnitudeToDecibelInPlace(float * InData, const float InMinimumDb, const int32_t Num);
    extern void ArrayMax(const float * InFloatBuffer1, const float * InFloatBuffer2, float * OutputBuffer, const int32_t Num);
    extern float ArrayMaxAbsValue(const float * DataPtr, const int32_t Num);
#if defined(__cplusplus)
    extern void ArrayMean(const float * DataPtr, float &OutMean, const int32_t Num);
#else
    extern void ArrayMean(const float * DataPtr, float *OutMean, const int32_t Num);
#endif // ArrayMean function declaraion
    extern void ArrayMeanFilter(const float * SummedDataPtr, const int32_t WindowSize, const int32_t WindowOrigin, float * OutDataPtr, const float LastSummedData, const int32_t Num);
#if defined(__cplusplus)
    extern void ArrayMeanSquared(const float * DataPtr, float &OutMean, const int32_t Num);
#else
    extern void ArrayMeanSquared(const float * DataPtr, float *OutMean, const int32_t Num);
#endif // ArrayMeanSquared function declaraion
    extern void ArrayMinMaxNormalize(const float * InDataPtr, float * OutDataPtr, const int32_t Num);
    extern void ArrayMixIn(const float * InFloatBuffer, float * BufferToSumTo, const int32_t NumSamples);
    extern void ArrayMixInWithDelta(const float * InFloatBuffer, float * BufferToSumTo, const int32_t NumSamples, const float StartGain, const float EndGain);
    extern void ArrayMixInWithGain(const float * InFloatBuffer, float * BufferToSumTo, const int32_t NumSamples, const float Gain);
    extern void ArrayMultiply(const float * InFloatBuffer, const float * BufferToMultiply, float * OutDataPtr, const int32_t NumSamples);
    extern void ArrayMultiplyAddInPlace(const float * InData, const float InMultiplier, float * InAccumulateData, const int32_t Num);
    extern void ArrayMultiplyByConstant(const float * InFloatBuffer, const float InValue, float * OutFloatBuffer, const int32_t InNumSamples);
    extern void ArrayMultiplyByConstantInPlace(float * OutFloatBuffer, const int32_t NumSamples, const float InGain);
    extern void ArrayMultiplyInPlace(const float * InFloatBuffer, float * BufferToMultiply, const int32_t NumSamples);
    extern void ArrayPcm16ToFloat(const int16_t * InBuffer, float * OutBuffer, const int32_t Num);
    extern void ArrayPowerToDecibelInPlace(float * InData, const float InMinimumDb, const int32_t Num);
    extern void ArrayRangeClamp(float * InOutBuffer, const int32_t InNum, const float InMinValue, const float InMaxValue);
    extern void ArrayScaledComplexConjugate(const float * InValues, const int32_t Num, float * OutValues, const float Scale);
    extern void ArraySetToConstantInplace(float * InBuffer, const int32_t NumSamples, const float InConstant);
    extern void ArraySqrtInPlace(float * InData, const int32_t Num);
    extern void ArraySquare(const float * InData, float * OutData, const int32_t Num);
    extern void ArraySquareInPlace(float * InData, const int32_t Num);
    extern void ArraySubtract(const float * InMinuend, const float * InSubtrahend, float * OutBuffer, const int32_t InNum);
    extern void ArraySubtractByConstantInPlace(float * InData, const float InSubtrahend, const int32_t Num);
    extern void ArraySubtractInPlace1(const float * InMinuend, float * InOutSubtrahend, const int32_t InNum);
    extern void ArraySubtractInPlace2(float * InOutMinuend, const float * InSubtrahend, const int32_t InNum);
#if defined(__cplusplus)
    extern void ArraySum(const float * InData, float &OutSum, const int32_t Num);
#else
    extern void ArraySum(const float * InData, float *OutSum, const int32_t Num);
#endif // ArraySum function declaraion
    extern void ArraySum2(const float * InFloatBuffer1, const float * InFloatBuffer2, float * OutputBuffer, const int32_t NumSamples);
    extern void ArrayUnderflowClamp(float * InOutBuffer, const int32_t InNum);
    extern void ArrayWeightedSumOneGain(const float * InBuffer1, const float InGain1, const float * InBuffer2, float * OutBuffer, const int32_t InNum);
    extern void ArrayWeightedSumTwoGain(const float * InBuffer1, const float InGain1, const float * InBuffer2, const float InGain2, float * OutBuffer, const int32_t InNum);
    extern void TransformArrayRow(const float * OffsetInData, const float * RowValuePtr, float * OutArray, const int32_t RowIndex, const int32_t NumToMult);
#if defined(__cplusplus) && (! defined(__ISPC_NO_EXTERN_C) || !__ISPC_NO_EXTERN_C )
} /* end extern C */
#endif // __cplusplus


#ifdef __cplusplus
} /* namespace */
#endif // __cplusplus
