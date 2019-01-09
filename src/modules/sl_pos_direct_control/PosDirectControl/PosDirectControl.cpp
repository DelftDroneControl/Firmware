/*
 * PosDirectControl.cpp
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "PosDirectControl".
 *
 * Model version              : 1.454
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C++ source code generated on : Wed Jan  9 18:04:42 2019
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "PosDirectControl.h"
#include "PosDirectControl_private.h"

/* Exported block parameters */
PosDirectControlParamsType PosDirectControlParams = {
  -1.0,
  0.3,
  0.3,
  10.0,
  1.0,
  1.0,
  10.0,
  30.0,
  20.0,
  5.0,
  1.9035e-6,
  0.0875,
  0.115,
  0.374,
  0.0014,
  0.0013,
  0.0025,
  8.0e-6,
  1.9203e-8,
  0.033333333333333333,
  500.0,
  9.8124,

  { 44971.632920016484, -44971.632920016484, 49681.100684523823,
    49681.100684523823, 316227.76601683762, 316227.76601683762,
    -316227.76601683773, 316227.76601683773 },

  { 14255.067733331245, -13447.63511985299, 11160.171065924309,
    10174.773713148805, 379407.33359574073, -325271.20107405138,
    259299.44800583596, 288118.92896767677 },

  { 18075.203856889231, 16744.045176404907, 491836.38053471, 397614.10284662707
  }
} ;                                    /* Variable: PosDirectControlParams
                                        * Referenced by:
                                        *   '<S4>/Pos_x'
                                        *   '<S4>/Pos_y'
                                        *   '<S4>/Vel_x'
                                        *   '<S4>/Vel_y'
                                        */

/* Model step function */
void PosDirectControlModelClass::step()
{
  /* local block i/o variables */
  real_T rtb_DiscreteStateSpace[3];
  real_T rtb_Normalization[3];
  real_T K_lqr_data[8];
  real_T R_IB[9];
  real_T dU_data[2];
  int32_T r1;
  int32_T r2;
  int32_T r3;
  real_T maxval;
  real_T a21;
  int32_T rtemp;
  real_T w2[4];
  static const real_T a[16] = { 0.25, 0.25, 0.25, 0.25, 0.5, 0.0, -0.5, 0.0, 0.0,
    0.5, 0.0, -0.5, 0.25, -0.25, 0.25, -0.25 };

  real_T rtb_FilterCoefficient;
  real_T rtb_att_out_idx_2;
  real_T rtb_pos_error_idx_2;
  int32_T K_lqr_size_idx_0;
  real_T rtb_U_idx_1;
  real_T rtb_w_idx_2;
  real_T R_IB_tmp;
  real_T R_IB_tmp_0;

  /* MATLAB Function: '<S4>/unwrap2pi' incorporates:
   *  DataTypeConversion: '<Root>/Cast To Double2'
   *  Inport: '<Root>/att'
   */
  /* :  psi0 = att(3); */
  /* :  if isempty(psi_last) */
  if (!PosDirectControl_DW.psi_last_not_empty) {
    /* :  psi_last = psi0; */
    PosDirectControl_DW.psi_last = PosDirectControl_U.att[2];
    PosDirectControl_DW.psi_last_not_empty = true;
  }

  /* :  if isempty(N) */
  /* :  if (psi0-psi_last)>1.9*pi */
  rtb_pos_error_idx_2 = PosDirectControl_U.att[2] - PosDirectControl_DW.psi_last;
  if (rtb_pos_error_idx_2 > 5.9690260418206069) {
    /* :  N = N-1; */
    PosDirectControl_DW.N--;
  } else {
    if (rtb_pos_error_idx_2 < -5.9690260418206069) {
      /* :  elseif (psi0-psi_last)< -1.9*pi */
      /* :  N = N+1; */
      PosDirectControl_DW.N++;
    }
  }

  /* :  psi_last = psi0; */
  PosDirectControl_DW.psi_last = PosDirectControl_U.att[2];

  /* :  att_out = att; */
  /* :  att_out(3) = psi0 + 2*N*pi; */
  rtb_att_out_idx_2 = 2.0 * PosDirectControl_DW.N * 3.1415926535897931 +
    PosDirectControl_U.att[2];

  /* End of MATLAB Function: '<S4>/unwrap2pi' */

  /* DiscreteStateSpace: '<S4>/Discrete State-Space' */
  {
    rtb_DiscreteStateSpace[0] = (1.0)*
      PosDirectControl_DW.DiscreteStateSpace_DSTATE[0];
    rtb_DiscreteStateSpace[1] = (1.0)*
      PosDirectControl_DW.DiscreteStateSpace_DSTATE[1];
    rtb_DiscreteStateSpace[2] = (1.0)*
      PosDirectControl_DW.DiscreteStateSpace_DSTATE[2];
  }

  /* Sum: '<S4>/Sum5' incorporates:
   *  DataTypeConversion: '<Root>/Cast To Double1'
   *  DataTypeConversion: '<Root>/Cast To Double4'
   *  Inport: '<Root>/pos'
   *  Inport: '<Root>/pos_sp'
   */
  rtb_pos_error_idx_2 = (real_T)PosDirectControl_U.pos_sp[2] -
    PosDirectControl_U.pos[2];

  /* Gain: '<S571>/Filter Coefficient' incorporates:
   *  DiscreteIntegrator: '<S543>/Filter'
   *  Sum: '<S543>/SumD'
   */
  rtb_FilterCoefficient = (rtb_pos_error_idx_2 -
    PosDirectControl_DW.Filter_DSTATE) * 50.0;

  /* MATLAB Function: '<S4>/indi1' incorporates:
   *  DataTypeConversion: '<Root>/Cast To Double2'
   *  DataTypeConversion: '<Root>/Cast To Double3'
   *  DiscreteIntegrator: '<S561>/Integrator'
   *  Inport: '<Root>/att'
   *  Inport: '<Root>/fail_flag'
   *  Inport: '<Root>/rates'
   *  Sum: '<S591>/Sum'
   */
  /* :  if damage == 2 */
  if (PosDirectControl_U.fail_flag == 2U) {
    /* :  K_lqr = posDirectControlParams.K_lqr_drf; */
    K_lqr_size_idx_0 = 1;
    K_lqr_data[0] = 18075.203856889231;
    K_lqr_data[1] = 16744.045176404907;
    K_lqr_data[2] = 491836.38053471;
    K_lqr_data[3] = 397614.10284662707;
  } else if (PosDirectControl_U.fail_flag == 1U) {
    /* :  elseif damage == 1 */
    /* :  K_lqr = posDirectControlParams.K_lqr_srf; */
    K_lqr_size_idx_0 = 2;
    memcpy(&K_lqr_data[0],
           &PosDirectControl_ConstP.indi1_posDirectControlParams.K_lqr_srf[0],
           sizeof(real_T) << 3U);
  } else {
    /* :  else */
    /* :  K_lqr = posDirectControlParams.K_lqr_norm; */
    K_lqr_size_idx_0 = 2;
    memcpy(&K_lqr_data[0],
           &PosDirectControl_ConstP.indi1_posDirectControlParams.K_lqr_norm[0],
           sizeof(real_T) << 3U);
  }

  /* :  g = posDirectControlParams.g; */
  /* :  k = posDirectControlParams.k; */
  /* :  m = posDirectControlParams.m; */
  /* :  phi = att(1); */
  /* :  theta = att(2); */
  /* :  psi = att(3); */
  /* :  p = rate(1); */
  /* :  q = rate(2); */
  /* :  r = rate(3); */
  /* :  R_IB = [cos(psi)*cos(theta) , cos(psi)*sin(theta)*sin(phi)-sin(psi)*cos(phi), cos(psi)*sin(theta)*cos(phi)+sin(psi)*sin(phi); */
  /* :          sin(psi)*cos(theta) , sin(psi)*sin(theta)*sin(phi)+cos(psi)*cos(phi), sin(psi)*sin(theta)*cos(phi)-cos(psi)*sin(phi); */
  /* :          -sin(theta)          , cos(theta)*sin(phi)                          , cos(theta)*cos(phi)                          ]; */
  maxval = std::cos(rtb_att_out_idx_2);
  a21 = std::cos((real_T)PosDirectControl_U.att[1]);
  R_IB[0] = maxval * a21;
  rtb_U_idx_1 = std::sin((real_T)PosDirectControl_U.att[1]);
  rtb_w_idx_2 = maxval * rtb_U_idx_1;
  R_IB_tmp = std::cos((real_T)PosDirectControl_U.att[0]);
  rtb_att_out_idx_2 = std::sin(rtb_att_out_idx_2);
  R_IB_tmp_0 = std::sin((real_T)PosDirectControl_U.att[0]);
  R_IB[3] = rtb_w_idx_2 * R_IB_tmp_0 - rtb_att_out_idx_2 * R_IB_tmp;
  R_IB[6] = rtb_w_idx_2 * R_IB_tmp + rtb_att_out_idx_2 * R_IB_tmp_0;
  R_IB[1] = rtb_att_out_idx_2 * a21;
  rtb_w_idx_2 = rtb_att_out_idx_2 * rtb_U_idx_1;
  R_IB[4] = rtb_w_idx_2 * R_IB_tmp_0 + maxval * R_IB_tmp;
  R_IB[7] = rtb_w_idx_2 * R_IB_tmp - maxval * R_IB_tmp_0;
  R_IB[2] = -rtb_U_idx_1;
  R_IB[5] = a21 * R_IB_tmp_0;
  R_IB[8] = a21 * R_IB_tmp;

  /* :  h = R_IB\n_des; */
  r1 = 0;
  r2 = 1;
  r3 = 2;
  maxval = std::abs(R_IB[0]);
  a21 = std::abs(R_IB[1]);
  if (a21 > maxval) {
    maxval = a21;
    r1 = 1;
    r2 = 0;
  }

  if (std::abs(-std::sin((real_T)PosDirectControl_U.att[1])) > maxval) {
    r1 = 2;
    r2 = 1;
    r3 = 0;
  }

  R_IB[r2] /= R_IB[r1];
  R_IB[r3] /= R_IB[r1];
  R_IB[3 + r2] -= R_IB[3 + r1] * R_IB[r2];
  R_IB[3 + r3] -= R_IB[3 + r1] * R_IB[r3];
  R_IB[6 + r2] -= R_IB[6 + r1] * R_IB[r2];
  R_IB[6 + r3] -= R_IB[6 + r1] * R_IB[r3];
  if (std::abs(R_IB[3 + r3]) > std::abs(R_IB[3 + r2])) {
    rtemp = r2;
    r2 = r3;
    r3 = rtemp;
  }

  R_IB[3 + r3] /= R_IB[3 + r2];
  R_IB[6 + r3] -= R_IB[3 + r3] * R_IB[6 + r2];
  maxval = rtb_DiscreteStateSpace[r2] - rtb_DiscreteStateSpace[r1] * R_IB[r2];
  a21 = ((rtb_DiscreteStateSpace[r3] - rtb_DiscreteStateSpace[r1] * R_IB[r3]) -
         R_IB[3 + r3] * maxval) / R_IB[6 + r3];
  maxval -= R_IB[6 + r2] * a21;
  maxval /= R_IB[3 + r2];
  a21 = ((rtb_DiscreteStateSpace[r1] - R_IB[6 + r1] * a21) - R_IB[3 + r1] *
         maxval) / R_IB[r1];

  /* :  h1 = h(1); */
  /* :  h2 = h(2); */
  /* :  h3 = h(3); */
  /* :  U_sum_ref = -f_ref*m*g/k; */
  /* :  dU = -K_lqr*[p,q,h1,h2]'; */
  rtemp = (K_lqr_size_idx_0 << 2) - 1;
  for (r1 = 0; r1 <= rtemp; r1++) {
    K_lqr_data[r1] = -K_lqr_data[r1];
  }

  for (r2 = 0; r2 < K_lqr_size_idx_0; r2++) {
    dU_data[r2] = 0.0;
  }

  for (r1 = 0; r1 < K_lqr_size_idx_0; r1++) {
    dU_data[r1] += PosDirectControl_U.rates[0] * K_lqr_data[r1];
  }

  for (r1 = 0; r1 < K_lqr_size_idx_0; r1++) {
    dU_data[r1] += K_lqr_data[K_lqr_size_idx_0 + r1] * PosDirectControl_U.rates
      [1];
  }

  rtemp = K_lqr_size_idx_0 << 1;
  for (r1 = 0; r1 < K_lqr_size_idx_0; r1++) {
    dU_data[r1] += K_lqr_data[rtemp + r1] * a21;
  }

  rtemp = 3 * K_lqr_size_idx_0;
  for (r1 = 0; r1 < K_lqr_size_idx_0; r1++) {
    dU_data[r1] += K_lqr_data[rtemp + r1] * maxval;
  }

  /* :  U = zeros(2,1); */
  rtb_U_idx_1 = 0.0;

  /* :  U(1) = dU(1)+0; */
  /* :  if damage ~= 2 */
  if (PosDirectControl_U.fail_flag != 2U) {
    /* :  U(2) = dU(2)+0; */
    rtb_U_idx_1 = dU_data[1];
  }

  maxval = -((rtb_pos_error_idx_2 + PosDirectControl_DW.Integrator_DSTATE) +
             rtb_FilterCoefficient) * 0.374 * 9.8124 / 1.9035E-6;

  /* MATLAB Function: '<S4>/MATLAB Function1' incorporates:
   *  Inport: '<Root>/fail_flag'
   *  MATLAB Function: '<S4>/indi1'
   */
  /* :  w = zeros(4,1); */
  /* :  w2 = zeros(4,1); */
  /* :  if damage == 2 */
  if (PosDirectControl_U.fail_flag == 2U) {
    /* :  w2(1) = (U(1) + U_sum)/2; */
    w2[0] = (dU_data[0] + maxval) / 2.0;

    /* :  w2(2) = 0; */
    w2[1] = 0.0;

    /* :  w2(3) = (-U(1) + U_sum)/2; */
    w2[2] = (-dU_data[0] + maxval) / 2.0;

    /* :  w2(4) = 0; */
    w2[3] = 0.0;
  } else if (PosDirectControl_U.fail_flag == 1U) {
    /* :  elseif damage == 1 */
    /* :  w2(1) = (U(1) - U(2) + U_sum)/2; */
    w2[0] = ((dU_data[0] - rtb_U_idx_1) + maxval) / 2.0;

    /* :  w2(2) = U(2); */
    w2[1] = rtb_U_idx_1;

    /* :  w2(3) = (-U(1) - U(2) + U_sum)/2; */
    w2[2] = ((-dU_data[0] - rtb_U_idx_1) + maxval) / 2.0;

    /* :  w2(4) = 0; */
    w2[3] = 0.0;
  } else {
    /* :  else */
    /* :  w2 =  [ 0.2500    0.5000         0    0.2500; */
    /* :              0.2500         0    0.5000   -0.2500; */
    /* :              0.2500   -0.5000         0    0.2500; */
    /* :              0.2500         0   -0.5000   -0.2500] * [U_sum;U(1);U(2);0]; */
    for (r1 = 0; r1 < 4; r1++) {
      a21 = a[r1 + 12] * 0.0 + (a[r1 + 8] * rtb_U_idx_1 + (a[r1 + 4] * dU_data[0]
        + a[r1] * maxval));
      w2[r1] = a21;
    }
  }

  /* :  w(1) = sqrt(abs(w2(1)))*sign(w2(1)); */
  if (w2[0] < 0.0) {
    a21 = -1.0;
  } else if (w2[0] > 0.0) {
    a21 = 1.0;
  } else if (w2[0] == 0.0) {
    a21 = 0.0;
  } else {
    a21 = (rtNaN);
  }

  maxval = std::sqrt(std::abs(w2[0])) * a21;

  /* :  w(2) = sqrt(abs(w2(2)))*sign(w2(2)); */
  if (w2[1] < 0.0) {
    a21 = -1.0;
  } else if (w2[1] > 0.0) {
    a21 = 1.0;
  } else if (w2[1] == 0.0) {
    a21 = 0.0;
  } else {
    a21 = (rtNaN);
  }

  rtb_U_idx_1 = std::sqrt(std::abs(w2[1])) * a21;

  /* :  w(3) = sqrt(abs(w2(3)))*sign(w2(3)); */
  if (w2[2] < 0.0) {
    a21 = -1.0;
  } else if (w2[2] > 0.0) {
    a21 = 1.0;
  } else if (w2[2] == 0.0) {
    a21 = 0.0;
  } else {
    a21 = (rtNaN);
  }

  rtb_w_idx_2 = std::sqrt(std::abs(w2[2])) * a21;

  /* :  w(4) = sqrt(abs(w2(4)))*sign(w2(4)); */
  if (w2[3] < 0.0) {
    a21 = -1.0;
  } else if (w2[3] > 0.0) {
    a21 = 1.0;
  } else if (w2[3] == 0.0) {
    a21 = 0.0;
  } else {
    a21 = (rtNaN);
  }

  a21 *= std::sqrt(std::abs(w2[3]));

  /* End of MATLAB Function: '<S4>/MATLAB Function1' */

  /* Saturate: '<S4>/Saturation4' */
  /* :  actuator_controls = w_sp_to_px4_actuator_controls(w_sp, par); */
  /* 'w_sp_to_px4_actuator_controls:4' w_min = par.w_min; */
  /* 'w_sp_to_px4_actuator_controls:5' w_max = par.w_max; */
  /* 'w_sp_to_px4_actuator_controls:8' actuator_controls = -1 + 2*(w_sp - w_min)./(w_max - w_min); */
  if (maxval > 1256.0) {
    maxval = 1256.0;
  } else {
    if (maxval < 0.0) {
      maxval = 0.0;
    }
  }

  /* Outport: '<Root>/w_rotors' */
  PosDirectControl_Y.w_rotors[0] = maxval;

  /* Outport: '<Root>/actuators_control' incorporates:
   *  DataTypeConversion: '<Root>/Cast To Single'
   *  MATLAB Function: '<Root>/MATLAB Function2'
   */
  PosDirectControl_Y.actuators_control[0] = (real32_T)(2.0 * maxval / 1256.0 +
    -1.0);

  /* Saturate: '<S4>/Saturation4' */
  if (rtb_U_idx_1 > 1256.0) {
    maxval = 1256.0;
  } else if (rtb_U_idx_1 < 0.0) {
    maxval = 0.0;
  } else {
    maxval = rtb_U_idx_1;
  }

  /* Outport: '<Root>/w_rotors' */
  PosDirectControl_Y.w_rotors[1] = maxval;

  /* Outport: '<Root>/actuators_control' incorporates:
   *  DataTypeConversion: '<Root>/Cast To Single'
   *  MATLAB Function: '<Root>/MATLAB Function2'
   */
  PosDirectControl_Y.actuators_control[1] = (real32_T)(2.0 * maxval / 1256.0 +
    -1.0);

  /* Saturate: '<S4>/Saturation4' */
  if (rtb_w_idx_2 > 1256.0) {
    maxval = 1256.0;
  } else if (rtb_w_idx_2 < 0.0) {
    maxval = 0.0;
  } else {
    maxval = rtb_w_idx_2;
  }

  /* Outport: '<Root>/w_rotors' */
  PosDirectControl_Y.w_rotors[2] = maxval;

  /* Outport: '<Root>/actuators_control' incorporates:
   *  DataTypeConversion: '<Root>/Cast To Single'
   *  MATLAB Function: '<Root>/MATLAB Function2'
   */
  PosDirectControl_Y.actuators_control[2] = (real32_T)(2.0 * maxval / 1256.0 +
    -1.0);

  /* Saturate: '<S4>/Saturation4' */
  if (a21 > 1256.0) {
    maxval = 1256.0;
  } else if (a21 < 0.0) {
    maxval = 0.0;
  } else {
    maxval = a21;
  }

  /* Outport: '<Root>/w_rotors' */
  PosDirectControl_Y.w_rotors[3] = maxval;

  /* Outport: '<Root>/actuators_control' incorporates:
   *  DataTypeConversion: '<Root>/Cast To Single'
   *  MATLAB Function: '<Root>/MATLAB Function2'
   */
  PosDirectControl_Y.actuators_control[3] = (real32_T)(2.0 * maxval / 1256.0 +
    -1.0);

  /* Sum: '<S313>/Sum' incorporates:
   *  DataTypeConversion: '<Root>/Cast To Double'
   *  DataTypeConversion: '<Root>/Cast To Double1'
   *  DataTypeConversion: '<Root>/Cast To Double4'
   *  Gain: '<S4>/Gain'
   *  Gain: '<S4>/Gain5'
   *  Gain: '<S4>/Gain6'
   *  Gain: '<S4>/Pos_x'
   *  Gain: '<S4>/Pos_y'
   *  Gain: '<S4>/Vel_x'
   *  Gain: '<S4>/Vel_y'
   *  Inport: '<Root>/pos'
   *  Inport: '<Root>/pos_sp'
   *  Inport: '<Root>/vel'
   *  Sum: '<S4>/Sum1'
   *  Sum: '<S4>/Sum5'
   */
  a21 = (((real_T)PosDirectControl_U.pos_sp[0] - PosDirectControl_U.pos[0]) *
         PosDirectControlParams.pos_x_p_gain - PosDirectControl_U.vel[0]) *
    PosDirectControlParams.pos_x_d_gain * 0.0;
  rtb_U_idx_1 = (((real_T)PosDirectControl_U.pos_sp[1] - PosDirectControl_U.pos
                  [1]) * PosDirectControlParams.pos_x_p_gain -
                 PosDirectControl_U.vel[1]) *
    PosDirectControlParams.pos_x_d_gain * 0.0;
  rtb_w_idx_2 = (0.0 * rtb_pos_error_idx_2 - PosDirectControl_U.vel[2]) * 0.0 *
    0.0 - 9.8124;

  /* S-Function (sdsp2norm2): '<S313>/Normalization' */
  maxval = 1.0 / (std::sqrt((a21 * a21 + rtb_U_idx_1 * rtb_U_idx_1) +
    rtb_w_idx_2 * rtb_w_idx_2) + 1.0E-10);
  rtb_Normalization[0] = a21 * maxval;
  rtb_Normalization[1] = rtb_U_idx_1 * maxval;
  rtb_Normalization[2] = rtb_w_idx_2 * maxval;

  /* Update for DiscreteStateSpace: '<S4>/Discrete State-Space' */
  {
    real_T xnew[3];
    xnew[0] = (0.95)*PosDirectControl_DW.DiscreteStateSpace_DSTATE[0];
    xnew[0] += (0.05)*rtb_Normalization[0];
    xnew[1] = (0.95)*PosDirectControl_DW.DiscreteStateSpace_DSTATE[1];
    xnew[1] += (0.05)*rtb_Normalization[1];
    xnew[2] = (0.95)*PosDirectControl_DW.DiscreteStateSpace_DSTATE[2];
    xnew[2] += (0.05)*rtb_Normalization[2];
    (void) memcpy(&PosDirectControl_DW.DiscreteStateSpace_DSTATE[0], xnew,
                  sizeof(real_T)*3);
  }

  /* Update for DiscreteIntegrator: '<S561>/Integrator' incorporates:
   *  Gain: '<S551>/Integral Gain'
   */
  PosDirectControl_DW.Integrator_DSTATE += 0.1 * rtb_pos_error_idx_2 * 0.002;

  /* Update for DiscreteIntegrator: '<S543>/Filter' */
  PosDirectControl_DW.Filter_DSTATE += 0.002 * rtb_FilterCoefficient;
}

/* Model initialize function */
void PosDirectControlModelClass::initialize()
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize error status */
  rtmSetErrorStatus(getRTM(), (NULL));

  /* states (dwork) */
  (void) memset((void *)&PosDirectControl_DW, 0,
                sizeof(DW_PosDirectControl_T));

  /* external inputs */
  (void)memset(&PosDirectControl_U, 0, sizeof(ExtU_PosDirectControl_T));

  /* external outputs */
  (void) memset((void *)&PosDirectControl_Y, 0,
                sizeof(ExtY_PosDirectControl_T));

  /* InitializeConditions for DiscreteStateSpace: '<S4>/Discrete State-Space' */
  PosDirectControl_DW.DiscreteStateSpace_DSTATE[0] = (0.0);
  PosDirectControl_DW.DiscreteStateSpace_DSTATE[1] = (0.0);
  PosDirectControl_DW.DiscreteStateSpace_DSTATE[2] = (-1.0);

  /* InitializeConditions for DiscreteIntegrator: '<S561>/Integrator' */
  PosDirectControl_DW.Integrator_DSTATE = 0.0;

  /* InitializeConditions for DiscreteIntegrator: '<S543>/Filter' */
  PosDirectControl_DW.Filter_DSTATE = 0.0;

  /* SystemInitialize for MATLAB Function: '<S4>/unwrap2pi' */
  PosDirectControl_DW.psi_last_not_empty = false;

  /* :  N = 0; */
  PosDirectControl_DW.N = 0.0;
}

/* Model terminate function */
void PosDirectControlModelClass::terminate()
{
  /* (no terminate code required) */
}

/* Constructor */
PosDirectControlModelClass::PosDirectControlModelClass()
{
  /* Currently there is no constructor body generated.*/
}

/* Destructor */
PosDirectControlModelClass::~PosDirectControlModelClass()
{
  /* Currently there is no destructor body generated.*/
}

/* Real-Time Model get method */
RT_MODEL_PosDirectControl_T * PosDirectControlModelClass::getRTM()
{
  return (&PosDirectControl_M);
}
