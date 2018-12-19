/*
 * PosDirectControl_types.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "PosDirectControl".
 *
 * Model version              : 1.210
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C++ source code generated on : Wed Dec 19 17:45:05 2018
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

#ifndef DEFINED_TYPEDEF_FOR_struct_v23ZS9BlXHEWMR1seukyhC_
#define DEFINED_TYPEDEF_FOR_struct_v23ZS9BlXHEWMR1seukyhC_

typedef struct {
  real_T t_indi;
  real_T primary_axis[3];
  real_T Iv[9];
  real_T Ip[9];
  real_T t_rotor_sensor;
  real_T failure_id[2];
  real_T failure_time;
  real_T signr;
  struct_Kb4703fKot5WPhaNoNlej position;
  struct_7LbCBzsZMvrHROoJfHBYLD altitude;
  struct_0fFeTh16K9OlBqn6rz4Bo YRC;
} struct_v23ZS9BlXHEWMR1seukyhC;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_boaQUdVXEQP3E0Gp0IKpJ_
#define DEFINED_TYPEDEF_FOR_struct_boaQUdVXEQP3E0Gp0IKpJ_

typedef struct {
  real_T freq;
  real_T w_max;
  real_T w_min;
  struct_v23ZS9BlXHEWMR1seukyhC sihao;
  real_T g;
  real_T wRotorMax;
  real_T wRotorMin;
  real_T mass;
  real_T failure_id[2];
  real_T failure_time;
} struct_boaQUdVXEQP3E0Gp0IKpJ;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_jPtabucG6o9IvBCSpxWd4D_
#define DEFINED_TYPEDEF_FOR_struct_jPtabucG6o9IvBCSpxWd4D_

typedef struct {
  real_T t_w;
  real_T w0[4];
} struct_jPtabucG6o9IvBCSpxWd4D;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_VkWN6GEJY9mniuO1jHWrUE_
#define DEFINED_TYPEDEF_FOR_struct_VkWN6GEJY9mniuO1jHWrUE_

typedef struct {
  real_T X;
  real_T Y;
  real_T Z;
  real_T Xrot;
  real_T Yrot;
  real_T Zrot;
} struct_VkWN6GEJY9mniuO1jHWrUE;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_aORUD80tf8g34q710QaXjC_
#define DEFINED_TYPEDEF_FOR_struct_aORUD80tf8g34q710QaXjC_

typedef struct {
  real_T Iv[9];
  real_T Ip[9];
  real_T signr;
  real_T b;
  real_T l;
  real_T R;
  real_T mass;
  real_T I;
} struct_aORUD80tf8g34q710QaXjC;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_noOKokdTBrxWsEsOQwkS2G_
#define DEFINED_TYPEDEF_FOR_struct_noOKokdTBrxWsEsOQwkS2G_

typedef struct {
  real_T k0;
  real_T t0;
  real_T dr;
  real_T vh_table[15];
  real_T w_table[15];
  real_T vi_table[225];
} struct_noOKokdTBrxWsEsOQwkS2G;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_xD8HnTHkLfNnaLYThJFTQF_
#define DEFINED_TYPEDEF_FOR_struct_xD8HnTHkLfNnaLYThJFTQF_

typedef struct {
  real_T mode;
  struct_jPtabucG6o9IvBCSpxWd4D actuator;
  real_T freq;
  real_T aeroModel;
  real_T g;
  real_T pos0[3];
  real_T vel0[3];
  real_T att0[3];
  real_T q0[4];
  real_T omega0[3];
  real_T accNoise;
  real_T rotAccNoise;
  real_T visFreq;
  real_T rho;
  real_T primary_axis[3];
  real_T failure_id[2];
  real_T failure_time;
  struct_VkWN6GEJY9mniuO1jHWrUE enable;
  struct_aORUD80tf8g34q710QaXjC drone;
  struct_noOKokdTBrxWsEsOQwkS2G aero;
} struct_xD8HnTHkLfNnaLYThJFTQF;

#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM_PosDirectControl_T RT_MODEL_PosDirectControl_T;

#endif                                 /* RTW_HEADER_PosDirectControl_types_h_ */
