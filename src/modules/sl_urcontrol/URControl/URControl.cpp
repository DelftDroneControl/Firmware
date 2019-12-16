/*
 * URControl.cpp
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "URControl".
 *
 * Model version              : 1.1881
 * Simulink Coder version : 9.1 (R2019a) 23-Nov-2018
 * C++ source code generated on : Mon Dec 16 11:43:25 2019
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "URControl.h"
#include "URControl_private.h"
#include "ekf_state_jacob_WRvyoYwd.h"
#include "mrdivide_helper_D6MymrEr.h"
#include "norm_2e9Xj4lM.h"
#include "norm_wXO8gvHp.h"
#include "rt_atan2d_snf.h"
#include "rt_powd_snf.h"

const daqBus URControl_rtZdaqBus = {
  {
    0.0, 0.0, 0.0 }
  ,                                    /* pos */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* posRaw */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* vel */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* att */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* attRaw */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* acc */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* accRaw */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* n */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* omega */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* omegaf */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* omegaUV */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* omegafUV */

  {
    0.0, 0.0, 0.0, 0.0 }
  ,                                    /* wRotor */

  {
    0.0, 0.0, 0.0, 0.0 }
  ,                                    /* FMax */

  {
    0.0, 0.0, 0.0, 0.0 }
  ,                                    /* FMin */

  {
    0.0, 0.0 }
  ,                                    /* uvDot_max */

  {
    0.0, 0.0 }
  ,                                    /* uvDot_min */

  {
    0.0, 0.0 }
  ,                                    /* uv_max */

  {
    0.0, 0.0 }
  ,                                    /* uv_min */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* posTarget */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* velTarget */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* a_ref */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* n_des */
  0.0,                                 /* Ftot_ref */
  0.0,                                 /* r_cmd */

  {
    0.0, 0.0 }
  ,                                    /* uv_prec */

  {
    0.0, 0.0 }
  ,                                    /* precAngle */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* h_uv */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* n_uv */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* pqr_des */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* uvr_des */

  {
    0.0, 0.0 }
  ,                                    /* uv_des_raw */

  {
    0.0, 0.0 }
  ,                                    /* uv_des */

  {
    0.0, 0.0 }
  ,                                    /* uv_attCtrl */

  {
    0.0, 0.0, 0.0, 0.0 }
  ,                                    /* w_max */

  {
    0.0, 0.0, 0.0, 0.0 }
  ,                                    /* w_min */
  0.0,                                 /* MzGain */
  0.0,                                 /* iter */
  0.0,                                 /* optimal */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* M_uvr_des */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* M_uvr_set */
  0.0,                                 /* Ftot_set */

  {
    0.0, 0.0, 0.0, 0.0 }
  ,                                    /* wRotorSet */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* uvrDot_des */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* pqr_des_dot */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* omegaDot */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* dM */

  {
    0.0, 0.0, 0.0, 0.0 }
  ,                                    /* inp */

  {
    0.0, 0.0, 0.0, 0.0 }
  ,                                    /* dw_lin */

  {
    0.0, 0.0, 0.0, 0.0 }
  ,                                    /* inpActual */

  {
    0.0, 0.0 }
  /* Y_indi */
} ;                                    /* daqBus ground */

const stateBus URControl_rtZstateBus = {
  {
    0.0, 0.0, 0.0 }
  ,                                    /* acc */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* accf */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* vel */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* velf */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* velB */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* pos */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* posf */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* omega */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* omegaf */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* att */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* n */

  {
    0.0, 0.0, 0.0, 0.0 }
  ,                                    /* wRotor */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* omegaUV */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* omegafUV */

  {
    0.0, 0.0, 0.0, 0.0 }
  ,                                    /* FMax */

  {
    0.0, 0.0, 0.0, 0.0 }
  ,                                    /* FMin */
  0.0,                                 /* fail_id */
  0.0,                                 /* fail_id_quick */

  {
    0.0, 0.0 }
  ,                                    /* uvDot_max */

  {
    0.0, 0.0 }
  ,                                    /* uvDot_min */

  {
    0.0, 0.0 }
  ,                                    /* uv_max */

  {
    0.0, 0.0 }
  ,                                    /* uv_min */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* vel_ref */

  {
    0.0, 0.0, 0.0 }
  /* pos_ref */
} ;                                    /* stateBus ground */

/* Exported block parameters */
URControlParamsType URControlParams = {
  1.9035e-6,
  1.9202951e-8,
  0.115,
  0.0875,
  0.0014,
  0.0013,
  0.0025,
  0.00191049731745428,
  0.00191049731745428,
  0.14450346016618426,
  0.4,
  8.0e-6,
  500.0,
  9.81,
  0.0,
  0.0,
  1200.0,
  0.0,
  -1.0,
  30.0,

  { 0.70710678118654768, 0.70710678118654768, -0.53801602916367752,
    0.53801602916367752 },
  1.0,
  0.0,
  0.0,
  0.75,
  0.5,
  0.5,
  0.85,
  1.0,

  { 0.01, 0.01, 0.01, 0.1, 0.1, 0.1, 0.001, 0.001, 0.001, 0.001 },

  { 0.1, 0.1, 0.1, 0.2, 0.2, 0.2, 0.2 },
  0.0,
  1.0,
  0.0433,
  -0.1828,
  0.4628,
  1.6,
  0.0,

  { 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0 },

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },
  0.0,
  0.0,

  { 0.0, 0.0, 0.0 },
  1.0,
  0.0,
  1.0,
  1.0,
  0.61403508771929827,
  1.0526315789473684,

  { 1.5, 1.5, 1.5 },
  10.0,

  { 2.0, 2.0, 2.0 },

  { 1.0, 1.0, 1.0 },
  5.0,
  1.0,
  -2.0,
  1.0,
  2.0,
  4.0,
  0.8,
  15.0,
  15.0,
  0.5,
  0.52631578947368418,
  1.2280701754385965,
  1.0,
  5.0,
  5.0,
  20.0,
  0.0,
  0.0,
  50.0,
  -0.5,
  -0.1,
  0.0,

  { 0.0, 0.0, -1.0 },
  0.0,
  -10.0,
  15.0,
  200.0,
  1.2217304763960306,
  0.2,
  4.0,
  0.01,
  10.0,
  2.0,
  3.0,
  2.0,
  1.0,

  { 15.0, 15.0, 3.0 },

  { 0.0, 0.0, 0.0 },

  { 0.3, 0.3, 0.01 },
  0.8,
  0.8,
  0.5,
  1.0,

  { 0.4, 0.4, 0.045 },
  10000.0,
  10000.0,
  100.0,
  4.0,
  0.0,
  100000.0,
  10.0,
  1.0,
  0.1,
  10.0,

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 10.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 10.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  { 0.75, 0.0, 0.0, 0.75 },

  { 0.19811131965247775, 2.8342066787853377e-17, -1.0165342382768014e-16,
    0.19811131965247789, -2.7869268972958258e-16, 3.6514837167011081,
    -3.6514837167011072, -9.9912669948377843e-16, 1.8130197776532382,
    -1.388080314940088e-15, 2.0544394602449696e-16, 1.8130197776532346 },

  { 0.17346480776637335, 0.011638708082819534, -0.011638708082820054,
    0.17346480776637438, -2.8694106005361446, 2.2582772502206723,
    -2.2582772502206385, -2.8694106005361477, 1.6557563908415029,
    -3.650136775918412e-15, -1.4596530217581814e-15, 1.6557563908415138 },

  { 0.17346480776637416, -0.011638708082819776, 0.011638708082819523,
    0.17346480776637427, 2.8694106005361419, 2.2582772502206714,
    -2.2582772502206661, 2.8694106005361442, 1.6557563908415149,
    -4.1316651907037211e-15, -2.4188837817697247e-15, 1.6557563908415136 },

  { 0.17346480776637335, 0.011638708082819534, -0.011638708082820054,
    0.17346480776637438, -2.8694106005361446, 2.2582772502206723,
    -2.2582772502206385, -2.8694106005361477, 1.6557563908415029,
    -3.650136775918412e-15, -1.4596530217581814e-15, 1.6557563908415138 },

  { 0.17346480776637416, -0.011638708082819776, 0.011638708082819523,
    0.17346480776637427, 2.8694106005361419, 2.2582772502206714,
    -2.2582772502206661, 2.8694106005361442, 1.6557563908415149,
    -4.1316651907037211e-15, -2.4188837817697247e-15, 1.6557563908415136 },

  { 0.18322977796793122, -4.7929438575854431e-17, 0.14637274861744229,
    -1.3682235713191006e-17, -1.4850566840624193, 6.4513248258638267e-16,
    -4.945833934918185, 3.676646086184468e-16, 1.7191524306826353,
    -5.3410286572689639e-16, -2.3465826316580146e-17, -5.6186241010007274e-31 },

  { 0.0, 0.14637274861744196, 0.0, 0.18322977796793033, 0.0, 4.9458339349182072,
    0.0, 1.4850566840624069, 0.0, 3.6383638389562227e-17, 0.0,
    1.7191524306826149 },
  0.0,
  0.0,
  105.0,
  5.0,
  3.0,
  0.0,
  0.0,
  0.02,
  0.0,
  0.13,
  0.0,
  300.0,
  0.0,
  0.0,
  0.3,
  4.0,
  2.0,
  0.0,
  -1.0,
  0.0,
  0.0,
  10.0,
  1.0,
  10.0,

  { 150.0, 150.0, 100.0, -8.0, -150.0, 150.0, -100.0, -8.0, -150.0, -150.0,
    100.0, -8.0, 150.0, -150.0, -100.0, -8.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, -1.0,
    0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, -1.0, 0.0 },

  { 30.0, 30.0, 3.0 },
  0.98,
  0.9,
  600.0,

  { 40.0, 40.0, 2.0 },
  0.9,

  { 20.0, 20.0, 1.0 },
  150.0,
  150.0,
  -100.0,
  5.0,

  { 0.0, 1.0, -1.0, -1.0, -1.0, 0.0, 1.0, -1.0, 0.0, -1.0, -1.0, -1.0, 1.0, 0.0,
    1.0, -1.0 },

  { 10000.0, 0.0, 0.0, 0.0, 0.0, 10000.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 100.0 },

  { 0.0001, 0.0, 0.0, 0.0, 0.0, 0.0001, 0.0, 0.0, 0.0, 0.0, 0.0001, 0.0, 0.0,
    0.0, 0.0, 0.0001 },
  200.0,

  { 100.0, 100.0, 50.0, 20.0 },

  { 30.0, 30.0, 10.0, 2.0 },
  0.2
} ;                                    /* Variable: URControlParams
                                        * Referenced by:
                                        *   '<Root>/delay'
                                        *   '<S3>/MATLAB Function'
                                        *   '<S4>/altitude control'
                                        *   '<S4>/position control'
                                        *   '<S4>/yaw rate control'
                                        *   '<S5>/URControl_att_indi'
                                        *   '<S7>/basic estimators'
                                        *   '<S21>/MATLAB Function'
                                        *   '<S21>/MATLAB Function11'
                                        *   '<S21>/Gain2'
                                        */

/* Exported block states */
boolean_T _URControl_SharedDataInit_ = false;/* synthesized block */

/* data stores shared across model instances */
SharedDSM_URControl_T URControlModelClass::URControl_SharedDSM;

/*
 * Output and update for action system:
 *    '<S35>/If Action Subsystem2'
 *    '<S101>/If Action Subsystem2'
 *    '<S109>/If Action Subsystem2'
 */
void URControl_IfActionSubsystem2(real_T rtu_In, real_T *rty_OutOrig)
{
  /* Inport: '<S38>/In' */
  *rty_OutOrig = rtu_In;
}

/*
 * Output and update for atomic system:
 *    '<S21>/MATLAB Function3'
 *    '<S21>/MATLAB Function4'
 */
void URControl_MATLABFunction3(real_T rtu_u, B_MATLABFunction3_URControl_T
  *localB)
{
  /* :  if isnan(u) */
  if (rtIsNaN(rtu_u)) {
    /* :  y = 0; */
    localB->y = 0.0;
  } else {
    /* :  else */
    /* :  y = u; */
    localB->y = rtu_u;
  }
}

/*
 * Function for MATLAB Function: '<S7>/basic estimators'
 * function update(obj,newValue)
 */
void URControlModelClass::URControl_LPFilter_update(LPFilter_URControl_T *obj,
  const real_T newValue[3])
{
  real_T tmp;
  real_T z1;

  /* 'LPFilter:21' obj.value = obj.value*obj.filterT + newValue*(1 - obj.filterT); */
  tmp = 1.0 - obj->filterT;

  /* 'LPFilter:22' obj.value = max(min(obj.value,obj.maxLim),obj.minLim); */
  obj->value[0] = (1.0 - obj->filterT) * newValue[0] + obj->value[0] *
    obj->filterT;
  if ((obj->value[0] < obj->maxLim) || rtIsNaN(obj->maxLim)) {
    z1 = obj->value[0];
  } else {
    z1 = obj->maxLim;
  }

  if ((z1 > obj->minLim) || rtIsNaN(obj->minLim)) {
    obj->value[0] = z1;
  } else {
    obj->value[0] = obj->minLim;
  }

  obj->value[1] = obj->value[1] * obj->filterT + newValue[1] * tmp;
  if ((obj->value[1] < obj->maxLim) || rtIsNaN(obj->maxLim)) {
    z1 = obj->value[1];
  } else {
    z1 = obj->maxLim;
  }

  if ((z1 > obj->minLim) || rtIsNaN(obj->minLim)) {
    obj->value[1] = z1;
  } else {
    obj->value[1] = obj->minLim;
  }

  obj->value[2] = obj->value[2] * obj->filterT + newValue[2] * tmp;
  if ((obj->value[2] < obj->maxLim) || rtIsNaN(obj->maxLim)) {
    z1 = obj->value[2];
  } else {
    z1 = obj->maxLim;
  }

  if ((z1 > obj->minLim) || rtIsNaN(obj->minLim)) {
    obj->value[2] = z1;
  } else {
    obj->value[2] = obj->minLim;
  }
}

/* Model step function */
void URControlModelClass::step()
{
  /* local block i/o variables */
  stateBus rtb_stateOut;
  real_T rtb_acc[3];
  real_T rtb_Integrator[3];
  real_T rtb_Integrator_g;
  real_T rtb_manual[5];
  real_T rtb_w_cmd[4];
  real_T rtb_accs_filter[3];
  real_T rtb_r_cmd;
  real_T rtb_n_des[3];
  real_T rtb_Ftot_ref;
  real_T psi_data;
  boolean_T positiveInput_data;
  boolean_T b_data;
  real_T mI[3];
  real_T acc_norm;
  real_T km[9];
  real_T R_E[9];
  real_T Rc[9];
  real_T b_absxk;
  real_T b_t;
  static const int8_T b_a[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1
  };

  real_T FMin[4];
  boolean_T rEQ0;
  real_T y[7];
  real_T dHdx[70];
  real_T qconj[4];
  real_T gain[70];
  static const int8_T b[10] = { 0, 0, 0, 0, 0, 0, 1, 0, 0, 0 };

  static const int8_T c[10] = { 0, 0, 0, 0, 0, 0, 0, 1, 0, 0 };

  static const int8_T d[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 };

  static const int8_T e[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 };

  real_T Jacobian[100];
  real_T acc[3];
  real_T rtb_pos[3];
  real_T rtb_omega[3];
  real_T rtb_att[3];
  int32_T i;
  real_T rtb_u2[3];
  real_T rtb_enableMeas;
  real_T rtb_DataStoreRead_k[10];
  real_T rtb_Merge;
  real_T rtb_Product2_l;
  real_T rtb_Product1_h;
  real_T rtb_Sum_j;
  boolean_T rtb_Compare;
  boolean_T rtb_Compare_j;
  real_T rtb_xNew[10];
  real_T rtb_TmpSignalConversionAtSFu_b4[6];
  real_T y_tmp[9];
  real_T dHdx_0[49];
  real_T rtb_TmpSignalConversionAtSFun_2[4];
  real_T rtb_TmpSignalConversionAtSFun_3[4];
  real_T rtb_pos_0[7];
  real_T dHdx_1[70];
  real_T tmp[9];
  real_T km_0[9];
  real_T acc_norm_0[16];
  real_T b_a_0[16];
  real_T Jacobian_0[100];
  uint32_T tmp_0;
  real_T rtb_TmpSignalConversionAtSFun_4;
  real_T rtb_TmpSignalConversionAtSFun_5;
  real_T rtb_TmpSignalConversionAtSFun_6;
  real_T rtb_TmpSignalConversionAtSFun_7;
  real_T rtb_VectorConcatenate_n_idx_1;
  real_T rtb_VectorConcatenate_n_idx_0;
  real_T rtb_mag_idx_1;
  real_T rtb_mag_idx_0;
  int32_T gain_tmp;
  int32_T km_tmp;
  real_T Euler_flip_tmp;
  real_T Euler_flip_tmp_0;
  int32_T qconj_tmp;
  boolean_T tmp_1;

  /* DataTypeConversion: '<Root>/Data Type Conversion1' incorporates:
   *  Inport: '<Root>/accs'
   */
  rtb_acc[0] = URControl_U.accs[0];

  /* DataTypeConversion: '<Root>/Data Type Conversion4' incorporates:
   *  Inport: '<Root>/pos'
   */
  rtb_pos[0] = URControl_U.pos[0];

  /* DataTypeConversion: '<Root>/Data Type Conversion5' incorporates:
   *  Inport: '<Root>/rates'
   */
  rtb_omega[0] = URControl_U.rates[0];

  /* DataTypeConversion: '<Root>/Data Type Conversion6' incorporates:
   *  Inport: '<Root>/att'
   */
  rtb_att[0] = URControl_U.att[0];

  /* DataTypeConversion: '<Root>/Data Type Conversion3' incorporates:
   *  Inport: '<Root>/mag'
   */
  rtb_mag_idx_0 = URControl_U.mag[0];

  /* DataTypeConversion: '<Root>/Data Type Conversion1' incorporates:
   *  Inport: '<Root>/accs'
   */
  rtb_acc[1] = URControl_U.accs[1];

  /* DataTypeConversion: '<Root>/Data Type Conversion4' incorporates:
   *  Inport: '<Root>/pos'
   */
  rtb_pos[1] = URControl_U.pos[1];

  /* DataTypeConversion: '<Root>/Data Type Conversion5' incorporates:
   *  Inport: '<Root>/rates'
   */
  rtb_omega[1] = URControl_U.rates[1];

  /* DataTypeConversion: '<Root>/Data Type Conversion6' incorporates:
   *  Inport: '<Root>/att'
   */
  rtb_att[1] = URControl_U.att[1];

  /* DataTypeConversion: '<Root>/Data Type Conversion3' incorporates:
   *  Inport: '<Root>/mag'
   */
  rtb_mag_idx_1 = URControl_U.mag[1];

  /* DataTypeConversion: '<Root>/Data Type Conversion1' incorporates:
   *  Inport: '<Root>/accs'
   */
  rtb_acc[2] = URControl_U.accs[2];

  /* DataTypeConversion: '<Root>/Data Type Conversion4' incorporates:
   *  Inport: '<Root>/pos'
   */
  rtb_pos[2] = URControl_U.pos[2];

  /* DataTypeConversion: '<Root>/Data Type Conversion5' incorporates:
   *  Inport: '<Root>/rates'
   */
  rtb_omega[2] = URControl_U.rates[2];

  /* DataTypeConversion: '<Root>/Data Type Conversion6' incorporates:
   *  Inport: '<Root>/att'
   */
  rtb_att[2] = URControl_U.att[2];

  /* Gain: '<S26>/1//2' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion6'
   *  Inport: '<Root>/att'
   */
  rtb_TmpSignalConversionAtSFun_6 = 0.5 * URControl_U.att[2];

  /* Trigonometry: '<S26>/sincos' */
  rtb_Product1_h = std::cos(rtb_TmpSignalConversionAtSFun_6);

  /* Fcn: '<S26>/q0' incorporates:
   *  Trigonometry: '<S26>/sincos'
   */
  acc_norm = rtb_Product1_h;
  rtb_TmpSignalConversionAtSFun_5 = std::sin(rtb_TmpSignalConversionAtSFun_6);

  /* Trigonometry: '<S26>/sincos' */
  rtb_VectorConcatenate_n_idx_0 = rtb_Product1_h;

  /* Gain: '<S26>/1//2' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion6'
   *  Inport: '<Root>/att'
   */
  rtb_TmpSignalConversionAtSFun_6 = 0.5 * URControl_U.att[1];

  /* Trigonometry: '<S26>/sincos' */
  rtb_Product1_h = std::cos(rtb_TmpSignalConversionAtSFun_6);

  /* Fcn: '<S26>/q0' incorporates:
   *  Trigonometry: '<S26>/sincos'
   */
  rtb_Sum_j = rtb_Product1_h;
  rtb_TmpSignalConversionAtSFun_4 = std::sin(rtb_TmpSignalConversionAtSFun_6);

  /* Trigonometry: '<S26>/sincos' */
  rtb_VectorConcatenate_n_idx_1 = rtb_Product1_h;

  /* Gain: '<S26>/1//2' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion6'
   *  Inport: '<Root>/att'
   */
  rtb_TmpSignalConversionAtSFun_6 = 0.5 * URControl_U.att[0];

  /* Trigonometry: '<S26>/sincos' */
  rtb_enableMeas = std::sin(rtb_TmpSignalConversionAtSFun_6);
  rtb_Product1_h = std::cos(rtb_TmpSignalConversionAtSFun_6);

  /* SignalConversion: '<S24>/TmpSignal ConversionAt SFunction Inport1' incorporates:
   *  Fcn: '<S26>/q0'
   *  Fcn: '<S26>/q1'
   *  MATLAB Function: '<S20>/MATLAB Function'
   */
  rtb_TmpSignalConversionAtSFun_7 = acc_norm * rtb_Sum_j * rtb_Product1_h +
    rtb_TmpSignalConversionAtSFun_5 * rtb_TmpSignalConversionAtSFun_4 *
    rtb_enableMeas;
  rtb_TmpSignalConversionAtSFun_6 = rtb_VectorConcatenate_n_idx_0 *
    rtb_VectorConcatenate_n_idx_1 * rtb_enableMeas -
    rtb_TmpSignalConversionAtSFun_5 * rtb_TmpSignalConversionAtSFun_4 *
    rtb_Product1_h;

  /* Fcn: '<S26>/q2' incorporates:
   *  Fcn: '<S26>/q1'
   *  Fcn: '<S26>/q3'
   */
  acc_norm = rtb_TmpSignalConversionAtSFun_5 * rtb_VectorConcatenate_n_idx_1;
  rtb_TmpSignalConversionAtSFun_4 *= rtb_VectorConcatenate_n_idx_0;

  /* SignalConversion: '<S24>/TmpSignal ConversionAt SFunction Inport1' incorporates:
   *  Fcn: '<S26>/q2'
   *  Fcn: '<S26>/q3'
   *  MATLAB Function: '<S20>/MATLAB Function'
   */
  rtb_TmpSignalConversionAtSFun_5 = rtb_TmpSignalConversionAtSFun_4 *
    rtb_Product1_h + acc_norm * rtb_enableMeas;
  rtb_TmpSignalConversionAtSFun_4 = acc_norm * rtb_Product1_h -
    rtb_TmpSignalConversionAtSFun_4 * rtb_enableMeas;

  /* MATLAB Function: '<S20>/MATLAB Function' incorporates:
   *  Memory: '<S20>/Memory'
   */
  /* :  error1 = norm(qMeas - qState); */
  /* :  error2 = norm(-qMeas - qState); */
  /* :  if error1 > error2 */
  rtb_TmpSignalConversionAtSFun_2[0] = rtb_TmpSignalConversionAtSFun_7 -
    URControl_DW.Memory_PreviousInput[0];
  rtb_TmpSignalConversionAtSFun_3[0] = -rtb_TmpSignalConversionAtSFun_7 -
    URControl_DW.Memory_PreviousInput[0];
  rtb_TmpSignalConversionAtSFun_2[1] = rtb_TmpSignalConversionAtSFun_6 -
    URControl_DW.Memory_PreviousInput[1];
  rtb_TmpSignalConversionAtSFun_3[1] = -rtb_TmpSignalConversionAtSFun_6 -
    URControl_DW.Memory_PreviousInput[1];
  rtb_TmpSignalConversionAtSFun_2[2] = rtb_TmpSignalConversionAtSFun_5 -
    URControl_DW.Memory_PreviousInput[2];
  rtb_TmpSignalConversionAtSFun_3[2] = -rtb_TmpSignalConversionAtSFun_5 -
    URControl_DW.Memory_PreviousInput[2];
  rtb_TmpSignalConversionAtSFun_2[3] = rtb_TmpSignalConversionAtSFun_4 -
    URControl_DW.Memory_PreviousInput[3];
  rtb_TmpSignalConversionAtSFun_3[3] = -rtb_TmpSignalConversionAtSFun_4 -
    URControl_DW.Memory_PreviousInput[3];
  if (norm_wXO8gvHp(rtb_TmpSignalConversionAtSFun_2) > norm_wXO8gvHp
      (rtb_TmpSignalConversionAtSFun_3)) {
    /* :  q = -qMeas; */
    rtb_TmpSignalConversionAtSFun_7 = -rtb_TmpSignalConversionAtSFun_7;
    rtb_TmpSignalConversionAtSFun_6 = -rtb_TmpSignalConversionAtSFun_6;
    rtb_TmpSignalConversionAtSFun_5 = -rtb_TmpSignalConversionAtSFun_5;
    rtb_TmpSignalConversionAtSFun_4 = -rtb_TmpSignalConversionAtSFun_4;
  } else {
    /* :  else */
    /* :  q = qMeas; */
  }

  /* MATLAB Function: '<S20>/enableMeas' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion6'
   *  Inport: '<Root>/att'
   */
  /* :  if isempty(attPrev) */
  /* :  enableMeas = 1; */
  rtb_enableMeas = 1.0;

  /* :  tol = 1e-3; */
  /* :  errorSum = sum(abs((attPrev - att))); */
  URControl_DW.attPrev[0] -= URControl_U.att[0];
  URControl_DW.attPrev[1] -= URControl_U.att[1];
  URControl_DW.attPrev[2] -= URControl_U.att[2];

  /* :  if errorSum < tol */
  if ((std::abs(URControl_DW.attPrev[0]) + std::abs(URControl_DW.attPrev[1])) +
      std::abs(URControl_DW.attPrev[2]) < 0.001) {
    /* :  enableMeas = 0; */
    rtb_enableMeas = 0.0;
  }

  /* :  attPrev = att; */
  URControl_DW.attPrev[0] = URControl_U.att[0];
  URControl_DW.attPrev[1] = URControl_U.att[1];
  URControl_DW.attPrev[2] = URControl_U.att[2];

  /* End of MATLAB Function: '<S20>/enableMeas' */

  /* Outputs for Enabled SubSystem: '<S23>/Correct1' incorporates:
   *  EnablePort: '<S28>/Enable'
   */
  /* DataTypeConversion: '<S23>/DataTypeConversion_Enable1' */
  if (rtb_enableMeas != 0.0) {
    /* MATLAB Function: '<S28>/Correct' incorporates:
     *  DataStoreRead: '<S28>/Data Store ReadX'
     */
    /* :  if pM.IsSimulinkFcn */
    /* :  else */
    /* :  MeasurementFcnH = str2func(pM.FcnName); */
    /* :  if pM.HasJacobian */
    /* :  MeasurementJacobianFcnH = str2func(pM.JacobianFcnName); */
    /* :  switch pM.NumberOfExtraArgumentInports */
    /* :  case 1 */
    /* :  extraArgs = {uMeas}; */
    /* :  if pM.HasAdditiveNoise */
    /* :  ekfCorrector = matlabshared.tracking.internal.EKFCorrectorAdditive(); */
    /* :  xNew = zeros(size(x),'like',x); */
    /* :  [xNew,P] = ekfCorrector.correct(... */
    /* :          yMeas,R,x,P,MeasurementFcnH,MeasurementJacobianFcnH,extraArgs{:}); */
    /* 'ekf_meas_jacob:13' posx = x(1); */
    /* 'ekf_meas_jacob:14' posy = x(2); */
    /* 'ekf_meas_jacob:15' posz = x(3); */
    /* 'ekf_meas_jacob:17' q1 = x(7); */
    /* 'ekf_meas_jacob:18' q2 = x(8); */
    /* 'ekf_meas_jacob:19' q3 = x(9); */
    /* 'ekf_meas_jacob:20' q4 = x(10); */
    /* 'ekf_meas_jacob:22' dx = u(1); */
    /* 'ekf_meas_jacob:23' dy = u(2); */
    /* 'ekf_meas_jacob:24' dz = u(3); */
    /* 'ekf_meas_jacob:26' B = ... */
    /* 'ekf_meas_jacob:27' [ 1, 0, 0, 0, 0, 0, 2*dx*q1 - 2*dy*q4 + 2*dz*q3, 2*dx*q2 + 2*dy*q3 + 2*dz*q4, 2*dy*q2 - 2*dx*q3 + 2*dz*q1, 2*dz*q2 - 2*dy*q1 - 2*dx*q4; */
    /* 'ekf_meas_jacob:28'  0, 1, 0, 0, 0, 0, 2*dx*q4 + 2*dy*q1 - 2*dz*q2, 2*dx*q3 - 2*dy*q2 - 2*dz*q1, 2*dx*q2 + 2*dy*q3 + 2*dz*q4, 2*dx*q1 - 2*dy*q4 + 2*dz*q3; */
    /* 'ekf_meas_jacob:29'  0, 0, 1, 0, 0, 0, 2*dy*q2 - 2*dx*q3 + 2*dz*q1, 2*dx*q4 + 2*dy*q1 - 2*dz*q2, 2*dy*q4 - 2*dx*q1 - 2*dz*q3, 2*dx*q2 + 2*dy*q3 + 2*dz*q4; */
    /* 'ekf_meas_jacob:30'  0, 0, 0, 0, 0, 0,                           1,                           0,                           0,                           0; */
    /* 'ekf_meas_jacob:31'  0, 0, 0, 0, 0, 0,                           0,                           1,                           0,                           0; */
    /* 'ekf_meas_jacob:32'  0, 0, 0, 0, 0, 0,                           0,                           0,                           1,                           0; */
    /* 'ekf_meas_jacob:33'  0, 0, 0, 0, 0, 0,                           0,                           0,                           0,                           1]; */
    dHdx[0] = 1.0;
    dHdx[7] = 0.0;
    dHdx[14] = 0.0;
    dHdx[21] = 0.0;
    dHdx[28] = 0.0;
    dHdx[35] = 0.0;
    rtb_enableMeas = (0.0 * URControl_DW.x[6] - 0.0 * URControl_DW.x[9]) + 0.0 *
      URControl_DW.x[8];
    dHdx[42] = rtb_enableMeas;
    acc_norm = (0.0 * URControl_DW.x[7] + 0.0 * URControl_DW.x[8]) + 0.0 *
      URControl_DW.x[9];
    dHdx[49] = acc_norm;
    rtb_Product1_h = (0.0 * URControl_DW.x[7] - 0.0 * URControl_DW.x[8]) + 0.0 *
      URControl_DW.x[6];
    dHdx[56] = rtb_Product1_h;
    dHdx[63] = (0.0 * URControl_DW.x[7] - 0.0 * URControl_DW.x[6]) - 0.0 *
      URControl_DW.x[9];
    dHdx[1] = 0.0;
    dHdx[8] = 1.0;
    dHdx[15] = 0.0;
    dHdx[22] = 0.0;
    dHdx[29] = 0.0;
    dHdx[36] = 0.0;
    rtb_Sum_j = (0.0 * URControl_DW.x[9] + 0.0 * URControl_DW.x[6]) - 0.0 *
      URControl_DW.x[7];
    dHdx[43] = rtb_Sum_j;
    dHdx[50] = (0.0 * URControl_DW.x[8] - 0.0 * URControl_DW.x[7]) - 0.0 *
      URControl_DW.x[6];
    dHdx[57] = acc_norm;
    dHdx[64] = rtb_enableMeas;
    dHdx[2] = 0.0;
    dHdx[9] = 0.0;
    dHdx[16] = 1.0;
    dHdx[23] = 0.0;
    dHdx[30] = 0.0;
    dHdx[37] = 0.0;
    dHdx[44] = rtb_Product1_h;
    dHdx[51] = rtb_Sum_j;
    dHdx[58] = (0.0 * URControl_DW.x[9] - 0.0 * URControl_DW.x[6]) - 0.0 *
      URControl_DW.x[8];
    dHdx[65] = acc_norm;
    for (qconj_tmp = 0; qconj_tmp < 10; qconj_tmp++) {
      dHdx[3 + 7 * qconj_tmp] = b[qconj_tmp];
      dHdx[4 + 7 * qconj_tmp] = c[qconj_tmp];
      dHdx[5 + 7 * qconj_tmp] = d[qconj_tmp];
      dHdx[6 + 7 * qconj_tmp] = e[qconj_tmp];
    }

    /* 'ekf_meas_func:3' y = zeros(7,1); */
    /* 'ekf_meas_func:5' posx = x(1); */
    /* 'ekf_meas_func:6' posy = x(2); */
    /* 'ekf_meas_func:7' posz = x(3); */
    /* 'ekf_meas_func:9' q = x(7:10); */
    /* 'ekf_meas_func:11' dx = u(1); */
    /* 'ekf_meas_func:12' dy = u(2); */
    /* 'ekf_meas_func:13' dz = u(3); */
    /* 'ekf_meas_func:15' dPos = quatRot(q', [dx, dy, dz]); */
    /* 'quatRot:3' qconj = [ q(:,1)  -q(:,2:4) ]; */
    /* 'quatRot:5' dummy = HProduct(HProduct(q,[0,vector]),qconj); */
    /* 'quatRot:14' vec = [v1(:,1).*v2(:,2) v1(:,1).*v2(:,3) v1(:,1).*v2(:,4)] + ... */
    /* 'quatRot:15'          [v2(:,1).*v1(:,2) v2(:,1).*v1(:,3) v2(:,1).*v1(:,4)]+... */
    /* 'quatRot:16'          [ v1(:,3).*v2(:,4)-v1(:,4).*v2(:,3) ... */
    /* 'quatRot:17'            v1(:,4).*v2(:,2)-v1(:,2).*v2(:,4) ... */
    /* 'quatRot:18'            v1(:,2).*v2(:,3)-v1(:,3).*v2(:,2)]; */
    /* 'quatRot:22' scalar = v1(:,1).*v2(:,1) - v1(:,2).*v2(:,2) - ... */
    /* 'quatRot:23'              v1(:,3).*v2(:,3) - v1(:,4).*v2(:,4); */
    /* 'quatRot:25' qout = [scalar  vec]; */
    FMin[0] = ((URControl_DW.x[6] * 0.0 - URControl_DW.x[7] * 0.0) -
               URControl_DW.x[8] * 0.0) - URControl_DW.x[9] * 0.0;
    FMin[1] = (URControl_DW.x[6] * 0.0 + 0.0 * URControl_DW.x[7]) +
      (URControl_DW.x[8] * 0.0 - URControl_DW.x[9] * 0.0);
    FMin[2] = (URControl_DW.x[6] * 0.0 + 0.0 * URControl_DW.x[8]) +
      (URControl_DW.x[9] * 0.0 - URControl_DW.x[7] * 0.0);
    FMin[3] = (URControl_DW.x[6] * 0.0 + 0.0 * URControl_DW.x[9]) +
      (URControl_DW.x[7] * 0.0 - URControl_DW.x[8] * 0.0);

    /* 'quatRot:14' vec = [v1(:,1).*v2(:,2) v1(:,1).*v2(:,3) v1(:,1).*v2(:,4)] + ... */
    /* 'quatRot:15'          [v2(:,1).*v1(:,2) v2(:,1).*v1(:,3) v2(:,1).*v1(:,4)]+... */
    /* 'quatRot:16'          [ v1(:,3).*v2(:,4)-v1(:,4).*v2(:,3) ... */
    /* 'quatRot:17'            v1(:,4).*v2(:,2)-v1(:,2).*v2(:,4) ... */
    /* 'quatRot:18'            v1(:,2).*v2(:,3)-v1(:,3).*v2(:,2)]; */
    /* 'quatRot:22' scalar = v1(:,1).*v2(:,1) - v1(:,2).*v2(:,2) - ... */
    /* 'quatRot:23'              v1(:,3).*v2(:,3) - v1(:,4).*v2(:,4); */
    /* 'quatRot:25' qout = [scalar  vec]; */
    /* 'quatRot:6' r = dummy(2:4); */
    /* 'ekf_meas_func:17' y(1) = posx + dPos(1); */
    y[0] = ((FMin[0] * -URControl_DW.x[7] + URControl_DW.x[6] * FMin[1]) +
            (FMin[2] * -URControl_DW.x[9] - FMin[3] * -URControl_DW.x[8])) +
      URControl_DW.x[0];

    /* 'ekf_meas_func:18' y(2) = posy + dPos(2); */
    y[1] = ((FMin[0] * -URControl_DW.x[8] + URControl_DW.x[6] * FMin[2]) +
            (FMin[3] * -URControl_DW.x[7] - FMin[1] * -URControl_DW.x[9])) +
      URControl_DW.x[1];

    /* 'ekf_meas_func:19' y(3) = posz + dPos(3); */
    y[2] = ((FMin[0] * -URControl_DW.x[9] + URControl_DW.x[6] * FMin[3]) +
            (FMin[1] * -URControl_DW.x[8] - FMin[2] * -URControl_DW.x[7])) +
      URControl_DW.x[2];

    /* 'ekf_meas_func:21' y(4:7) = q; */
    y[3] = URControl_DW.x[6];
    y[4] = URControl_DW.x[7];
    y[5] = URControl_DW.x[8];
    y[6] = URControl_DW.x[9];

    /* SignalConversion: '<S31>/TmpSignal ConversionAt SFunction Inport3' incorporates:
     *  DataTypeConversion: '<Root>/Data Type Conversion4'
     *  Inport: '<Root>/pos'
     *  MATLAB Function: '<S28>/Correct'
     */
    rtb_pos_0[0] = URControl_U.pos[0];
    rtb_pos_0[1] = URControl_U.pos[1];
    rtb_pos_0[2] = URControl_U.pos[2];
    rtb_pos_0[3] = rtb_TmpSignalConversionAtSFun_7;
    rtb_pos_0[4] = rtb_TmpSignalConversionAtSFun_6;
    rtb_pos_0[5] = rtb_TmpSignalConversionAtSFun_5;
    rtb_pos_0[6] = rtb_TmpSignalConversionAtSFun_4;

    /* MATLAB Function: '<S28>/Correct' incorporates:
     *  Constant: '<S23>/R1'
     *  DataStoreRead: '<S28>/Data Store ReadP'
     *  SignalConversion: '<S31>/TmpSignal ConversionAt SFunction Inport3'
     */
    for (qconj_tmp = 0; qconj_tmp < 7; qconj_tmp++) {
      y[qconj_tmp] = rtb_pos_0[qconj_tmp] - y[qconj_tmp];
    }

    for (qconj_tmp = 0; qconj_tmp < 10; qconj_tmp++) {
      for (km_tmp = 0; km_tmp < 7; km_tmp++) {
        gain_tmp = qconj_tmp + 10 * km_tmp;
        gain[gain_tmp] = 0.0;
        for (i = 0; i < 10; i++) {
          gain[gain_tmp] += URControl_DW.P[10 * i + qconj_tmp] * dHdx[7 * i +
            km_tmp];
        }
      }
    }

    for (qconj_tmp = 0; qconj_tmp < 7; qconj_tmp++) {
      for (km_tmp = 0; km_tmp < 10; km_tmp++) {
        gain_tmp = qconj_tmp + 7 * km_tmp;
        dHdx_1[gain_tmp] = 0.0;
        for (i = 0; i < 10; i++) {
          dHdx_1[gain_tmp] += dHdx[7 * i + qconj_tmp] * URControl_DW.P[10 *
            km_tmp + i];
        }
      }

      for (km_tmp = 0; km_tmp < 7; km_tmp++) {
        rtb_VectorConcatenate_n_idx_1 = 0.0;
        for (i = 0; i < 10; i++) {
          rtb_VectorConcatenate_n_idx_1 += dHdx_1[7 * i + qconj_tmp] * dHdx[7 *
            i + km_tmp];
        }

        gain_tmp = 7 * km_tmp + qconj_tmp;
        dHdx_0[gain_tmp] = rtCP_R1_Value[gain_tmp] +
          rtb_VectorConcatenate_n_idx_1;
      }
    }

    mrdivide_helper_D6MymrEr(gain, dHdx_0);
    for (qconj_tmp = 0; qconj_tmp < 10; qconj_tmp++) {
      for (km_tmp = 0; km_tmp < 10; km_tmp++) {
        gain_tmp = qconj_tmp + 10 * km_tmp;
        Jacobian[gain_tmp] = 0.0;
        for (i = 0; i < 7; i++) {
          Jacobian[gain_tmp] += gain[10 * i + qconj_tmp] * dHdx[7 * km_tmp + i];
        }
      }

      for (km_tmp = 0; km_tmp < 10; km_tmp++) {
        rtb_VectorConcatenate_n_idx_1 = 0.0;
        for (i = 0; i < 10; i++) {
          rtb_VectorConcatenate_n_idx_1 += Jacobian[10 * i + qconj_tmp] *
            URControl_DW.P[10 * km_tmp + i];
        }

        i = 10 * km_tmp + qconj_tmp;
        Jacobian_0[i] = URControl_DW.P[i] - rtb_VectorConcatenate_n_idx_1;
      }
    }

    /* DataStoreWrite: '<S28>/Data Store WriteP' */
    memcpy(&URControl_DW.P[0], &Jacobian_0[0], 100U * sizeof(real_T));

    /* DataStoreWrite: '<S28>/Data Store WriteX' incorporates:
     *  DataStoreRead: '<S28>/Data Store ReadX'
     *  MATLAB Function: '<S28>/Correct'
     */
    for (qconj_tmp = 0; qconj_tmp < 10; qconj_tmp++) {
      rtb_VectorConcatenate_n_idx_1 = 0.0;
      for (km_tmp = 0; km_tmp < 7; km_tmp++) {
        rtb_VectorConcatenate_n_idx_1 += gain[10 * km_tmp + qconj_tmp] *
          y[km_tmp];
      }

      URControl_DW.x[qconj_tmp] += rtb_VectorConcatenate_n_idx_1;
    }

    /* End of DataStoreWrite: '<S28>/Data Store WriteX' */
  }

  /* End of DataTypeConversion: '<S23>/DataTypeConversion_Enable1' */
  /* End of Outputs for SubSystem: '<S23>/Correct1' */

  /* Outputs for Atomic SubSystem: '<S23>/Output' */
  /* DataStoreRead: '<S29>/Data Store Read' */
  memcpy(&rtb_DataStoreRead_k[0], &URControl_DW.x[0], 10U * sizeof(real_T));

  /* Sqrt: '<S39>/sqrt' incorporates:
   *  DataStoreRead: '<S29>/Data Store Read'
   *  Product: '<S40>/Product'
   *  Product: '<S40>/Product1'
   *  Product: '<S40>/Product2'
   *  Product: '<S40>/Product3'
   *  Sum: '<S40>/Sum'
   */
  rtb_Merge = std::sqrt(((URControl_DW.x[6] * URControl_DW.x[6] +
    URControl_DW.x[7] * URControl_DW.x[7]) + URControl_DW.x[8] * URControl_DW.x
    [8]) + URControl_DW.x[9] * URControl_DW.x[9]);

  /* Product: '<S34>/Product' incorporates:
   *  DataStoreRead: '<S29>/Data Store Read'
   */
  rtb_VectorConcatenate_n_idx_0 = URControl_DW.x[6] / rtb_Merge;

  /* Product: '<S34>/Product1' incorporates:
   *  DataStoreRead: '<S29>/Data Store Read'
   */
  rtb_Product1_h = URControl_DW.x[7] / rtb_Merge;

  /* Product: '<S34>/Product2' incorporates:
   *  DataStoreRead: '<S29>/Data Store Read'
   */
  rtb_Product2_l = URControl_DW.x[8] / rtb_Merge;

  /* Product: '<S34>/Product3' incorporates:
   *  DataStoreRead: '<S29>/Data Store Read'
   */
  rtb_Merge = URControl_DW.x[9] / rtb_Merge;

  /* End of Outputs for SubSystem: '<S23>/Output' */

  /* Fcn: '<S25>/fcn2' incorporates:
   *  Fcn: '<S25>/fcn5'
   */
  acc_norm = rtb_VectorConcatenate_n_idx_0 * rtb_VectorConcatenate_n_idx_0;
  rtb_Sum_j = rtb_Product1_h * rtb_Product1_h;
  rtb_TmpSignalConversionAtSFun_5 = rtb_Product2_l * rtb_Product2_l;
  rtb_TmpSignalConversionAtSFun_7 = rtb_Merge * rtb_Merge;
  rtb_enableMeas = ((acc_norm + rtb_Sum_j) - rtb_TmpSignalConversionAtSFun_5) -
    rtb_TmpSignalConversionAtSFun_7;

  /* DSPFlip: '<S20>/Flip1' incorporates:
   *  Fcn: '<S25>/fcn1'
   *  Trigonometry: '<S33>/Trigonometric Function1'
   */
  URControl_B.att_ekfquat[2] = rt_atan2d_snf((rtb_Product1_h * rtb_Product2_l +
    rtb_VectorConcatenate_n_idx_0 * rtb_Merge) * 2.0, rtb_enableMeas);

  /* Fcn: '<S25>/fcn3' */
  rtb_TmpSignalConversionAtSFun_4 = (rtb_Product1_h * rtb_Merge -
    rtb_VectorConcatenate_n_idx_0 * rtb_Product2_l) * -2.0;

  /* If: '<S35>/If' incorporates:
   *  Constant: '<S36>/Constant'
   *  Constant: '<S37>/Constant'
   */
  if (rtb_TmpSignalConversionAtSFun_4 > 1.0) {
    /* Outputs for IfAction SubSystem: '<S35>/If Action Subsystem' incorporates:
     *  ActionPort: '<S36>/Action Port'
     */
    rtb_enableMeas = 1.0;

    /* End of Outputs for SubSystem: '<S35>/If Action Subsystem' */
  } else if (rtb_TmpSignalConversionAtSFun_4 < -1.0) {
    /* Outputs for IfAction SubSystem: '<S35>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S37>/Action Port'
     */
    rtb_enableMeas = 1.0;

    /* End of Outputs for SubSystem: '<S35>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S35>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S38>/Action Port'
     */
    URControl_IfActionSubsystem2(rtb_TmpSignalConversionAtSFun_4,
      &rtb_enableMeas);

    /* End of Outputs for SubSystem: '<S35>/If Action Subsystem2' */
  }

  /* End of If: '<S35>/If' */

  /* Trigonometry: '<S33>/trigFcn' */
  if (rtb_enableMeas > 1.0) {
    rtb_enableMeas = 1.0;
  } else {
    if (rtb_enableMeas < -1.0) {
      rtb_enableMeas = -1.0;
    }
  }

  rtb_VectorConcatenate_n_idx_1 = std::asin(rtb_enableMeas);

  /* End of Trigonometry: '<S33>/trigFcn' */

  /* DSPFlip: '<S20>/Flip1' incorporates:
   *  Fcn: '<S25>/fcn4'
   *  Fcn: '<S25>/fcn5'
   *  Trigonometry: '<S33>/Trigonometric Function3'
   */
  URControl_B.att_ekfquat[0] = rt_atan2d_snf((rtb_Product2_l * rtb_Merge +
    rtb_VectorConcatenate_n_idx_0 * rtb_Product1_h) * 2.0, ((acc_norm -
    rtb_Sum_j) - rtb_TmpSignalConversionAtSFun_5) +
    rtb_TmpSignalConversionAtSFun_7);
  URControl_B.att_ekfquat[1] = rtb_VectorConcatenate_n_idx_1;
  URControl_B.att_ekfquat[1] = rtb_VectorConcatenate_n_idx_1;

  /* DiscreteIntegrator: '<S21>/Discrete-Time Integrator' */
  rtb_TmpSignalConversionAtSFun_4 = URControl_DW.DiscreteTimeIntegrator_DSTATE;

  /* MATLAB Function: '<S21>/MATLAB Function2' incorporates:
   *  DiscreteIntegrator: '<S21>/Discrete-Time Integrator'
   */
  /* :  q = (lambda < -pi) | (pi < lambda); */
  rtb_Compare = (URControl_DW.DiscreteTimeIntegrator_DSTATE <
                 -3.1415926535897931);
  rtb_Compare_j = (3.1415926535897931 <
                   URControl_DW.DiscreteTimeIntegrator_DSTATE);

  /* :  psi = lambda(q) + pi; */
  i = 0;
  if (rtb_Compare || rtb_Compare_j) {
    i = 1;
  }

  if (0 <= i - 1) {
    psi_data = URControl_DW.DiscreteTimeIntegrator_DSTATE + 3.1415926535897931;
    positiveInput_data = (psi_data > 0.0);
  }

  /* :  positiveInput = (psi > 0); */
  /* :  psi = mod(psi, 2*pi); */
  if (0 <= i - 1) {
    b_absxk = psi_data;
  }

  if (0 <= static_cast<int8_T>(i) - 1) {
    b_t = psi_data;
  }

  if (0 <= static_cast<int8_T>(i) - 1) {
    if (rtIsNaN(b_absxk) || rtIsInf(b_absxk)) {
      rtb_Product2_l = (rtNaN);
    } else if (b_absxk == 0.0) {
      rtb_Product2_l = 0.0;
    } else {
      rtb_Product2_l = std::fmod(b_absxk, 6.2831853071795862);
      rEQ0 = (rtb_Product2_l == 0.0);
      if (!rEQ0) {
        rtb_Merge = std::abs(b_absxk / 6.2831853071795862);
        rEQ0 = (std::abs(rtb_Merge - std::floor(rtb_Merge + 0.5)) <=
                2.2204460492503131E-16 * rtb_Merge);
      }

      if (rEQ0) {
        rtb_Product2_l = 0.0;
      } else {
        if (b_absxk < 0.0) {
          rtb_Product2_l += 6.2831853071795862;
        }
      }
    }

    b_t = rtb_Product2_l;
  }

  if (0 <= static_cast<int8_T>(i) - 1) {
    psi_data = b_t;
    b_data = (b_t == 0.0);
  }

  /* :  psi((psi == 0) & positiveInput) = 2*pi; */
  if ((0 <= static_cast<int8_T>(i) - 1) && (b_data && positiveInput_data)) {
    psi_data = 6.2831853071795862;
  }

  /* :  lambda(q) = psi - pi; */
  rtb_TmpSignalConversionAtSFun_7 = URControl_DW.DiscreteTimeIntegrator_DSTATE;
  if (rtb_Compare || rtb_Compare_j) {
    rtb_TmpSignalConversionAtSFun_7 = psi_data - 3.1415926535897931;
  }

  /* Gain: '<S115>/1//2' incorporates:
   *  Delay: '<S21>/Delay2'
   *  MATLAB Function: '<S21>/MATLAB Function2'
   *  Sum: '<S55>/Add3'
   */
  rtb_TmpSignalConversionAtSFun_6 = (rtb_TmpSignalConversionAtSFun_7 -
    URControl_DW.Delay2_DSTATE[2]) * 0.5;

  /* Trigonometry: '<S115>/sincos' */
  rtb_Product1_h = std::sin(rtb_TmpSignalConversionAtSFun_6);
  rtb_TmpSignalConversionAtSFun_5 = std::cos(rtb_TmpSignalConversionAtSFun_6);

  /* Gain: '<S115>/1//2' incorporates:
   *  Delay: '<S21>/Delay1'
   */
  rtb_u2[0] = URControl_DW.Delay1_DSTATE[0];
  rtb_u2[1] = URControl_DW.Delay1_DSTATE[1];

  /* Fcn: '<S115>/q0' */
  rtb_enableMeas = rtb_Product1_h * 0.0 * 0.0 + rtb_TmpSignalConversionAtSFun_5;

  /* MATLAB Function: '<S21>/MATLAB Function11' incorporates:
   *  BusCreator: '<S21>/BusConversion_InsertedFor_MATLAB Function11_at_inport_0'
   *  DataTypeConversion: '<Root>/Data Type Conversion3'
   *  DataTypeConversion: '<Root>/Data Type Conversion4'
   *  DataTypeConversion: '<Root>/Data Type Conversion6'
   *  Inport: '<Root>/att'
   *  Inport: '<Root>/mag'
   *  Inport: '<Root>/pos'
   *  MATLAB Function: '<S21>/MATLAB Function2'
   */
  /* :  [alpha,kk] = rateCorrectionCF(sensor,att_est,psi_mag, URControlParams); */
  /* 'rateCorrectionCF:3' mag = sensor.mag; */
  /* 'rateCorrectionCF:4' acc = sensor.acc; */
  /* 'rateCorrectionCF:6' g = URControlParams.g; */
  /* 'rateCorrectionCF:7' mI = [URControlParams.magxI, URControlParams.magyI, URControlParams.magzI]'; */
  mI[0] = URControlParams.magxI;
  mI[1] = URControlParams.magyI;
  mI[2] = URControlParams.magzI;

  /* 'rateCorrectionCF:10' acc_norm = norm(acc); */
  rtb_TmpSignalConversionAtSFun_6 = 3.3121686421112381E-170;
  rtb_Product2_l = std::abs(rtb_acc[0]);
  if (rtb_Product2_l > 3.3121686421112381E-170) {
    acc_norm = 1.0;
    rtb_TmpSignalConversionAtSFun_6 = rtb_Product2_l;
  } else {
    rtb_VectorConcatenate_n_idx_0 = rtb_Product2_l / 3.3121686421112381E-170;
    acc_norm = rtb_VectorConcatenate_n_idx_0 * rtb_VectorConcatenate_n_idx_0;
  }

  rtb_Product2_l = std::abs(rtb_acc[1]);
  if (rtb_Product2_l > rtb_TmpSignalConversionAtSFun_6) {
    rtb_VectorConcatenate_n_idx_0 = rtb_TmpSignalConversionAtSFun_6 /
      rtb_Product2_l;
    acc_norm = acc_norm * rtb_VectorConcatenate_n_idx_0 *
      rtb_VectorConcatenate_n_idx_0 + 1.0;
    rtb_TmpSignalConversionAtSFun_6 = rtb_Product2_l;
  } else {
    rtb_VectorConcatenate_n_idx_0 = rtb_Product2_l /
      rtb_TmpSignalConversionAtSFun_6;
    acc_norm += rtb_VectorConcatenate_n_idx_0 * rtb_VectorConcatenate_n_idx_0;
  }

  rtb_Product2_l = std::abs(rtb_acc[2]);
  if (rtb_Product2_l > rtb_TmpSignalConversionAtSFun_6) {
    rtb_VectorConcatenate_n_idx_0 = rtb_TmpSignalConversionAtSFun_6 /
      rtb_Product2_l;
    acc_norm = acc_norm * rtb_VectorConcatenate_n_idx_0 *
      rtb_VectorConcatenate_n_idx_0 + 1.0;
    rtb_TmpSignalConversionAtSFun_6 = rtb_Product2_l;
  } else {
    rtb_VectorConcatenate_n_idx_0 = rtb_Product2_l /
      rtb_TmpSignalConversionAtSFun_6;
    acc_norm += rtb_VectorConcatenate_n_idx_0 * rtb_VectorConcatenate_n_idx_0;
  }

  acc_norm = rtb_TmpSignalConversionAtSFun_6 * std::sqrt(acc_norm);

  /* 'rateCorrectionCF:11' h = (1 - abs(acc_norm/g-1)*3/2); */
  /* 'rateCorrectionCF:12' h = max(h,0); */
  acc_norm = 1.0 - std::abs(acc_norm / URControlParams.g - 1.0) * 3.0 / 2.0;
  if (!(acc_norm > 0.0)) {
    acc_norm = 0.0;
  }

  /* 'rateCorrectionCF:14' ka = URControlParams.ka * h; */
  /* 'rateCorrectionCF:16' km = zeros(3,3); */
  memset(&km[0], 0, 9U * sizeof(real_T));

  /* 'rateCorrectionCF:17' if sensor.pos(3) < -0.5 */
  if (URControl_U.pos[2] < -0.5F) {
    /* 'rateCorrectionCF:18' km = URControlParams.km; */
    memcpy(&km[0], &URControlParams.km[0], 9U * sizeof(real_T));
  }

  /* 'rateCorrectionCF:20' km2 = URControlParams.km2; */
  /* 'rateCorrectionCF:23' phiE = att_est(1); */
  /* 'rateCorrectionCF:24' thetaE = att_est(2); */
  /* 'rateCorrectionCF:26' psiE = psi_mag; */
  /* 'rateCorrectionCF:29' R_E = [cos(thetaE)*cos(psiE)                             , cos(thetaE)*sin(psiE)                                      , -sin(thetaE); */
  /* 'rateCorrectionCF:30'         sin(phiE)*sin(thetaE)*cos(psiE)-cos(phiE)*sin(psiE)  , sin(phiE)*sin(thetaE)*sin(psiE)+cos(phiE)*cos(psiE)    , sin(phiE)*cos(thetaE); */
  /* 'rateCorrectionCF:31'         cos(phiE)*sin(thetaE)*cos(psiE)+sin(phiE)*sin(psiE)  , cos(phiE)*sin(thetaE)*sin(psiE)-sin(phiE)*cos(psiE)    , cos(phiE)*cos(thetaE)]; */
  /* 'rateCorrectionCF:32' R_E = R_E'; */
  rtb_Sum_j = std::cos(rtb_u2[1]);
  rtb_TmpSignalConversionAtSFun_6 = std::cos(rtb_TmpSignalConversionAtSFun_7);
  R_E[0] = rtb_Sum_j * rtb_TmpSignalConversionAtSFun_6;
  rtb_VectorConcatenate_n_idx_0 = std::sin(rtb_TmpSignalConversionAtSFun_7);
  R_E[1] = rtb_Sum_j * rtb_VectorConcatenate_n_idx_0;
  psi_data = std::sin(rtb_u2[1]);
  R_E[2] = -psi_data;
  b_absxk = std::sin(rtb_u2[0]);
  b_t = b_absxk * psi_data;
  rtb_VectorConcatenate_n_idx_1 = std::cos(rtb_u2[0]);
  R_E[3] = b_t * rtb_TmpSignalConversionAtSFun_6 - rtb_VectorConcatenate_n_idx_1
    * rtb_VectorConcatenate_n_idx_0;
  R_E[4] = b_t * rtb_VectorConcatenate_n_idx_0 + rtb_VectorConcatenate_n_idx_1 *
    rtb_TmpSignalConversionAtSFun_6;
  R_E[5] = b_absxk * rtb_Sum_j;
  psi_data *= rtb_VectorConcatenate_n_idx_1;
  R_E[6] = psi_data * rtb_TmpSignalConversionAtSFun_6 + b_absxk *
    rtb_VectorConcatenate_n_idx_0;
  R_E[7] = psi_data * rtb_VectorConcatenate_n_idx_0 - b_absxk *
    rtb_TmpSignalConversionAtSFun_6;
  R_E[8] = rtb_VectorConcatenate_n_idx_1 * rtb_Sum_j;

  /* 'rateCorrectionCF:35' phiO    = sensor.att(1); */
  /* 'rateCorrectionCF:36' thetaO  = sensor.att(2); */
  /* 'rateCorrectionCF:37' psiO    = sensor.att(3); */
  /* 'rateCorrectionCF:39' R_O = [cos(thetaO)*cos(psiO)                             , cos(thetaO)*sin(psiO)                                      , -sin(thetaO); */
  /* 'rateCorrectionCF:40'         sin(phiO)*sin(thetaO)*cos(psiO)-cos(phiO)*sin(psiO)  , sin(phiO)*sin(thetaO)*sin(psiO)+cos(phiO)*cos(psiO)    , sin(phiO)*cos(thetaO); */
  /* 'rateCorrectionCF:41'         cos(phiO)*sin(thetaO)*cos(psiO)+sin(phiO)*sin(psiO)  , cos(phiO)*sin(thetaO)*sin(psiO)-sin(phiO)*cos(psiO)    , cos(phiO)*cos(thetaO)]; */
  /* 'rateCorrectionCF:42' R_O = R_O'; */
  /* 'rateCorrectionCF:44' Rc = R_E*R_O'; */
  rtb_VectorConcatenate_n_idx_1 = std::cos((real_T)URControl_U.att[1]);
  rtb_Sum_j = std::cos((real_T)URControl_U.att[2]);
  tmp[0] = rtb_VectorConcatenate_n_idx_1 * rtb_Sum_j;
  psi_data = std::sin((real_T)URControl_U.att[2]);
  tmp[3] = rtb_VectorConcatenate_n_idx_1 * psi_data;
  b_absxk = std::sin((real_T)URControl_U.att[1]);
  tmp[6] = -b_absxk;
  b_t = std::sin((real_T)URControl_U.att[0]);
  rtb_Merge = b_t * b_absxk;
  rtb_Product2_l = std::cos((real_T)URControl_U.att[0]);
  tmp[1] = rtb_Merge * rtb_Sum_j - rtb_Product2_l * psi_data;
  tmp[4] = rtb_Merge * psi_data + rtb_Product2_l * rtb_Sum_j;
  tmp[7] = b_t * rtb_VectorConcatenate_n_idx_1;
  b_absxk *= rtb_Product2_l;
  tmp[2] = b_absxk * rtb_Sum_j + b_t * psi_data;
  tmp[5] = b_absxk * psi_data - b_t * rtb_Sum_j;
  tmp[8] = rtb_Product2_l * rtb_VectorConcatenate_n_idx_1;

  /* 'rateCorrectionCF:47' expected_ltp = R_E([1,2],1); */
  /* 'rateCorrectionCF:49' heading_x = cos(psiE); */
  /* 'rateCorrectionCF:50' heading_y = sin(psiE); */
  /* 'rateCorrectionCF:52' residual_ltp = -[0; 0; expected_ltp(1)*heading_y - expected_ltp(2)*heading_x]; */
  /* 'rateCorrectionCF:55' a = ka / g *  cross(R_E' * [0 0 -1]', acc)' + ... */
  /* 'rateCorrectionCF:56'     + km / norm(mI)^2 * cross(R_E' * mI, mag)' + ... */
  /* 'rateCorrectionCF:57'     + km2 * R_E' * residual_ltp; */
  for (qconj_tmp = 0; qconj_tmp < 3; qconj_tmp++) {
    for (km_tmp = 0; km_tmp < 3; km_tmp++) {
      i = qconj_tmp + 3 * km_tmp;
      Rc[i] = 0.0;
      Rc[i] += tmp[3 * km_tmp] * R_E[qconj_tmp];
      Rc[i] += tmp[3 * km_tmp + 1] * R_E[qconj_tmp + 3];
      Rc[i] += tmp[3 * km_tmp + 2] * R_E[qconj_tmp + 6];
      y_tmp[km_tmp + 3 * qconj_tmp] = R_E[i];
    }
  }

  rtb_Sum_j = 0.0;
  psi_data = 3.3121686421112381E-170;
  for (i = 0; i < 3; i++) {
    rtb_VectorConcatenate_n_idx_1 = y_tmp[i + 3];
    rtb_Merge = y_tmp[i + 6];
    b_absxk = std::abs(mI[i]);
    if (b_absxk > psi_data) {
      b_t = psi_data / b_absxk;
      rtb_Sum_j = rtb_Sum_j * b_t * b_t + 1.0;
      psi_data = b_absxk;
    } else {
      b_t = b_absxk / psi_data;
      rtb_Sum_j += b_t * b_t;
    }

    rtb_u2[i] = -rtb_Merge + (rtb_VectorConcatenate_n_idx_1 * 0.0 + y_tmp[i] *
      0.0);
    acc[i] = rtb_Merge * mI[2] + (rtb_VectorConcatenate_n_idx_1 * mI[1] +
      y_tmp[i] * mI[0]);
  }

  rtb_Sum_j = psi_data * std::sqrt(rtb_Sum_j);
  rtb_Merge = rtb_Sum_j * rtb_Sum_j;
  rtb_Sum_j = rtb_u2[1] * rtb_acc[2] - rtb_u2[2] * rtb_acc[1];
  psi_data = rtb_u2[2] * rtb_acc[0] - rtb_u2[0] * rtb_acc[2];
  b_absxk = rtb_u2[0] * rtb_acc[1] - rtb_u2[1] * rtb_acc[0];
  for (qconj_tmp = 0; qconj_tmp < 9; qconj_tmp++) {
    tmp[qconj_tmp] = URControlParams.ka[qconj_tmp] * acc_norm /
      URControlParams.g;
    km_0[qconj_tmp] = km[qconj_tmp] / rtb_Merge;
  }

  acc_norm = acc[1] * URControl_U.mag[2] - acc[2] * URControl_U.mag[1];
  b_t = acc[2] * URControl_U.mag[0] - acc[0] * URControl_U.mag[2];
  rtb_VectorConcatenate_n_idx_1 = acc[0] * URControl_U.mag[1] - acc[1] *
    URControl_U.mag[0];
  rtb_TmpSignalConversionAtSFun_6 = -(R_E[0] * rtb_VectorConcatenate_n_idx_0 -
    R_E[1] * rtb_TmpSignalConversionAtSFun_6);
  for (qconj_tmp = 0; qconj_tmp < 3; qconj_tmp++) {
    mI[qconj_tmp] = ((y_tmp[qconj_tmp + 3] * URControlParams.km2 * -0.0 +
                      URControlParams.km2 * y_tmp[qconj_tmp] * -0.0) +
                     y_tmp[qconj_tmp + 6] * URControlParams.km2 *
                     rtb_TmpSignalConversionAtSFun_6) + ((tmp[qconj_tmp + 6] *
      b_absxk + (tmp[qconj_tmp + 3] * psi_data + tmp[qconj_tmp] * rtb_Sum_j)) +
      (km_0[qconj_tmp + 6] * rtb_VectorConcatenate_n_idx_1 + (km_0[qconj_tmp + 3]
      * b_t + km_0[qconj_tmp] * acc_norm)));
  }

  /* 'rateCorrectionCF:60' kk = R_O' * mI; */
  /* 'rateCorrectionCF:62' A = [0      -a(3)       a(2); */
  /* 'rateCorrectionCF:63'      a(3)    0         -a(1); */
  /* 'rateCorrectionCF:64'     -a(2)    a(1)       0]; */
  /* 'rateCorrectionCF:66' alphaC = A + URControlParams.ke * (Rc-Rc')/2; */
  tmp[0] = 0.0;
  tmp[3] = -mI[2];
  tmp[6] = mI[1];
  tmp[1] = mI[2];
  tmp[4] = 0.0;
  tmp[7] = -mI[0];
  tmp[2] = -mI[1];
  tmp[5] = mI[0];
  tmp[8] = 0.0;
  for (qconj_tmp = 0; qconj_tmp < 3; qconj_tmp++) {
    km[3 * qconj_tmp] = (Rc[3 * qconj_tmp] - Rc[qconj_tmp]) * URControlParams.ke
      / 2.0 + tmp[3 * qconj_tmp];
    km_tmp = 3 * qconj_tmp + 1;
    km[km_tmp] = (Rc[km_tmp] - Rc[qconj_tmp + 3]) * URControlParams.ke / 2.0 +
      tmp[km_tmp];
    km_tmp = 3 * qconj_tmp + 2;
    km[km_tmp] = (Rc[km_tmp] - Rc[qconj_tmp + 6]) * URControlParams.ke / 2.0 +
      tmp[km_tmp];
  }

  /* 'rateCorrectionCF:67' alpha = [alphaC(3,2), alphaC(1,3), alphaC(2,1)]'; */
  rtb_u2[0] = km[5];
  rtb_u2[1] = km[6];
  rtb_u2[2] = km[1];

  /* MATLAB Function: '<S21>/MATLAB Function1' incorporates:
   *  Constant: '<S21>/Constant1'
   *  DataTypeConversion: '<Root>/Data Type Conversion5'
   *  Delay: '<S21>/Delay'
   *  DiscreteIntegrator: '<S21>/Discrete-Time Integrator3'
   *  Inport: '<Root>/rates'
   *  MATLAB Function: '<S21>/MATLAB Function11'
   *  Sum: '<S21>/Add2'
   */
  /* :  q_pred = updateQ(omegac, alpha, q_prev, dt); */
  /* 'updateQ:3' rate = omegac - alpha; */
  mI[0] = (URControl_U.rates[0] - URControl_DW.DiscreteTimeIntegrator3_DSTATE[0])
    - km[5];
  mI[1] = (URControl_U.rates[1] - URControl_DW.DiscreteTimeIntegrator3_DSTATE[1])
    - km[6];
  mI[2] = (URControl_U.rates[2] - URControl_DW.DiscreteTimeIntegrator3_DSTATE[2])
    - km[1];

  /* 'updateQ:5' p = rate(1); */
  /* 'updateQ:5' q = rate(2); */
  /* 'updateQ:5' r = rate(3); */
  /* 'updateQ:7' A = 0.5 * [0 -p -q -r; */
  /* 'updateQ:8'            p  0  r -q; */
  /* 'updateQ:9'            q -r  0  p; */
  /* 'updateQ:10'            r  q -p  0]; */
  /* 'updateQ:11' if norm(rate) > 0.0 */
  rtb_VectorConcatenate_n_idx_1 = norm_2e9Xj4lM(mI);
  if (rtb_VectorConcatenate_n_idx_1 > 0.0) {
    /* 'updateQ:12' q_pred = (eye(4) * cos(norm(rate)*dt/2) ... */
    /* 'updateQ:13'            + 2/norm(rate)*A * sin(norm(rate)*dt/2))*q_prev'; */
    rtb_TmpSignalConversionAtSFun_6 = rtb_VectorConcatenate_n_idx_1 * 0.002 /
      2.0;
    rtb_VectorConcatenate_n_idx_0 = std::cos(rtb_TmpSignalConversionAtSFun_6);
    acc_norm = 2.0 / rtb_VectorConcatenate_n_idx_1;
    rtb_Sum_j = std::sin(rtb_TmpSignalConversionAtSFun_6);
    acc_norm_0[0] = acc_norm * 0.0 * rtb_Sum_j;
    psi_data = 0.5 * -mI[0];
    acc_norm_0[4] = psi_data * acc_norm * rtb_Sum_j;
    b_absxk = 0.5 * -mI[1];
    acc_norm_0[8] = b_absxk * acc_norm * rtb_Sum_j;
    b_t = 0.5 * -mI[2];
    acc_norm_0[12] = b_t * acc_norm * rtb_Sum_j;
    rtb_TmpSignalConversionAtSFun_6 = 0.5 * mI[0] * acc_norm;
    acc_norm_0[1] = rtb_TmpSignalConversionAtSFun_6 * rtb_Sum_j;
    rtb_VectorConcatenate_n_idx_1 = acc_norm * 0.0 * rtb_Sum_j;
    acc_norm_0[5] = rtb_VectorConcatenate_n_idx_1;
    rtb_Merge = 0.5 * mI[2] * acc_norm * rtb_Sum_j;
    acc_norm_0[9] = rtb_Merge;
    acc_norm_0[13] = b_absxk * acc_norm * rtb_Sum_j;
    b_absxk = 0.5 * mI[1] * acc_norm * rtb_Sum_j;
    acc_norm_0[2] = b_absxk;
    acc_norm_0[6] = b_t * acc_norm * rtb_Sum_j;
    acc_norm_0[10] = rtb_VectorConcatenate_n_idx_1;
    acc_norm_0[14] = rtb_TmpSignalConversionAtSFun_6 * rtb_Sum_j;
    acc_norm_0[3] = rtb_Merge;
    acc_norm_0[7] = b_absxk;
    acc_norm_0[11] = psi_data * acc_norm * rtb_Sum_j;
    acc_norm_0[15] = rtb_VectorConcatenate_n_idx_1;
    for (qconj_tmp = 0; qconj_tmp < 16; qconj_tmp++) {
      b_a_0[qconj_tmp] = static_cast<real_T>(b_a[qconj_tmp]) *
        rtb_VectorConcatenate_n_idx_0 + acc_norm_0[qconj_tmp];
    }

    for (qconj_tmp = 0; qconj_tmp < 4; qconj_tmp++) {
      acc_norm = b_a_0[qconj_tmp + 12] * URControl_DW.Delay_DSTATE[3] +
        (b_a_0[qconj_tmp + 8] * URControl_DW.Delay_DSTATE[2] + (b_a_0[qconj_tmp
          + 4] * URControl_DW.Delay_DSTATE[1] + b_a_0[qconj_tmp] *
          URControl_DW.Delay_DSTATE[0]));
      qconj[qconj_tmp] = acc_norm;
    }
  } else {
    /* 'updateQ:14' else */
    /* 'updateQ:15' q_pred = q_prev'; */
    qconj[0] = URControl_DW.Delay_DSTATE[0];
    qconj[1] = URControl_DW.Delay_DSTATE[1];
    qconj[2] = URControl_DW.Delay_DSTATE[2];
    qconj[3] = URControl_DW.Delay_DSTATE[3];
  }

  /* End of MATLAB Function: '<S21>/MATLAB Function1' */

  /* Fcn: '<S115>/q1' */
  rtb_VectorConcatenate_n_idx_0 = rtb_TmpSignalConversionAtSFun_5 * 0.0 -
    rtb_Product1_h * 0.0;

  /* Fcn: '<S115>/q2' */
  rtb_Product2_l = rtb_TmpSignalConversionAtSFun_5 * 0.0 + rtb_Product1_h * 0.0;

  /* Fcn: '<S115>/q3' */
  rtb_TmpSignalConversionAtSFun_5 = rtb_Product1_h -
    rtb_TmpSignalConversionAtSFun_5 * 0.0 * 0.0;

  /* Sum: '<S95>/Sum' incorporates:
   *  Product: '<S95>/Product'
   *  Product: '<S95>/Product1'
   *  Product: '<S95>/Product2'
   *  Product: '<S95>/Product3'
   */
  acc_norm = ((rtb_enableMeas * qconj[0] - rtb_VectorConcatenate_n_idx_0 *
               qconj[1]) - rtb_Product2_l * qconj[2]) -
    rtb_TmpSignalConversionAtSFun_5 * qconj[3];

  /* Sum: '<S96>/Sum' incorporates:
   *  Product: '<S96>/Product'
   *  Product: '<S96>/Product1'
   *  Product: '<S96>/Product2'
   *  Product: '<S96>/Product3'
   */
  rtb_Sum_j = ((rtb_enableMeas * qconj[1] + rtb_VectorConcatenate_n_idx_0 *
                qconj[0]) + rtb_Product2_l * qconj[3]) -
    rtb_TmpSignalConversionAtSFun_5 * qconj[2];

  /* Sum: '<S97>/Sum' incorporates:
   *  Product: '<S97>/Product'
   *  Product: '<S97>/Product1'
   *  Product: '<S97>/Product2'
   *  Product: '<S97>/Product3'
   */
  psi_data = ((rtb_enableMeas * qconj[2] - rtb_VectorConcatenate_n_idx_0 *
               qconj[3]) + rtb_Product2_l * qconj[0]) +
    rtb_TmpSignalConversionAtSFun_5 * qconj[1];

  /* Product: '<S98>/Product' */
  rtb_enableMeas *= qconj[3];

  /* Product: '<S98>/Product1' */
  rtb_VectorConcatenate_n_idx_0 *= qconj[2];

  /* Product: '<S98>/Product2' */
  rtb_Product2_l *= qconj[1];

  /* Product: '<S98>/Product3' */
  rtb_TmpSignalConversionAtSFun_5 *= qconj[0];

  /* Sum: '<S98>/Sum' */
  rtb_enableMeas = ((rtb_enableMeas + rtb_VectorConcatenate_n_idx_0) -
                    rtb_Product2_l) + rtb_TmpSignalConversionAtSFun_5;

  /* Sqrt: '<S113>/sqrt' incorporates:
   *  Product: '<S114>/Product'
   *  Product: '<S114>/Product1'
   *  Product: '<S114>/Product2'
   *  Product: '<S114>/Product3'
   *  Sum: '<S114>/Sum'
   */
  rtb_TmpSignalConversionAtSFun_6 = std::sqrt(((acc_norm * acc_norm + rtb_Sum_j *
    rtb_Sum_j) + psi_data * psi_data) + rtb_enableMeas * rtb_enableMeas);

  /* Product: '<S108>/Product' */
  rtb_TmpSignalConversionAtSFun_5 = acc_norm / rtb_TmpSignalConversionAtSFun_6;

  /* Product: '<S108>/Product1' */
  rtb_VectorConcatenate_n_idx_0 = rtb_Sum_j / rtb_TmpSignalConversionAtSFun_6;

  /* Product: '<S108>/Product2' */
  rtb_Product1_h = psi_data / rtb_TmpSignalConversionAtSFun_6;

  /* Product: '<S108>/Product3' */
  rtb_TmpSignalConversionAtSFun_6 = rtb_enableMeas /
    rtb_TmpSignalConversionAtSFun_6;

  /* Fcn: '<S54>/fcn1' */
  rtb_Product2_l = (rtb_VectorConcatenate_n_idx_0 * rtb_Product1_h +
                    rtb_TmpSignalConversionAtSFun_5 *
                    rtb_TmpSignalConversionAtSFun_6) * 2.0;

  /* Fcn: '<S54>/fcn2' incorporates:
   *  Fcn: '<S54>/fcn5'
   */
  b_t = rtb_TmpSignalConversionAtSFun_5 * rtb_TmpSignalConversionAtSFun_5;
  rtb_Merge = rtb_VectorConcatenate_n_idx_0 * rtb_VectorConcatenate_n_idx_0;
  Euler_flip_tmp = rtb_Product1_h * rtb_Product1_h;
  Euler_flip_tmp_0 = rtb_TmpSignalConversionAtSFun_6 *
    rtb_TmpSignalConversionAtSFun_6;

  /* DSPFlip: '<S21>/Flip' incorporates:
   *  Fcn: '<S54>/fcn2'
   *  Trigonometry: '<S107>/Trigonometric Function1'
   */
  URControl_B.Euler_flip[2] = rt_atan2d_snf(rtb_Product2_l, ((b_t + rtb_Merge) -
    Euler_flip_tmp) - Euler_flip_tmp_0);

  /* Fcn: '<S54>/fcn3' */
  b_absxk = (rtb_VectorConcatenate_n_idx_0 * rtb_TmpSignalConversionAtSFun_6 -
             rtb_TmpSignalConversionAtSFun_5 * rtb_Product1_h) * -2.0;

  /* If: '<S109>/If' incorporates:
   *  Constant: '<S110>/Constant'
   *  Constant: '<S111>/Constant'
   */
  if (b_absxk > 1.0) {
    /* Outputs for IfAction SubSystem: '<S109>/If Action Subsystem' incorporates:
     *  ActionPort: '<S110>/Action Port'
     */
    rtb_Product2_l = 1.0;

    /* End of Outputs for SubSystem: '<S109>/If Action Subsystem' */
  } else if (b_absxk < -1.0) {
    /* Outputs for IfAction SubSystem: '<S109>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S111>/Action Port'
     */
    rtb_Product2_l = 1.0;

    /* End of Outputs for SubSystem: '<S109>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S109>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S112>/Action Port'
     */
    URControl_IfActionSubsystem2(b_absxk, &rtb_Product2_l);

    /* End of Outputs for SubSystem: '<S109>/If Action Subsystem2' */
  }

  /* End of If: '<S109>/If' */

  /* Trigonometry: '<S107>/trigFcn' */
  if (rtb_Product2_l > 1.0) {
    rtb_Product2_l = 1.0;
  } else {
    if (rtb_Product2_l < -1.0) {
      rtb_Product2_l = -1.0;
    }
  }

  rtb_VectorConcatenate_n_idx_1 = std::asin(rtb_Product2_l);

  /* End of Trigonometry: '<S107>/trigFcn' */

  /* DSPFlip: '<S21>/Flip' incorporates:
   *  Fcn: '<S54>/fcn4'
   *  Fcn: '<S54>/fcn5'
   *  Trigonometry: '<S107>/Trigonometric Function3'
   */
  URControl_B.Euler_flip[0] = rt_atan2d_snf((rtb_Product1_h *
    rtb_TmpSignalConversionAtSFun_6 + rtb_TmpSignalConversionAtSFun_5 *
    rtb_VectorConcatenate_n_idx_0) * 2.0, ((b_t - rtb_Merge) - Euler_flip_tmp) +
    Euler_flip_tmp_0);
  URControl_B.Euler_flip[1] = rtb_VectorConcatenate_n_idx_1;
  URControl_B.Euler_flip[1] = rtb_VectorConcatenate_n_idx_1;

  /* DataTypeConversion: '<Root>/Data Type Conversion10' incorporates:
   *  Inport: '<Root>/fail_flag'
   */
  b_absxk = URControl_U.fail_flag;

  /* Delay: '<Root>/Delay' incorporates:
   *  Constant: '<Root>/delay'
   *  DataTypeConversion: '<Root>/Data Type Conversion10'
   *  Inport: '<Root>/fail_flag'
   */
  rtb_VectorConcatenate_n_idx_1 = std::floor(URControlParams.fail_delay * 500.0);
  if ((rtb_VectorConcatenate_n_idx_1 < 1.0) || rtIsNaN
      (rtb_VectorConcatenate_n_idx_1)) {
    b_t = URControl_U.fail_flag;
  } else {
    if (rtb_VectorConcatenate_n_idx_1 > 1000.0) {
      tmp_0 = 1000U;
    } else {
      if (rtIsNaN(rtb_VectorConcatenate_n_idx_1) || rtIsInf
          (rtb_VectorConcatenate_n_idx_1)) {
        rtb_VectorConcatenate_n_idx_1 = 0.0;
      } else {
        rtb_VectorConcatenate_n_idx_1 = std::fmod(rtb_VectorConcatenate_n_idx_1,
          4.294967296E+9);
      }

      tmp_0 = rtb_VectorConcatenate_n_idx_1 < 0.0 ? static_cast<uint32_T>
        (-static_cast<int32_T>(static_cast<uint32_T>
          (-rtb_VectorConcatenate_n_idx_1))) : static_cast<uint32_T>
        (rtb_VectorConcatenate_n_idx_1);
    }

    b_t = URControl_DW.Delay_DSTATE_j[1000U - tmp_0];
  }

  /* End of Delay: '<Root>/Delay' */

  /* MATLAB Function: '<S7>/basic estimators' incorporates:
   *  BusCreator: '<S7>/BusConversion_InsertedFor_basic estimators_at_inport_0'
   *  DataStoreRead: '<S29>/Data Store Read'
   *  DataTypeConversion: '<Root>/Data Type Conversion10'
   *  DataTypeConversion: '<Root>/Data Type Conversion2'
   *  DataTypeConversion: '<Root>/Data Type Conversion4'
   *  DataTypeConversion: '<Root>/Data Type Conversion5'
   *  DataTypeConversion: '<Root>/Data Type Conversion6'
   *  DataTypeConversion: '<Root>/Data Type Conversion7'
   *  Inport: '<Root>/att'
   *  Inport: '<Root>/esc_rpm'
   *  Inport: '<Root>/fail_flag'
   *  Inport: '<Root>/pos'
   *  Inport: '<Root>/rates'
   *  Inport: '<Root>/vel'
   *  MATLAB Function: '<S21>/MATLAB Function2'
   */
  /* :  [State, DAQ] = UREstimators(sensors, State, DAQ, pos_ekf, vel_ekf, att_ekf,att_CF, fail_id_slow, fail_id_quick, psi_mag, par, URControlParams); */
  rtb_TmpSignalConversionAtSFun_6 = URControl_U.fail_flag;

  /* 'UREstimators:3' if isempty(omegaFilter) */
  if (!URControl_DW.omegaFilter_not_empty) {
    /* 'UREstimators:3' omegaFilter = LPFilter(URpar.est_omegaFilterT, [0,0,0], 40, -40); */
    /* 'LPFilter:14' obj.filterT = filterT; */
    URControl_DW.omegaFilter.filterT = URControlParams.est_omegaFilterT;

    /* 'LPFilter:15' obj.value = initValue; */
    URControl_DW.omegaFilter.value[0] = 0.0;
    URControl_DW.omegaFilter.value[1] = 0.0;
    URControl_DW.omegaFilter.value[2] = 0.0;

    /* 'LPFilter:16' obj.maxLim = maxLim; */
    URControl_DW.omegaFilter.maxLim = 40.0;

    /* 'LPFilter:17' obj.minLim = minLim; */
    URControl_DW.omegaFilter.minLim = -40.0;
    URControl_DW.omegaFilter_not_empty = true;
  }

  /* 'UREstimators:4' if isempty(posFilter) */
  if (!URControl_DW.posFilter_not_empty) {
    /* 'UREstimators:4' posFilter = LPFilter(URpar.est_posFilterT, [0,0,0], inf, -inf); */
    /* 'LPFilter:14' obj.filterT = filterT; */
    URControl_DW.posFilter.filterT = URControlParams.est_posFilterT;

    /* 'LPFilter:15' obj.value = initValue; */
    URControl_DW.posFilter.value[0] = 0.0;
    URControl_DW.posFilter.value[1] = 0.0;
    URControl_DW.posFilter.value[2] = 0.0;

    /* 'LPFilter:16' obj.maxLim = maxLim; */
    URControl_DW.posFilter.maxLim = (rtInf);

    /* 'LPFilter:17' obj.minLim = minLim; */
    URControl_DW.posFilter.minLim = (rtMinusInf);
    URControl_DW.posFilter_not_empty = true;
  }

  /* 'UREstimators:5' if isempty(velFilter) */
  if (!URControl_DW.velFilter_not_empty) {
    /* 'UREstimators:5' velFilter = LPFilter(URpar.est_velFilterT, [0,0,0], 20, -20); */
    /* 'LPFilter:14' obj.filterT = filterT; */
    URControl_DW.velFilter.filterT = URControlParams.est_velFilterT;

    /* 'LPFilter:15' obj.value = initValue; */
    URControl_DW.velFilter.value[0] = 0.0;
    URControl_DW.velFilter.value[1] = 0.0;
    URControl_DW.velFilter.value[2] = 0.0;

    /* 'LPFilter:16' obj.maxLim = maxLim; */
    URControl_DW.velFilter.maxLim = 20.0;

    /* 'LPFilter:17' obj.minLim = minLim; */
    URControl_DW.velFilter.minLim = -20.0;
    URControl_DW.velFilter_not_empty = true;
  }

  /* 'UREstimators:6' if isempty(accFilter) */
  if (!URControl_DW.accFilter_not_empty) {
    /* 'UREstimators:6' accFilter = LPFilter(URpar.est_accFilterT, [0,0,0], 40, -40); */
    /* 'LPFilter:14' obj.filterT = filterT; */
    URControl_DW.accFilter.filterT = URControlParams.est_accFilterT;

    /* 'LPFilter:15' obj.value = initValue; */
    URControl_DW.accFilter.value[0] = 0.0;
    URControl_DW.accFilter.value[1] = 0.0;
    URControl_DW.accFilter.value[2] = 0.0;

    /* 'LPFilter:16' obj.maxLim = maxLim; */
    URControl_DW.accFilter.maxLim = 40.0;

    /* 'LPFilter:17' obj.minLim = minLim; */
    URControl_DW.accFilter.minLim = -40.0;
    URControl_DW.accFilter_not_empty = true;
  }

  /* 'UREstimators:7' if isempty(failProt) */
  /* 'UREstimators:9' state.acc = sensors.acc; */
  URControl_DW.State.acc[0] = rtb_acc[0];
  URControl_DW.State.acc[1] = rtb_acc[1];
  URControl_DW.State.acc[2] = rtb_acc[2];

  /* 'UREstimators:10' if URpar.est_useEKF == 1 */
  if (URControlParams.est_useEKF == 1.0) {
    /* Outputs for Atomic SubSystem: '<S23>/Output' */
    /* 'UREstimators:11' state.vel = vel_est'; */
    /* 'UREstimators:12' state.pos = pos_est'; */
    /* 'UREstimators:13' state.att = (mod(att_est + pi, 2*pi) - pi)'; */
    URControl_DW.State.vel[0] = URControl_DW.x[3];
    URControl_DW.State.pos[0] = URControl_DW.x[0];

    /* End of Outputs for SubSystem: '<S23>/Output' */
    if (rtIsNaN(URControl_B.att_ekfquat[0] + 3.1415926535897931) || rtIsInf
        (URControl_B.att_ekfquat[0] + 3.1415926535897931)) {
      rtb_Product2_l = (rtNaN);
    } else if (URControl_B.att_ekfquat[0] + 3.1415926535897931 == 0.0) {
      rtb_Product2_l = 0.0;
    } else {
      rtb_Product2_l = std::fmod(URControl_B.att_ekfquat[0] + 3.1415926535897931,
        6.2831853071795862);
      rEQ0 = (rtb_Product2_l == 0.0);
      if (!rEQ0) {
        rtb_Merge = std::abs((URControl_B.att_ekfquat[0] + 3.1415926535897931) /
                             6.2831853071795862);
        rEQ0 = (std::abs(rtb_Merge - std::floor(rtb_Merge + 0.5)) <=
                2.2204460492503131E-16 * rtb_Merge);
      }

      if (rEQ0) {
        rtb_Product2_l = 0.0;
      } else {
        if (URControl_B.att_ekfquat[0] + 3.1415926535897931 < 0.0) {
          rtb_Product2_l += 6.2831853071795862;
        }
      }
    }

    URControl_DW.State.att[0] = rtb_Product2_l - 3.1415926535897931;

    /* Outputs for Atomic SubSystem: '<S23>/Output' */
    URControl_DW.State.vel[1] = URControl_DW.x[4];
    URControl_DW.State.pos[1] = URControl_DW.x[1];

    /* End of Outputs for SubSystem: '<S23>/Output' */
    if (rtIsNaN(URControl_B.att_ekfquat[1] + 3.1415926535897931) || rtIsInf
        (URControl_B.att_ekfquat[1] + 3.1415926535897931)) {
      rtb_Product2_l = (rtNaN);
    } else if (URControl_B.att_ekfquat[1] + 3.1415926535897931 == 0.0) {
      rtb_Product2_l = 0.0;
    } else {
      rtb_Product2_l = std::fmod(URControl_B.att_ekfquat[1] + 3.1415926535897931,
        6.2831853071795862);
      rEQ0 = (rtb_Product2_l == 0.0);
      if (!rEQ0) {
        rtb_Merge = std::abs((URControl_B.att_ekfquat[1] + 3.1415926535897931) /
                             6.2831853071795862);
        rEQ0 = (std::abs(rtb_Merge - std::floor(rtb_Merge + 0.5)) <=
                2.2204460492503131E-16 * rtb_Merge);
      }

      if (rEQ0) {
        rtb_Product2_l = 0.0;
      } else {
        if (URControl_B.att_ekfquat[1] + 3.1415926535897931 < 0.0) {
          rtb_Product2_l += 6.2831853071795862;
        }
      }
    }

    URControl_DW.State.att[1] = rtb_Product2_l - 3.1415926535897931;

    /* Outputs for Atomic SubSystem: '<S23>/Output' */
    URControl_DW.State.vel[2] = URControl_DW.x[5];
    URControl_DW.State.pos[2] = URControl_DW.x[2];

    /* End of Outputs for SubSystem: '<S23>/Output' */
    if (rtIsNaN(URControl_B.att_ekfquat[2] + 3.1415926535897931) || rtIsInf
        (URControl_B.att_ekfquat[2] + 3.1415926535897931)) {
      rtb_Product2_l = (rtNaN);
    } else if (URControl_B.att_ekfquat[2] + 3.1415926535897931 == 0.0) {
      rtb_Product2_l = 0.0;
    } else {
      rtb_Product2_l = std::fmod(URControl_B.att_ekfquat[2] + 3.1415926535897931,
        6.2831853071795862);
      rEQ0 = (rtb_Product2_l == 0.0);
      if (!rEQ0) {
        rtb_Merge = std::abs((URControl_B.att_ekfquat[2] + 3.1415926535897931) /
                             6.2831853071795862);
        rEQ0 = (std::abs(rtb_Merge - std::floor(rtb_Merge + 0.5)) <=
                2.2204460492503131E-16 * rtb_Merge);
      }

      if (rEQ0) {
        rtb_Product2_l = 0.0;
      } else {
        if (URControl_B.att_ekfquat[2] + 3.1415926535897931 < 0.0) {
          rtb_Product2_l += 6.2831853071795862;
        }
      }
    }

    URControl_DW.State.att[2] = rtb_Product2_l - 3.1415926535897931;
  } else {
    /* 'UREstimators:14' else */
    /* 'UREstimators:15' state.vel = sensors.vel; */
    /* 'UREstimators:16' state.pos = sensors.pos; */
    /* 'UREstimators:17' state.att = sensors.att; */
    URControl_DW.State.vel[0] = URControl_U.vel[0];
    URControl_DW.State.pos[0] = URControl_U.pos[0];
    URControl_DW.State.att[0] = URControl_U.att[0];
    URControl_DW.State.vel[1] = URControl_U.vel[1];
    URControl_DW.State.pos[1] = URControl_U.pos[1];
    URControl_DW.State.att[1] = URControl_U.att[1];
    URControl_DW.State.vel[2] = URControl_U.vel[2];
    URControl_DW.State.pos[2] = URControl_U.pos[2];
    URControl_DW.State.att[2] = URControl_U.att[2];
  }

  /* 'UREstimators:20' if URpar.est_useCF == 1 */
  if (URControlParams.est_useCF == 1.0) {
    /* 'UREstimators:21' state.att(1:2) = att_CF(1:2)'; */
    URControl_DW.State.att[0] = URControl_B.Euler_flip[0];
    URControl_DW.State.att[1] = URControl_B.Euler_flip[1];
  }

  /* 'UREstimators:24' if URpar.est_useMag == 1 */
  if (URControlParams.est_useMag == 1.0) {
    /* 'UREstimators:26' state.att(3) =  psi_mag; */
    URControl_DW.State.att[2] = rtb_TmpSignalConversionAtSFun_7;
  }

  /* 'UREstimators:29' state.omega = sensors.omega; */
  URControl_DW.State.omega[0] = URControl_U.rates[0];
  URControl_DW.State.omega[1] = URControl_U.rates[1];
  URControl_DW.State.omega[2] = URControl_U.rates[2];

  /* 'UREstimators:31' omegaFilter.updateFilterT(URpar.est_omegaFilterT); */
  /* 'LPFilter:26' obj.filterT = filterT; */
  URControl_DW.omegaFilter.filterT = URControlParams.est_omegaFilterT;

  /* 'UREstimators:32' omegaFilter.update(sensors.omega); */
  URControl_LPFilter_update(&URControl_DW.omegaFilter, rtb_omega);

  /* 'UREstimators:33' state.omegaf = omegaFilter.value; */
  URControl_DW.State.omegaf[0] = URControl_DW.omegaFilter.value[0];
  URControl_DW.State.omegaf[1] = URControl_DW.omegaFilter.value[1];
  URControl_DW.State.omegaf[2] = URControl_DW.omegaFilter.value[2];

  /* 'UREstimators:35' posFilter.updateFilterT(URpar.est_posFilterT); */
  /* 'LPFilter:26' obj.filterT = filterT; */
  URControl_DW.posFilter.filterT = URControlParams.est_posFilterT;

  /* 'UREstimators:36' posFilter.update(state.pos); */
  URControl_LPFilter_update(&URControl_DW.posFilter, URControl_DW.State.pos);

  /* 'UREstimators:37' state.posf = posFilter.value; */
  URControl_DW.State.posf[0] = URControl_DW.posFilter.value[0];
  URControl_DW.State.posf[1] = URControl_DW.posFilter.value[1];
  URControl_DW.State.posf[2] = URControl_DW.posFilter.value[2];

  /* 'UREstimators:39' velFilter.updateFilterT(URpar.est_velFilterT); */
  /* 'LPFilter:26' obj.filterT = filterT; */
  URControl_DW.velFilter.filterT = URControlParams.est_velFilterT;

  /* 'UREstimators:40' velFilter.update(state.vel); */
  URControl_LPFilter_update(&URControl_DW.velFilter, URControl_DW.State.vel);

  /* 'UREstimators:41' state.velf = velFilter.value; */
  URControl_DW.State.velf[0] = URControl_DW.velFilter.value[0];
  URControl_DW.State.velf[1] = URControl_DW.velFilter.value[1];
  URControl_DW.State.velf[2] = URControl_DW.velFilter.value[2];

  /* 'UREstimators:43' accFilter.updateFilterT(URpar.est_accFilterT); */
  /* 'LPFilter:26' obj.filterT = filterT; */
  URControl_DW.accFilter.filterT = URControlParams.est_accFilterT;

  /* 'UREstimators:44' accFilter.update(state.acc); */
  URControl_LPFilter_update(&URControl_DW.accFilter, URControl_DW.State.acc);

  /* 'UREstimators:45' state.accf = accFilter.value; */
  URControl_DW.State.accf[0] = URControl_DW.accFilter.value[0];
  URControl_DW.State.accf[1] = URControl_DW.accFilter.value[1];
  URControl_DW.State.accf[2] = URControl_DW.accFilter.value[2];

  /* 'UREstimators:47' state.wRotor = sensors.wRotor/30*pi; */
  URControl_DW.State.wRotor[0] = static_cast<real_T>(URControl_U.esc_rpm[0]) /
    30.0 * 3.1415926535897931;
  URControl_DW.State.wRotor[1] = static_cast<real_T>(URControl_U.esc_rpm[1]) /
    30.0 * 3.1415926535897931;
  URControl_DW.State.wRotor[2] = static_cast<real_T>(URControl_U.esc_rpm[2]) /
    30.0 * 3.1415926535897931;
  URControl_DW.State.wRotor[3] = static_cast<real_T>(URControl_U.esc_rpm[3]) /
    30.0 * 3.1415926535897931;

  /* 'UREstimators:49' phi = state.att(1); */
  /* 'UREstimators:50' theta = state.att(2); */
  /* 'UREstimators:51' psi = state.att(3); */
  /* 'UREstimators:54' R_IB = [cos(theta)*cos(psi)                             , cos(theta)*sin(psi)                               , -sin(theta); */
  /* 'UREstimators:55'         sin(phi)*sin(theta)*cos(psi)-cos(phi)*sin(psi)  , sin(phi)*sin(theta)*sin(psi)+cos(phi)*cos(psi)    , sin(phi)*cos(theta); */
  /* 'UREstimators:56'         cos(phi)*sin(theta)*cos(psi)+sin(phi)*sin(psi)  , cos(phi)*sin(theta)*sin(psi)-sin(phi)*cos(psi)    , cos(phi)*cos(theta)]; */
  /* 'UREstimators:58' state.n = (R_IB'*[0;0;-1])'; */
  rtb_TmpSignalConversionAtSFun_5 = std::cos(URControl_DW.State.att[1]);
  rtb_TmpSignalConversionAtSFun_7 = std::cos(URControl_DW.State.att[2]);
  km[0] = rtb_TmpSignalConversionAtSFun_5 * rtb_TmpSignalConversionAtSFun_7;
  rtb_VectorConcatenate_n_idx_0 = std::sin(URControl_DW.State.att[2]);
  km[1] = rtb_TmpSignalConversionAtSFun_5 * rtb_VectorConcatenate_n_idx_0;
  rtb_Product1_h = std::sin(URControl_DW.State.att[1]);
  km[2] = -rtb_Product1_h;
  rtb_VectorConcatenate_n_idx_1 = std::sin(URControl_DW.State.att[0]);
  rtb_Merge = rtb_VectorConcatenate_n_idx_1 * rtb_Product1_h;
  rtb_Product2_l = std::cos(URControl_DW.State.att[0]);
  km[3] = rtb_Merge * rtb_TmpSignalConversionAtSFun_7 - rtb_Product2_l *
    rtb_VectorConcatenate_n_idx_0;
  km[4] = rtb_Merge * rtb_VectorConcatenate_n_idx_0 + rtb_Product2_l *
    rtb_TmpSignalConversionAtSFun_7;
  km[5] = rtb_VectorConcatenate_n_idx_1 * rtb_TmpSignalConversionAtSFun_5;
  rtb_Product1_h *= rtb_Product2_l;
  km[6] = rtb_Product1_h * rtb_TmpSignalConversionAtSFun_7 +
    rtb_VectorConcatenate_n_idx_1 * rtb_VectorConcatenate_n_idx_0;
  km[7] = rtb_Product1_h * rtb_VectorConcatenate_n_idx_0 -
    rtb_VectorConcatenate_n_idx_1 * rtb_TmpSignalConversionAtSFun_7;
  km[8] = rtb_Product2_l * rtb_TmpSignalConversionAtSFun_5;
  for (qconj_tmp = 0; qconj_tmp < 3; qconj_tmp++) {
    URControl_DW.State.n[qconj_tmp] = 0.0;
    URControl_DW.State.n[qconj_tmp] += km[qconj_tmp] * 0.0;
    URControl_DW.State.n[qconj_tmp] += km[qconj_tmp + 3] * 0.0;
    URControl_DW.State.n[qconj_tmp] += -km[qconj_tmp + 6];
  }

  /* 'UREstimators:63' dummy = par.URC.R_xy_uv*[state.omega(1); state.omega(2)]; */
  /* 'UREstimators:64' uRot = dummy(1); */
  /* 'UREstimators:64' vRot = dummy(2); */
  /* 'UREstimators:65' state.omegaUV = [uRot,vRot,state.omega(3)]; */
  URControl_DW.State.omegaUV[0] =
    URControl_ConstP.basicestimators_par.URC.R_xy_uv[0] *
    URControl_DW.State.omega[0] +
    URControl_ConstP.basicestimators_par.URC.R_xy_uv[2] *
    URControl_DW.State.omega[1];
  URControl_DW.State.omegaUV[1] =
    URControl_ConstP.basicestimators_par.URC.R_xy_uv[1] *
    URControl_DW.State.omega[0] +
    URControl_ConstP.basicestimators_par.URC.R_xy_uv[3] *
    URControl_DW.State.omega[1];
  URControl_DW.State.omegaUV[2] = URControl_DW.State.omega[2];

  /* 'UREstimators:67' dummy = par.URC.R_xy_uv*[state.omegaf(1); state.omegaf(2)]; */
  /* 'UREstimators:68' uRot = dummy(1); */
  /* 'UREstimators:68' vRot = dummy(2); */
  /* 'UREstimators:69' state.omegafUV = [uRot,vRot,state.omegaf(3)]; */
  URControl_DW.State.omegafUV[0] =
    URControl_ConstP.basicestimators_par.URC.R_xy_uv[0] *
    URControl_DW.State.omegaf[0] +
    URControl_ConstP.basicestimators_par.URC.R_xy_uv[2] *
    URControl_DW.State.omegaf[1];
  URControl_DW.State.omegafUV[1] =
    URControl_ConstP.basicestimators_par.URC.R_xy_uv[1] *
    URControl_DW.State.omegaf[0] +
    URControl_ConstP.basicestimators_par.URC.R_xy_uv[3] *
    URControl_DW.State.omegaf[1];
  URControl_DW.State.omegafUV[2] = URControl_DW.State.omegaf[2];

  /* 'UREstimators:72' if URpar.fail_altProt && state.pos(3) > URpar.fail_altThresh && fail_id_slow > 0 && sum(state.wRotor) > 400*4 */
  if ((URControlParams.fail_altProt != 0.0) && (URControl_DW.State.pos[2] >
       URControlParams.fail_altThresh) && (b_t > 0.0) &&
      (((URControl_DW.State.wRotor[0] + URControl_DW.State.wRotor[1]) +
        URControl_DW.State.wRotor[2]) + URControl_DW.State.wRotor[3] > 1600.0))
  {
    /* 'UREstimators:73' failProt = 1; */
    URControl_DW.failProt = 1.0;
  }

  /* 'UREstimators:76' if ~(fail_id_slow > 0) */
  if (!(b_t > 0.0)) {
    /* 'UREstimators:77' failProt = 0; */
    URControl_DW.failProt = 0.0;
  }

  /* 'UREstimators:80' if failProt */
  if (URControl_DW.failProt != 0.0) {
    /* 'UREstimators:81' fail_id_slow = 0; */
    b_t = 0.0;

    /* 'UREstimators:82' fail_id_quick = 0; */
    rtb_TmpSignalConversionAtSFun_6 = 0.0;
  }

  /* 'UREstimators:85' FMax = URpar.wMax^2*URpar.k0*ones(1,4); */
  rtb_Product2_l = URControlParams.wMax * URControlParams.wMax *
    URControlParams.k0;
  qconj[0] = rtb_Product2_l;
  qconj[1] = rtb_Product2_l;
  qconj[2] = rtb_Product2_l;
  qconj[3] = rtb_Product2_l;

  /* 'UREstimators:86' FMin = URpar.wMin^2*URpar.k0*ones(1,4); */
  rtb_Product2_l = URControlParams.wMin * URControlParams.wMin *
    URControlParams.k0;
  FMin[0] = rtb_Product2_l;
  FMin[1] = rtb_Product2_l;
  FMin[2] = rtb_Product2_l;
  FMin[3] = rtb_Product2_l;

  /* 'UREstimators:88' if fail_id_slow > 0 */
  if (b_t > 0.0) {
    /* 'UREstimators:89' FMax(fail_id_slow) = URpar.fail_wRot^2*URpar.k0; */
    rtb_Product1_h = URControlParams.fail_wRot * URControlParams.fail_wRot *
      URControlParams.k0;
    qconj_tmp = static_cast<int32_T>(b_t) - 1;
    qconj[qconj_tmp] = rtb_Product1_h;

    /* 'UREstimators:90' FMin(fail_id_slow) = URpar.fail_wRot^2*URpar.k0; */
    FMin[qconj_tmp] = rtb_Product1_h;
  }

  /* 'UREstimators:92' state.FMax = FMax; */
  /* 'UREstimators:93' state.FMin = FMin; */
  URControl_DW.State.FMax[0] = qconj[0];
  URControl_DW.State.FMin[0] = FMin[0];
  URControl_DW.State.FMax[1] = qconj[1];
  URControl_DW.State.FMin[1] = FMin[1];
  URControl_DW.State.FMax[2] = qconj[2];
  URControl_DW.State.FMin[2] = FMin[2];
  URControl_DW.State.FMax[3] = qconj[3];
  URControl_DW.State.FMin[3] = FMin[3];

  /* 'UREstimators:95' state.fail_id = fail_id_slow; */
  URControl_DW.State.fail_id = b_t;

  /* 'UREstimators:96' state.fail_id_quick = fail_id_quick; */
  URControl_DW.State.fail_id_quick = rtb_TmpSignalConversionAtSFun_6;

  /* 'UREstimators:99' daq.pos = state.pos; */
  /* 'UREstimators:100' daq.posRaw = sensors.pos; */
  /* 'UREstimators:101' daq.vel = state.vel; */
  /* 'UREstimators:102' daq.att = state.att; */
  /* 'UREstimators:103' daq.attRaw = sensors.att; */
  /* 'UREstimators:104' daq.acc = state.accf; */
  /* 'UREstimators:105' daq.accRaw = sensors.acc; */
  /* 'UREstimators:106' daq.n = state.n; */
  /* 'UREstimators:107' daq.omega = state.omega; */
  /* 'UREstimators:108' daq.omegaf = state.omegaf; */
  /* 'UREstimators:109' daq.omegaUV = state.omegaUV; */
  /* 'UREstimators:110' daq.omegafUV = state.omegafUV; */
  for (i = 0; i < 3; i++) {
    URControl_SharedDSM.DAQ.pos[i] = URControl_DW.State.pos[i];
    URControl_SharedDSM.DAQ.posRaw[i] = rtb_pos[i];
    URControl_SharedDSM.DAQ.vel[i] = URControl_DW.State.vel[i];
    URControl_SharedDSM.DAQ.att[i] = URControl_DW.State.att[i];
    URControl_SharedDSM.DAQ.attRaw[i] = rtb_att[i];
    URControl_SharedDSM.DAQ.acc[i] = URControl_DW.State.accf[i];
    URControl_SharedDSM.DAQ.accRaw[i] = rtb_acc[i];
    URControl_SharedDSM.DAQ.n[i] = 0.0;
    URControl_SharedDSM.DAQ.n[i] += km[i] * 0.0;
    URControl_SharedDSM.DAQ.n[i] += km[i + 3] * 0.0;
    URControl_SharedDSM.DAQ.n[i] += -km[i + 6];
    URControl_SharedDSM.DAQ.omega[i] = URControl_DW.State.omega[i];
    URControl_SharedDSM.DAQ.omegaf[i] = URControl_DW.State.omegaf[i];
    URControl_SharedDSM.DAQ.omegaUV[i] = URControl_DW.State.omegaUV[i];
    URControl_SharedDSM.DAQ.omegafUV[i] = URControl_DW.State.omegafUV[i];
  }

  /* 'UREstimators:111' daq.wRotor = state.wRotor; */
  /* 'UREstimators:112' daq.FMax = state.FMax; */
  /* 'UREstimators:113' daq.FMin = state.FMin; */
  URControl_SharedDSM.DAQ.wRotor[0] = URControl_DW.State.wRotor[0];
  URControl_SharedDSM.DAQ.FMax[0] = qconj[0];
  URControl_SharedDSM.DAQ.FMin[0] = FMin[0];
  URControl_SharedDSM.DAQ.wRotor[1] = URControl_DW.State.wRotor[1];
  URControl_SharedDSM.DAQ.FMax[1] = qconj[1];
  URControl_SharedDSM.DAQ.FMin[1] = FMin[1];
  URControl_SharedDSM.DAQ.wRotor[2] = URControl_DW.State.wRotor[2];
  URControl_SharedDSM.DAQ.FMax[2] = qconj[2];
  URControl_SharedDSM.DAQ.FMin[2] = FMin[2];
  URControl_SharedDSM.DAQ.wRotor[3] = URControl_DW.State.wRotor[3];
  URControl_SharedDSM.DAQ.FMax[3] = qconj[3];
  URControl_SharedDSM.DAQ.FMin[3] = FMin[3];

  /* 'UREstimators:114' daq.uvDot_max = state.uvDot_max; */
  /* 'UREstimators:115' daq.uvDot_min = state.uvDot_min; */
  /* 'UREstimators:116' daq.uv_max = state.uv_max; */
  /* 'UREstimators:117' daq.uv_min = state.uv_min; */
  URControl_SharedDSM.DAQ.uvDot_max[0] = URControl_DW.State.uvDot_max[0];
  URControl_SharedDSM.DAQ.uvDot_min[0] = URControl_DW.State.uvDot_min[0];
  URControl_SharedDSM.DAQ.uv_max[0] = URControl_DW.State.uv_max[0];
  URControl_SharedDSM.DAQ.uv_min[0] = URControl_DW.State.uv_min[0];
  URControl_SharedDSM.DAQ.uvDot_max[1] = URControl_DW.State.uvDot_max[1];
  URControl_SharedDSM.DAQ.uvDot_min[1] = URControl_DW.State.uvDot_min[1];
  URControl_SharedDSM.DAQ.uv_max[1] = URControl_DW.State.uv_max[1];
  URControl_SharedDSM.DAQ.uv_min[1] = URControl_DW.State.uv_min[1];

  /* :  stateOut = State; */
  rtb_stateOut = URControl_DW.State;

  /* End of MATLAB Function: '<S7>/basic estimators' */

  /* RelationalOperator: '<S10>/Compare' incorporates:
   *  Constant: '<S10>/Constant'
   *  Constant: '<S8>/Time constant'
   *  Sum: '<S8>/Sum1'
   */
  rtb_Compare = (1.0 - URControl_B.Probe[0] <= 0.0);

  /* DataTypeConversion: '<Root>/Data Type Conversion8' incorporates:
   *  Inport: '<Root>/pos_sp'
   */
  rtb_pos[0] = URControl_U.pos_sp[0];
  rtb_pos[1] = URControl_U.pos_sp[1];
  rtb_pos[2] = URControl_U.pos_sp[2];

  /* DiscreteIntegrator: '<S11>/Integrator' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion8'
   *  Inport: '<Root>/pos_sp'
   */
  if (URControl_DW.Integrator_IC_LOADING != 0) {
    URControl_DW.Integrator_DSTATE[0] = URControl_U.pos_sp[0];
    URControl_DW.Integrator_DSTATE[1] = URControl_U.pos_sp[1];
    URControl_DW.Integrator_DSTATE[2] = URControl_U.pos_sp[2];
  }

  if (rtb_Compare || (URControl_DW.Integrator_PrevResetState != 0)) {
    URControl_DW.Integrator_DSTATE[0] = URControl_U.pos_sp[0];
    URControl_DW.Integrator_DSTATE[1] = URControl_U.pos_sp[1];
    URControl_DW.Integrator_DSTATE[2] = URControl_U.pos_sp[2];
  }

  rtb_Integrator[0] = URControl_DW.Integrator_DSTATE[0];
  rtb_Integrator[1] = URControl_DW.Integrator_DSTATE[1];
  rtb_Integrator[2] = URControl_DW.Integrator_DSTATE[2];

  /* End of DiscreteIntegrator: '<S11>/Integrator' */

  /* RelationalOperator: '<S14>/Compare' incorporates:
   *  Constant: '<S12>/Time constant'
   *  Constant: '<S14>/Constant'
   *  Sum: '<S12>/Sum1'
   */
  rtb_Compare_j = (1.0 - URControl_B.Probe_d[0] <= 0.0);

  /* DataTypeConversion: '<Root>/Data Type Conversion9' incorporates:
   *  Inport: '<Root>/yaw_sp'
   */
  b_t = URControl_U.yaw_sp;

  /* DiscreteIntegrator: '<S15>/Integrator' incorporates:
   *  Inport: '<Root>/yaw_sp'
   */
  if (URControl_DW.Integrator_IC_LOADING_a != 0) {
    URControl_DW.Integrator_DSTATE_i = URControl_U.yaw_sp;
  }

  if (rtb_Compare_j || (URControl_DW.Integrator_PrevResetState_i != 0)) {
    URControl_DW.Integrator_DSTATE_i = URControl_U.yaw_sp;
  }

  rtb_Integrator_g = URControl_DW.Integrator_DSTATE_i;

  /* End of DiscreteIntegrator: '<S15>/Integrator' */

  /* DataTypeConversion: '<Root>/Data Type Conversion12' incorporates:
   *  Inport: '<Root>/manual'
   */
  for (i = 0; i < 5; i++) {
    rtb_manual[i] = URControl_U.manual[i];
  }

  /* End of DataTypeConversion: '<Root>/Data Type Conversion12' */

  /* MATLAB Function: '<S4>/position control' incorporates:
   *  BusCreator: '<S4>/BusConversion_InsertedFor_position control_at_inport_0'
   */
  /* :  [n_des, acc_ref, DAQ, errorInt,errorVel,velTarget] = URpositionControl(inputs, state, DAQ, par, URControlParams); */
  /* 'URpositionControl:3' if isempty(errorInt) */
  /* 'URpositionControl:6' if state.fail_id > 0 */
  if (rtb_stateOut.fail_id > 0.0) {
    /* 'URpositionControl:8' maxAngle = URpar.position_maxAngleFailure; */
    rtb_TmpSignalConversionAtSFun_6 = URControlParams.position_maxAngleFailure;

    /* 'URpositionControl:9' overallGain = URpar.position_failGain; */
    rtb_Product2_l = URControlParams.position_failGain;
  } else {
    /* 'URpositionControl:10' else */
    /* 'URpositionControl:11' maxAngle = URpar.position_maxAngle; */
    rtb_TmpSignalConversionAtSFun_6 = URControlParams.position_maxAngle;

    /* 'URpositionControl:12' overallGain = 1; */
    rtb_Product2_l = 1.0;
  }

  /* 'URpositionControl:16' errorPos = [inputs.xTarget, inputs.yTarget, inputs.zTarget]  - state.posf; */
  /* 'URpositionControl:18' velTarget = URpar.position_Kp_pos.*errorPos*overallGain; */
  rtb_VectorConcatenate_n_idx_0 = (rtb_Integrator[0] - rtb_stateOut.posf[0]) *
    URControlParams.position_Kp_pos[0] * rtb_Product2_l;
  rtb_VectorConcatenate_n_idx_1 = (rtb_Integrator[1] - rtb_stateOut.posf[1]) *
    URControlParams.position_Kp_pos[1] * rtb_Product2_l;
  rtb_TmpSignalConversionAtSFun_5 = (rtb_Integrator[2] - rtb_stateOut.posf[2]) *
    URControlParams.position_Kp_pos[2] * rtb_Product2_l;

  /* 'URpositionControl:19' maxVel = URpar.position_maxVel; */
  /* 'URpositionControl:20' velTarget = max(min(velTarget,maxVel),-maxVel); */
  /* 'URpositionControl:21' state.vel_ref(1:2) = velTarget(1:2); */
  /* 'URpositionControl:22' state.pos_ref = [inputs.xTarget, inputs.yTarget, inputs.zTarget]'; */
  /* 'URpositionControl:26' errorVel = velTarget - state.velf; */
  /* 'URpositionControl:27' errorInt = errorInt + errorVel/par.freq; */
  /* 'URpositionControl:28' intLim = URpar.position_intLim; */
  /* 'URpositionControl:29' errorInt = max(min(errorInt,intLim),-intLim); */
  /* 'URpositionControl:32' a_ref = URpar.position_Kp_vel.*errorVel*overallGain + URpar.position_Ki_vel.*errorInt*overallGain; */
  rEQ0 = rtIsNaN(URControlParams.position_maxVel);
  if ((!(rtb_VectorConcatenate_n_idx_0 < URControlParams.position_maxVel)) &&
      (!rEQ0)) {
    rtb_VectorConcatenate_n_idx_0 = URControlParams.position_maxVel;
  }

  positiveInput_data = rtIsNaN(-URControlParams.position_maxVel);
  if ((rtb_VectorConcatenate_n_idx_0 > -URControlParams.position_maxVel) ||
      positiveInput_data) {
    rtb_Product1_h = rtb_VectorConcatenate_n_idx_0;
  } else {
    rtb_Product1_h = -URControlParams.position_maxVel;
  }

  rtb_TmpSignalConversionAtSFun_7 = rtb_Product1_h - rtb_stateOut.velf[0];
  URControl_DW.errorInt[0] += rtb_TmpSignalConversionAtSFun_7 / 500.0;
  b_data = rtIsNaN(URControlParams.position_intLim);
  if ((URControl_DW.errorInt[0] < URControlParams.position_intLim) || b_data) {
    rtb_VectorConcatenate_n_idx_0 = URControl_DW.errorInt[0];
  } else {
    rtb_VectorConcatenate_n_idx_0 = URControlParams.position_intLim;
  }

  tmp_1 = rtIsNaN(-URControlParams.position_intLim);
  if ((rtb_VectorConcatenate_n_idx_0 > -URControlParams.position_intLim) ||
      tmp_1) {
    URControl_DW.errorInt[0] = rtb_VectorConcatenate_n_idx_0;
  } else {
    URControl_DW.errorInt[0] = -URControlParams.position_intLim;
  }

  mI[0] = URControlParams.position_Kp_vel[0] * rtb_TmpSignalConversionAtSFun_7 *
    rtb_Product2_l + URControlParams.position_Ki_vel[0] * URControl_DW.errorInt
    [0] * rtb_Product2_l;
  URControl_SharedDSM.DAQ.velTarget[0] = rtb_Product1_h;
  if ((rtb_VectorConcatenate_n_idx_1 < URControlParams.position_maxVel) || rEQ0)
  {
    rtb_VectorConcatenate_n_idx_0 = rtb_VectorConcatenate_n_idx_1;
  } else {
    rtb_VectorConcatenate_n_idx_0 = URControlParams.position_maxVel;
  }

  if ((rtb_VectorConcatenate_n_idx_0 > -URControlParams.position_maxVel) ||
      positiveInput_data) {
    rtb_Product1_h = rtb_VectorConcatenate_n_idx_0;
  } else {
    rtb_Product1_h = -URControlParams.position_maxVel;
  }

  rtb_TmpSignalConversionAtSFun_7 = rtb_Product1_h - rtb_stateOut.velf[1];
  URControl_DW.errorInt[1] += rtb_TmpSignalConversionAtSFun_7 / 500.0;
  if ((URControl_DW.errorInt[1] < URControlParams.position_intLim) || b_data) {
    rtb_VectorConcatenate_n_idx_0 = URControl_DW.errorInt[1];
  } else {
    rtb_VectorConcatenate_n_idx_0 = URControlParams.position_intLim;
  }

  if ((rtb_VectorConcatenate_n_idx_0 > -URControlParams.position_intLim) ||
      tmp_1) {
    URControl_DW.errorInt[1] = rtb_VectorConcatenate_n_idx_0;
  } else {
    URControl_DW.errorInt[1] = -URControlParams.position_intLim;
  }

  mI[1] = URControlParams.position_Kp_vel[1] * rtb_TmpSignalConversionAtSFun_7 *
    rtb_Product2_l + URControlParams.position_Ki_vel[1] * URControl_DW.errorInt
    [1] * rtb_Product2_l;
  URControl_SharedDSM.DAQ.velTarget[1] = rtb_Product1_h;
  if ((rtb_TmpSignalConversionAtSFun_5 < URControlParams.position_maxVel) ||
      rEQ0) {
    rtb_VectorConcatenate_n_idx_0 = rtb_TmpSignalConversionAtSFun_5;
  } else {
    rtb_VectorConcatenate_n_idx_0 = URControlParams.position_maxVel;
  }

  if ((rtb_VectorConcatenate_n_idx_0 > -URControlParams.position_maxVel) ||
      positiveInput_data) {
    rtb_Product1_h = rtb_VectorConcatenate_n_idx_0;
  } else {
    rtb_Product1_h = -URControlParams.position_maxVel;
  }

  rtb_TmpSignalConversionAtSFun_7 = rtb_Product1_h - rtb_stateOut.velf[2];
  URControl_DW.errorInt[2] += rtb_TmpSignalConversionAtSFun_7 / 500.0;
  if ((URControl_DW.errorInt[2] < URControlParams.position_intLim) || b_data) {
    rtb_VectorConcatenate_n_idx_0 = URControl_DW.errorInt[2];
  } else {
    rtb_VectorConcatenate_n_idx_0 = URControlParams.position_intLim;
  }

  if ((rtb_VectorConcatenate_n_idx_0 > -URControlParams.position_intLim) ||
      tmp_1) {
    URControl_DW.errorInt[2] = rtb_VectorConcatenate_n_idx_0;
  } else {
    URControl_DW.errorInt[2] = -URControlParams.position_intLim;
  }

  rtb_TmpSignalConversionAtSFun_7 = URControlParams.position_Kp_vel[2] *
    rtb_TmpSignalConversionAtSFun_7 * rtb_Product2_l +
    URControlParams.position_Ki_vel[2] * URControl_DW.errorInt[2] *
    rtb_Product2_l;

  /* 'URpositionControl:34' a_ref(3) = a_ref(3) - par.g; */
  /* 'URpositionControl:35' a_ref(3) = min(a_ref(3), par.URC.position_maxAref); */
  if (rtb_TmpSignalConversionAtSFun_7 - 9.81 < -2.0) {
    mI[2] = rtb_TmpSignalConversionAtSFun_7 - 9.81;
  } else {
    mI[2] = -2.0;
  }

  /* 'URpositionControl:37' if URpar.manual_enable == 1 */
  if (URControlParams.manual_enable == 1.0) {
    /* 'URpositionControl:38' a_ref(1) = inputs.manual(1) * URpar.manual_acc_gain; */
    mI[0] = rtb_manual[0] * URControlParams.manual_acc_gain;

    /* 'URpositionControl:39' a_ref(2) = inputs.manual(2) * URpar.manual_acc_gain; */
    mI[1] = rtb_manual[1] * URControlParams.manual_acc_gain;

    /* 'URpositionControl:40' a_ref(3) = -par.g; */
    mI[2] = -9.81;
  }

  /* 'URpositionControl:43' maxLateral = abs(par.g*tan(maxAngle)); */
  /* 'URpositionControl:44' latRatio = sqrt(a_ref(1)^2 + a_ref(2)^2)/maxLateral; */
  rtb_TmpSignalConversionAtSFun_6 = std::sqrt(mI[0] * mI[0] + mI[1] * mI[1]) /
    std::abs(9.81 * std::tan(rtb_TmpSignalConversionAtSFun_6));

  /* 'URpositionControl:45' a_ref(1) = a_ref(1)/(max(latRatio,1)); */
  if (rtb_TmpSignalConversionAtSFun_6 > 1.0) {
    rtb_TmpSignalConversionAtSFun_5 = rtb_TmpSignalConversionAtSFun_6;
  } else {
    rtb_TmpSignalConversionAtSFun_5 = 1.0;
    rtb_TmpSignalConversionAtSFun_6 = 1.0;
  }

  mI[0] /= rtb_TmpSignalConversionAtSFun_5;

  /* 'URpositionControl:46' a_ref(2) = a_ref(2)/(max(latRatio,1)); */
  mI[1] /= rtb_TmpSignalConversionAtSFun_6;

  /* 'URpositionControl:52' n_des = a_ref/norm(a_ref); */
  rtb_TmpSignalConversionAtSFun_6 = 3.3121686421112381E-170;
  rtb_Product2_l = std::abs(mI[0]);
  if (rtb_Product2_l > 3.3121686421112381E-170) {
    rtb_Merge = 1.0;
    rtb_TmpSignalConversionAtSFun_6 = rtb_Product2_l;
  } else {
    rtb_VectorConcatenate_n_idx_0 = rtb_Product2_l / 3.3121686421112381E-170;
    rtb_Merge = rtb_VectorConcatenate_n_idx_0 * rtb_VectorConcatenate_n_idx_0;
  }

  rtb_Product2_l = std::abs(mI[1]);
  if (rtb_Product2_l > rtb_TmpSignalConversionAtSFun_6) {
    rtb_VectorConcatenate_n_idx_0 = rtb_TmpSignalConversionAtSFun_6 /
      rtb_Product2_l;
    rtb_Merge = rtb_Merge * rtb_VectorConcatenate_n_idx_0 *
      rtb_VectorConcatenate_n_idx_0 + 1.0;
    rtb_TmpSignalConversionAtSFun_6 = rtb_Product2_l;
  } else {
    rtb_VectorConcatenate_n_idx_0 = rtb_Product2_l /
      rtb_TmpSignalConversionAtSFun_6;
    rtb_Merge += rtb_VectorConcatenate_n_idx_0 * rtb_VectorConcatenate_n_idx_0;
  }

  rtb_Product2_l = std::abs(mI[2]);
  if (rtb_Product2_l > rtb_TmpSignalConversionAtSFun_6) {
    rtb_VectorConcatenate_n_idx_0 = rtb_TmpSignalConversionAtSFun_6 /
      rtb_Product2_l;
    rtb_Merge = rtb_Merge * rtb_VectorConcatenate_n_idx_0 *
      rtb_VectorConcatenate_n_idx_0 + 1.0;
    rtb_TmpSignalConversionAtSFun_6 = rtb_Product2_l;
  } else {
    rtb_VectorConcatenate_n_idx_0 = rtb_Product2_l /
      rtb_TmpSignalConversionAtSFun_6;
    rtb_Merge += rtb_VectorConcatenate_n_idx_0 * rtb_VectorConcatenate_n_idx_0;
  }

  rtb_Merge = rtb_TmpSignalConversionAtSFun_6 * std::sqrt(rtb_Merge);
  rtb_n_des[0] = mI[0] / rtb_Merge;
  rtb_n_des[1] = mI[1] / rtb_Merge;
  rtb_n_des[2] = mI[2] / rtb_Merge;

  /* 'URpositionControl:54' if URpar.position_enable == 0 */
  if (URControlParams.position_enable == 0.0) {
    /* 'URpositionControl:55' n_des = [0, 0, -1]; */
    rtb_n_des[0] = 0.0;
    rtb_n_des[1] = 0.0;
    rtb_n_des[2] = -1.0;
  }

  /* 'URpositionControl:59' daq.posTarget = [inputs.xTarget, inputs.yTarget, inputs.zTarget]; */
  URControl_SharedDSM.DAQ.posTarget[0] = rtb_Integrator[0];
  URControl_SharedDSM.DAQ.posTarget[1] = rtb_Integrator[1];
  URControl_SharedDSM.DAQ.posTarget[2] = rtb_Integrator[2];

  /* 'URpositionControl:60' daq.velTarget = velTarget; */
  /* 'URpositionControl:61' daq.a_ref = a_ref; */
  /* 'URpositionControl:62' daq.n_des = n_des; */
  URControl_SharedDSM.DAQ.a_ref[0] = mI[0];
  URControl_SharedDSM.DAQ.n_des[0] = rtb_n_des[0];
  URControl_SharedDSM.DAQ.a_ref[1] = mI[1];
  URControl_SharedDSM.DAQ.n_des[1] = rtb_n_des[1];
  URControl_SharedDSM.DAQ.velTarget[2] = rtb_Product1_h;
  URControl_SharedDSM.DAQ.a_ref[2] = mI[2];
  URControl_SharedDSM.DAQ.n_des[2] = rtb_n_des[2];

  /* End of MATLAB Function: '<S4>/position control' */

  /* MATLAB Function: '<S4>/yaw rate control' incorporates:
   *  BusCreator: '<S4>/BusConversion_InsertedFor_yaw rate control_at_inport_0'
   */
  /* 'URpositionControl:64' errorint = errorInt; */
  /* :  [r_cmd, DAQ] = URYawControl(inputs, state, DAQ, par, URControlParams); */
  /* 'URYawControl:3' psiError = inputs.yawTarget - state.att(3); */
  /* 'URYawControl:4' psi_dot_cmd = psiError*URpar.YRC_Kp_psi; */
  /* 'URYawControl:6' r_cmd = psi_dot_cmd*cos(state.att(1))*cos(state.att(2))-sin(state.att(1))*state.omegaf(2); */
  rtb_TmpSignalConversionAtSFun_6 = (rtb_Integrator_g - rtb_stateOut.att[2]) *
    URControlParams.YRC_Kp_psi * std::cos(rtb_stateOut.att[0]) * std::cos
    (rtb_stateOut.att[1]) - std::sin(rtb_stateOut.att[0]) * rtb_stateOut.omegaf
    [1];

  /* 'URYawControl:9' if state.fail_id > 0 */
  if (rtb_stateOut.fail_id > 0.0) {
    /* 'URYawControl:10' yawDirection = (-1)^(state.fail_id); */
    /* 'URYawControl:11' r_cmd = yawDirection*URpar.YRC_r_cmd_fail; */
    rtb_TmpSignalConversionAtSFun_6 = rt_powd_snf(-1.0, rtb_stateOut.fail_id) *
      URControlParams.YRC_r_cmd_fail;
  }

  /* 'URYawControl:14' if URpar.YRC_enable == 0 */
  if (URControlParams.YRC_enable == 0.0) {
    /* 'URYawControl:16' r_cmd = URpar.YRC_rateCmd; */
    rtb_TmpSignalConversionAtSFun_6 = URControlParams.YRC_rateCmd;
  }

  /* 'URYawControl:19' if URpar.manual_enable == 1 */
  if (URControlParams.manual_enable == 1.0) {
    /* 'URYawControl:20' r_cmd =  inputs.manual(4) * URpar.manual_yaw_gain; */
    rtb_TmpSignalConversionAtSFun_6 = rtb_manual[3] *
      URControlParams.manual_yaw_gain;
  }

  /* 'URYawControl:24' daq.r_cmd = r_cmd; */
  URControl_SharedDSM.DAQ.r_cmd = rtb_TmpSignalConversionAtSFun_6;
  rtb_r_cmd = rtb_TmpSignalConversionAtSFun_6;

  /* End of MATLAB Function: '<S4>/yaw rate control' */

  /* MATLAB Function: '<S4>/altitude control' incorporates:
   *  BusCreator: '<S4>/BusConversion_InsertedFor_altitude control_at_inport_0'
   */
  /* :  [Ftot_ref, DAQ] = URAltitudeControl(inputs, state, DAQ, par, URControlParams); */
  /* 'URAltitudeControl:3' if isempty(errorInt) */
  /* 'URAltitudeControl:6' errorPos = inputs.zTarget  - state.pos(3); */
  /* 'URAltitudeControl:7' velTarget = URpar.altitude_Kp_pos.*errorPos; */
  /* 'URAltitudeControl:8' if state.fail_id > 0 */
  if (rtb_stateOut.fail_id > 0.0) {
    /* 'URAltitudeControl:9' maxVel = URpar.altitude_maxVelFail; */
    rtb_TmpSignalConversionAtSFun_6 = URControlParams.altitude_maxVelFail;
  } else {
    /* 'URAltitudeControl:10' else */
    /* 'URAltitudeControl:11' maxVel = URpar.altitude_maxVel; */
    rtb_TmpSignalConversionAtSFun_6 = URControlParams.altitude_maxVel;
  }

  /* 'URAltitudeControl:15' velTarget = min(velTarget,maxVel); */
  /* 'URAltitudeControl:16' state.vel_ref(3) = velTarget; */
  /* 'URAltitudeControl:19' errorVel = velTarget - state.vel(3); */
  rtb_Product1_h = (rtb_Integrator[2] - rtb_stateOut.pos[2]) *
    URControlParams.altitude_Kp_pos;
  if ((rtb_Product1_h < rtb_TmpSignalConversionAtSFun_6) || rtIsNaN
      (rtb_TmpSignalConversionAtSFun_6)) {
    rtb_TmpSignalConversionAtSFun_6 = rtb_Product1_h;
  }

  rtb_TmpSignalConversionAtSFun_6 -= rtb_stateOut.vel[2];

  /* 'URAltitudeControl:20' errorInt = errorInt + errorVel/par.freq; */
  URControl_DW.errorInt_g += rtb_TmpSignalConversionAtSFun_6 / 500.0;

  /* 'URAltitudeControl:21' intLim = URpar.altitude_intLim; */
  /* 'URAltitudeControl:22' errorInt = max(min(errorInt,intLim),-intLim); */
  if ((URControl_DW.errorInt_g < URControlParams.altitude_intLim) || rtIsNaN
      (URControlParams.altitude_intLim)) {
    rtb_Product1_h = URControl_DW.errorInt_g;
  } else {
    rtb_Product1_h = URControlParams.altitude_intLim;
  }

  if ((rtb_Product1_h > -URControlParams.altitude_intLim) || rtIsNaN
      (-URControlParams.altitude_intLim)) {
    URControl_DW.errorInt_g = rtb_Product1_h;
  } else {
    URControl_DW.errorInt_g = -URControlParams.altitude_intLim;
  }

  /* 'URAltitudeControl:25' az_ref = URpar.altitude_Kp_vel.*errorVel + URpar.altitude_Ki_vel.*errorInt; */
  /* 'URAltitudeControl:26' peakAngle = URpar.altitude_peakAngle; */
  /* 'URAltitudeControl:30' multiFactor = 1/(cos(max(min(state.att(1),peakAngle),-peakAngle))*cos(max(min(state.att(2),peakAngle),-peakAngle))); */
  /* 'URAltitudeControl:32' maxFtot = sum(state.FMax); */
  rtb_Product2_l = ((rtb_stateOut.FMax[0] + rtb_stateOut.FMax[1]) +
                    rtb_stateOut.FMax[2]) + rtb_stateOut.FMax[3];

  /* 'URAltitudeControl:34' if URpar.manual_enable == 1 && URpar.manual_alt == 1 */
  if ((URControlParams.manual_enable == 1.0) && (URControlParams.manual_alt ==
       1.0)) {
    /* 'URAltitudeControl:35' Ftot_ref =  (inputs.manual(3) * URpar.manual_h_gain) * maxFtot * multiFactor; */
    rEQ0 = rtIsNaN(URControlParams.altitude_peakAngle);
    if ((rtb_stateOut.att[1] < URControlParams.altitude_peakAngle) || rEQ0) {
      rtb_Product1_h = rtb_stateOut.att[1];
    } else {
      rtb_Product1_h = URControlParams.altitude_peakAngle;
    }

    if ((rtb_stateOut.att[0] < URControlParams.altitude_peakAngle) || rEQ0) {
      rtb_TmpSignalConversionAtSFun_5 = rtb_stateOut.att[0];
    } else {
      rtb_TmpSignalConversionAtSFun_5 = URControlParams.altitude_peakAngle;
    }

    rEQ0 = rtIsNaN(-URControlParams.altitude_peakAngle);
    if ((!(rtb_TmpSignalConversionAtSFun_5 > -URControlParams.altitude_peakAngle))
        && (!rEQ0)) {
      rtb_TmpSignalConversionAtSFun_5 = -URControlParams.altitude_peakAngle;
    }

    if ((!(rtb_Product1_h > -URControlParams.altitude_peakAngle)) && (!rEQ0)) {
      rtb_Product1_h = -URControlParams.altitude_peakAngle;
    }

    rtb_Merge = rtb_manual[2] * URControlParams.manual_h_gain * rtb_Product2_l *
      (1.0 / (std::cos(rtb_TmpSignalConversionAtSFun_5) * std::cos
              (rtb_Product1_h)));
  } else {
    /* 'URAltitudeControl:36' else */
    /* 'URAltitudeControl:37' Ftot_ref = -(az_ref - par.g)*par.mass*multiFactor; */
    /* 'URAltitudeControl:38' Ftot_ref = max(Ftot_ref,0); */
    if ((rtb_stateOut.att[1] < URControlParams.altitude_peakAngle) || rtIsNaN
        (URControlParams.altitude_peakAngle)) {
      rtb_Product1_h = rtb_stateOut.att[1];
    } else {
      rtb_Product1_h = URControlParams.altitude_peakAngle;
    }

    if ((rtb_stateOut.att[0] < URControlParams.altitude_peakAngle) || rtIsNaN
        (URControlParams.altitude_peakAngle)) {
      rtb_TmpSignalConversionAtSFun_5 = rtb_stateOut.att[0];
    } else {
      rtb_TmpSignalConversionAtSFun_5 = URControlParams.altitude_peakAngle;
    }

    if ((!(rtb_TmpSignalConversionAtSFun_5 > -URControlParams.altitude_peakAngle))
        && (!rtIsNaN(-URControlParams.altitude_peakAngle))) {
      rtb_TmpSignalConversionAtSFun_5 = -URControlParams.altitude_peakAngle;
    }

    if ((!(rtb_Product1_h > -URControlParams.altitude_peakAngle)) && (!rtIsNaN
         (-URControlParams.altitude_peakAngle))) {
      rtb_Product1_h = -URControlParams.altitude_peakAngle;
    }

    rtb_Merge = -((URControlParams.altitude_Kp_vel *
                   rtb_TmpSignalConversionAtSFun_6 +
                   URControlParams.altitude_Ki_vel * URControl_DW.errorInt_g) -
                  9.81) * 0.374 * (1.0 / (std::cos
      (rtb_TmpSignalConversionAtSFun_5) * std::cos(rtb_Product1_h)));
    if (!(rtb_Merge > 0.0)) {
      rtb_Merge = 0.0;
    }
  }

  /* 'URAltitudeControl:42' maxAngle = max(abs(state.att(1)),abs(state.att(2))); */
  rtb_Product1_h = std::abs(rtb_stateOut.att[0]);
  rtb_TmpSignalConversionAtSFun_6 = std::abs(rtb_stateOut.att[1]);
  if ((rtb_Product1_h > rtb_TmpSignalConversionAtSFun_6) || rtIsNaN
      (rtb_TmpSignalConversionAtSFun_6)) {
    rtb_TmpSignalConversionAtSFun_6 = rtb_Product1_h;
  }

  /* 'URAltitudeControl:43' if maxAngle > URpar.altitude_peakAngle */
  if (rtb_TmpSignalConversionAtSFun_6 > URControlParams.altitude_peakAngle) {
    /* 'URAltitudeControl:45' redFactor = 1 - (maxAngle - URpar.altitude_peakAngle)/(URpar.altitude_LOCAngle - URpar.altitude_peakAngle); */
    /* 'URAltitudeControl:46' redFactor = max(min(redFactor,1),0); */
    /* 'URAltitudeControl:47' Ftot_ref = Ftot_ref*redFactor; */
    rtb_Product1_h = 1.0 - (rtb_TmpSignalConversionAtSFun_6 -
      URControlParams.altitude_peakAngle) / (URControlParams.altitude_LOCAngle -
      URControlParams.altitude_peakAngle);
    if (!(rtb_Product1_h < 1.0)) {
      rtb_Product1_h = 1.0;
    }

    if (!(rtb_Product1_h > 0.0)) {
      rtb_Product1_h = 0.0;
    }

    rtb_Merge *= rtb_Product1_h;
  }

  /* 'URAltitudeControl:53' Ftot_ref = min(Ftot_ref,maxFtot); */
  if ((!(rtb_Merge < rtb_Product2_l)) && (!rtIsNaN(rtb_Product2_l))) {
    rtb_Merge = rtb_Product2_l;
  }

  /* 'URAltitudeControl:55' if URpar.altitude_enable == 0 */
  if (URControlParams.altitude_enable == 0.0) {
    /* 'URAltitudeControl:56' Ftot_ref = par.g*par.mass; */
    rtb_Merge = 3.66894;
  }

  /* 'URAltitudeControl:60' daq.Ftot_ref = Ftot_ref; */
  URControl_SharedDSM.DAQ.Ftot_ref = rtb_Merge;
  rtb_Ftot_ref = rtb_Merge;

  /* End of MATLAB Function: '<S4>/altitude control' */

  /* ModelReference: '<S5>/URControl_att_indi' */
  URControl_att_indiMDLOBJ1.step(&rtb_stateOut.acc[0], &rtb_stateOut.vel[0],
    &rtb_stateOut.pos[0], &rtb_stateOut.omegaf[0], &rtb_stateOut.att[0],
    &rtb_stateOut.wRotor[0], &rtb_stateOut.fail_id, &rtb_n_des[0], &rtb_r_cmd,
    &rtb_Ftot_ref, &rtb_Integrator[2], &rtb_w_cmd[0]);

  /* MATLAB Function: '<S3>/MATLAB Function' */
  /* :  [wRotorSetFinal, DAQ] = UROverrides(state, DAQ, wRotorSet, par, URControlParams, flip_input); */
  /* 'UROverrides:3' if isempty(fallCount) */
  /* 'UROverrides:4' if isempty(thrown) */
  /* 'UROverrides:6' if isempty(flipTime) */
  /* 'UROverrides:8' wRotorSetFinal = wRotorSet; */
  /* 'UROverrides:11' if URpar.throw_mode == 1 */
  if (URControlParams.throw_mode == 1.0) {
    /* 'UROverrides:14' if rms(state.accf) < URpar.throw_threshold */
    if (std::sqrt(((rtb_stateOut.accf[0] * rtb_stateOut.accf[0] +
                    rtb_stateOut.accf[1] * rtb_stateOut.accf[1]) +
                   rtb_stateOut.accf[2] * rtb_stateOut.accf[2]) / 3.0) <
        URControlParams.throw_threshold) {
      /* 'UROverrides:15' fallCount = fallCount + 1; */
      URControl_DW.fallCount++;
    } else {
      /* 'UROverrides:16' else */
      /* 'UROverrides:17' fallCount = fallCount*0.998; */
      URControl_DW.fallCount *= 0.998;
    }

    /* 'UROverrides:20' if fallCount > URpar.throw_falltime*par.freq */
    if (URControl_DW.fallCount > URControlParams.throw_falltime * 500.0) {
      /* 'UROverrides:21' thrown = 1; */
      URControl_DW.thrown = 1.0;
    }

    /* 'UROverrides:24' if thrown == 0 */
    if (URControl_DW.thrown == 0.0) {
      /* 'UROverrides:25' wRotorSetFinal = ones(4,1).*par.w_min; */
      qconj[0] = 300.0;
      qconj[1] = 300.0;
      qconj[2] = 300.0;
      qconj[3] = 300.0;
    } else {
      /* 'UROverrides:26' else */
      /* 'UROverrides:27' wRotorSetFinal = wRotorSet; */
      qconj[0] = rtb_w_cmd[0];
      qconj[1] = rtb_w_cmd[1];
      qconj[2] = rtb_w_cmd[2];
      qconj[3] = rtb_w_cmd[3];
    }
  } else if (URControlParams.throw_mode == 2.0) {
    /* 'UROverrides:29' elseif URpar.throw_mode == 2 */
    /* 'UROverrides:31' if state.posf(3) <= -URpar.throw_alt_threshold */
    if (rtb_stateOut.posf[2] <= -URControlParams.throw_alt_threshold) {
      /* 'UROverrides:32' thrown = 1; */
      URControl_DW.thrown = 1.0;
    }

    /* 'UROverrides:34' if thrown == 0 */
    if (URControl_DW.thrown == 0.0) {
      /* 'UROverrides:35' wRotorSetFinal = ones(4,1).*par.w_min; */
      qconj[0] = 300.0;
      qconj[1] = 300.0;
      qconj[2] = 300.0;
      qconj[3] = 300.0;
    } else {
      /* 'UROverrides:36' else */
      /* 'UROverrides:37' wRotorSetFinal = wRotorSet; */
      qconj[0] = rtb_w_cmd[0];
      qconj[1] = rtb_w_cmd[1];
      qconj[2] = rtb_w_cmd[2];
      qconj[3] = rtb_w_cmd[3];
    }
  } else {
    /* 'UROverrides:39' else */
    /* 'UROverrides:40' fallCount = 0; */
    URControl_DW.fallCount = 0.0;

    /* 'UROverrides:41' thrown = 0; */
    URControl_DW.thrown = 0.0;

    /* 'UROverrides:42' wRotorSetFinal = wRotorSet; */
    qconj[0] = rtb_w_cmd[0];
    qconj[1] = rtb_w_cmd[1];
    qconj[2] = rtb_w_cmd[2];
    qconj[3] = rtb_w_cmd[3];
  }

  /* 'UROverrides:46' if ~(URpar.throw_mode == 1 && thrown == 0) */
  if ((!(URControlParams.throw_mode == 1.0)) || (!(URControl_DW.thrown == 0.0)))
  {
    /* 'UROverrides:47' if URpar.flip_mode == 0 */
    if (URControlParams.flip_mode == 0.0) {
      /* 'UROverrides:49' flipTime = 0; */
      URControl_DW.flipTime = 0.0;

      /* 'UROverrides:50' wRotorSetFinal = wRotorSet; */
      qconj[0] = rtb_w_cmd[0];
      qconj[1] = rtb_w_cmd[1];
      qconj[2] = rtb_w_cmd[2];
      qconj[3] = rtb_w_cmd[3];
    } else {
      if (URControlParams.flip_mode == 1.0) {
        /* 'UROverrides:52' elseif URpar.flip_mode == 1 */
        /* 'UROverrides:54' flipTime = flipTime + 1/par.freq; */
        URControl_DW.flipTime += 0.002;

        /* 'UROverrides:55' if flipTime > URpar.flip_time + URpar.flip_upTime */
        if (URControl_DW.flipTime > URControlParams.flip_time +
            URControlParams.flip_upTime) {
          /* 'UROverrides:56' wRotorSetFinal = wRotorSet; */
          qconj[0] = rtb_w_cmd[0];
          qconj[1] = rtb_w_cmd[1];
          qconj[2] = rtb_w_cmd[2];
          qconj[3] = rtb_w_cmd[3];
        } else {
          /* 'UROverrides:57' else */
          /* 'UROverrides:58' if flipTime < URpar.flip_upTime */
          if (URControl_DW.flipTime < URControlParams.flip_upTime) {
            /* 'UROverrides:59' wRotorSetFinal = ones(4,1).*1000; */
            qconj[0] = 1000.0;
            qconj[1] = 1000.0;
            qconj[2] = 1000.0;
            qconj[3] = 1000.0;
          } else {
            /* 'UROverrides:60' else */
            /* 'UROverrides:61' wRotorSetFinal = ones(4,1).*700 + [1;-1;-1;1]*URpar.flip_intensityX + [1;1;-1;-1]*URpar.flip_intensityY; */
            qconj[0] = (700.0 + URControlParams.flip_intensityX) +
              URControlParams.flip_intensityY;
            qconj[1] = (700.0 + -URControlParams.flip_intensityX) +
              URControlParams.flip_intensityY;
            qconj[2] = (700.0 + -URControlParams.flip_intensityX) +
              -URControlParams.flip_intensityY;
            qconj[3] = (700.0 + URControlParams.flip_intensityX) +
              -URControlParams.flip_intensityY;
          }
        }
      }
    }
  }

  /* End of MATLAB Function: '<S3>/MATLAB Function' */

  /* Outport: '<Root>/w_rotors' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion'
   */
  /* :  actuator_controls = w_sp_to_px4_actuator_controls(w_sp, par); */
  /* 'w_sp_to_px4_actuator_controls:10' w_min_sq = par.px4.w_min^2; */
  /* 'w_sp_to_px4_actuator_controls:11' w_max_sq = par.px4.w_max^2; */
  /* 'w_sp_to_px4_actuator_controls:13' actuator_controls = -1 + 2*(w_sp.^2 - w_min_sq)./(w_max_sq - w_min_sq); */
  URControl_Y.w_rotors[0] = static_cast<real32_T>(qconj[0]);

  /* Outport: '<Root>/actuators_control' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion'
   *  DataTypeConversion: '<Root>/Data Type Conversion11'
   *  MATLAB Function: '<Root>/conversion to px4'
   */
  URControl_Y.actuators_control[0] = static_cast<real32_T>(((qconj[0] * qconj[0]
    - 98696.044010893587) * 2.0 / 1.5335171993870398E+6 + -1.0));

  /* Outport: '<Root>/w_rotors' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion'
   */
  URControl_Y.w_rotors[1] = static_cast<real32_T>(qconj[1]);

  /* Outport: '<Root>/actuators_control' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion'
   *  DataTypeConversion: '<Root>/Data Type Conversion11'
   *  MATLAB Function: '<Root>/conversion to px4'
   */
  URControl_Y.actuators_control[1] = static_cast<real32_T>(((qconj[1] * qconj[1]
    - 98696.044010893587) * 2.0 / 1.5335171993870398E+6 + -1.0));

  /* Outport: '<Root>/w_rotors' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion'
   */
  URControl_Y.w_rotors[2] = static_cast<real32_T>(qconj[2]);

  /* Outport: '<Root>/actuators_control' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion'
   *  DataTypeConversion: '<Root>/Data Type Conversion11'
   *  MATLAB Function: '<Root>/conversion to px4'
   */
  URControl_Y.actuators_control[2] = static_cast<real32_T>(((qconj[2] * qconj[2]
    - 98696.044010893587) * 2.0 / 1.5335171993870398E+6 + -1.0));

  /* Outport: '<Root>/w_rotors' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion'
   */
  URControl_Y.w_rotors[3] = static_cast<real32_T>(qconj[3]);

  /* Outport: '<Root>/actuators_control' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion'
   *  DataTypeConversion: '<Root>/Data Type Conversion11'
   *  MATLAB Function: '<Root>/conversion to px4'
   */
  URControl_Y.actuators_control[3] = static_cast<real32_T>(((qconj[3] * qconj[3]
    - 98696.044010893587) * 2.0 / 1.5335171993870398E+6 + -1.0));

  /* DiscreteStateSpace: '<S20>/Discrete State-Space' */
  {
    rtb_accs_filter[0] = (1.0)*URControl_DW.DiscreteStateSpace_DSTATE[0];
    rtb_accs_filter[1] = (1.0)*URControl_DW.DiscreteStateSpace_DSTATE[1];
    rtb_accs_filter[2] = (1.0)*URControl_DW.DiscreteStateSpace_DSTATE[2];
  }

  /* Outputs for Atomic SubSystem: '<S23>/Predict' */
  /* SignalConversion: '<S32>/TmpSignal ConversionAt SFunction Inport4' incorporates:
   *  MATLAB Function: '<S30>/Predict'
   */
  rtb_TmpSignalConversionAtSFu_b4[0] = rtb_accs_filter[0];
  rtb_TmpSignalConversionAtSFu_b4[3] = rtb_omega[0];
  rtb_TmpSignalConversionAtSFu_b4[1] = rtb_accs_filter[1];
  rtb_TmpSignalConversionAtSFu_b4[4] = rtb_omega[1];
  rtb_TmpSignalConversionAtSFu_b4[2] = rtb_accs_filter[2];
  rtb_TmpSignalConversionAtSFu_b4[5] = rtb_omega[2];

  /* MATLAB Function: '<S30>/Predict' incorporates:
   *  DataStoreRead: '<S30>/Data Store ReadP'
   *  DataStoreRead: '<S30>/Data Store ReadX'
   *  SignalConversion: '<S32>/TmpSignal ConversionAt SFunction Inport4'
   */
  /* :  if pS.IsSimulinkFcn */
  /* :  else */
  /* :  StateTransitionFcnH = str2func(pS.FcnName); */
  /* :  if pS.HasJacobian */
  /* :  StateTransitionJacobianFcnH = str2func(pS.JacobianFcnName); */
  /* :  switch pS.NumberOfExtraArgumentInports */
  /* :  case 1 */
  /* :  extraArgs = {uState}; */
  /* :  xNew = zeros(size(x),'like',x); */
  /* :  if pS.HasAdditiveNoise */
  /* :  [xNew,P] = matlabshared.tracking.internal.EKFPredictorAdditive.predict(... */
  /* :          Q,x,P,StateTransitionFcnH,StateTransitionJacobianFcnH,extraArgs{:}); */
  ekf_state_jacob_WRvyoYwd(URControl_DW.x, rtb_TmpSignalConversionAtSFu_b4,
    Jacobian);

  /* 'ekf_state_func:7' posx = x(1); */
  /* 'ekf_state_func:8' posy = x(2); */
  /* 'ekf_state_func:9' posz = x(3); */
  /* 'ekf_state_func:11' velx = x(4); */
  /* 'ekf_state_func:12' vely = x(5); */
  /* 'ekf_state_func:13' velz = x(6); */
  /* 'ekf_state_func:15' q1 = x(7); */
  /* 'ekf_state_func:16' q2 = x(8); */
  /* 'ekf_state_func:17' q3 = x(9); */
  /* 'ekf_state_func:18' q4 = x(10); */
  /* 'ekf_state_func:20' accBx = u(1); */
  /* 'ekf_state_func:21' accBy = u(2); */
  /* 'ekf_state_func:22' accBz = u(3); */
  /* 'ekf_state_func:24' omegax = u(4); */
  /* 'ekf_state_func:25' omegay = u(5); */
  /* 'ekf_state_func:26' omegaz = u(6); */
  /* 'ekf_state_func:28' dt = 0.002; */
  /* 'ekf_state_func:31' pos = [posx; posy; posz]; */
  /* 'ekf_state_func:32' vel = [velx; vely; velz]; */
  /* 'ekf_state_func:33' accB = [accBx; accBy; accBz]; */
  /* 'ekf_state_func:34' omega = [omegax; omegay; omegaz]; */
  /* 'ekf_state_func:35' q = [q1; q2; q3; q4]; */
  /* 'ekf_state_func:37' x = zeros(10,1); */
  /* 'ekf_state_func:39' acc = quatRot(q', accB') + [0,0,9.81]; */
  /* 'quatRot:3' qconj = [ q(:,1)  -q(:,2:4) ]; */
  /* 'quatRot:5' dummy = HProduct(HProduct(q,[0,vector]),qconj); */
  /* 'quatRot:14' vec = [v1(:,1).*v2(:,2) v1(:,1).*v2(:,3) v1(:,1).*v2(:,4)] + ... */
  /* 'quatRot:15'          [v2(:,1).*v1(:,2) v2(:,1).*v1(:,3) v2(:,1).*v1(:,4)]+... */
  /* 'quatRot:16'          [ v1(:,3).*v2(:,4)-v1(:,4).*v2(:,3) ... */
  /* 'quatRot:17'            v1(:,4).*v2(:,2)-v1(:,2).*v2(:,4) ... */
  /* 'quatRot:18'            v1(:,2).*v2(:,3)-v1(:,3).*v2(:,2)]; */
  /* 'quatRot:22' scalar = v1(:,1).*v2(:,1) - v1(:,2).*v2(:,2) - ... */
  /* 'quatRot:23'              v1(:,3).*v2(:,3) - v1(:,4).*v2(:,4); */
  /* 'quatRot:25' qout = [scalar  vec]; */
  FMin[0] = ((URControl_DW.x[6] * 0.0 - URControl_DW.x[7] * rtb_accs_filter[0])
             - URControl_DW.x[8] * rtb_accs_filter[1]) - URControl_DW.x[9] *
    rtb_accs_filter[2];
  FMin[1] = (URControl_DW.x[6] * rtb_accs_filter[0] + 0.0 * URControl_DW.x[7]) +
    (URControl_DW.x[8] * rtb_accs_filter[2] - URControl_DW.x[9] *
     rtb_accs_filter[1]);
  FMin[2] = (URControl_DW.x[6] * rtb_accs_filter[1] + 0.0 * URControl_DW.x[8]) +
    (URControl_DW.x[9] * rtb_accs_filter[0] - URControl_DW.x[7] *
     rtb_accs_filter[2]);
  FMin[3] = (URControl_DW.x[6] * rtb_accs_filter[2] + 0.0 * URControl_DW.x[9]) +
    (URControl_DW.x[7] * rtb_accs_filter[1] - URControl_DW.x[8] *
     rtb_accs_filter[0]);

  /* 'quatRot:14' vec = [v1(:,1).*v2(:,2) v1(:,1).*v2(:,3) v1(:,1).*v2(:,4)] + ... */
  /* 'quatRot:15'          [v2(:,1).*v1(:,2) v2(:,1).*v1(:,3) v2(:,1).*v1(:,4)]+... */
  /* 'quatRot:16'          [ v1(:,3).*v2(:,4)-v1(:,4).*v2(:,3) ... */
  /* 'quatRot:17'            v1(:,4).*v2(:,2)-v1(:,2).*v2(:,4) ... */
  /* 'quatRot:18'            v1(:,2).*v2(:,3)-v1(:,3).*v2(:,2)]; */
  /* 'quatRot:22' scalar = v1(:,1).*v2(:,1) - v1(:,2).*v2(:,2) - ... */
  /* 'quatRot:23'              v1(:,3).*v2(:,3) - v1(:,4).*v2(:,4); */
  /* 'quatRot:25' qout = [scalar  vec]; */
  /* 'quatRot:6' r = dummy(2:4); */
  /* 'ekf_state_func:42' for i = 1:3 */
  /* 'ekf_state_func:45' for i = 1:3 */
  /* 'ekf_state_func:49' q_dot1 = -0.5*dotProduct(q(2:4),omega); */
  /* 'dotProduct:3' c = sum(a.*b); */
  /* 'ekf_state_func:43' x(i) = pos(i) + vel(i)*dt; */
  rtb_xNew[0] = URControl_DW.x[3] * 0.002 + URControl_DW.x[0];

  /* 'ekf_state_func:46' x(i+3) = vel(i) + acc(i)*dt; */
  rtb_xNew[3] = ((FMin[0] * -URControl_DW.x[7] + URControl_DW.x[6] * FMin[1]) +
                 (FMin[2] * -URControl_DW.x[9] - FMin[3] * -URControl_DW.x[8])) *
    0.002 + URControl_DW.x[3];

  /* 'ekf_state_func:43' x(i) = pos(i) + vel(i)*dt; */
  rtb_xNew[1] = URControl_DW.x[4] * 0.002 + URControl_DW.x[1];

  /* 'ekf_state_func:46' x(i+3) = vel(i) + acc(i)*dt; */
  rtb_xNew[4] = ((FMin[0] * -URControl_DW.x[8] + URControl_DW.x[6] * FMin[2]) +
                 (FMin[3] * -URControl_DW.x[7] - FMin[1] * -URControl_DW.x[9])) *
    0.002 + URControl_DW.x[4];

  /* 'ekf_state_func:43' x(i) = pos(i) + vel(i)*dt; */
  rtb_xNew[2] = URControl_DW.x[5] * 0.002 + URControl_DW.x[2];

  /* 'ekf_state_func:46' x(i+3) = vel(i) + acc(i)*dt; */
  rtb_xNew[5] = (((FMin[0] * -URControl_DW.x[9] + URControl_DW.x[6] * FMin[3]) +
                  (FMin[1] * -URControl_DW.x[8] - FMin[2] * -URControl_DW.x[7]))
                 + 9.81) * 0.002 + URControl_DW.x[5];

  /* 'ekf_state_func:50' q_dot24 = 0.5*(crossProduct(q(2:4),omega) + omega*q(1)); */
  /* 'crossProduct:3' c = [a(2)*b(3) - a(3)*b(2); a(3)*b(1) - a(1)*b(3); a(1)*b(2) - a(2)*b(1)]; */
  /* 'ekf_state_func:51' q_dot = [q_dot1; q_dot24]; */
  /* 'ekf_state_func:53' q = q + q_dot*dt; */
  rtb_TmpSignalConversionAtSFun_7 = ((URControl_DW.x[7] * rtb_omega[0] +
    URControl_DW.x[8] * rtb_omega[1]) + URControl_DW.x[9] * rtb_omega[2]) * -0.5
    * 0.002 + URControl_DW.x[6];
  rtb_TmpSignalConversionAtSFun_6 = ((URControl_DW.x[8] * rtb_omega[2] -
    URControl_DW.x[9] * rtb_omega[1]) + rtb_omega[0] * URControl_DW.x[6]) * 0.5 *
    0.002 + URControl_DW.x[7];
  rtb_TmpSignalConversionAtSFun_5 = ((URControl_DW.x[9] * rtb_omega[0] -
    URControl_DW.x[7] * rtb_omega[2]) + rtb_omega[1] * URControl_DW.x[6]) * 0.5 *
    0.002 + URControl_DW.x[8];
  rtb_Product1_h = ((URControl_DW.x[7] * rtb_omega[1] - URControl_DW.x[8] *
                     rtb_omega[0]) + rtb_omega[2] * URControl_DW.x[6]) * 0.5 *
    0.002 + URControl_DW.x[9];

  /* 'ekf_state_func:54' qnorm = sqrt(q(1)^2 + q(2)^2 + q(3)^2 + q(4)^2); */
  rtb_Merge = std::sqrt(((rtb_TmpSignalConversionAtSFun_7 *
    rtb_TmpSignalConversionAtSFun_7 + rtb_TmpSignalConversionAtSFun_6 *
    rtb_TmpSignalConversionAtSFun_6) + rtb_TmpSignalConversionAtSFun_5 *
    rtb_TmpSignalConversionAtSFun_5) + rtb_Product1_h * rtb_Product1_h);

  /* 'ekf_state_func:55' q = q/qnorm; */
  /* 'ekf_state_func:57' for i = 1:4 */
  /* 'ekf_state_func:58' x(i+6) = q(i); */
  rtb_xNew[6] = rtb_TmpSignalConversionAtSFun_7 / rtb_Merge;

  /* 'ekf_state_func:58' x(i+6) = q(i); */
  rtb_xNew[7] = rtb_TmpSignalConversionAtSFun_6 / rtb_Merge;

  /* 'ekf_state_func:58' x(i+6) = q(i); */
  rtb_xNew[8] = rtb_TmpSignalConversionAtSFun_5 / rtb_Merge;

  /* 'ekf_state_func:58' x(i+6) = q(i); */
  rtb_xNew[9] = rtb_Product1_h / rtb_Merge;
  for (qconj_tmp = 0; qconj_tmp < 10; qconj_tmp++) {
    for (km_tmp = 0; km_tmp < 10; km_tmp++) {
      gain_tmp = km_tmp + 10 * qconj_tmp;
      Jacobian_0[gain_tmp] = 0.0;
      for (i = 0; i < 10; i++) {
        Jacobian_0[gain_tmp] += Jacobian[10 * i + km_tmp] * URControl_DW.P[10 *
          qconj_tmp + i];
      }
    }
  }

  for (i = 0; i < 10; i++) {
    /* DataStoreWrite: '<S30>/Data Store WriteP' incorporates:
     *  Constant: '<S23>/Q'
     *  MATLAB Function: '<S30>/Predict'
     */
    for (qconj_tmp = 0; qconj_tmp < 10; qconj_tmp++) {
      rtb_VectorConcatenate_n_idx_1 = 0.0;
      for (km_tmp = 0; km_tmp < 10; km_tmp++) {
        rtb_VectorConcatenate_n_idx_1 += Jacobian_0[10 * km_tmp + i] * Jacobian
          [10 * km_tmp + qconj_tmp];
      }

      /* MATLAB Function: '<S30>/Predict' incorporates:
       *  Constant: '<S23>/Q'
       */
      km_tmp = 10 * qconj_tmp + i;
      URControl_DW.P[km_tmp] = rtCP_Q_Value[km_tmp] +
        rtb_VectorConcatenate_n_idx_1;
    }

    /* End of DataStoreWrite: '<S30>/Data Store WriteP' */

    /* DataStoreWrite: '<S30>/Data Store WriteX' */
    URControl_DW.x[i] = rtb_xNew[i];
  }

  /* End of Outputs for SubSystem: '<S23>/Predict' */

  /* MATLAB Function: '<S21>/MATLAB Function' */
  /* :  psi = mag_to_heading(mag, att, URControlParams); */
  /* 'mag_to_heading:4' if isempty(psi_last) */
  /* 'mag_to_heading:8' x = mag(1); */
  /* 'mag_to_heading:9' y = mag(2); */
  /* 'mag_to_heading:11' h = sqrt(x^2+y^2); */
  /* 'mag_to_heading:13' if URControlParams.mag_est_type == 0 */
  if (URControlParams.mag_est_type == 0.0) {
    /* 'mag_to_heading:16' psi0 = acos(abs(x)/h); */
    rtb_Product1_h = std::acos(std::abs(rtb_mag_idx_0) / std::sqrt(rtb_mag_idx_0
      * rtb_mag_idx_0 + rtb_mag_idx_1 * rtb_mag_idx_1));

    /* 'mag_to_heading:18' if x>0 */
    if (rtb_mag_idx_0 > 0.0) {
      /* 'mag_to_heading:19' if y>0 */
      if (rtb_mag_idx_1 > 0.0) {
        /* 'mag_to_heading:20' psi = - psi0; */
        rtb_Product1_h = -rtb_Product1_h;
      } else {
        /* 'mag_to_heading:21' else */
        /* 'mag_to_heading:22' psi = psi0; */
      }
    } else {
      /* 'mag_to_heading:24' else */
      /* 'mag_to_heading:25' if y>0 */
      if (rtb_mag_idx_1 > 0.0) {
        /* 'mag_to_heading:26' psi= -pi + psi0; */
        rtb_Product1_h += -3.1415926535897931;
      } else {
        /* 'mag_to_heading:27' else */
        /* 'mag_to_heading:28' psi = pi - psi0; */
        rtb_Product1_h = 3.1415926535897931 - rtb_Product1_h;
      }
    }
  } else {
    /* 'mag_to_heading:32' else */
    /* 'mag_to_heading:33' phi = att(1); */
    /* 'mag_to_heading:34' theta = att(2); */
    /* 'mag_to_heading:36' alpha = URControlParams.magxI; */
    /* 'mag_to_heading:37' beta = URControlParams.magzI; */
    /* 'mag_to_heading:39' if isnan(psi_last) */
    if (rtIsNaN(URControl_DW.psi_last_a)) {
      /* 'mag_to_heading:40' psi_last = 0; */
      URControl_DW.psi_last_a = 0.0;
    }

    /* 'mag_to_heading:43' x = (mag(1) + beta*sin(theta))/alpha/cos(theta); */
    rtb_TmpSignalConversionAtSFun_6 = std::cos(URControl_B.Euler_flip[1]);
    rtb_Product1_h = std::sin(URControl_B.Euler_flip[1]);
    rtb_VectorConcatenate_n_idx_0 = (URControlParams.magzI * rtb_Product1_h +
      rtb_mag_idx_0) / URControlParams.magxI / rtb_TmpSignalConversionAtSFun_6;

    /* 'mag_to_heading:44' y = (mag(2) - beta*cos(theta)*sin(phi) - alpha*sin(theta)*sin(phi)*cos(psi_last))/alpha/cos(phi); */
    rtb_mag_idx_0 = std::sin(URControl_B.Euler_flip[0]);
    rtb_Merge = ((rtb_mag_idx_1 - URControlParams.magzI *
                  rtb_TmpSignalConversionAtSFun_6 * rtb_mag_idx_0) -
                 URControlParams.magxI * rtb_Product1_h * rtb_mag_idx_0 * std::
                 cos(URControl_DW.psi_last_a)) / URControlParams.magxI / std::
      cos(URControl_B.Euler_flip[0]);

    /* 'mag_to_heading:46' psi0 = acos(abs(x)/sqrt(x^2+y^2)); */
    rtb_Product1_h = std::acos(std::abs(rtb_VectorConcatenate_n_idx_0) / std::
      sqrt(rtb_VectorConcatenate_n_idx_0 * rtb_VectorConcatenate_n_idx_0 +
           rtb_Merge * rtb_Merge));

    /* 'mag_to_heading:48' if x>0 */
    if (rtb_VectorConcatenate_n_idx_0 > 0.0) {
      /* 'mag_to_heading:49' if y>0 */
      if (rtb_Merge > 0.0) {
        /* 'mag_to_heading:50' psi = - psi0; */
        rtb_Product1_h = -rtb_Product1_h;
      } else {
        /* 'mag_to_heading:51' else */
        /* 'mag_to_heading:52' psi = psi0; */
      }
    } else {
      /* 'mag_to_heading:54' else */
      /* 'mag_to_heading:55' if y>0 */
      if (rtb_Merge > 0.0) {
        /* 'mag_to_heading:56' psi= -pi + psi0; */
        rtb_Product1_h += -3.1415926535897931;
      } else {
        /* 'mag_to_heading:57' else */
        /* 'mag_to_heading:58' psi = pi - psi0; */
        rtb_Product1_h = 3.1415926535897931 - rtb_Product1_h;
      }
    }
  }

  /* 'mag_to_heading:65' psi = psi - URControlParams.mag_psi_shift; */
  rtb_Product1_h -= URControlParams.mag_psi_shift;

  /* 'mag_to_heading:68' if psi > pi */
  if (rtb_Product1_h > 3.1415926535897931) {
    /* 'mag_to_heading:69' psi  = -pi + (psi-pi); */
    rtb_Product1_h = (rtb_Product1_h - 3.1415926535897931) + -3.1415926535897931;
  } else {
    if (rtb_Product1_h < -3.1415926535897931) {
      /* 'mag_to_heading:70' elseif psi < -pi */
      /* 'mag_to_heading:71' psi = pi - (-pi-psi); */
      rtb_Product1_h = 3.1415926535897931 - (-3.1415926535897931 -
        rtb_Product1_h);
    }
  }

  /* 'mag_to_heading:74' psi_last = psi; */
  URControl_DW.psi_last_a = rtb_Product1_h;

  /* End of MATLAB Function: '<S21>/MATLAB Function' */

  /* MATLAB Function: '<S21>/unwrap2pi' */
  /* :  psi = unwrap2pi(psi0); */
  /* 'unwrap2pi:7' if isempty(psi_last) */
  if (!URControl_DW.psi_last_not_empty) {
    /* 'unwrap2pi:7' psi_last = psi0; */
    URControl_DW.psi_last = rtb_Product1_h;
    URControl_DW.psi_last_not_empty = true;
  }

  /* 'unwrap2pi:8' if isempty(N) */
  /* 'unwrap2pi:10' if (psi0-psi_last)>1.0*pi */
  rtb_VectorConcatenate_n_idx_1 = rtb_Product1_h - URControl_DW.psi_last;
  if (rtb_VectorConcatenate_n_idx_1 > 3.1415926535897931) {
    /* 'unwrap2pi:11' N = N-1; */
    URControl_DW.N--;
  } else {
    if (rtb_VectorConcatenate_n_idx_1 < -3.1415926535897931) {
      /* 'unwrap2pi:12' elseif (psi0-psi_last)< -1.0*pi */
      /* 'unwrap2pi:13' N = N+1; */
      URControl_DW.N++;
    }
  }

  /* 'unwrap2pi:15' psi = psi0 + 2*N*pi; */
  /* 'unwrap2pi:17' psi_last = psi0; */
  URControl_DW.psi_last = rtb_Product1_h;

  /* Sum: '<S21>/Add' incorporates:
   *  MATLAB Function: '<S21>/unwrap2pi'
   */
  rtb_TmpSignalConversionAtSFun_4 = (2.0 * URControl_DW.N * 3.1415926535897931 +
    rtb_Product1_h) - rtb_TmpSignalConversionAtSFun_4;

  /* MATLAB Function: '<S21>/MATLAB Function6' incorporates:
   *  BusCreator: '<S21>/BusConversion_InsertedFor_MATLAB Function6_at_inport_0'
   */
  /* :  phi     = sensor.att(1); */
  /* :  theta   = sensor.att(2); */
  /* :  psi     = sensor.att(3); */
  /* :  R_BI = [cos(theta)*cos(psi)                             , cos(theta)*sin(psi)                               , -sin(theta); */
  /* :          sin(phi)*sin(theta)*cos(psi)-cos(phi)*sin(psi)  , sin(phi)*sin(theta)*sin(psi)+cos(phi)*cos(psi)    , sin(phi)*cos(theta); */
  /* :          cos(phi)*sin(theta)*cos(psi)+sin(phi)*sin(psi)  , cos(phi)*sin(theta)*sin(psi)-sin(phi)*cos(psi)    , cos(phi)*cos(theta)]; */
  /* :  R_IB = R_BI'; */
  /* :  output = R_IB * [0 0 -9.81]'; */
  rtb_TmpSignalConversionAtSFun_5 = std::cos(rtb_att[1]);
  rtb_TmpSignalConversionAtSFun_7 = std::cos(rtb_att[2]);

  /* Math: '<S21>/Transpose' incorporates:
   *  MATLAB Function: '<S21>/MATLAB Function6'
   */
  km[0] = rtb_TmpSignalConversionAtSFun_5 * rtb_TmpSignalConversionAtSFun_7;

  /* MATLAB Function: '<S21>/MATLAB Function6' incorporates:
   *  BusCreator: '<S21>/BusConversion_InsertedFor_MATLAB Function6_at_inport_0'
   */
  rtb_VectorConcatenate_n_idx_0 = std::sin(rtb_att[2]);

  /* Math: '<S21>/Transpose' incorporates:
   *  MATLAB Function: '<S21>/MATLAB Function6'
   */
  km[3] = rtb_TmpSignalConversionAtSFun_5 * rtb_VectorConcatenate_n_idx_0;

  /* MATLAB Function: '<S21>/MATLAB Function6' incorporates:
   *  BusCreator: '<S21>/BusConversion_InsertedFor_MATLAB Function6_at_inport_0'
   */
  rtb_Product1_h = std::sin(rtb_att[1]);
  rtb_VectorConcatenate_n_idx_1 = std::sin(rtb_att[0]);
  rtb_Merge = rtb_VectorConcatenate_n_idx_1 * rtb_Product1_h;
  rtb_Product2_l = std::cos(rtb_att[0]);

  /* Math: '<S21>/Transpose' incorporates:
   *  MATLAB Function: '<S21>/MATLAB Function6'
   */
  km[1] = rtb_Merge * rtb_TmpSignalConversionAtSFun_7 - rtb_Product2_l *
    rtb_VectorConcatenate_n_idx_0;
  km[4] = rtb_Merge * rtb_VectorConcatenate_n_idx_0 + rtb_Product2_l *
    rtb_TmpSignalConversionAtSFun_7;
  km[7] = rtb_VectorConcatenate_n_idx_1 * rtb_TmpSignalConversionAtSFun_5;

  /* MATLAB Function: '<S21>/MATLAB Function6' */
  rtb_Merge = rtb_Product2_l * rtb_Product1_h;

  /* Math: '<S21>/Transpose' incorporates:
   *  MATLAB Function: '<S21>/MATLAB Function6'
   */
  km[2] = rtb_Merge * rtb_TmpSignalConversionAtSFun_7 +
    rtb_VectorConcatenate_n_idx_1 * rtb_VectorConcatenate_n_idx_0;
  km[5] = rtb_Merge * rtb_VectorConcatenate_n_idx_0 -
    rtb_VectorConcatenate_n_idx_1 * rtb_TmpSignalConversionAtSFun_7;
  km[8] = rtb_Product2_l * rtb_TmpSignalConversionAtSFun_5;

  /* Sum: '<S60>/Add' */
  rtb_mag_idx_1 = (km[0] + km[4]) + km[8];

  /* If: '<S41>/If' incorporates:
   *  If: '<S57>/Find Maximum Diagonal Value'
   */
  if (rtb_mag_idx_1 > 0.0) {
    /* Outputs for IfAction SubSystem: '<S41>/Positive Trace' incorporates:
     *  ActionPort: '<S58>/Action Port'
     */
    /* Sqrt: '<S58>/sqrt' incorporates:
     *  Constant: '<S58>/Constant'
     *  Sum: '<S58>/Sum'
     */
    rtb_mag_idx_1 = std::sqrt(rtb_mag_idx_1 + 1.0);

    /* Gain: '<S58>/Gain' */
    URControl_B.Merge[0] = 0.5 * rtb_mag_idx_1;

    /* Gain: '<S58>/Gain1' */
    rtb_mag_idx_1 *= 2.0;

    /* Product: '<S58>/Product' incorporates:
     *  BusCreator: '<S21>/BusConversion_InsertedFor_MATLAB Function6_at_inport_0'
     *  MATLAB Function: '<S21>/MATLAB Function6'
     *  Sum: '<S80>/Add'
     *  Sum: '<S81>/Add'
     *  Sum: '<S82>/Add'
     */
    URControl_B.Merge[1] = (km[7] - km[5]) / rtb_mag_idx_1;
    URControl_B.Merge[2] = (km[2] - (-std::sin(rtb_att[1]))) / rtb_mag_idx_1;
    URControl_B.Merge[3] = (km[3] - km[1]) / rtb_mag_idx_1;

    /* End of Outputs for SubSystem: '<S41>/Positive Trace' */
  } else {
    /* Outputs for IfAction SubSystem: '<S41>/Negative Trace' incorporates:
     *  ActionPort: '<S57>/Action Port'
     */
    if ((km[4] > km[0]) && (km[4] > km[8])) {
      /* Outputs for IfAction SubSystem: '<S57>/Maximum Value at DCM(2,2)' incorporates:
       *  ActionPort: '<S62>/Action Port'
       */
      /* If: '<S57>/Find Maximum Diagonal Value' incorporates:
       *  Constant: '<S73>/Constant1'
       *  Constant: '<S74>/Constant'
       *  Gain: '<S62>/Gain'
       *  Gain: '<S62>/Gain1'
       *  Gain: '<S62>/Gain3'
       *  Gain: '<S62>/Gain4'
       *  MATLAB Function: '<S21>/MATLAB Function6'
       *  Product: '<S62>/Product'
       *  Product: '<S73>/Product'
       *  Sqrt: '<S62>/sqrt'
       *  Sum: '<S70>/Add'
       *  Sum: '<S71>/Add'
       *  Sum: '<S72>/Add'
       *  Sum: '<S74>/Add'
       *  Switch: '<S73>/Switch'
       */
      rtb_mag_idx_1 = std::sqrt(((km[4] - km[0]) - km[8]) + 1.0);
      URControl_B.Merge[2] = 0.5 * rtb_mag_idx_1;
      if (rtb_mag_idx_1 != 0.0) {
        rtb_mag_idx_0 = 0.5;
      } else {
        rtb_mag_idx_0 = 0.0;
        rtb_mag_idx_1 = 1.0;
      }

      rtb_mag_idx_1 = rtb_mag_idx_0 / rtb_mag_idx_1;
      URControl_B.Merge[1] = (km[1] + km[3]) * rtb_mag_idx_1;
      URControl_B.Merge[3] = (km[5] + km[7]) * rtb_mag_idx_1;
      URControl_B.Merge[0] = (km[2] - (-rtb_Product1_h)) * rtb_mag_idx_1;

      /* End of Outputs for SubSystem: '<S57>/Maximum Value at DCM(2,2)' */
    } else if (km[8] > km[0]) {
      /* Outputs for IfAction SubSystem: '<S57>/Maximum Value at DCM(3,3)' incorporates:
       *  ActionPort: '<S63>/Action Port'
       */
      /* If: '<S57>/Find Maximum Diagonal Value' incorporates:
       *  Constant: '<S78>/Constant1'
       *  Constant: '<S79>/Constant'
       *  Gain: '<S63>/Gain'
       *  Gain: '<S63>/Gain1'
       *  Gain: '<S63>/Gain2'
       *  Gain: '<S63>/Gain3'
       *  MATLAB Function: '<S21>/MATLAB Function6'
       *  Product: '<S63>/Product'
       *  Product: '<S78>/Product'
       *  Sqrt: '<S63>/sqrt'
       *  Sum: '<S75>/Add'
       *  Sum: '<S76>/Add'
       *  Sum: '<S77>/Add'
       *  Sum: '<S79>/Add'
       *  Switch: '<S78>/Switch'
       */
      rtb_mag_idx_1 = std::sqrt(((km[8] - km[0]) - km[4]) + 1.0);
      URControl_B.Merge[3] = 0.5 * rtb_mag_idx_1;
      if (rtb_mag_idx_1 != 0.0) {
        rtb_mag_idx_0 = 0.5;
      } else {
        rtb_mag_idx_0 = 0.0;
        rtb_mag_idx_1 = 1.0;
      }

      rtb_mag_idx_1 = rtb_mag_idx_0 / rtb_mag_idx_1;
      URControl_B.Merge[1] = (km[2] + -rtb_Product1_h) * rtb_mag_idx_1;
      URControl_B.Merge[2] = (km[5] + km[7]) * rtb_mag_idx_1;
      URControl_B.Merge[0] = (km[3] - km[1]) * rtb_mag_idx_1;

      /* End of Outputs for SubSystem: '<S57>/Maximum Value at DCM(3,3)' */
    } else {
      /* Outputs for IfAction SubSystem: '<S57>/Maximum Value at DCM(1,1)' incorporates:
       *  ActionPort: '<S61>/Action Port'
       */
      /* If: '<S57>/Find Maximum Diagonal Value' incorporates:
       *  Constant: '<S68>/Constant1'
       *  Constant: '<S69>/Constant'
       *  Gain: '<S61>/Gain'
       *  Gain: '<S61>/Gain1'
       *  Gain: '<S61>/Gain2'
       *  Gain: '<S61>/Gain3'
       *  MATLAB Function: '<S21>/MATLAB Function6'
       *  Product: '<S61>/Product'
       *  Product: '<S68>/Product'
       *  Sqrt: '<S61>/sqrt'
       *  Sum: '<S65>/Add'
       *  Sum: '<S66>/Add'
       *  Sum: '<S67>/Add'
       *  Sum: '<S69>/Add'
       *  Switch: '<S68>/Switch'
       */
      rtb_mag_idx_1 = std::sqrt(((km[0] - km[4]) - km[8]) + 1.0);
      URControl_B.Merge[1] = 0.5 * rtb_mag_idx_1;
      if (rtb_mag_idx_1 != 0.0) {
        rtb_mag_idx_0 = 0.5;
      } else {
        rtb_mag_idx_0 = 0.0;
        rtb_mag_idx_1 = 1.0;
      }

      rtb_mag_idx_1 = rtb_mag_idx_0 / rtb_mag_idx_1;
      URControl_B.Merge[2] = (km[1] + km[3]) * rtb_mag_idx_1;
      URControl_B.Merge[3] = (km[2] + -rtb_Product1_h) * rtb_mag_idx_1;
      URControl_B.Merge[0] = (km[7] - km[5]) * rtb_mag_idx_1;

      /* End of Outputs for SubSystem: '<S57>/Maximum Value at DCM(1,1)' */
    }

    /* End of Outputs for SubSystem: '<S41>/Negative Trace' */
  }

  /* End of If: '<S41>/If' */

  /* Gain: '<S21>/Gain2' */
  /* :  if sum(isnan(u)) */
  rtb_TmpSignalConversionAtSFun_6 = URControlParams.kb[0] * rtb_u2[0];

  /* MATLAB Function: '<S21>/MATLAB Function12' */
  rEQ0 = rtIsNaN(rtb_TmpSignalConversionAtSFun_6);

  /* Gain: '<S21>/Gain2' */
  rtb_u2[0] = rtb_TmpSignalConversionAtSFun_6;
  rtb_TmpSignalConversionAtSFun_6 = URControlParams.kb[1] * rtb_u2[1];

  /* MATLAB Function: '<S21>/MATLAB Function12' */
  positiveInput_data = rtIsNaN(rtb_TmpSignalConversionAtSFun_6);

  /* Gain: '<S21>/Gain2' */
  rtb_u2[1] = rtb_TmpSignalConversionAtSFun_6;
  rtb_TmpSignalConversionAtSFun_6 = URControlParams.kb[2] * rtb_u2[2];
  rtb_u2[2] = rtb_TmpSignalConversionAtSFun_6;

  /* MATLAB Function: '<S21>/MATLAB Function12' */
  if ((static_cast<real_T>(rEQ0) + static_cast<real_T>(positiveInput_data)) +
      static_cast<real_T>(rtIsNaN(rtb_TmpSignalConversionAtSFun_6)) != 0.0) {
    /* :  y = 0*ones(size(u)); */
    rtb_u2[0] = 0.0;
    rtb_u2[1] = 0.0;
    rtb_u2[2] = 0.0;
  } else {
    /* :  else */
    /* :  y = u; */
  }

  /* MATLAB Function: '<S21>/MATLAB Function3' */
  URControl_MATLABFunction3(rtb_TmpSignalConversionAtSFun_4,
    &URControl_B.sf_MATLABFunction3);

  /* MATLAB Function: '<S21>/MATLAB Function4' incorporates:
   *  DiscreteIntegrator: '<S21>/Discrete-Time Integrator1'
   *  Gain: '<S21>/Gain'
   *  Sum: '<S21>/Add1'
   *  Sum: '<S21>/Add4'
   */
  URControl_MATLABFunction3((10.0 * rtb_TmpSignalConversionAtSFun_4 +
    URControl_DW.DiscreteTimeIntegrator1_DSTATE) + rtb_omega[2],
    &URControl_B.sf_MATLABFunction4);

  /* Sqrt: '<S105>/sqrt' incorporates:
   *  Product: '<S106>/Product'
   *  Product: '<S106>/Product1'
   *  Product: '<S106>/Product2'
   *  Product: '<S106>/Product3'
   *  Sum: '<S106>/Sum'
   */
  rtb_TmpSignalConversionAtSFun_5 = std::sqrt(((URControl_B.Merge[0] *
    URControl_B.Merge[0] + URControl_B.Merge[1] * URControl_B.Merge[1]) +
    URControl_B.Merge[2] * URControl_B.Merge[2]) + URControl_B.Merge[3] *
    URControl_B.Merge[3]);

  /* Product: '<S100>/Product' */
  rtb_VectorConcatenate_n_idx_0 = URControl_B.Merge[0] /
    rtb_TmpSignalConversionAtSFun_5;

  /* Product: '<S100>/Product1' */
  rtb_Product1_h = URControl_B.Merge[1] / rtb_TmpSignalConversionAtSFun_5;

  /* Product: '<S100>/Product2' */
  rtb_Product2_l = URControl_B.Merge[2] / rtb_TmpSignalConversionAtSFun_5;

  /* Product: '<S100>/Product3' */
  rtb_TmpSignalConversionAtSFun_5 = URControl_B.Merge[3] /
    rtb_TmpSignalConversionAtSFun_5;

  /* Fcn: '<S53>/fcn3' */
  rtb_mag_idx_1 = (rtb_Product1_h * rtb_TmpSignalConversionAtSFun_5 -
                   rtb_VectorConcatenate_n_idx_0 * rtb_Product2_l) * -2.0;

  /* If: '<S101>/If' */
  if ((!(rtb_mag_idx_1 > 1.0)) && (!(rtb_mag_idx_1 < -1.0))) {
    /* Outputs for IfAction SubSystem: '<S101>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S104>/Action Port'
     */
    URControl_IfActionSubsystem2(rtb_mag_idx_1, &rtb_Merge);

    /* End of Outputs for SubSystem: '<S101>/If Action Subsystem2' */
  }

  /* End of If: '<S101>/If' */

  /* Outport: '<Root>/daq' incorporates:
   *  DataStoreRead: '<Root>/Data Store Read'
   */
  URControl_Y.daq = URControl_SharedDSM.DAQ;

  /* Update for Memory: '<S20>/Memory' */
  URControl_DW.Memory_PreviousInput[0] = rtb_DataStoreRead_k[6];
  URControl_DW.Memory_PreviousInput[1] = rtb_DataStoreRead_k[7];
  URControl_DW.Memory_PreviousInput[2] = rtb_DataStoreRead_k[8];
  URControl_DW.Memory_PreviousInput[3] = rtb_DataStoreRead_k[9];

  /* Update for DiscreteIntegrator: '<S21>/Discrete-Time Integrator' */
  URControl_DW.DiscreteTimeIntegrator_DSTATE += 0.002 *
    URControl_B.sf_MATLABFunction4.y;

  /* Update for Delay: '<S21>/Delay2' */
  URControl_DW.Delay2_DSTATE[0] = URControl_B.Euler_flip[0];

  /* Update for DiscreteIntegrator: '<S21>/Discrete-Time Integrator3' */
  URControl_DW.DiscreteTimeIntegrator3_DSTATE[0] += 0.002 * rtb_u2[0];

  /* Update for Delay: '<S21>/Delay1' */
  URControl_DW.Delay1_DSTATE[0] = URControl_B.Euler_flip[0];

  /* Update for Delay: '<S21>/Delay2' */
  URControl_DW.Delay2_DSTATE[1] = URControl_B.Euler_flip[1];

  /* Update for DiscreteIntegrator: '<S21>/Discrete-Time Integrator3' */
  URControl_DW.DiscreteTimeIntegrator3_DSTATE[1] += 0.002 * rtb_u2[1];

  /* Update for Delay: '<S21>/Delay1' */
  URControl_DW.Delay1_DSTATE[1] = URControl_B.Euler_flip[1];

  /* Update for Delay: '<S21>/Delay2' */
  URControl_DW.Delay2_DSTATE[2] = URControl_B.Euler_flip[2];

  /* Update for DiscreteIntegrator: '<S21>/Discrete-Time Integrator3' */
  URControl_DW.DiscreteTimeIntegrator3_DSTATE[2] += 0.002 * rtb_u2[2];

  /* Update for Delay: '<S21>/Delay1' */
  URControl_DW.Delay1_DSTATE[2] = URControl_B.Euler_flip[2];

  /* Update for Delay: '<S21>/Delay' incorporates:
   *  SignalConversion: '<S21>/TmpSignal ConversionAtDelayInport1'
   */
  URControl_DW.Delay_DSTATE[0] = acc_norm;
  URControl_DW.Delay_DSTATE[1] = rtb_Sum_j;
  URControl_DW.Delay_DSTATE[2] = psi_data;
  URControl_DW.Delay_DSTATE[3] = rtb_enableMeas;

  /* Update for Delay: '<Root>/Delay' */
  for (i = 0; i < 999; i++) {
    URControl_DW.Delay_DSTATE_j[i] = URControl_DW.Delay_DSTATE_j[i + 1];
  }

  URControl_DW.Delay_DSTATE_j[999] = b_absxk;

  /* End of Update for Delay: '<Root>/Delay' */

  /* Update for DiscreteIntegrator: '<S11>/Integrator' */
  URControl_DW.Integrator_IC_LOADING = 0U;

  /* MinMax: '<S8>/Max' */
  if (URControl_B.Probe[0] > 1.0) {
    rtb_VectorConcatenate_n_idx_1 = URControl_B.Probe[0];
  } else {
    rtb_VectorConcatenate_n_idx_1 = 1.0;
  }

  /* End of MinMax: '<S8>/Max' */

  /* Product: '<S1>/1//T' */
  rtb_VectorConcatenate_n_idx_1 = 1.0 / rtb_VectorConcatenate_n_idx_1;

  /* Update for DiscreteIntegrator: '<S11>/Integrator' incorporates:
   *  Product: '<S1>/1//T'
   *  Sum: '<S1>/Sum1'
   */
  URControl_DW.Integrator_DSTATE[0] += (rtb_pos[0] - rtb_Integrator[0]) *
    rtb_VectorConcatenate_n_idx_1 * 0.002;
  URControl_DW.Integrator_DSTATE[1] += (rtb_pos[1] - rtb_Integrator[1]) *
    rtb_VectorConcatenate_n_idx_1 * 0.002;
  URControl_DW.Integrator_DSTATE[2] += (rtb_pos[2] - rtb_Integrator[2]) *
    rtb_VectorConcatenate_n_idx_1 * 0.002;
  URControl_DW.Integrator_PrevResetState = static_cast<int8_T>(rtb_Compare);

  /* Update for DiscreteIntegrator: '<S15>/Integrator' */
  URControl_DW.Integrator_IC_LOADING_a = 0U;

  /* MinMax: '<S12>/Max' */
  if (URControl_B.Probe_d[0] > 1.0) {
    rtb_VectorConcatenate_n_idx_1 = URControl_B.Probe_d[0];
  } else {
    rtb_VectorConcatenate_n_idx_1 = 1.0;
  }

  /* End of MinMax: '<S12>/Max' */

  /* Update for DiscreteIntegrator: '<S15>/Integrator' incorporates:
   *  Product: '<S2>/1//T'
   *  Sum: '<S2>/Sum1'
   */
  URControl_DW.Integrator_DSTATE_i += 1.0 / rtb_VectorConcatenate_n_idx_1 * (b_t
    - rtb_Integrator_g) * 0.002;
  URControl_DW.Integrator_PrevResetState_i = static_cast<int8_T>(rtb_Compare_j);

  /* Update for DiscreteStateSpace: '<S20>/Discrete State-Space' */
  {
    real_T xnew[3];
    xnew[0] = (0.9)*URControl_DW.DiscreteStateSpace_DSTATE[0];
    xnew[0] += (0.1)*rtb_acc[0];
    xnew[1] = (0.9)*URControl_DW.DiscreteStateSpace_DSTATE[1];
    xnew[1] += (0.1)*rtb_acc[1];
    xnew[2] = (0.9)*URControl_DW.DiscreteStateSpace_DSTATE[2];
    xnew[2] += (0.1)*rtb_acc[2];
    (void) memcpy(&URControl_DW.DiscreteStateSpace_DSTATE[0], xnew,
                  sizeof(real_T)*3);
  }

  /* Update for DiscreteIntegrator: '<S21>/Discrete-Time Integrator1' */
  URControl_DW.DiscreteTimeIntegrator1_DSTATE += 0.004 *
    URControl_B.sf_MATLABFunction3.y;

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The resolution of this integer timer is 0.002, which is the step size
   * of the task. Size of "clockTick0" ensures timer will not overflow during the
   * application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  (&URControl_M)->Timing.clockTick0++;
  if (!(&URControl_M)->Timing.clockTick0) {
    (&URControl_M)->Timing.clockTickH0++;
  }
}

/* Model initialize function */
void URControlModelClass::initialize()
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)(&URControl_M), 0,
                sizeof(RT_MODEL_URControl_T));

  /* block I/O */
  (void) memset(((void *) &URControl_B), 0,
                sizeof(B_URControl_T));

  /* Initialize data stores shared across model instances */
  if (!_URControl_SharedDataInit_) {
    (void) memset((void *)&URControl_SharedDSM, 0,
                  sizeof(SharedDSM_URControl_T));
  }

  /* states (dwork) */
  (void) memset((void *)&URControl_DW, 0,
                sizeof(DW_URControl_T));

  /* external inputs */
  (void)memset(&URControl_U, 0, sizeof(ExtU_URControl_T));

  /* external outputs */
  (void) memset((void *)&URControl_Y, 0,
                sizeof(ExtY_URControl_T));

  /* Model Initialize function for ModelReference Block: '<S5>/URControl_att_indi' */
  URControl_att_indiMDLOBJ1.initializeRTM();

  /* Set error status pointer for ModelReference Block: '<S5>/URControl_att_indi' */
  URControl_att_indiMDLOBJ1.setErrorStatusPointer(rtmGetErrorStatusPointer
    ((&URControl_M)));
  URControl_att_indiMDLOBJ1.initialize();

  /* Start for Probe: '<S8>/Probe' */
  URControl_B.Probe[0] = 0.002;
  URControl_B.Probe[1] = 0.0;

  /* Start for Probe: '<S12>/Probe' */
  URControl_B.Probe_d[0] = 0.002;
  URControl_B.Probe_d[1] = 0.0;

  /* Start for ModelReference: '<S5>/URControl_att_indi' */
  URControl_att_indiMDLOBJ1.start();

  /* Start for DataStoreMemory: '<S23>/DataStoreMemory - P' */
  memcpy(&URControl_DW.P[0], &rtCP_DataStoreMemoryP_InitialVa[0], 100U * sizeof
         (real_T));

  /* Start for DataStoreMemory: '<S23>/DataStoreMemory - x' */
  memcpy(&URControl_DW.x[0], &rtCP_DataStoreMemoryx_InitialVa[0], 10U * sizeof
         (real_T));

  /* Start for DataStoreMemory: '<Root>/Data Store Memory' */
  if (!_URControl_SharedDataInit_) {
    URControl_SharedDSM.DAQ = URControl_rtZdaqBus;
  }

  /* End of Start for DataStoreMemory: '<Root>/Data Store Memory' */

  /* Start for DataStoreMemory: '<Root>/Data Store Memory1' */
  URControl_DW.State = URControl_rtZstateBus;

  /* InitializeConditions for Memory: '<S20>/Memory' */
  URControl_DW.Memory_PreviousInput[0] = 0.0;
  URControl_DW.Memory_PreviousInput[1] = 0.0;
  URControl_DW.Memory_PreviousInput[2] = 0.0;
  URControl_DW.Memory_PreviousInput[3] = 0.0;

  /* InitializeConditions for DiscreteIntegrator: '<S21>/Discrete-Time Integrator' */
  URControl_DW.DiscreteTimeIntegrator_DSTATE = 0.0;

  /* InitializeConditions for Delay: '<S21>/Delay2' */
  URControl_DW.Delay2_DSTATE[0] = 0.0;

  /* InitializeConditions for DiscreteIntegrator: '<S21>/Discrete-Time Integrator3' */
  URControl_DW.DiscreteTimeIntegrator3_DSTATE[0] = 0.0;

  /* InitializeConditions for Delay: '<S21>/Delay1' */
  URControl_DW.Delay1_DSTATE[0] = 0.0;

  /* InitializeConditions for Delay: '<S21>/Delay2' */
  URControl_DW.Delay2_DSTATE[1] = 0.0;

  /* InitializeConditions for DiscreteIntegrator: '<S21>/Discrete-Time Integrator3' */
  URControl_DW.DiscreteTimeIntegrator3_DSTATE[1] = 0.0;

  /* InitializeConditions for Delay: '<S21>/Delay1' */
  URControl_DW.Delay1_DSTATE[1] = 0.0;

  /* InitializeConditions for Delay: '<S21>/Delay2' */
  URControl_DW.Delay2_DSTATE[2] = 0.0;

  /* InitializeConditions for DiscreteIntegrator: '<S21>/Discrete-Time Integrator3' */
  URControl_DW.DiscreteTimeIntegrator3_DSTATE[2] = 0.0;

  /* InitializeConditions for Delay: '<S21>/Delay1' */
  URControl_DW.Delay1_DSTATE[2] = 0.0;

  /* InitializeConditions for Delay: '<S21>/Delay' */
  URControl_DW.Delay_DSTATE[0] = 1.0;
  URControl_DW.Delay_DSTATE[1] = 0.0;
  URControl_DW.Delay_DSTATE[2] = 0.0;
  URControl_DW.Delay_DSTATE[3] = 0.0;

  /* InitializeConditions for Delay: '<Root>/Delay' */
  memset(&URControl_DW.Delay_DSTATE_j[0], 0, 1000U * sizeof(real_T));

  /* InitializeConditions for DiscreteIntegrator: '<S11>/Integrator' */
  URControl_DW.Integrator_IC_LOADING = 1U;
  URControl_DW.Integrator_PrevResetState = 0;

  /* InitializeConditions for DiscreteIntegrator: '<S15>/Integrator' */
  URControl_DW.Integrator_IC_LOADING_a = 1U;
  URControl_DW.Integrator_PrevResetState_i = 0;

  /* InitializeConditions for DiscreteStateSpace: '<S20>/Discrete State-Space' */
  URControl_DW.DiscreteStateSpace_DSTATE[0] = (0.0);
  URControl_DW.DiscreteStateSpace_DSTATE[1] = (0.0);
  URControl_DW.DiscreteStateSpace_DSTATE[2] = (0.0);

  /* InitializeConditions for DiscreteIntegrator: '<S21>/Discrete-Time Integrator1' */
  URControl_DW.DiscreteTimeIntegrator1_DSTATE = 0.0;

  /* SystemInitialize for MATLAB Function: '<S7>/basic estimators' */
  /* :  attPrev = [0;0;0]; */
  URControl_DW.omegaFilter_not_empty = false;
  URControl_DW.posFilter_not_empty = false;
  URControl_DW.velFilter_not_empty = false;
  URControl_DW.accFilter_not_empty = false;

  /* 'UREstimators:7' failProt = 0; */
  URControl_DW.failProt = 0.0;

  /* SystemInitialize for MATLAB Function: '<S20>/enableMeas' */
  /* 'URpositionControl:3' errorInt = [0,0,0]; */
  URControl_DW.attPrev[0] = 0.0;

  /* SystemInitialize for MATLAB Function: '<S4>/position control' */
  URControl_DW.errorInt[0] = 0.0;

  /* SystemInitialize for MATLAB Function: '<S20>/enableMeas' */
  URControl_DW.attPrev[1] = 0.0;

  /* SystemInitialize for MATLAB Function: '<S4>/position control' */
  URControl_DW.errorInt[1] = 0.0;

  /* SystemInitialize for MATLAB Function: '<S20>/enableMeas' */
  URControl_DW.attPrev[2] = 0.0;

  /* SystemInitialize for MATLAB Function: '<S4>/position control' */
  URControl_DW.errorInt[2] = 0.0;

  /* SystemInitialize for MATLAB Function: '<S4>/altitude control' */
  /* 'URAltitudeControl:3' errorInt = 0; */
  URControl_DW.errorInt_g = 0.0;

  /* SystemInitialize for ModelReference: '<S5>/URControl_att_indi' */
  URControl_att_indiMDLOBJ1.init();

  /* SystemInitialize for MATLAB Function: '<S3>/MATLAB Function' */
  /* 'UROverrides:3' fallCount = 0; */
  URControl_DW.fallCount = 0.0;

  /* 'UROverrides:4' thrown = 0; */
  URControl_DW.thrown = 0.0;

  /* 'UROverrides:6' flipTime = 0; */
  URControl_DW.flipTime = 0.0;

  /* SystemInitialize for MATLAB Function: '<S21>/MATLAB Function' */
  /* 'mag_to_heading:5' psi_last = 0; */
  URControl_DW.psi_last_a = 0.0;

  /* SystemInitialize for MATLAB Function: '<S21>/unwrap2pi' */
  URControl_DW.psi_last_not_empty = false;

  /* 'unwrap2pi:8' N = 0; */
  URControl_DW.N = 0.0;

  /* SystemInitialize for Merge: '<S41>/Merge' */
  URControl_B.Merge[0] = 1.0;
  URControl_B.Merge[1] = 0.0;
  URControl_B.Merge[2] = 0.0;
  URControl_B.Merge[3] = 0.0;

  /* SystemInitialize for DataStoreMemory: '<Root>/DataStoreMemory' */
  if (!_URControl_SharedDataInit_) {
    _URControl_SharedDataInit_ = true;
  }

  /* End of SystemInitialize for DataStoreMemory: '<Root>/DataStoreMemory' */
}

/* Model terminate function */
void URControlModelClass::terminate()
{
  /* (no terminate code required) */
}

/* Constructor */
URControlModelClass::URControlModelClass()
{
  /* Currently there is no constructor body generated.*/
}

/* Destructor */
URControlModelClass::~URControlModelClass()
{
  /* Currently there is no destructor body generated.*/
}

/* Real-Time Model get method */
RT_MODEL_URControl_T * URControlModelClass::getRTM()
{
  return (&URControl_M);
}
