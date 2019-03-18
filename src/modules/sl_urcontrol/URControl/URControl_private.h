/*
 * URControl_private.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "URControl".
 *
 * Model version              : 1.847
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C++ source code generated on : Wed Mar 13 14:35:40 2019
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_URControl_private_h_
#define RTW_HEADER_URControl_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "URControl.h"

extern real_T rt_atan2d_snf(real_T u0, real_T u1);
extern real_T rt_powd_snf(real_T u0, real_T u1);
extern real_T rt_hypotd_snf(real_T u0, real_T u1);
extern void URControl_enableMeas_Init(DW_enableMeas_URControl_T *localDW);
extern void URControl_enableMeas(const real_T rtu_att[3],
  B_enableMeas_URControl_T *localB, DW_enableMeas_URControl_T *localDW);

#endif                                 /* RTW_HEADER_URControl_private_h_ */
