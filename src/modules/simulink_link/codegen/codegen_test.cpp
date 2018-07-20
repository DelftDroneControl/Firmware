/*
 * codegen_test.cpp
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "codegen_test".
 *
 * Model version              : 1.5
 * Simulink Coder version : 8.14 (R2018a) 06-Feb-2018
 * C++ source code generated on : Fri Jul 20 10:15:31 2018
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objective: Debugging
 * Validation result: Not run
 */

#include "codegen_test.h"
#include "codegen_test_private.h"

/* Block signals (default storage) */
B_codegen_test_T codegen_test_B;

/* Continuous states */
X_codegen_test_T codegen_test_X;

/* External inputs (root inport signals with default storage) */
ExtU_codegen_test_T codegen_test_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_codegen_test_T codegen_test_Y;

/* Real-time model */
RT_MODEL_codegen_test_T codegen_test_M_;
RT_MODEL_codegen_test_T *const codegen_test_M = &codegen_test_M_;

/*
 * This function updates continuous states using the ODE3 fixed-step
 * solver algorithm
 */
static void rt_ertODEUpdateContinuousStates(RTWSolverInfo *si )
{
  /* Solver Matrices */
  static const real_T rt_ODE3_A[3] = {
    1.0/2.0, 3.0/4.0, 1.0
  };

  static const real_T rt_ODE3_B[3][3] = {
    { 1.0/2.0, 0.0, 0.0 },

    { 0.0, 3.0/4.0, 0.0 },

    { 2.0/9.0, 1.0/3.0, 4.0/9.0 }
  };

  time_T t = rtsiGetT(si);
  time_T tnew = rtsiGetSolverStopTime(si);
  time_T h = rtsiGetStepSize(si);
  real_T *x = rtsiGetContStates(si);
  ODE3_IntgData *id = (ODE3_IntgData *)rtsiGetSolverData(si);
  real_T *y = id->y;
  real_T *f0 = id->f[0];
  real_T *f1 = id->f[1];
  real_T *f2 = id->f[2];
  real_T hB[3];
  int_T i;
  int_T nXc = 2;
  rtsiSetSimTimeStep(si,MINOR_TIME_STEP);

  /* Save the state values at time t in y, we'll use x as ynew. */
  (void) memcpy(y, x,
                (uint_T)nXc*sizeof(real_T));

  /* Assumes that rtsiSetT and ModelOutputs are up-to-date */
  /* f0 = f(t,y) */
  rtsiSetdX(si, f0);
  codegen_test_derivatives();

  /* f(:,2) = feval(odefile, t + hA(1), y + f*hB(:,1), args(:)(*)); */
  hB[0] = h * rt_ODE3_B[0][0];
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0]);
  }

  rtsiSetT(si, t + h*rt_ODE3_A[0]);
  rtsiSetdX(si, f1);
  codegen_test_step();
  codegen_test_derivatives();

  /* f(:,3) = feval(odefile, t + hA(2), y + f*hB(:,2), args(:)(*)); */
  for (i = 0; i <= 1; i++) {
    hB[i] = h * rt_ODE3_B[1][i];
  }

  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0] + f1[i]*hB[1]);
  }

  rtsiSetT(si, t + h*rt_ODE3_A[1]);
  rtsiSetdX(si, f2);
  codegen_test_step();
  codegen_test_derivatives();

  /* tnew = t + hA(3);
     ynew = y + f*hB(:,3); */
  for (i = 0; i <= 2; i++) {
    hB[i] = h * rt_ODE3_B[2][i];
  }

  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0] + f1[i]*hB[1] + f2[i]*hB[2]);
  }

  rtsiSetT(si, tnew);
  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
}

/* Model step function */
void codegen_test_step(void)
{
  if (rtmIsMajorTimeStep(codegen_test_M)) {
    /* set solver stop time */
    rtsiSetSolverStopTime(&codegen_test_M->solverInfo,
                          ((codegen_test_M->Timing.clockTick0+1)*
      codegen_test_M->Timing.stepSize0));
  }                                    /* end MajorTimeStep */

  /* Update absolute time of base rate at minor time step */
  if (rtmIsMinorTimeStep(codegen_test_M)) {
    codegen_test_M->Timing.t[0] = rtsiGetT(&codegen_test_M->solverInfo);
  }

  /* Sum: '<Root>/Sum' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   */
  codegen_test_B.error = codegen_test_U.reference - codegen_test_U.Input1;

  /* Gain: '<S2>/Proportional Gain' */
  codegen_test_B.ProportionalGain = codegen_test_P.PIDController_P *
    codegen_test_B.error;

  /* Integrator: '<S2>/Integrator' */
  codegen_test_B.Integrator = codegen_test_X.Integrator_CSTATE;

  /* Gain: '<S2>/Derivative Gain' */
  codegen_test_B.DerivativeGain = codegen_test_P.PIDController_D *
    codegen_test_B.error;

  /* Integrator: '<S2>/Filter' */
  codegen_test_B.Filter = codegen_test_X.Filter_CSTATE;

  /* Sum: '<S2>/SumD' */
  codegen_test_B.SumD = codegen_test_B.DerivativeGain - codegen_test_B.Filter;

  /* Gain: '<S2>/Filter Coefficient' */
  codegen_test_B.FilterCoefficient = codegen_test_P.PIDController_N *
    codegen_test_B.SumD;

  /* Sum: '<S2>/Sum' */
  codegen_test_B.Sum = (codegen_test_B.ProportionalGain +
                        codegen_test_B.Integrator) +
    codegen_test_B.FilterCoefficient;

  /* Outport: '<Root>/Output' */
  codegen_test_Y.Output = codegen_test_B.Sum;

  /* Gain: '<S2>/Integral Gain' */
  codegen_test_B.IntegralGain = codegen_test_P.PIDController_I *
    codegen_test_B.error;
  if (rtmIsMajorTimeStep(codegen_test_M)) {
    /* Matfile logging */
    rt_UpdateTXYLogVars(codegen_test_M->rtwLogInfo, (codegen_test_M->Timing.t));
  }                                    /* end MajorTimeStep */

  if (rtmIsMajorTimeStep(codegen_test_M)) {
    /* signal main to stop simulation */
    {                                  /* Sample time: [0.0s, 0.0s] */
      if ((rtmGetTFinal(codegen_test_M)!=-1) &&
          !((rtmGetTFinal(codegen_test_M)-codegen_test_M->Timing.t[0]) >
            codegen_test_M->Timing.t[0] * (DBL_EPSILON))) {
        rtmSetErrorStatus(codegen_test_M, "Simulation finished");
      }
    }

    rt_ertODEUpdateContinuousStates(&codegen_test_M->solverInfo);

    /* Update absolute time for base rate */
    /* The "clockTick0" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick0"
     * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
     * overflow during the application lifespan selected.
     */
    ++codegen_test_M->Timing.clockTick0;
    codegen_test_M->Timing.t[0] = rtsiGetSolverStopTime
      (&codegen_test_M->solverInfo);
  }                                    /* end MajorTimeStep */
}

/* Derivatives for root system: '<Root>' */
void codegen_test_derivatives(void)
{
  XDot_codegen_test_T *_rtXdot;
  _rtXdot = ((XDot_codegen_test_T *) codegen_test_M->derivs);

  /* Derivatives for Integrator: '<S2>/Integrator' */
  _rtXdot->Integrator_CSTATE = codegen_test_B.IntegralGain;

  /* Derivatives for Integrator: '<S2>/Filter' */
  _rtXdot->Filter_CSTATE = codegen_test_B.FilterCoefficient;
}

/* Model initialize function */
void codegen_test_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)codegen_test_M, 0,
                sizeof(RT_MODEL_codegen_test_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&codegen_test_M->solverInfo,
                          &codegen_test_M->Timing.simTimeStep);
    rtsiSetTPtr(&codegen_test_M->solverInfo, &rtmGetTPtr(codegen_test_M));
    rtsiSetStepSizePtr(&codegen_test_M->solverInfo,
                       &codegen_test_M->Timing.stepSize0);
    rtsiSetdXPtr(&codegen_test_M->solverInfo, &codegen_test_M->derivs);
    rtsiSetContStatesPtr(&codegen_test_M->solverInfo, (real_T **)
                         &codegen_test_M->contStates);
    rtsiSetNumContStatesPtr(&codegen_test_M->solverInfo,
      &codegen_test_M->Sizes.numContStates);
    rtsiSetNumPeriodicContStatesPtr(&codegen_test_M->solverInfo,
      &codegen_test_M->Sizes.numPeriodicContStates);
    rtsiSetPeriodicContStateIndicesPtr(&codegen_test_M->solverInfo,
      &codegen_test_M->periodicContStateIndices);
    rtsiSetPeriodicContStateRangesPtr(&codegen_test_M->solverInfo,
      &codegen_test_M->periodicContStateRanges);
    rtsiSetErrorStatusPtr(&codegen_test_M->solverInfo, (&rtmGetErrorStatus
      (codegen_test_M)));
    rtsiSetRTModelPtr(&codegen_test_M->solverInfo, codegen_test_M);
  }

  rtsiSetSimTimeStep(&codegen_test_M->solverInfo, MAJOR_TIME_STEP);
  codegen_test_M->intgData.y = codegen_test_M->odeY;
  codegen_test_M->intgData.f[0] = codegen_test_M->odeF[0];
  codegen_test_M->intgData.f[1] = codegen_test_M->odeF[1];
  codegen_test_M->intgData.f[2] = codegen_test_M->odeF[2];
  codegen_test_M->contStates = ((X_codegen_test_T *) &codegen_test_X);
  rtsiSetSolverData(&codegen_test_M->solverInfo, (void *)
                    &codegen_test_M->intgData);
  rtsiSetSolverName(&codegen_test_M->solverInfo,"ode3");
  rtmSetTPtr(codegen_test_M, &codegen_test_M->Timing.tArray[0]);
  rtmSetTFinal(codegen_test_M, 2.0);
  codegen_test_M->Timing.stepSize0 = 0.04;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    codegen_test_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(codegen_test_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(codegen_test_M->rtwLogInfo, (NULL));
    rtliSetLogT(codegen_test_M->rtwLogInfo, "");
    rtliSetLogX(codegen_test_M->rtwLogInfo, "");
    rtliSetLogXFinal(codegen_test_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(codegen_test_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(codegen_test_M->rtwLogInfo, 4);
    rtliSetLogMaxRows(codegen_test_M->rtwLogInfo, 1000);
    rtliSetLogDecimation(codegen_test_M->rtwLogInfo, 1);
    rtliSetLogY(codegen_test_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(codegen_test_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(codegen_test_M->rtwLogInfo, (NULL));
  }

  /* block I/O */
  (void) memset(((void *) &codegen_test_B), 0,
                sizeof(B_codegen_test_T));

  /* states (continuous) */
  {
    (void) memset((void *)&codegen_test_X, 0,
                  sizeof(X_codegen_test_T));
  }

  /* external inputs */
  (void)memset((void *)&codegen_test_U, 0, sizeof(ExtU_codegen_test_T));

  /* external outputs */
  codegen_test_Y.Output = 0.0;

  /* Matfile logging */
  rt_StartDataLoggingWithStartTime(codegen_test_M->rtwLogInfo, 0.0, rtmGetTFinal
    (codegen_test_M), codegen_test_M->Timing.stepSize0, (&rtmGetErrorStatus
    (codegen_test_M)));

  /* InitializeConditions for Integrator: '<S2>/Integrator' */
  codegen_test_X.Integrator_CSTATE = codegen_test_P.Integrator_IC;

  /* InitializeConditions for Integrator: '<S2>/Filter' */
  codegen_test_X.Filter_CSTATE = codegen_test_P.Filter_IC;
}

/* Model terminate function */
void codegen_test_terminate(void)
{
  /* (no terminate code required) */
}
