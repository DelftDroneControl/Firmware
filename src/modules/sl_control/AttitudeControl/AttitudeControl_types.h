/*
 * AttitudeControl_types.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "AttitudeControl".
 *
 * Model version              : 1.235
 * Simulink Coder version : 9.1 (R2019a) 23-Nov-2018
 * C++ source code generated on : Tue Aug 13 23:44:48 2019
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_AttitudeControl_types_h_
#define RTW_HEADER_AttitudeControl_types_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#ifndef DEFINED_TYPEDEF_FOR_AttitudeControlParamsType_
#define DEFINED_TYPEDEF_FOR_AttitudeControlParamsType_

typedef struct {
  real32_T prim_axis_x;
  real32_T prim_axis_y;
  real32_T xy_gain;
  real32_T pos_xy_p_gain;
  real32_T pos_z_p_gain;
  real32_T vel_xy_p_gain;
  real32_T vel_z_p_gain;
} AttitudeControlParamsType;

#endif

/* Custom Type definition for MATLAB Function: '<S10>/Correct' */
#ifndef struct_tag_s3jUk3tcna9gJPVvGWgKhoB
#define struct_tag_s3jUk3tcna9gJPVvGWgKhoB

struct tag_s3jUk3tcna9gJPVvGWgKhoB
{
  char_T FcnName[15];
  boolean_T IsSimulinkFcn;
  real_T NumberOfExtraArgumentInports;
  boolean_T HasJacobian;
  char_T JacobianFcnName[24];
  boolean_T HasAdditiveNoise;
};

#endif                                 /*struct_tag_s3jUk3tcna9gJPVvGWgKhoB*/

#ifndef typedef_s3jUk3tcna9gJPVvGWgKhoB_Attit_T
#define typedef_s3jUk3tcna9gJPVvGWgKhoB_Attit_T

typedef struct tag_s3jUk3tcna9gJPVvGWgKhoB s3jUk3tcna9gJPVvGWgKhoB_Attit_T;

#endif                               /*typedef_s3jUk3tcna9gJPVvGWgKhoB_Attit_T*/

/* Custom Type definition for MATLAB Function: '<S12>/Predict' */
#ifndef struct_tag_sNpKm6MWgiM1uTq2HgBSpwD
#define struct_tag_sNpKm6MWgiM1uTq2HgBSpwD

struct tag_sNpKm6MWgiM1uTq2HgBSpwD
{
  char_T FcnName[17];
  boolean_T IsSimulinkFcn;
  real_T NumberOfExtraArgumentInports;
  char_T JacobianFcnName[26];
  real_T HasJacobian;
  boolean_T HasAdditiveNoise;
};

#endif                                 /*struct_tag_sNpKm6MWgiM1uTq2HgBSpwD*/

#ifndef typedef_sNpKm6MWgiM1uTq2HgBSpwD_Attit_T
#define typedef_sNpKm6MWgiM1uTq2HgBSpwD_Attit_T

typedef struct tag_sNpKm6MWgiM1uTq2HgBSpwD sNpKm6MWgiM1uTq2HgBSpwD_Attit_T;

#endif                               /*typedef_sNpKm6MWgiM1uTq2HgBSpwD_Attit_T*/

/* Forward declaration for rtModel */
typedef struct tag_RTM_AttitudeControl_T RT_MODEL_AttitudeControl_T;

#endif                                 /* RTW_HEADER_AttitudeControl_types_h_ */
