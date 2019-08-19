/*
 * RateControl.cpp
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

#include "RateControl.h"
#include "RateControl_private.h"
#include "mrdivide_helper_aQOE0xcw.h"
#include "normcdf_9tjXH1DZ.h"
#include "pinv_uwVdyKpX.h"
#include "rt_roundd_snf.h"

/* Exported block parameters */
RateControlParamsType RateControlParams = {
  { 1.0, 1.0, -1.0, -1.0, 0.0, 0.0, -1.0, 0.0, -1.0, 1.0, 1.0, -1.0, 0.0, 0.0,
    1.0, 0.0, -1.0, -1.0, -1.0, -1.0, 0.0, 0.0, -1.0, 0.0, 1.0, -1.0, 1.0, -1.0,
    0.0, 0.0, 1.0, 0.0 },
  24.0F,
  24.0F,
  6.0F,
  170.0F,
  170.0F,
  -150.0F,
  -0.8F,
  8.0F,
  0.1,
  0.5,
  0.9,
  1.0
} ;                                    /* Variable: RateControlParams
                                        * Referenced by:
                                        *   '<Root>/MATLAB Function5'
                                        *   '<Root>/controlEffMatrix'
                                        *   '<S61>/Proportional Gain'
                                        *   '<S105>/Proportional Gain'
                                        *   '<S149>/Proportional Gain'
                                        */

/* Model step function */
void RateControlModelClass::step()
{
  /* local block i/o variables */
  real32_T rtb_est_w[4];
  real32_T rtb_est_accel_z;
  real32_T rtb_accel_z_f;
  real32_T rtb_w_filtered[4];
  real32_T rtb_MeasureOrEstimateRotorSpeed[4];
  real32_T rtb_rads[4];
  real32_T rtb_Minus[3];
  real32_T rtb_Diff_l[3];
  real32_T rows_multiplier[64];
  real32_T control_eff_matrix[32];
  int32_T j;
  real32_T K[4];
  real32_T fTr[4];
  real32_T K0[4];
  real32_T a1;
  real32_T sqrtA0overA1;
  real32_T sqrtA0timesA1;
  int32_T jmax;
  int32_T jj;
  int32_T ix;
  int32_T iy;
  int32_T b_ix;
  int32_T b_iy;
  int32_T f;
  int32_T ia;
  real_T ok_P[4];
  real32_T sigma;
  real32_T G[32];
  boolean_T fail_flag;
  real32_T fail_id_vec_data[2];
  real32_T G_pinv[16];
  int8_T i_up_data[4];
  boolean_T tf;
  int32_T exponent;
  boolean_T x[4];
  int8_T ii_data[4];
  real32_T fail_id_vec_data_0[2];
  real_T act_limit_rads;
  real_T sawtooth_signal;
  int32_T exponent_0;
  real32_T b_z1_data[2];
  real32_T b[36];
  real32_T gain[36];
  real32_T b_0[81];
  real32_T rtb_TSamp_pb;
  real32_T rtb_TSamp_j;
  real32_T rtb_TSamp_h;
  real32_T rtb_IntegralGain;
  real32_T rtb_IntegralGain_i;
  real32_T rtb_TmpSignalConversionAtSFunct[8];
  real32_T rtb_regressor[12];
  real32_T rtb_Product[16];
  int32_T b_tmp_data[2];
  int32_T b_data[2];
  real32_T b_1[36];
  real32_T gain_0[81];
  real32_T tmp[81];
  real32_T rtb_TSamp;
  real32_T rtb_TSamp_kv;
  real32_T rtb_TSamp_idx_0;
  real32_T rtb_TSamp_idx_1;
  real32_T rtb_TSamp_b_idx_0;
  real32_T rtb_TSamp_b_idx_1;
  real32_T rtb_TSamp_b_idx_2;
  real32_T rtb_TSamp_d_idx_0;
  real32_T rtb_TSamp_d_idx_1;
  real32_T u;
  real32_T b_tmp;
  real32_T b_tmp_0;
  int32_T gain_tmp;
  real32_T y_tmp_tmp;
  boolean_T exitg1;

  /* DiscreteStateSpace: '<Root>/H_est_rates' incorporates:
   *  Inport: '<Root>/rates'
   */
  {
    rtb_Minus[0] = (0.0385409F)*RateControl_DW.H_est_rates_DSTATE[0] +
      (0.0371529944F)*RateControl_DW.H_est_rates_DSTATE[1];
    rtb_Minus[1] = (0.0385409F)*RateControl_DW.H_est_rates_DSTATE[2] +
      (0.0371529944F)*RateControl_DW.H_est_rates_DSTATE[3];
    rtb_Minus[2] = (0.0385409F)*RateControl_DW.H_est_rates_DSTATE[4] +
      (0.0371529944F)*RateControl_DW.H_est_rates_DSTATE[5];
  }

  /* SampleTimeMath: '<S5>/TSamp'
   *
   * About '<S5>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp = rtb_Minus[0] * 500.0F;

  /* Sum: '<S5>/Diff' incorporates:
   *  UnitDelay: '<S5>/UD'
   */
  RateControl_DW.UD_DSTATE[0] = rtb_TSamp - RateControl_DW.UD_DSTATE[0];

  /* SampleTimeMath: '<S5>/TSamp'
   *
   * About '<S5>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp_idx_0 = rtb_TSamp;
  rtb_TSamp = rtb_Minus[1] * 500.0F;

  /* Sum: '<S5>/Diff' incorporates:
   *  UnitDelay: '<S5>/UD'
   */
  RateControl_DW.UD_DSTATE[1] = rtb_TSamp - RateControl_DW.UD_DSTATE[1];

  /* SampleTimeMath: '<S5>/TSamp'
   *
   * About '<S5>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp_idx_1 = rtb_TSamp;
  rtb_TSamp = rtb_Minus[2] * 500.0F;

  /* Sum: '<S5>/Diff' incorporates:
   *  UnitDelay: '<S5>/UD'
   */
  RateControl_DW.UD_DSTATE[2] = rtb_TSamp - RateControl_DW.UD_DSTATE[2];

  /* DiscreteStateSpace: '<Root>/H_est_actuators' */
  {
    rtb_est_w[0] = (0.0385409F)*RateControl_DW.H_est_actuators_DSTATE[0] +
      (0.0371529944F)*RateControl_DW.H_est_actuators_DSTATE[1];
    rtb_est_w[1] = (0.0385409F)*RateControl_DW.H_est_actuators_DSTATE[2] +
      (0.0371529944F)*RateControl_DW.H_est_actuators_DSTATE[3];
    rtb_est_w[2] = (0.0385409F)*RateControl_DW.H_est_actuators_DSTATE[4] +
      (0.0371529944F)*RateControl_DW.H_est_actuators_DSTATE[5];
    rtb_est_w[3] = (0.0385409F)*RateControl_DW.H_est_actuators_DSTATE[6] +
      (0.0371529944F)*RateControl_DW.H_est_actuators_DSTATE[7];
  }

  /* SampleTimeMath: '<S3>/TSamp'
   *
   * About '<S3>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp_kv = rtb_est_w[0] * 500.0F;

  /* Sum: '<S3>/Diff' incorporates:
   *  UnitDelay: '<S3>/UD'
   */
  RateControl_DW.UD_DSTATE_p[0] = rtb_TSamp_kv - RateControl_DW.UD_DSTATE_p[0];

  /* SampleTimeMath: '<S3>/TSamp'
   *
   * About '<S3>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp_b_idx_0 = rtb_TSamp_kv;
  rtb_TSamp_kv = rtb_est_w[1] * 500.0F;

  /* Sum: '<S3>/Diff' incorporates:
   *  UnitDelay: '<S3>/UD'
   */
  RateControl_DW.UD_DSTATE_p[1] = rtb_TSamp_kv - RateControl_DW.UD_DSTATE_p[1];

  /* SampleTimeMath: '<S3>/TSamp'
   *
   * About '<S3>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp_b_idx_1 = rtb_TSamp_kv;
  rtb_TSamp_kv = rtb_est_w[2] * 500.0F;

  /* Sum: '<S3>/Diff' incorporates:
   *  UnitDelay: '<S3>/UD'
   */
  RateControl_DW.UD_DSTATE_p[2] = rtb_TSamp_kv - RateControl_DW.UD_DSTATE_p[2];

  /* SampleTimeMath: '<S3>/TSamp'
   *
   * About '<S3>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp_b_idx_2 = rtb_TSamp_kv;
  rtb_TSamp_kv = rtb_est_w[3] * 500.0F;

  /* Sum: '<S3>/Diff' incorporates:
   *  UnitDelay: '<S3>/UD'
   */
  RateControl_DW.UD_DSTATE_p[3] = rtb_TSamp_kv - RateControl_DW.UD_DSTATE_p[3];

  /* DiscreteStateSpace: '<Root>/H_est_accel' incorporates:
   *  Inport: '<Root>/accel'
   */
  {
    rtb_est_accel_z = (0.0385409F)*RateControl_DW.H_est_accel_DSTATE[0] +
      (0.0371529944F)*RateControl_DW.H_est_accel_DSTATE[1];
  }

  /* Outputs for Enabled SubSystem: '<S9>/Correct1' incorporates:
   *  EnablePort: '<S22>/Enable'
   */
  /* MATLAB Function: '<S22>/Correct' incorporates:
   *  Constant: '<S9>/R1'
   *  DataStoreRead: '<S22>/Data Store ReadP'
   *  DataStoreRead: '<S22>/Data Store ReadX'
   *  MATLAB Function: '<Root>/MATLAB Function8'
   *  SignalConversion: '<S25>/TmpSignal ConversionAt SFunction Inport5'
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
  /* 'RateControl_KF_test_MeasurementJacabionFcn:8' G_a = in1(4,:); */
  /* 'RateControl_KF_test_MeasurementJacabionFcn:9' G_p = in1(1,:); */
  /* 'RateControl_KF_test_MeasurementJacabionFcn:10' G_q = in1(2,:); */
  /* 'RateControl_KF_test_MeasurementJacabionFcn:11' G_r = in1(3,:); */
  /* 'RateControl_KF_test_MeasurementJacabionFcn:12' k_1 = in1(6,:); */
  /* 'RateControl_KF_test_MeasurementJacabionFcn:13' k_2 = in1(7,:); */
  /* 'RateControl_KF_test_MeasurementJacabionFcn:14' k_3 = in1(8,:); */
  /* 'RateControl_KF_test_MeasurementJacabionFcn:15' k_4 = in1(9,:); */
  /* 'RateControl_KF_test_MeasurementJacabionFcn:16' w1 = in2(1); */
  /* 'RateControl_KF_test_MeasurementJacabionFcn:17' w2 = in2(2); */
  /* 'RateControl_KF_test_MeasurementJacabionFcn:18' w3 = in2(3); */
  /* 'RateControl_KF_test_MeasurementJacabionFcn:19' w4 = in2(4); */
  /* 'RateControl_KF_test_MeasurementJacabionFcn:20' w_dot1 = in2(5); */
  /* 'RateControl_KF_test_MeasurementJacabionFcn:21' w_dot2 = in2(6); */
  /* 'RateControl_KF_test_MeasurementJacabionFcn:22' w_dot3 = in2(7); */
  /* 'RateControl_KF_test_MeasurementJacabionFcn:23' w_dot4 = in2(8); */
  /* 'RateControl_KF_test_MeasurementJacabionFcn:24' dhdy = reshape([(k_1.*w1.^2)./1.0e+6-(k_2.*w2.^2)./1.0e+6-(k_3.*w3.^2)./1.0e+6+(k_4.*w4.^2)./1.0e+6,0.0,0.0,0.0,0.0,(k_1.*w1.^2)./1.0e+6+(k_2.*w2.^2)./1.0e+6-(k_3.*w3.^2)./1.0e+6-(k_4.*w4.^2)./1.0e+6,0.0,0.0,0.0,0.0,(k_1.*w1.^2)./1.0e+6-(k_2.*w2.^2)./1.0e+6+(k_3.*w3.^2)./1.0e+6-(k_4.*w4.^2)./1.0e+6,0.0,0.0,0.0,0.0,k_1.*w1.^2.*(-1.0e-6)-(k_2.*w2.^2)./1.0e+6-(k_3.*w3.^2)./1.0e+6-(k_4.*w4.^2)./1.0e+6,0.0,0.0,w_dot1./1.0e+3-w_dot2./1.0e+3+w_dot3./1.0e+3-w_dot4./1.0e+3,0.0,(G_p.*w1.^2)./1.0e+6,(G_q.*w1.^2)./1.0e+6,(G_r.*w1.^2)./1.0e+6,G_a.*w1.^2.*(-1.0e-6),G_p.*w2.^2.*(-1.0e-6),(G_q.*w2.^2)./1.0e+6,G_r.*w2.^2.*(-1.0e-6),G_a.*w2.^2.*(-1.0e-6),G_p.*w3.^2.*(-1.0e-6),G_q.*w3.^2.*(-1.0e-6),(G_r.*w3.^2)./1.0e+6,G_a.*w3.^2.*(-1.0e-6),(G_p.*w4.^2)./1.0e+6,G_q.*w4.^2.*(-1.0e-6),G_r.*w4.^2.*(-1.0e-6),G_a.*w4.^2.*(-1.0e-6)],[4,9]); */
  a1 = rtb_est_w[0] * rtb_est_w[0];
  sigma = a1 * RateControl_DW.x[5];
  rtb_IntegralGain = sigma / 1.0E+6F;
  sqrtA0overA1 = rtb_est_w[1] * rtb_est_w[1];
  rtb_IntegralGain_i = sqrtA0overA1 * RateControl_DW.x[6] / 1.0E+6F;
  sqrtA0timesA1 = rtb_est_w[2] * rtb_est_w[2];
  b_tmp = sqrtA0timesA1 * RateControl_DW.x[7] / 1.0E+6F;
  rtb_TSamp_pb = rtb_est_w[3] * rtb_est_w[3];
  b_tmp_0 = rtb_TSamp_pb * RateControl_DW.x[8] / 1.0E+6F;
  rtb_TSamp_j = rtb_IntegralGain - rtb_IntegralGain_i;
  b[0] = (rtb_TSamp_j - b_tmp) + b_tmp_0;
  b[1] = 0.0F;
  b[2] = 0.0F;
  b[3] = 0.0F;
  b[4] = 0.0F;
  b[5] = ((rtb_IntegralGain + rtb_IntegralGain_i) - b_tmp) - b_tmp_0;
  b[6] = 0.0F;
  b[7] = 0.0F;
  b[8] = 0.0F;
  b[9] = 0.0F;
  b[10] = (rtb_TSamp_j + b_tmp) - b_tmp_0;
  b[11] = 0.0F;
  b[12] = 0.0F;
  b[13] = 0.0F;
  b[14] = 0.0F;
  b[15] = ((sigma * -1.0E-6F - rtb_IntegralGain_i) - b_tmp) - b_tmp_0;
  b[16] = 0.0F;
  b[17] = 0.0F;
  b[18] = ((RateControl_DW.UD_DSTATE_p[0] / 1000.0F -
            RateControl_DW.UD_DSTATE_p[1] / 1000.0F) +
           RateControl_DW.UD_DSTATE_p[2] / 1000.0F) -
    RateControl_DW.UD_DSTATE_p[3] / 1000.0F;
  b[19] = 0.0F;
  b[20] = a1 * RateControl_DW.x[0] / 1.0E+6F;
  b[21] = a1 * RateControl_DW.x[1] / 1.0E+6F;
  b[22] = a1 * RateControl_DW.x[2] / 1.0E+6F;
  b[23] = a1 * RateControl_DW.x[3] * -1.0E-6F;
  b[24] = sqrtA0overA1 * RateControl_DW.x[0] * -1.0E-6F;
  b[25] = sqrtA0overA1 * RateControl_DW.x[1] / 1.0E+6F;
  b[26] = sqrtA0overA1 * RateControl_DW.x[2] * -1.0E-6F;
  b[27] = sqrtA0overA1 * RateControl_DW.x[3] * -1.0E-6F;
  b[28] = sqrtA0timesA1 * RateControl_DW.x[0] * -1.0E-6F;
  b[29] = sqrtA0timesA1 * RateControl_DW.x[1] * -1.0E-6F;
  b[30] = sqrtA0timesA1 * RateControl_DW.x[2] / 1.0E+6F;
  b[31] = sqrtA0timesA1 * RateControl_DW.x[3] * -1.0E-6F;
  b[32] = rtb_TSamp_pb * RateControl_DW.x[0] / 1.0E+6F;
  b[33] = rtb_TSamp_pb * RateControl_DW.x[1] * -1.0E-6F;
  b[34] = rtb_TSamp_pb * RateControl_DW.x[2] * -1.0E-6F;
  b[35] = rtb_TSamp_pb * RateControl_DW.x[3] * -1.0E-6F;

  /* 'RateControl_KF_test_MeasurementFcn:8' G_a = in1(4,:); */
  /* 'RateControl_KF_test_MeasurementFcn:9' G_dr = in1(5,:); */
  /* 'RateControl_KF_test_MeasurementFcn:10' G_p = in1(1,:); */
  /* 'RateControl_KF_test_MeasurementFcn:11' G_q = in1(2,:); */
  /* 'RateControl_KF_test_MeasurementFcn:12' G_r = in1(3,:); */
  /* 'RateControl_KF_test_MeasurementFcn:13' k_1 = in1(6,:); */
  /* 'RateControl_KF_test_MeasurementFcn:14' k_2 = in1(7,:); */
  /* 'RateControl_KF_test_MeasurementFcn:15' k_3 = in1(8,:); */
  /* 'RateControl_KF_test_MeasurementFcn:16' k_4 = in1(9,:); */
  /* 'RateControl_KF_test_MeasurementFcn:17' w1 = in2(1); */
  /* 'RateControl_KF_test_MeasurementFcn:18' w2 = in2(2); */
  /* 'RateControl_KF_test_MeasurementFcn:19' w3 = in2(3); */
  /* 'RateControl_KF_test_MeasurementFcn:20' w4 = in2(4); */
  /* 'RateControl_KF_test_MeasurementFcn:21' w_dot1 = in2(5); */
  /* 'RateControl_KF_test_MeasurementFcn:22' w_dot2 = in2(6); */
  /* 'RateControl_KF_test_MeasurementFcn:23' w_dot3 = in2(7); */
  /* 'RateControl_KF_test_MeasurementFcn:24' w_dot4 = in2(8); */
  /* 'RateControl_KF_test_MeasurementFcn:25' y = [(G_p.*k_1.*w1.^2)./1.0e+6-(G_p.*k_2.*w2.^2)./1.0e+6-(G_p.*k_3.*w3.^2)./1.0e+6+(G_p.*k_4.*w4.^2)./1.0e+6;(G_q.*k_1.*w1.^2)./1.0e+6+(G_q.*k_2.*w2.^2)./1.0e+6-(G_q.*k_3.*w3.^2)./1.0e+6-(G_q.*k_4.*w4.^2)./1.0e+6;(G_dr.*w_dot1)./1.0e+3-(G_dr.*w_dot2)./1.0e+3+(G_dr.*w_dot3)./1.0e+3-(G_dr.*w_dot4)./1.0e+3+(G_r.*k_1.*w1.^2)./1.0e+6-(G_r.*k_2.*w2.^2)./1.0e+6+(G_r.*k_3.*w3.^2)./1.0e+6-(G_r.*k_4.*w4.^2)./1.0e+6;G_a.*k_1.*w1.^2.*(-1.0e-6)-(G_a.*k_2.*w2.^2)./1.0e+6-(G_a.*k_3.*w3.^2)./1.0e+6-(G_a.*k_4.*w4.^2)./1.0e+6]; */
  for (j = 0; j < 9; j++) {
    for (jmax = 0; jmax < 4; jmax++) {
      jj = j + 9 * jmax;
      gain[jj] = 0.0F;
      for (gain_tmp = 0; gain_tmp < 9; gain_tmp++) {
        gain[jj] += RateControl_DW.P[9 * gain_tmp + j] * b[(gain_tmp << 2) +
          jmax];
      }
    }
  }

  for (j = 0; j < 4; j++) {
    for (jmax = 0; jmax < 9; jmax++) {
      jj = j + (jmax << 2);
      b_1[jj] = 0.0F;
      for (gain_tmp = 0; gain_tmp < 9; gain_tmp++) {
        b_1[jj] += b[(gain_tmp << 2) + j] * RateControl_DW.P[9 * jmax + gain_tmp];
      }
    }

    for (jmax = 0; jmax < 4; jmax++) {
      sigma = 0.0F;
      for (gain_tmp = 0; gain_tmp < 9; gain_tmp++) {
        jj = gain_tmp << 2;
        sigma += b_1[jj + j] * b[jj + jmax];
      }

      jj = (jmax << 2) + j;
      G_pinv[jj] = rtCP_R1_Value[jj] + sigma;
    }
  }

  mrdivide_helper_aQOE0xcw(gain, G_pinv);
  for (j = 0; j < 9; j++) {
    for (jmax = 0; jmax < 9; jmax++) {
      jj = j + 9 * jmax;
      gain_0[jj] = 0.0F;
      gain_tmp = jmax << 2;
      gain_0[jj] += b[gain_tmp] * gain[j];
      gain_0[jj] += b[gain_tmp + 1] * gain[j + 9];
      gain_0[jj] += b[gain_tmp + 2] * gain[j + 18];
      gain_0[jj] += b[gain_tmp + 3] * gain[j + 27];
    }

    for (jmax = 0; jmax < 9; jmax++) {
      sigma = 0.0F;
      for (gain_tmp = 0; gain_tmp < 9; gain_tmp++) {
        sigma += gain_0[9 * gain_tmp + j] * RateControl_DW.P[9 * jmax + gain_tmp];
      }

      gain_tmp = 9 * jmax + j;
      tmp[gain_tmp] = RateControl_DW.P[gain_tmp] - sigma;
    }
  }

  /* DataStoreWrite: '<S22>/Data Store WriteP' */
  memcpy(&RateControl_DW.P[0], &tmp[0], 81U * sizeof(real32_T));

  /* MATLAB Function: '<S22>/Correct' incorporates:
   *  DataStoreRead: '<S22>/Data Store ReadX'
   *  SignalConversion: '<S25>/TmpSignal ConversionAt SFunction Inport3'
   *  SignalConversion: '<S25>/TmpSignal ConversionAt SFunction Inport5'
   */
  sigma = RateControl_DW.UD_DSTATE[0] - (((RateControl_DW.x[0] *
    RateControl_DW.x[5] * a1 / 1.0E+6F - RateControl_DW.x[0] * RateControl_DW.x
    [6] * sqrtA0overA1 / 1.0E+6F) - RateControl_DW.x[0] * RateControl_DW.x[7] *
    sqrtA0timesA1 / 1.0E+6F) + RateControl_DW.x[0] * RateControl_DW.x[8] *
    rtb_TSamp_pb / 1.0E+6F);
  rtb_IntegralGain = RateControl_DW.UD_DSTATE[1] - (((RateControl_DW.x[1] *
    RateControl_DW.x[5] * a1 / 1.0E+6F + RateControl_DW.x[1] * RateControl_DW.x
    [6] * sqrtA0overA1 / 1.0E+6F) - RateControl_DW.x[1] * RateControl_DW.x[7] *
    sqrtA0timesA1 / 1.0E+6F) - RateControl_DW.x[1] * RateControl_DW.x[8] *
    rtb_TSamp_pb / 1.0E+6F);
  rtb_IntegralGain_i = RateControl_DW.UD_DSTATE[2] - (((((((RateControl_DW.x[4] *
    RateControl_DW.UD_DSTATE_p[0] / 1000.0F - RateControl_DW.x[4] *
    RateControl_DW.UD_DSTATE_p[1] / 1000.0F) + RateControl_DW.x[4] *
    RateControl_DW.UD_DSTATE_p[2] / 1000.0F) - RateControl_DW.x[4] *
    RateControl_DW.UD_DSTATE_p[3] / 1000.0F) + RateControl_DW.x[2] *
    RateControl_DW.x[5] * a1 / 1.0E+6F) - RateControl_DW.x[2] *
    RateControl_DW.x[6] * sqrtA0overA1 / 1.0E+6F) + RateControl_DW.x[2] *
    RateControl_DW.x[7] * sqrtA0timesA1 / 1.0E+6F) - RateControl_DW.x[2] *
    RateControl_DW.x[8] * rtb_TSamp_pb / 1.0E+6F);
  b_tmp = rtb_est_accel_z - (((RateControl_DW.x[3] * RateControl_DW.x[5] * a1 *
    -1.0E-6F - RateControl_DW.x[3] * RateControl_DW.x[6] * sqrtA0overA1 /
    1.0E+6F) - RateControl_DW.x[3] * RateControl_DW.x[7] * sqrtA0timesA1 /
    1.0E+6F) - RateControl_DW.x[3] * RateControl_DW.x[8] * rtb_TSamp_pb /
    1.0E+6F);

  /* Outputs for Atomic SubSystem: '<S9>/Output' */
  for (jj = 0; jj < 9; jj++) {
    /* DataStoreWrite: '<S22>/Data Store WriteX' incorporates:
     *  DataStoreRead: '<S22>/Data Store ReadX'
     *  MATLAB Function: '<S22>/Correct'
     */
    RateControl_DW.x[jj] += ((gain[jj + 9] * rtb_IntegralGain + gain[jj] * sigma)
      + gain[jj + 18] * rtb_IntegralGain_i) + gain[jj + 27] * b_tmp;

    /* Outport: '<Root>/kalman_state' incorporates:
     *  DataStoreRead: '<S23>/Data Store Read'
     */
    RateControl_Y.kalman_state[jj] = RateControl_DW.x[jj];
  }

  /* End of Outputs for SubSystem: '<S9>/Output' */
  /* End of Outputs for SubSystem: '<S9>/Correct1' */

  /* Outputs for Atomic SubSystem: '<S9>/Predict' */
  /* MATLAB Function: '<S24>/Predict' incorporates:
   *  DataStoreRead: '<S24>/Data Store ReadP'
   *  DataStoreRead: '<S24>/Data Store ReadX'
   */
  /* :  if pS.IsSimulinkFcn */
  /* :  else */
  /* :  StateTransitionFcnH = str2func(pS.FcnName); */
  /* :  if pS.HasJacobian */
  /* :  StateTransitionJacobianFcnH = str2func(pS.JacobianFcnName); */
  /* :  switch pS.NumberOfExtraArgumentInports */
  /* :  case 0 */
  /* :  extraArgs = {}; */
  /* :  xNew = zeros(size(x),'like',x); */
  /* :  if pS.HasAdditiveNoise */
  /* :  [xNew,P] = matlabshared.tracking.internal.EKFPredictorAdditive.predict(... */
  /* :          Q,x,P,StateTransitionFcnH,StateTransitionJacobianFcnH,extraArgs{:}); */
  /* 'RateControl_KF_test_StateTransitionJacobianFcn:8' G_a = in1(4,:); */
  /* 'RateControl_KF_test_StateTransitionJacobianFcn:9' G_dr = in1(5,:); */
  /* 'RateControl_KF_test_StateTransitionJacobianFcn:10' G_p = in1(1,:); */
  /* 'RateControl_KF_test_StateTransitionJacobianFcn:11' G_q = in1(2,:); */
  /* 'RateControl_KF_test_StateTransitionJacobianFcn:12' G_r = in1(3,:); */
  /* 'RateControl_KF_test_StateTransitionJacobianFcn:13' k_1 = in1(6,:); */
  /* 'RateControl_KF_test_StateTransitionJacobianFcn:14' k_2 = in1(7,:); */
  /* 'RateControl_KF_test_StateTransitionJacobianFcn:15' k_3 = in1(8,:); */
  /* 'RateControl_KF_test_StateTransitionJacobianFcn:16' k_4 = in1(9,:); */
  /* 'RateControl_KF_test_StateTransitionJacobianFcn:17' dfdx = reshape([sign(G_p-5.0e+1)./4.0-(sign(G_p./2.0+abs(G_p-5.0e+1)./2.0-1.25e+2).*(sign(G_p-5.0e+1)./2.0+1.0./2.0))./2.0+1.0./4.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,sign(G_q-5.0e+1)./4.0-(sign(G_q./2.0+abs(G_q-5.0e+1)./2.0-1.25e+2).*(sign(G_q-5.0e+1)./2.0+1.0./2.0))./2.0+1.0./4.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,sign(G_r-1.0)./4.0-(sign(G_r./2.0+abs(G_r-1.0)./2.0-9.0./2.0).*(sign(G_r-1.0)./2.0+1.0./2.0))./2.0+1.0./4.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,sign(G_a-3.0)./4.0-(sign(G_a./2.0+abs(G_a-3.0)./2.0-9.0./2.0).*(sign(G_a-3.0)./2.0+1.0./2.0))./2.0+1.0./4.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,sign(G_dr)./4.0-(sign(G_dr./2.0+abs(G_dr)./2.0-4.0).*(sign(G_dr)./2.0+1.0./2.0))./2.0+1.0./4.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,sign(k_1)./abs(k_1./4.0+k_2./4.0+k_3./4.0+k_4./4.0)-(abs(k_1).*1.0./abs(k_1./4.0+k_2./4.0+k_3./4.0+k_4./4.0).^2.*sign(k_1./4.0+k_2./4.0+k_3./4.0+k_4./4.0))./4.0,abs(k_2).*1.0./abs(k_1./4.0+k_2./4.0+k_3./4.0+k_4./4.0).^2.*sign(k_1./4.0+k_2./4.0+k_3./4.0+k_4./4.0).*(-1.0./4.0),abs(k_3).*1.0./abs(k_1./4.0+k_2./4.0+k_3./4.0+k_4./4.0).^2.*sign(k_1./4.0+k_2./4.0+k_3./4.0+k_4./4.0).*(-1.0./4.0),abs(k_4).*1.0./abs(k_1./4.0+k_2./4.0+k_3./4.0+k_4./4.0).^2.*sign(k_1./4.0+k_2./4.0+k_3./4.0+k_4./4.0).*(-1.0./4.0),0.0,0.0,0.0,0.0,0.0,abs(k_1).*1.0./abs(k_1./4.0+k_2./4.0+k_3./4.0+k_4./4.0).^2.*sign(k_1./4.0+k_2./4.0+k_3./4.0+k_4./4.0).*(-1.0./4.0),sign(k_2)./abs(k_1./4.0+k_2./4.0+k_3./4.0+k_4./4.0)-(abs(k_2).*1.0./abs(k_1./4.0+k_2./4.0+k_3./4.0+k_4./4.0).^2.*sign(k_1./4.0+k_2./4.0+k_3./4.0+k_4./4.0))./4.0,abs(k_3).*1.0./abs(k_1./4.0+k_2./4.0+k_3./4.0+k_4./4.0).^2.*sign(k_1./4.0+k_2./4.0+k_3./4.0+k_4./4.0).*(-1.0./4.0),abs(k_4).*1.0./abs(k_1./4.0+k_2./4.0+k_3./4.0+k_4./4.0).^2.*sign(k_1./4.0+k_2./4.0+k_3./4.0+k_4./4.0).*(-1.0./4.0),0.0,0.0,0.0,0.0,0.0,abs(k_1).*1.0./abs(k_1./4.0+k_2./4.0+k_3./4.0+k_4./4.0).^2.*sign(k_1./4.0+k_2./4.0+k_3./4.0+k_4./4.0).*(-1.0./4.0),abs(k_2).*1.0./abs(k_1./4.0+k_2./4.0+k_3./4.0+k_4./4.0).^2.*sign(k_1./4.0+k_2./4.0+k_3./4.0+k_4./4.0).*(-1.0./4.0),sign(k_3)./abs(k_1./4.0+k_2./4.0+k_3./4.0+k_4./4.0)-(abs(k_3).*1.0./abs(k_1./4.0+k_2./4.0+k_3./4.0+k_4./4.0).^2.*sign(k_1./4.0+k_2./4.0+k_3./4.0+k_4./4.0))./4.0,abs(k_4).*1.0./abs(k_1./4.0+k_2./4.0+k_3./4.0+k_4./4.0).^2.*sign(k_1./4.0+k_2./4.0+k_3./4.0+k_4./4.0).*(-1.0./4.0),0.0,0.0,0.0,0.0,0.0,abs(k_1).*1.0./abs(k_1./4.0+k_2./4.0+k_3./4.0+k_4./4.0).^2.*sign(k_1./4.0+k_2./4.0+k_3./4.0+k_4./4.0).*(-1.0./4.0),abs(k_2).*1.0./abs(k_1./4.0+k_2./4.0+k_3./4.0+k_4./4.0).^2.*sign(k_1./4.0+k_2./4.0+k_3./4.0+k_4./4.0).*(-1.0./4.0),abs(k_3).*1.0./abs(k_1./4.0+k_2./4.0+k_3./4.0+k_4./4.0).^2.*sign(k_1./4.0+k_2./4.0+k_3./4.0+k_4./4.0).*(-1.0./4.0),sign(k_4)./abs(k_1./4.0+k_2./4.0+k_3./4.0+k_4./4.0)-(abs(k_4).*1.0./abs(k_1./4.0+k_2./4.0+k_3./4.0+k_4./4.0).^2.*sign(k_1./4.0+k_2./4.0+k_3./4.0+k_4./4.0))./4.0],[9,9]); */
  y_tmp_tmp = ((RateControl_DW.x[5] / 4.0F + RateControl_DW.x[6] / 4.0F) +
               RateControl_DW.x[7] / 4.0F) + RateControl_DW.x[8] / 4.0F;
  rtb_TSamp_d_idx_0 = std::abs(y_tmp_tmp);
  rtb_TSamp_j = std::abs(RateControl_DW.x[0] - 50.0F);
  rtb_TSamp_h = (rtb_TSamp_j / 2.0F + RateControl_DW.x[0] / 2.0F) - 125.0F;
  rtb_TSamp_d_idx_1 = (std::abs(RateControl_DW.x[1] - 50.0F) / 2.0F +
                       RateControl_DW.x[1] / 2.0F) - 125.0F;
  rtb_IntegralGain_i = (std::abs(RateControl_DW.x[2] - 1.0F) / 2.0F +
                        RateControl_DW.x[2] / 2.0F) - 4.5F;
  b_tmp = (std::abs(RateControl_DW.x[3] - 3.0F) / 2.0F + RateControl_DW.x[3] /
           2.0F) - 4.5F;
  b_tmp_0 = (RateControl_DW.x[4] / 2.0F + std::abs(RateControl_DW.x[4]) / 2.0F)
    - 4.0F;
  if (RateControl_DW.x[0] - 50.0F < 0.0F) {
    sigma = -1.0F;
  } else if (RateControl_DW.x[0] - 50.0F > 0.0F) {
    sigma = 1.0F;
  } else if (RateControl_DW.x[0] - 50.0F == 0.0F) {
    sigma = 0.0F;
  } else {
    sigma = (rtNaNF);
  }

  if (rtb_TSamp_h < 0.0F) {
    u = -1.0F;
  } else if (rtb_TSamp_h > 0.0F) {
    u = 1.0F;
  } else if (rtb_TSamp_h == 0.0F) {
    u = 0.0F;
  } else {
    u = (rtNaNF);
  }

  if (RateControl_DW.x[0] - 50.0F < 0.0F) {
    rtb_IntegralGain = -1.0F;
  } else if (RateControl_DW.x[0] - 50.0F > 0.0F) {
    rtb_IntegralGain = 1.0F;
  } else if (RateControl_DW.x[0] - 50.0F == 0.0F) {
    rtb_IntegralGain = 0.0F;
  } else {
    rtb_IntegralGain = (rtNaNF);
  }

  b_0[0] = (sigma / 4.0F - (rtb_IntegralGain / 2.0F + 0.5F) * u / 2.0F) + 0.25F;
  b_0[1] = 0.0F;
  b_0[2] = 0.0F;
  b_0[3] = 0.0F;
  b_0[4] = 0.0F;
  b_0[5] = 0.0F;
  b_0[6] = 0.0F;
  b_0[7] = 0.0F;
  b_0[8] = 0.0F;
  b_0[9] = 0.0F;
  if (RateControl_DW.x[1] - 50.0F < 0.0F) {
    sigma = -1.0F;
  } else if (RateControl_DW.x[1] - 50.0F > 0.0F) {
    sigma = 1.0F;
  } else if (RateControl_DW.x[1] - 50.0F == 0.0F) {
    sigma = 0.0F;
  } else {
    sigma = (rtNaNF);
  }

  if (rtb_TSamp_d_idx_1 < 0.0F) {
    rtb_TSamp_d_idx_1 = -1.0F;
  } else if (rtb_TSamp_d_idx_1 > 0.0F) {
    rtb_TSamp_d_idx_1 = 1.0F;
  } else if (rtb_TSamp_d_idx_1 == 0.0F) {
    rtb_TSamp_d_idx_1 = 0.0F;
  } else {
    rtb_TSamp_d_idx_1 = (rtNaNF);
  }

  if (RateControl_DW.x[1] - 50.0F < 0.0F) {
    rtb_IntegralGain = -1.0F;
  } else if (RateControl_DW.x[1] - 50.0F > 0.0F) {
    rtb_IntegralGain = 1.0F;
  } else if (RateControl_DW.x[1] - 50.0F == 0.0F) {
    rtb_IntegralGain = 0.0F;
  } else {
    rtb_IntegralGain = (rtNaNF);
  }

  b_0[10] = (sigma / 4.0F - (rtb_IntegralGain / 2.0F + 0.5F) * rtb_TSamp_d_idx_1
             / 2.0F) + 0.25F;
  b_0[11] = 0.0F;
  b_0[12] = 0.0F;
  b_0[13] = 0.0F;
  b_0[14] = 0.0F;
  b_0[15] = 0.0F;
  b_0[16] = 0.0F;
  b_0[17] = 0.0F;
  b_0[18] = 0.0F;
  b_0[19] = 0.0F;
  if (RateControl_DW.x[2] - 1.0F < 0.0F) {
    sigma = -1.0F;
  } else if (RateControl_DW.x[2] - 1.0F > 0.0F) {
    sigma = 1.0F;
  } else if (RateControl_DW.x[2] - 1.0F == 0.0F) {
    sigma = 0.0F;
  } else {
    sigma = (rtNaNF);
  }

  if (rtb_IntegralGain_i < 0.0F) {
    rtb_TSamp_d_idx_1 = -1.0F;
  } else if (rtb_IntegralGain_i > 0.0F) {
    rtb_TSamp_d_idx_1 = 1.0F;
  } else if (rtb_IntegralGain_i == 0.0F) {
    rtb_TSamp_d_idx_1 = 0.0F;
  } else {
    rtb_TSamp_d_idx_1 = (rtNaNF);
  }

  if (RateControl_DW.x[2] - 1.0F < 0.0F) {
    rtb_IntegralGain = -1.0F;
  } else if (RateControl_DW.x[2] - 1.0F > 0.0F) {
    rtb_IntegralGain = 1.0F;
  } else if (RateControl_DW.x[2] - 1.0F == 0.0F) {
    rtb_IntegralGain = 0.0F;
  } else {
    rtb_IntegralGain = (rtNaNF);
  }

  b_0[20] = (sigma / 4.0F - (rtb_IntegralGain / 2.0F + 0.5F) * rtb_TSamp_d_idx_1
             / 2.0F) + 0.25F;
  b_0[21] = 0.0F;
  b_0[22] = 0.0F;
  b_0[23] = 0.0F;
  b_0[24] = 0.0F;
  b_0[25] = 0.0F;
  b_0[26] = 0.0F;
  b_0[27] = 0.0F;
  b_0[28] = 0.0F;
  b_0[29] = 0.0F;
  if (RateControl_DW.x[3] - 3.0F < 0.0F) {
    sigma = -1.0F;
  } else if (RateControl_DW.x[3] - 3.0F > 0.0F) {
    sigma = 1.0F;
  } else if (RateControl_DW.x[3] - 3.0F == 0.0F) {
    sigma = 0.0F;
  } else {
    sigma = (rtNaNF);
  }

  if (b_tmp < 0.0F) {
    rtb_TSamp_d_idx_1 = -1.0F;
  } else if (b_tmp > 0.0F) {
    rtb_TSamp_d_idx_1 = 1.0F;
  } else if (b_tmp == 0.0F) {
    rtb_TSamp_d_idx_1 = 0.0F;
  } else {
    rtb_TSamp_d_idx_1 = (rtNaNF);
  }

  if (RateControl_DW.x[3] - 3.0F < 0.0F) {
    rtb_IntegralGain = -1.0F;
  } else if (RateControl_DW.x[3] - 3.0F > 0.0F) {
    rtb_IntegralGain = 1.0F;
  } else if (RateControl_DW.x[3] - 3.0F == 0.0F) {
    rtb_IntegralGain = 0.0F;
  } else {
    rtb_IntegralGain = (rtNaNF);
  }

  b_0[30] = (sigma / 4.0F - (rtb_IntegralGain / 2.0F + 0.5F) * rtb_TSamp_d_idx_1
             / 2.0F) + 0.25F;
  b_0[31] = 0.0F;
  b_0[32] = 0.0F;
  b_0[33] = 0.0F;
  b_0[34] = 0.0F;
  b_0[35] = 0.0F;
  b_0[36] = 0.0F;
  b_0[37] = 0.0F;
  b_0[38] = 0.0F;
  b_0[39] = 0.0F;
  if (RateControl_DW.x[4] < 0.0F) {
    sigma = -1.0F;
  } else if (RateControl_DW.x[4] > 0.0F) {
    sigma = 1.0F;
  } else if (RateControl_DW.x[4] == 0.0F) {
    sigma = 0.0F;
  } else {
    sigma = (rtNaNF);
  }

  if (b_tmp_0 < 0.0F) {
    rtb_TSamp_d_idx_1 = -1.0F;
  } else if (b_tmp_0 > 0.0F) {
    rtb_TSamp_d_idx_1 = 1.0F;
  } else if (b_tmp_0 == 0.0F) {
    rtb_TSamp_d_idx_1 = 0.0F;
  } else {
    rtb_TSamp_d_idx_1 = (rtNaNF);
  }

  if (RateControl_DW.x[4] < 0.0F) {
    rtb_IntegralGain = -1.0F;
  } else if (RateControl_DW.x[4] > 0.0F) {
    rtb_IntegralGain = 1.0F;
  } else if (RateControl_DW.x[4] == 0.0F) {
    rtb_IntegralGain = 0.0F;
  } else {
    rtb_IntegralGain = (rtNaNF);
  }

  b_0[40] = (sigma / 4.0F - (rtb_IntegralGain / 2.0F + 0.5F) * rtb_TSamp_d_idx_1
             / 2.0F) + 0.25F;
  b_0[41] = 0.0F;
  b_0[42] = 0.0F;
  b_0[43] = 0.0F;
  b_0[44] = 0.0F;
  b_0[45] = 0.0F;
  b_0[46] = 0.0F;
  b_0[47] = 0.0F;
  b_0[48] = 0.0F;
  b_0[49] = 0.0F;
  if (RateControl_DW.x[5] < 0.0F) {
    sigma = -1.0F;
  } else if (RateControl_DW.x[5] > 0.0F) {
    sigma = 1.0F;
  } else if (RateControl_DW.x[5] == 0.0F) {
    sigma = 0.0F;
  } else {
    sigma = (rtNaNF);
  }

  if (y_tmp_tmp < 0.0F) {
    rtb_TSamp_d_idx_1 = -1.0F;
  } else if (y_tmp_tmp > 0.0F) {
    rtb_TSamp_d_idx_1 = 1.0F;
  } else if (y_tmp_tmp == 0.0F) {
    rtb_TSamp_d_idx_1 = 0.0F;
  } else {
    rtb_TSamp_d_idx_1 = (rtNaNF);
  }

  rtb_IntegralGain = std::abs(RateControl_DW.x[5]);
  b_0[50] = sigma / rtb_TSamp_d_idx_0 - rtb_IntegralGain / (rtb_TSamp_d_idx_0 *
    rtb_TSamp_d_idx_0) * rtb_TSamp_d_idx_1 / 4.0F;
  if (y_tmp_tmp < 0.0F) {
    rtb_TSamp_d_idx_1 = -1.0F;
  } else if (y_tmp_tmp > 0.0F) {
    rtb_TSamp_d_idx_1 = 1.0F;
  } else if (y_tmp_tmp == 0.0F) {
    rtb_TSamp_d_idx_1 = 0.0F;
  } else {
    rtb_TSamp_d_idx_1 = (rtNaNF);
  }

  rtb_IntegralGain_i = std::abs(RateControl_DW.x[6]);
  b_0[51] = rtb_IntegralGain_i / (rtb_TSamp_d_idx_0 * rtb_TSamp_d_idx_0) *
    rtb_TSamp_d_idx_1 * -0.25F;
  if (y_tmp_tmp < 0.0F) {
    rtb_TSamp_d_idx_1 = -1.0F;
  } else if (y_tmp_tmp > 0.0F) {
    rtb_TSamp_d_idx_1 = 1.0F;
  } else if (y_tmp_tmp == 0.0F) {
    rtb_TSamp_d_idx_1 = 0.0F;
  } else {
    rtb_TSamp_d_idx_1 = (rtNaNF);
  }

  b_tmp = std::abs(RateControl_DW.x[7]);
  b_0[52] = b_tmp / (rtb_TSamp_d_idx_0 * rtb_TSamp_d_idx_0) * rtb_TSamp_d_idx_1 *
    -0.25F;
  if (y_tmp_tmp < 0.0F) {
    rtb_TSamp_d_idx_1 = -1.0F;
  } else if (y_tmp_tmp > 0.0F) {
    rtb_TSamp_d_idx_1 = 1.0F;
  } else if (y_tmp_tmp == 0.0F) {
    rtb_TSamp_d_idx_1 = 0.0F;
  } else {
    rtb_TSamp_d_idx_1 = (rtNaNF);
  }

  b_tmp_0 = std::abs(RateControl_DW.x[8]);
  b_0[53] = b_tmp_0 / (rtb_TSamp_d_idx_0 * rtb_TSamp_d_idx_0) *
    rtb_TSamp_d_idx_1 * -0.25F;
  b_0[54] = 0.0F;
  b_0[55] = 0.0F;
  b_0[56] = 0.0F;
  b_0[57] = 0.0F;
  b_0[58] = 0.0F;
  if (y_tmp_tmp < 0.0F) {
    rtb_TSamp_d_idx_1 = -1.0F;
  } else if (y_tmp_tmp > 0.0F) {
    rtb_TSamp_d_idx_1 = 1.0F;
  } else if (y_tmp_tmp == 0.0F) {
    rtb_TSamp_d_idx_1 = 0.0F;
  } else {
    rtb_TSamp_d_idx_1 = (rtNaNF);
  }

  b_0[59] = rtb_IntegralGain / (rtb_TSamp_d_idx_0 * rtb_TSamp_d_idx_0) *
    rtb_TSamp_d_idx_1 * -0.25F;
  if (RateControl_DW.x[6] < 0.0F) {
    sigma = -1.0F;
  } else if (RateControl_DW.x[6] > 0.0F) {
    sigma = 1.0F;
  } else if (RateControl_DW.x[6] == 0.0F) {
    sigma = 0.0F;
  } else {
    sigma = (rtNaNF);
  }

  if (y_tmp_tmp < 0.0F) {
    rtb_TSamp_d_idx_1 = -1.0F;
  } else if (y_tmp_tmp > 0.0F) {
    rtb_TSamp_d_idx_1 = 1.0F;
  } else if (y_tmp_tmp == 0.0F) {
    rtb_TSamp_d_idx_1 = 0.0F;
  } else {
    rtb_TSamp_d_idx_1 = (rtNaNF);
  }

  b_0[60] = sigma / rtb_TSamp_d_idx_0 - rtb_IntegralGain_i / (rtb_TSamp_d_idx_0 *
    rtb_TSamp_d_idx_0) * rtb_TSamp_d_idx_1 / 4.0F;
  if (y_tmp_tmp < 0.0F) {
    rtb_TSamp_d_idx_1 = -1.0F;
  } else if (y_tmp_tmp > 0.0F) {
    rtb_TSamp_d_idx_1 = 1.0F;
  } else if (y_tmp_tmp == 0.0F) {
    rtb_TSamp_d_idx_1 = 0.0F;
  } else {
    rtb_TSamp_d_idx_1 = (rtNaNF);
  }

  b_0[61] = b_tmp / (rtb_TSamp_d_idx_0 * rtb_TSamp_d_idx_0) * rtb_TSamp_d_idx_1 *
    -0.25F;
  if (y_tmp_tmp < 0.0F) {
    rtb_TSamp_d_idx_1 = -1.0F;
  } else if (y_tmp_tmp > 0.0F) {
    rtb_TSamp_d_idx_1 = 1.0F;
  } else if (y_tmp_tmp == 0.0F) {
    rtb_TSamp_d_idx_1 = 0.0F;
  } else {
    rtb_TSamp_d_idx_1 = (rtNaNF);
  }

  b_0[62] = b_tmp_0 / (rtb_TSamp_d_idx_0 * rtb_TSamp_d_idx_0) *
    rtb_TSamp_d_idx_1 * -0.25F;
  b_0[63] = 0.0F;
  b_0[64] = 0.0F;
  b_0[65] = 0.0F;
  b_0[66] = 0.0F;
  b_0[67] = 0.0F;
  if (y_tmp_tmp < 0.0F) {
    rtb_TSamp_d_idx_1 = -1.0F;
  } else if (y_tmp_tmp > 0.0F) {
    rtb_TSamp_d_idx_1 = 1.0F;
  } else if (y_tmp_tmp == 0.0F) {
    rtb_TSamp_d_idx_1 = 0.0F;
  } else {
    rtb_TSamp_d_idx_1 = (rtNaNF);
  }

  b_0[68] = rtb_IntegralGain / (rtb_TSamp_d_idx_0 * rtb_TSamp_d_idx_0) *
    rtb_TSamp_d_idx_1 * -0.25F;
  if (y_tmp_tmp < 0.0F) {
    rtb_TSamp_d_idx_1 = -1.0F;
  } else if (y_tmp_tmp > 0.0F) {
    rtb_TSamp_d_idx_1 = 1.0F;
  } else if (y_tmp_tmp == 0.0F) {
    rtb_TSamp_d_idx_1 = 0.0F;
  } else {
    rtb_TSamp_d_idx_1 = (rtNaNF);
  }

  b_0[69] = rtb_IntegralGain_i / (rtb_TSamp_d_idx_0 * rtb_TSamp_d_idx_0) *
    rtb_TSamp_d_idx_1 * -0.25F;
  if (RateControl_DW.x[7] < 0.0F) {
    sigma = -1.0F;
  } else if (RateControl_DW.x[7] > 0.0F) {
    sigma = 1.0F;
  } else if (RateControl_DW.x[7] == 0.0F) {
    sigma = 0.0F;
  } else {
    sigma = (rtNaNF);
  }

  if (y_tmp_tmp < 0.0F) {
    rtb_TSamp_d_idx_1 = -1.0F;
  } else if (y_tmp_tmp > 0.0F) {
    rtb_TSamp_d_idx_1 = 1.0F;
  } else if (y_tmp_tmp == 0.0F) {
    rtb_TSamp_d_idx_1 = 0.0F;
  } else {
    rtb_TSamp_d_idx_1 = (rtNaNF);
  }

  b_0[70] = sigma / rtb_TSamp_d_idx_0 - b_tmp / (rtb_TSamp_d_idx_0 *
    rtb_TSamp_d_idx_0) * rtb_TSamp_d_idx_1 / 4.0F;
  if (y_tmp_tmp < 0.0F) {
    rtb_TSamp_d_idx_1 = -1.0F;
  } else if (y_tmp_tmp > 0.0F) {
    rtb_TSamp_d_idx_1 = 1.0F;
  } else if (y_tmp_tmp == 0.0F) {
    rtb_TSamp_d_idx_1 = 0.0F;
  } else {
    rtb_TSamp_d_idx_1 = (rtNaNF);
  }

  b_0[71] = b_tmp_0 / (rtb_TSamp_d_idx_0 * rtb_TSamp_d_idx_0) *
    rtb_TSamp_d_idx_1 * -0.25F;
  b_0[72] = 0.0F;
  b_0[73] = 0.0F;
  b_0[74] = 0.0F;
  b_0[75] = 0.0F;
  b_0[76] = 0.0F;
  if (y_tmp_tmp < 0.0F) {
    rtb_TSamp_d_idx_1 = -1.0F;
  } else if (y_tmp_tmp > 0.0F) {
    rtb_TSamp_d_idx_1 = 1.0F;
  } else if (y_tmp_tmp == 0.0F) {
    rtb_TSamp_d_idx_1 = 0.0F;
  } else {
    rtb_TSamp_d_idx_1 = (rtNaNF);
  }

  b_0[77] = rtb_IntegralGain / (rtb_TSamp_d_idx_0 * rtb_TSamp_d_idx_0) *
    rtb_TSamp_d_idx_1 * -0.25F;
  if (y_tmp_tmp < 0.0F) {
    rtb_TSamp_d_idx_1 = -1.0F;
  } else if (y_tmp_tmp > 0.0F) {
    rtb_TSamp_d_idx_1 = 1.0F;
  } else if (y_tmp_tmp == 0.0F) {
    rtb_TSamp_d_idx_1 = 0.0F;
  } else {
    rtb_TSamp_d_idx_1 = (rtNaNF);
  }

  b_0[78] = rtb_IntegralGain_i / (rtb_TSamp_d_idx_0 * rtb_TSamp_d_idx_0) *
    rtb_TSamp_d_idx_1 * -0.25F;
  if (y_tmp_tmp < 0.0F) {
    rtb_TSamp_d_idx_1 = -1.0F;
  } else if (y_tmp_tmp > 0.0F) {
    rtb_TSamp_d_idx_1 = 1.0F;
  } else if (y_tmp_tmp == 0.0F) {
    rtb_TSamp_d_idx_1 = 0.0F;
  } else {
    rtb_TSamp_d_idx_1 = (rtNaNF);
  }

  b_0[79] = b_tmp / (rtb_TSamp_d_idx_0 * rtb_TSamp_d_idx_0) * rtb_TSamp_d_idx_1 *
    -0.25F;
  if (RateControl_DW.x[8] < 0.0F) {
    sigma = -1.0F;
  } else if (RateControl_DW.x[8] > 0.0F) {
    sigma = 1.0F;
  } else if (RateControl_DW.x[8] == 0.0F) {
    sigma = 0.0F;
  } else {
    sigma = (rtNaNF);
  }

  if (y_tmp_tmp < 0.0F) {
    rtb_TSamp_d_idx_1 = -1.0F;
  } else if (y_tmp_tmp > 0.0F) {
    rtb_TSamp_d_idx_1 = 1.0F;
  } else if (y_tmp_tmp == 0.0F) {
    rtb_TSamp_d_idx_1 = 0.0F;
  } else {
    rtb_TSamp_d_idx_1 = (rtNaNF);
  }

  b_0[80] = sigma / rtb_TSamp_d_idx_0 - b_tmp_0 / (rtb_TSamp_d_idx_0 *
    rtb_TSamp_d_idx_0) * rtb_TSamp_d_idx_1 / 4.0F;

  /* 'RateControl_KF_test_StateTransitionFcn:8' G_a = in1(4,:); */
  /* 'RateControl_KF_test_StateTransitionFcn:9' G_dr = in1(5,:); */
  /* 'RateControl_KF_test_StateTransitionFcn:10' G_p = in1(1,:); */
  /* 'RateControl_KF_test_StateTransitionFcn:11' G_q = in1(2,:); */
  /* 'RateControl_KF_test_StateTransitionFcn:12' G_r = in1(3,:); */
  /* 'RateControl_KF_test_StateTransitionFcn:13' k_1 = in1(6,:); */
  /* 'RateControl_KF_test_StateTransitionFcn:14' k_2 = in1(7,:); */
  /* 'RateControl_KF_test_StateTransitionFcn:15' k_3 = in1(8,:); */
  /* 'RateControl_KF_test_StateTransitionFcn:16' k_4 = in1(9,:); */
  /* 'RateControl_KF_test_StateTransitionFcn:17' x1 = [G_p./4.0+abs(G_p-5.0e+1)./4.0-abs(G_p./2.0+abs(G_p-5.0e+1)./2.0-1.25e+2)./2.0+1.75e+2./2.0;G_q./4.0+abs(G_q-5.0e+1)./4.0-abs(G_q./2.0+abs(G_q-5.0e+1)./2.0-1.25e+2)./2.0+1.75e+2./2.0;G_r./4.0+abs(G_r-1.0)./4.0-abs(G_r./2.0+abs(G_r-1.0)./2.0-9.0./2.0)./2.0+1.1e+1./4.0;G_a./4.0+abs(G_a-3.0)./4.0-abs(G_a./2.0+abs(G_a-3.0)./2.0-9.0./2.0)./2.0+1.5e+1./4.0;G_dr./4.0-abs(G_dr./2.0+abs(G_dr)./2.0-4.0)./2.0+abs(G_dr)./4.0+2.0;abs(k_1)./abs(k_1./4.0+k_2./4.0+k_3./4.0+k_4./4.0);abs(k_2)./abs(k_1./4.0+k_2./4.0+k_3./4.0+k_4./4.0);abs(k_3)./abs(k_1./4.0+k_2./4.0+k_3./4.0+k_4./4.0);abs(k_4)./abs(k_1./4.0+k_2./4.0+k_3./4.0+k_4./4.0)]; */
  for (j = 0; j < 9; j++) {
    for (jmax = 0; jmax < 9; jmax++) {
      jj = jmax + 9 * j;
      gain_0[jj] = 0.0F;
      for (gain_tmp = 0; gain_tmp < 9; gain_tmp++) {
        gain_0[jj] += b_0[9 * gain_tmp + jmax] * RateControl_DW.P[9 * j +
          gain_tmp];
      }
    }
  }

  /* DataStoreWrite: '<S24>/Data Store WriteP' incorporates:
   *  Constant: '<S9>/Q'
   *  MATLAB Function: '<S24>/Predict'
   */
  for (j = 0; j < 9; j++) {
    for (jmax = 0; jmax < 9; jmax++) {
      sigma = 0.0F;
      for (gain_tmp = 0; gain_tmp < 9; gain_tmp++) {
        sigma += gain_0[9 * gain_tmp + j] * b_0[9 * gain_tmp + jmax];
      }

      /* MATLAB Function: '<S24>/Predict' incorporates:
       *  Constant: '<S9>/Q'
       */
      gain_tmp = 9 * jmax + j;
      RateControl_DW.P[gain_tmp] = rtCP_Q_Value[gain_tmp] + sigma;
    }
  }

  /* End of DataStoreWrite: '<S24>/Data Store WriteP' */

  /* MATLAB Function: '<S24>/Predict' incorporates:
   *  DataStoreRead: '<S24>/Data Store ReadX'
   */
  sigma = RateControl_DW.x[5];
  rtb_IntegralGain = RateControl_DW.x[5];
  y_tmp_tmp = RateControl_DW.x[6];
  rtb_TSamp_d_idx_0 = RateControl_DW.x[5];
  rtb_TSamp_d_idx_1 = RateControl_DW.x[6];
  rtb_IntegralGain_i = RateControl_DW.x[7];

  /* DataStoreWrite: '<S24>/Data Store WriteX' incorporates:
   *  DataStoreRead: '<S24>/Data Store ReadX'
   *  MATLAB Function: '<S24>/Predict'
   */
  RateControl_DW.x[0] = ((rtb_TSamp_j / 4.0F + RateControl_DW.x[0] / 4.0F) - std::
    abs(rtb_TSamp_h) / 2.0F) + 87.5F;

  /* MATLAB Function: '<S24>/Predict' incorporates:
   *  DataStoreRead: '<S24>/Data Store ReadX'
   */
  rtb_TSamp_j = std::abs(RateControl_DW.x[1] - 50.0F);

  /* DataStoreWrite: '<S24>/Data Store WriteX' incorporates:
   *  DataStoreRead: '<S24>/Data Store ReadX'
   *  MATLAB Function: '<S24>/Predict'
   */
  RateControl_DW.x[1] = ((rtb_TSamp_j / 4.0F + RateControl_DW.x[1] / 4.0F) - std::
    abs((rtb_TSamp_j / 2.0F + RateControl_DW.x[1] / 2.0F) - 125.0F) / 2.0F) +
    87.5F;

  /* MATLAB Function: '<S24>/Predict' incorporates:
   *  DataStoreRead: '<S24>/Data Store ReadX'
   */
  rtb_TSamp_j = std::abs(RateControl_DW.x[2] - 1.0F);

  /* DataStoreWrite: '<S24>/Data Store WriteX' incorporates:
   *  DataStoreRead: '<S24>/Data Store ReadX'
   *  MATLAB Function: '<S24>/Predict'
   */
  RateControl_DW.x[2] = ((rtb_TSamp_j / 4.0F + RateControl_DW.x[2] / 4.0F) - std::
    abs((rtb_TSamp_j / 2.0F + RateControl_DW.x[2] / 2.0F) - 4.5F) / 2.0F) +
    2.75F;

  /* MATLAB Function: '<S24>/Predict' incorporates:
   *  DataStoreRead: '<S24>/Data Store ReadX'
   */
  rtb_TSamp_j = std::abs(RateControl_DW.x[3] - 3.0F);

  /* DataStoreWrite: '<S24>/Data Store WriteX' incorporates:
   *  DataStoreRead: '<S24>/Data Store ReadX'
   *  MATLAB Function: '<S24>/Predict'
   */
  RateControl_DW.x[3] = ((rtb_TSamp_j / 4.0F + RateControl_DW.x[3] / 4.0F) - std::
    abs((rtb_TSamp_j / 2.0F + RateControl_DW.x[3] / 2.0F) - 4.5F) / 2.0F) +
    3.75F;

  /* MATLAB Function: '<S24>/Predict' incorporates:
   *  DataStoreRead: '<S24>/Data Store ReadX'
   */
  rtb_TSamp_j = std::abs(RateControl_DW.x[4]);

  /* DataStoreWrite: '<S24>/Data Store WriteX' incorporates:
   *  DataStoreRead: '<S24>/Data Store ReadX'
   *  MATLAB Function: '<S24>/Predict'
   */
  RateControl_DW.x[4] = ((RateControl_DW.x[4] / 4.0F - std::abs
    ((RateControl_DW.x[4] / 2.0F + rtb_TSamp_j / 2.0F) - 4.0F) / 2.0F) +
    rtb_TSamp_j / 4.0F) + 2.0F;
  RateControl_DW.x[5] = std::abs(RateControl_DW.x[5]) / std::abs
    (((RateControl_DW.x[5] / 4.0F + RateControl_DW.x[6] / 4.0F) +
      RateControl_DW.x[7] / 4.0F) + RateControl_DW.x[8] / 4.0F);
  RateControl_DW.x[6] = std::abs(RateControl_DW.x[6]) / std::abs(((sigma / 4.0F
    + RateControl_DW.x[6] / 4.0F) + RateControl_DW.x[7] / 4.0F) +
    RateControl_DW.x[8] / 4.0F);
  RateControl_DW.x[7] = std::abs(RateControl_DW.x[7]) / std::abs
    (((rtb_IntegralGain / 4.0F + y_tmp_tmp / 4.0F) + RateControl_DW.x[7] / 4.0F)
     + RateControl_DW.x[8] / 4.0F);
  RateControl_DW.x[8] = std::abs(RateControl_DW.x[8]) / std::abs
    (((rtb_TSamp_d_idx_0 / 4.0F + rtb_TSamp_d_idx_1 / 4.0F) + rtb_IntegralGain_i
      / 4.0F) + RateControl_DW.x[8] / 4.0F);

  /* End of Outputs for SubSystem: '<S9>/Predict' */

  /* MATLAB Function: '<Root>/controlEffMatrix' */
  /* :  matrix = control_eff_matrix(RateControlParams); */
  /* 'control_eff_matrix:6' roll = RateControlParams.roll_eff; */
  /* 'control_eff_matrix:7' pitch = RateControlParams.pitch_eff; */
  /* 'control_eff_matrix:8' yaw = RateControlParams.yaw_eff; */
  /* 'control_eff_matrix:9' yaw_w_dot = RateControlParams.yaw_d_eff; */
  /* 'control_eff_matrix:10' az = RateControlParams.az_eff; */
  /* 'control_eff_matrix:12' unit_matrix = RateControlParams.unit_matrix; */
  /* 'control_eff_matrix:14' rows_multiplier = diag([roll pitch yaw az 0 0 yaw_w_dot 0]); */
  rtb_TmpSignalConversionAtSFunct[0] = RateControlParams.roll_eff;
  rtb_TmpSignalConversionAtSFunct[1] = RateControlParams.pitch_eff;
  rtb_TmpSignalConversionAtSFunct[2] = RateControlParams.yaw_eff;
  rtb_TmpSignalConversionAtSFunct[3] = RateControlParams.az_eff;
  rtb_TmpSignalConversionAtSFunct[4] = 0.0F;
  rtb_TmpSignalConversionAtSFunct[5] = 0.0F;
  rtb_TmpSignalConversionAtSFunct[6] = RateControlParams.yaw_d_eff;
  rtb_TmpSignalConversionAtSFunct[7] = 0.0F;
  memset(&rows_multiplier[0], 0, sizeof(real32_T) << 6U);
  for (j = 0; j < 8; j++) {
    rows_multiplier[j + (j << 3)] = rtb_TmpSignalConversionAtSFunct[j];
  }

  /* 'control_eff_matrix:16' control_eff_matrix = rows_multiplier*unit_matrix; */
  for (j = 0; j < 4; j++) {
    for (jmax = 0; jmax < 8; jmax++) {
      jj = j << 3;
      b_ix = jmax + jj;
      control_eff_matrix[b_ix] = 0.0F;
      for (gain_tmp = 0; gain_tmp < 8; gain_tmp++) {
        control_eff_matrix[b_ix] += rows_multiplier[(gain_tmp << 3) + jmax] *
          static_cast<real32_T>(RateControlParams.unit_matrix[jj + gain_tmp]);
      }
    }
  }

  /* MATLAB Function: '<Root>/MATLAB Function8' */
  /* 'control_eff_matrix:18' control_eff_matrix = [ */
  /* 'control_eff_matrix:19'     control_eff_matrix(1:4, :) control_eff_matrix(5:8, :) % [G1 G2] */
  /* 'control_eff_matrix:20'     ]; */
  /* :  regressor = regressor_fun(G_Omega, w); */
  /* 'regressor_fun:8' G_dp = in1(1,:); */
  /* 'regressor_fun:9' G_dq = in1(2,:); */
  /* 'regressor_fun:10' G_dVz = in1(3,:); */
  /* 'regressor_fun:11' w_1 = in2(1,:); */
  /* 'regressor_fun:12' w_2 = in2(2,:); */
  /* 'regressor_fun:13' w_3 = in2(3,:); */
  /* 'regressor_fun:14' w_4 = in2(4,:); */
  /* 'regressor_fun:15' t2 = w_1.^2; */
  /* 'regressor_fun:16' t3 = w_2.^2; */
  /* 'regressor_fun:17' t4 = w_3.^2; */
  /* 'regressor_fun:18' t5 = w_4.^2; */
  /* 'regressor_fun:19' regressor_fun_reduced = reshape([(G_dp.*t2)./1.0e+6,(G_dq.*t2)./1.0e+6,G_dVz.*t2.*(-1.0e-6),G_dp.*t3.*(-1.0e-6),(G_dq.*t3)./1.0e+6,G_dVz.*t3.*(-1.0e-6),G_dp.*t4.*(-1.0e-6),G_dq.*t4.*(-1.0e-6),G_dVz.*t4.*(-1.0e-6),(G_dp.*t5)./1.0e+6,G_dq.*t5.*(-1.0e-6),G_dVz.*t5.*(-1.0e-6)],[3,4]); */
  sigma = 100.0F * a1 / 1.0E+6F;
  rtb_regressor[0] = sigma;
  rtb_regressor[1] = sigma;
  rtb_regressor[2] = 5.0F * a1 * -1.0E-6F;
  rtb_regressor[3] = 100.0F * sqrtA0overA1 * -1.0E-6F;
  rtb_regressor[4] = 100.0F * sqrtA0overA1 / 1.0E+6F;
  rtb_regressor[5] = 5.0F * sqrtA0overA1 * -1.0E-6F;
  sigma = 100.0F * sqrtA0timesA1 * -1.0E-6F;
  rtb_regressor[6] = sigma;
  rtb_regressor[7] = sigma;
  rtb_regressor[8] = 5.0F * sqrtA0timesA1 * -1.0E-6F;
  rtb_regressor[9] = 100.0F * rtb_TSamp_pb / 1.0E+6F;
  rtb_regressor[10] = 100.0F * rtb_TSamp_pb * -1.0E-6F;
  rtb_regressor[11] = 5.0F * rtb_TSamp_pb * -1.0E-6F;

  /* Delay: '<S20>/delayTheta' */
  if (RateControl_DW.icLoad_d != 0) {
    RateControl_DW.delayTheta_DSTATE[0] = 1.0F;
    RateControl_DW.delayTheta_DSTATE[1] = 1.0F;
    RateControl_DW.delayTheta_DSTATE[2] = 1.0F;
    RateControl_DW.delayTheta_DSTATE[3] = 1.0F;
  }

  /* End of Delay: '<S20>/delayTheta' */

  /* Delay: '<S20>/delayL' incorporates:
   *  Constant: '<S20>/InitialCovariance'
   */
  if (RateControl_DW.icLoad_e != 0) {
    memcpy(&RateControl_DW.delayL_DSTATE[0], &rtCP_InitialCovariance_Value[0],
           sizeof(real32_T) << 4U);
  }

  /* End of Delay: '<S20>/delayL' */

  /* SignalConversion: '<S181>/TmpSignal ConversionAt SFunction Inport2' incorporates:
   *  MATLAB Function: '<S20>/RLS'
   */
  rtb_Diff_l[0] = RateControl_DW.UD_DSTATE[0];
  rtb_Diff_l[1] = RateControl_DW.UD_DSTATE[1];
  rtb_Diff_l[2] = rtb_est_accel_z;

  /* MATLAB Function: '<S20>/RLS' incorporates:
   *  Constant: '<S20>/Process Noise Covariance'
   */
  /* :  if isempty(rlsEstimator) */
  if (!RateControl_DW.rlsEstimator_not_empty) {
    /* :  rlsEstimator = controllib.internal.blocks.rls.getEstimator(algorithmParams); */
    RateControl_DW.rlsEstimator_not_empty = true;
  }

  /* :  if hasTriggeredReset */
  /* :  [yBuffer,HBuffer,x,L,e] = rlsEstimator.estimate(... */
  /* :      yBuffer, HBuffer, x, L,... % states */
  /* :      y, H,... % new IO data */
  /* :      isEnabled, adg1, adg2, algorithmParams); */
  RateControl_DW.rlsEstimator.DataIterator.IteratorPosition = 1;
  for (gain_tmp = 0; gain_tmp < 3; gain_tmp++) {
    j = RateControl_DW.rlsEstimator.DataIterator.IteratorPosition;
    jmax = RateControl_DW.rlsEstimator.DataIterator.IteratorPosition - 1;
    jj = RateControl_DW.rlsEstimator.DataIterator.IteratorPosition + 1;
    if (jj < 4) {
      RateControl_DW.rlsEstimator.DataIterator.IteratorPosition = jj;
    } else {
      RateControl_DW.rlsEstimator.DataIterator.IteratorPosition = 4;
    }

    sigma = 0.0F;
    for (jj = 0; jj < 4; jj++) {
      sigma += rtb_regressor[3 * jj + jmax] *
        RateControl_DW.delayTheta_DSTATE[jj];
      b_ix = jj << 2;
      a1 = RateControl_DW.delayL_DSTATE[b_ix + 3] * rtb_regressor[jmax + 9] +
        (RateControl_DW.delayL_DSTATE[b_ix + 2] * rtb_regressor[jmax + 6] +
         (RateControl_DW.delayL_DSTATE[b_ix + 1] * rtb_regressor[jmax + 3] +
          RateControl_DW.delayL_DSTATE[b_ix] * rtb_regressor[jmax]));
      K0[jj] = 0.0F;
      K[jj] = 0.0F;
      fTr[jj] = a1;
    }

    sigma = rtb_Diff_l[j - 1] - sigma;
    a1 = fTr[3] * fTr[3] + 1.0F;
    sqrtA0overA1 = std::sqrt(1.0F / a1);
    K[3] = RateControl_DW.delayL_DSTATE[15] * fTr[3] + K0[3];
    RateControl_DW.delayL_DSTATE[15] = RateControl_DW.delayL_DSTATE[15] *
      sqrtA0overA1 - K0[3] * fTr[3] / (sqrtA0overA1 * a1);
    K0[3] = K[3];
    sqrtA0overA1 = a1;
    a1 += fTr[2] * fTr[2];
    sqrtA0overA1 = std::sqrt(sqrtA0overA1 / a1);
    sqrtA0timesA1 = sqrtA0overA1 * a1;
    for (j = 0; j < 2; j++) {
      rtb_TSamp_pb = RateControl_DW.delayL_DSTATE[11 - j];
      rtb_IntegralGain = K0[3 - j];
      K[3 - j] = rtb_TSamp_pb * fTr[2] + rtb_IntegralGain;
      RateControl_DW.delayL_DSTATE[11 - j] = rtb_TSamp_pb * sqrtA0overA1 -
        rtb_IntegralGain * fTr[2] / sqrtA0timesA1;
      K0[3 - j] = K[3 - j];
    }

    sqrtA0overA1 = a1;
    a1 += fTr[1] * fTr[1];
    sqrtA0overA1 = std::sqrt(sqrtA0overA1 / a1);
    sqrtA0timesA1 = sqrtA0overA1 * a1;
    for (j = 0; j < 3; j++) {
      rtb_TSamp_pb = RateControl_DW.delayL_DSTATE[7 - j];
      rtb_IntegralGain = K0[3 - j];
      K[3 - j] = rtb_TSamp_pb * fTr[1] + rtb_IntegralGain;
      RateControl_DW.delayL_DSTATE[7 - j] = rtb_TSamp_pb * sqrtA0overA1 -
        rtb_IntegralGain * fTr[1] / sqrtA0timesA1;
      K0[3 - j] = K[3 - j];
    }

    sqrtA0overA1 = a1;
    a1 += fTr[0] * fTr[0];
    sqrtA0overA1 = std::sqrt(sqrtA0overA1 / a1);
    sqrtA0timesA1 = sqrtA0overA1 * a1;
    for (j = 0; j < 4; j++) {
      rtb_TSamp_pb = RateControl_DW.delayL_DSTATE[3 - j];
      rtb_IntegralGain = K0[3 - j];
      K[3 - j] = rtb_TSamp_pb * fTr[0] + rtb_IntegralGain;
      RateControl_DW.delayL_DSTATE[3 - j] = rtb_TSamp_pb * sqrtA0overA1 -
        rtb_IntegralGain * fTr[0] / sqrtA0timesA1;
      K0[3 - j] = K[3 - j];
    }

    for (j = 0; j < 4; j++) {
      for (jmax = 0; jmax < 4; jmax++) {
        b_ix = (jmax << 2) + j;
        rtb_Product[b_ix] = (((RateControl_DW.delayL_DSTATE[j + 4] *
          RateControl_DW.delayL_DSTATE[jmax + 4] +
          RateControl_DW.delayL_DSTATE[j] * RateControl_DW.delayL_DSTATE[jmax])
                              + RateControl_DW.delayL_DSTATE[j + 8] *
                              RateControl_DW.delayL_DSTATE[jmax + 8]) +
                             RateControl_DW.delayL_DSTATE[j + 12] *
                             RateControl_DW.delayL_DSTATE[jmax + 12]) +
          rtCP_ProcessNoiseCovariance_Val[b_ix];
      }

      K[j] /= a1;
    }

    j = 0;
    jmax = 1;
    exitg1 = false;
    while ((!exitg1) && (jmax - 1 < 4)) {
      jj = (((jmax - 1) << 2) + jmax) - 1;
      a1 = 0.0F;
      if (jmax - 1 >= 1) {
        ix = jmax;
        iy = jmax;
        for (b_ix = 0; b_ix <= jmax - 2; b_ix++) {
          a1 += rtb_Product[ix - 1] * rtb_Product[iy - 1];
          ix += 4;
          iy += 4;
        }
      }

      a1 = rtb_Product[jj] - a1;
      if (a1 > 0.0F) {
        a1 = std::sqrt(a1);
        rtb_Product[jj] = a1;
        if (jmax < 4) {
          if (jmax - 1 != 0) {
            b_ix = jmax;
            ix = (((jmax - 2) << 2) + jmax) + 1;
            for (iy = jmax + 1; iy <= ix; iy += 4) {
              sqrtA0overA1 = -rtb_Product[b_ix - 1];
              b_iy = jj + 1;
              f = (iy - jmax) + 3;
              for (ia = iy; ia <= f; ia++) {
                rtb_Product[b_iy] += rtb_Product[ia - 1] * sqrtA0overA1;
                b_iy++;
              }

              b_ix += 4;
            }
          }

          a1 = 1.0F / a1;
          b_ix = (jj - jmax) + 5;
          for (jj++; jj < b_ix; jj++) {
            rtb_Product[jj] *= a1;
          }
        }

        jmax++;
      } else {
        rtb_Product[jj] = a1;
        j = jmax;
        exitg1 = true;
      }
    }

    if (j == 0) {
      j = 5;
    }

    jmax = j - 1;
    for (j = 1; j < jmax; j++) {
      for (jj = 0; jj < j; jj++) {
        rtb_Product[jj + (j << 2)] = 0.0F;
      }
    }

    RateControl_DW.delayTheta_DSTATE[0] += K[0] * sigma;
    RateControl_DW.delayTheta_DSTATE[1] += K[1] * sigma;
    RateControl_DW.delayTheta_DSTATE[2] += K[2] * sigma;
    RateControl_DW.delayTheta_DSTATE[3] += K[3] * sigma;
    memcpy(&RateControl_DW.delayL_DSTATE[0], &rtb_Product[0], sizeof(real32_T) <<
           4U);
  }

  for (jj = 0; jj < 4; jj++) {
    /* Product: '<S175>/Product' incorporates:
     *  Math: '<S175>/Math Function'
     */
    for (j = 0; j < 4; j++) {
      b_ix = jj + (j << 2);
      rtb_Product[b_ix] = 0.0F;
      rtb_Product[b_ix] += RateControl_DW.delayL_DSTATE[jj] *
        RateControl_DW.delayL_DSTATE[j];
      rtb_Product[b_ix] += RateControl_DW.delayL_DSTATE[jj + 4] *
        RateControl_DW.delayL_DSTATE[j + 4];
      rtb_Product[b_ix] += RateControl_DW.delayL_DSTATE[jj + 8] *
        RateControl_DW.delayL_DSTATE[j + 8];
      rtb_Product[b_ix] += RateControl_DW.delayL_DSTATE[jj + 12] *
        RateControl_DW.delayL_DSTATE[j + 12];
    }

    /* End of Product: '<S175>/Product' */

    /* Saturate: '<Root>/Saturation' */
    if (RateControl_DW.delayTheta_DSTATE[jj] > 6.0F) {
      K0[jj] = 6.0F;
    } else if (RateControl_DW.delayTheta_DSTATE[jj] < -4.0F) {
      K0[jj] = -4.0F;
    } else {
      K0[jj] = RateControl_DW.delayTheta_DSTATE[jj];
    }

    /* End of Saturate: '<Root>/Saturation' */
  }

  /* MATLAB Function: '<Root>/MATLAB Function5' */
  /* :  [fail_P, fail_id] = LoeDetectorPkg.fail_diagnosis(K_vec, K_cov_matrix, RateControlParams); */
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
  sigma = std::sqrt(std::abs(rtb_Product[0]));

  /* 'fail_diagnosis:24' fail_P(i) = normcdf(K_threshold, K_mean, sigma); */
  RateControl_Y.fail_P[0] = normcdf_9tjXH1DZ(RateControlParams.fdd_k_thres, K0[0],
    sigma);

  /* 'fail_diagnosis:25' ok_P(i) = 1 - normcdf(K_threshold, K_mean, sigma); */
  ok_P[0] = 1.0F - normcdf_9tjXH1DZ(RateControlParams.fdd_k_thres, K0[0], sigma);

  /* 'fail_diagnosis:18' K_mean = K_means(i); */
  /* 'fail_diagnosis:19' K_cov = K_covs(i); */
  /* 'fail_diagnosis:21' sigma = sqrt(abs(K_cov)); */
  sigma = std::sqrt(std::abs(rtb_Product[1]));

  /* 'fail_diagnosis:24' fail_P(i) = normcdf(K_threshold, K_mean, sigma); */
  RateControl_Y.fail_P[1] = normcdf_9tjXH1DZ(RateControlParams.fdd_k_thres, K0[1],
    sigma);

  /* 'fail_diagnosis:25' ok_P(i) = 1 - normcdf(K_threshold, K_mean, sigma); */
  ok_P[1] = 1.0F - normcdf_9tjXH1DZ(RateControlParams.fdd_k_thres, K0[1], sigma);

  /* 'fail_diagnosis:18' K_mean = K_means(i); */
  /* 'fail_diagnosis:19' K_cov = K_covs(i); */
  /* 'fail_diagnosis:21' sigma = sqrt(abs(K_cov)); */
  sigma = std::sqrt(std::abs(rtb_Product[2]));

  /* 'fail_diagnosis:24' fail_P(i) = normcdf(K_threshold, K_mean, sigma); */
  RateControl_Y.fail_P[2] = normcdf_9tjXH1DZ(RateControlParams.fdd_k_thres, K0[2],
    sigma);

  /* 'fail_diagnosis:25' ok_P(i) = 1 - normcdf(K_threshold, K_mean, sigma); */
  ok_P[2] = 1.0F - normcdf_9tjXH1DZ(RateControlParams.fdd_k_thres, K0[2], sigma);

  /* 'fail_diagnosis:18' K_mean = K_means(i); */
  /* 'fail_diagnosis:19' K_cov = K_covs(i); */
  /* 'fail_diagnosis:21' sigma = sqrt(abs(K_cov)); */
  sigma = std::sqrt(std::abs(rtb_Product[3]));

  /* 'fail_diagnosis:24' fail_P(i) = normcdf(K_threshold, K_mean, sigma); */
  RateControl_Y.fail_P[3] = normcdf_9tjXH1DZ(RateControlParams.fdd_k_thres, K0[3],
    sigma);

  /* 'fail_diagnosis:25' ok_P(i) = 1 - normcdf(K_threshold, K_mean, sigma); */
  ok_P[3] = 1.0F - normcdf_9tjXH1DZ(RateControlParams.fdd_k_thres, K0[3], sigma);

  /* 'fail_diagnosis:29' [~, max_fail_indices] = max(fail_P); */
  if (!rtIsNaN(RateControl_Y.fail_P[0])) {
    j = 1;
  } else {
    j = 0;
    b_ix = 2;
    exitg1 = false;
    while ((!exitg1) && (b_ix < 5)) {
      if (!rtIsNaN(RateControl_Y.fail_P[b_ix - 1])) {
        j = b_ix;
        exitg1 = true;
      } else {
        b_ix++;
      }
    }
  }

  if (j == 0) {
    j = 1;
  } else {
    act_limit_rads = RateControl_Y.fail_P[j - 1];
    for (jj = j; jj + 1 < 5; jj++) {
      if (act_limit_rads < RateControl_Y.fail_P[jj]) {
        act_limit_rads = RateControl_Y.fail_P[jj];
        j = jj + 1;
      }
    }
  }

  /* 'fail_diagnosis:29' ~ */
  /* 'fail_diagnosis:31' if (fail_id == 0 || fail_P(fail_id) < fail_P(max_fail_indices)) ... */
  /* 'fail_diagnosis:32'         && fail_P(max_fail_indices) > K_prob_threshold */
  if (((RateControl_DW.fail_id == 0.0) || (RateControl_Y.fail_P[static_cast<
        int32_T>(RateControl_DW.fail_id) - 1] < RateControl_Y.fail_P[j - 1])) &&
      (RateControl_Y.fail_P[j - 1] > RateControlParams.fdd_fail_p_thres)) {
    /* 'fail_diagnosis:33' fail_id = max_fail_indices(1); */
    RateControl_DW.fail_id = j;
  } else {
    if ((RateControl_DW.fail_id != 0.0) && (ok_P[static_cast<int32_T>
         (RateControl_DW.fail_id) - 1] > 0.9)) {
      /* 'fail_diagnosis:34' elseif fail_id ~= 0 && ok_P(fail_id) > 0.90 */
      /* 'fail_diagnosis:35' fail_id = 0; */
      RateControl_DW.fail_id = 0.0;
    }
  }

  /* End of MATLAB Function: '<Root>/MATLAB Function5' */

  /* DiscreteStateSpace: '<Root>/H_rates' incorporates:
   *  Inport: '<Root>/rates'
   */
  /* 'fail_diagnosis:38' fail_id_out = int32(fail_id); */
  {
    rtb_Minus[0] = (0.0385409F)*RateControl_DW.H_rates_DSTATE[0] +
      (0.0371529944F)*RateControl_DW.H_rates_DSTATE[1];
    rtb_Minus[1] = (0.0385409F)*RateControl_DW.H_rates_DSTATE[2] +
      (0.0371529944F)*RateControl_DW.H_rates_DSTATE[3];
    rtb_Minus[2] = (0.0385409F)*RateControl_DW.H_rates_DSTATE[4] +
      (0.0371529944F)*RateControl_DW.H_rates_DSTATE[5];
  }

  /* SampleTimeMath: '<S1>/TSamp'
   *
   * About '<S1>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  a1 = rtb_Minus[0] * 500.0F;
  sqrtA0overA1 = rtb_Minus[1] * 500.0F;
  sqrtA0timesA1 = rtb_Minus[2] * 500.0F;

  /* DiscreteStateSpace: '<Root>/H_accel' incorporates:
   *  Inport: '<Root>/accel'
   */
  {
    rtb_accel_z_f = (0.0385409F)*RateControl_DW.H_accel_DSTATE[0] +
      (0.0371529944F)*RateControl_DW.H_accel_DSTATE[1];
  }

  /* Sum: '<Root>/Minus' incorporates:
   *  Inport: '<Root>/rates'
   *  Inport: '<Root>/rates_sp'
   */
  rtb_Minus[0] = RateControl_U.rates_sp[0] - RateControl_U.rates[0];
  rtb_Minus[1] = RateControl_U.rates_sp[1] - RateControl_U.rates[1];
  rtb_Minus[2] = RateControl_U.rates_sp[2] - RateControl_U.rates[2];

  /* SampleTimeMath: '<S95>/TSamp' incorporates:
   *  Gain: '<S94>/Derivative Gain'
   *
   * About '<S95>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp_pb = 0.0F * rtb_Minus[0] * 500.0F;

  /* SampleTimeMath: '<S51>/TSamp' incorporates:
   *  Gain: '<S50>/Derivative Gain'
   *
   * About '<S51>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp_j = 0.0F * rtb_Minus[1] * 500.0F;

  /* SampleTimeMath: '<S139>/TSamp' incorporates:
   *  Gain: '<S138>/Derivative Gain'
   *
   * About '<S139>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp_h = 0.0F * rtb_Minus[2] * 500.0F;

  /* DiscreteStateSpace: '<Root>/H_rates_sp' incorporates:
   *  Inport: '<Root>/rates_sp'
   */
  {
    rtb_Diff_l[0] = (0.137116671F)*RateControl_DW.H_rates_sp_DSTATE[0] +
      (0.118343525F)*RateControl_DW.H_rates_sp_DSTATE[1];
    rtb_Diff_l[1] = (0.137116671F)*RateControl_DW.H_rates_sp_DSTATE[2] +
      (0.118343525F)*RateControl_DW.H_rates_sp_DSTATE[3];
    rtb_Diff_l[2] = (0.137116671F)*RateControl_DW.H_rates_sp_DSTATE[4] +
      (0.118343525F)*RateControl_DW.H_rates_sp_DSTATE[5];
  }

  /* SampleTimeMath: '<S4>/TSamp'
   *
   * About '<S4>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  y_tmp_tmp = rtb_Diff_l[0] * 500.0F;

  /* Sum: '<S4>/Diff' incorporates:
   *  UnitDelay: '<S4>/UD'
   */
  rtb_Diff_l[0] = y_tmp_tmp - RateControl_DW.UD_DSTATE_i[0];

  /* SampleTimeMath: '<S4>/TSamp'
   *
   * About '<S4>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp_d_idx_0 = y_tmp_tmp;
  y_tmp_tmp = rtb_Diff_l[1] * 500.0F;

  /* Sum: '<S4>/Diff' incorporates:
   *  UnitDelay: '<S4>/UD'
   */
  rtb_Diff_l[1] = y_tmp_tmp - RateControl_DW.UD_DSTATE_i[1];

  /* SampleTimeMath: '<S4>/TSamp'
   *
   * About '<S4>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp_d_idx_1 = y_tmp_tmp;
  y_tmp_tmp = rtb_Diff_l[2] * 500.0F;

  /* Sum: '<S4>/Diff' incorporates:
   *  UnitDelay: '<S4>/UD'
   */
  rtb_Diff_l[2] = y_tmp_tmp - RateControl_DW.UD_DSTATE_i[2];

  /* DiscreteStateSpace: '<Root>/H_actuators' */
  {
    rtb_w_filtered[0] = (0.0385409F)*RateControl_DW.H_actuators_DSTATE[0] +
      (0.0371529944F)*RateControl_DW.H_actuators_DSTATE[1];
    rtb_w_filtered[1] = (0.0385409F)*RateControl_DW.H_actuators_DSTATE[2] +
      (0.0371529944F)*RateControl_DW.H_actuators_DSTATE[3];
    rtb_w_filtered[2] = (0.0385409F)*RateControl_DW.H_actuators_DSTATE[4] +
      (0.0371529944F)*RateControl_DW.H_actuators_DSTATE[5];
    rtb_w_filtered[3] = (0.0385409F)*RateControl_DW.H_actuators_DSTATE[6] +
      (0.0371529944F)*RateControl_DW.H_actuators_DSTATE[7];
  }

  /* MATLAB Function: '<Root>/INDI_allocator' incorporates:
   *  Delay: '<S139>/UD'
   *  Delay: '<S51>/UD'
   *  Delay: '<S95>/UD'
   *  DiscreteIntegrator: '<S100>/Integrator'
   *  DiscreteIntegrator: '<S144>/Integrator'
   *  DiscreteIntegrator: '<S56>/Integrator'
   *  Gain: '<S105>/Proportional Gain'
   *  Gain: '<S149>/Proportional Gain'
   *  Gain: '<S61>/Proportional Gain'
   *  Inport: '<Root>/accel_z_sp'
   *  Inport: '<Root>/act_fail_id'
   *  MATLAB Function: '<Root>/controlEffMatrix'
   *  SignalConversion: '<S8>/TmpSignal ConversionAt SFunction Inport4'
   *  Sum: '<Root>/Add'
   *  Sum: '<S109>/Sum'
   *  Sum: '<S139>/Diff'
   *  Sum: '<S153>/Sum'
   *  Sum: '<S1>/Diff'
   *  Sum: '<S51>/Diff'
   *  Sum: '<S65>/Sum'
   *  Sum: '<S95>/Diff'
   *  UnitDelay: '<S1>/UD'
   */
  /* :  [w_cmd] = INDI_allocator(act_fail_id, Omega_f_dot, accel_z_f, v, G, G_kal, w_f, par); */
  /* 'INDI_allocator:2:22' if isempty(du_last) */
  /* 'INDI_allocator:2:27' G = G*1e-3; */
  /* 'INDI_allocator:2:30' G1 = G(:, 1:4); */
  for (j = 0; j < 4; j++) {
    /* MATLAB Function: '<Root>/controlEffMatrix' */
    gain_tmp = j << 3;
    jmax = j << 2;
    G[jmax] = control_eff_matrix[gain_tmp] * 0.001F;
    jj = (j + 4) << 2;
    G[jj] = control_eff_matrix[gain_tmp + 4] * 0.001F;
    rtb_Product[jmax] = G[jmax];
    b_ix = 1 + jmax;
    G[b_ix] = control_eff_matrix[gain_tmp + 1] * 0.001F;
    G[1 + jj] = control_eff_matrix[gain_tmp + 5] * 0.001F;
    rtb_Product[b_ix] = G[b_ix];
    b_ix = 2 + jmax;
    G[b_ix] = control_eff_matrix[gain_tmp + 2] * 0.001F;
    G[2 + jj] = control_eff_matrix[gain_tmp + 6] * 0.001F;
    rtb_Product[b_ix] = G[b_ix];
    jmax += 3;
    G[jmax] = control_eff_matrix[gain_tmp + 3] * 0.001F;
    G[3 + jj] = control_eff_matrix[gain_tmp + 7] * 0.001F;
    rtb_Product[jmax] = G[jmax];
  }

  /* 'INDI_allocator:2:31' G2 = G(:, 5:8); */
  /* 'INDI_allocator:2:35' fail_flag = true; */
  fail_flag = true;

  /* 'INDI_allocator:2:39' if act_fail_id == 13 */
  if (RateControl_U.act_fail_id == 13) {
    /* 'INDI_allocator:2:40' fail_id_vec = single([1 3]); */
    exponent = 2;
    fail_id_vec_data[0] = 1.0F;
    fail_id_vec_data[1] = 3.0F;
  } else if (RateControl_U.act_fail_id == 24) {
    /* 'INDI_allocator:2:41' elseif act_fail_id == 24 */
    /* 'INDI_allocator:2:42' fail_id_vec = single([2 4]); */
    exponent = 2;
    fail_id_vec_data[0] = 2.0F;
    fail_id_vec_data[1] = 4.0F;
  } else {
    tf = false;
    b_ix = 1;
    exitg1 = false;
    while ((!exitg1) && (b_ix - 1 < 4)) {
      frexp(static_cast<real_T>(b_ix) / 2.0, &exponent);
      if (std::abs(static_cast<real_T>(b_ix) - static_cast<real_T>
                   (RateControl_U.act_fail_id)) < std::ldexp(1.0, exponent - 53))
      {
        tf = true;
        exitg1 = true;
      } else {
        b_ix++;
      }
    }

    if (tf) {
      /* 'INDI_allocator:2:43' elseif ismember(act_fail_id, [1 2 3 4]) */
      /* 'INDI_allocator:2:44' fail_id_vec = single([act_fail_id]); */
      exponent = 1;
      fail_id_vec_data[0] = static_cast<real32_T>(RateControl_U.act_fail_id);
    } else {
      /* 'INDI_allocator:2:45' else */
      /* 'INDI_allocator:2:46' fail_id_vec = single(0); */
      exponent = 1;
      fail_id_vec_data[0] = 0.0F;

      /* 'INDI_allocator:2:47' fail_flag = false; */
      fail_flag = false;
    }
  }

  /* 'INDI_allocator:2:51' dv = v - [Omega_f_dot; accel_z_f]; */
  /* 'INDI_allocator:2:53' if fail_flag == true */
  if (fail_flag) {
    /* 'INDI_allocator:2:54' G1_shrink = G1; */
    /* 'INDI_allocator:2:55' G1_shrink(:,fail_id_vec) = 0; */
    for (j = 0; j < exponent; j++) {
      b_ix = (static_cast<int32_T>(fail_id_vec_data[j]) - 1) << 2;
      rtb_Product[b_ix] = 0.0F;
      rtb_Product[1 + b_ix] = 0.0F;
      rtb_Product[2 + b_ix] = 0.0F;
      rtb_Product[3 + b_ix] = 0.0F;
    }

    /* 'INDI_allocator:2:56' G1_shrink(3,:) = 0; */
    rtb_Product[2] = 0.0F;
    rtb_Product[6] = 0.0F;
    rtb_Product[10] = 0.0F;
    rtb_Product[14] = 0.0F;

    /* 'INDI_allocator:2:57' G_pinv = pinv(G1_shrink); */
    pinv_uwVdyKpX(rtb_Product, G_pinv);

    /* 'INDI_allocator:2:58' du = G_pinv*(dv); */
    sigma = (((RateControlParams.roll_gain * rtb_Minus[0] +
               RateControl_DW.Integrator_DSTATE) + (rtb_TSamp_pb -
               RateControl_DW.UD_DSTATE_b)) + rtb_Diff_l[0]) - (a1 -
      RateControl_DW.UD_DSTATE_m[0]);
    rtb_IntegralGain = (((RateControlParams.pitch_gain * rtb_Minus[1] +
                          RateControl_DW.Integrator_DSTATE_f) + (rtb_TSamp_j -
      RateControl_DW.UD_DSTATE_l)) + rtb_Diff_l[1]) - (sqrtA0overA1 -
      RateControl_DW.UD_DSTATE_m[1]);
    rtb_IntegralGain_i = (((RateControlParams.yaw_gain * rtb_Minus[2] +
      RateControl_DW.Integrator_DSTATE_b) + (rtb_TSamp_h -
      RateControl_DW.UD_DSTATE_bg)) + rtb_Diff_l[2]) - (sqrtA0timesA1 -
      RateControl_DW.UD_DSTATE_m[2]);
    b_tmp = RateControl_U.accel_z_sp - rtb_accel_z_f;
    for (j = 0; j < 4; j++) {
      b_tmp_0 = G_pinv[j + 12] * b_tmp + (G_pinv[j + 8] * rtb_IntegralGain_i +
        (G_pinv[j + 4] * rtb_IntegralGain + G_pinv[j] * sigma));
      K0[j] = b_tmp_0;
    }
  } else {
    /* 'INDI_allocator:2:59' else */
    /* 'INDI_allocator:2:61' G_pinv = pinv(G1 + G2); */
    for (j = 0; j < 4; j++) {
      gain_tmp = j << 2;
      jmax = (4 + j) << 2;
      rtb_Product[gain_tmp] = G[jmax] + G[gain_tmp];
      jj = gain_tmp + 1;
      rtb_Product[jj] = G[jmax + 1] + G[jj];
      jj = gain_tmp + 2;
      rtb_Product[jj] = G[jmax + 2] + G[jj];
      gain_tmp += 3;
      rtb_Product[gain_tmp] = G[jmax + 3] + G[gain_tmp];
    }

    pinv_uwVdyKpX(rtb_Product, G_pinv);

    /* SignalConversion: '<S8>/TmpSignal ConversionAt SFunction Inport4' incorporates:
     *  Delay: '<S95>/UD'
     *  DiscreteIntegrator: '<S100>/Integrator'
     *  Gain: '<S105>/Proportional Gain'
     *  Inport: '<Root>/accel_z_sp'
     *  Sum: '<Root>/Add'
     *  Sum: '<S109>/Sum'
     *  Sum: '<S95>/Diff'
     */
    /* 'INDI_allocator:2:62' du = G_pinv*(dv + G2*du_last); */
    K0[3] = RateControl_U.accel_z_sp;
    K0[0] = ((RateControlParams.roll_gain * rtb_Minus[0] +
              RateControl_DW.Integrator_DSTATE) + (rtb_TSamp_pb -
              RateControl_DW.UD_DSTATE_b)) + rtb_Diff_l[0];
    K[0] = a1 - RateControl_DW.UD_DSTATE_m[0];

    /* SignalConversion: '<S8>/TmpSignal ConversionAt SFunction Inport4' incorporates:
     *  Delay: '<S51>/UD'
     *  DiscreteIntegrator: '<S56>/Integrator'
     *  Gain: '<S61>/Proportional Gain'
     *  Sum: '<Root>/Add'
     *  Sum: '<S1>/Diff'
     *  Sum: '<S51>/Diff'
     *  Sum: '<S65>/Sum'
     *  UnitDelay: '<S1>/UD'
     */
    K0[1] = ((RateControlParams.pitch_gain * rtb_Minus[1] +
              RateControl_DW.Integrator_DSTATE_f) + (rtb_TSamp_j -
              RateControl_DW.UD_DSTATE_l)) + rtb_Diff_l[1];
    K[1] = sqrtA0overA1 - RateControl_DW.UD_DSTATE_m[1];

    /* SignalConversion: '<S8>/TmpSignal ConversionAt SFunction Inport4' incorporates:
     *  Delay: '<S139>/UD'
     *  DiscreteIntegrator: '<S144>/Integrator'
     *  Gain: '<S149>/Proportional Gain'
     *  Sum: '<Root>/Add'
     *  Sum: '<S139>/Diff'
     *  Sum: '<S153>/Sum'
     *  Sum: '<S1>/Diff'
     *  UnitDelay: '<S1>/UD'
     */
    K0[2] = ((RateControlParams.yaw_gain * rtb_Minus[2] +
              RateControl_DW.Integrator_DSTATE_b) + (rtb_TSamp_h -
              RateControl_DW.UD_DSTATE_bg)) + rtb_Diff_l[2];
    K[2] = sqrtA0timesA1 - RateControl_DW.UD_DSTATE_m[2];
    K[3] = rtb_accel_z_f;
    for (j = 0; j < 4; j++) {
      fTr[j] = (((G[j + 16] * RateControl_DW.du_last[0] + G[j + 20] *
                  RateControl_DW.du_last[1]) + G[j + 24] *
                 RateControl_DW.du_last[2]) + G[j + 28] *
                RateControl_DW.du_last[3]) + (K0[j] - K[j]);
    }

    for (j = 0; j < 4; j++) {
      b_tmp_0 = G_pinv[j + 12] * fTr[3] + (G_pinv[j + 8] * fTr[2] + (G_pinv[j +
        4] * fTr[1] + G_pinv[j] * fTr[0]));
      K0[j] = b_tmp_0;
    }
  }

  /* 'INDI_allocator:2:66' w_cmd = w_f + du; */
  /* 'INDI_allocator:2:69' w_max = par.w_max; */
  /* 'INDI_allocator:2:70' w_min = par.w_min; */
  /* 'INDI_allocator:2:72' i_up = find(w_cmd>=w_max); */
  RateControl_Y.w_sp[0] = rtb_w_filtered[0] + K0[0];
  x[0] = (RateControl_Y.w_sp[0] >= 1256.0F);
  RateControl_Y.w_sp[1] = rtb_w_filtered[1] + K0[1];
  x[1] = (RateControl_Y.w_sp[1] >= 1256.0F);
  RateControl_Y.w_sp[2] = rtb_w_filtered[2] + K0[2];
  x[2] = (RateControl_Y.w_sp[2] >= 1256.0F);
  RateControl_Y.w_sp[3] = rtb_w_filtered[3] + K0[3];
  x[3] = (RateControl_Y.w_sp[3] >= 1256.0F);
  jmax = 0;
  exponent = 0;
  exitg1 = false;
  while ((!exitg1) && (exponent < 4)) {
    if (x[exponent]) {
      jmax++;
      ii_data[jmax - 1] = static_cast<int8_T>((exponent + 1));
      if (jmax >= 4) {
        exitg1 = true;
      } else {
        exponent++;
      }
    } else {
      exponent++;
    }
  }

  if (1 > jmax) {
    jmax = 0;
  }

  exponent = jmax;
  if (0 <= jmax - 1) {
    memcpy(&i_up_data[0], &ii_data[0], jmax * sizeof(int8_T));
  }

  /* 'INDI_allocator:2:73' i_down = find(w_cmd<w_min); */
  x[0] = (RateControl_Y.w_sp[0] < 300.0F);
  x[1] = (RateControl_Y.w_sp[1] < 300.0F);
  x[2] = (RateControl_Y.w_sp[2] < 300.0F);
  x[3] = (RateControl_Y.w_sp[3] < 300.0F);
  jmax = 0;
  gain_tmp = 0;
  exitg1 = false;
  while ((!exitg1) && (gain_tmp < 4)) {
    if (x[gain_tmp]) {
      jmax++;
      ii_data[jmax - 1] = static_cast<int8_T>((gain_tmp + 1));
      if (jmax >= 4) {
        exitg1 = true;
      } else {
        gain_tmp++;
      }
    } else {
      gain_tmp++;
    }
  }

  if (1 > jmax) {
    jmax = 0;
  }

  /* 'INDI_allocator:2:75' du(i_up) = w_max - w_f(i_up); */
  for (j = 0; j < exponent; j++) {
    gain_tmp = i_up_data[j] - 1;
    K0[gain_tmp] = 1256.0F - rtb_w_filtered[gain_tmp];
  }

  /* 'INDI_allocator:2:76' du(i_down) =  w_min - w_f(i_down); */
  for (j = 0; j < jmax; j++) {
    gain_tmp = ii_data[j] - 1;
    K0[gain_tmp] = 300.0F - rtb_w_filtered[gain_tmp];
  }

  /* 'INDI_allocator:2:78' w_cmd(i_up) = w_max; */
  for (j = 0; j < exponent; j++) {
    RateControl_Y.w_sp[i_up_data[j] - 1] = 1256.0F;
  }

  /* 'INDI_allocator:2:79' w_cmd(i_down) = w_min; */
  for (j = 0; j < jmax; j++) {
    RateControl_Y.w_sp[ii_data[j] - 1] = 300.0F;
  }

  /* 'INDI_allocator:2:81' du_last = du; */
  RateControl_DW.du_last[0] = K0[0];
  RateControl_DW.du_last[1] = K0[1];
  RateControl_DW.du_last[2] = K0[2];
  RateControl_DW.du_last[3] = K0[3];

  /* End of MATLAB Function: '<Root>/INDI_allocator' */

  /* MATLAB Function: '<Root>/MATLAB Function3' incorporates:
   *  DataTypeConversion: '<Root>/Cast To Double3'
   *  Inport: '<Root>/act_limit_id'
   *  Inport: '<Root>/act_limit_rpm'
   *  Inport: '<Root>/act_saw_amp'
   *  Inport: '<Root>/act_saw_freq'
   */
  /* :  w_sp_out = failure_inducer(act_limit_id, act_limit_rpm, act_sawtth_amp, act_sawtth_freq, w_sp_in); */
  /* 'failure_inducer:13' fail_flag = true; */
  fail_flag = true;

  /* 'failure_inducer:14' Ts = 0.002; */
  /* 'failure_inducer:17' if act_fail_id == 13 */
  if (RateControl_U.act_limit_id == 13) {
    /* 'failure_inducer:18' fail_id_vec = single([1 3]); */
    exponent = 2;
    fail_id_vec_data_0[0] = 1.0F;
    fail_id_vec_data_0[1] = 3.0F;
  } else if (RateControl_U.act_limit_id == 24) {
    /* 'failure_inducer:19' elseif act_fail_id == 24 */
    /* 'failure_inducer:20' fail_id_vec = single([2 4]); */
    exponent = 2;
    fail_id_vec_data_0[0] = 2.0F;
    fail_id_vec_data_0[1] = 4.0F;
  } else {
    tf = false;
    b_ix = 1;
    exitg1 = false;
    while ((!exitg1) && (b_ix - 1 < 4)) {
      frexp(static_cast<real_T>(b_ix) / 2.0, &exponent_0);
      if (std::abs(static_cast<real_T>(b_ix) - static_cast<real_T>
                   (RateControl_U.act_limit_id)) < std::ldexp(1.0, exponent_0 -
           53)) {
        tf = true;
        exitg1 = true;
      } else {
        b_ix++;
      }
    }

    if (tf) {
      /* 'failure_inducer:21' elseif ismember(act_fail_id, [1 2 3 4]) */
      /* 'failure_inducer:22' fail_id_vec = single([act_fail_id]); */
      exponent = 1;
      fail_id_vec_data_0[0] = static_cast<real32_T>(RateControl_U.act_limit_id);
    } else {
      /* 'failure_inducer:23' else */
      /* 'failure_inducer:24' fail_id_vec = single(0); */
      exponent = 1;
      fail_id_vec_data_0[0] = 0.0F;

      /* 'failure_inducer:25' fail_flag = false; */
      fail_flag = false;
    }
  }

  /* 'failure_inducer:28' w_sp_out = w_sp_in; */
  /* 'failure_inducer:31' act_limit_rads = act_limit_rpm*2*pi/60; */
  act_limit_rads = static_cast<real_T>(RateControl_U.act_limit_rpm) * 2.0 *
    3.1415926535897931 / 60.0;

  /* 'failure_inducer:33' if fail_flag == true */
  if (fail_flag) {
    /* 'failure_inducer:34' w_sp_out(fail_id_vec) = min(act_limit_rads, w_sp_in(fail_id_vec)); */
    for (j = 0; j < exponent; j++) {
      b_tmp_data[j] = static_cast<int32_T>(fail_id_vec_data_0[j]);
    }

    if (0 <= static_cast<int8_T>(exponent) - 1) {
      memcpy(&b_z1_data[0], &fail_id_vec_data[0], static_cast<int8_T>(exponent) *
             sizeof(real32_T));
    }

    for (jj = 0; jj < static_cast<int8_T>(exponent); jj++) {
      sigma = RateControl_Y.w_sp[static_cast<int32_T>(fail_id_vec_data_0[jj]) -
        1];
      if ((static_cast<real32_T>(act_limit_rads) < sigma) || rtIsNaNF(sigma)) {
        b_z1_data[jj] = static_cast<real32_T>(act_limit_rads);
      } else {
        b_z1_data[jj] = sigma;
      }
    }

    for (j = 0; j < exponent; j++) {
      RateControl_Y.w_sp[b_tmp_data[j] - 1] = b_z1_data[j];
    }

    /* 'failure_inducer:44' t = counter*Ts; */
    /* 'failure_inducer:45' freq = double(act_sawtth_freq); */
    /* 'failure_inducer:46' amp = double(act_sawtth_amp); */
    /* 'failure_inducer:48' sawtooth_signal = mod(t*freq, 1); */
    act_limit_rads = RateControl_DW.counter * 0.002 * static_cast<real_T>
      (RateControl_U.act_saw_freq);
    if (rtIsNaN(act_limit_rads) || rtIsInf(act_limit_rads)) {
      sawtooth_signal = (rtNaN);
    } else if (act_limit_rads == 0.0) {
      sawtooth_signal = 0.0;
    } else {
      sawtooth_signal = std::fmod(act_limit_rads, 1.0);
      if (sawtooth_signal == 0.0) {
        sawtooth_signal = 0.0;
      } else {
        if (act_limit_rads < 0.0) {
          sawtooth_signal++;
        }
      }
    }

    /* 'failure_inducer:50' w_sp_out(fail_id_vec) = w_sp_out(fail_id_vec) -amp/2 + amp*sawtooth_signal; */
    sigma = static_cast<real32_T>((static_cast<real_T>(RateControl_U.act_saw_amp)
      / 2.0));
    rtb_IntegralGain = static_cast<real32_T>((static_cast<real_T>
      (RateControl_U.act_saw_amp) * sawtooth_signal));
    for (j = 0; j < exponent; j++) {
      exponent_0 = static_cast<int32_T>(fail_id_vec_data_0[j]);
      b_data[j] = exponent_0;
      b_z1_data[j] = (RateControl_Y.w_sp[exponent_0 - 1] - sigma) +
        rtb_IntegralGain;
    }

    for (j = 0; j < exponent; j++) {
      RateControl_Y.w_sp[b_data[j] - 1] = b_z1_data[j];
    }

    /* 'failure_inducer:52' counter = counter + 1; */
    RateControl_DW.counter++;
  }

  /* End of MATLAB Function: '<Root>/MATLAB Function3' */

  /* Gain: '<S53>/Integral Gain' */
  /* 'failure_inducer:39' if isempty(counter) */
  /* 'failure_inducer:43' if fail_flag == true */
  /* 'failure_inducer:55' w_sp_out_single = single(w_sp_out); */
  /* :  actuator_controls = w_sp_to_px4_actuator_controls(w_cmd, par); */
  /* 'w_sp_to_px4_actuator_controls:10' w_min_sq = par.px4.w_min^2; */
  /* 'w_sp_to_px4_actuator_controls:11' w_max_sq = par.px4.w_max^2; */
  /* 'w_sp_to_px4_actuator_controls:13' actuator_controls = -1 + 2*(w_sp.^2 - w_min_sq)./(w_max_sq - w_min_sq); */
  /* :  w_min_sq = 1256^2; */
  /* :  w_max_sq = 300^2; */
  /* :  y = 300+(1256-300).*(1-(w_sp.^2 - w_min_sq)./(w_max_sq - w_min_sq)); */
  /* :  y = RateControl_KF_test_MeasurementFcn(xhat, measInput); */
  /* 'RateControl_KF_test_MeasurementFcn:8' G_a = in1(4,:); */
  /* 'RateControl_KF_test_MeasurementFcn:9' G_dr = in1(5,:); */
  /* 'RateControl_KF_test_MeasurementFcn:10' G_p = in1(1,:); */
  /* 'RateControl_KF_test_MeasurementFcn:11' G_q = in1(2,:); */
  /* 'RateControl_KF_test_MeasurementFcn:12' G_r = in1(3,:); */
  /* 'RateControl_KF_test_MeasurementFcn:13' k_1 = in1(6,:); */
  /* 'RateControl_KF_test_MeasurementFcn:14' k_2 = in1(7,:); */
  /* 'RateControl_KF_test_MeasurementFcn:15' k_3 = in1(8,:); */
  /* 'RateControl_KF_test_MeasurementFcn:16' k_4 = in1(9,:); */
  /* 'RateControl_KF_test_MeasurementFcn:17' w1 = in2(1); */
  /* 'RateControl_KF_test_MeasurementFcn:18' w2 = in2(2); */
  /* 'RateControl_KF_test_MeasurementFcn:19' w3 = in2(3); */
  /* 'RateControl_KF_test_MeasurementFcn:20' w4 = in2(4); */
  /* 'RateControl_KF_test_MeasurementFcn:21' w_dot1 = in2(5); */
  /* 'RateControl_KF_test_MeasurementFcn:22' w_dot2 = in2(6); */
  /* 'RateControl_KF_test_MeasurementFcn:23' w_dot3 = in2(7); */
  /* 'RateControl_KF_test_MeasurementFcn:24' w_dot4 = in2(8); */
  /* 'RateControl_KF_test_MeasurementFcn:25' y = [(G_p.*k_1.*w1.^2)./1.0e+6-(G_p.*k_2.*w2.^2)./1.0e+6-(G_p.*k_3.*w3.^2)./1.0e+6+(G_p.*k_4.*w4.^2)./1.0e+6;(G_q.*k_1.*w1.^2)./1.0e+6+(G_q.*k_2.*w2.^2)./1.0e+6-(G_q.*k_3.*w3.^2)./1.0e+6-(G_q.*k_4.*w4.^2)./1.0e+6;(G_dr.*w_dot1)./1.0e+3-(G_dr.*w_dot2)./1.0e+3+(G_dr.*w_dot3)./1.0e+3-(G_dr.*w_dot4)./1.0e+3+(G_r.*k_1.*w1.^2)./1.0e+6-(G_r.*k_2.*w2.^2)./1.0e+6+(G_r.*k_3.*w3.^2)./1.0e+6-(G_r.*k_4.*w4.^2)./1.0e+6;G_a.*k_1.*w1.^2.*(-1.0e-6)-(G_a.*k_2.*w2.^2)./1.0e+6-(G_a.*k_3.*w3.^2)./1.0e+6-(G_a.*k_4.*w4.^2)./1.0e+6]; */
  rtb_IntegralGain = 0.0F * rtb_Minus[1];

  /* Gain: '<S97>/Integral Gain' */
  rtb_IntegralGain_i = 0.0F * rtb_Minus[0];

  /* Gain: '<S141>/Integral Gain' */
  sigma = 0.0F * rtb_Minus[2];

  /* MATLAB Function: '<Root>/MATLAB Function2' */
  /* :  RPM_TO_RADS = 2*pi/60; */
  /* :  rads = single(RPM_TO_RADS.*rpm); */
  RateControl_Y.actuators_control[0] = RateControl_Y.w_sp[0] *
    RateControl_Y.w_sp[0];

  /* Outport: '<Root>/actuators_control' incorporates:
   *  MATLAB Function: '<Root>/MATLAB Function2'
   */
  RateControl_Y.actuators_control[0] = (RateControl_Y.actuators_control[0] -
    90000.0F) * 2.0F / 1.487536E+6F + -1.0F;

  /* MATLAB Function: '<Root>/MATLAB Function1' incorporates:
   *  Inport: '<Root>/esc_rpm'
   */
  rtb_rads[0] = static_cast<real32_T>(rt_roundd_snf(0.10471975511965977 *
    static_cast<real_T>(RateControl_U.esc_rpm[0])));

  /* Switch: '<Root>/MeasureOrEstimateRotorSpeed' */
  rtb_MeasureOrEstimateRotorSpeed[0] = rtb_rads[0];

  /* MATLAB Function: '<Root>/MATLAB Function2' */
  RateControl_Y.actuators_control[1] = RateControl_Y.w_sp[1] *
    RateControl_Y.w_sp[1];

  /* Outport: '<Root>/actuators_control' incorporates:
   *  MATLAB Function: '<Root>/MATLAB Function2'
   */
  RateControl_Y.actuators_control[1] = (RateControl_Y.actuators_control[1] -
    90000.0F) * 2.0F / 1.487536E+6F + -1.0F;

  /* MATLAB Function: '<Root>/MATLAB Function1' incorporates:
   *  Inport: '<Root>/esc_rpm'
   */
  rtb_rads[1] = static_cast<real32_T>(rt_roundd_snf(0.10471975511965977 *
    static_cast<real_T>(RateControl_U.esc_rpm[1])));

  /* Switch: '<Root>/MeasureOrEstimateRotorSpeed' */
  rtb_MeasureOrEstimateRotorSpeed[1] = rtb_rads[1];

  /* MATLAB Function: '<Root>/MATLAB Function2' */
  RateControl_Y.actuators_control[2] = RateControl_Y.w_sp[2] *
    RateControl_Y.w_sp[2];

  /* Outport: '<Root>/actuators_control' incorporates:
   *  MATLAB Function: '<Root>/MATLAB Function2'
   */
  RateControl_Y.actuators_control[2] = (RateControl_Y.actuators_control[2] -
    90000.0F) * 2.0F / 1.487536E+6F + -1.0F;

  /* MATLAB Function: '<Root>/MATLAB Function1' incorporates:
   *  Inport: '<Root>/esc_rpm'
   */
  rtb_rads[2] = static_cast<real32_T>(rt_roundd_snf(0.10471975511965977 *
    static_cast<real_T>(RateControl_U.esc_rpm[2])));

  /* Switch: '<Root>/MeasureOrEstimateRotorSpeed' */
  rtb_MeasureOrEstimateRotorSpeed[2] = rtb_rads[2];

  /* MATLAB Function: '<Root>/MATLAB Function2' */
  RateControl_Y.actuators_control[3] = RateControl_Y.w_sp[3] *
    RateControl_Y.w_sp[3];

  /* Outport: '<Root>/actuators_control' incorporates:
   *  MATLAB Function: '<Root>/MATLAB Function2'
   */
  RateControl_Y.actuators_control[3] = (RateControl_Y.actuators_control[3] -
    90000.0F) * 2.0F / 1.487536E+6F + -1.0F;

  /* MATLAB Function: '<Root>/MATLAB Function1' incorporates:
   *  Inport: '<Root>/esc_rpm'
   */
  rtb_rads[3] = static_cast<real32_T>(rt_roundd_snf(0.10471975511965977 *
    static_cast<real_T>(RateControl_U.esc_rpm[3])));

  /* Switch: '<Root>/MeasureOrEstimateRotorSpeed' */
  rtb_MeasureOrEstimateRotorSpeed[3] = rtb_rads[3];

  /* Update for DiscreteStateSpace: '<Root>/H_est_rates' incorporates:
   *  Inport: '<Root>/rates'
   */
  {
    real32_T xnew[6];
    xnew[0] = (1.88637245F)*RateControl_DW.H_est_rates_DSTATE[0] +
      (-0.895834148F)*RateControl_DW.H_est_rates_DSTATE[1];
    xnew[0] += (0.125F)*RateControl_U.rates[0];
    xnew[1] = (1.0F)*RateControl_DW.H_est_rates_DSTATE[0];
    xnew[2] = (1.88637245F)*RateControl_DW.H_est_rates_DSTATE[2] +
      (-0.895834148F)*RateControl_DW.H_est_rates_DSTATE[3];
    xnew[2] += (0.125F)*RateControl_U.rates[1];
    xnew[3] = (1.0F)*RateControl_DW.H_est_rates_DSTATE[2];
    xnew[4] = (1.88637245F)*RateControl_DW.H_est_rates_DSTATE[4] +
      (-0.895834148F)*RateControl_DW.H_est_rates_DSTATE[5];
    xnew[4] += (0.125F)*RateControl_U.rates[2];
    xnew[5] = (1.0F)*RateControl_DW.H_est_rates_DSTATE[4];
    (void) memcpy(&RateControl_DW.H_est_rates_DSTATE[0], xnew,
                  sizeof(real32_T)*6);
  }

  /* Update for UnitDelay: '<S5>/UD' */
  RateControl_DW.UD_DSTATE[0] = rtb_TSamp_idx_0;
  RateControl_DW.UD_DSTATE[1] = rtb_TSamp_idx_1;
  RateControl_DW.UD_DSTATE[2] = rtb_TSamp;

  /* Update for DiscreteStateSpace: '<Root>/H_est_actuators' */
  {
    real32_T xnew[8];
    xnew[0] = (1.88637245F)*RateControl_DW.H_est_actuators_DSTATE[0] +
      (-0.895834148F)*RateControl_DW.H_est_actuators_DSTATE[1];
    xnew[0] += (0.125F)*rtb_rads[0];
    xnew[1] = (1.0F)*RateControl_DW.H_est_actuators_DSTATE[0];
    xnew[2] = (1.88637245F)*RateControl_DW.H_est_actuators_DSTATE[2] +
      (-0.895834148F)*RateControl_DW.H_est_actuators_DSTATE[3];
    xnew[2] += (0.125F)*rtb_rads[1];
    xnew[3] = (1.0F)*RateControl_DW.H_est_actuators_DSTATE[2];
    xnew[4] = (1.88637245F)*RateControl_DW.H_est_actuators_DSTATE[4] +
      (-0.895834148F)*RateControl_DW.H_est_actuators_DSTATE[5];
    xnew[4] += (0.125F)*rtb_rads[2];
    xnew[5] = (1.0F)*RateControl_DW.H_est_actuators_DSTATE[4];
    xnew[6] = (1.88637245F)*RateControl_DW.H_est_actuators_DSTATE[6] +
      (-0.895834148F)*RateControl_DW.H_est_actuators_DSTATE[7];
    xnew[6] += (0.125F)*rtb_rads[3];
    xnew[7] = (1.0F)*RateControl_DW.H_est_actuators_DSTATE[6];
    (void) memcpy(&RateControl_DW.H_est_actuators_DSTATE[0], xnew,
                  sizeof(real32_T)*8);
  }

  /* Update for UnitDelay: '<S3>/UD' */
  RateControl_DW.UD_DSTATE_p[0] = rtb_TSamp_b_idx_0;
  RateControl_DW.UD_DSTATE_p[1] = rtb_TSamp_b_idx_1;
  RateControl_DW.UD_DSTATE_p[2] = rtb_TSamp_b_idx_2;
  RateControl_DW.UD_DSTATE_p[3] = rtb_TSamp_kv;

  /* Update for DiscreteStateSpace: '<Root>/H_est_accel' incorporates:
   *  Inport: '<Root>/accel'
   */
  {
    real32_T xnew[2];
    xnew[0] = (1.88637245F)*RateControl_DW.H_est_accel_DSTATE[0] +
      (-0.895834148F)*RateControl_DW.H_est_accel_DSTATE[1];
    xnew[0] += 0.125F*RateControl_U.accel[2];
    xnew[1] = (1.0F)*RateControl_DW.H_est_accel_DSTATE[0];
    (void) memcpy(&RateControl_DW.H_est_accel_DSTATE[0], xnew,
                  sizeof(real32_T)*2);
  }

  /* Update for Delay: '<S20>/delayBuffery' */
  RateControl_DW.icLoad = 0U;

  /* Update for Delay: '<S20>/delayBufferH' */
  RateControl_DW.icLoad_i = 0U;

  /* Update for Delay: '<S20>/delayTheta' */
  RateControl_DW.icLoad_d = 0U;

  /* Update for Delay: '<S20>/delayL' */
  RateControl_DW.icLoad_e = 0U;

  /* Update for DiscreteStateSpace: '<Root>/H_rates' incorporates:
   *  Inport: '<Root>/rates'
   */
  {
    real32_T xnew[6];
    xnew[0] = (1.88637245F)*RateControl_DW.H_rates_DSTATE[0] + (-0.895834148F)*
      RateControl_DW.H_rates_DSTATE[1];
    xnew[0] += (0.125F)*RateControl_U.rates[0];
    xnew[1] = (1.0F)*RateControl_DW.H_rates_DSTATE[0];
    xnew[2] = (1.88637245F)*RateControl_DW.H_rates_DSTATE[2] + (-0.895834148F)*
      RateControl_DW.H_rates_DSTATE[3];
    xnew[2] += (0.125F)*RateControl_U.rates[1];
    xnew[3] = (1.0F)*RateControl_DW.H_rates_DSTATE[2];
    xnew[4] = (1.88637245F)*RateControl_DW.H_rates_DSTATE[4] + (-0.895834148F)*
      RateControl_DW.H_rates_DSTATE[5];
    xnew[4] += (0.125F)*RateControl_U.rates[2];
    xnew[5] = (1.0F)*RateControl_DW.H_rates_DSTATE[4];
    (void) memcpy(&RateControl_DW.H_rates_DSTATE[0], xnew,
                  sizeof(real32_T)*6);
  }

  /* Update for UnitDelay: '<S1>/UD' */
  RateControl_DW.UD_DSTATE_m[0] = a1;
  RateControl_DW.UD_DSTATE_m[1] = sqrtA0overA1;
  RateControl_DW.UD_DSTATE_m[2] = sqrtA0timesA1;

  /* Update for DiscreteStateSpace: '<Root>/H_accel' incorporates:
   *  Inport: '<Root>/accel'
   */
  {
    real32_T xnew[2];
    xnew[0] = (1.88637245F)*RateControl_DW.H_accel_DSTATE[0] + (-0.895834148F)*
      RateControl_DW.H_accel_DSTATE[1];
    xnew[0] += 0.125F*RateControl_U.accel[2];
    xnew[1] = (1.0F)*RateControl_DW.H_accel_DSTATE[0];
    (void) memcpy(&RateControl_DW.H_accel_DSTATE[0], xnew,
                  sizeof(real32_T)*2);
  }

  /* Update for DiscreteIntegrator: '<S100>/Integrator' */
  RateControl_DW.Integrator_DSTATE += 0.002F * rtb_IntegralGain_i;

  /* Update for Delay: '<S95>/UD' */
  RateControl_DW.UD_DSTATE_b = rtb_TSamp_pb;

  /* Update for DiscreteIntegrator: '<S56>/Integrator' */
  RateControl_DW.Integrator_DSTATE_f += 0.002F * rtb_IntegralGain;

  /* Update for Delay: '<S51>/UD' */
  RateControl_DW.UD_DSTATE_l = rtb_TSamp_j;

  /* Update for DiscreteIntegrator: '<S144>/Integrator' */
  RateControl_DW.Integrator_DSTATE_b += 0.002F * sigma;

  /* Update for Delay: '<S139>/UD' */
  RateControl_DW.UD_DSTATE_bg = rtb_TSamp_h;

  /* Update for DiscreteStateSpace: '<Root>/H_rates_sp' incorporates:
   *  Inport: '<Root>/rates_sp'
   */
  {
    real32_T xnew[6];
    xnew[0] = (1.51630628F)*RateControl_DW.H_rates_sp_DSTATE[0] + (-0.644036412F)*
      RateControl_DW.H_rates_sp_DSTATE[1];
    xnew[0] += (0.5F)*RateControl_U.rates_sp[0];
    xnew[1] = (1.0F)*RateControl_DW.H_rates_sp_DSTATE[0];
    xnew[2] = (1.51630628F)*RateControl_DW.H_rates_sp_DSTATE[2] + (-0.644036412F)*
      RateControl_DW.H_rates_sp_DSTATE[3];
    xnew[2] += (0.5F)*RateControl_U.rates_sp[1];
    xnew[3] = (1.0F)*RateControl_DW.H_rates_sp_DSTATE[2];
    xnew[4] = (1.51630628F)*RateControl_DW.H_rates_sp_DSTATE[4] + (-0.644036412F)*
      RateControl_DW.H_rates_sp_DSTATE[5];
    xnew[4] += (0.5F)*RateControl_U.rates_sp[2];
    xnew[5] = (1.0F)*RateControl_DW.H_rates_sp_DSTATE[4];
    (void) memcpy(&RateControl_DW.H_rates_sp_DSTATE[0], xnew,
                  sizeof(real32_T)*6);
  }

  /* Update for UnitDelay: '<S4>/UD' */
  RateControl_DW.UD_DSTATE_i[0] = rtb_TSamp_d_idx_0;
  RateControl_DW.UD_DSTATE_i[1] = rtb_TSamp_d_idx_1;
  RateControl_DW.UD_DSTATE_i[2] = y_tmp_tmp;

  /* Update for DiscreteStateSpace: '<Root>/H_actuators' */
  {
    real32_T xnew[8];
    xnew[0] = (1.88637245F)*RateControl_DW.H_actuators_DSTATE[0] +
      (-0.895834148F)*RateControl_DW.H_actuators_DSTATE[1];
    xnew[0] += (0.125F)*rtb_MeasureOrEstimateRotorSpeed[0];
    xnew[1] = (1.0F)*RateControl_DW.H_actuators_DSTATE[0];
    xnew[2] = (1.88637245F)*RateControl_DW.H_actuators_DSTATE[2] +
      (-0.895834148F)*RateControl_DW.H_actuators_DSTATE[3];
    xnew[2] += (0.125F)*rtb_MeasureOrEstimateRotorSpeed[1];
    xnew[3] = (1.0F)*RateControl_DW.H_actuators_DSTATE[2];
    xnew[4] = (1.88637245F)*RateControl_DW.H_actuators_DSTATE[4] +
      (-0.895834148F)*RateControl_DW.H_actuators_DSTATE[5];
    xnew[4] += (0.125F)*rtb_MeasureOrEstimateRotorSpeed[2];
    xnew[5] = (1.0F)*RateControl_DW.H_actuators_DSTATE[4];
    xnew[6] = (1.88637245F)*RateControl_DW.H_actuators_DSTATE[6] +
      (-0.895834148F)*RateControl_DW.H_actuators_DSTATE[7];
    xnew[6] += (0.125F)*rtb_MeasureOrEstimateRotorSpeed[3];
    xnew[7] = (1.0F)*RateControl_DW.H_actuators_DSTATE[6];
    (void) memcpy(&RateControl_DW.H_actuators_DSTATE[0], xnew,
                  sizeof(real32_T)*8);
  }
}

/* Model initialize function */
void RateControlModelClass::initialize()
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize error status */
  rtmSetErrorStatus((&RateControl_M), (NULL));

  /* states (dwork) */
  (void) memset((void *)&RateControl_DW, 0,
                sizeof(DW_RateControl_T));

  /* external inputs */
  (void)memset(&RateControl_U, 0, sizeof(ExtU_RateControl_T));

  /* external outputs */
  (void) memset((void *)&RateControl_Y, 0,
                sizeof(ExtY_RateControl_T));

  {
    int32_T i;

    /* Start for DataStoreMemory: '<S9>/DataStoreMemory - P' */
    memcpy(&RateControl_DW.P[0], &rtCP_DataStoreMemoryP_InitialVa[0], 81U *
           sizeof(real32_T));

    /* Start for DataStoreMemory: '<S9>/DataStoreMemory - x' */
    for (i = 0; i < 9; i++) {
      RateControl_DW.x[i] = rtCP_DataStoreMemoryx_InitialVa[i];
    }

    /* End of Start for DataStoreMemory: '<S9>/DataStoreMemory - x' */

    /* ConstCode for Outport: '<Root>/fail_id' */
    RateControl_Y.fail_id = 0.0F;
  }

  /* InitializeConditions for DiscreteStateSpace: '<Root>/H_est_rates' incorporates:
   *  Inport: '<Root>/rates'
   */
  {
    int_T i1;
    real32_T *dw_DSTATE = &RateControl_DW.H_est_rates_DSTATE[0];
    for (i1=0; i1 < 6; i1++) {
      dw_DSTATE[i1] = 0.0F;
    }
  }

  /* InitializeConditions for UnitDelay: '<S5>/UD' */
  RateControl_DW.UD_DSTATE[0] = 0.0F;
  RateControl_DW.UD_DSTATE[1] = 0.0F;
  RateControl_DW.UD_DSTATE[2] = 0.0F;

  /* InitializeConditions for DiscreteStateSpace: '<Root>/H_est_actuators' */
  {
    int_T i1;
    real32_T *dw_DSTATE = &RateControl_DW.H_est_actuators_DSTATE[0];
    for (i1=0; i1 < 8; i1++) {
      dw_DSTATE[i1] = 0.0F;
    }
  }

  /* InitializeConditions for UnitDelay: '<S3>/UD' */
  RateControl_DW.UD_DSTATE_p[0] = 0.0F;
  RateControl_DW.UD_DSTATE_p[1] = 0.0F;
  RateControl_DW.UD_DSTATE_p[2] = 0.0F;
  RateControl_DW.UD_DSTATE_p[3] = 0.0F;

  /* InitializeConditions for DiscreteStateSpace: '<Root>/H_est_accel' incorporates:
   *  Inport: '<Root>/accel'
   */
  RateControl_DW.H_est_accel_DSTATE[0] = 0.0F;
  RateControl_DW.H_est_accel_DSTATE[1] = 0.0F;

  /* InitializeConditions for Delay: '<S20>/delayBuffery' */
  RateControl_DW.icLoad = 1U;

  /* InitializeConditions for Delay: '<S20>/delayBufferH' */
  RateControl_DW.icLoad_i = 1U;

  /* InitializeConditions for Delay: '<S20>/delayTheta' */
  RateControl_DW.icLoad_d = 1U;

  /* InitializeConditions for Delay: '<S20>/delayL' */
  RateControl_DW.icLoad_e = 1U;

  /* InitializeConditions for DiscreteStateSpace: '<Root>/H_rates' incorporates:
   *  Inport: '<Root>/rates'
   */
  {
    int_T i1;
    real32_T *dw_DSTATE = &RateControl_DW.H_rates_DSTATE[0];
    for (i1=0; i1 < 6; i1++) {
      dw_DSTATE[i1] = 0.0F;
    }
  }

  /* InitializeConditions for UnitDelay: '<S1>/UD' */
  RateControl_DW.UD_DSTATE_m[0] = 0.0F;
  RateControl_DW.UD_DSTATE_m[1] = 0.0F;
  RateControl_DW.UD_DSTATE_m[2] = 0.0F;

  /* InitializeConditions for DiscreteStateSpace: '<Root>/H_accel' incorporates:
   *  Inport: '<Root>/accel'
   */
  RateControl_DW.H_accel_DSTATE[0] = 0.0F;
  RateControl_DW.H_accel_DSTATE[1] = 0.0F;

  /* InitializeConditions for DiscreteIntegrator: '<S100>/Integrator' */
  RateControl_DW.Integrator_DSTATE = 0.0F;

  /* InitializeConditions for Delay: '<S95>/UD' */
  RateControl_DW.UD_DSTATE_b = 0.0F;

  /* InitializeConditions for DiscreteIntegrator: '<S56>/Integrator' */
  RateControl_DW.Integrator_DSTATE_f = 0.0F;

  /* InitializeConditions for Delay: '<S51>/UD' */
  RateControl_DW.UD_DSTATE_l = 0.0F;

  /* InitializeConditions for DiscreteIntegrator: '<S144>/Integrator' */
  RateControl_DW.Integrator_DSTATE_b = 0.0F;

  /* InitializeConditions for Delay: '<S139>/UD' */
  RateControl_DW.UD_DSTATE_bg = 0.0F;

  /* InitializeConditions for DiscreteStateSpace: '<Root>/H_rates_sp' incorporates:
   *  Inport: '<Root>/rates_sp'
   */
  {
    int_T i1;
    real32_T *dw_DSTATE = &RateControl_DW.H_rates_sp_DSTATE[0];
    for (i1=0; i1 < 6; i1++) {
      dw_DSTATE[i1] = 0.0F;
    }
  }

  /* InitializeConditions for UnitDelay: '<S4>/UD' */
  RateControl_DW.UD_DSTATE_i[0] = 0.0F;
  RateControl_DW.UD_DSTATE_i[1] = 0.0F;
  RateControl_DW.UD_DSTATE_i[2] = 0.0F;

  /* InitializeConditions for DiscreteStateSpace: '<Root>/H_actuators' */
  {
    int_T i1;
    real32_T *dw_DSTATE = &RateControl_DW.H_actuators_DSTATE[0];
    for (i1=0; i1 < 8; i1++) {
      dw_DSTATE[i1] = 0.0F;
    }
  }

  /* SystemInitialize for MATLAB Function: '<S20>/RLS' */
  RateControl_DW.rlsEstimator_not_empty = false;

  /* SystemInitialize for MATLAB Function: '<Root>/MATLAB Function5' */
  /* 'fail_diagnosis:14' fail_id = 0; */
  RateControl_DW.fail_id = 0.0;

  /* SystemInitialize for MATLAB Function: '<Root>/INDI_allocator' */
  /* 'INDI_allocator:2:23' du_last = single([0 0 0 0]'); */
  RateControl_DW.du_last[0] = 0.0F;
  RateControl_DW.du_last[1] = 0.0F;
  RateControl_DW.du_last[2] = 0.0F;
  RateControl_DW.du_last[3] = 0.0F;

  /* SystemInitialize for MATLAB Function: '<Root>/MATLAB Function3' */
  /* 'failure_inducer:40' counter = 0; */
  RateControl_DW.counter = 0.0;
}

/* Model terminate function */
void RateControlModelClass::terminate()
{
  /* (no terminate code required) */
}

/* Constructor */
RateControlModelClass::RateControlModelClass()
{
  /* Currently there is no constructor body generated.*/
}

/* Destructor */
RateControlModelClass::~RateControlModelClass()
{
  /* Currently there is no destructor body generated.*/
}

/* Real-Time Model get method */
RT_MODEL_RateControl_T * RateControlModelClass::getRTM()
{
  return (&RateControl_M);
}
