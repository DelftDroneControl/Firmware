/*
 * PosDirectControl.cpp
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

#include "PosDirectControl.h"
#include "PosDirectControl_private.h"
#include "ekf_state_jacob_WRvyoYwd.h"
#include "mldivide_FcIbHgdz.h"
#include "mrdivide_helper_D6MymrEr.h"
#include "norm_wXO8gvHp.h"
#include "rt_atan2d_snf.h"
#include "svd_qphS61it.h"

/* Exported block parameters */
PosDirectControlParamsType PosDirectControlParams = {
  -1.0,
  1.0,
  0.0,
  1.0,
  30.0,
  0.0,
  20.0,
  50.0,
  0.0,
  40.0,
  0.0,
  0.0,
  1,
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

  { 44971.632920016651, -44971.632920016789, 49681.100684523946,
    49681.100684524019, 316227.76601683866, 316227.766016839,
    -316227.76601683913, 316227.76601683954 },

  { 14255.067733331802, -13447.635119853187, 11160.171065924462,
    10174.773713149003, 379407.3335957469, -325271.201074057, 259299.44800584027,
    288118.928967678 },

  { 18075.203856889661, 16744.045176404798, 491836.38053471479,
    397614.10284662177 },
  10.0,
  90.0,

  { 0.5, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.5, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.5, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 100.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    100.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 100.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0001, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0001, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0001, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0001 },

  { 0.0001, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0001, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0001, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 1.0 }
} ;                                    /* Variable: PosDirectControlParams
                                        * Referenced by:
                                        *   '<S3>/rpm_feedback'
                                        *   '<S6>/indi'
                                        *   '<S6>/att_i'
                                        *   '<S10>/Pos_x'
                                        *   '<S10>/Pos_x_i'
                                        *   '<S10>/Pos_y'
                                        *   '<S10>/Pos_y_i'
                                        *   '<S10>/Vel_x'
                                        *   '<S10>/Vel_y'
                                        *   '<S37>/Pos_z_i'
                                        */

static void rate_scheduler(RT_MODEL_PosDirectControl_T *const PosDirectControl_M);

/*
 *   This function updates active task flag for each subrate.
 * The function is called at model base rate, hence the
 * generated code self-manages all its subrates.
 */
static void rate_scheduler(RT_MODEL_PosDirectControl_T *const PosDirectControl_M)
{
  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (PosDirectControl_M->Timing.TaskCounters.TID[1])++;
  if ((PosDirectControl_M->Timing.TaskCounters.TID[1]) > 9) {/* Sample time: [0.02s, 0.0s] */
    PosDirectControl_M->Timing.TaskCounters.TID[1] = 0;
  }
}

/* Model step function */
void PosDirectControlModelClass::step()
{
  /* local block i/o variables */
  real_T rtb_VectorConcatenate[6];
  real_T rtb_X0[6];
  real_T rtb_n_des_filtered[3];
  real_T rtb_pos_sp_filter[3];
  real_T rtb_U0[4];
  real_T rtb_DiscreteStateSpace4[3];
  real_T rtb_w_cmd[4];
  real_T rtb_CastToDouble7[3];
  real_T rtb_accs_filter[3];
  real_T rtb_Normalization[3];
  real_T rtb_sp[3];
  real_T rtb_h[3];
  real_T rtb_U_p[4];
  real_T rtb_DataStoreRead[10];
  real_T rtb_w_e[4];
  real_T rtb_DiscreteTimeIntegrator1;
  real_T errorSum;
  real_T alpha;
  real_T beta;
  real_T G2[16];
  real_T G[16];
  real_T b_ddy0[4];
  real_T X[16];
  real_T V[16];
  int32_T vcol;
  real_T b_U[16];
  boolean_T c_p;
  int32_T br;
  int32_T ar;
  int32_T ia;
  int32_T b_ic;
  real_T y[7];
  real_T dHdx[70];
  real_T qconj[4];
  real_T gain[70];
  static const int8_T b[10] = { 0, 0, 0, 0, 0, 0, 1, 0, 0, 0 };

  static const int8_T c[10] = { 0, 0, 0, 0, 0, 0, 0, 1, 0, 0 };

  static const int8_T d[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 };

  static const int8_T e[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 };

  real_T Jacobian[100];
  real_T rtb_u2[3];
  real_T rtb_Diff[6];
  real_T rtb_Pos_z;
  real_T rtb_Pos_y;
  real_T rtb_q[4];
  real_T rtb_pos_error[3];
  real_T rtb_xNew[10];
  real_T rtb_TSamp[6];
  real_T rtb_nd_sat[3];
  real_T rtb_enableMeas;
  real_T rtb_fcn3;
  real_T hdd_c_tmp[9];
  int32_T i;
  real_T tmp[9];
  real_T dHdx_0[49];
  real_T tmp_0[4];
  real_T tmp_1[7];
  real_T dHdx_1[70];
  real_T tmp_2[9];
  real_T tmp_3[3];
  real_T tmp_4[3];
  real_T qconj_0[4];
  real_T Jacobian_0[100];
  real_T rtb_w_idx_2;
  real_T rtb_w_idx_3;
  real_T rtb_DiscreteTimeIntegrator_idx_;
  real_T rtb_CastToDouble2_idx_0;
  real_T rtb_CastToDouble2_idx_1;
  real_T y_0;
  real_T y_1;
  real_T qconj_tmp;
  real_T tmp_5;
  real_T tmp_6;
  real_T tmp_7;
  real_T hdd_c_tmp_tmp;
  real_T hdd_c_tmp_tmp_0;
  real_T b_ddy0_tmp;
  real_T b_ddy0_tmp_0;

  /* Gain: '<S15>/1//2' incorporates:
   *  DataTypeConversion: '<Root>/Cast To Double2'
   *  Inport: '<Root>/att'
   */
  rtb_enableMeas = 0.5 * PosDirectControl_U.att[2];

  /* Trigonometry: '<S15>/sincos' */
  errorSum = std::sin(rtb_enableMeas);
  rtb_enableMeas = std::cos(rtb_enableMeas);

  /* Fcn: '<S15>/q0' */
  rtb_Pos_y = rtb_enableMeas;
  beta = errorSum;

  /* Trigonometry: '<S15>/sincos' */
  rtb_pos_error[0] = rtb_enableMeas;

  /* Gain: '<S15>/1//2' incorporates:
   *  DataTypeConversion: '<Root>/Cast To Double2'
   *  Inport: '<Root>/att'
   */
  rtb_enableMeas = 0.5 * PosDirectControl_U.att[1];

  /* Trigonometry: '<S15>/sincos' */
  errorSum = std::sin(rtb_enableMeas);
  rtb_enableMeas = std::cos(rtb_enableMeas);

  /* Fcn: '<S15>/q0' */
  rtb_DiscreteTimeIntegrator_idx_ = rtb_enableMeas;
  alpha = errorSum;

  /* Trigonometry: '<S15>/sincos' */
  rtb_pos_error[1] = rtb_enableMeas;

  /* Gain: '<S15>/1//2' incorporates:
   *  DataTypeConversion: '<Root>/Cast To Double2'
   *  Inport: '<Root>/att'
   */
  rtb_enableMeas = 0.5 * PosDirectControl_U.att[0];

  /* Trigonometry: '<S15>/sincos' */
  errorSum = std::sin(rtb_enableMeas);
  rtb_enableMeas = std::cos(rtb_enableMeas);

  /* SignalConversion: '<S13>/TmpSignal ConversionAt SFunction Inport1' incorporates:
   *  Fcn: '<S15>/q0'
   *  Fcn: '<S15>/q1'
   *  MATLAB Function: '<S5>/MATLAB Function'
   */
  rtb_w_e[0] = rtb_Pos_y * rtb_DiscreteTimeIntegrator_idx_ * rtb_enableMeas +
    beta * alpha * errorSum;
  rtb_w_e[1] = rtb_pos_error[0] * rtb_pos_error[1] * errorSum - beta * alpha *
    rtb_enableMeas;

  /* Fcn: '<S15>/q2' incorporates:
   *  Fcn: '<S15>/q1'
   *  Fcn: '<S15>/q3'
   */
  rtb_Pos_y = beta * rtb_pos_error[1];
  rtb_DiscreteTimeIntegrator_idx_ = rtb_pos_error[0] * alpha;

  /* SignalConversion: '<S13>/TmpSignal ConversionAt SFunction Inport1' incorporates:
   *  Fcn: '<S15>/q2'
   *  Fcn: '<S15>/q3'
   *  MATLAB Function: '<S5>/MATLAB Function'
   */
  rtb_w_e[2] = rtb_DiscreteTimeIntegrator_idx_ * rtb_enableMeas + rtb_Pos_y *
    errorSum;
  rtb_w_e[3] = rtb_Pos_y * rtb_enableMeas - rtb_DiscreteTimeIntegrator_idx_ *
    errorSum;

  /* MATLAB Function: '<S5>/MATLAB Function' incorporates:
   *  Memory: '<S5>/Memory'
   */
  /* :  error1 = norm(qMeas - qState); */
  /* :  error2 = norm(-qMeas - qState); */
  /* :  if error1 > error2 */
  qconj_0[0] = rtb_w_e[0] - PosDirectControl_DW.Memory_PreviousInput[0];
  tmp_0[0] = -rtb_w_e[0] - PosDirectControl_DW.Memory_PreviousInput[0];
  qconj_0[1] = rtb_w_e[1] - PosDirectControl_DW.Memory_PreviousInput[1];
  tmp_0[1] = -rtb_w_e[1] - PosDirectControl_DW.Memory_PreviousInput[1];
  qconj_0[2] = rtb_w_e[2] - PosDirectControl_DW.Memory_PreviousInput[2];
  tmp_0[2] = -rtb_w_e[2] - PosDirectControl_DW.Memory_PreviousInput[2];
  qconj_0[3] = rtb_w_e[3] - PosDirectControl_DW.Memory_PreviousInput[3];
  tmp_0[3] = -rtb_w_e[3] - PosDirectControl_DW.Memory_PreviousInput[3];
  if (norm_wXO8gvHp(qconj_0) > norm_wXO8gvHp(tmp_0)) {
    /* :  q = -qMeas; */
    rtb_q[0] = -rtb_w_e[0];
    rtb_q[1] = -rtb_w_e[1];
    rtb_q[2] = -rtb_w_e[2];
    rtb_q[3] = -rtb_w_e[3];
  } else {
    /* :  else */
    /* :  q = qMeas; */
    rtb_q[0] = rtb_w_e[0];
    rtb_q[1] = rtb_w_e[1];
    rtb_q[2] = rtb_w_e[2];
    rtb_q[3] = rtb_w_e[3];
  }

  /* MATLAB Function: '<S5>/enableMeas' incorporates:
   *  DataTypeConversion: '<Root>/Cast To Double2'
   *  Inport: '<Root>/att'
   */
  /* :  if isempty(attPrev) */
  /* :  enableMeas = 1; */
  rtb_enableMeas = 1.0;

  /* :  tol = 1e-3; */
  /* :  errorSum = sum(abs((attPrev - att))); */
  PosDirectControl_DW.attPrev[0] -= PosDirectControl_U.att[0];
  PosDirectControl_DW.attPrev[1] -= PosDirectControl_U.att[1];
  PosDirectControl_DW.attPrev[2] -= PosDirectControl_U.att[2];

  /* :  if errorSum < tol */
  if ((std::abs(PosDirectControl_DW.attPrev[0]) + std::abs
       (PosDirectControl_DW.attPrev[1])) + std::abs(PosDirectControl_DW.attPrev
       [2]) < 0.001) {
    /* :  enableMeas = 0; */
    rtb_enableMeas = 0.0;
  }

  /* :  attPrev = att; */
  PosDirectControl_DW.attPrev[0] = PosDirectControl_U.att[0];
  PosDirectControl_DW.attPrev[1] = PosDirectControl_U.att[1];
  PosDirectControl_DW.attPrev[2] = PosDirectControl_U.att[2];

  /* End of MATLAB Function: '<S5>/enableMeas' */

  /* Outputs for Enabled SubSystem: '<S12>/Correct1' incorporates:
   *  EnablePort: '<S17>/Enable'
   */
  /* DataTypeConversion: '<S12>/DataTypeConversion_Enable1' */
  if (rtb_enableMeas != 0.0) {
    /* MATLAB Function: '<S17>/Correct' incorporates:
     *  DataStoreRead: '<S17>/Data Store ReadX'
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
    rtb_enableMeas = (0.0 * PosDirectControl_DW.x[6] - 0.0 *
                      PosDirectControl_DW.x[9]) + 0.0 * PosDirectControl_DW.x[8];
    dHdx[42] = rtb_enableMeas;
    errorSum = (0.0 * PosDirectControl_DW.x[7] + 0.0 * PosDirectControl_DW.x[8])
      + 0.0 * PosDirectControl_DW.x[9];
    dHdx[49] = errorSum;
    rtb_Pos_y = (0.0 * PosDirectControl_DW.x[7] - 0.0 * PosDirectControl_DW.x[8])
      + 0.0 * PosDirectControl_DW.x[6];
    dHdx[56] = rtb_Pos_y;
    dHdx[63] = (0.0 * PosDirectControl_DW.x[7] - 0.0 * PosDirectControl_DW.x[6])
      - 0.0 * PosDirectControl_DW.x[9];
    dHdx[1] = 0.0;
    dHdx[8] = 1.0;
    dHdx[15] = 0.0;
    dHdx[22] = 0.0;
    dHdx[29] = 0.0;
    dHdx[36] = 0.0;
    rtb_DiscreteTimeIntegrator_idx_ = (0.0 * PosDirectControl_DW.x[9] + 0.0 *
      PosDirectControl_DW.x[6]) - 0.0 * PosDirectControl_DW.x[7];
    dHdx[43] = rtb_DiscreteTimeIntegrator_idx_;
    dHdx[50] = (0.0 * PosDirectControl_DW.x[8] - 0.0 * PosDirectControl_DW.x[7])
      - 0.0 * PosDirectControl_DW.x[6];
    dHdx[57] = errorSum;
    dHdx[64] = rtb_enableMeas;
    dHdx[2] = 0.0;
    dHdx[9] = 0.0;
    dHdx[16] = 1.0;
    dHdx[23] = 0.0;
    dHdx[30] = 0.0;
    dHdx[37] = 0.0;
    dHdx[44] = rtb_Pos_y;
    dHdx[51] = rtb_DiscreteTimeIntegrator_idx_;
    dHdx[58] = (0.0 * PosDirectControl_DW.x[9] - 0.0 * PosDirectControl_DW.x[6])
      - 0.0 * PosDirectControl_DW.x[8];
    dHdx[65] = errorSum;
    for (ar = 0; ar < 10; ar++) {
      dHdx[3 + 7 * ar] = b[ar];
      dHdx[4 + 7 * ar] = c[ar];
      dHdx[5 + 7 * ar] = d[ar];
      dHdx[6 + 7 * ar] = e[ar];
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
    b_ddy0[0] = ((PosDirectControl_DW.x[6] * 0.0 - PosDirectControl_DW.x[7] *
                  0.0) - PosDirectControl_DW.x[8] * 0.0) -
      PosDirectControl_DW.x[9] * 0.0;
    b_ddy0[1] = (PosDirectControl_DW.x[6] * 0.0 + 0.0 * PosDirectControl_DW.x[7])
      + (PosDirectControl_DW.x[8] * 0.0 - PosDirectControl_DW.x[9] * 0.0);
    b_ddy0[2] = (PosDirectControl_DW.x[6] * 0.0 + 0.0 * PosDirectControl_DW.x[8])
      + (PosDirectControl_DW.x[9] * 0.0 - PosDirectControl_DW.x[7] * 0.0);
    b_ddy0[3] = (PosDirectControl_DW.x[6] * 0.0 + 0.0 * PosDirectControl_DW.x[9])
      + (PosDirectControl_DW.x[7] * 0.0 - PosDirectControl_DW.x[8] * 0.0);

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
    y[0] = ((b_ddy0[0] * -PosDirectControl_DW.x[7] + PosDirectControl_DW.x[6] *
             b_ddy0[1]) + (b_ddy0[2] * -PosDirectControl_DW.x[9] - b_ddy0[3] *
             -PosDirectControl_DW.x[8])) + PosDirectControl_DW.x[0];

    /* 'ekf_meas_func:18' y(2) = posy + dPos(2); */
    y[1] = ((b_ddy0[0] * -PosDirectControl_DW.x[8] + PosDirectControl_DW.x[6] *
             b_ddy0[2]) + (b_ddy0[3] * -PosDirectControl_DW.x[7] - b_ddy0[1] *
             -PosDirectControl_DW.x[9])) + PosDirectControl_DW.x[1];

    /* 'ekf_meas_func:19' y(3) = posz + dPos(3); */
    y[2] = ((b_ddy0[0] * -PosDirectControl_DW.x[9] + PosDirectControl_DW.x[6] *
             b_ddy0[3]) + (b_ddy0[1] * -PosDirectControl_DW.x[8] - b_ddy0[2] *
             -PosDirectControl_DW.x[7])) + PosDirectControl_DW.x[2];

    /* 'ekf_meas_func:21' y(4:7) = q; */
    y[3] = PosDirectControl_DW.x[6];
    y[4] = PosDirectControl_DW.x[7];
    y[5] = PosDirectControl_DW.x[8];
    y[6] = PosDirectControl_DW.x[9];

    /* SignalConversion: '<S20>/TmpSignal ConversionAt SFunction Inport3' incorporates:
     *  DataTypeConversion: '<Root>/Cast To Double1'
     *  Inport: '<Root>/pos'
     *  MATLAB Function: '<S17>/Correct'
     */
    tmp_1[0] = PosDirectControl_U.pos[0];
    tmp_1[1] = PosDirectControl_U.pos[1];
    tmp_1[2] = PosDirectControl_U.pos[2];
    tmp_1[3] = rtb_q[0];
    tmp_1[4] = rtb_q[1];
    tmp_1[5] = rtb_q[2];
    tmp_1[6] = rtb_q[3];

    /* MATLAB Function: '<S17>/Correct' incorporates:
     *  Constant: '<S12>/R1'
     *  DataStoreRead: '<S17>/Data Store ReadP'
     *  SignalConversion: '<S20>/TmpSignal ConversionAt SFunction Inport3'
     */
    for (ar = 0; ar < 7; ar++) {
      y[ar] = tmp_1[ar] - y[ar];
    }

    for (ar = 0; ar < 10; ar++) {
      for (vcol = 0; vcol < 7; vcol++) {
        ia = ar + 10 * vcol;
        gain[ia] = 0.0;
        for (i = 0; i < 10; i++) {
          gain[ia] += PosDirectControl_DW.P[10 * i + ar] * dHdx[7 * i + vcol];
        }
      }
    }

    for (ar = 0; ar < 7; ar++) {
      for (vcol = 0; vcol < 10; vcol++) {
        ia = ar + 7 * vcol;
        dHdx_1[ia] = 0.0;
        for (i = 0; i < 10; i++) {
          dHdx_1[ia] += dHdx[7 * i + ar] * PosDirectControl_DW.P[10 * vcol + i];
        }
      }

      for (vcol = 0; vcol < 7; vcol++) {
        qconj_tmp = 0.0;
        for (i = 0; i < 10; i++) {
          qconj_tmp += dHdx_1[7 * i + ar] * dHdx[7 * i + vcol];
        }

        ia = 7 * vcol + ar;
        dHdx_0[ia] = rtCP_R1_Value[ia] + qconj_tmp;
      }
    }

    mrdivide_helper_D6MymrEr(gain, dHdx_0);
    for (ar = 0; ar < 10; ar++) {
      for (vcol = 0; vcol < 10; vcol++) {
        ia = ar + 10 * vcol;
        Jacobian[ia] = 0.0;
        for (i = 0; i < 7; i++) {
          Jacobian[ia] += gain[10 * i + ar] * dHdx[7 * vcol + i];
        }
      }

      for (vcol = 0; vcol < 10; vcol++) {
        qconj_tmp = 0.0;
        for (i = 0; i < 10; i++) {
          qconj_tmp += Jacobian[10 * i + ar] * PosDirectControl_DW.P[10 * vcol +
            i];
        }

        i = 10 * vcol + ar;
        Jacobian_0[i] = PosDirectControl_DW.P[i] - qconj_tmp;
      }
    }

    /* DataStoreWrite: '<S17>/Data Store WriteP' */
    memcpy(&PosDirectControl_DW.P[0], &Jacobian_0[0], 100U * sizeof(real_T));

    /* DataStoreWrite: '<S17>/Data Store WriteX' incorporates:
     *  DataStoreRead: '<S17>/Data Store ReadX'
     *  MATLAB Function: '<S17>/Correct'
     */
    for (ar = 0; ar < 10; ar++) {
      qconj_tmp = 0.0;
      for (vcol = 0; vcol < 7; vcol++) {
        qconj_tmp += gain[10 * vcol + ar] * y[vcol];
      }

      PosDirectControl_DW.x[ar] += qconj_tmp;
    }

    /* End of DataStoreWrite: '<S17>/Data Store WriteX' */
  }

  /* End of DataTypeConversion: '<S12>/DataTypeConversion_Enable1' */
  /* End of Outputs for SubSystem: '<S12>/Correct1' */

  /* Outputs for Atomic SubSystem: '<S12>/Output' */
  /* DataStoreRead: '<S18>/Data Store Read' */
  memcpy(&rtb_DataStoreRead[0], &PosDirectControl_DW.x[0], 10U * sizeof(real_T));

  /* End of Outputs for SubSystem: '<S12>/Output' */

  /* Sqrt: '<S28>/sqrt' incorporates:
   *  Product: '<S29>/Product'
   *  Product: '<S29>/Product1'
   *  Product: '<S29>/Product2'
   *  Product: '<S29>/Product3'
   *  Sum: '<S29>/Sum'
   */
  rtb_enableMeas = std::sqrt(((rtb_DataStoreRead[6] * rtb_DataStoreRead[6] +
    rtb_DataStoreRead[7] * rtb_DataStoreRead[7]) + rtb_DataStoreRead[8] *
    rtb_DataStoreRead[8]) + rtb_DataStoreRead[9] * rtb_DataStoreRead[9]);

  /* Product: '<S23>/Product' */
  errorSum = rtb_DataStoreRead[6] / rtb_enableMeas;

  /* Product: '<S23>/Product1' */
  rtb_Pos_y = rtb_DataStoreRead[7] / rtb_enableMeas;

  /* Product: '<S23>/Product2' */
  rtb_Pos_z = rtb_DataStoreRead[8] / rtb_enableMeas;

  /* Product: '<S23>/Product3' */
  rtb_enableMeas = rtb_DataStoreRead[9] / rtb_enableMeas;

  /* Fcn: '<S14>/fcn1' */
  rtb_DiscreteTimeIntegrator1 = (rtb_Pos_y * rtb_Pos_z + errorSum *
    rtb_enableMeas) * 2.0;

  /* Fcn: '<S14>/fcn2' incorporates:
   *  Fcn: '<S14>/fcn5'
   */
  rtb_DiscreteTimeIntegrator_idx_ = errorSum * errorSum;
  rtb_CastToDouble2_idx_0 = rtb_Pos_y * rtb_Pos_y;
  rtb_CastToDouble2_idx_1 = rtb_Pos_z * rtb_Pos_z;
  alpha = rtb_enableMeas * rtb_enableMeas;

  /* Fcn: '<S14>/fcn3' */
  rtb_fcn3 = (rtb_Pos_y * rtb_enableMeas - errorSum * rtb_Pos_z) * -2.0;

  /* If: '<S24>/If' incorporates:
   *  Constant: '<S25>/Constant'
   *  Constant: '<S26>/Constant'
   */
  if (rtb_fcn3 > 1.0) {
    /* Outputs for IfAction SubSystem: '<S24>/If Action Subsystem' incorporates:
     *  ActionPort: '<S25>/Action Port'
     */
    rtb_fcn3 = 1.0;

    /* End of Outputs for SubSystem: '<S24>/If Action Subsystem' */
  } else {
    if (rtb_fcn3 < -1.0) {
      /* Outputs for IfAction SubSystem: '<S24>/If Action Subsystem1' incorporates:
       *  ActionPort: '<S26>/Action Port'
       */
      rtb_fcn3 = 1.0;

      /* End of Outputs for SubSystem: '<S24>/If Action Subsystem1' */
    }
  }

  /* End of If: '<S24>/If' */

  /* Trigonometry: '<S22>/trigFcn' */
  rtb_pos_error[1] = std::asin(rtb_fcn3);

  /* DSPFlip: '<S5>/Flip1' incorporates:
   *  Fcn: '<S14>/fcn2'
   *  Fcn: '<S14>/fcn4'
   *  Fcn: '<S14>/fcn5'
   *  Trigonometry: '<S22>/Trigonometric Function1'
   *  Trigonometry: '<S22>/Trigonometric Function3'
   */
  PosDirectControl_B.att_ekfquat[0] = rt_atan2d_snf((rtb_Pos_z * rtb_enableMeas
    + errorSum * rtb_Pos_y) * 2.0, ((rtb_DiscreteTimeIntegrator_idx_ -
    rtb_CastToDouble2_idx_0) - rtb_CastToDouble2_idx_1) + alpha);
  PosDirectControl_B.att_ekfquat[2] = rt_atan2d_snf(rtb_DiscreteTimeIntegrator1,
    ((rtb_DiscreteTimeIntegrator_idx_ + rtb_CastToDouble2_idx_0) -
     rtb_CastToDouble2_idx_1) - alpha);
  PosDirectControl_B.att_ekfquat[1] = rtb_pos_error[1];
  PosDirectControl_B.att_ekfquat[1] = rtb_pos_error[1];

  /* MATLAB Function: '<S3>/unwrap2pi' */
  /* :  psi0 = att(3); */
  /* :  if isempty(psi_last) */
  if (!PosDirectControl_DW.psi_last_not_empty) {
    /* :  psi_last = psi0; */
    PosDirectControl_DW.psi_last = PosDirectControl_B.att_ekfquat[2];
    PosDirectControl_DW.psi_last_not_empty = true;
  }

  /* :  if isempty(N) */
  /* :  if (psi0-psi_last)>1.0*pi */
  qconj_tmp = PosDirectControl_B.att_ekfquat[2] - PosDirectControl_DW.psi_last;
  if (qconj_tmp > 3.1415926535897931) {
    /* :  N = N-1; */
    PosDirectControl_DW.N--;
  } else {
    if (qconj_tmp < -3.1415926535897931) {
      /* :  elseif (psi0-psi_last)< -1.0*pi */
      /* :  N = N+1; */
      PosDirectControl_DW.N++;
    }
  }

  /* :  psi_last = psi0; */
  PosDirectControl_DW.psi_last = PosDirectControl_B.att_ekfquat[2];

  /* :  att_out = att; */
  /* :  att_out(3) = psi0 + 2*N*pi; */
  rtb_VectorConcatenate[0] = PosDirectControl_B.att_ekfquat[0];

  /* SignalConversion: '<S6>/ConcatBufferAtVector ConcatenateIn2' incorporates:
   *  DataTypeConversion: '<Root>/Cast To Double3'
   *  Inport: '<Root>/rates'
   */
  rtb_VectorConcatenate[3] = PosDirectControl_U.rates[0];

  /* MATLAB Function: '<S3>/unwrap2pi' */
  rtb_VectorConcatenate[1] = PosDirectControl_B.att_ekfquat[1];

  /* SignalConversion: '<S6>/ConcatBufferAtVector ConcatenateIn2' incorporates:
   *  DataTypeConversion: '<Root>/Cast To Double3'
   *  Inport: '<Root>/rates'
   */
  rtb_VectorConcatenate[4] = PosDirectControl_U.rates[1];

  /* MATLAB Function: '<S3>/unwrap2pi' */
  rtb_VectorConcatenate[2] = PosDirectControl_B.att_ekfquat[2];

  /* SignalConversion: '<S6>/ConcatBufferAtVector ConcatenateIn2' incorporates:
   *  DataTypeConversion: '<Root>/Cast To Double3'
   *  Inport: '<Root>/rates'
   */
  rtb_VectorConcatenate[5] = PosDirectControl_U.rates[2];

  /* MATLAB Function: '<S3>/unwrap2pi' */
  rtb_VectorConcatenate[2] = 2.0 * PosDirectControl_DW.N * 3.1415926535897931 +
    PosDirectControl_B.att_ekfquat[2];

  /* DiscreteStateSpace: '<S6>/Discrete State-Space1' */
  {
    rtb_X0[0] = (1.0)*PosDirectControl_DW.DiscreteStateSpace1_DSTATE[0];
    rtb_X0[1] = (1.0)*PosDirectControl_DW.DiscreteStateSpace1_DSTATE[1];
    rtb_X0[2] = (1.0)*PosDirectControl_DW.DiscreteStateSpace1_DSTATE[2];
    rtb_X0[3] = (1.0)*PosDirectControl_DW.DiscreteStateSpace1_DSTATE[3];
    rtb_X0[4] = (1.0)*PosDirectControl_DW.DiscreteStateSpace1_DSTATE[4];
    rtb_X0[5] = (1.0)*PosDirectControl_DW.DiscreteStateSpace1_DSTATE[5];
  }

  for (i = 0; i < 6; i++) {
    /* SampleTimeMath: '<S34>/TSamp'
     *
     * About '<S34>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    rtb_enableMeas = rtb_X0[i] * 500.0;

    /* Sum: '<S34>/Diff' incorporates:
     *  UnitDelay: '<S34>/UD'
     */
    rtb_Diff[i] = rtb_enableMeas - PosDirectControl_DW.UD_DSTATE[i];

    /* SampleTimeMath: '<S34>/TSamp'
     *
     * About '<S34>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    rtb_TSamp[i] = rtb_enableMeas;
  }

  /* DiscreteStateSpace: '<S6>/Discrete State-Space' */
  {
    rtb_n_des_filtered[0] = (1.0)*PosDirectControl_DW.DiscreteStateSpace_DSTATE
      [0];
    rtb_n_des_filtered[1] = (1.0)*PosDirectControl_DW.DiscreteStateSpace_DSTATE
      [1];
    rtb_n_des_filtered[2] = (1.0)*PosDirectControl_DW.DiscreteStateSpace_DSTATE
      [2];
  }

  /* SampleTimeMath: '<S33>/TSamp'
   *
   * About '<S33>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_DiscreteTimeIntegrator_idx_ = rtb_n_des_filtered[0] * 500.0;

  /* Sum: '<S33>/Diff' incorporates:
   *  UnitDelay: '<S33>/UD'
   */
  rtb_enableMeas = rtb_DiscreteTimeIntegrator_idx_ -
    PosDirectControl_DW.UD_DSTATE_b[0];

  /* Saturate: '<S6>/Saturation' */
  if (rtb_enableMeas > 0.5) {
    y_0 = 0.5;
    rtb_nd_sat[0] = 0.5;
  } else if (rtb_enableMeas < -0.5) {
    y_0 = -0.5;
    rtb_nd_sat[0] = -0.5;
  } else {
    y_0 = rtb_enableMeas;
    rtb_nd_sat[0] = rtb_enableMeas;
  }

  /* SampleTimeMath: '<S32>/TSamp'
   *
   * About '<S32>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_u2[0] = rtb_enableMeas * 500.0;

  /* SampleTimeMath: '<S33>/TSamp'
   *
   * About '<S33>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_CastToDouble2_idx_0 = rtb_DiscreteTimeIntegrator_idx_;
  rtb_DiscreteTimeIntegrator_idx_ = rtb_n_des_filtered[1] * 500.0;

  /* Sum: '<S33>/Diff' incorporates:
   *  UnitDelay: '<S33>/UD'
   */
  rtb_enableMeas = rtb_DiscreteTimeIntegrator_idx_ -
    PosDirectControl_DW.UD_DSTATE_b[1];

  /* Saturate: '<S6>/Saturation' */
  if (rtb_enableMeas > 0.5) {
    y_1 = 0.5;
    rtb_nd_sat[1] = 0.5;
  } else if (rtb_enableMeas < -0.5) {
    y_1 = -0.5;
    rtb_nd_sat[1] = -0.5;
  } else {
    y_1 = rtb_enableMeas;
    rtb_nd_sat[1] = rtb_enableMeas;
  }

  /* SampleTimeMath: '<S32>/TSamp'
   *
   * About '<S32>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_u2[1] = rtb_enableMeas * 500.0;

  /* SampleTimeMath: '<S33>/TSamp'
   *
   * About '<S33>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_CastToDouble2_idx_1 = rtb_DiscreteTimeIntegrator_idx_;
  rtb_DiscreteTimeIntegrator_idx_ = rtb_n_des_filtered[2] * 500.0;

  /* Sum: '<S33>/Diff' incorporates:
   *  UnitDelay: '<S33>/UD'
   */
  rtb_enableMeas = rtb_DiscreteTimeIntegrator_idx_ -
    PosDirectControl_DW.UD_DSTATE_b[2];

  /* Saturate: '<S6>/Saturation' */
  if (rtb_enableMeas > 0.5) {
    rtb_nd_sat[2] = 0.5;
  } else if (rtb_enableMeas < -0.5) {
    rtb_nd_sat[2] = -0.5;
  } else {
    rtb_nd_sat[2] = rtb_enableMeas;
  }

  /* SampleTimeMath: '<S32>/TSamp'
   *
   * About '<S32>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_u2[2] = rtb_enableMeas * 500.0;

  /* DiscreteStateSpace: '<S3>/Discrete State-Space4' */
  {
    rtb_pos_sp_filter[0] = (1.0)*PosDirectControl_DW.DiscreteStateSpace4_DSTATE
      [0];
    rtb_pos_sp_filter[1] = (1.0)*PosDirectControl_DW.DiscreteStateSpace4_DSTATE
      [1];
    rtb_pos_sp_filter[2] = (1.0)*PosDirectControl_DW.DiscreteStateSpace4_DSTATE
      [2];
  }

  /* SampleTimeMath: '<S31>/TSamp'
   *
   * About '<S31>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_enableMeas = rtb_pos_sp_filter[2] * 500.0;

  /* Sum: '<S6>/Add' incorporates:
   *  DiscreteIntegrator: '<S37>/Discrete-Time Integrator'
   *  Gain: '<S37>/Pos_z_i'
   *  Sum: '<S31>/Diff'
   *  UnitDelay: '<S31>/UD'
   */
  rtb_DiscreteTimeIntegrator1 = (rtb_enableMeas -
    PosDirectControl_DW.UD_DSTATE_g) + PosDirectControlParams.pos_z_i_gain *
    PosDirectControl_DW.DiscreteTimeIntegrator_DSTATE;

  /* Saturate: '<S6>/Saturation2' */
  if (rtb_DiscreteTimeIntegrator1 > 10.0) {
    rtb_Pos_z = 10.0;
  } else if (rtb_DiscreteTimeIntegrator1 < -10.0) {
    rtb_Pos_z = -10.0;
  } else {
    rtb_Pos_z = rtb_DiscreteTimeIntegrator1;
  }

  /* End of Saturate: '<S6>/Saturation2' */

  /* DiscreteStateSpace: '<S6>/Discrete State-Space2' */
  {
    rtb_DiscreteTimeIntegrator1 = 1.0*
      PosDirectControl_DW.DiscreteStateSpace2_DSTATE;
  }

  /* SampleTimeMath: '<S30>/TSamp'
   *
   * About '<S30>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  errorSum = rtb_DiscreteTimeIntegrator1 * 500.0;

  /* DiscreteStateSpace: '<S6>/Discrete State-Space3' */
  {
    rtb_U0[0] = (1.0)*PosDirectControl_DW.DiscreteStateSpace3_DSTATE[0];
    rtb_U0[1] = (1.0)*PosDirectControl_DW.DiscreteStateSpace3_DSTATE[1];
    rtb_U0[2] = (1.0)*PosDirectControl_DW.DiscreteStateSpace3_DSTATE[2];
    rtb_U0[3] = (1.0)*PosDirectControl_DW.DiscreteStateSpace3_DSTATE[3];
  }

  /* DiscreteStateSpace: '<S6>/Discrete State-Space4' */
  {
    rtb_DiscreteStateSpace4[0] = (1.0)*
      PosDirectControl_DW.DiscreteStateSpace4_DSTATE_g[0];
    rtb_DiscreteStateSpace4[1] = (1.0)*
      PosDirectControl_DW.DiscreteStateSpace4_DSTATE_g[1];
    rtb_DiscreteStateSpace4[2] = (1.0)*
      PosDirectControl_DW.DiscreteStateSpace4_DSTATE_g[2];
  }

  /* DataTypeConversion: '<Root>/Cast To Double5' incorporates:
   *  Inport: '<Root>/yaw_sp'
   */
  rtb_DiscreteTimeIntegrator1 = PosDirectControl_U.yaw_sp;

  /* Gain: '<S3>/yaw_p' */
  rtb_fcn3 = 0.0 * rtb_DiscreteTimeIntegrator1;

  /* DiscreteIntegrator: '<S6>/Discrete-Time Integrator1' */
  rtb_DiscreteTimeIntegrator1 =
    PosDirectControl_DW.DiscreteTimeIntegrator1_DSTATE;

  /* MATLAB Function: '<S6>/indi' incorporates:
   *  Gain: '<S6>/att_i'
   *  Inport: '<Root>/fail_flag'
   *  Memory: '<S6>/Memory'
   *  Saturate: '<S6>/Saturation'
   *  Sum: '<S30>/Diff'
   *  UnitDelay: '<S30>/UD'
   */
  /* :  [U,y, eta1, nu1, ddy0, h, dU0] = control_DRF_indi(X,X0,X0_dot,n_des,nd,ndd,Z_ref,Vz_ref,Z,Vz,ddz0, U0,h0,r_ref,dU0,fail_flag, PosDirectControlParams,y1i); */
  /* 'control_DRF_indi:3' k = params.k; */
  /* 'control_DRF_indi:4' l = params.l; */
  /* 'control_DRF_indi:5' b = params.b; */
  /* 'control_DRF_indi:6' m = params.m; */
  /* 'control_DRF_indi:7' Ix = params.Ix; */
  /* 'control_DRF_indi:8' Iy = params.Iy; */
  /* 'control_DRF_indi:9' Iz = params.Iz; */
  /* 'control_DRF_indi:10' Ip = params.Ip; */
  /* 'control_DRF_indi:11' t = params.t; */
  /* 'control_DRF_indi:12' sr = params.rot_direction; */
  /* 'control_DRF_indi:14' phi = X(1); */
  /* 'control_DRF_indi:15' theta = X(2); */
  /* 'control_DRF_indi:16' psi = X(3); */
  /* 'control_DRF_indi:17' p = X(4); */
  /* 'control_DRF_indi:18' q = X(5); */
  /* 'control_DRF_indi:19' r = X(6); */
  /* 'control_DRF_indi:21' r_dot0 = X0_dot(6); */
  /* 'control_DRF_indi:22' q_dot0 = X0_dot(5); */
  /* 'control_DRF_indi:23' p_dot0 = X0_dot(4); */
  /* 'control_DRF_indi:25' phi0 = X0(1); */
  /* 'control_DRF_indi:25' theta0 = X0(2); */
  /* 'control_DRF_indi:25' psi0 = X0(3); */
  /* 'control_DRF_indi:26' p0 = X0(4); */
  /* 'control_DRF_indi:26' q0 = X0(5); */
  /* 'control_DRF_indi:26' r0 = X0(6); */
  /* 'control_DRF_indi:28' R_IB = [cos(psi)*cos(theta) , cos(psi)*sin(theta)*sin(phi)-sin(psi)*cos(phi), cos(psi)*sin(theta)*cos(phi)+sin(psi)*sin(phi); */
  /* 'control_DRF_indi:29'         sin(psi)*cos(theta) , sin(psi)*sin(theta)*sin(phi)+cos(psi)*cos(phi), sin(psi)*sin(theta)*cos(phi)-cos(psi)*sin(phi); */
  /* 'control_DRF_indi:30'         -sin(theta)          , cos(theta)*sin(phi)                          , cos(theta)*cos(phi)                          ]; */
  /* 'control_DRF_indi:32' h = R_IB\n_des; */
  qconj_tmp = std::cos(rtb_VectorConcatenate[2]);
  rtb_w_idx_2 = std::cos(rtb_VectorConcatenate[1]);
  tmp[0] = qconj_tmp * rtb_w_idx_2;
  hdd_c_tmp_tmp = std::sin(rtb_VectorConcatenate[1]);
  hdd_c_tmp_tmp_0 = qconj_tmp * hdd_c_tmp_tmp;
  rtb_w_idx_3 = std::cos(rtb_VectorConcatenate[0]);
  b_ddy0_tmp = std::sin(rtb_VectorConcatenate[2]);
  b_ddy0_tmp_0 = std::sin(rtb_VectorConcatenate[0]);
  tmp[3] = hdd_c_tmp_tmp_0 * b_ddy0_tmp_0 - b_ddy0_tmp * rtb_w_idx_3;
  tmp[6] = hdd_c_tmp_tmp_0 * rtb_w_idx_3 + b_ddy0_tmp * b_ddy0_tmp_0;
  tmp[1] = b_ddy0_tmp * rtb_w_idx_2;
  hdd_c_tmp_tmp_0 = b_ddy0_tmp * hdd_c_tmp_tmp;
  tmp[4] = hdd_c_tmp_tmp_0 * b_ddy0_tmp_0 + qconj_tmp * rtb_w_idx_3;
  tmp[7] = hdd_c_tmp_tmp_0 * rtb_w_idx_3 - qconj_tmp * b_ddy0_tmp_0;
  tmp[2] = -hdd_c_tmp_tmp;
  tmp[5] = rtb_w_idx_2 * b_ddy0_tmp_0;
  tmp[8] = rtb_w_idx_2 * rtb_w_idx_3;
  mldivide_FcIbHgdz(tmp, rtb_n_des_filtered, rtb_pos_error);

  /* 'control_DRF_indi:33' h1 = h(1); */
  /* 'control_DRF_indi:33' h2 = h(2); */
  /* 'control_DRF_indi:33' h3 = h(3); */
  /* 'control_DRF_indi:35' nx = 0; */
  /* 'control_DRF_indi:36' ny = 0; */
  /* 'control_DRF_indi:38' chi = params.chi/57.3; */
  rtb_Pos_y = PosDirectControlParams.chi / 57.3;

  /* 'control_DRF_indi:40' if sr > 0 */
  if (PosDirectControlParams.rot_direction > 0.0) {
    /* 'control_DRF_indi:41' alpha = 1; */
    alpha = 1.0;

    /* 'control_DRF_indi:42' beta = 0; */
    beta = 0.0;
  } else {
    /* 'control_DRF_indi:43' else */
    /* 'control_DRF_indi:44' alpha = cos(chi); */
    alpha = std::cos(rtb_Pos_y);

    /* 'control_DRF_indi:45' beta = sin(chi); */
    beta = std::sin(rtb_Pos_y);
  }

  /* 'control_DRF_indi:48' y1 = alpha*(h1-nx)+beta*(h2-ny); */
  rtb_Pos_y = alpha * rtb_pos_error[0] + beta * rtb_pos_error[1];

  /* 'control_DRF_indi:49' dy1 = alpha*(-h3*q+h2*r+nd(1)) + beta*(h3*p-h1*r+nd(2)); */
  /* 'control_DRF_indi:51' y2 = beta*(h1-nx)-alpha*(h2-ny); */
  /* 'control_DRF_indi:52' dy2 = beta*(-h3*q+h2*r+nd(1)) - alpha*(h3*p-h1*r+nd(2)); */
  /* 'control_DRF_indi:54' kpz = params.pos_z_p_gain; */
  /* 'control_DRF_indi:55' kdz = params.pos_z_d_gain; */
  /* 'control_DRF_indi:57' kp = params.att_p_gain; */
  /* 'control_DRF_indi:58' kd = params.att_d_gain; */
  /* 'control_DRF_indi:60' kpr = params.yaw_d_gain; */
  /* 'control_DRF_indi:62' nu1 =  - kdz*(Vz-Vz_ref) - kpz*(Z-Z_ref); */
  /* 'control_DRF_indi:64' nu2 = -kp*y1 - kd*dy1 - y1i; */
  /* 'control_DRF_indi:65' nu3 = -kp*y2 - kd*dy2; */
  /* 'control_DRF_indi:66' nu4 = -kpr*(r-r_ref); */
  /* 'control_DRF_indi:68' nu = [nu1; nu2; nu3; nu4]; */
  qconj[0] = (rtb_DataStoreRead[5] - rtb_Pos_z) *
    -PosDirectControlParams.pos_z_d_gain - (rtb_DataStoreRead[2] -
    rtb_pos_sp_filter[2]) * PosDirectControlParams.pos_z_p_gain;
  rtb_Pos_z = (-rtb_pos_error[2] * rtb_VectorConcatenate[4] + rtb_pos_error[1] *
               rtb_VectorConcatenate[5]) + y_0;
  qconj_tmp = (rtb_pos_error[2] * rtb_VectorConcatenate[3] - rtb_pos_error[0] *
               rtb_VectorConcatenate[5]) + y_1;
  qconj[1] = (-PosDirectControlParams.att_p_gain * rtb_Pos_y - (rtb_Pos_z *
    alpha + qconj_tmp * beta) * PosDirectControlParams.att_d_gain) -
    PosDirectControlParams.att_i_gain * rtb_DiscreteTimeIntegrator1;
  qconj[2] = (beta * rtb_pos_error[0] - alpha * rtb_pos_error[1]) *
    -PosDirectControlParams.att_p_gain - (rtb_Pos_z * beta - qconj_tmp * alpha) *
    PosDirectControlParams.att_d_gain;
  qconj[3] = (rtb_VectorConcatenate[5] - rtb_fcn3) *
    -PosDirectControlParams.yaw_d_gain;

  /* 'control_DRF_indi:83' Ucons = sqrt(abs(U0)); */
  /* 'control_DRF_indi:84' Ucons(Ucons<500) = 500; */
  /* 'control_DRF_indi:85' G1beta = [-cos(theta)*cos(phi)*k/m, -cos(theta)*cos(phi)*k/m, -cos(theta)*cos(phi)*k/m, -cos(theta)*cos(phi)*k/m; */
  /* 'control_DRF_indi:86'      beta*h3*(b*k/Ix - sr*Ip*q0/Ix/Ucons(1)), beta*h3*(-b*k/Ix + sr*Ip*q0/Ix/Ucons(2)), beta*h3*(-b*k/Ix -sr*Ip*q0/Ix/Ucons(3)), beta*h3*(b*k/Ix + sr*Ip*q0/Ix/Ucons(4)); */
  /* 'control_DRF_indi:87'      beta*h3*(-l*k/Iy - sr*Ip*p0/Iy/Ucons(1)), beta*h3*(-l*k/Iy + sr*Ip*p0/Iy/Ucons(2)), beta*h3*(l*k/Iy - sr*Ip*p0/Iy/Ucons(3)), beta*h3*(l*k/Iy + sr*Ip*p0/Iy/Ucons(4)); */
  /* 'control_DRF_indi:88'      -sr*t/Iz, sr*t/Iz, -sr*t/Iz, sr*t/Iz]; */
  /* 'control_DRF_indi:90' G1alpha =  [zeros(1,4); */
  /* 'control_DRF_indi:91'             -alpha*h3*(l*k/Iy + sr*Ip*p0/Iy/Ucons(1)), alpha*h3*(-l*k/Iy + sr*Ip*p0/Iy/Ucons(2)), -alpha*h3*(-l*k/Iy + sr*Ip*p0/Iy/Ucons(3)), alpha*h3*(l*k/Iy + sr*Ip*p0/Iy/Ucons(4)); */
  /* 'control_DRF_indi:92'             alpha*h3*(-b*k/Ix + sr*Ip*q0/Ix/Ucons(1)), -alpha*h3*(-b*k/Ix + sr*Ip*q0/Ix/Ucons(2)), alpha*h3*(b*k/Ix + sr*Ip*q0/Ix/Ucons(3)), -alpha*h3*(b*k/Ix + sr*Ip*q0/Ix/Ucons(4)); */
  /* 'control_DRF_indi:93'             zeros(1,4)]; */
  /* 'control_DRF_indi:95' G1 = G1beta+G1alpha; */
  /* 'control_DRF_indi:97' G2 = params.freq*[zeros(3,4); */
  /* 'control_DRF_indi:98'                -sr*Ip/2/Ucons(1)/Iz, sr*Ip/2/Ucons(2)/Iz, -sr*Ip/2/Ucons(3)/Iz, sr*Ip/2/Ucons(4)/Iz]; */
  for (i = 0; i < 4; i++) {
    rtb_Pos_z = std::sqrt(std::abs(rtb_U0[i]));
    if (rtb_Pos_z < 500.0) {
      rtb_Pos_z = 500.0;
    }

    rtb_fcn3 = PosDirectControlParams.freq * 0.0;
    ar = i << 2;
    G2[ar] = rtb_fcn3;
    G2[1 + ar] = rtb_fcn3;
    G2[2 + ar] = rtb_fcn3;
    rtb_q[i] = rtb_Pos_z;
  }

  rtb_fcn3 = -PosDirectControlParams.rot_direction * PosDirectControlParams.Ip /
    2.0;
  G2[3] = rtb_fcn3 / rtb_q[0] / PosDirectControlParams.Iz *
    PosDirectControlParams.freq;
  rtb_Pos_z = PosDirectControlParams.rot_direction * PosDirectControlParams.Ip;
  qconj_tmp = rtb_Pos_z / 2.0;
  G2[7] = qconj_tmp / rtb_q[1] / PosDirectControlParams.Iz *
    PosDirectControlParams.freq;
  G2[11] = rtb_fcn3 / rtb_q[2] / PosDirectControlParams.Iz *
    PosDirectControlParams.freq;
  G2[15] = qconj_tmp / rtb_q[3] / PosDirectControlParams.Iz *
    PosDirectControlParams.freq;

  /* 'control_DRF_indi:100' G = (G1+G2); */
  qconj_tmp = -rtb_w_idx_2 * rtb_w_idx_3 * PosDirectControlParams.k /
    PosDirectControlParams.m;
  X[0] = qconj_tmp;
  X[4] = qconj_tmp;
  X[8] = qconj_tmp;
  X[12] = qconj_tmp;
  qconj_tmp = rtb_Pos_z * rtb_X0[4] / PosDirectControlParams.Ix;
  rtb_w_idx_2 = beta * rtb_pos_error[2];
  hdd_c_tmp_tmp = PosDirectControlParams.b * PosDirectControlParams.k /
    PosDirectControlParams.Ix;
  hdd_c_tmp_tmp_0 = qconj_tmp / rtb_q[0];
  X[1] = (hdd_c_tmp_tmp - hdd_c_tmp_tmp_0) * rtb_w_idx_2;
  rtb_w_idx_3 = -PosDirectControlParams.b * PosDirectControlParams.k /
    PosDirectControlParams.Ix;
  b_ddy0_tmp = qconj_tmp / rtb_q[1] + rtb_w_idx_3;
  X[5] = b_ddy0_tmp * rtb_w_idx_2;
  b_ddy0_tmp_0 = qconj_tmp / rtb_q[2];
  X[9] = (rtb_w_idx_3 - b_ddy0_tmp_0) * rtb_w_idx_2;
  qconj_tmp = qconj_tmp / rtb_q[3] + hdd_c_tmp_tmp;
  X[13] = qconj_tmp * rtb_w_idx_2;
  rtb_Pos_z = rtb_Pos_z * rtb_X0[3] / PosDirectControlParams.Iy;
  rtb_fcn3 = -PosDirectControlParams.l * PosDirectControlParams.k /
    PosDirectControlParams.Iy;
  y_1 = rtb_Pos_z / rtb_q[0];
  X[2] = (rtb_fcn3 - y_1) * rtb_w_idx_2;
  y_0 = rtb_Pos_z / rtb_q[1] + rtb_fcn3;
  X[6] = y_0 * rtb_w_idx_2;
  tmp_5 = PosDirectControlParams.l * PosDirectControlParams.k /
    PosDirectControlParams.Iy;
  tmp_7 = rtb_Pos_z / rtb_q[2];
  X[10] = (tmp_5 - tmp_7) * rtb_w_idx_2;
  rtb_Pos_z = rtb_Pos_z / rtb_q[3] + tmp_5;
  X[14] = rtb_Pos_z * rtb_w_idx_2;
  rtb_w_idx_2 = -PosDirectControlParams.rot_direction * PosDirectControlParams.t
    / PosDirectControlParams.Iz;
  X[3] = rtb_w_idx_2;
  tmp_6 = PosDirectControlParams.rot_direction * PosDirectControlParams.t /
    PosDirectControlParams.Iz;
  X[7] = tmp_6;
  X[11] = rtb_w_idx_2;
  X[15] = tmp_6;
  rtb_w_idx_2 = -alpha * rtb_pos_error[2];
  b_U[1] = (y_1 + tmp_5) * rtb_w_idx_2;
  y_1 = alpha * rtb_pos_error[2];
  b_U[5] = y_0 * y_1;
  b_U[9] = (tmp_7 + rtb_fcn3) * rtb_w_idx_2;
  b_U[13] = rtb_Pos_z * y_1;
  b_U[2] = (hdd_c_tmp_tmp_0 + rtb_w_idx_3) * y_1;
  b_U[6] = b_ddy0_tmp * rtb_w_idx_2;
  b_U[10] = (b_ddy0_tmp_0 + hdd_c_tmp_tmp) * y_1;
  b_U[14] = qconj_tmp * rtb_w_idx_2;
  b_U[0] = 0.0;
  b_U[3] = 0.0;
  b_U[4] = 0.0;
  b_U[7] = 0.0;
  b_U[8] = 0.0;
  b_U[11] = 0.0;
  b_U[12] = 0.0;
  b_U[15] = 0.0;
  for (ar = 0; ar < 16; ar++) {
    G[ar] = (X[ar] + b_U[ar]) + G2[ar];
  }

  /* 'control_DRF_indi:105' Omega0 = [0 -r0  q0; */
  /* 'control_DRF_indi:106'          r0  0 -p0; */
  /* 'control_DRF_indi:107'         -q0  p0  0]; */
  /* 'control_DRF_indi:109' R_IB0 = [cos(psi0)*cos(theta0) , cos(psi0)*sin(theta0)*sin(phi0)-sin(psi0)*cos(phi0), cos(psi0)*sin(theta0)*cos(phi0)+sin(psi0)*sin(phi0); */
  /* 'control_DRF_indi:110'     sin(psi0)*cos(theta0) , sin(psi0)*sin(theta0)*sin(phi0)+cos(psi0)*cos(phi0), sin(psi0)*sin(theta0)*cos(phi0)-cos(psi0)*sin(phi0); */
  /* 'control_DRF_indi:111'     -sin(theta0)          , cos(theta0)*sin(phi0)                          , cos(theta0)*cos(phi0)                          ]; */
  /* 'control_DRF_indi:114' ddy01 = -beta*h0(2)*p0^2 - alpha*h0(1)*q0^2 - (alpha*h0(1)+beta*h0(2))*r0^2 + (beta*h0(1)+alpha*h0(2))*p0*q0 + alpha*h0(3)*p0*r0 + beta*h0(3)*q0*r0 + ... */
  /* 'control_DRF_indi:115'        beta*h0(3)*p_dot0 - alpha*h0(3)*q_dot0 + (alpha*h0(2)-beta*h0(1))*r_dot0; */
  /* 'control_DRF_indi:116' ddy02 = alpha*h0(2)*p0^2 - beta*h0(1)*q0^2 - (beta*h0(1)-alpha*h0(2))*r0^2 + (-alpha*h0(1)+beta*h0(2))*p0*q0 + beta*h0(3)*p0*r0  -alpha*h0(3)*q0*r0 + ... */
  /* 'control_DRF_indi:117'        -alpha*h0(3)*p_dot0 - beta*h0(3)*q_dot0 + (beta*h0(2)+alpha*h0(1))*r_dot0; */
  /* 'control_DRF_indi:119' hdd_c = -2*Omega0*R_IB0'*nd + R_IB0'*ndd; */
  rtb_w_idx_2 = std::cos(rtb_X0[2]);
  rtb_w_idx_3 = std::cos(rtb_X0[1]);
  hdd_c_tmp[0] = rtb_w_idx_2 * rtb_w_idx_3;
  rtb_Pos_z = std::sin(rtb_X0[1]);
  rtb_fcn3 = rtb_w_idx_2 * rtb_Pos_z;
  qconj_tmp = std::cos(rtb_X0[0]);
  hdd_c_tmp_tmp = std::sin(rtb_X0[2]);
  hdd_c_tmp_tmp_0 = std::sin(rtb_X0[0]);
  hdd_c_tmp[1] = rtb_fcn3 * hdd_c_tmp_tmp_0 - hdd_c_tmp_tmp * qconj_tmp;
  hdd_c_tmp[2] = rtb_fcn3 * qconj_tmp + hdd_c_tmp_tmp * hdd_c_tmp_tmp_0;
  hdd_c_tmp[3] = hdd_c_tmp_tmp * rtb_w_idx_3;
  rtb_fcn3 = hdd_c_tmp_tmp * rtb_Pos_z;
  hdd_c_tmp[4] = rtb_fcn3 * hdd_c_tmp_tmp_0 + rtb_w_idx_2 * qconj_tmp;
  hdd_c_tmp[5] = rtb_fcn3 * qconj_tmp - rtb_w_idx_2 * hdd_c_tmp_tmp_0;
  hdd_c_tmp[6] = -rtb_Pos_z;
  hdd_c_tmp[7] = rtb_w_idx_3 * hdd_c_tmp_tmp_0;
  hdd_c_tmp[8] = rtb_w_idx_3 * qconj_tmp;
  tmp[0] = -0.0;
  tmp[3] = -2.0 * -rtb_X0[5];
  tmp[6] = -2.0 * rtb_X0[4];
  tmp[1] = -2.0 * rtb_X0[5];
  tmp[4] = -0.0;
  tmp[7] = -2.0 * -rtb_X0[3];
  tmp[2] = -2.0 * -rtb_X0[4];
  tmp[5] = -2.0 * rtb_X0[3];
  tmp[8] = -0.0;
  for (ar = 0; ar < 3; ar++) {
    /* Saturate: '<S6>/Saturation1' incorporates:
     *  Sum: '<S32>/Diff'
     *  UnitDelay: '<S32>/UD'
     */
    rtb_w_idx_2 = rtb_u2[ar] - PosDirectControl_DW.UD_DSTATE_br[ar];
    if (rtb_w_idx_2 > 10.0) {
      tmp_3[ar] = 10.0;
    } else if (rtb_w_idx_2 < -10.0) {
      tmp_3[ar] = -10.0;
    } else {
      tmp_3[ar] = rtb_w_idx_2;
    }

    /* End of Saturate: '<S6>/Saturation1' */
    tmp_4[ar] = 0.0;
    for (vcol = 0; vcol < 3; vcol++) {
      i = ar + 3 * vcol;
      tmp_2[i] = 0.0;
      tmp_2[i] += hdd_c_tmp[3 * vcol] * tmp[ar];
      tmp_2[i] += hdd_c_tmp[3 * vcol + 1] * tmp[ar + 3];
      tmp_2[i] += hdd_c_tmp[3 * vcol + 2] * tmp[ar + 6];
      tmp_4[ar] += tmp_2[i] * rtb_nd_sat[vcol];
    }
  }

  for (ar = 0; ar < 3; ar++) {
    rtb_nd_sat[ar] = tmp_4[ar] + (hdd_c_tmp[ar + 6] * tmp_3[2] + (hdd_c_tmp[ar +
      3] * tmp_3[1] + hdd_c_tmp[ar] * tmp_3[0]));
  }

  /* 'control_DRF_indi:120' ddy01 = ddy01 + alpha*hdd_c(1) +  beta*hdd_c(2); */
  /* 'control_DRF_indi:121' ddy02 = ddy02 + beta*hdd_c(1) - alpha*hdd_c(2); */
  /* 'control_DRF_indi:123' ddy0 = [ddz0;ddy01;ddy02;r_dot0]; */
  b_ddy0[0] = errorSum - PosDirectControl_DW.UD_DSTATE_o;
  rtb_w_idx_2 = alpha * rtb_DiscreteStateSpace4[0];
  rtb_w_idx_3 = beta * rtb_DiscreteStateSpace4[2];
  rtb_Pos_z = alpha * rtb_DiscreteStateSpace4[2];
  rtb_fcn3 = alpha * rtb_DiscreteStateSpace4[1];
  qconj_tmp = beta * rtb_DiscreteStateSpace4[0];
  hdd_c_tmp_tmp = rtb_X0[3] * rtb_X0[3];
  hdd_c_tmp_tmp_0 = rtb_X0[4] * rtb_X0[4];
  b_ddy0_tmp = rtb_X0[5] * rtb_X0[5];
  b_ddy0_tmp_0 = beta * rtb_DiscreteStateSpace4[1];
  y_1 = rtb_w_idx_2 + b_ddy0_tmp_0;
  b_ddy0[1] = (((((((((-beta * rtb_DiscreteStateSpace4[1] * hdd_c_tmp_tmp -
                       rtb_w_idx_2 * hdd_c_tmp_tmp_0) - y_1 * b_ddy0_tmp) +
                     (qconj_tmp + rtb_fcn3) * rtb_X0[3] * rtb_X0[4]) + rtb_Pos_z
                    * rtb_X0[3] * rtb_X0[5]) + rtb_w_idx_3 * rtb_X0[4] * rtb_X0
                   [5]) + rtb_w_idx_3 * rtb_Diff[3]) - rtb_Pos_z * rtb_Diff[4])
                + (rtb_fcn3 - qconj_tmp) * rtb_Diff[5]) + alpha * rtb_nd_sat[0])
    + beta * rtb_nd_sat[1];
  b_ddy0[2] = (((((((((rtb_fcn3 * hdd_c_tmp_tmp - qconj_tmp * hdd_c_tmp_tmp_0) -
                      (qconj_tmp - rtb_fcn3) * b_ddy0_tmp) + (-alpha *
    rtb_DiscreteStateSpace4[0] + b_ddy0_tmp_0) * rtb_X0[3] * rtb_X0[4]) +
                    rtb_w_idx_3 * rtb_X0[3] * rtb_X0[5]) - rtb_Pos_z * rtb_X0[4]
                   * rtb_X0[5]) + -alpha * rtb_DiscreteStateSpace4[2] *
                  rtb_Diff[3]) - rtb_w_idx_3 * rtb_Diff[4]) + y_1 * rtb_Diff[5])
               + beta * rtb_nd_sat[0]) - alpha * rtb_nd_sat[1];
  b_ddy0[3] = rtb_Diff[5];

  /* 'control_DRF_indi:125' fail_id = [1, 3]; */
  /* 'control_DRF_indi:126' fail_id_single = [3]; */
  /* 'control_DRF_indi:127' if fail_flag == 2 */
  if (PosDirectControl_U.fail_flag == 2) {
    /* 'control_DRF_indi:129' G(:,fail_id) = zeros(4,length(fail_id)); */
    /* 'control_DRF_indi:130' ddy0(3:4) = zeros(2,1); */
    for (i = 0; i < 2; i++) {
      vcol = i << 3;
      G[vcol] = 0.0;
      G[1 + vcol] = 0.0;
      G[2 + vcol] = 0.0;
      G[3 + vcol] = 0.0;
      b_ddy0[i + 2] = 0.0;
    }

    /* 'control_DRF_indi:131' G(3:4,:) = zeros(size(G(3:4,:))); */
    for (ar = 0; ar < 4; ar++) {
      vcol = ar << 2;
      G[2 + vcol] = 0.0;
      G[3 + vcol] = 0.0;
    }

    /* 'control_DRF_indi:132' nu(3:4) = zeros(2,1); */
    qconj[2] = 0.0;
    qconj[3] = 0.0;
  }

  /* 'control_DRF_indi:134' if fail_flag == 1 */
  if (PosDirectControl_U.fail_flag == 1) {
    /* 'control_DRF_indi:136' G(:,fail_id_single) = zeros(4,length(fail_id_single)); */
    G[8] = 0.0;
    G[9] = 0.0;
    G[10] = 0.0;

    /* 'control_DRF_indi:137' ddy0(4) = zeros(1); */
    b_ddy0[3] = 0.0;

    /* 'control_DRF_indi:138' G(4,:) = zeros(size(G(4,:))); */
    G[3] = 0.0;
    G[7] = 0.0;
    G[11] = 0.0;
    G[15] = 0.0;

    /* 'control_DRF_indi:139' nu(4) = zeros(1); */
    qconj[3] = 0.0;
  }

  /* 'control_DRF_indi:160' dU = pinv(G)*(nu-ddy0+G2*dU0); */
  c_p = true;
  for (i = 0; i < 16; i++) {
    X[i] = 0.0;
    if (c_p && ((!rtIsInf(G[i])) && (!rtIsNaN(G[i])))) {
    } else {
      c_p = false;
    }
  }

  if (!c_p) {
    for (ar = 0; ar < 16; ar++) {
      X[ar] = (rtNaN);
    }
  } else {
    svd_qphS61it(G, b_U, rtb_q, V);
    rtb_Pos_z = std::abs(rtb_q[0]);
    if ((!rtIsInf(rtb_Pos_z)) && (!rtIsNaN(rtb_Pos_z))) {
      if (rtb_Pos_z <= 2.2250738585072014E-308) {
        rtb_Pos_z = 4.94065645841247E-324;
      } else {
        frexp(rtb_Pos_z, &br);
        rtb_Pos_z = std::ldexp(1.0, br - 53);
      }
    } else {
      rtb_Pos_z = (rtNaN);
    }

    rtb_Pos_z *= 4.0;
    i = -1;
    br = 0;
    while ((br < 4) && (rtb_q[br] > rtb_Pos_z)) {
      i++;
      br++;
    }

    if (i + 1 > 0) {
      vcol = 0;
      for (br = 0; br <= i; br++) {
        rtb_Pos_z = 1.0 / rtb_q[br];
        for (ar = vcol; ar < vcol + 4; ar++) {
          V[ar] *= rtb_Pos_z;
        }

        vcol += 4;
      }

      for (vcol = 0; vcol < 4; vcol++) {
        X[vcol] = 0.0;
      }

      for (vcol = 4; vcol < 8; vcol++) {
        X[vcol] = 0.0;
      }

      for (vcol = 8; vcol < 12; vcol++) {
        X[vcol] = 0.0;
      }

      for (vcol = 12; vcol < 16; vcol++) {
        X[vcol] = 0.0;
      }

      ar = 0;
      br = i << 2;
      i = br + 1;
      for (vcol = 1; vcol <= i; vcol += 4) {
        ia = ar;
        for (b_ic = 0; b_ic < 4; b_ic++) {
          ia++;
          X[b_ic] += b_U[vcol - 1] * V[ia - 1];
        }

        ar += 4;
      }

      ar = 0;
      i = br + 2;
      for (vcol = 2; vcol <= i; vcol += 4) {
        ia = ar;
        for (b_ic = 4; b_ic < 8; b_ic++) {
          ia++;
          X[b_ic] += b_U[vcol - 1] * V[ia - 1];
        }

        ar += 4;
      }

      ar = 0;
      i = br + 3;
      for (vcol = 3; vcol <= i; vcol += 4) {
        ia = ar;
        for (b_ic = 8; b_ic < 12; b_ic++) {
          ia++;
          X[b_ic] += b_U[vcol - 1] * V[ia - 1];
        }

        ar += 4;
      }

      ar = 0;
      i = br + 4;
      for (vcol = 4; vcol <= i; vcol += 4) {
        ia = ar;
        for (b_ic = 12; b_ic < 16; b_ic++) {
          ia++;
          X[b_ic] += b_U[vcol - 1] * V[ia - 1];
        }

        ar += 4;
      }
    }
  }

  for (ar = 0; ar < 4; ar++) {
    qconj_0[ar] = (((G2[ar + 4] * PosDirectControl_DW.Memory_PreviousInput_d[1]
                     + G2[ar] * PosDirectControl_DW.Memory_PreviousInput_d[0]) +
                    G2[ar + 8] * PosDirectControl_DW.Memory_PreviousInput_d[2])
                   + G2[ar + 12] * PosDirectControl_DW.Memory_PreviousInput_d[3])
      + (qconj[ar] - b_ddy0[ar]);
  }

  /* 'control_DRF_indi:161' dU01 = dU; */
  /* 'control_DRF_indi:163' U = U0+dU; */
  for (ar = 0; ar < 4; ar++) {
    rtb_Pos_z = X[ar + 12] * qconj_0[3] + (X[ar + 8] * qconj_0[2] + (X[ar + 4] *
      qconj_0[1] + X[ar] * qconj_0[0]));
    qconj[ar] = rtb_U0[ar] + rtb_Pos_z;
    rtb_q[ar] = rtb_Pos_z;
  }

  /* 'control_DRF_indi:164' if fail_flag == 1 */
  if (PosDirectControl_U.fail_flag == 1) {
    /* 'control_DRF_indi:165' U(fail_id_single) = 0; */
    qconj[2] = 0.0;
  } else {
    if (PosDirectControl_U.fail_flag == 2) {
      /* 'control_DRF_indi:166' elseif fail_flag == 2 */
      /* 'control_DRF_indi:167' U(fail_id) = 0; */
      qconj[0] = 0.0;
      qconj[2] = 0.0;
    }
  }

  rtb_h[0] = rtb_pos_error[0];
  rtb_h[1] = rtb_pos_error[1];
  rtb_h[2] = rtb_pos_error[2];

  /* MATLAB Function: '<S6>/MATLAB Function1' incorporates:
   *  MATLAB Function: '<S6>/indi'
   */
  /* :  w = zeros(4,1); */
  /* :  w(1) = sqrt(abs(U(1)))*sign(U(1)); */
  if (qconj[0] < 0.0) {
    rtb_w_idx_3 = -1.0;
  } else if (qconj[0] > 0.0) {
    rtb_w_idx_3 = 1.0;
  } else if (qconj[0] == 0.0) {
    rtb_w_idx_3 = 0.0;
  } else {
    rtb_w_idx_3 = (rtNaN);
  }

  alpha = std::sqrt(std::abs(qconj[0])) * rtb_w_idx_3;

  /* :  w(2) = sqrt(abs(U(2)))*sign(U(2)); */
  if (qconj[1] < 0.0) {
    rtb_w_idx_3 = -1.0;
  } else if (qconj[1] > 0.0) {
    rtb_w_idx_3 = 1.0;
  } else if (qconj[1] == 0.0) {
    rtb_w_idx_3 = 0.0;
  } else {
    rtb_w_idx_3 = (rtNaN);
  }

  beta = std::sqrt(std::abs(qconj[1])) * rtb_w_idx_3;

  /* :  w(3) = sqrt(abs(U(3)))*sign(U(3)); */
  if (qconj[2] < 0.0) {
    rtb_w_idx_3 = -1.0;
  } else if (qconj[2] > 0.0) {
    rtb_w_idx_3 = 1.0;
  } else if (qconj[2] == 0.0) {
    rtb_w_idx_3 = 0.0;
  } else {
    rtb_w_idx_3 = (rtNaN);
  }

  rtb_w_idx_2 = std::sqrt(std::abs(qconj[2])) * rtb_w_idx_3;

  /* :  w(4) = sqrt(abs(U(4)))*sign(U(4)); */
  if (qconj[3] < 0.0) {
    rtb_w_idx_3 = -1.0;
  } else if (qconj[3] > 0.0) {
    rtb_w_idx_3 = 1.0;
  } else if (qconj[3] == 0.0) {
    rtb_w_idx_3 = 0.0;
  } else {
    rtb_w_idx_3 = (rtNaN);
  }

  rtb_w_idx_3 *= std::sqrt(std::abs(qconj[3]));

  /* End of MATLAB Function: '<S6>/MATLAB Function1' */

  /* Saturate: '<S6>/Saturation4' */
  /* :  actuator_controls = w_sp_to_px4_actuator_controls(w_sp, par); */
  /* 'w_sp_to_px4_actuator_controls:10' w_min_sq = par.px4.w_min^2; */
  /* 'w_sp_to_px4_actuator_controls:11' w_max_sq = par.px4.w_max^2; */
  /* 'w_sp_to_px4_actuator_controls:13' actuator_controls = -1 + 2*(w_sp.^2 - w_min_sq)./(w_max_sq - w_min_sq); */
  if (alpha > 1256.0) {
    rtb_w_cmd[0] = 1256.0;
  } else if (alpha < 300.0) {
    rtb_w_cmd[0] = 300.0;
  } else {
    rtb_w_cmd[0] = alpha;
  }

  /* Outport: '<Root>/w_rotors' */
  PosDirectControl_Y.w_rotors[0] = rtb_w_cmd[0];

  /* Outport: '<Root>/actuators_control' incorporates:
   *  DataTypeConversion: '<Root>/Cast To Single'
   *  MATLAB Function: '<Root>/MATLAB Function2'
   */
  PosDirectControl_Y.actuators_control[0] = static_cast<real32_T>(((rtb_w_cmd[0]
    * rtb_w_cmd[0] - 98696.044010893587) * 2.0 / 1.5335171993870398E+6 + -1.0));

  /* Saturate: '<S6>/Saturation4' */
  if (beta > 1256.0) {
    rtb_w_cmd[1] = 1256.0;
  } else if (beta < 300.0) {
    rtb_w_cmd[1] = 300.0;
  } else {
    rtb_w_cmd[1] = beta;
  }

  /* Outport: '<Root>/w_rotors' */
  PosDirectControl_Y.w_rotors[1] = rtb_w_cmd[1];

  /* Outport: '<Root>/actuators_control' incorporates:
   *  DataTypeConversion: '<Root>/Cast To Single'
   *  MATLAB Function: '<Root>/MATLAB Function2'
   */
  PosDirectControl_Y.actuators_control[1] = static_cast<real32_T>(((rtb_w_cmd[1]
    * rtb_w_cmd[1] - 98696.044010893587) * 2.0 / 1.5335171993870398E+6 + -1.0));

  /* Saturate: '<S6>/Saturation4' */
  if (rtb_w_idx_2 > 1256.0) {
    rtb_w_cmd[2] = 1256.0;
  } else if (rtb_w_idx_2 < 300.0) {
    rtb_w_cmd[2] = 300.0;
  } else {
    rtb_w_cmd[2] = rtb_w_idx_2;
  }

  /* Outport: '<Root>/w_rotors' */
  PosDirectControl_Y.w_rotors[2] = rtb_w_cmd[2];

  /* Outport: '<Root>/actuators_control' incorporates:
   *  DataTypeConversion: '<Root>/Cast To Single'
   *  MATLAB Function: '<Root>/MATLAB Function2'
   */
  PosDirectControl_Y.actuators_control[2] = static_cast<real32_T>(((rtb_w_cmd[2]
    * rtb_w_cmd[2] - 98696.044010893587) * 2.0 / 1.5335171993870398E+6 + -1.0));

  /* Saturate: '<S6>/Saturation4' */
  if (rtb_w_idx_3 > 1256.0) {
    rtb_w_cmd[3] = 1256.0;
  } else if (rtb_w_idx_3 < 300.0) {
    rtb_w_cmd[3] = 300.0;
  } else {
    rtb_w_cmd[3] = rtb_w_idx_3;
  }

  /* Outport: '<Root>/w_rotors' */
  PosDirectControl_Y.w_rotors[3] = rtb_w_cmd[3];

  /* Outport: '<Root>/actuators_control' incorporates:
   *  DataTypeConversion: '<Root>/Cast To Single'
   *  MATLAB Function: '<Root>/MATLAB Function2'
   */
  PosDirectControl_Y.actuators_control[3] = static_cast<real32_T>(((rtb_w_cmd[3]
    * rtb_w_cmd[3] - 98696.044010893587) * 2.0 / 1.5335171993870398E+6 + -1.0));

  /* DataTypeConversion: '<Root>/Cast To Double7' incorporates:
   *  Inport: '<Root>/accs'
   */
  rtb_CastToDouble7[0] = PosDirectControl_U.accs[0];
  rtb_CastToDouble7[1] = PosDirectControl_U.accs[1];
  rtb_CastToDouble7[2] = PosDirectControl_U.accs[2];

  /* DiscreteStateSpace: '<S3>/ActuatorDynamics_EST' */
  {
    rtb_w_e[0] = (1.0)*PosDirectControl_DW.ActuatorDynamics_EST_DSTATE[0];
    rtb_w_e[1] = (1.0)*PosDirectControl_DW.ActuatorDynamics_EST_DSTATE[1];
    rtb_w_e[2] = (1.0)*PosDirectControl_DW.ActuatorDynamics_EST_DSTATE[2];
    rtb_w_e[3] = (1.0)*PosDirectControl_DW.ActuatorDynamics_EST_DSTATE[3];
  }

  /* DiscreteStateSpace: '<S5>/Discrete State-Space' */
  {
    rtb_accs_filter[0] = (1.0)*PosDirectControl_DW.DiscreteStateSpace_DSTATE_b[0];
    rtb_accs_filter[1] = (1.0)*PosDirectControl_DW.DiscreteStateSpace_DSTATE_b[1];
    rtb_accs_filter[2] = (1.0)*PosDirectControl_DW.DiscreteStateSpace_DSTATE_b[2];
  }

  /* Outputs for Atomic SubSystem: '<S12>/Predict' */
  /* SignalConversion: '<S21>/TmpSignal ConversionAt SFunction Inport4' incorporates:
   *  DataTypeConversion: '<Root>/Cast To Double3'
   *  Inport: '<Root>/rates'
   *  MATLAB Function: '<S19>/Predict'
   */
  rtb_Diff[0] = rtb_accs_filter[0];
  rtb_Diff[3] = PosDirectControl_U.rates[0];
  rtb_Diff[1] = rtb_accs_filter[1];
  rtb_Diff[4] = PosDirectControl_U.rates[1];
  rtb_Diff[2] = rtb_accs_filter[2];
  rtb_Diff[5] = PosDirectControl_U.rates[2];

  /* MATLAB Function: '<S19>/Predict' incorporates:
   *  DataStoreRead: '<S19>/Data Store ReadP'
   *  DataStoreRead: '<S19>/Data Store ReadX'
   *  DataTypeConversion: '<Root>/Cast To Double3'
   *  Inport: '<Root>/rates'
   *  SignalConversion: '<S21>/TmpSignal ConversionAt SFunction Inport4'
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
  ekf_state_jacob_WRvyoYwd(PosDirectControl_DW.x, rtb_Diff, Jacobian);

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
  b_ddy0[0] = ((PosDirectControl_DW.x[6] * 0.0 - PosDirectControl_DW.x[7] *
                rtb_accs_filter[0]) - PosDirectControl_DW.x[8] *
               rtb_accs_filter[1]) - PosDirectControl_DW.x[9] * rtb_accs_filter
    [2];
  b_ddy0[1] = (PosDirectControl_DW.x[6] * rtb_accs_filter[0] + 0.0 *
               PosDirectControl_DW.x[7]) + (PosDirectControl_DW.x[8] *
    rtb_accs_filter[2] - PosDirectControl_DW.x[9] * rtb_accs_filter[1]);
  b_ddy0[2] = (PosDirectControl_DW.x[6] * rtb_accs_filter[1] + 0.0 *
               PosDirectControl_DW.x[8]) + (PosDirectControl_DW.x[9] *
    rtb_accs_filter[0] - PosDirectControl_DW.x[7] * rtb_accs_filter[2]);
  b_ddy0[3] = (PosDirectControl_DW.x[6] * rtb_accs_filter[2] + 0.0 *
               PosDirectControl_DW.x[9]) + (PosDirectControl_DW.x[7] *
    rtb_accs_filter[1] - PosDirectControl_DW.x[8] * rtb_accs_filter[0]);

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
  rtb_xNew[0] = PosDirectControl_DW.x[3] * 0.002 + PosDirectControl_DW.x[0];

  /* 'ekf_state_func:46' x(i+3) = vel(i) + acc(i)*dt; */
  rtb_xNew[3] = ((b_ddy0[0] * -PosDirectControl_DW.x[7] + PosDirectControl_DW.x
                  [6] * b_ddy0[1]) + (b_ddy0[2] * -PosDirectControl_DW.x[9] -
    b_ddy0[3] * -PosDirectControl_DW.x[8])) * 0.002 + PosDirectControl_DW.x[3];

  /* 'ekf_state_func:43' x(i) = pos(i) + vel(i)*dt; */
  rtb_xNew[1] = PosDirectControl_DW.x[4] * 0.002 + PosDirectControl_DW.x[1];

  /* 'ekf_state_func:46' x(i+3) = vel(i) + acc(i)*dt; */
  rtb_xNew[4] = ((b_ddy0[0] * -PosDirectControl_DW.x[8] + PosDirectControl_DW.x
                  [6] * b_ddy0[2]) + (b_ddy0[3] * -PosDirectControl_DW.x[7] -
    b_ddy0[1] * -PosDirectControl_DW.x[9])) * 0.002 + PosDirectControl_DW.x[4];

  /* 'ekf_state_func:43' x(i) = pos(i) + vel(i)*dt; */
  rtb_xNew[2] = PosDirectControl_DW.x[5] * 0.002 + PosDirectControl_DW.x[2];

  /* 'ekf_state_func:46' x(i+3) = vel(i) + acc(i)*dt; */
  rtb_xNew[5] = (((b_ddy0[0] * -PosDirectControl_DW.x[9] +
                   PosDirectControl_DW.x[6] * b_ddy0[3]) + (b_ddy0[1] *
    -PosDirectControl_DW.x[8] - b_ddy0[2] * -PosDirectControl_DW.x[7])) + 9.81) *
    0.002 + PosDirectControl_DW.x[5];

  /* 'ekf_state_func:50' q_dot24 = 0.5*(crossProduct(q(2:4),omega) + omega*q(1)); */
  /* 'crossProduct:3' c = [a(2)*b(3) - a(3)*b(2); a(3)*b(1) - a(1)*b(3); a(1)*b(2) - a(2)*b(1)]; */
  /* 'ekf_state_func:51' q_dot = [q_dot1; q_dot24]; */
  /* 'ekf_state_func:53' q = q + q_dot*dt; */
  alpha = ((PosDirectControl_DW.x[7] * PosDirectControl_U.rates[0] +
            PosDirectControl_DW.x[8] * PosDirectControl_U.rates[1]) +
           PosDirectControl_DW.x[9] * PosDirectControl_U.rates[2]) * -0.5 *
    0.002 + PosDirectControl_DW.x[6];
  beta = ((PosDirectControl_DW.x[8] * PosDirectControl_U.rates[2] -
           PosDirectControl_DW.x[9] * PosDirectControl_U.rates[1]) +
          PosDirectControl_U.rates[0] * PosDirectControl_DW.x[6]) * 0.5 * 0.002
    + PosDirectControl_DW.x[7];
  rtb_w_idx_2 = ((PosDirectControl_DW.x[9] * PosDirectControl_U.rates[0] -
                  PosDirectControl_DW.x[7] * PosDirectControl_U.rates[2]) +
                 PosDirectControl_U.rates[1] * PosDirectControl_DW.x[6]) * 0.5 *
    0.002 + PosDirectControl_DW.x[8];
  rtb_w_idx_3 = ((PosDirectControl_DW.x[7] * PosDirectControl_U.rates[1] -
                  PosDirectControl_DW.x[8] * PosDirectControl_U.rates[0]) +
                 PosDirectControl_U.rates[2] * PosDirectControl_DW.x[6]) * 0.5 *
    0.002 + PosDirectControl_DW.x[9];

  /* 'ekf_state_func:54' qnorm = sqrt(q(1)^2 + q(2)^2 + q(3)^2 + q(4)^2); */
  rtb_Pos_z = std::sqrt(((alpha * alpha + beta * beta) + rtb_w_idx_2 *
    rtb_w_idx_2) + rtb_w_idx_3 * rtb_w_idx_3);

  /* 'ekf_state_func:55' q = q/qnorm; */
  /* 'ekf_state_func:57' for i = 1:4 */
  /* 'ekf_state_func:58' x(i+6) = q(i); */
  rtb_xNew[6] = alpha / rtb_Pos_z;

  /* 'ekf_state_func:58' x(i+6) = q(i); */
  rtb_xNew[7] = beta / rtb_Pos_z;

  /* 'ekf_state_func:58' x(i+6) = q(i); */
  rtb_xNew[8] = rtb_w_idx_2 / rtb_Pos_z;

  /* 'ekf_state_func:58' x(i+6) = q(i); */
  rtb_xNew[9] = rtb_w_idx_3 / rtb_Pos_z;
  for (ar = 0; ar < 10; ar++) {
    for (vcol = 0; vcol < 10; vcol++) {
      br = vcol + 10 * ar;
      Jacobian_0[br] = 0.0;
      for (i = 0; i < 10; i++) {
        Jacobian_0[br] += Jacobian[10 * i + vcol] * PosDirectControl_DW.P[10 *
          ar + i];
      }
    }
  }

  for (i = 0; i < 10; i++) {
    /* DataStoreWrite: '<S19>/Data Store WriteP' incorporates:
     *  Constant: '<S12>/Q'
     *  MATLAB Function: '<S19>/Predict'
     */
    for (ar = 0; ar < 10; ar++) {
      qconj_tmp = 0.0;
      for (vcol = 0; vcol < 10; vcol++) {
        qconj_tmp += Jacobian_0[10 * vcol + i] * Jacobian[10 * vcol + ar];
      }

      /* MATLAB Function: '<S19>/Predict' incorporates:
       *  Constant: '<S12>/Q'
       */
      br = 10 * ar + i;
      PosDirectControl_DW.P[br] = rtCP_Q_Value[br] + qconj_tmp;
    }

    /* End of DataStoreWrite: '<S19>/Data Store WriteP' */

    /* DataStoreWrite: '<S19>/Data Store WriteX' */
    PosDirectControl_DW.x[i] = rtb_xNew[i];
  }

  /* End of Outputs for SubSystem: '<S12>/Predict' */

  /* Switch: '<S3>/Switch' incorporates:
   *  Constant: '<S3>/rpm_feedback'
   *  DataTypeConversion: '<Root>/Cast To Double6'
   *  Gain: '<Root>/rpm2rads'
   *  Inport: '<Root>/esc_rpm'
   */
  if (PosDirectControlParams.rpm_feedback > 0) {
    alpha = 0.10471975511965977 * static_cast<real_T>
      (PosDirectControl_U.esc_rpm[0]);
    beta = 0.10471975511965977 * static_cast<real_T>(PosDirectControl_U.esc_rpm
      [1]);
    rtb_w_idx_2 = 0.10471975511965977 * static_cast<real_T>
      (PosDirectControl_U.esc_rpm[2]);
    rtb_w_idx_3 = 0.10471975511965977 * static_cast<real_T>
      (PosDirectControl_U.esc_rpm[3]);
  } else {
    alpha = rtb_w_e[0];
    beta = rtb_w_e[1];
    rtb_w_idx_2 = rtb_w_e[2];
    rtb_w_idx_3 = rtb_w_e[3];
  }

  /* End of Switch: '<S3>/Switch' */

  /* MATLAB Function: '<S6>/MATLAB Function' */
  /* :  U = zeros(4,1); */
  /* :  U(1) = w(1)^2; */
  rtb_U_p[0] = alpha * alpha;

  /* :  U(2) = w(2)^2; */
  rtb_U_p[1] = beta * beta;

  /* :  U(3) = w(3)^2; */
  rtb_U_p[2] = rtb_w_idx_2 * rtb_w_idx_2;

  /* :  U(4) = w(4)^2; */
  rtb_U_p[3] = rtb_w_idx_3 * rtb_w_idx_3;

  /* Switch: '<S37>/Switch1' incorporates:
   *  Gain: '<S37>/Gain1'
   *  Sum: '<S37>/Add1'
   */
  if (-rtb_DataStoreRead[2] > 0.2) {
    rtb_Pos_z = rtb_pos_sp_filter[2] - rtb_DataStoreRead[2];
  } else {
    rtb_Pos_z = 0.0;
  }

  /* End of Switch: '<S37>/Switch1' */

  /* DigitalClock: '<S3>/t' */
  rtb_fcn3 = ((((&PosDirectControl_M)->Timing.clockTick0+(&PosDirectControl_M)
                ->Timing.clockTickH0* 4294967296.0)) * 0.002);

  /* MATLAB Function: '<S3>/MATLAB Function3' incorporates:
   *  DataTypeConversion: '<Root>/Cast To Double4'
   *  Inport: '<Root>/pos_sp'
   */
  /* :  t = 0; */
  alpha = 0.0;

  /* :  sp = [-1, 0,0.2]; */
  rtb_sp[0] = -1.0;
  rtb_sp[1] = 0.0;
  rtb_sp[2] = 0.2;

  /* :  if z_sp < -0.2 */
  if (PosDirectControl_U.pos_sp[2] < -0.2) {
    /* :  if isempty(t_takeoff) */
    if (!PosDirectControl_DW.t_takeoff_not_empty) {
      /* :  t_takeoff = t0; */
      PosDirectControl_DW.t_takeoff = rtb_fcn3;
      PosDirectControl_DW.t_takeoff_not_empty = true;
    }

    /* :  t = t0 - t_takeoff; */
    alpha = rtb_fcn3 - PosDirectControl_DW.t_takeoff;
  }

  /* :  if t > 5 */
  if (alpha > 5.0) {
    /* :  sp = [0 0 -0.3]; */
    rtb_sp[0] = 0.0;
    rtb_sp[1] = 0.0;
    rtb_sp[2] = -0.3;
  }

  /* :  if t > 8 */
  if (alpha > 8.0) {
    /* :  sp = [0 0 -1.0]; */
    rtb_sp[0] = 0.0;
    rtb_sp[1] = 0.0;
    rtb_sp[2] = -1.0;
  }

  /* :  if t > 10 */
  if (alpha > 10.0) {
    /* :  sp = [2*sin((t-10)), 2*cos((t-10)), -1.0]; */
    rtb_sp[0] = std::sin(alpha - 10.0) * 2.0;
    rtb_sp[1] = std::cos(alpha - 10.0) * 2.0;
    rtb_sp[2] = -1.0;
  }

  /* :  if t > 60 */
  if (alpha > 60.0) {
    /* :  sp = [0 0 -1.0]; */
    rtb_sp[0] = 0.0;
    rtb_sp[1] = 0.0;
    rtb_sp[2] = -1.0;
  }

  /* :  if t > 70 */
  if (alpha > 70.0) {
    /* :  sp = [0 0 -0.2]; */
    rtb_sp[0] = 0.0;
    rtb_sp[1] = 0.0;
    rtb_sp[2] = -0.2;
  }

  /* End of MATLAB Function: '<S3>/MATLAB Function3' */

  /* Sum: '<S10>/Sum5' */
  rtb_pos_error[0] = rtb_pos_sp_filter[0] - rtb_DataStoreRead[0];
  rtb_pos_error[1] = rtb_pos_sp_filter[1] - rtb_DataStoreRead[1];
  rtb_w_idx_3 = rtb_pos_sp_filter[2] - rtb_DataStoreRead[2];

  /* Saturate: '<S9>/Saturation' incorporates:
   *  DiscreteIntegrator: '<S10>/Discrete-Time Integrator'
   *  Gain: '<S10>/Pos_x'
   *  Gain: '<S10>/Pos_x_i'
   *  Gain: '<S10>/Pos_y'
   *  Gain: '<S10>/Pos_y_i'
   *  Gain: '<S10>/Pos_z'
   *  Gain: '<S10>/Pos_z_i'
   *  Gain: '<S10>/Vel_x'
   *  Gain: '<S10>/Vel_y'
   *  Gain: '<S10>/Vel_z'
   *  Sum: '<S10>/Sum1'
   *  Sum: '<S10>/Sum2'
   *  Sum: '<S10>/Sum5'
   */
  beta = ((PosDirectControlParams.pos_x_p_gain * rtb_pos_error[0] +
           PosDirectControlParams.pos_x_i_gain *
           PosDirectControl_DW.DiscreteTimeIntegrator_DSTATE_c[0]) -
          rtb_DataStoreRead[3]) * PosDirectControlParams.pos_x_d_gain;
  alpha = ((PosDirectControlParams.pos_x_p_gain * rtb_pos_error[1] +
            PosDirectControlParams.pos_x_i_gain *
            PosDirectControl_DW.DiscreteTimeIntegrator_DSTATE_c[1]) -
           rtb_DataStoreRead[4]) * PosDirectControlParams.pos_x_d_gain;
  rtb_w_idx_2 = ((0.0 * rtb_w_idx_3 + 0.0 *
                  PosDirectControl_DW.DiscreteTimeIntegrator_DSTATE_c[2]) -
                 rtb_DataStoreRead[5]) * 0.0;
  if (beta > 2.0) {
    /* Sum: '<S9>/Sum' */
    beta = 2.0;
  } else {
    if (beta < -2.0) {
      /* Sum: '<S9>/Sum' */
      beta = -2.0;
    }
  }

  if (alpha > 2.0) {
    /* Sum: '<S9>/Sum' */
    alpha = 2.0;
  } else {
    if (alpha < -2.0) {
      /* Sum: '<S9>/Sum' */
      alpha = -2.0;
    }
  }

  /* S-Function (sdsp2norm2): '<S9>/Normalization' incorporates:
   *  Saturate: '<S9>/Saturation'
   *  Sum: '<S9>/Sum'
   */
  rtb_fcn3 = 1.0 / (std::sqrt((beta * beta + alpha * alpha) + (rtb_w_idx_2 -
    9.8124) * (rtb_w_idx_2 - 9.8124)) + 1.0E-10);
  rtb_Normalization[0] = beta * rtb_fcn3;
  rtb_Normalization[1] = alpha * rtb_fcn3;
  rtb_Normalization[2] = (rtb_w_idx_2 - 9.8124) * rtb_fcn3;

  /* Update for Memory: '<S5>/Memory' */
  /* :  t = 0; */
  /* :  sp = [-1, 0,0.2]; */
  /* :  if z_sp < -0.2 */
  /* :  if t > 5 */
  /* :  if t > 10 */
  PosDirectControl_DW.Memory_PreviousInput[0] = rtb_DataStoreRead[6];
  PosDirectControl_DW.Memory_PreviousInput[1] = rtb_DataStoreRead[7];
  PosDirectControl_DW.Memory_PreviousInput[2] = rtb_DataStoreRead[8];
  PosDirectControl_DW.Memory_PreviousInput[3] = rtb_DataStoreRead[9];

  /* Update for DiscreteStateSpace: '<S6>/Discrete State-Space1' */
  {
    real_T xnew[6];
    xnew[0] = (0.975)*PosDirectControl_DW.DiscreteStateSpace1_DSTATE[0];
    xnew[0] += (0.025)*rtb_VectorConcatenate[0];
    xnew[1] = (0.975)*PosDirectControl_DW.DiscreteStateSpace1_DSTATE[1];
    xnew[1] += (0.025)*rtb_VectorConcatenate[1];
    xnew[2] = (0.975)*PosDirectControl_DW.DiscreteStateSpace1_DSTATE[2];
    xnew[2] += (0.025)*rtb_VectorConcatenate[2];
    xnew[3] = (0.975)*PosDirectControl_DW.DiscreteStateSpace1_DSTATE[3];
    xnew[3] += (0.025)*rtb_VectorConcatenate[3];
    xnew[4] = (0.975)*PosDirectControl_DW.DiscreteStateSpace1_DSTATE[4];
    xnew[4] += (0.025)*rtb_VectorConcatenate[4];
    xnew[5] = (0.975)*PosDirectControl_DW.DiscreteStateSpace1_DSTATE[5];
    xnew[5] += (0.025)*rtb_VectorConcatenate[5];
    (void) memcpy(&PosDirectControl_DW.DiscreteStateSpace1_DSTATE[0], xnew,
                  sizeof(real_T)*6);
  }

  /* Update for UnitDelay: '<S34>/UD' */
  for (i = 0; i < 6; i++) {
    PosDirectControl_DW.UD_DSTATE[i] = rtb_TSamp[i];
  }

  /* End of Update for UnitDelay: '<S34>/UD' */

  /* Update for DiscreteStateSpace: '<S6>/Discrete State-Space' */
  {
    real_T xnew[3];
    xnew[0] = (0.975)*PosDirectControl_DW.DiscreteStateSpace_DSTATE[0];
    xnew[0] += (0.025)*rtb_Normalization[0];
    xnew[1] = (0.975)*PosDirectControl_DW.DiscreteStateSpace_DSTATE[1];
    xnew[1] += (0.025)*rtb_Normalization[1];
    xnew[2] = (0.975)*PosDirectControl_DW.DiscreteStateSpace_DSTATE[2];
    xnew[2] += (0.025)*rtb_Normalization[2];
    (void) memcpy(&PosDirectControl_DW.DiscreteStateSpace_DSTATE[0], xnew,
                  sizeof(real_T)*3);
  }

  /* Update for UnitDelay: '<S33>/UD' */
  PosDirectControl_DW.UD_DSTATE_b[0] = rtb_CastToDouble2_idx_0;

  /* Update for UnitDelay: '<S32>/UD' */
  PosDirectControl_DW.UD_DSTATE_br[0] = rtb_u2[0];

  /* Update for UnitDelay: '<S33>/UD' */
  PosDirectControl_DW.UD_DSTATE_b[1] = rtb_CastToDouble2_idx_1;

  /* Update for UnitDelay: '<S32>/UD' */
  PosDirectControl_DW.UD_DSTATE_br[1] = rtb_u2[1];

  /* Update for UnitDelay: '<S33>/UD' */
  PosDirectControl_DW.UD_DSTATE_b[2] = rtb_DiscreteTimeIntegrator_idx_;

  /* Update for UnitDelay: '<S32>/UD' */
  PosDirectControl_DW.UD_DSTATE_br[2] = rtb_u2[2];

  /* Update for DiscreteStateSpace: '<S3>/Discrete State-Space4' */
  {
    real_T xnew[3];
    xnew[0] = (0.996)*PosDirectControl_DW.DiscreteStateSpace4_DSTATE[0];
    xnew[0] += (0.004)*rtb_sp[0];
    xnew[1] = (0.996)*PosDirectControl_DW.DiscreteStateSpace4_DSTATE[1];
    xnew[1] += (0.004)*rtb_sp[1];
    xnew[2] = (0.996)*PosDirectControl_DW.DiscreteStateSpace4_DSTATE[2];
    xnew[2] += (0.004)*rtb_sp[2];
    (void) memcpy(&PosDirectControl_DW.DiscreteStateSpace4_DSTATE[0], xnew,
                  sizeof(real_T)*3);
  }

  /* Update for UnitDelay: '<S31>/UD' */
  PosDirectControl_DW.UD_DSTATE_g = rtb_enableMeas;

  /* Update for DiscreteIntegrator: '<S37>/Discrete-Time Integrator' */
  PosDirectControl_DW.DiscreteTimeIntegrator_DSTATE += 0.002 * rtb_Pos_z;

  /* Update for DiscreteStateSpace: '<S6>/Discrete State-Space2' */
  {
    real_T xnew[1];
    xnew[0] = 0.975*PosDirectControl_DW.DiscreteStateSpace2_DSTATE;
    xnew[0] += 0.025*rtb_DataStoreRead[5];
    (void) memcpy(&PosDirectControl_DW.DiscreteStateSpace2_DSTATE, xnew,
                  sizeof(real_T)*1);
  }

  /* Update for UnitDelay: '<S30>/UD' */
  PosDirectControl_DW.UD_DSTATE_o = errorSum;

  /* Update for DiscreteStateSpace: '<S6>/Discrete State-Space3' */
  {
    real_T xnew[4];
    xnew[0] = (0.975)*PosDirectControl_DW.DiscreteStateSpace3_DSTATE[0];
    xnew[0] += (0.025)*rtb_U_p[0];
    xnew[1] = (0.975)*PosDirectControl_DW.DiscreteStateSpace3_DSTATE[1];
    xnew[1] += (0.025)*rtb_U_p[1];
    xnew[2] = (0.975)*PosDirectControl_DW.DiscreteStateSpace3_DSTATE[2];
    xnew[2] += (0.025)*rtb_U_p[2];
    xnew[3] = (0.975)*PosDirectControl_DW.DiscreteStateSpace3_DSTATE[3];
    xnew[3] += (0.025)*rtb_U_p[3];
    (void) memcpy(&PosDirectControl_DW.DiscreteStateSpace3_DSTATE[0], xnew,
                  sizeof(real_T)*4);
  }

  /* Update for DiscreteStateSpace: '<S6>/Discrete State-Space4' */
  {
    real_T xnew[3];
    xnew[0] = (0.975)*PosDirectControl_DW.DiscreteStateSpace4_DSTATE_g[0];
    xnew[0] += (0.025)*rtb_h[0];
    xnew[1] = (0.975)*PosDirectControl_DW.DiscreteStateSpace4_DSTATE_g[1];
    xnew[1] += (0.025)*rtb_h[1];
    xnew[2] = (0.975)*PosDirectControl_DW.DiscreteStateSpace4_DSTATE_g[2];
    xnew[2] += (0.025)*rtb_h[2];
    (void) memcpy(&PosDirectControl_DW.DiscreteStateSpace4_DSTATE_g[0], xnew,
                  sizeof(real_T)*3);
  }

  /* Update for Memory: '<S6>/Memory' incorporates:
   *  MATLAB Function: '<S6>/indi'
   */
  PosDirectControl_DW.Memory_PreviousInput_d[0] = rtb_q[0];
  PosDirectControl_DW.Memory_PreviousInput_d[1] = rtb_q[1];
  PosDirectControl_DW.Memory_PreviousInput_d[2] = rtb_q[2];
  PosDirectControl_DW.Memory_PreviousInput_d[3] = rtb_q[3];

  /* Switch: '<S6>/Switch2' incorporates:
   *  Abs: '<S6>/Abs'
   *  MATLAB Function: '<S6>/indi'
   */
  if (!(std::abs(rtb_Pos_y) > 0.0)) {
    rtb_Pos_y = 0.0;
  }

  /* End of Switch: '<S6>/Switch2' */

  /* Update for DiscreteIntegrator: '<S6>/Discrete-Time Integrator1' */
  PosDirectControl_DW.DiscreteTimeIntegrator1_DSTATE += 0.002 * rtb_Pos_y;

  /* Update for DiscreteStateSpace: '<S3>/ActuatorDynamics_EST' */
  {
    real_T xnew[4];
    xnew[0] = (0.94)*PosDirectControl_DW.ActuatorDynamics_EST_DSTATE[0];
    xnew[0] += (0.06)*rtb_w_cmd[0];
    xnew[1] = (0.94)*PosDirectControl_DW.ActuatorDynamics_EST_DSTATE[1];
    xnew[1] += (0.06)*rtb_w_cmd[1];
    xnew[2] = (0.94)*PosDirectControl_DW.ActuatorDynamics_EST_DSTATE[2];
    xnew[2] += (0.06)*rtb_w_cmd[2];
    xnew[3] = (0.94)*PosDirectControl_DW.ActuatorDynamics_EST_DSTATE[3];
    xnew[3] += (0.06)*rtb_w_cmd[3];
    (void) memcpy(&PosDirectControl_DW.ActuatorDynamics_EST_DSTATE[0], xnew,
                  sizeof(real_T)*4);
  }

  /* Update for DiscreteStateSpace: '<S5>/Discrete State-Space' */
  {
    real_T xnew[3];
    xnew[0] = (0.9)*PosDirectControl_DW.DiscreteStateSpace_DSTATE_b[0];
    xnew[0] += (0.1)*rtb_CastToDouble7[0];
    xnew[1] = (0.9)*PosDirectControl_DW.DiscreteStateSpace_DSTATE_b[1];
    xnew[1] += (0.1)*rtb_CastToDouble7[1];
    xnew[2] = (0.9)*PosDirectControl_DW.DiscreteStateSpace_DSTATE_b[2];
    xnew[2] += (0.1)*rtb_CastToDouble7[2];
    (void) memcpy(&PosDirectControl_DW.DiscreteStateSpace_DSTATE_b[0], xnew,
                  sizeof(real_T)*3);
  }

  /* Switch: '<S10>/Switch1' incorporates:
   *  DiscreteIntegrator: '<S10>/Discrete-Time Integrator'
   *  Gain: '<S10>/Gain1'
   */
  c_p = (-rtb_DataStoreRead[2] > 0.2);
  if (c_p) {
    rtb_fcn3 = rtb_pos_error[0];
  } else {
    rtb_fcn3 = 0.0;
  }

  /* Update for DiscreteIntegrator: '<S10>/Discrete-Time Integrator' */
  PosDirectControl_DW.DiscreteTimeIntegrator_DSTATE_c[0] += 0.002 * rtb_fcn3;

  /* Switch: '<S10>/Switch1' incorporates:
   *  DiscreteIntegrator: '<S10>/Discrete-Time Integrator'
   */
  if (c_p) {
    rtb_fcn3 = rtb_pos_error[1];
  } else {
    rtb_fcn3 = 0.0;
    rtb_w_idx_3 = 0.0;
  }

  /* Update for DiscreteIntegrator: '<S10>/Discrete-Time Integrator' */
  PosDirectControl_DW.DiscreteTimeIntegrator_DSTATE_c[1] += 0.002 * rtb_fcn3;
  PosDirectControl_DW.DiscreteTimeIntegrator_DSTATE_c[2] += 0.002 * rtb_w_idx_3;

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The resolution of this integer timer is 0.002, which is the step size
   * of the task. Size of "clockTick0" ensures timer will not overflow during the
   * application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  (&PosDirectControl_M)->Timing.clockTick0++;
  if (!(&PosDirectControl_M)->Timing.clockTick0) {
    (&PosDirectControl_M)->Timing.clockTickH0++;
  }

  rate_scheduler((&PosDirectControl_M));
}

/* Model initialize function */
void PosDirectControlModelClass::initialize()
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)(&PosDirectControl_M), 0,
                sizeof(RT_MODEL_PosDirectControl_T));

  /* block I/O */
  (void) memset(((void *) &PosDirectControl_B), 0,
                sizeof(B_PosDirectControl_T));

  /* states (dwork) */
  (void) memset((void *)&PosDirectControl_DW, 0,
                sizeof(DW_PosDirectControl_T));

  /* external inputs */
  (void)memset(&PosDirectControl_U, 0, sizeof(ExtU_PosDirectControl_T));

  /* external outputs */
  (void) memset((void *)&PosDirectControl_Y, 0,
                sizeof(ExtY_PosDirectControl_T));

  /* Start for DataStoreMemory: '<S12>/DataStoreMemory - P' */
  memcpy(&PosDirectControl_DW.P[0], &rtCP_DataStoreMemoryP_InitialVa[0], 100U *
         sizeof(real_T));

  /* Start for DataStoreMemory: '<S12>/DataStoreMemory - x' */
  memcpy(&PosDirectControl_DW.x[0], &rtCP_DataStoreMemoryx_InitialVa[0], 10U *
         sizeof(real_T));

  {
    int32_T i;

    /* InitializeConditions for Memory: '<S5>/Memory' */
    PosDirectControl_DW.Memory_PreviousInput[0] = 0.0;
    PosDirectControl_DW.Memory_PreviousInput[1] = 0.0;
    PosDirectControl_DW.Memory_PreviousInput[2] = 0.0;
    PosDirectControl_DW.Memory_PreviousInput[3] = 0.0;

    /* InitializeConditions for DiscreteStateSpace: '<S6>/Discrete State-Space1' */
    {
      int_T i1;
      real_T *dw_DSTATE = &PosDirectControl_DW.DiscreteStateSpace1_DSTATE[0];
      for (i1=0; i1 < 6; i1++) {
        dw_DSTATE[i1] = 0.0;
      }
    }

    /* InitializeConditions for UnitDelay: '<S34>/UD' */
    for (i = 0; i < 6; i++) {
      PosDirectControl_DW.UD_DSTATE[i] = 0.0;
    }

    /* End of InitializeConditions for UnitDelay: '<S34>/UD' */

    /* InitializeConditions for DiscreteStateSpace: '<S6>/Discrete State-Space' */
    PosDirectControl_DW.DiscreteStateSpace_DSTATE[0] = (0.0);
    PosDirectControl_DW.DiscreteStateSpace_DSTATE[1] = (0.0);
    PosDirectControl_DW.DiscreteStateSpace_DSTATE[2] = (-1.0);

    /* InitializeConditions for UnitDelay: '<S33>/UD' */
    PosDirectControl_DW.UD_DSTATE_b[0] = 0.0;

    /* InitializeConditions for UnitDelay: '<S32>/UD' */
    PosDirectControl_DW.UD_DSTATE_br[0] = 0.0;

    /* InitializeConditions for UnitDelay: '<S33>/UD' */
    PosDirectControl_DW.UD_DSTATE_b[1] = 0.0;

    /* InitializeConditions for UnitDelay: '<S32>/UD' */
    PosDirectControl_DW.UD_DSTATE_br[1] = 0.0;

    /* InitializeConditions for UnitDelay: '<S33>/UD' */
    PosDirectControl_DW.UD_DSTATE_b[2] = 0.0;

    /* InitializeConditions for UnitDelay: '<S32>/UD' */
    PosDirectControl_DW.UD_DSTATE_br[2] = 0.0;

    /* InitializeConditions for DiscreteStateSpace: '<S3>/Discrete State-Space4' */
    PosDirectControl_DW.DiscreteStateSpace4_DSTATE[0] = (0.0);
    PosDirectControl_DW.DiscreteStateSpace4_DSTATE[1] = (0.0);
    PosDirectControl_DW.DiscreteStateSpace4_DSTATE[2] = (0.0);

    /* InitializeConditions for UnitDelay: '<S31>/UD' */
    PosDirectControl_DW.UD_DSTATE_g = 0.0;

    /* InitializeConditions for DiscreteIntegrator: '<S37>/Discrete-Time Integrator' */
    PosDirectControl_DW.DiscreteTimeIntegrator_DSTATE = 0.0;

    /* InitializeConditions for DiscreteStateSpace: '<S6>/Discrete State-Space2' */
    PosDirectControl_DW.DiscreteStateSpace2_DSTATE = 0.0;

    /* InitializeConditions for UnitDelay: '<S30>/UD' */
    PosDirectControl_DW.UD_DSTATE_o = 0.0;

    /* InitializeConditions for DiscreteStateSpace: '<S6>/Discrete State-Space3' */
    PosDirectControl_DW.DiscreteStateSpace3_DSTATE[0] = 0.0;
    PosDirectControl_DW.DiscreteStateSpace3_DSTATE[1] = 0.0;
    PosDirectControl_DW.DiscreteStateSpace3_DSTATE[2] = 0.0;
    PosDirectControl_DW.DiscreteStateSpace3_DSTATE[3] = 0.0;

    /* InitializeConditions for DiscreteStateSpace: '<S6>/Discrete State-Space4' */
    PosDirectControl_DW.DiscreteStateSpace4_DSTATE_g[0] = (0.0);
    PosDirectControl_DW.DiscreteStateSpace4_DSTATE_g[1] = (0.0);
    PosDirectControl_DW.DiscreteStateSpace4_DSTATE_g[2] = (-1.0);

    /* InitializeConditions for Memory: '<S6>/Memory' */
    PosDirectControl_DW.Memory_PreviousInput_d[0] = 0.0;
    PosDirectControl_DW.Memory_PreviousInput_d[1] = 0.0;
    PosDirectControl_DW.Memory_PreviousInput_d[2] = 0.0;
    PosDirectControl_DW.Memory_PreviousInput_d[3] = 0.0;

    /* InitializeConditions for DiscreteIntegrator: '<S6>/Discrete-Time Integrator1' */
    PosDirectControl_DW.DiscreteTimeIntegrator1_DSTATE = 0.0;

    /* InitializeConditions for DiscreteStateSpace: '<S3>/ActuatorDynamics_EST' */
    PosDirectControl_DW.ActuatorDynamics_EST_DSTATE[0] = 0.0;
    PosDirectControl_DW.ActuatorDynamics_EST_DSTATE[1] = 0.0;
    PosDirectControl_DW.ActuatorDynamics_EST_DSTATE[2] = 0.0;
    PosDirectControl_DW.ActuatorDynamics_EST_DSTATE[3] = 0.0;

    /* InitializeConditions for DiscreteStateSpace: '<S5>/Discrete State-Space' */
    PosDirectControl_DW.DiscreteStateSpace_DSTATE_b[0] = (0.0);
    PosDirectControl_DW.DiscreteStateSpace_DSTATE_b[1] = (0.0);
    PosDirectControl_DW.DiscreteStateSpace_DSTATE_b[2] = (0.0);

    /* InitializeConditions for DiscreteIntegrator: '<S10>/Discrete-Time Integrator' */
    /* :  attPrev = [0;0;0]; */
    PosDirectControl_DW.DiscreteTimeIntegrator_DSTATE_c[0] = 0.0;

    /* SystemInitialize for MATLAB Function: '<S5>/enableMeas' */
    PosDirectControl_DW.attPrev[0] = 0.0;

    /* InitializeConditions for DiscreteIntegrator: '<S10>/Discrete-Time Integrator' */
    PosDirectControl_DW.DiscreteTimeIntegrator_DSTATE_c[1] = 0.0;

    /* SystemInitialize for MATLAB Function: '<S5>/enableMeas' */
    PosDirectControl_DW.attPrev[1] = 0.0;

    /* InitializeConditions for DiscreteIntegrator: '<S10>/Discrete-Time Integrator' */
    PosDirectControl_DW.DiscreteTimeIntegrator_DSTATE_c[2] = 0.0;

    /* SystemInitialize for MATLAB Function: '<S5>/enableMeas' */
    PosDirectControl_DW.attPrev[2] = 0.0;

    /* SystemInitialize for MATLAB Function: '<S3>/unwrap2pi' */
    PosDirectControl_DW.psi_last_not_empty = false;

    /* :  N = 0; */
    PosDirectControl_DW.N = 0.0;

    /* SystemInitialize for MATLAB Function: '<S3>/MATLAB Function3' */
    PosDirectControl_DW.t_takeoff_not_empty = false;

    /* SystemInitialize for MATLAB Function: '<S3>/MATLAB Function2' */
    PosDirectControl_DW.t_takeoff_not_empty_l = false;
  }
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
