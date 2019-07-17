/*
 * PosDirectControl_types.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "PosDirectControl".
 *
 * Model version              : 1.479
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C++ source code generated on : Sat Jan 12 15:20:23 2019
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_PosDirectControl_types_h_
#define RTW_HEADER_PosDirectControl_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_PosDirectControlParamsType_
#define DEFINED_TYPEDEF_FOR_PosDirectControlParamsType_

typedef struct {
  real_T rot_direction;
  real_T pos_x_p_gain;
  real_T pos_z_p_gain;
  real_T pos_x_d_gain;
  real_T pos_z_d_gain;
  real_T att_p_gain;
  real_T att_d_gain;
  real_T yaw_p_gain;
  real_T yaw_d_gain;
  int32_T rpm_feedback;
  real_T k;
  real_T l;
  real_T b;
  real_T m;
  real_T Ix;
  real_T Iy;
  real_T Iz;
  real_T Ip;
  real_T t;
  real_T t_act;
  real_T freq;
  real_T g;
  real_T K_lqr_norm[8];
  real_T K_lqr_srf[8];
  real_T K_lqr_drf[4];
} PosDirectControlParamsType;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_lBoP64WlQeSR8677eUJZKE_
#define DEFINED_TYPEDEF_FOR_struct_lBoP64WlQeSR8677eUJZKE_

typedef struct {
  real_T t_indi;
} struct_lBoP64WlQeSR8677eUJZKE;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_NNmTOa2Ph7lEylGX7GoUhE_
#define DEFINED_TYPEDEF_FOR_struct_NNmTOa2Ph7lEylGX7GoUhE_

typedef struct {
  real_T freq;
  real_T w_max;
  real_T w_min;
  struct_lBoP64WlQeSR8677eUJZKE sihao;
} struct_NNmTOa2Ph7lEylGX7GoUhE;

#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM_PosDirectControl_T RT_MODEL_PosDirectControl_T;

#endif                                 /* RTW_HEADER_PosDirectControl_types_h_ */
