/*
 * Code generation for system model 'LoeDetector'
 *
 * Model                      : LoeDetector
 * Model version              : 1.32
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C++ source code generated on : Wed Jul 17 14:14:09 2019
 *
 * Note that the functions contained in this file are part of a Simulink
 * model, and are not self-contained algorithms.
 */

#include "LoeDetector.h"
#include "LoeDetector_private.h"
#include "normcdf_RuozKmPV.h"
#include "rt_roundd_snf.h"

/*
 * Function for MATLAB Function: '<Root>/LoeDetector'
 * function [state, P] = step(obj, z, obs_matrix)
 */
void LoeDetectorModelClass::LoeDetecto_KalmanEstimator_step
  (BlocksPkg_KalmanEstimator_Loe_T *obj, const real_T z[3], const real_T
   obs_matrix[12], real_T state[4], real_T P[16])
{
  real_T P_k1k[16];
  real_T S[9];
  real_T K[12];
  int8_T b_data[4];
  int8_T c_data[4];
  boolean_T d[4];
  real_T y[12];
  int32_T r1;
  int32_T r2;
  int32_T r3;
  real_T maxval;
  real_T a21;
  int32_T rtemp;
  static const int8_T a[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  int8_T P_k1k_tmp[16];
  real_T P_k1k_tmp_0[16];
  real_T obs_matrix_0[12];
  real_T z_0[3];
  boolean_T d_0;
  int32_T P_k1k_tmp_tmp;
  int32_T K_tmp;
  int32_T K_tmp_0;
  real_T K_tmp_1;
  int32_T K_tmp_2;
  int32_T K_tmp_3;
  real_T K_tmp_4;
  int32_T K_tmp_5;
  int32_T K_tmp_6;
  real_T K_tmp_7;
  real_T K_tmp_8;
  int32_T K_tmp_9;

  /* 'KalmanEstimator:53' n_states = length(obj.Q); */
  /* 'KalmanEstimator:54' P_k1k = eye(n_states)*obj.P*eye(n_states) + obj.Q; */
  for (r1 = 0; r1 < 16; r1++) {
    P_k1k_tmp[r1] = a[r1];
  }

  for (r1 = 0; r1 < 4; r1++) {
    for (r2 = 0; r2 < 4; r2++) {
      rtemp = r2 << 2;
      r3 = r1 + rtemp;
      P_k1k_tmp_0[r3] = 0.0;
      P_k1k_tmp_tmp = rtemp + r1;
      P_k1k_tmp_0[r3] = P_k1k_tmp_0[P_k1k_tmp_tmp] + obj->P[rtemp] * (real_T)
        P_k1k_tmp[r1];
      P_k1k_tmp_0[r3] = obj->P[rtemp + 1] * (real_T)P_k1k_tmp[r1 + 4] +
        P_k1k_tmp_0[P_k1k_tmp_tmp];
      P_k1k_tmp_0[r3] = obj->P[rtemp + 2] * (real_T)P_k1k_tmp[r1 + 8] +
        P_k1k_tmp_0[P_k1k_tmp_tmp];
      P_k1k_tmp_0[r3] = obj->P[rtemp + 3] * (real_T)P_k1k_tmp[r1 + 12] +
        P_k1k_tmp_0[P_k1k_tmp_tmp];
    }

    for (r2 = 0; r2 < 4; r2++) {
      rtemp = r2 << 2;
      P_k1k[r1 + rtemp] = ((((real_T)P_k1k_tmp[rtemp + 1] * P_k1k_tmp_0[r1 + 4]
        + (real_T)P_k1k_tmp[rtemp] * P_k1k_tmp_0[r1]) + (real_T)P_k1k_tmp[rtemp
                            + 2] * P_k1k_tmp_0[r1 + 8]) + (real_T)
                           P_k1k_tmp[rtemp + 3] * P_k1k_tmp_0[r1 + 12]) + obj->
        Q[rtemp + r1];
    }
  }

  /* 'KalmanEstimator:57' y = z - obs_matrix*obj.state; */
  /* 'KalmanEstimator:60' S = obj.R + obs_matrix*P_k1k*obs_matrix'; */
  for (r1 = 0; r1 < 3; r1++) {
    for (r2 = 0; r2 < 4; r2++) {
      rtemp = 3 * r2 + r1;
      K[r2 + (r1 << 2)] = obs_matrix[rtemp];
      r3 = r1 + 3 * r2;
      obs_matrix_0[r3] = 0.0;
      P_k1k_tmp_tmp = r2 << 2;
      obs_matrix_0[r3] = obs_matrix_0[rtemp] + P_k1k[P_k1k_tmp_tmp] *
        obs_matrix[r1];
      obs_matrix_0[r3] = P_k1k[P_k1k_tmp_tmp + 1] * obs_matrix[r1 + 3] +
        obs_matrix_0[rtemp];
      obs_matrix_0[r3] = P_k1k[P_k1k_tmp_tmp + 2] * obs_matrix[r1 + 6] +
        obs_matrix_0[rtemp];
      obs_matrix_0[r3] = P_k1k[P_k1k_tmp_tmp + 3] * obs_matrix[r1 + 9] +
        obs_matrix_0[rtemp];
    }
  }

  /* 'KalmanEstimator:63' K = P_k1k*obs_matrix'/S; */
  for (r1 = 0; r1 < 3; r1++) {
    for (r2 = 0; r2 < 3; r2++) {
      rtemp = r1 << 2;
      S[r2 + 3 * r1] = (((K[rtemp + 1] * obs_matrix_0[r2 + 3] + K[rtemp] *
                          obs_matrix_0[r2]) + K[rtemp + 2] * obs_matrix_0[r2 + 6])
                        + K[rtemp + 3] * obs_matrix_0[r2 + 9]) + obj->R[3 * r1 +
        r2];
    }

    for (r2 = 0; r2 < 4; r2++) {
      rtemp = r2 + (r1 << 2);
      y[rtemp] = 0.0;
      r3 = (r1 << 2) + r2;
      y[rtemp] = y[r3] + K[r1 << 2] * P_k1k[r2];
      y[rtemp] = K[(r1 << 2) + 1] * P_k1k[r2 + 4] + y[r3];
      y[rtemp] = K[(r1 << 2) + 2] * P_k1k[r2 + 8] + y[r3];
      y[rtemp] = K[(r1 << 2) + 3] * P_k1k[r2 + 12] + y[r3];
    }
  }

  r1 = 0;
  r2 = 1;
  r3 = 2;
  maxval = std::abs(S[0]);
  a21 = std::abs(S[1]);
  if (a21 > maxval) {
    maxval = a21;
    r1 = 1;
    r2 = 0;
  }

  if (std::abs(S[2]) > maxval) {
    r1 = 2;
    r2 = 1;
    r3 = 0;
  }

  S[r2] /= S[r1];
  S[r3] /= S[r1];
  S[3 + r2] -= S[3 + r1] * S[r2];
  S[3 + r3] -= S[3 + r1] * S[r3];
  S[6 + r2] -= S[6 + r1] * S[r2];
  S[6 + r3] -= S[6 + r1] * S[r3];
  if (std::abs(S[3 + r3]) > std::abs(S[3 + r2])) {
    rtemp = r2;
    r2 = r3;
    r3 = rtemp;
  }

  S[3 + r3] /= S[3 + r2];
  S[6 + r3] -= S[3 + r3] * S[6 + r2];
  rtemp = r1 << 2;
  K[rtemp] = y[0] / S[r1];
  P_k1k_tmp_tmp = r2 << 2;
  maxval = S[3 + r1];
  K[P_k1k_tmp_tmp] = y[4] - K[rtemp] * maxval;
  K_tmp = r3 << 2;
  a21 = S[6 + r1];
  K[K_tmp] = y[8] - K[rtemp] * a21;
  K_tmp_1 = S[3 + r2];
  K[P_k1k_tmp_tmp] /= K_tmp_1;
  K_tmp_4 = S[6 + r2];
  K[K_tmp] -= K[P_k1k_tmp_tmp] * K_tmp_4;
  K_tmp_7 = S[6 + r3];
  K[K_tmp] /= K_tmp_7;
  K_tmp_8 = S[3 + r3];
  K[P_k1k_tmp_tmp] -= K[K_tmp] * K_tmp_8;
  K[rtemp] -= K[K_tmp] * S[r3];
  K[rtemp] -= K[P_k1k_tmp_tmp] * S[r2];
  K_tmp_9 = 1 + rtemp;
  K[K_tmp_9] = y[1] / S[r1];
  K_tmp_0 = rtemp + 1;
  K_tmp_2 = 1 + P_k1k_tmp_tmp;
  K[K_tmp_2] = y[5] - K[K_tmp_0] * maxval;
  K_tmp_5 = 1 + K_tmp;
  K[K_tmp_5] = y[9] - K[K_tmp_0] * a21;
  K_tmp_3 = P_k1k_tmp_tmp + 1;
  K[K_tmp_2] = K[K_tmp_3] / K_tmp_1;
  K_tmp_6 = K_tmp + 1;
  K[K_tmp_5] = K[K_tmp_6] - K[K_tmp_3] * K_tmp_4;
  K[K_tmp_5] = K[K_tmp_6] / K_tmp_7;
  K[K_tmp_2] = K[K_tmp_3] - K[K_tmp_6] * K_tmp_8;
  K[K_tmp_9] = K[K_tmp_0] - K[K_tmp_6] * S[r3];
  K[K_tmp_9] = K[K_tmp_0] - K[K_tmp_3] * S[r2];
  K_tmp_9 = 2 + rtemp;
  K[K_tmp_9] = y[2] / S[r1];
  K_tmp_0 = rtemp + 2;
  K_tmp_2 = 2 + P_k1k_tmp_tmp;
  K[K_tmp_2] = y[6] - K[K_tmp_0] * maxval;
  K_tmp_5 = 2 + K_tmp;
  K[K_tmp_5] = y[10] - K[K_tmp_0] * a21;
  K_tmp_3 = P_k1k_tmp_tmp + 2;
  K[K_tmp_2] = K[K_tmp_3] / K_tmp_1;
  K_tmp_6 = K_tmp + 2;
  K[K_tmp_5] = K[K_tmp_6] - K[K_tmp_3] * K_tmp_4;
  K[K_tmp_5] = K[K_tmp_6] / K_tmp_7;
  K[K_tmp_2] = K[K_tmp_3] - K[K_tmp_6] * K_tmp_8;
  K[K_tmp_9] = K[K_tmp_0] - K[K_tmp_6] * S[r3];
  K[K_tmp_9] = K[K_tmp_0] - K[K_tmp_3] * S[r2];
  K_tmp_9 = 3 + rtemp;
  K[K_tmp_9] = y[3] / S[r1];
  rtemp += 3;
  K_tmp_0 = 3 + P_k1k_tmp_tmp;
  K[K_tmp_0] = y[7] - K[rtemp] * maxval;
  K_tmp_2 = 3 + K_tmp;
  K[K_tmp_2] = y[11] - K[rtemp] * a21;
  P_k1k_tmp_tmp += 3;
  K[K_tmp_0] = K[P_k1k_tmp_tmp] / K_tmp_1;
  K_tmp += 3;
  K[K_tmp_2] = K[K_tmp] - K[P_k1k_tmp_tmp] * K_tmp_4;
  K[K_tmp_2] = K[K_tmp] / K_tmp_7;
  K[K_tmp_0] = K[P_k1k_tmp_tmp] - K[K_tmp] * K_tmp_8;
  K[K_tmp_9] = K[rtemp] - K[K_tmp] * S[r3];
  K[K_tmp_9] = K[rtemp] - K[P_k1k_tmp_tmp] * S[r2];

  /* 'KalmanEstimator:66' obj.state = obj.state + K * y; */
  for (r1 = 0; r1 < 3; r1++) {
    z_0[r1] = z[r1] - (((obs_matrix[r1 + 3] * obj->state[1] + obs_matrix[r1] *
                         obj->state[0]) + obs_matrix[r1 + 6] * obj->state[2]) +
                       obs_matrix[r1 + 9] * obj->state[3]);
  }

  /* 'KalmanEstimator:68' if isvector(obj.state_bounds) */
  /* 'KalmanEstimator:70' lower = obj.state_bounds(1); */
  /* 'KalmanEstimator:71' upper = obj.state_bounds(2); */
  maxval = obj->state_bounds[1];

  /* 'KalmanEstimator:72' obj.state(obj.state < lower) = lower; */
  a21 = obj->state_bounds[0];
  r1 = 0;
  for (r2 = 0; r2 < 4; r2++) {
    obj->state[r2] += (K[r2 + 4] * z_0[1] + K[r2] * z_0[0]) + K[r2 + 8] * z_0[2];
    d_0 = (obj->state[r2] < a21);
    if (d_0) {
      r1++;
    }

    d[r2] = d_0;
  }

  rtemp = r1;
  r1 = 0;
  if (d[0]) {
    b_data[0] = 1;
    r1 = 1;
  }

  if (d[1]) {
    b_data[r1] = 2;
    r1++;
  }

  if (d[2]) {
    b_data[r1] = 3;
    r1++;
  }

  if (d[3]) {
    b_data[r1] = 4;
  }

  for (r1 = 0; r1 < rtemp; r1++) {
    obj->state[b_data[r1] - 1] = obj->state_bounds[0];
  }

  /* 'KalmanEstimator:73' obj.state(obj.state > upper) = upper; */
  r1 = 0;
  d_0 = (obj->state[0] > maxval);
  if (d_0) {
    r1 = 1;
  }

  d[0] = d_0;
  d_0 = (obj->state[1] > maxval);
  if (d_0) {
    r1++;
  }

  d[1] = d_0;
  d_0 = (obj->state[2] > maxval);
  if (d_0) {
    r1++;
  }

  d[2] = d_0;
  d_0 = (obj->state[3] > maxval);
  if (d_0) {
    r1++;
  }

  rtemp = r1;
  r1 = 0;
  if (d[0]) {
    c_data[0] = 1;
    r1 = 1;
  }

  if (d[1]) {
    c_data[r1] = 2;
    r1++;
  }

  if (d[2]) {
    c_data[r1] = 3;
    r1++;
  }

  if (d_0) {
    c_data[r1] = 4;
  }

  for (r1 = 0; r1 < rtemp; r1++) {
    obj->state[c_data[r1] - 1] = maxval;
  }

  /* 'KalmanEstimator:77' obj.P = ( eye(n_states) - K*obs_matrix )*P_k1k; */
  for (r1 = 0; r1 < 16; r1++) {
    P_k1k_tmp[r1] = 0;
  }

  P_k1k_tmp[0] = 1;
  P_k1k_tmp[5] = 1;
  P_k1k_tmp[10] = 1;
  P_k1k_tmp[15] = 1;

  /* 'KalmanEstimator:79' state = obj.state; */
  for (r3 = 0; r3 < 4; r3++) {
    for (r1 = 0; r1 < 4; r1++) {
      rtemp = r1 << 2;
      P_k1k_tmp_0[r3 + rtemp] = (real_T)P_k1k_tmp[rtemp + r3] - ((obs_matrix[3 *
        r1 + 1] * K[r3 + 4] + obs_matrix[3 * r1] * K[r3]) + obs_matrix[3 * r1 +
        2] * K[r3 + 8]);
    }

    for (r1 = 0; r1 < 4; r1++) {
      r2 = r1 << 2;
      rtemp = r3 + r2;
      obj->P[rtemp] = 0.0;
      obj->P[rtemp] = obj->P[r2 + r3] + P_k1k[r2] * P_k1k_tmp_0[r3];
      obj->P[rtemp] = P_k1k[r2 + 1] * P_k1k_tmp_0[r3 + 4] + obj->P[(r1 << 2) +
        r3];
      obj->P[rtemp] = P_k1k[r2 + 2] * P_k1k_tmp_0[r3 + 8] + obj->P[(r1 << 2) +
        r3];
      obj->P[rtemp] = P_k1k[r2 + 3] * P_k1k_tmp_0[r3 + 12] + obj->P[(r1 << 2) +
        r3];
    }

    state[r3] = obj->state[r3];
  }

  /* 'KalmanEstimator:80' P = obj.P; */
  memcpy(&P[0], &obj->P[0], sizeof(real_T) << 4U);
}

/* System initialize for referenced model: 'LoeDetector' */
void LoeDetectorModelClass::init(void)
{
  /* SystemInitialize for MATLAB Function: '<Root>/LoeDetector' */
  LoeDetector_DW.loeDetector_not_empty = false;

  /* 'fail_diagnosis:14' fail_id = 0; */
  LoeDetector_DW.fail_id = 0.0;
}

/* System reset for referenced model: 'LoeDetector' */
void LoeDetectorModelClass::reset(void)
{
  /* SystemReset for MATLAB Function: '<Root>/LoeDetector' */
  LoeDetector_DW.loeDetector_not_empty = false;

  /* 'fail_diagnosis:14' fail_id = 0; */
  LoeDetector_DW.fail_id = 0.0;
}

/* Output and update for referenced model: 'LoeDetector' */
void LoeDetectorModelClass::step(const real32_T rtu_rates[3], const real32_T
  *rtu_acc_z, const int32_T rtu_esc_rpm[4], int32_T *rty_fail_id)
{
  real_T d[16];
  int32_T j;
  int8_T b_d[9];
  LoeDetectorPkg_LoeDetector_Lo_T *obj;
  real_T rates_meas_f[2];
  real_T act_meas_f[4];
  BlocksPkg_SecondOrderFilter_L_T *b_obj;
  real_T a[4];
  real_T c_a;
  BlocksPkg_SecondOrderFilter_2_T *c_obj;
  real_T t2;
  real_T t3;
  real_T t4;
  real_T t5;
  real_T ok_P[4];
  real32_T rtb_rads[4];
  real_T rates_f_dot[3];
  real_T in1[12];
  real_T in1_idx_2;
  real_T b_idx_0;
  real_T b_idx_1;
  real_T b_a_idx_0;
  real_T b_a_idx_1;
  real_T rates_f_dot_idx_0;
  real_T rates_f_dot_idx_1;
  real_T e_a_idx_0;
  real_T e_a_idx_1;
  int32_T b_idx_0_tmp;
  boolean_T exitg1;

  /* MATLAB Function: '<Root>/MATLAB Function1' */
  /* :  RPM_TO_RADS = 2*pi/60; */
  /* :  rads = single(RPM_TO_RADS.*rpm); */
  rtb_rads[0] = (real32_T)rt_roundd_snf(0.10471975511965977 * (real_T)
    rtu_esc_rpm[0]);
  rtb_rads[1] = (real32_T)rt_roundd_snf(0.10471975511965977 * (real_T)
    rtu_esc_rpm[1]);
  rtb_rads[2] = (real32_T)rt_roundd_snf(0.10471975511965977 * (real_T)
    rtu_esc_rpm[2]);
  rtb_rads[3] = (real32_T)rt_roundd_snf(0.10471975511965977 * (real_T)
    rtu_esc_rpm[3]);

  /* MATLAB Function: '<Root>/LoeDetector' */
  /* :  Ts = 1/500; */
  /* :  n_imu_meas = 3; */
  /* :  n_act = 4; */
  /* :  n_rates = 2; */
  /* :  Q = 0.01; */
  /* :  R = 1; */
  /* :  if isempty(loeDetector) */
  if (!LoeDetector_DW.loeDetector_not_empty) {
    /* :  loeDetector = LoeDetectorPkg.LoeDetector(loe_detector_filter_sys, ... */
    /* :                  Ts, ... */
    /* :                  n_imu_meas, n_act, n_rates, ... */
    /* :                  Q, R, control_eff, ... */
    /* :                  LoeDetectorParams); */
    /* 'LoeDetector:2:22' obj.FilterRatesMeas = BlocksPkg.SecondOrderFilter(loe_detector_filter_sys, n_rates); */
    /* 'SecondOrderFilter:20' obj.sys = sys; */
    LoeDetector_DW.loeDetector.FilterRatesMeas.sys =
      LoeDetector_ConstP.LoeDetector_loe_detector_filter;

    /* 'SecondOrderFilter:24' obj.states = zeros(2, n); */
    LoeDetector_DW.loeDetector.FilterRatesMeas.states[0] = 0.0;
    LoeDetector_DW.loeDetector.FilterRatesMeas.states[1] = 0.0;
    LoeDetector_DW.loeDetector.FilterRatesMeas.states[2] = 0.0;
    LoeDetector_DW.loeDetector.FilterRatesMeas.states[3] = 0.0;

    /* 'LoeDetector:2:23' obj.FilterAccMeas = BlocksPkg.SecondOrderFilter(loe_detector_filter_sys, 1); */
    /* 'SecondOrderFilter:20' obj.sys = sys; */
    LoeDetector_DW.loeDetector.FilterAccMeas.sys =
      LoeDetector_ConstP.LoeDetector_loe_detector_filter;

    /* 'SecondOrderFilter:24' obj.states = zeros(2, n); */
    LoeDetector_DW.loeDetector.FilterAccMeas.states[0] = 0.0;
    LoeDetector_DW.loeDetector.FilterAccMeas.states[1] = 0.0;

    /* 'LoeDetector:2:24' obj.FilterActuatorMeas = BlocksPkg.SecondOrderFilter(loe_detector_filter_sys, n_act); */
    /* 'SecondOrderFilter:20' obj.sys = sys; */
    LoeDetector_DW.loeDetector.FilterActuatorMeas.sys =
      LoeDetector_ConstP.LoeDetector_loe_detector_filter;

    /* 'SecondOrderFilter:24' obj.states = zeros(2, n); */
    memset(&LoeDetector_DW.loeDetector.FilterActuatorMeas.states[0], 0, sizeof
           (real_T) << 3U);

    /* 'LoeDetector:2:25' obj.DerivRates = BlocksPkg.Derivative(Ts, n_rates); */
    /* 'Derivative:15' obj.prev_value = zeros(n, 1); */
    LoeDetector_DW.loeDetector.DerivRates.prev_value[0] = 0.0;
    LoeDetector_DW.loeDetector.DerivRates.prev_value[1] = 0.0;

    /* 'Derivative:16' obj.Ts = Ts; */
    LoeDetector_DW.loeDetector.DerivRates.Ts = 0.002;

    /* 'Derivative:17' obj.first = true; */
    LoeDetector_DW.loeDetector.DerivRates.first = true;

    /* 'LoeDetector:2:26' obj.Kalman = BlocksPkg.KalmanEstimator(Q, R, ...  */
    /* 'LoeDetector:2:27'                 n_act, n_imu_meas, ... */
    /* 'LoeDetector:2:28'                 1, 3, ... */
    /* 'LoeDetector:2:29'                 [0 1.5]); */
    /* 'KalmanEstimator:24' if length(Q) == 1 */
    /* 'KalmanEstimator:25' obj.Q = diag(ones(1, n_states)*Q); */
    memset(&d[0], 0, sizeof(real_T) << 4U);
    d[0] = 0.01;
    d[5] = 0.01;
    d[10] = 0.01;
    d[15] = 0.01;
    memcpy(&LoeDetector_DW.loeDetector.Kalman.Q[0], &d[0], sizeof(real_T) << 4U);

    /* 'KalmanEstimator:30' if length(R) == 1 */
    /* 'KalmanEstimator:31' obj.R = diag(ones(1, n_meas)*R); */
    for (j = 0; j < 9; j++) {
      b_d[j] = 0;
    }

    b_d[0] = 1;
    b_d[4] = 1;
    b_d[8] = 1;
    for (j = 0; j < 9; j++) {
      LoeDetector_DW.loeDetector.Kalman.R[j] = b_d[j];
    }

    /* 'KalmanEstimator:36' if length(state0) == 1 */
    /* 'KalmanEstimator:37' obj.state = ones(n_states, 1)*state0; */
    LoeDetector_DW.loeDetector.Kalman.state[0] = 1.0;
    LoeDetector_DW.loeDetector.Kalman.state[1] = 1.0;
    LoeDetector_DW.loeDetector.Kalman.state[2] = 1.0;
    LoeDetector_DW.loeDetector.Kalman.state[3] = 1.0;

    /* 'KalmanEstimator:42' if length(P0) == 1 */
    /* 'KalmanEstimator:43' obj.P = diag(ones(1, n_states)*P0); */
    memset(&d[0], 0, sizeof(real_T) << 4U);
    d[0] = 3.0;
    d[5] = 3.0;
    d[10] = 3.0;
    d[15] = 3.0;
    memcpy(&LoeDetector_DW.loeDetector.Kalman.P[0], &d[0], sizeof(real_T) << 4U);

    /* 'KalmanEstimator:48' obj.state_bounds = state_bounds; */
    LoeDetector_DW.loeDetector.Kalman.state_bounds[0] = 0.0;
    LoeDetector_DW.loeDetector.Kalman.state_bounds[1] = 1.5;

    /* 'LoeDetector:2:30' obj.n_rates = n_rates; */
    /* 'LoeDetector:2:31' obj.control_eff = control_eff; */
    LoeDetector_DW.loeDetector.control_eff[0] = 100.0;
    LoeDetector_DW.loeDetector.control_eff[1] = 100.0;
    LoeDetector_DW.loeDetector.control_eff[2] = 5.0;

    /* 'LoeDetector:2:32' obj.fail_diagnosis_params = fail_diagnosis_params; */
    LoeDetector_DW.loeDetector.fail_diagnosis_params = LoeDetectorParams;
    LoeDetector_DW.loeDetector_not_empty = true;
  }

  /* :  fail_id = loeDetector.step(rates(1:n_rates)', acc_z, esc_rads'); */
  obj = &LoeDetector_DW.loeDetector;

  /* 'LoeDetector:2:49' rates_meas_f = obj.FilterRatesMeas.step(rates_meas)'; */
  b_obj = &LoeDetector_DW.loeDetector.FilterRatesMeas;

  /* 'SecondOrderFilter:29' n_states = size(obj.states, 2); */
  /* 'SecondOrderFilter:30' y = zeros(1, n_states); */
  /* 'SecondOrderFilter:31' for i = 1:n_states */
  for (j = 0; j < 2; j++) {
    /* 'SecondOrderFilter:32' obj.states(:,i) = obj.sys.A*obj.states(:,i) + obj.sys.B*input(i); */
    a[0] = b_obj->sys.A[0];
    a[1] = b_obj->sys.A[1];
    a[2] = b_obj->sys.A[2];
    a[3] = b_obj->sys.A[3];
    b_idx_0_tmp = j << 1;
    b_idx_0 = b_obj->states[b_idx_0_tmp];
    b_idx_1 = b_obj->states[b_idx_0_tmp + 1];
    b_a_idx_0 = b_obj->sys.B[0];
    b_a_idx_1 = b_obj->sys.B[1];
    b_obj->states[b_idx_0_tmp] = (real32_T)(a[0] * b_idx_0 + a[2] * b_idx_1) +
      (real32_T)b_a_idx_0 * rtu_rates[(int8_T)j];
    b_obj->states[1 + b_idx_0_tmp] = (real32_T)(a[1] * b_idx_0 + a[3] * b_idx_1)
      + (real32_T)b_a_idx_1 * rtu_rates[(int8_T)j];

    /* 'SecondOrderFilter:33' y(i) = obj.sys.C*obj.states(:,i) + obj.sys.D*input(i); */
    b_a_idx_0 = b_obj->sys.C[0];
    b_a_idx_1 = b_obj->sys.C[1];
    b_idx_0 = b_obj->states[j << 1];
    b_idx_1 = b_obj->states[(j << 1) + 1];
    c_a = b_obj->sys.D;
    rates_meas_f[j] = (real32_T)(b_a_idx_0 * b_idx_0 + b_a_idx_1 * b_idx_1) +
      (real32_T)c_a * rtu_rates[j];
  }

  /* 'LoeDetector:2:50' acc_meas_f = obj.FilterAccMeas.step(acc_meas)'; */
  /* 'SecondOrderFilter:29' n_states = size(obj.states, 2); */
  /* 'SecondOrderFilter:30' y = zeros(1, n_states); */
  /* 'SecondOrderFilter:31' for i = 1:n_states */
  /* 'SecondOrderFilter:32' obj.states(:,i) = obj.sys.A*obj.states(:,i) + obj.sys.B*input(i); */
  a[0] = obj->FilterAccMeas.sys.A[0];
  a[1] = obj->FilterAccMeas.sys.A[1];
  a[2] = obj->FilterAccMeas.sys.A[2];
  a[3] = obj->FilterAccMeas.sys.A[3];
  b_idx_0 = obj->FilterAccMeas.states[0];
  b_idx_1 = obj->FilterAccMeas.states[1];
  b_a_idx_0 = obj->FilterAccMeas.sys.B[0];
  b_a_idx_1 = obj->FilterAccMeas.sys.B[1];
  obj->FilterAccMeas.states[0] = (real32_T)(a[0] * b_idx_0 + a[2] * b_idx_1) +
    (real32_T)b_a_idx_0 * *rtu_acc_z;
  obj->FilterAccMeas.states[1] = (real32_T)(a[1] * b_idx_0 + a[3] * b_idx_1) +
    (real32_T)b_a_idx_1 * *rtu_acc_z;

  /* 'SecondOrderFilter:33' y(i) = obj.sys.C*obj.states(:,i) + obj.sys.D*input(i); */
  b_a_idx_0 = obj->FilterAccMeas.sys.C[0];
  b_a_idx_1 = obj->FilterAccMeas.sys.C[1];
  b_idx_0 = obj->FilterAccMeas.states[0];
  b_idx_1 = obj->FilterAccMeas.states[1];
  c_a = obj->FilterAccMeas.sys.D;

  /* 'LoeDetector:2:54' act_meas_f = obj.FilterActuatorMeas.step(act_meas)'; */
  c_obj = &LoeDetector_DW.loeDetector.FilterActuatorMeas;

  /* 'SecondOrderFilter:29' n_states = size(obj.states, 2); */
  /* 'SecondOrderFilter:30' y = zeros(1, n_states); */
  /* 'SecondOrderFilter:31' for i = 1:n_states */
  for (j = 0; j < 4; j++) {
    /* 'SecondOrderFilter:32' obj.states(:,i) = obj.sys.A*obj.states(:,i) + obj.sys.B*input(i); */
    a[0] = c_obj->sys.A[0];
    a[1] = c_obj->sys.A[1];
    a[2] = c_obj->sys.A[2];
    a[3] = c_obj->sys.A[3];
    rates_f_dot_idx_0 = c_obj->states[j << 1];
    rates_f_dot_idx_1 = c_obj->states[(j << 1) + 1];
    e_a_idx_0 = c_obj->sys.B[0];
    e_a_idx_1 = c_obj->sys.B[1];
    c_obj->states[j << 1] = (real32_T)(a[0] * rates_f_dot_idx_0 + a[2] *
      rates_f_dot_idx_1) + (real32_T)e_a_idx_0 * rtb_rads[j];
    c_obj->states[1 + (j << 1)] = (real32_T)(a[1] * rates_f_dot_idx_0 + a[3] *
      rates_f_dot_idx_1) + (real32_T)e_a_idx_1 * rtb_rads[j];

    /* 'SecondOrderFilter:33' y(i) = obj.sys.C*obj.states(:,i) + obj.sys.D*input(i); */
    e_a_idx_0 = c_obj->sys.C[0];
    e_a_idx_1 = c_obj->sys.C[1];
    rates_f_dot_idx_0 = c_obj->states[j << 1];
    rates_f_dot_idx_1 = c_obj->states[(j << 1) + 1];
    t2 = c_obj->sys.D;
    act_meas_f[j] = (real32_T)(e_a_idx_0 * rates_f_dot_idx_0 + e_a_idx_1 *
      rates_f_dot_idx_1) + (real32_T)t2 * rtb_rads[j];
  }

  /* 'LoeDetector:2:57' rates_f_dot = obj.DerivRates.step(rates_meas_f); */
  /* 'Derivative:21' if obj.first */
  if (obj->DerivRates.first) {
    /* 'Derivative:22' y = obj.prev_value*0; */
    rates_f_dot_idx_0 = obj->DerivRates.prev_value[0];
    rates_f_dot_idx_1 = obj->DerivRates.prev_value[1];
    rates_f_dot_idx_0 *= 0.0;
    rates_f_dot_idx_1 *= 0.0;

    /* 'Derivative:23' obj.first = false; */
    obj->DerivRates.first = false;
  } else {
    /* 'Derivative:24' else */
    /* 'Derivative:25' y = (new_value - obj.prev_value)/obj.Ts; */
    rates_f_dot_idx_0 = (rates_meas_f[0] - obj->DerivRates.prev_value[0]) /
      obj->DerivRates.Ts;
    rates_f_dot_idx_1 = (rates_meas_f[1] - obj->DerivRates.prev_value[1]) /
      obj->DerivRates.Ts;
  }

  /* 'Derivative:27' obj.prev_value = new_value; */
  obj->DerivRates.prev_value[0] = rates_meas_f[0];
  obj->DerivRates.prev_value[1] = rates_meas_f[1];

  /* 'LoeDetector:2:62' z = [rates_f_dot([1 2]); acc_meas_f]; */
  /* 'LoeDetector:2:64' u = act_meas_f; */
  /* 'LoeDetector:2:67' log.rates_meas = rates_meas; */
  /* 'LoeDetector:2:68' log.acc_meas = acc_meas; */
  /* 'LoeDetector:2:70' log.rates_f_dot = rates_f_dot; */
  /* 'LoeDetector:2:71' log.acc_meas_f = acc_meas_f; */
  /* 'LoeDetector:2:73' log.z = z; */
  /* 'LoeDetector:2:74' log.u = u; */
  /* 'LoeDetector:2:81' obs_matrix = regressor_fun(obj.control_eff, act_meas_f); */
  e_a_idx_0 = LoeDetector_DW.loeDetector.control_eff[0];
  e_a_idx_1 = LoeDetector_DW.loeDetector.control_eff[1];
  in1_idx_2 = LoeDetector_DW.loeDetector.control_eff[2];

  /* 'regressor_fun:8' G_dp = in1(1,:); */
  /* 'regressor_fun:9' G_dq = in1(2,:); */
  /* 'regressor_fun:10' G_dVz = in1(3,:); */
  /* 'regressor_fun:11' w_1 = in2(1,:); */
  /* 'regressor_fun:12' w_2 = in2(2,:); */
  /* 'regressor_fun:13' w_3 = in2(3,:); */
  /* 'regressor_fun:14' w_4 = in2(4,:); */
  /* 'regressor_fun:15' t2 = w_1.^2; */
  t2 = act_meas_f[0] * act_meas_f[0];

  /* 'regressor_fun:16' t3 = w_2.^2; */
  t3 = act_meas_f[1] * act_meas_f[1];

  /* 'regressor_fun:17' t4 = w_3.^2; */
  t4 = act_meas_f[2] * act_meas_f[2];

  /* 'regressor_fun:18' t5 = w_4.^2; */
  t5 = act_meas_f[3] * act_meas_f[3];

  /* 'regressor_fun:19' regressor_fun_reduced = reshape([(G_dp.*t2)./1.0e6,(G_dq.*t2)./1.0e6,G_dVz.*t2.*(-1.0e-6),G_dp.*t3.*(-1.0e-6),(G_dq.*t3)./1.0e6,G_dVz.*t3.*(-1.0e-6),G_dp.*t4.*(-1.0e-6),G_dq.*t4.*(-1.0e-6),G_dVz.*t4.*(-1.0e-6),(G_dp.*t5)./1.0e6,G_dq.*t5.*(-1.0e-6),G_dVz.*t5.*(-1.0e-6)],[3,4]); */
  /* 'LoeDetector:2:84' [scaling_factor_mean, P_matrix] = ... */
  /* 'LoeDetector:2:85'                 obj.Kalman.step(z, obs_matrix); */
  rates_f_dot[0] = rates_f_dot_idx_0;
  rates_f_dot[1] = rates_f_dot_idx_1;
  rates_f_dot[2] = (real32_T)(b_a_idx_0 * b_idx_0 + b_a_idx_1 * b_idx_1) +
    (real32_T)c_a * *rtu_acc_z;
  in1[0] = e_a_idx_0 * t2 / 1.0E+6;
  in1[1] = e_a_idx_1 * t2 / 1.0E+6;
  in1[2] = in1_idx_2 * t2 * -1.0E-6;
  in1[3] = e_a_idx_0 * t3 * -1.0E-6;
  in1[4] = e_a_idx_1 * t3 / 1.0E+6;
  in1[5] = in1_idx_2 * t3 * -1.0E-6;
  in1[6] = e_a_idx_0 * t4 * -1.0E-6;
  in1[7] = e_a_idx_1 * t4 * -1.0E-6;
  in1[8] = in1_idx_2 * t4 * -1.0E-6;
  in1[9] = e_a_idx_0 * t5 / 1.0E+6;
  in1[10] = e_a_idx_1 * t5 * -1.0E-6;
  in1[11] = in1_idx_2 * t5 * -1.0E-6;
  LoeDetecto_KalmanEstimator_step(&LoeDetector_DW.loeDetector.Kalman,
    rates_f_dot, in1, a, d);

  /* 'LoeDetector:2:89' scaling_factor_cov = diag(P_matrix); */
  /* 'LoeDetector:2:91' log.scaling_factor_mean = scaling_factor_mean; */
  /* 'LoeDetector:2:92' log.scaling_factor_cov = scaling_factor_cov; */
  /* 'LoeDetector:2:96' [fail_P, fail_id] = LoeDetectorPkg.fail_diagnosis( ... */
  /* 'LoeDetector:2:97'                 scaling_factor_mean, ... */
  /* 'LoeDetector:2:98'                 scaling_factor_cov, ... */
  /* 'LoeDetector:2:99'                 obj.fail_diagnosis_params); */
  t2 = obj->fail_diagnosis_params.fdd_k_thres;
  c_a = obj->fail_diagnosis_params.fdd_fail_p_thres;

  /* 'fail_diagnosis:4' K_threshold = params.fdd_k_thres; */
  /* 'fail_diagnosis:5' K_prob_threshold = params.fdd_fail_p_thres; */
  /* 'fail_diagnosis:7' nK = length(K_means); */
  /* 'fail_diagnosis:9' fail_P = zeros(nK, 1); */
  /* 'fail_diagnosis:10' ok_P = zeros(nK, 1); */
  /* 'fail_diagnosis:13' if isempty(fail_id) */
  /* 'fail_diagnosis:17' for i = 1:nK */
  /* 'fail_diagnosis:18' K_mean = K_means(i); */
  /* 'fail_diagnosis:19' K_cov = K_covs(i); */
  /* 'fail_diagnosis:21' sigma = sqrt(abs(K_cov)); */
  t3 = std::sqrt(std::abs(d[0]));

  /* 'fail_diagnosis:24' fail_P(i) = normcdf(K_threshold, K_mean, sigma); */
  act_meas_f[0] = normcdf_RuozKmPV(t2, a[0], t3);

  /* 'fail_diagnosis:25' ok_P(i) = 1 - normcdf(K_threshold, K_mean, sigma); */
  ok_P[0] = 1.0 - normcdf_RuozKmPV(t2, a[0], t3);

  /* 'fail_diagnosis:18' K_mean = K_means(i); */
  /* 'fail_diagnosis:19' K_cov = K_covs(i); */
  /* 'fail_diagnosis:21' sigma = sqrt(abs(K_cov)); */
  t3 = std::sqrt(std::abs(d[5]));

  /* 'fail_diagnosis:24' fail_P(i) = normcdf(K_threshold, K_mean, sigma); */
  act_meas_f[1] = normcdf_RuozKmPV(t2, a[1], t3);

  /* 'fail_diagnosis:25' ok_P(i) = 1 - normcdf(K_threshold, K_mean, sigma); */
  ok_P[1] = 1.0 - normcdf_RuozKmPV(t2, a[1], t3);

  /* 'fail_diagnosis:18' K_mean = K_means(i); */
  /* 'fail_diagnosis:19' K_cov = K_covs(i); */
  /* 'fail_diagnosis:21' sigma = sqrt(abs(K_cov)); */
  t3 = std::sqrt(std::abs(d[10]));

  /* 'fail_diagnosis:24' fail_P(i) = normcdf(K_threshold, K_mean, sigma); */
  act_meas_f[2] = normcdf_RuozKmPV(t2, a[2], t3);

  /* 'fail_diagnosis:25' ok_P(i) = 1 - normcdf(K_threshold, K_mean, sigma); */
  ok_P[2] = 1.0 - normcdf_RuozKmPV(t2, a[2], t3);

  /* 'fail_diagnosis:18' K_mean = K_means(i); */
  /* 'fail_diagnosis:19' K_cov = K_covs(i); */
  /* 'fail_diagnosis:21' sigma = sqrt(abs(K_cov)); */
  t3 = std::sqrt(std::abs(d[15]));

  /* 'fail_diagnosis:24' fail_P(i) = normcdf(K_threshold, K_mean, sigma); */
  act_meas_f[3] = normcdf_RuozKmPV(t2, a[3], t3);

  /* 'fail_diagnosis:25' ok_P(i) = 1 - normcdf(K_threshold, K_mean, sigma); */
  ok_P[3] = 1.0 - normcdf_RuozKmPV(t2, a[3], t3);

  /* 'fail_diagnosis:29' [~, max_fail_indices] = max(fail_P); */
  if (!rtIsNaN(act_meas_f[0])) {
    j = 0;
  } else {
    j = -1;
    b_idx_0_tmp = 2;
    exitg1 = false;
    while ((!exitg1) && (b_idx_0_tmp < 5)) {
      if (!rtIsNaN(act_meas_f[b_idx_0_tmp - 1])) {
        j = b_idx_0_tmp - 1;
        exitg1 = true;
      } else {
        b_idx_0_tmp++;
      }
    }
  }

  if (j + 1 == 0) {
    j = 0;
  } else {
    t2 = act_meas_f[j];
    for (b_idx_0_tmp = j + 1; b_idx_0_tmp + 1 < 5; b_idx_0_tmp++) {
      if (t2 < act_meas_f[b_idx_0_tmp]) {
        t2 = act_meas_f[b_idx_0_tmp];
        j = b_idx_0_tmp;
      }
    }
  }

  /* 'fail_diagnosis:29' ~ */
  /* 'fail_diagnosis:31' if (fail_id == 0 || fail_P(fail_id) < fail_P(max_fail_indices)) ... */
  /* 'fail_diagnosis:32'         && fail_P(max_fail_indices) > K_prob_threshold */
  if (((LoeDetector_DW.fail_id == 0.0) || (act_meas_f[(int32_T)
        LoeDetector_DW.fail_id - 1] < act_meas_f[j])) && (act_meas_f[j] > c_a))
  {
    /* 'fail_diagnosis:33' fail_id = max_fail_indices(1); */
    LoeDetector_DW.fail_id = j + 1;
  } else {
    if ((LoeDetector_DW.fail_id != 0.0) && (ok_P[(int32_T)LoeDetector_DW.fail_id
         - 1] > 0.9)) {
      /* 'fail_diagnosis:34' elseif fail_id ~= 0 && ok_P(fail_id) > 0.90 */
      /* 'fail_diagnosis:35' fail_id = 0; */
      LoeDetector_DW.fail_id = 0.0;
    }
  }

  /* 'fail_diagnosis:38' fail_id_out = int32(fail_id); */
  /* 'LoeDetector:2:101' log.fail_P = fail_P; */
  /* 'LoeDetector:2:102' log.fail_id = fail_id; */
  b_idx_0 = rt_roundd_snf(LoeDetector_DW.fail_id);
  if (b_idx_0 < 2.147483648E+9) {
    if (b_idx_0 >= -2.147483648E+9) {
      *rty_fail_id = (int32_T)b_idx_0;
    } else {
      *rty_fail_id = MIN_int32_T;
    }
  } else {
    *rty_fail_id = MAX_int32_T;
  }

  /* End of MATLAB Function: '<Root>/LoeDetector' */
}

/* Model initialize function */
void LoeDetectorModelClass::initialize()
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* states (dwork) */
  (void) memset((void *)&LoeDetector_DW, 0,
                sizeof(DW_LoeDetector_T));
}

/* Constructor */
LoeDetectorModelClass::LoeDetectorModelClass()
{
  /* Currently there is no constructor body generated.*/
}

/* Destructor */
LoeDetectorModelClass::~LoeDetectorModelClass()
{
  /* Currently there is no destructor body generated.*/
}

/* Real-Time Model get method */
RT_MODEL_LoeDetector_T * LoeDetectorModelClass::getRTM()
{
  return (&LoeDetector_M);
}

/* member function to initialize Real-Time model */
void LoeDetectorModelClass::initializeRTM()
{
  (void) memset((void *)((&LoeDetector_M)), 0,
                sizeof(RT_MODEL_LoeDetector_T));
}

/* member function to setup error status pointer */
void LoeDetectorModelClass::setErrorStatusPointer(const char_T **rt_errorStatus)
{
  rtmSetErrorStatusPointer(getRTM(), rt_errorStatus);
}
