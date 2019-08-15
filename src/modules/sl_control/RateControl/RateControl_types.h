/*
 * RateControl_types.h
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

#ifndef RTW_HEADER_RateControl_types_h_
#define RTW_HEADER_RateControl_types_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#ifndef DEFINED_TYPEDEF_FOR_RateControlParamsType_
#define DEFINED_TYPEDEF_FOR_RateControlParamsType_

typedef struct {
  real_T unit_matrix[32];
  real32_T roll_gain;
  real32_T pitch_gain;
  real32_T yaw_gain;
  real32_T roll_eff;
  real32_T pitch_eff;
  real32_T yaw_eff;
  real32_T yaw_d_eff;
  real32_T az_eff;
  real_T t_act;
  real_T fdd_k_thres;
  real_T fdd_fail_p_thres;
  real_T fdd_on;
} RateControlParamsType;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_KZWRH8wmRo8gScyf5zlwCH_
#define DEFINED_TYPEDEF_FOR_struct_KZWRH8wmRo8gScyf5zlwCH_

typedef struct {
  real_T w_max;
  real_T w_min;
} struct_KZWRH8wmRo8gScyf5zlwCH;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_TEZHtGDjEJ6R0zMQ5DegwD_
#define DEFINED_TYPEDEF_FOR_struct_TEZHtGDjEJ6R0zMQ5DegwD_

typedef struct {
  real_T freq;
  real_T w_max;
  real_T w_min;
  struct_KZWRH8wmRo8gScyf5zlwCH px4;
} struct_TEZHtGDjEJ6R0zMQ5DegwD;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_k8WKy8tDBVlN8BL9RXVTiF_
#define DEFINED_TYPEDEF_FOR_struct_k8WKy8tDBVlN8BL9RXVTiF_

typedef struct {
  uint8_T estimationMethod;
  int32_T nParameters;
  boolean_T isUsingFrames;
  int32_T windowLength;
} struct_k8WKy8tDBVlN8BL9RXVTiF;

#endif

/* Custom Type definition for MATLAB Function: '<S20>/RLS' */
#ifndef struct_tag_sEPE8EONqJdSolUZVF8Oh0B
#define struct_tag_sEPE8EONqJdSolUZVF8Oh0B

struct tag_sEPE8EONqJdSolUZVF8Oh0B
{
  uint8_T estimationMethod;
  int32_T nParameters;
  boolean_T isUsingFrames;
  int32_T windowLength;
};

#endif                                 /*struct_tag_sEPE8EONqJdSolUZVF8Oh0B*/

#ifndef typedef_sEPE8EONqJdSolUZVF8Oh0B_RateC_T
#define typedef_sEPE8EONqJdSolUZVF8Oh0B_RateC_T

typedef struct tag_sEPE8EONqJdSolUZVF8Oh0B sEPE8EONqJdSolUZVF8Oh0B_RateC_T;

#endif                               /*typedef_sEPE8EONqJdSolUZVF8Oh0B_RateC_T*/

#ifndef typedef_c_controllib_internal_blocks__T
#define typedef_c_controllib_internal_blocks__T

typedef struct {
  int32_T IteratorPosition;
} c_controllib_internal_blocks__T;

#endif                               /*typedef_c_controllib_internal_blocks__T*/

#ifndef typedef_d_controllib_internal_blocks__T
#define typedef_d_controllib_internal_blocks__T

typedef struct {
  c_controllib_internal_blocks__T DataIterator;
} d_controllib_internal_blocks__T;

#endif                               /*typedef_d_controllib_internal_blocks__T*/

/* Custom Type definition for MATLAB Function: '<S22>/Correct' */
#ifndef struct_tag_sc0taXUn6bUe9k3lSTBWgPF
#define struct_tag_sc0taXUn6bUe9k3lSTBWgPF

struct tag_sc0taXUn6bUe9k3lSTBWgPF
{
  char_T FcnName[34];
  boolean_T IsSimulinkFcn;
  real_T NumberOfExtraArgumentInports;
  boolean_T HasJacobian;
  char_T JacobianFcnName[42];
  boolean_T HasAdditiveNoise;
};

#endif                                 /*struct_tag_sc0taXUn6bUe9k3lSTBWgPF*/

#ifndef typedef_sc0taXUn6bUe9k3lSTBWgPF_RateC_T
#define typedef_sc0taXUn6bUe9k3lSTBWgPF_RateC_T

typedef struct tag_sc0taXUn6bUe9k3lSTBWgPF sc0taXUn6bUe9k3lSTBWgPF_RateC_T;

#endif                               /*typedef_sc0taXUn6bUe9k3lSTBWgPF_RateC_T*/

/* Custom Type definition for MATLAB Function: '<S24>/Predict' */
#ifndef struct_tag_s6xKq7xzjZzTxvq5tyTbKxD
#define struct_tag_s6xKq7xzjZzTxvq5tyTbKxD

struct tag_s6xKq7xzjZzTxvq5tyTbKxD
{
  char_T FcnName[38];
  boolean_T IsSimulinkFcn;
  real_T NumberOfExtraArgumentInports;
  char_T JacobianFcnName[46];
  real_T HasJacobian;
  boolean_T HasAdditiveNoise;
};

#endif                                 /*struct_tag_s6xKq7xzjZzTxvq5tyTbKxD*/

#ifndef typedef_s6xKq7xzjZzTxvq5tyTbKxD_RateC_T
#define typedef_s6xKq7xzjZzTxvq5tyTbKxD_RateC_T

typedef struct tag_s6xKq7xzjZzTxvq5tyTbKxD s6xKq7xzjZzTxvq5tyTbKxD_RateC_T;

#endif                               /*typedef_s6xKq7xzjZzTxvq5tyTbKxD_RateC_T*/

/* Forward declaration for rtModel */
typedef struct tag_RTM_RateControl_T RT_MODEL_RateControl_T;

#endif                                 /* RTW_HEADER_RateControl_types_h_ */
