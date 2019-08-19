/*
 * RateControl_private.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "RateControl".
 *
 * Model version              : 1.1014
 * Simulink Coder version : 9.1 (R2019a) 23-Nov-2018
 * C++ source code generated on : Thu Aug 15 10:24:28 2019
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_RateControl_private_h_
#define RTW_HEADER_RateControl_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern const real32_T rtCP_pooled_Hl3cwpqcrwu0[81];
extern const real32_T rtCP_pooled_rCRoQPV3F8My[16];
extern const real32_T rtCP_pooled_5wzVsQQee0kd[16];
extern const real32_T rtCP_pooled_Hn3nl1zuRSNy[16];
extern const real32_T rtCP_pooled_qPeMbWPv2Nsk[81];
extern const real32_T rtCP_pooled_ovdJEPFZ57aw[9];

#define rtCP_Q_Value                   rtCP_pooled_Hl3cwpqcrwu0  /* Expression: p.Q
                                                                  * Referenced by: '<S9>/Q'
                                                                  */
#define rtCP_R1_Value                  rtCP_pooled_rCRoQPV3F8My  /* Expression: p.R{1}
                                                                  * Referenced by: '<S9>/R1'
                                                                  */
#define rtCP_ProcessNoiseCovariance_Val rtCP_pooled_5wzVsQQee0kd /* Computed Parameter: rtCP_ProcessNoiseCovariance_Val
                                                                  * Referenced by: '<S20>/Process Noise Covariance'
                                                                  */
#define rtCP_InitialCovariance_Value   rtCP_pooled_Hn3nl1zuRSNy  /* Computed Parameter: rtCP_InitialCovariance_Value
                                                                  * Referenced by: '<S20>/InitialCovariance'
                                                                  */
#define rtCP_DataStoreMemoryP_InitialVa rtCP_pooled_qPeMbWPv2Nsk /* Expression: p.InitialCovariance
                                                                  * Referenced by: '<S9>/DataStoreMemory - P'
                                                                  */
#define rtCP_DataStoreMemoryx_InitialVa rtCP_pooled_ovdJEPFZ57aw /* Expression: p.InitialState
                                                                  * Referenced by: '<S9>/DataStoreMemory - x'
                                                                  */
#endif                                 /* RTW_HEADER_RateControl_private_h_ */
