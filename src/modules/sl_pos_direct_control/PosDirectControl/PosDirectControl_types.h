/*
 * PosDirectControl_types.h
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

#ifndef RTW_HEADER_PosDirectControl_types_h_
#define RTW_HEADER_PosDirectControl_types_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#ifndef DEFINED_TYPEDEF_FOR_PosDirectControlParamsType_
#define DEFINED_TYPEDEF_FOR_PosDirectControlParamsType_

typedef struct {
  real_T rot_direction;
  real_T pos_x_p_gain;
  real_T pos_x_i_gain;
  real_T pos_x_d_gain;
  real_T pos_z_p_gain;
  real_T pos_z_i_gain;
  real_T pos_z_d_gain;
  real_T att_p_gain;
  real_T att_i_gain;
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
  real_T RLS_step;
  real_T chi;
  real_T EKF_Q[100];
  real_T EKF_R[49];
} PosDirectControlParamsType;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_KZWRH8wmRo8gScyf5zlwCH_
#define DEFINED_TYPEDEF_FOR_struct_KZWRH8wmRo8gScyf5zlwCH_

typedef struct {
  real_T w_max;
  real_T w_min;
} struct_KZWRH8wmRo8gScyf5zlwCH;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_lBoP64WlQeSR8677eUJZKE_
#define DEFINED_TYPEDEF_FOR_struct_lBoP64WlQeSR8677eUJZKE_

typedef struct {
  real_T t_indi;
} struct_lBoP64WlQeSR8677eUJZKE;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_DDe3jIETIZE1NlFEonDWIC_
#define DEFINED_TYPEDEF_FOR_struct_DDe3jIETIZE1NlFEonDWIC_

typedef struct {
  real_T freq;
  real_T w_max;
  real_T w_min;
  struct_KZWRH8wmRo8gScyf5zlwCH px4;
  struct_lBoP64WlQeSR8677eUJZKE sihao;
} struct_DDe3jIETIZE1NlFEonDWIC;

#endif

/* Custom Type definition for MATLAB Function: '<S17>/Correct' */
#ifndef struct_tag_sZozwYUqIoF3KwkqeARQ8OE
#define struct_tag_sZozwYUqIoF3KwkqeARQ8OE

struct tag_sZozwYUqIoF3KwkqeARQ8OE
{
  char_T FcnName[13];
  boolean_T IsSimulinkFcn;
  real_T NumberOfExtraArgumentInports;
  boolean_T HasJacobian;
  char_T JacobianFcnName[14];
  boolean_T HasAdditiveNoise;
};

#endif                                 /*struct_tag_sZozwYUqIoF3KwkqeARQ8OE*/

#ifndef typedef_sZozwYUqIoF3KwkqeARQ8OE_PosDi_T
#define typedef_sZozwYUqIoF3KwkqeARQ8OE_PosDi_T

typedef struct tag_sZozwYUqIoF3KwkqeARQ8OE sZozwYUqIoF3KwkqeARQ8OE_PosDi_T;

#endif                               /*typedef_sZozwYUqIoF3KwkqeARQ8OE_PosDi_T*/

/* Custom Type definition for MATLAB Function: '<S19>/Predict' */
#ifndef struct_tag_sBhY6iGnb96DZXSV480ISLB
#define struct_tag_sBhY6iGnb96DZXSV480ISLB

struct tag_sBhY6iGnb96DZXSV480ISLB
{
  char_T FcnName[14];
  boolean_T IsSimulinkFcn;
  real_T NumberOfExtraArgumentInports;
  char_T JacobianFcnName[15];
  real_T HasJacobian;
  boolean_T HasAdditiveNoise;
};

#endif                                 /*struct_tag_sBhY6iGnb96DZXSV480ISLB*/

#ifndef typedef_sBhY6iGnb96DZXSV480ISLB_PosDi_T
#define typedef_sBhY6iGnb96DZXSV480ISLB_PosDi_T

typedef struct tag_sBhY6iGnb96DZXSV480ISLB sBhY6iGnb96DZXSV480ISLB_PosDi_T;

#endif                               /*typedef_sBhY6iGnb96DZXSV480ISLB_PosDi_T*/

/* Forward declaration for rtModel */
typedef struct tag_RTM_PosDirectControl_T RT_MODEL_PosDirectControl_T;

#endif                                /* RTW_HEADER_PosDirectControl_types_h_ */
