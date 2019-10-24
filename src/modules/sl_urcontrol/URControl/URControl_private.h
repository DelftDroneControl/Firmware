/*
 * URControl_private.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "URControl".
 *
 * Model version              : 1.1516
 * Simulink Coder version : 9.1 (R2019a) 23-Nov-2018
 * C++ source code generated on : Thu Oct 24 16:18:01 2019
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
                                                                  * Referenced by: '<S24>/R1'
                                                                  */
#define rtCP_Q_Value                   rtCP_pooled_z3AazAnnYHH8  /* Expression: p.Q
                                                                  * Referenced by: '<S24>/Q'
                                                                  */
#define rtCP_DataStoreMemoryP_InitialVa rtCP_pooled_YUgjdB5rd6zW /* Expression: p.InitialCovariance
                                                                  * Referenced by: '<S24>/DataStoreMemory - P'
                                                                  */
#define rtCP_DataStoreMemoryx_InitialVa rtCP_pooled_fxye1Z3RBBeI /* Expression: p.InitialState
                                                                  * Referenced by: '<S24>/DataStoreMemory - x'
                                                                  */

extern void URControl_IfActionSubsystem2(real_T rtu_In, real_T *rty_OutOrig);
extern void URControl_MATLABFunction_Init(DW_MATLABFunction_URControl_T *localDW);
extern void URControl_MATLABFunction(const real_T rtu_mag[3], const real_T
  rtu_att[3], B_MATLABFunction_URControl_T *localB,
  DW_MATLABFunction_URControl_T *localDW);
extern void URControl_MATLABFunction2(B_MATLABFunction2_URControl_T *localB);
extern void URControl_MATLABFunction3(real_T rtu_u,
  B_MATLABFunction3_URControl_T *localB);
extern void URControl_unwrap2pi_Init(DW_unwrap2pi_URControl_T *localDW);
extern void URControl_unwrap2pi(real_T rtu_psi0, B_unwrap2pi_URControl_T *localB,
  DW_unwrap2pi_URControl_T *localDW);

#endif                                 /* RTW_HEADER_URControl_private_h_ */
