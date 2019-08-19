/*
 * PosDirectControl_private.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "PosDirectControl".
 *
 * Model version              : 1.1528
 * Simulink Coder version : 9.1 (R2019a) 23-Nov-2018
 * C++ source code generated on : Tue Aug 13 23:45:22 2019
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_PosDirectControl_private_h_
#define RTW_HEADER_PosDirectControl_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern const real_T rtCP_pooled_wg1Yq2gJgTjq[49];
extern const real_T rtCP_pooled_sK0iOVmAxUOL[100];
extern const real_T rtCP_pooled_YUgjdB5rd6zW[100];
extern const real_T rtCP_pooled_fxye1Z3RBBeI[10];

#define rtCP_R1_Value                  rtCP_pooled_wg1Yq2gJgTjq  /* Expression: p.R{1}
                                                                  * Referenced by: '<S12>/R1'
                                                                  */
#define rtCP_Q_Value                   rtCP_pooled_sK0iOVmAxUOL  /* Expression: p.Q
                                                                  * Referenced by: '<S12>/Q'
                                                                  */
#define rtCP_DataStoreMemoryP_InitialVa rtCP_pooled_YUgjdB5rd6zW /* Expression: p.InitialCovariance
                                                                  * Referenced by: '<S12>/DataStoreMemory - P'
                                                                  */
#define rtCP_DataStoreMemoryx_InitialVa rtCP_pooled_fxye1Z3RBBeI /* Expression: p.InitialState
                                                                  * Referenced by: '<S12>/DataStoreMemory - x'
                                                                  */
#endif                              /* RTW_HEADER_PosDirectControl_private_h_ */
