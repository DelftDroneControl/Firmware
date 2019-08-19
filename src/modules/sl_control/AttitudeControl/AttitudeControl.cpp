/*
 * AttitudeControl.cpp
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

#include "AttitudeControl.h"
#include "AttitudeControl_private.h"
#include "mrdivide_helper_uljIr725.h"

/* Exported block parameters */
AttitudeControlParamsType AttitudeControlParams = {
  0.0F,
  0.0F,
  15.0F,
  1.0F,
  2.0F,
  2.0F,
  5.0F
} ;                                    /* Variable: AttitudeControlParams
                                        * Referenced by:
                                        *   '<Root>/Attitude Controller'
                                        *   '<Root>/MATLAB Function1'
                                        *   '<Root>/Pos_x'
                                        *   '<Root>/Pos_y'
                                        *   '<Root>/Pos_z'
                                        *   '<Root>/Vel_z'
                                        */

/* Model step function */
void AttitudeControlModelClass::step()
{
  /* local block i/o variables */
  real32_T rtb_VectorConcatenate1[6];
  real32_T psi;
  real32_T R_BI[9];
  real32_T A[4];
  real32_T B[2];
  real_T zEstimated[6];
  real32_T dHdx[54];
  real32_T dPos[3];
  real32_T gain[54];
  static const int8_T b[9] = { 0, 0, 0, 0, 0, 0, 1, 0, 0 };

  static const int8_T c[9] = { 0, 0, 0, 0, 0, 0, 0, 1, 0 };

  static const int8_T d[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 1 };

  real32_T Jacobian[81];
  static const real32_T b_0[9] = { 1.0F, 0.0F, 0.0F, 0.002F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F };

  static const real32_T c_0[9] = { 0.0F, 1.0F, 0.0F, 0.0F, 0.002F, 0.0F, 0.0F,
    0.0F, 0.0F };

  static const real32_T d_0[9] = { 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.002F, 0.0F,
    0.0F, 0.0F };

  static const real32_T e[3] = { 0.0F, 0.0F, 9.8124F };

  real32_T rtb_VectorConcatenate2[6];
  real32_T rtb_Sum[3];
  int32_T idxStart;
  int32_T i;
  real32_T rtb_Normalization[3];
  real32_T rtb_xNew[9];
  real32_T dHdx_0[36];
  real32_T tmp[9];
  real32_T dHdx_1[54];
  real32_T gain_0[81];
  real32_T tmp_0[81];
  real32_T rtb_VectorConcatenate2_0[6];
  real32_T rtb_att_out_idx_2;
  real32_T u0;
  real32_T R_BI_0;
  real_T tmp_1;
  real32_T dHdx_tmp;
  real32_T dHdx_tmp_0;
  real32_T dHdx_tmp_1;
  real32_T dHdx_tmp_2;
  real32_T dHdx_tmp_3;
  real32_T dHdx_tmp_4;
  real32_T dHdx_tmp_5;
  real32_T dHdx_tmp_6;
  real32_T dHdx_tmp_7;
  real32_T dHdx_tmp_8;
  real32_T dHdx_tmp_9;
  real32_T dHdx_tmp_a;
  real32_T dHdx_tmp_b;
  real32_T dHdx_tmp_c;
  real32_T dHdx_tmp_d;
  real32_T dHdx_tmp_e;
  int32_T gain_tmp;
  real32_T Jacobian_tmp;
  real32_T Jacobian_tmp_0;
  int32_T P_tmp;

  /* SignalConversion: '<S2>/ConcatBufferAtVector Concatenate2In1' incorporates:
   *  Inport: '<Root>/pos'
   */
  rtb_VectorConcatenate2[0] = AttitudeControl_U.pos[0];
  rtb_VectorConcatenate2[1] = AttitudeControl_U.pos[1];
  rtb_VectorConcatenate2[2] = AttitudeControl_U.pos[2];

  /* MATLAB Function: '<S2>/unwrap2pi' incorporates:
   *  Inport: '<Root>/att'
   */
  /* :  psi0 = att(3); */
  /* :  if isempty(psi_last) */
  if (!AttitudeControl_DW.psi_last_not_empty) {
    /* :  psi_last = psi0; */
    AttitudeControl_DW.psi_last = AttitudeControl_U.att[2];
    AttitudeControl_DW.psi_last_not_empty = true;
  }

  /* :  if isempty(N) */
  /* :  if (psi0-psi_last)>1.0*pi */
  tmp_1 = AttitudeControl_U.att[2] - AttitudeControl_DW.psi_last;
  if (tmp_1 > 3.1415926535897931) {
    /* :  N = N-1; */
    AttitudeControl_DW.N--;
  } else {
    if (tmp_1 < -3.1415926535897931) {
      /* :  elseif (psi0-psi_last)< -1.0*pi */
      /* :  N = N+1; */
      AttitudeControl_DW.N++;
    }
  }

  /* :  psi_last = psi0; */
  AttitudeControl_DW.psi_last = AttitudeControl_U.att[2];

  /* :  att_out = att; */
  /* :  att_out(3) = psi0 + 2*N*pi; */
  rtb_att_out_idx_2 = static_cast<real32_T>((2.0 * AttitudeControl_DW.N *
    3.1415926535897931)) + AttitudeControl_U.att[2];

  /* MATLAB Function: '<S2>/MATLAB Function' incorporates:
   *  Inport: '<Root>/att'
   *  Inport: '<Root>/rates'
   *  MATLAB Function: '<S2>/unwrap2pi'
   *  Sum: '<S6>/Diff'
   *  UnitDelay: '<S6>/UD'
   */
  /* :  if isempty(psi_last) */
  if (!AttitudeControl_DW.psi_last_not_empty_n) {
    /* :  psi_last = att(3); */
    AttitudeControl_DW.psi_last_l = rtb_att_out_idx_2;
    AttitudeControl_DW.psi_last_not_empty_n = true;
  }

  /* :  tol_max = 2; */
  /* :  tol = 1e-3; */
  /* :  dt = 0.002; */
  /* :  r = rates(3); */
  /* :  if abs(psi_diff) < tol */
  if (std::abs(rtb_att_out_idx_2 - AttitudeControl_DW.UD_DSTATE) < 0.001) {
    /* :  psi = psi_last + r * dt; */
    psi = AttitudeControl_U.rates[2] * 0.002F + AttitudeControl_DW.psi_last_l;
  } else if (std::abs(AttitudeControl_DW.psi_last_l - rtb_att_out_idx_2) > 2.0F)
  {
    /* :  elseif abs(psi_last - att(3)) > tol_max */
    /* :  psi = psi_last + r * dt; */
    psi = AttitudeControl_U.rates[2] * 0.002F + AttitudeControl_DW.psi_last_l;
  } else {
    /* :  else */
    /* :  psi = att(3); */
    psi = rtb_att_out_idx_2;
  }

  /* :  psi_last = psi; */
  AttitudeControl_DW.psi_last_l = psi;

  /* :  att_smooth = att; */
  rtb_VectorConcatenate2[3] = AttitudeControl_U.att[0];
  rtb_VectorConcatenate2[4] = AttitudeControl_U.att[1];

  /* :  att_smooth(3) = psi; */
  rtb_VectorConcatenate2[5] = psi;

  /* End of MATLAB Function: '<S2>/MATLAB Function' */

  /* Outputs for Enabled SubSystem: '<S7>/Correct1' incorporates:
   *  EnablePort: '<S10>/Enable'
   */
  /* MATLAB Function: '<S10>/Correct' incorporates:
   *  Constant: '<S7>/R1'
   *  DataStoreRead: '<S10>/Data Store ReadP'
   *  DataStoreRead: '<S10>/Data Store ReadX'
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
  /* 'EKF_att_pos_mea_Jacobian:3' phi = x(7); */
  /* 'EKF_att_pos_mea_Jacobian:4' theta = x(8); */
  /* 'EKF_att_pos_mea_Jacobian:5' psi = x(9); */
  /* 'EKF_att_pos_mea_Jacobian:7' dx = u(1); */
  /* 'EKF_att_pos_mea_Jacobian:8' dy = u(2); */
  /* 'EKF_att_pos_mea_Jacobian:9' dz = u(3); */
  /* 'EKF_att_pos_mea_Jacobian:29' B = ... */
  /* 'EKF_att_pos_mea_Jacobian:30' [ 1, 0, 0, 0, 0, 0,   (dy)*(sin((phi))*sin((psi)) + cos((phi))*cos((psi))*sin((theta))) + (dz)*(cos((phi))*sin((psi)) - cos((psi))*sin((phi))*sin((theta))), cos((phi))*cos((psi))*cos((theta))*(dz) - cos((psi))*sin((theta))*(dx) + cos((psi))*cos((theta))*sin((phi))*(dy), (dz)*(cos((psi))*sin((phi)) - cos((phi))*sin((psi))*sin((theta))) - (dy)*(cos((phi))*cos((psi)) + sin((phi))*sin((psi))*sin((theta))) - cos((theta))*sin((psi))*(dx); */
  /* 'EKF_att_pos_mea_Jacobian:31'  0, 1, 0, 0, 0, 0, - (dy)*(cos((psi))*sin((phi)) - cos((phi))*sin((psi))*sin((theta))) - (dz)*(cos((phi))*cos((psi)) + sin((phi))*sin((psi))*sin((theta))), cos((phi))*cos((theta))*sin((psi))*(dz) - sin((psi))*sin((theta))*(dx) + cos((theta))*sin((phi))*sin((psi))*(dy), (dz)*(sin((phi))*sin((psi)) + cos((phi))*cos((psi))*sin((theta))) - (dy)*(cos((phi))*sin((psi)) - cos((psi))*sin((phi))*sin((theta))) + cos((psi))*cos((theta))*(dx); */
  /* 'EKF_att_pos_mea_Jacobian:32'  0, 0, 1, 0, 0, 0,                                                                                                     cos((phi))*cos((theta))*(dy) - cos((theta))*sin((phi))*(dz),                                            - cos((theta))*(dx) - cos((phi))*sin((theta))*(dz) - sin((phi))*sin((theta))*(dy),                                                                                                                                                                                                                                0; */
  /* 'EKF_att_pos_mea_Jacobian:33'  0, 0, 0, 0, 0, 0,                                                                                                                                                                                       1,                                                                                                                                                            0,                                                                                                                                                                                                                                0; */
  /* 'EKF_att_pos_mea_Jacobian:34'  0, 0, 0, 0, 0, 0,                                                                                                                                                                                       0,                                                                                                                                                            1,                                                                                                                                                                                                                                0; */
  /* 'EKF_att_pos_mea_Jacobian:35'  0, 0, 0, 0, 0, 0,                                                                                                                                                                                       0,                                                                                                                                                            0,                                                                                                                                                                                                                                1]; */
  dHdx[0] = 1.0F;
  dHdx[6] = 0.0F;
  dHdx[12] = 0.0F;
  dHdx[18] = 0.0F;
  dHdx[24] = 0.0F;
  dHdx[30] = 0.0F;
  dHdx_tmp = std::cos(AttitudeControl_DW.x[6]);
  dHdx_tmp_0 = std::sin(AttitudeControl_DW.x[8]);
  dHdx_tmp_1 = std::cos(AttitudeControl_DW.x[8]);
  dHdx_tmp_2 = std::sin(AttitudeControl_DW.x[6]);
  dHdx_tmp_3 = std::sin(AttitudeControl_DW.x[7]);
  dHdx_tmp_4 = dHdx_tmp * dHdx_tmp_1;
  dHdx_tmp_6 = dHdx_tmp * dHdx_tmp_0;
  dHdx_tmp_7 = dHdx_tmp_1 * dHdx_tmp_2;
  dHdx_tmp_8 = dHdx_tmp_2 * dHdx_tmp_0;
  dHdx_tmp_b = (dHdx_tmp_4 * dHdx_tmp_3 + dHdx_tmp_8) * 0.0F;
  dHdx_tmp_c = (dHdx_tmp_6 - dHdx_tmp_7 * dHdx_tmp_3) * 0.0F;
  dHdx[36] = dHdx_tmp_b + dHdx_tmp_c;
  dHdx_tmp_5 = std::cos(AttitudeControl_DW.x[7]);
  dHdx_tmp_d = dHdx_tmp_1 * dHdx_tmp_5;
  dHdx_tmp_1 *= dHdx_tmp_3;
  dHdx[42] = (dHdx_tmp_4 * dHdx_tmp_5 * 0.0F - dHdx_tmp_1 * 0.01F) + dHdx_tmp_d *
    dHdx_tmp_2 * 0.0F;
  dHdx_tmp_9 = dHdx_tmp_7 - dHdx_tmp_6 * dHdx_tmp_3;
  dHdx_tmp_a = (dHdx_tmp_8 * dHdx_tmp_3 + dHdx_tmp_4) * 0.0F;
  dHdx_tmp_e = dHdx_tmp_5 * dHdx_tmp_0;
  dHdx[48] = (dHdx_tmp_9 * 0.0F - dHdx_tmp_a) - dHdx_tmp_e * 0.01F;
  dHdx[1] = 0.0F;
  dHdx[7] = 1.0F;
  dHdx[13] = 0.0F;
  dHdx[19] = 0.0F;
  dHdx[25] = 0.0F;
  dHdx[31] = 0.0F;
  dHdx[37] = dHdx_tmp_9 * -0.0F - dHdx_tmp_a;
  dHdx_tmp_9 = dHdx_tmp * dHdx_tmp_5;
  dHdx_tmp_a = dHdx_tmp_5 * dHdx_tmp_2;
  psi = dHdx_tmp_0 * dHdx_tmp_3;
  dHdx[43] = (dHdx_tmp_9 * dHdx_tmp_0 * 0.0F - psi * 0.01F) + dHdx_tmp_a *
    dHdx_tmp_0 * 0.0F;
  dHdx[49] = (dHdx_tmp_b - dHdx_tmp_c) + dHdx_tmp_d * 0.01F;
  dHdx[2] = 0.0F;
  dHdx[8] = 0.0F;
  dHdx[14] = 1.0F;
  dHdx[20] = 0.0F;
  dHdx[26] = 0.0F;
  dHdx[32] = 0.0F;
  dHdx[38] = dHdx_tmp_9 * 0.0F - dHdx_tmp_a * 0.0F;
  dHdx[44] = (-dHdx_tmp_5 * 0.01F - dHdx_tmp * dHdx_tmp_3 * 0.0F) - dHdx_tmp_2 *
    dHdx_tmp_3 * 0.0F;
  dHdx[50] = 0.0F;
  for (idxStart = 0; idxStart < 9; idxStart++) {
    dHdx[3 + 6 * idxStart] = b[idxStart];
    dHdx[4 + 6 * idxStart] = c[idxStart];
    dHdx[5 + 6 * idxStart] = d[idxStart];
  }

  /* 'EKF_att_pos_mea:3' y = zeros(6,1); */
  /* 'EKF_att_pos_mea:5' px = x(1); */
  /* 'EKF_att_pos_mea:6' py = x(2); */
  /* 'EKF_att_pos_mea:7' pz = x(3); */
  /* 'EKF_att_pos_mea:9' phi = x(7); */
  /* 'EKF_att_pos_mea:10' theta = x(8); */
  /* 'EKF_att_pos_mea:11' psi = x(9); */
  /* 'EKF_att_pos_mea:13' dx = u(1); */
  /* 'EKF_att_pos_mea:14' dy = u(2); */
  /* 'EKF_att_pos_mea:15' dz = u(3); */
  /* 'EKF_att_pos_mea:17' R_IB = [cos(psi)*cos(theta) , cos(psi)*sin(theta)*sin(phi)-sin(psi)*cos(phi), cos(psi)*sin(theta)*cos(phi)+sin(psi)*sin(phi); */
  /* 'EKF_att_pos_mea:18'     sin(psi)*cos(theta) ,sin(psi)*sin(theta)*sin(phi)+cos(psi)*cos(phi), sin(psi)*sin(theta)*cos(phi)-cos(psi)*sin(phi); */
  /* 'EKF_att_pos_mea:19'     -sin(theta)          , cos(theta)*sin(phi)                          , cos(theta)*cos(phi)                          ]; */
  /* 'EKF_att_pos_mea:21' dPos = R_IB*[dx;dy;dz]; */
  tmp[0] = dHdx_tmp_d;
  tmp[3] = dHdx_tmp_1 * dHdx_tmp_2 - dHdx_tmp_6;
  tmp[6] = dHdx_tmp_1 * dHdx_tmp + dHdx_tmp_8;
  tmp[1] = dHdx_tmp_e;
  tmp[4] = psi * dHdx_tmp_2 + dHdx_tmp_4;
  tmp[7] = psi * dHdx_tmp - dHdx_tmp_7;
  tmp[2] = -dHdx_tmp_3;
  tmp[5] = dHdx_tmp_a;
  tmp[8] = dHdx_tmp_9;
  for (idxStart = 0; idxStart < 3; idxStart++) {
    dPos[idxStart] = tmp[idxStart + 6] * 0.0F + (tmp[idxStart + 3] * 0.0F +
      tmp[idxStart] * 0.01F);
  }

  /* 'EKF_att_pos_mea:23' y(1) = px + dPos(1); */
  zEstimated[0] = AttitudeControl_DW.x[0] + dPos[0];

  /* 'EKF_att_pos_mea:24' y(2) = py + dPos(2); */
  zEstimated[1] = AttitudeControl_DW.x[1] + dPos[1];

  /* 'EKF_att_pos_mea:25' y(3) = pz + dPos(3); */
  zEstimated[2] = AttitudeControl_DW.x[2] + dPos[2];

  /* 'EKF_att_pos_mea:26' y(4) = phi; */
  zEstimated[3] = AttitudeControl_DW.x[6];

  /* 'EKF_att_pos_mea:27' y(5) = theta; */
  zEstimated[4] = AttitudeControl_DW.x[7];

  /* 'EKF_att_pos_mea:28' y(6) = psi; */
  zEstimated[5] = AttitudeControl_DW.x[8];
  for (idxStart = 0; idxStart < 9; idxStart++) {
    for (P_tmp = 0; P_tmp < 6; P_tmp++) {
      gain_tmp = idxStart + 9 * P_tmp;
      gain[gain_tmp] = 0.0F;
      for (i = 0; i < 9; i++) {
        gain[gain_tmp] += AttitudeControl_DW.P[9 * i + idxStart] * dHdx[6 * i +
          P_tmp];
      }
    }
  }

  for (idxStart = 0; idxStart < 6; idxStart++) {
    for (P_tmp = 0; P_tmp < 9; P_tmp++) {
      gain_tmp = idxStart + 6 * P_tmp;
      dHdx_1[gain_tmp] = 0.0F;
      for (i = 0; i < 9; i++) {
        dHdx_1[gain_tmp] += dHdx[6 * i + idxStart] * AttitudeControl_DW.P[9 *
          P_tmp + i];
      }
    }

    for (P_tmp = 0; P_tmp < 6; P_tmp++) {
      dHdx_tmp = 0.0F;
      for (i = 0; i < 9; i++) {
        dHdx_tmp += dHdx_1[6 * i + idxStart] * dHdx[6 * i + P_tmp];
      }

      gain_tmp = 6 * P_tmp + idxStart;
      dHdx_0[gain_tmp] = rtCP_R1_Value[gain_tmp] + dHdx_tmp;
    }
  }

  mrdivide_helper_uljIr725(gain, dHdx_0);
  for (idxStart = 0; idxStart < 9; idxStart++) {
    for (P_tmp = 0; P_tmp < 9; P_tmp++) {
      gain_tmp = idxStart + 9 * P_tmp;
      gain_0[gain_tmp] = 0.0F;
      for (i = 0; i < 6; i++) {
        gain_0[gain_tmp] += gain[9 * i + idxStart] * dHdx[6 * P_tmp + i];
      }
    }

    for (P_tmp = 0; P_tmp < 9; P_tmp++) {
      dHdx_tmp = 0.0F;
      for (i = 0; i < 9; i++) {
        dHdx_tmp += gain_0[9 * i + idxStart] * AttitudeControl_DW.P[9 * P_tmp +
          i];
      }

      i = 9 * P_tmp + idxStart;
      tmp_0[i] = AttitudeControl_DW.P[i] - dHdx_tmp;
    }
  }

  /* DataStoreWrite: '<S10>/Data Store WriteP' */
  memcpy(&AttitudeControl_DW.P[0], &tmp_0[0], 81U * sizeof(real32_T));

  /* MATLAB Function: '<S10>/Correct' */
  for (idxStart = 0; idxStart < 6; idxStart++) {
    rtb_VectorConcatenate2_0[idxStart] = rtb_VectorConcatenate2[idxStart] -
      static_cast<real32_T>(zEstimated[idxStart]);
  }

  /* DataStoreWrite: '<S10>/Data Store WriteX' incorporates:
   *  DataStoreRead: '<S10>/Data Store ReadX'
   *  MATLAB Function: '<S10>/Correct'
   */
  for (idxStart = 0; idxStart < 9; idxStart++) {
    dHdx_tmp = 0.0F;
    for (P_tmp = 0; P_tmp < 6; P_tmp++) {
      dHdx_tmp += gain[9 * P_tmp + idxStart] * rtb_VectorConcatenate2_0[P_tmp];
    }

    AttitudeControl_DW.x[idxStart] += dHdx_tmp;
  }

  /* End of DataStoreWrite: '<S10>/Data Store WriteX' */
  /* End of Outputs for SubSystem: '<S7>/Correct1' */

  /* Outputs for Atomic SubSystem: '<S7>/Output' */
  /* MATLAB Function: '<Root>/MATLAB Function1' incorporates:
   *  DataStoreRead: '<S11>/Data Store Read'
   *  Gain: '<Root>/Pos_x'
   *  Inport: '<Root>/pos_sp'
   *  Sum: '<Root>/Sum1'
   *  Sum: '<Root>/Sum5'
   */
  /* :  accel_sp = single(AttitudeControlParams.vel_xy_p_gain.*vel_error); */
  u0 = (AttitudeControlParams.pos_xy_p_gain * (AttitudeControl_U.pos_sp[0] -
         AttitudeControl_DW.x[0]) - AttitudeControl_DW.x[3]) *
    AttitudeControlParams.vel_xy_p_gain;

  /* End of Outputs for SubSystem: '<S7>/Output' */

  /* Saturate: '<S5>/Saturation' */
  if (u0 > 2.0F) {
    /* Sum: '<S5>/Sum' */
    rtb_Sum[0] = 2.0F;
  } else if (u0 < -2.0F) {
    /* Sum: '<S5>/Sum' */
    rtb_Sum[0] = -2.0F;
  } else {
    /* Sum: '<S5>/Sum' */
    rtb_Sum[0] = u0;
  }

  /* Outputs for Atomic SubSystem: '<S7>/Output' */
  /* MATLAB Function: '<Root>/MATLAB Function1' incorporates:
   *  DataStoreRead: '<S11>/Data Store Read'
   *  Gain: '<Root>/Pos_y'
   *  Inport: '<Root>/pos_sp'
   *  Sum: '<Root>/Sum1'
   *  Sum: '<Root>/Sum5'
   */
  dHdx_tmp = (AttitudeControlParams.pos_xy_p_gain * (AttitudeControl_U.pos_sp[1]
    - AttitudeControl_DW.x[1]) - AttitudeControl_DW.x[4]) *
    AttitudeControlParams.vel_xy_p_gain;

  /* End of Outputs for SubSystem: '<S7>/Output' */

  /* Saturate: '<S5>/Saturation' */
  if (dHdx_tmp > 2.0F) {
    dHdx_tmp = 2.0F;
  } else {
    if (dHdx_tmp < -2.0F) {
      dHdx_tmp = -2.0F;
    }
  }

  /* S-Function (sdsp2norm2): '<S5>/Normalization' incorporates:
   *  Sum: '<S5>/Sum'
   */
  psi = 1.0F / (std::sqrt((rtb_Sum[0] * rtb_Sum[0] + dHdx_tmp * dHdx_tmp) +
    96.2831879F) + 1.0E-10F);

  /* Saturate: '<S5>/Saturation' */
  if (u0 > 2.0F) {
    u0 = 2.0F;
  } else {
    if (u0 < -2.0F) {
      u0 = -2.0F;
    }
  }

  /* S-Function (sdsp2norm2): '<S5>/Normalization' incorporates:
   *  Sum: '<S5>/Sum'
   */
  rtb_Normalization[0] = u0 * psi;
  rtb_Normalization[1] = dHdx_tmp * psi;
  rtb_Normalization[2] = -9.8124F * psi;

  /* Outputs for Atomic SubSystem: '<S7>/Predict' */
  /* Outputs for Atomic SubSystem: '<S7>/Output' */
  /* MATLAB Function: '<Root>/Attitude Controller' incorporates:
   *  DataStoreRead: '<S11>/Data Store Read'
   *  Inport: '<Root>/rates'
   *  MATLAB Function: '<S12>/Predict'
   */
  /* :  [h, pq_sp] = attitude_control(att, rates, nd_i, ndi_dot, AttitudeControlParams); */
  /* 'attitude_control:3' phi = att(1); */
  /* 'attitude_control:4' theta = att(2); */
  /* 'attitude_control:5' psi = att(3); */
  /* 'attitude_control:7' r = rates(3); */
  /* 'attitude_control:9' R_BI = [cos(theta)*cos(psi) cos(theta)*sin(psi) -sin(theta); */
  /* 'attitude_control:10'         sin(phi)*sin(theta)*cos(psi)-cos(phi)*sin(psi) sin(phi)*sin(theta)*sin(psi)+cos(phi)*cos(psi) sin(phi)*cos(theta); */
  /* 'attitude_control:11'         cos(phi)*sin(theta)*cos(psi)+sin(phi)*sin(psi) cos(phi)*sin(theta)*sin(psi)-sin(phi)*cos(psi) cos(phi)*cos(theta)]; */
  dHdx_tmp = std::cos(AttitudeControl_DW.x[7]);
  dHdx_tmp_e = std::cos(AttitudeControl_DW.x[8]);

  /* End of Outputs for SubSystem: '<S7>/Output' */
  dHdx_tmp_0 = dHdx_tmp * dHdx_tmp_e;

  /* End of Outputs for SubSystem: '<S7>/Predict' */
  R_BI[0] = dHdx_tmp_0;

  /* Outputs for Atomic SubSystem: '<S7>/Predict' */
  /* Outputs for Atomic SubSystem: '<S7>/Output' */
  dHdx_tmp_1 = std::sin(AttitudeControl_DW.x[8]);

  /* End of Outputs for SubSystem: '<S7>/Output' */
  dHdx_tmp_2 = dHdx_tmp * dHdx_tmp_1;

  /* End of Outputs for SubSystem: '<S7>/Predict' */
  R_BI[3] = dHdx_tmp_2;

  /* Outputs for Atomic SubSystem: '<S7>/Predict' */
  /* Outputs for Atomic SubSystem: '<S7>/Output' */
  dHdx_tmp_3 = std::sin(AttitudeControl_DW.x[7]);

  /* End of Outputs for SubSystem: '<S7>/Output' */
  /* End of Outputs for SubSystem: '<S7>/Predict' */
  R_BI[6] = -dHdx_tmp_3;

  /* Outputs for Atomic SubSystem: '<S7>/Predict' */
  /* Outputs for Atomic SubSystem: '<S7>/Output' */
  dHdx_tmp_4 = std::sin(AttitudeControl_DW.x[6]);

  /* End of Outputs for SubSystem: '<S7>/Output' */
  dHdx_tmp_6 = dHdx_tmp_4 * dHdx_tmp_3;

  /* Outputs for Atomic SubSystem: '<S7>/Output' */
  dHdx_tmp_7 = std::cos(AttitudeControl_DW.x[6]);

  /* End of Outputs for SubSystem: '<S7>/Output' */
  dHdx_tmp_8 = dHdx_tmp_7 * dHdx_tmp_1;

  /* End of Outputs for SubSystem: '<S7>/Predict' */
  R_BI[1] = dHdx_tmp_6 * dHdx_tmp_e - dHdx_tmp_8;

  /* Outputs for Atomic SubSystem: '<S7>/Predict' */
  dHdx_tmp_b = dHdx_tmp_7 * dHdx_tmp_e;

  /* End of Outputs for SubSystem: '<S7>/Predict' */
  R_BI[4] = dHdx_tmp_6 * dHdx_tmp_1 + dHdx_tmp_b;

  /* Outputs for Atomic SubSystem: '<S7>/Predict' */
  dHdx_tmp_c = dHdx_tmp_4 * dHdx_tmp;

  /* End of Outputs for SubSystem: '<S7>/Predict' */
  R_BI[7] = dHdx_tmp_c;

  /* Outputs for Atomic SubSystem: '<S7>/Predict' */
  dHdx_tmp_5 = dHdx_tmp_7 * dHdx_tmp_3;
  dHdx_tmp_d = dHdx_tmp_4 * dHdx_tmp_1;

  /* End of Outputs for SubSystem: '<S7>/Predict' */
  R_BI[2] = dHdx_tmp_5 * dHdx_tmp_e + dHdx_tmp_d;

  /* Outputs for Atomic SubSystem: '<S7>/Predict' */
  dHdx_tmp_9 = dHdx_tmp_4 * dHdx_tmp_e;

  /* End of Outputs for SubSystem: '<S7>/Predict' */
  R_BI[5] = dHdx_tmp_5 * dHdx_tmp_1 - dHdx_tmp_9;

  /* Outputs for Atomic SubSystem: '<S7>/Predict' */
  dHdx_tmp_a = dHdx_tmp_7 * dHdx_tmp;

  /* End of Outputs for SubSystem: '<S7>/Predict' */
  R_BI[8] = dHdx_tmp_a;

  /* 'attitude_control:14' h = R_BI*nd_i; */
  /* 'attitude_control:17' nxd = AttitudeControlParams.prim_axis_x; */
  /* 'attitude_control:18' nyd = AttitudeControlParams.prim_axis_y; */
  /* 'attitude_control:20' ndi_dot_b = R_BI*(ndi_dot); */
  /* 'attitude_control:22' kx = AttitudeControlParams.xy_gain; */
  /* 'attitude_control:23' ky = AttitudeControlParams.xy_gain; */
  /* 'attitude_control:25' nxdot_cmd = -kx*(h(1)-nxd); */
  /* 'attitude_control:26' nydot_cmd = -ky*(h(2)-nyd); */
  /* 'attitude_control:28' pq_sp = [0 -h(3);h(3) 0]\([nxdot_cmd nydot_cmd]'-[h(2) -h(1)]'*r + ndi_dot_b(1:2)); */
  A[0] = 0.0F;
  for (idxStart = 0; idxStart < 3; idxStart++) {
    psi = R_BI[idxStart + 3];
    u0 = psi * rtb_Normalization[1] + R_BI[idxStart] * rtb_Normalization[0];
    R_BI_0 = psi * 0.0F + R_BI[idxStart] * 0.0F;
    psi = R_BI[idxStart + 6];
    u0 += psi * rtb_Normalization[2];
    R_BI_0 += psi * 0.0F;
    rtb_Sum[idxStart] = u0;
    dPos[idxStart] = R_BI_0;
  }

  A[2] = -rtb_Sum[2];
  A[1] = rtb_Sum[2];
  A[3] = 0.0F;
  B[0] = ((rtb_Sum[0] - AttitudeControlParams.prim_axis_x) *
          -AttitudeControlParams.xy_gain - rtb_Sum[1] * AttitudeControl_U.rates
          [2]) + dPos[0];
  B[1] = ((rtb_Sum[1] - AttitudeControlParams.prim_axis_y) *
          -AttitudeControlParams.xy_gain - -rtb_Sum[0] *
          AttitudeControl_U.rates[2]) + dPos[1];
  if (std::abs(rtb_Sum[2]) > 0.0F) {
    idxStart = 1;
    i = 0;
  } else {
    idxStart = 0;
    i = 1;
  }

  psi = A[i] / A[idxStart];
  u0 = A[2 + idxStart];
  psi = (B[i] - B[idxStart] * psi) / (A[2 + i] - u0 * psi);

  /* Outport: '<Root>/rates_sp' incorporates:
   *  Constant: '<Root>/Constant2'
   *  MATLAB Function: '<Root>/Attitude Controller'
   */
  AttitudeControl_Y.rates_sp[0] = (B[idxStart] - u0 * psi) / A[idxStart];
  AttitudeControl_Y.rates_sp[1] = psi;
  AttitudeControl_Y.rates_sp[2] = 0.0F;

  /* Outputs for Atomic SubSystem: '<S7>/Output' */
  /* Gain: '<Root>/Vel_z' incorporates:
   *  DataStoreRead: '<S11>/Data Store Read'
   *  Gain: '<Root>/Pos_z'
   *  Inport: '<Root>/pos_sp'
   *  Sum: '<Root>/Sum1'
   *  Sum: '<Root>/Sum5'
   */
  u0 = ((AttitudeControl_U.pos_sp[2] - AttitudeControl_DW.x[2]) *
        AttitudeControlParams.pos_z_p_gain - AttitudeControl_DW.x[5]) *
    AttitudeControlParams.vel_z_p_gain;

  /* End of Outputs for SubSystem: '<S7>/Output' */

  /* Saturate: '<Root>/Saturation' */
  if (u0 > 5.0F) {
    u0 = 5.0F;
  } else {
    if (u0 < -5.0F) {
      u0 = -5.0F;
    }
  }

  /* End of Saturate: '<Root>/Saturation' */

  /* Outport: '<Root>/accel_z_sp' incorporates:
   *  Constant: '<Root>/Constant3'
   *  Sum: '<Root>/Minus'
   */
  AttitudeControl_Y.accel_z_sp = u0 - 9.8124F;

  /* SignalConversion: '<S2>/ConcatBufferAtVector Concatenate1In1' incorporates:
   *  Inport: '<Root>/rates'
   */
  rtb_VectorConcatenate1[0] = AttitudeControl_U.rates[0];
  rtb_VectorConcatenate1[1] = AttitudeControl_U.rates[1];
  rtb_VectorConcatenate1[2] = AttitudeControl_U.rates[2];

  /* DiscreteStateSpace: '<S2>/Discrete State-Space' incorporates:
   *  Inport: '<Root>/accel'
   */
  {
    rtb_VectorConcatenate1[3] = (1.0F)*
      AttitudeControl_DW.DiscreteStateSpace_DSTATE[0];
    rtb_VectorConcatenate1[4] = (1.0F)*
      AttitudeControl_DW.DiscreteStateSpace_DSTATE[1];
    rtb_VectorConcatenate1[5] = (1.0F)*
      AttitudeControl_DW.DiscreteStateSpace_DSTATE[2];
  }

  /* Outputs for Atomic SubSystem: '<S7>/Predict' */
  /* MATLAB Function: '<S12>/Predict' incorporates:
   *  DataStoreRead: '<S12>/Data Store ReadP'
   *  DataStoreRead: '<S12>/Data Store ReadX'
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
  /* 'EKF_att_pos_state_Jacobian:4' dt = 0.002; */
  /* 'EKF_att_pos_state_Jacobian:8' vx = x(4); */
  /* 'EKF_att_pos_state_Jacobian:9' vy = x(5); */
  /* 'EKF_att_pos_state_Jacobian:10' vz = x(6); */
  /* 'EKF_att_pos_state_Jacobian:11' phi = x(7); */
  /* 'EKF_att_pos_state_Jacobian:12' theta = x(8); */
  /* 'EKF_att_pos_state_Jacobian:13' psi = x(9); */
  /* 'EKF_att_pos_state_Jacobian:15' p = u(1); */
  /* 'EKF_att_pos_state_Jacobian:16' q = u(2); */
  /* 'EKF_att_pos_state_Jacobian:17' r = u(3); */
  /* 'EKF_att_pos_state_Jacobian:18' ax = u(4); */
  /* 'EKF_att_pos_state_Jacobian:19' ay = u(5); */
  /* 'EKF_att_pos_state_Jacobian:20' az = u(6); */
  /* 'EKF_att_pos_state_Jacobian:22' dax = -0.0; */
  /* 'EKF_att_pos_state_Jacobian:23' day = 0; */
  /* 'EKF_att_pos_state_Jacobian:24' daz = -0.10; */
  /* 'EKF_att_pos_state_Jacobian:55' A =  ... */
  /* 'EKF_att_pos_state_Jacobian:56' [ 1, 0, 0, dt,  0,  0,                                                                                                                                   0,                                                                                                                       0,                                                                                                                                                                    0; */
  /* 'EKF_att_pos_state_Jacobian:57'   0, 1, 0,  0, dt,  0,                                                                                                                                   0,                                                                                                                       0,                                                                                                                                                                    0; */
  /* 'EKF_att_pos_state_Jacobian:58'   0, 0, 1,  0,  0, dt,                                                                                                                                   0,                                                                                                                       0,                                                                                                                                                                    0; */
  /* 'EKF_att_pos_state_Jacobian:59'   0, 0, 0,  1,  0,  0,  dt*((sin(phi)*sin(psi) + cos(phi)*cos(psi)*sin(theta))*(ay - day) + (cos(phi)*sin(psi) - cos(psi)*sin(phi)*sin(theta))*(az - daz)), dt*(cos(phi)*cos(psi)*cos(theta)*(az - daz) - cos(psi)*sin(theta)*(ax - dax) + cos(psi)*cos(theta)*sin(phi)*(ay - day)), -dt*((cos(phi)*cos(psi) + sin(phi)*sin(psi)*sin(theta))*(ay - day) - (cos(psi)*sin(phi) - cos(phi)*sin(psi)*sin(theta))*(az - daz) + cos(theta)*sin(psi)*(ax - dax)); */
  /* 'EKF_att_pos_state_Jacobian:60'   0, 0, 0,  0,  1,  0, -dt*((cos(psi)*sin(phi) - cos(phi)*sin(psi)*sin(theta))*(ay - day) + (cos(phi)*cos(psi) + sin(phi)*sin(psi)*sin(theta))*(az - daz)), dt*(cos(phi)*cos(theta)*sin(psi)*(az - daz) - sin(psi)*sin(theta)*(ax - dax) + cos(theta)*sin(phi)*sin(psi)*(ay - day)),  dt*((sin(phi)*sin(psi) + cos(phi)*cos(psi)*sin(theta))*(az - daz) - (cos(phi)*sin(psi) - cos(psi)*sin(phi)*sin(theta))*(ay - day) + cos(psi)*cos(theta)*(ax - dax)); */
  /* 'EKF_att_pos_state_Jacobian:61'   0, 0, 0,  0,  0,  1,                                                                dt*(cos(phi)*cos(theta)*(ay - day) - cos(theta)*sin(phi)*(az - daz)),                           -dt*(cos(theta)*(ax - dax) + cos(phi)*sin(theta)*(az - daz) + sin(phi)*sin(theta)*(ay - day)),                                                                                                                                                                    0; */
  /* 'EKF_att_pos_state_Jacobian:62'   0, 0, 0,  0,  0,  0,                                                                                                        1 - dt*r*sin(phi)*tan(theta),                                           dt*((tan(theta)^2 + 1)*(r*cos(phi) + q*sin(theta)) + q*cos(theta)*tan(theta)),                                                                                                                                                                    0; */
  /* 'EKF_att_pos_state_Jacobian:63'   0, 0, 0,  0,  0,  0,                                                                                                       -dt*(r*cos(phi) + q*sin(phi)),                                                                                                                       1,                                                                                                                                                                    0; */
  /* 'EKF_att_pos_state_Jacobian:64'   0, 0, 0,  0,  0,  0,                                                                                           (dt*(q*cos(phi) - r*sin(phi)))/cos(theta),                                                                  (dt*sin(theta)*(r*cos(phi) + q*sin(phi)))/cos(theta)^2,                                                                                                                                                                    1]; */
  psi = std::tan(AttitudeControl_DW.x[7]);
  for (idxStart = 0; idxStart < 9; idxStart++) {
    Jacobian[9 * idxStart] = b_0[idxStart];
    Jacobian[1 + 9 * idxStart] = c_0[idxStart];
    Jacobian[2 + 9 * idxStart] = d_0[idxStart];
  }

  Jacobian[3] = 0.0F;
  Jacobian[12] = 0.0F;
  Jacobian[21] = 0.0F;
  Jacobian[30] = 1.0F;
  Jacobian[39] = 0.0F;
  Jacobian[48] = 0.0F;
  u0 = dHdx_tmp_b * dHdx_tmp_3 + dHdx_tmp_d;
  R_BI_0 = dHdx_tmp_8 - dHdx_tmp_9 * dHdx_tmp_3;
  Jacobian[57] = (u0 * rtb_VectorConcatenate1[4] + R_BI_0 *
                  (rtb_VectorConcatenate1[5] - -0.1F)) * 0.002F;
  dHdx_tmp_e *= dHdx_tmp_3;
  Jacobian[66] = ((dHdx_tmp_b * dHdx_tmp * (rtb_VectorConcatenate1[5] - -0.1F) -
                   dHdx_tmp_e * rtb_VectorConcatenate1[3]) + dHdx_tmp_0 *
                  dHdx_tmp_4 * rtb_VectorConcatenate1[4]) * 0.002F;
  Jacobian_tmp = dHdx_tmp_9 - dHdx_tmp_8 * dHdx_tmp_3;
  Jacobian_tmp_0 = dHdx_tmp_d * dHdx_tmp_3 + dHdx_tmp_b;
  Jacobian[75] = ((Jacobian_tmp_0 * rtb_VectorConcatenate1[4] - Jacobian_tmp *
                   (rtb_VectorConcatenate1[5] - -0.1F)) + dHdx_tmp_2 *
                  rtb_VectorConcatenate1[3]) * -0.002F;
  Jacobian[4] = 0.0F;
  Jacobian[13] = 0.0F;
  Jacobian[22] = 0.0F;
  Jacobian[31] = 0.0F;
  Jacobian[40] = 1.0F;
  Jacobian[49] = 0.0F;
  Jacobian[58] = (Jacobian_tmp * rtb_VectorConcatenate1[4] + Jacobian_tmp_0 *
                  (rtb_VectorConcatenate1[5] - -0.1F)) * -0.002F;
  Jacobian_tmp = dHdx_tmp_1 * dHdx_tmp_3;
  Jacobian[67] = ((dHdx_tmp_a * dHdx_tmp_1 * (rtb_VectorConcatenate1[5] - -0.1F)
                   - Jacobian_tmp * rtb_VectorConcatenate1[3]) + dHdx_tmp_c *
                  dHdx_tmp_1 * rtb_VectorConcatenate1[4]) * 0.002F;
  Jacobian[76] = ((u0 * (rtb_VectorConcatenate1[5] - -0.1F) - R_BI_0 *
                   rtb_VectorConcatenate1[4]) + dHdx_tmp_0 *
                  rtb_VectorConcatenate1[3]) * 0.002F;
  Jacobian[5] = 0.0F;
  Jacobian[14] = 0.0F;
  Jacobian[23] = 0.0F;
  Jacobian[32] = 0.0F;
  Jacobian[41] = 0.0F;
  Jacobian[50] = 1.0F;
  Jacobian[59] = (dHdx_tmp_a * rtb_VectorConcatenate1[4] - dHdx_tmp_c *
                  (rtb_VectorConcatenate1[5] - -0.1F)) * 0.002F;
  Jacobian[68] = ((dHdx_tmp_5 * (rtb_VectorConcatenate1[5] - -0.1F) + dHdx_tmp *
                   rtb_VectorConcatenate1[3]) + dHdx_tmp_6 *
                  rtb_VectorConcatenate1[4]) * -0.002F;
  Jacobian[77] = 0.0F;
  Jacobian[6] = 0.0F;
  Jacobian[15] = 0.0F;
  Jacobian[24] = 0.0F;
  Jacobian[33] = 0.0F;
  Jacobian[42] = 0.0F;
  Jacobian[51] = 0.0F;
  Jacobian[60] = 1.0F - 0.002F * rtb_VectorConcatenate1[2] * dHdx_tmp_4 * psi;
  u0 = rtb_VectorConcatenate1[2] * dHdx_tmp_7;
  R_BI_0 = u0 + rtb_VectorConcatenate1[1] * dHdx_tmp_3;
  Jacobian[69] = ((psi * psi + 1.0F) * R_BI_0 + rtb_VectorConcatenate1[1] *
                  dHdx_tmp * psi) * 0.002F;
  Jacobian[78] = 0.0F;
  Jacobian[7] = 0.0F;
  Jacobian[16] = 0.0F;
  Jacobian[25] = 0.0F;
  Jacobian[34] = 0.0F;
  Jacobian[43] = 0.0F;
  Jacobian[52] = 0.0F;
  u0 += rtb_VectorConcatenate1[1] * dHdx_tmp_4;
  Jacobian[61] = u0 * -0.002F;
  Jacobian[70] = 1.0F;
  Jacobian[79] = 0.0F;
  Jacobian[8] = 0.0F;
  Jacobian[17] = 0.0F;
  Jacobian[26] = 0.0F;
  Jacobian[35] = 0.0F;
  Jacobian[44] = 0.0F;
  Jacobian[53] = 0.0F;
  Jacobian_tmp_0 = (rtb_VectorConcatenate1[1] * dHdx_tmp_7 -
                    rtb_VectorConcatenate1[2] * dHdx_tmp_4) * 0.002F;
  Jacobian[62] = Jacobian_tmp_0 / dHdx_tmp;
  Jacobian[71] = u0 * (0.002F * dHdx_tmp_3) / (dHdx_tmp * dHdx_tmp);
  Jacobian[80] = 1.0F;

  /* 'EKF_att_pos_state:3' dt = 0.002; */
  /* 'EKF_att_pos_state:8' vx = x(4); */
  /* 'EKF_att_pos_state:9' vy = x(5); */
  /* 'EKF_att_pos_state:10' vz = x(6); */
  /* 'EKF_att_pos_state:11' phi = x(7); */
  /* 'EKF_att_pos_state:12' theta = x(8); */
  /* 'EKF_att_pos_state:13' psi = x(9); */
  /* 'EKF_att_pos_state:15' p = u(1); */
  /* 'EKF_att_pos_state:16' q = u(2); */
  /* 'EKF_att_pos_state:17' r = u(3); */
  /* 'EKF_att_pos_state:18' ax = u(4); */
  /* 'EKF_att_pos_state:19' ay = u(5); */
  /* 'EKF_att_pos_state:20' az = u(6); */
  /* 'EKF_att_pos_state:22' dax = -0.0; */
  /* 'EKF_att_pos_state:23' day = 0; */
  /* 'EKF_att_pos_state:24' daz = -0.10; */
  /* 'EKF_att_pos_state:26' R_IB = [cos(psi)*cos(theta) , cos(psi)*sin(theta)*sin(phi)-sin(psi)*cos(phi), cos(psi)*sin(theta)*cos(phi)+sin(psi)*sin(phi); */
  /* 'EKF_att_pos_state:27'         sin(psi)*cos(theta) ,sin(psi)*sin(theta)*sin(phi)+cos(psi)*cos(phi), sin(psi)*sin(theta)*cos(phi)-cos(psi)*sin(phi); */
  /* 'EKF_att_pos_state:28'         -sin(theta)          , cos(theta)*sin(phi)                          , cos(theta)*cos(phi)                          ]; */
  /* 'EKF_att_pos_state:30' dPos = [vx;vy;vz]; */
  /* 'EKF_att_pos_state:31' dVel = R_IB*[ax-dax;ay-day;az-daz] + [0;0;9.8124]; */
  tmp[0] = dHdx_tmp_0;
  tmp[3] = dHdx_tmp_e * dHdx_tmp_4 - dHdx_tmp_8;
  tmp[6] = dHdx_tmp_e * dHdx_tmp_7 + dHdx_tmp_d;
  tmp[1] = dHdx_tmp_2;
  tmp[4] = Jacobian_tmp * dHdx_tmp_4 + dHdx_tmp_b;
  tmp[7] = Jacobian_tmp * dHdx_tmp_7 - dHdx_tmp_9;
  tmp[2] = -std::sin(AttitudeControl_DW.x[7]);
  tmp[5] = dHdx_tmp_c;
  tmp[8] = dHdx_tmp_a;
  for (idxStart = 0; idxStart < 3; idxStart++) {
    rtb_Normalization[idxStart] = ((tmp[idxStart + 3] * rtb_VectorConcatenate1[4]
      + tmp[idxStart] * rtb_VectorConcatenate1[3]) + tmp[idxStart + 6] *
      (rtb_VectorConcatenate1[5] - -0.1F)) + e[idxStart];
  }

  /* 'EKF_att_pos_state:32' dphi = (p + tan(theta)*(q*sin(theta)+r*cos(phi))); */
  /* 'EKF_att_pos_state:33' dtheta = (q*cos(phi)-r*sin(phi)); */
  /* 'EKF_att_pos_state:34' dpsi = ((q*sin(phi)+r*cos(phi))/cos(theta)); */
  /* 'EKF_att_pos_state:36' x(1) = x(1) + dPos(1)*dt; */
  rtb_xNew[0] = AttitudeControl_DW.x[3] * 0.002F + AttitudeControl_DW.x[0];

  /* 'EKF_att_pos_state:37' x(2) = x(2) + dPos(2)*dt; */
  rtb_xNew[1] = AttitudeControl_DW.x[4] * 0.002F + AttitudeControl_DW.x[1];

  /* 'EKF_att_pos_state:38' x(3) = x(3) + dPos(3)*dt; */
  rtb_xNew[2] = AttitudeControl_DW.x[5] * 0.002F + AttitudeControl_DW.x[2];

  /* 'EKF_att_pos_state:39' x(4) = x(4) + dVel(1)*dt; */
  rtb_xNew[3] = rtb_Normalization[0] * 0.002F + AttitudeControl_DW.x[3];

  /* 'EKF_att_pos_state:40' x(5) = x(5) + dVel(2)*dt; */
  rtb_xNew[4] = rtb_Normalization[1] * 0.002F + AttitudeControl_DW.x[4];

  /* 'EKF_att_pos_state:41' x(6) = x(6) + dVel(3)*dt; */
  rtb_xNew[5] = rtb_Normalization[2] * 0.002F + AttitudeControl_DW.x[5];

  /* 'EKF_att_pos_state:42' x(7) = x(7) + dphi*dt; */
  rtb_xNew[6] = (R_BI_0 * psi + rtb_VectorConcatenate1[0]) * 0.002F +
    AttitudeControl_DW.x[6];

  /* 'EKF_att_pos_state:43' x(8) = x(8) + dtheta*dt; */
  rtb_xNew[7] = Jacobian_tmp_0 + AttitudeControl_DW.x[7];

  /* 'EKF_att_pos_state:44' x(9) = x(9) + dpsi*dt; */
  rtb_xNew[8] = u0 / dHdx_tmp * 0.002F + AttitudeControl_DW.x[8];
  for (idxStart = 0; idxStart < 9; idxStart++) {
    for (P_tmp = 0; P_tmp < 9; P_tmp++) {
      gain_tmp = P_tmp + 9 * idxStart;
      gain_0[gain_tmp] = 0.0F;
      for (i = 0; i < 9; i++) {
        gain_0[gain_tmp] += Jacobian[9 * i + P_tmp] * AttitudeControl_DW.P[9 *
          idxStart + i];
      }
    }
  }

  for (i = 0; i < 9; i++) {
    /* DataStoreWrite: '<S12>/Data Store WriteP' incorporates:
     *  Constant: '<S7>/Q'
     *  MATLAB Function: '<S12>/Predict'
     */
    for (idxStart = 0; idxStart < 9; idxStart++) {
      dHdx_tmp = 0.0F;
      for (P_tmp = 0; P_tmp < 9; P_tmp++) {
        dHdx_tmp += gain_0[9 * P_tmp + i] * Jacobian[9 * P_tmp + idxStart];
      }

      /* MATLAB Function: '<S12>/Predict' incorporates:
       *  Constant: '<S7>/Q'
       */
      P_tmp = 9 * idxStart + i;
      AttitudeControl_DW.P[P_tmp] = rtCP_Q_Value[P_tmp] + dHdx_tmp;
    }

    /* End of DataStoreWrite: '<S12>/Data Store WriteP' */

    /* DataStoreWrite: '<S12>/Data Store WriteX' */
    AttitudeControl_DW.x[i] = rtb_xNew[i];
  }

  /* End of Outputs for SubSystem: '<S7>/Predict' */

  /* Update for UnitDelay: '<S6>/UD' */
  AttitudeControl_DW.UD_DSTATE = rtb_att_out_idx_2;

  /* Update for DiscreteStateSpace: '<S2>/Discrete State-Space' incorporates:
   *  Inport: '<Root>/accel'
   */
  {
    real32_T xnew[3];
    xnew[0] = (0.9F)*AttitudeControl_DW.DiscreteStateSpace_DSTATE[0];
    xnew[0] += (0.1F)*AttitudeControl_U.accel[0];
    xnew[1] = (0.9F)*AttitudeControl_DW.DiscreteStateSpace_DSTATE[1];
    xnew[1] += (0.1F)*AttitudeControl_U.accel[1];
    xnew[2] = (0.9F)*AttitudeControl_DW.DiscreteStateSpace_DSTATE[2];
    xnew[2] += (0.1F)*AttitudeControl_U.accel[2];
    (void) memcpy(&AttitudeControl_DW.DiscreteStateSpace_DSTATE[0], xnew,
                  sizeof(real32_T)*3);
  }
}

/* Model initialize function */
void AttitudeControlModelClass::initialize()
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus((&AttitudeControl_M), (NULL));

  /* states (dwork) */
  (void) memset((void *)&AttitudeControl_DW, 0,
                sizeof(DW_AttitudeControl_T));

  /* external inputs */
  (void)memset(&AttitudeControl_U, 0, sizeof(ExtU_AttitudeControl_T));

  /* external outputs */
  (void) memset((void *)&AttitudeControl_Y, 0,
                sizeof(ExtY_AttitudeControl_T));

  {
    int32_T i;

    /* Start for DataStoreMemory: '<S7>/DataStoreMemory - P' */
    memcpy(&AttitudeControl_DW.P[0], &rtCP_DataStoreMemoryP_InitialVa[0], 81U *
           sizeof(real32_T));

    /* Start for DataStoreMemory: '<S7>/DataStoreMemory - x' */
    for (i = 0; i < 9; i++) {
      AttitudeControl_DW.x[i] = 0.0F;
    }

    /* End of Start for DataStoreMemory: '<S7>/DataStoreMemory - x' */
  }

  /* InitializeConditions for UnitDelay: '<S6>/UD' */
  AttitudeControl_DW.UD_DSTATE = 0.0F;

  /* InitializeConditions for DiscreteStateSpace: '<S2>/Discrete State-Space' incorporates:
   *  Inport: '<Root>/accel'
   */
  AttitudeControl_DW.DiscreteStateSpace_DSTATE[0] = (0.0F);
  AttitudeControl_DW.DiscreteStateSpace_DSTATE[1] = (0.0F);
  AttitudeControl_DW.DiscreteStateSpace_DSTATE[2] = (0.0F);

  /* SystemInitialize for MATLAB Function: '<S2>/unwrap2pi' */
  AttitudeControl_DW.psi_last_not_empty = false;

  /* :  N = 0; */
  AttitudeControl_DW.N = 0.0;

  /* SystemInitialize for MATLAB Function: '<S2>/MATLAB Function' */
  AttitudeControl_DW.psi_last_not_empty_n = false;
}

/* Model terminate function */
void AttitudeControlModelClass::terminate()
{
  /* (no terminate code required) */
}

/* Constructor */
AttitudeControlModelClass::AttitudeControlModelClass()
{
  /* Currently there is no constructor body generated.*/
}

/* Destructor */
AttitudeControlModelClass::~AttitudeControlModelClass()
{
  /* Currently there is no destructor body generated.*/
}

/* Real-Time Model get method */
RT_MODEL_AttitudeControl_T * AttitudeControlModelClass::getRTM()
{
  return (&AttitudeControl_M);
}
