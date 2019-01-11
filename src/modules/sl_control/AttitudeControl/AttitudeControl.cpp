/*
 * AttitudeControl.cpp
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "AttitudeControl".
 *
 * Model version              : 1.88
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C++ source code generated on : Fri Jan 11 12:24:48 2019
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "AttitudeControl.h"
#include "AttitudeControl_private.h"

/* Exported block parameters */
AttitudeControlParamsType AttitudeControlParams = {
  0.0,
  0.0,
  5.0
} ;                                    /* Variable: AttitudeControlParams
                                        * Referenced by: '<Root>/Attitude Controller'
                                        */

/* Model step function */
void AttitudeControlModelClass::step()
{
  /* local block i/o variables */
  real_T rtb_CastToDouble2[3];
  real_T rtb_DiscreteStateSpace[3];
  real_T R_BI[9];
  real_T A[4];
  real_T B[2];
  int32_T r2;
  real_T a21;
  real_T rtb_TSamp[3];
  real_T rtb_FilterCoefficient;
  real_T rtb_h[3];
  int32_T i;
  real_T R_BI_0[3];
  real_T rtb_pq_sp_idx_1;
  real_T R_BI_tmp;
  real_T R_BI_tmp_0;
  real_T R_BI_tmp_1;
  real_T R_BI_tmp_tmp;

  /* DataTypeConversion: '<Root>/Cast To Double2' incorporates:
   *  Inport: '<Root>/thrust_vec_sp'
   */
  rtb_CastToDouble2[0] = AttitudeControl_U.thrust_vec_sp[0];
  rtb_CastToDouble2[1] = AttitudeControl_U.thrust_vec_sp[1];
  rtb_CastToDouble2[2] = AttitudeControl_U.thrust_vec_sp[2];

  /* DiscreteStateSpace: '<Root>/Discrete State-Space' */
  {
    rtb_DiscreteStateSpace[0] = (1.0)*
      AttitudeControl_DW.DiscreteStateSpace_DSTATE[0];
    rtb_DiscreteStateSpace[1] = (1.0)*
      AttitudeControl_DW.DiscreteStateSpace_DSTATE[1];
    rtb_DiscreteStateSpace[2] = (1.0)*
      AttitudeControl_DW.DiscreteStateSpace_DSTATE[2];
  }

  /* MATLAB Function: '<Root>/Attitude Controller' incorporates:
   *  DataTypeConversion: '<Root>/Cast To Double'
   *  Inport: '<Root>/att'
   */
  /* :  [h, pq_sp] = attitude_control(att, rates, nd_i, ndi_dot, AttitudeControlParams); */
  /* 'attitude_control:3' phi = att(1); */
  /* 'attitude_control:4' theta = att(2); */
  /* 'attitude_control:5' psi = att(3); */
  /* 'attitude_control:7' r = rates(3); */
  /* 'attitude_control:9' R_BI = [cos(theta)*cos(psi) cos(theta)*sin(psi) -sin(theta); */
  /* 'attitude_control:10'         sin(phi)*sin(theta)*cos(psi)-cos(phi)*sin(psi) sin(phi)*sin(theta)*sin(psi)+cos(phi)*cos(psi) sin(phi)*cos(theta); */
  /* 'attitude_control:11'         cos(phi)*sin(theta)*cos(psi)+sin(phi)*sin(psi) cos(phi)*sin(theta)*sin(psi)-sin(phi)*cos(psi) cos(phi)*cos(theta)]; */
  a21 = std::cos((real_T)AttitudeControl_U.att[1]);
  R_BI_tmp = std::cos((real_T)AttitudeControl_U.att[2]);
  R_BI[0] = a21 * R_BI_tmp;
  rtb_pq_sp_idx_1 = std::sin((real_T)AttitudeControl_U.att[2]);
  R_BI[3] = a21 * rtb_pq_sp_idx_1;
  rtb_FilterCoefficient = std::sin((real_T)AttitudeControl_U.att[1]);
  R_BI[6] = -rtb_FilterCoefficient;
  R_BI_tmp_tmp = std::sin((real_T)AttitudeControl_U.att[0]);
  R_BI_tmp_0 = R_BI_tmp_tmp * rtb_FilterCoefficient;
  R_BI_tmp_1 = std::cos((real_T)AttitudeControl_U.att[0]);
  R_BI[1] = R_BI_tmp_0 * R_BI_tmp - R_BI_tmp_1 * rtb_pq_sp_idx_1;
  R_BI[4] = R_BI_tmp_0 * rtb_pq_sp_idx_1 + R_BI_tmp_1 * R_BI_tmp;
  R_BI[7] = R_BI_tmp_tmp * a21;
  rtb_FilterCoefficient *= R_BI_tmp_1;
  R_BI[2] = rtb_FilterCoefficient * R_BI_tmp + R_BI_tmp_tmp * rtb_pq_sp_idx_1;
  R_BI[5] = rtb_FilterCoefficient * rtb_pq_sp_idx_1 - R_BI_tmp_tmp * R_BI_tmp;
  R_BI[8] = R_BI_tmp_1 * a21;

  /* 'attitude_control:14' h = R_BI*nd_i; */
  for (i = 0; i < 3; i++) {
    /* SampleTimeMath: '<S2>/TSamp'
     *
     * About '<S2>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    rtb_TSamp[i] = rtb_DiscreteStateSpace[i] * 500.0;

    /* MATLAB Function: '<Root>/Attitude Controller' */
    rtb_h[i] = R_BI[i + 6] * rtb_CastToDouble2[2] + (R_BI[i + 3] *
      rtb_CastToDouble2[1] + R_BI[i] * rtb_CastToDouble2[0]);
  }

  /* MATLAB Function: '<Root>/Attitude Controller' */
  /* 'attitude_control:17' nxd = AttitudeControlParams.prim_axis_x; */
  /* 'attitude_control:18' nyd = AttitudeControlParams.prim_axis_y; */
  /* 'attitude_control:20' ndi_dot_b = R_BI*(ndi_dot); */
  /* 'attitude_control:22' kx = AttitudeControlParams.xy_gain; */
  /* 'attitude_control:23' ky = AttitudeControlParams.xy_gain; */
  /* 'attitude_control:25' nxdot_cmd = -kx*(h(1)-nxd); */
  /* 'attitude_control:26' nydot_cmd = -ky*(h(2)-nyd); */
  /* 'attitude_control:28' pq_sp = [0 -h(3);h(3) 0]\([nxdot_cmd nydot_cmd]'-[h(2) -h(1)]'*r + ndi_dot_b(1:2)); */
  A[0] = 0.0;
  A[2] = -rtb_h[2];
  A[1] = rtb_h[2];
  A[3] = 0.0;

  /* Sum: '<S2>/Diff' incorporates:
   *  UnitDelay: '<S2>/UD'
   */
  a21 = rtb_TSamp[0] - AttitudeControl_DW.UD_DSTATE[0];
  R_BI_tmp = rtb_TSamp[1] - AttitudeControl_DW.UD_DSTATE[1];
  rtb_pq_sp_idx_1 = rtb_TSamp[2] - AttitudeControl_DW.UD_DSTATE[2];

  /* MATLAB Function: '<Root>/Attitude Controller' incorporates:
   *  DataTypeConversion: '<Root>/Cast To Double1'
   *  Inport: '<Root>/rates'
   */
  for (i = 0; i < 3; i++) {
    R_BI_0[i] = R_BI[i + 6] * rtb_pq_sp_idx_1 + (R_BI[i + 3] * R_BI_tmp + R_BI[i]
      * a21);
  }

  B[0] = ((rtb_h[0] - AttitudeControlParams.prim_axis_x) *
          -AttitudeControlParams.xy_gain - rtb_h[1] * AttitudeControl_U.rates[2])
    + R_BI_0[0];
  B[1] = ((rtb_h[1] - AttitudeControlParams.prim_axis_y) *
          -AttitudeControlParams.xy_gain - -rtb_h[0] * AttitudeControl_U.rates[2])
    + R_BI_0[1];
  if (std::abs(rtb_h[2]) > 0.0) {
    i = 1;
    r2 = 0;
  } else {
    i = 0;
    r2 = 1;
  }

  a21 = A[r2] / A[i];
  R_BI_tmp = A[2 + i];
  rtb_pq_sp_idx_1 = (B[r2] - B[i] * a21) / (A[2 + r2] - R_BI_tmp * a21);

  /* Sum: '<S3>/Sum2' incorporates:
   *  DataTypeConversion: '<Root>/Cast To Double'
   *  DataTypeConversion: '<Root>/Cast To Double3'
   *  Inport: '<Root>/att'
   *  Inport: '<Root>/yaw_angle_sp'
   */
  a21 = (real_T)AttitudeControl_U.yaw_angle_sp - AttitudeControl_U.att[2];

  /* Gain: '<S69>/Filter Coefficient' incorporates:
   *  DiscreteIntegrator: '<S41>/Filter'
   *  Gain: '<S36>/Derivative Gain'
   *  Sum: '<S41>/SumD'
   */
  rtb_FilterCoefficient = (0.0 * a21 - AttitudeControl_DW.Filter_DSTATE) * 100.0;

  /* Outport: '<Root>/rates_sp' incorporates:
   *  DataTypeConversion: '<Root>/Cast To Single'
   *  DiscreteIntegrator: '<S59>/Integrator'
   *  MATLAB Function: '<Root>/Attitude Controller'
   *  Sum: '<S89>/Sum'
   */
  AttitudeControl_Y.rates_sp[0] = (real32_T)((B[i] - R_BI_tmp * rtb_pq_sp_idx_1)
    / A[i]);
  AttitudeControl_Y.rates_sp[1] = (real32_T)rtb_pq_sp_idx_1;
  AttitudeControl_Y.rates_sp[2] = (real32_T)((a21 +
    AttitudeControl_DW.Integrator_DSTATE) + rtb_FilterCoefficient);

  /* Update for DiscreteStateSpace: '<Root>/Discrete State-Space' */
  {
    real_T xnew[3];
    xnew[0] = (0.96)*AttitudeControl_DW.DiscreteStateSpace_DSTATE[0];
    xnew[0] += (0.04)*rtb_CastToDouble2[0];
    xnew[1] = (0.96)*AttitudeControl_DW.DiscreteStateSpace_DSTATE[1];
    xnew[1] += (0.04)*rtb_CastToDouble2[1];
    xnew[2] = (0.96)*AttitudeControl_DW.DiscreteStateSpace_DSTATE[2];
    xnew[2] += (0.04)*rtb_CastToDouble2[2];
    (void) memcpy(&AttitudeControl_DW.DiscreteStateSpace_DSTATE[0], xnew,
                  sizeof(real_T)*3);
  }

  /* Update for UnitDelay: '<S2>/UD' */
  AttitudeControl_DW.UD_DSTATE[0] = rtb_TSamp[0];
  AttitudeControl_DW.UD_DSTATE[1] = rtb_TSamp[1];
  AttitudeControl_DW.UD_DSTATE[2] = rtb_TSamp[2];

  /* Update for DiscreteIntegrator: '<S59>/Integrator' incorporates:
   *  Gain: '<S49>/Integral Gain'
   */
  AttitudeControl_DW.Integrator_DSTATE += 0.0 * a21 * 0.002;

  /* Update for DiscreteIntegrator: '<S41>/Filter' */
  AttitudeControl_DW.Filter_DSTATE += 0.002 * rtb_FilterCoefficient;
}

/* Model initialize function */
void AttitudeControlModelClass::initialize()
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(getRTM(), (NULL));

  /* states (dwork) */
  (void) memset((void *)&AttitudeControl_DW, 0,
                sizeof(DW_AttitudeControl_T));

  /* external inputs */
  (void)memset(&AttitudeControl_U, 0, sizeof(ExtU_AttitudeControl_T));

  /* external outputs */
  (void) memset(&AttitudeControl_Y.rates_sp[0], 0,
                3U*sizeof(real32_T));

  /* InitializeConditions for DiscreteStateSpace: '<Root>/Discrete State-Space' */
  AttitudeControl_DW.DiscreteStateSpace_DSTATE[0] = (0.0);
  AttitudeControl_DW.DiscreteStateSpace_DSTATE[1] = (0.0);
  AttitudeControl_DW.DiscreteStateSpace_DSTATE[2] = (0.0);

  /* InitializeConditions for UnitDelay: '<S2>/UD' */
  AttitudeControl_DW.UD_DSTATE[0] = 0.0;
  AttitudeControl_DW.UD_DSTATE[1] = 0.0;
  AttitudeControl_DW.UD_DSTATE[2] = 0.0;

  /* InitializeConditions for DiscreteIntegrator: '<S59>/Integrator' */
  AttitudeControl_DW.Integrator_DSTATE = 0.0;

  /* InitializeConditions for DiscreteIntegrator: '<S41>/Filter' */
  AttitudeControl_DW.Filter_DSTATE = 0.0;
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
