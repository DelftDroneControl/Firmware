/*
 * URControl_private.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "URControl".
 *
 * Model version              : 1.1881
 * Simulink Coder version : 9.1 (R2019a) 23-Nov-2018
 * C++ source code generated on : Mon Dec 16 11:43:25 2019
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_URControl_private_h_
#define RTW_HEADER_URControl_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "URControl.h"

extern const real_T rtCP_pooled_9dldz3nawzPz[49];
extern const real_T rtCP_pooled_z3AazAnnYHH8[100];
extern const real_T rtCP_pooled_YUgjdB5rd6zW[100];
extern const real_T rtCP_pooled_fxye1Z3RBBeI[10];

#define rtCP_R1_Value                  rtCP_pooled_9dldz3nawzPz  /* Expression: p.R{1}
                                                                  * Referenced by: '<S23>/R1'
                                                                  */
#define rtCP_Q_Value                   rtCP_pooled_z3AazAnnYHH8  /* Expression: p.Q
                                                                  * Referenced by: '<S23>/Q'
                                                                  */
#define rtCP_DataStoreMemoryP_InitialVa rtCP_pooled_YUgjdB5rd6zW /* Expression: p.InitialCovariance
                                                                  * Referenced by: '<S23>/DataStoreMemory - P'
                                                                  */
#define rtCP_DataStoreMemoryx_InitialVa rtCP_pooled_fxye1Z3RBBeI /* Expression: p.InitialState
                                                                  * Referenced by: '<S23>/DataStoreMemory - x'
                                                                  */

extern void URControl_IfActionSubsystem2(real_T rtu_In, real_T *rty_OutOrig);
extern void URControl_MATLABFunction3(real_T rtu_u,
  B_MATLABFunction3_URControl_T *localB);

#endif                                 /* RTW_HEADER_URControl_private_h_ */
