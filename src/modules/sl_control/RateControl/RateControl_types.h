/*
 * RateControl_types.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "RateControl".
 *
 * Model version              : 1.656
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C++ source code generated on : Tue Jan 15 14:35:28 2019
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_RateControl_types_h_
#define RTW_HEADER_RateControl_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_RateControlParamsType_
#define DEFINED_TYPEDEF_FOR_RateControlParamsType_

typedef struct {
  real_T unit_matrix[32];
  real_T roll_gain;
  real_T pitch_gain;
  real_T yaw_gain;
  real_T fail_id;
  real_T roll_eff;
  real_T pitch_eff;
  real_T yaw_eff;
  real_T yaw_d_eff;
  real_T az_eff;
  real_T t_act;
} RateControlParamsType;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_mNrF1eVH4gGjxjkvueyUa_
#define DEFINED_TYPEDEF_FOR_struct_mNrF1eVH4gGjxjkvueyUa_

typedef struct {
  real_T freq;
  real_T w_max;
  real_T w_min;
} struct_mNrF1eVH4gGjxjkvueyUa;

#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM_RateControl_T RT_MODEL_RateControl_T;

#endif                                 /* RTW_HEADER_RateControl_types_h_ */
