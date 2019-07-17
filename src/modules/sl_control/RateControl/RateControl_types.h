/*
 * RateControl_types.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "RateControl".
 *
 * Model version              : 1.1008
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C++ source code generated on : Wed Jul 17 14:14:42 2019
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

#ifndef DEFINED_TYPEDEF_FOR_LoeDetectorParamsType_
#define DEFINED_TYPEDEF_FOR_LoeDetectorParamsType_

typedef struct {
  real_T fdd_k_thres;
  real_T fdd_fail_p_thres;
  real_T fdd_on;
} LoeDetectorParamsType;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_KZWRH8wmRo8gScyf5zlwCH_
#define DEFINED_TYPEDEF_FOR_struct_KZWRH8wmRo8gScyf5zlwCH_

typedef struct {
  real_T w_max;
  real_T w_min;
} struct_KZWRH8wmRo8gScyf5zlwCH;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_Kb4703fKot5WPhaNoNlej_
#define DEFINED_TYPEDEF_FOR_struct_Kb4703fKot5WPhaNoNlej_

typedef struct {
  real_T enable;
  real_T maxAngle;
  real_T Kp_pos[3];
  real_T maxVel;
  real_T Kp_vel[3];
  real_T Ki_vel[3];
  real_T intLim;
} struct_Kb4703fKot5WPhaNoNlej;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_7LbCBzsZMvrHROoJfHBYLD_
#define DEFINED_TYPEDEF_FOR_struct_7LbCBzsZMvrHROoJfHBYLD_

typedef struct {
  real_T enable;
  real_T Kp_pos;
  real_T maxVel;
  real_T Kp_vel;
  real_T Ki_vel;
  real_T intLim;
  real_T peakAngle;
  real_T LOCAngle;
  real_T minOmegaSum;
  real_T maxOmegaSum;
} struct_7LbCBzsZMvrHROoJfHBYLD;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_0fFeTh16K9OlBqn6rz4Bo_
#define DEFINED_TYPEDEF_FOR_struct_0fFeTh16K9OlBqn6rz4Bo_

typedef struct {
  real_T enable;
  real_T Kp_psi;
  real_T Kp_r;
} struct_0fFeTh16K9OlBqn6rz4Bo;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_AHd68odqz51NWDIFKWnLKG_
#define DEFINED_TYPEDEF_FOR_struct_AHd68odqz51NWDIFKWnLKG_

typedef struct {
  real_T primary_axis[3];
  real_T Iv[9];
  real_T Ip[9];
  real_T t_indi;
  real_T t_rotor_sensor;
  real_T failure_id;
  real_T failure_time;
  real_T signr;
  struct_Kb4703fKot5WPhaNoNlej position;
  struct_7LbCBzsZMvrHROoJfHBYLD altitude;
  struct_0fFeTh16K9OlBqn6rz4Bo YRC;
} struct_AHd68odqz51NWDIFKWnLKG;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_g6G4AwCmdDExRpkzK5b0BC_
#define DEFINED_TYPEDEF_FOR_struct_g6G4AwCmdDExRpkzK5b0BC_

typedef struct {
  real_T freq;
  real_T w_max;
  real_T w_min;
  struct_KZWRH8wmRo8gScyf5zlwCH px4;
  real_T g;
  real_T wRotorMax;
  real_T wRotorMin;
  real_T mass;
  real_T fail_id;
  real_T fail_time;
  struct_AHd68odqz51NWDIFKWnLKG sihao;
} struct_g6G4AwCmdDExRpkzK5b0BC;

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

/* Custom Type definition for MATLAB Function: '<Root>/MATLAB Function3' */
#ifndef struct_tag_skA4KFEZ4HPkJJBOYCrevdH
#define struct_tag_skA4KFEZ4HPkJJBOYCrevdH

struct tag_skA4KFEZ4HPkJJBOYCrevdH
{
  uint32_T SafeEq;
  uint32_T Absolute;
  uint32_T NaNBias;
  uint32_T NaNWithFinite;
  uint32_T FiniteWithNaN;
  uint32_T NaNWithNaN;
};

#endif                                 /*struct_tag_skA4KFEZ4HPkJJBOYCrevdH*/

#ifndef typedef_skA4KFEZ4HPkJJBOYCrevdH_RateC_T
#define typedef_skA4KFEZ4HPkJJBOYCrevdH_RateC_T

typedef struct tag_skA4KFEZ4HPkJJBOYCrevdH skA4KFEZ4HPkJJBOYCrevdH_RateC_T;

#endif                                 /*typedef_skA4KFEZ4HPkJJBOYCrevdH_RateC_T*/

/* Custom Type definition for MATLAB Function: '<S26>/RLS' */
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

#endif                                 /*typedef_sEPE8EONqJdSolUZVF8Oh0B_RateC_T*/

#ifndef typedef_c_controllib_internal_blocks__T
#define typedef_c_controllib_internal_blocks__T

typedef struct {
  int32_T IteratorPosition;
} c_controllib_internal_blocks__T;

#endif                                 /*typedef_c_controllib_internal_blocks__T*/

#ifndef typedef_d_controllib_internal_blocks__T
#define typedef_d_controllib_internal_blocks__T

typedef struct {
  c_controllib_internal_blocks__T DataIterator;
} d_controllib_internal_blocks__T;

#endif                                 /*typedef_d_controllib_internal_blocks__T*/

/* Custom Type definition for MATLAB Function: '<S29>/Correct' */
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

#endif                                 /*typedef_sc0taXUn6bUe9k3lSTBWgPF_RateC_T*/

/* Custom Type definition for MATLAB Function: '<S31>/Predict' */
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

#endif                                 /*typedef_s6xKq7xzjZzTxvq5tyTbKxD_RateC_T*/

/* Custom Type definition for MATLAB Function: '<Root>/MATLAB Function3' */
#ifndef struct_tag_sJCxfmxS8gBOONUZjbjUd9E
#define struct_tag_sJCxfmxS8gBOONUZjbjUd9E

struct tag_sJCxfmxS8gBOONUZjbjUd9E
{
  boolean_T CaseSensitivity;
  boolean_T StructExpand;
  char_T PartialMatching[6];
  boolean_T IgnoreNulls;
};

#endif                                 /*struct_tag_sJCxfmxS8gBOONUZjbjUd9E*/

#ifndef typedef_sJCxfmxS8gBOONUZjbjUd9E_RateC_T
#define typedef_sJCxfmxS8gBOONUZjbjUd9E_RateC_T

typedef struct tag_sJCxfmxS8gBOONUZjbjUd9E sJCxfmxS8gBOONUZjbjUd9E_RateC_T;

#endif                                 /*typedef_sJCxfmxS8gBOONUZjbjUd9E_RateC_T*/

/* Forward declaration for rtModel */
typedef struct tag_RTM_RateControl_T RT_MODEL_RateControl_T;

#endif                                 /* RTW_HEADER_RateControl_types_h_ */
