/*
 * URControl_types.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "URControl".
 *
 * Model version              : 1.745
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C++ source code generated on : Fri Feb 15 00:52:00 2019
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_URControl_types_h_
#define RTW_HEADER_URControl_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_daqBus_
#define DEFINED_TYPEDEF_FOR_daqBus_

typedef struct {
  real_T omegaUV[3];
  real_T FMax[4];
  real_T FMin[4];
  real_T uvDot_max[2];
  real_T uvDot_min[2];
  real_T uv_max[2];
  real_T uv_min[2];
  real_T velTarget[3];
  real_T a_ref[3];
  real_T n_des[3];
  real_T Ftot_ref;
  real_T r_cmd;
  real_T uv_prec[2];
  real_T pqr_des[3];
  real_T uvr_des[3];
  real_T uv_des_raw[2];
  real_T uv_des[2];
  real_T uv_attCtrl[2];
  real_T w_max[4];
  real_T w_min[4];
  real_T MzGain;
  real_T iter;
  real_T M_uvr_des[3];
  real_T M_uvr_set[3];
  real_T Ftot_set;
  real_T wRotorSet[4];
} daqBus;

#endif

#ifndef DEFINED_TYPEDEF_FOR_stateBus_
#define DEFINED_TYPEDEF_FOR_stateBus_

typedef struct {
  real_T acc[3];
  real_T vel[3];
  real_T velB[3];
  real_T pos[3];
  real_T omega[3];
  real_T att[3];
  real_T n[3];
  real_T wRotor[4];
  real_T omegaUV[3];
  real_T FMax[4];
  real_T FMin[4];
  real_T fail_id;
  real_T uvDot_max[2];
  real_T uvDot_min[2];
  real_T uv_max[2];
  real_T uv_min[2];
} stateBus;

#endif

#ifndef DEFINED_TYPEDEF_FOR_sensorsBus_
#define DEFINED_TYPEDEF_FOR_sensorsBus_

typedef struct {
  real_T acc[3];
  real_T vel[3];
  real_T velB[3];
  real_T pos[3];
  real_T omega[3];
  real_T att[3];
  real_T wRotor[4];
} sensorsBus;

#endif

#ifndef DEFINED_TYPEDEF_FOR_inputsBus_
#define DEFINED_TYPEDEF_FOR_inputsBus_

typedef struct {
  real_T xTarget;
  real_T yTarget;
  real_T zTarget;
  real_T yawTarget;
} inputsBus;

#endif

#ifndef DEFINED_TYPEDEF_FOR_URControlParamsType_
#define DEFINED_TYPEDEF_FOR_URControlParamsType_

typedef struct {
  real_T k0;
  real_T t0;
  real_T b;
  real_T l;
  real_T Ix;
  real_T Iy;
  real_T Iz;
  real_T Iu;
  real_T Iv;
  real_T s;
  real_T mass;
  real_T g;
  real_T fail_delay;
  real_T position_enable;
  real_T position_maxAngle;
  real_T position_maxAngleFailure;
  real_T position_Kp_pos[3];
  real_T position_maxVel;
  real_T position_Kp_vel[3];
  real_T position_Ki_vel[3];
  real_T position_intLim;
  real_T altitude_enable;
  real_T altitude_Kp_pos;
  real_T altitude_maxVel;
  real_T altitude_Kp_vel;
  real_T altitude_Ki_vel;
  real_T altitude_intLim;
  real_T altitude_peakAngle;
  real_T altitude_LOCAngle;
  real_T altitude_maxFPerc;
  real_T YRC_enable;
  real_T YRC_Kp_psi;
  real_T YRC_Kp_r;
  real_T YRC_r_cmd_fail;
  real_T YRCFail_enable;
  real_T YRCFail_mode;
  real_T YRCFail_Kp_dw;
  real_T YRCFail_Kp_dMzGain;
  real_T YRCFail_yawRateTarget;
  real_T YRCFail_nLim1;
  real_T YRCFail_nLim2;
  real_T attitude_primary_axis[3];
  real_T attitude_yrcComp;
  real_T attitude_rotKp;
  real_T attitude_maxPrecSpeed;
  real_T attitude_MMargin;
  real_T attitude_yawThreshold;
  real_T attitude_rotComp;
  real_T envp_envelopeProt;
  real_T envp_wMax;
  real_T envp_wMin;
  real_T envp_FMax[4];
  real_T envp_FMin[4];
  real_T envp_timeHorz;
  real_T envp_minDeviation;
  real_T rate_mode;
  real_T rate_rateDotKp[3];
  real_T rate_rateDotKi[3];
  real_T rate_rateDotKd[3];
  real_T rate_maxInt;
  real_T rate_maxDer;
  real_T rate_maxMoments[3];
  real_T rate_MuGain;
  real_T rate_MvGain;
  real_T rate_MzGain;
  real_T rate_FtotGain;
  real_T rate_FGain;
  real_T rate_maxIter;
} URControlParamsType;

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

#ifndef DEFINED_TYPEDEF_FOR_struct_KZWRH8wmRo8gScyf5zlwCH_
#define DEFINED_TYPEDEF_FOR_struct_KZWRH8wmRo8gScyf5zlwCH_

typedef struct {
  real_T w_max;
  real_T w_min;
} struct_KZWRH8wmRo8gScyf5zlwCH;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_mMxZUgiacmSPStEMWH3dnG_
#define DEFINED_TYPEDEF_FOR_struct_mMxZUgiacmSPStEMWH3dnG_

typedef struct {
  real_T freq;
  real_T g;
  real_T wRotorMax;
  real_T wRotorMin;
  real_T mass;
  real_T fail_id;
  real_T fail_time;
  real_T fail_wRot;
  struct_AHd68odqz51NWDIFKWnLKG sihao;
  URControlParamsType URC;
  struct_KZWRH8wmRo8gScyf5zlwCH px4;
} struct_mMxZUgiacmSPStEMWH3dnG;

#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM_URControl_T RT_MODEL_URControl_T;

#endif                                 /* RTW_HEADER_URControl_types_h_ */
