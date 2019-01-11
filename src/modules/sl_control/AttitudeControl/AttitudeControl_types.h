/*
 * AttitudeControl_types.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "AttitudeControl".
 *
 * Model version              : 1.88
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C++ source code generated on : Fri Jan 11 12:24:48 2019
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_AttitudeControl_types_h_
#define RTW_HEADER_AttitudeControl_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_AttitudeControlParamsType_
#define DEFINED_TYPEDEF_FOR_AttitudeControlParamsType_

typedef struct {
  real_T prim_axis_x;
  real_T prim_axis_y;
  real_T xy_gain;
} AttitudeControlParamsType;

#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM_AttitudeControl_T RT_MODEL_AttitudeControl_T;

#endif                                 /* RTW_HEADER_AttitudeControl_types_h_ */
