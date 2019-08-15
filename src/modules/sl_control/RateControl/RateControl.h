/*
 * RateControl.h
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

#ifndef RTW_HEADER_RateControl_h_
#define RTW_HEADER_RateControl_h_
#include <string.h>
#include <cmath>
#include <math.h>
#include <stddef.h>
#ifndef RateControl_COMMON_INCLUDES_
# define RateControl_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* RateControl_COMMON_INCLUDES_ */

#include "RateControl_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T fail_id;                      /* '<Root>/MATLAB Function5' */
  real_T counter;                      /* '<Root>/MATLAB Function3' */
  real32_T H_est_rates_DSTATE[6];      /* '<Root>/H_est_rates' */
  real32_T UD_DSTATE[3];               /* '<S5>/UD' */
  real32_T H_est_actuators_DSTATE[8];  /* '<Root>/H_est_actuators' */
  real32_T UD_DSTATE_p[4];             /* '<S3>/UD' */
  real32_T H_est_accel_DSTATE[2];      /* '<Root>/H_est_accel' */
  real32_T delayTheta_DSTATE[4];       /* '<S20>/delayTheta' */
  real32_T delayL_DSTATE[16];          /* '<S20>/delayL' */
  real32_T H_rates_DSTATE[6];          /* '<Root>/H_rates' */
  real32_T UD_DSTATE_m[3];             /* '<S1>/UD' */
  real32_T H_accel_DSTATE[2];          /* '<Root>/H_accel' */
  real32_T Integrator_DSTATE;          /* '<S100>/Integrator' */
  real32_T UD_DSTATE_b;                /* '<S95>/UD' */
  real32_T Integrator_DSTATE_f;        /* '<S56>/Integrator' */
  real32_T UD_DSTATE_l;                /* '<S51>/UD' */
  real32_T Integrator_DSTATE_b;        /* '<S144>/Integrator' */
  real32_T UD_DSTATE_bg;               /* '<S139>/UD' */
  real32_T H_rates_sp_DSTATE[6];       /* '<Root>/H_rates_sp' */
  real32_T UD_DSTATE_i[3];             /* '<S4>/UD' */
  real32_T H_actuators_DSTATE[8];      /* '<Root>/H_actuators' */
  real32_T P[81];                      /* '<S9>/DataStoreMemory - P' */
  real32_T x[9];                       /* '<S9>/DataStoreMemory - x' */
  real32_T du_last[4];                 /* '<Root>/INDI_allocator' */
  d_controllib_internal_blocks__T rlsEstimator;/* '<S20>/RLS' */
  uint8_T icLoad;                      /* '<S20>/delayBuffery' */
  uint8_T icLoad_i;                    /* '<S20>/delayBufferH' */
  uint8_T icLoad_d;                    /* '<S20>/delayTheta' */
  uint8_T icLoad_e;                    /* '<S20>/delayL' */
  boolean_T rlsEstimator_not_empty;    /* '<S20>/RLS' */
} DW_RateControl_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real32_T rates[3];                   /* '<Root>/rates' */
  real32_T rates_sp[3];                /* '<Root>/rates_sp' */
  real32_T accel[3];                   /* '<Root>/accel' */
  real32_T accel_z_sp;                 /* '<Root>/accel_z_sp' */
  int32_T esc_rpm[4];                  /* '<Root>/esc_rpm' */
  int32_T act_limit_rpm;               /* '<Root>/act_limit_rpm' */
  int32_T act_fail_id;                 /* '<Root>/act_fail_id' */
  int32_T act_saw_amp;                 /* '<Root>/act_saw_amp' */
  int32_T act_saw_freq;                /* '<Root>/act_saw_freq' */
  int32_T act_limit_id;                /* '<Root>/act_limit_id' */
} ExtU_RateControl_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real32_T w_sp[4];                    /* '<Root>/w_sp' */
  real32_T actuators_control[4];       /* '<Root>/actuators_control' */
  real32_T kalman_state[9];            /* '<Root>/kalman_state' */
  real_T fail_P[4];                    /* '<Root>/fail_P' */
  real32_T fail_id;                    /* '<Root>/fail_id' */
} ExtY_RateControl_T;

/* Real-time Model Data Structure */
struct tag_RTM_RateControl_T {
  const char_T *errorStatus;
};

/*
 * Exported Global Parameters
 *
 * Note: Exported global parameters are tunable parameters with an exported
 * global storage class designation.  Code generation will declare the memory for
 * these parameters and exports their symbols.
 *
 */
extern RateControlParamsType RateControlParams;/* Variable: RateControlParams
                                                * Referenced by:
                                                *   '<Root>/MATLAB Function5'
                                                *   '<Root>/controlEffMatrix'
                                                *   '<S61>/Proportional Gain'
                                                *   '<S105>/Proportional Gain'
                                                *   '<S149>/Proportional Gain'
                                                */

/* Class declaration for model RateControl */
class RateControlModelClass {
  /* public data and function members */
 public:
  /* External inputs */
  ExtU_RateControl_T RateControl_U;

  /* External outputs */
  ExtY_RateControl_T RateControl_Y;

  /* model initialize function */
  void initialize();

  /* model step function */
  void step();

  /* model terminate function */
  void terminate();

  /* Constructor */
  RateControlModelClass();

  /* Destructor */
  ~RateControlModelClass();

  /* Real-Time Model get method */
  RT_MODEL_RateControl_T * getRTM();

  /* private data and function members */
 private:
  /* Block states */
  DW_RateControl_T RateControl_DW;

  /* Real-Time Model */
  RT_MODEL_RateControl_T RateControl_M;
};

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'RateControl'
 * '<S1>'   : 'RateControl/Discrete Derivative'
 * '<S2>'   : 'RateControl/Discrete Derivative1'
 * '<S3>'   : 'RateControl/Discrete Derivative2'
 * '<S4>'   : 'RateControl/Discrete Derivative3'
 * '<S5>'   : 'RateControl/Discrete Derivative4'
 * '<S6>'   : 'RateControl/Discrete Derivative6'
 * '<S7>'   : 'RateControl/Discrete Derivative7'
 * '<S8>'   : 'RateControl/INDI_allocator'
 * '<S9>'   : 'RateControl/KF_test'
 * '<S10>'  : 'RateControl/MATLAB Function1'
 * '<S11>'  : 'RateControl/MATLAB Function2'
 * '<S12>'  : 'RateControl/MATLAB Function3'
 * '<S13>'  : 'RateControl/MATLAB Function5'
 * '<S14>'  : 'RateControl/MATLAB Function6'
 * '<S15>'  : 'RateControl/MATLAB Function8'
 * '<S16>'  : 'RateControl/MATLAB Function9'
 * '<S17>'  : 'RateControl/P_pitch'
 * '<S18>'  : 'RateControl/P_roll'
 * '<S19>'  : 'RateControl/P_yaw'
 * '<S20>'  : 'RateControl/Recursive Least Squares Estimator'
 * '<S21>'  : 'RateControl/controlEffMatrix'
 * '<S22>'  : 'RateControl/KF_test/Correct1'
 * '<S23>'  : 'RateControl/KF_test/Output'
 * '<S24>'  : 'RateControl/KF_test/Predict'
 * '<S25>'  : 'RateControl/KF_test/Correct1/Correct'
 * '<S26>'  : 'RateControl/KF_test/Predict/Predict'
 * '<S27>'  : 'RateControl/P_pitch/Anti-windup'
 * '<S28>'  : 'RateControl/P_pitch/D Gain'
 * '<S29>'  : 'RateControl/P_pitch/Filter'
 * '<S30>'  : 'RateControl/P_pitch/Filter ICs'
 * '<S31>'  : 'RateControl/P_pitch/I Gain'
 * '<S32>'  : 'RateControl/P_pitch/Ideal P Gain'
 * '<S33>'  : 'RateControl/P_pitch/Ideal P Gain Fdbk'
 * '<S34>'  : 'RateControl/P_pitch/Integrator'
 * '<S35>'  : 'RateControl/P_pitch/Integrator ICs'
 * '<S36>'  : 'RateControl/P_pitch/N Copy'
 * '<S37>'  : 'RateControl/P_pitch/N Gain'
 * '<S38>'  : 'RateControl/P_pitch/P Copy'
 * '<S39>'  : 'RateControl/P_pitch/Parallel P Gain'
 * '<S40>'  : 'RateControl/P_pitch/Reset Signal'
 * '<S41>'  : 'RateControl/P_pitch/Saturation'
 * '<S42>'  : 'RateControl/P_pitch/Saturation Fdbk'
 * '<S43>'  : 'RateControl/P_pitch/Sum'
 * '<S44>'  : 'RateControl/P_pitch/Sum Fdbk'
 * '<S45>'  : 'RateControl/P_pitch/Tracking Mode'
 * '<S46>'  : 'RateControl/P_pitch/Tracking Mode Sum'
 * '<S47>'  : 'RateControl/P_pitch/postSat Signal'
 * '<S48>'  : 'RateControl/P_pitch/preSat Signal'
 * '<S49>'  : 'RateControl/P_pitch/Anti-windup/Passthrough'
 * '<S50>'  : 'RateControl/P_pitch/D Gain/Internal Parameters'
 * '<S51>'  : 'RateControl/P_pitch/Filter/Differentiator'
 * '<S52>'  : 'RateControl/P_pitch/Filter ICs/Internal IC - Differentiator'
 * '<S53>'  : 'RateControl/P_pitch/I Gain/Internal Parameters'
 * '<S54>'  : 'RateControl/P_pitch/Ideal P Gain/Passthrough'
 * '<S55>'  : 'RateControl/P_pitch/Ideal P Gain Fdbk/Disabled'
 * '<S56>'  : 'RateControl/P_pitch/Integrator/Discrete'
 * '<S57>'  : 'RateControl/P_pitch/Integrator ICs/Internal IC'
 * '<S58>'  : 'RateControl/P_pitch/N Copy/Disabled wSignal Specification'
 * '<S59>'  : 'RateControl/P_pitch/N Gain/Passthrough'
 * '<S60>'  : 'RateControl/P_pitch/P Copy/Disabled'
 * '<S61>'  : 'RateControl/P_pitch/Parallel P Gain/Internal Parameters'
 * '<S62>'  : 'RateControl/P_pitch/Reset Signal/Disabled'
 * '<S63>'  : 'RateControl/P_pitch/Saturation/Passthrough'
 * '<S64>'  : 'RateControl/P_pitch/Saturation Fdbk/Disabled'
 * '<S65>'  : 'RateControl/P_pitch/Sum/Sum_PID'
 * '<S66>'  : 'RateControl/P_pitch/Sum Fdbk/Disabled'
 * '<S67>'  : 'RateControl/P_pitch/Tracking Mode/Disabled'
 * '<S68>'  : 'RateControl/P_pitch/Tracking Mode Sum/Passthrough'
 * '<S69>'  : 'RateControl/P_pitch/postSat Signal/Forward_Path'
 * '<S70>'  : 'RateControl/P_pitch/preSat Signal/Forward_Path'
 * '<S71>'  : 'RateControl/P_roll/Anti-windup'
 * '<S72>'  : 'RateControl/P_roll/D Gain'
 * '<S73>'  : 'RateControl/P_roll/Filter'
 * '<S74>'  : 'RateControl/P_roll/Filter ICs'
 * '<S75>'  : 'RateControl/P_roll/I Gain'
 * '<S76>'  : 'RateControl/P_roll/Ideal P Gain'
 * '<S77>'  : 'RateControl/P_roll/Ideal P Gain Fdbk'
 * '<S78>'  : 'RateControl/P_roll/Integrator'
 * '<S79>'  : 'RateControl/P_roll/Integrator ICs'
 * '<S80>'  : 'RateControl/P_roll/N Copy'
 * '<S81>'  : 'RateControl/P_roll/N Gain'
 * '<S82>'  : 'RateControl/P_roll/P Copy'
 * '<S83>'  : 'RateControl/P_roll/Parallel P Gain'
 * '<S84>'  : 'RateControl/P_roll/Reset Signal'
 * '<S85>'  : 'RateControl/P_roll/Saturation'
 * '<S86>'  : 'RateControl/P_roll/Saturation Fdbk'
 * '<S87>'  : 'RateControl/P_roll/Sum'
 * '<S88>'  : 'RateControl/P_roll/Sum Fdbk'
 * '<S89>'  : 'RateControl/P_roll/Tracking Mode'
 * '<S90>'  : 'RateControl/P_roll/Tracking Mode Sum'
 * '<S91>'  : 'RateControl/P_roll/postSat Signal'
 * '<S92>'  : 'RateControl/P_roll/preSat Signal'
 * '<S93>'  : 'RateControl/P_roll/Anti-windup/Passthrough'
 * '<S94>'  : 'RateControl/P_roll/D Gain/Internal Parameters'
 * '<S95>'  : 'RateControl/P_roll/Filter/Differentiator'
 * '<S96>'  : 'RateControl/P_roll/Filter ICs/Internal IC - Differentiator'
 * '<S97>'  : 'RateControl/P_roll/I Gain/Internal Parameters'
 * '<S98>'  : 'RateControl/P_roll/Ideal P Gain/Passthrough'
 * '<S99>'  : 'RateControl/P_roll/Ideal P Gain Fdbk/Disabled'
 * '<S100>' : 'RateControl/P_roll/Integrator/Discrete'
 * '<S101>' : 'RateControl/P_roll/Integrator ICs/Internal IC'
 * '<S102>' : 'RateControl/P_roll/N Copy/Disabled wSignal Specification'
 * '<S103>' : 'RateControl/P_roll/N Gain/Passthrough'
 * '<S104>' : 'RateControl/P_roll/P Copy/Disabled'
 * '<S105>' : 'RateControl/P_roll/Parallel P Gain/Internal Parameters'
 * '<S106>' : 'RateControl/P_roll/Reset Signal/Disabled'
 * '<S107>' : 'RateControl/P_roll/Saturation/Passthrough'
 * '<S108>' : 'RateControl/P_roll/Saturation Fdbk/Disabled'
 * '<S109>' : 'RateControl/P_roll/Sum/Sum_PID'
 * '<S110>' : 'RateControl/P_roll/Sum Fdbk/Disabled'
 * '<S111>' : 'RateControl/P_roll/Tracking Mode/Disabled'
 * '<S112>' : 'RateControl/P_roll/Tracking Mode Sum/Passthrough'
 * '<S113>' : 'RateControl/P_roll/postSat Signal/Forward_Path'
 * '<S114>' : 'RateControl/P_roll/preSat Signal/Forward_Path'
 * '<S115>' : 'RateControl/P_yaw/Anti-windup'
 * '<S116>' : 'RateControl/P_yaw/D Gain'
 * '<S117>' : 'RateControl/P_yaw/Filter'
 * '<S118>' : 'RateControl/P_yaw/Filter ICs'
 * '<S119>' : 'RateControl/P_yaw/I Gain'
 * '<S120>' : 'RateControl/P_yaw/Ideal P Gain'
 * '<S121>' : 'RateControl/P_yaw/Ideal P Gain Fdbk'
 * '<S122>' : 'RateControl/P_yaw/Integrator'
 * '<S123>' : 'RateControl/P_yaw/Integrator ICs'
 * '<S124>' : 'RateControl/P_yaw/N Copy'
 * '<S125>' : 'RateControl/P_yaw/N Gain'
 * '<S126>' : 'RateControl/P_yaw/P Copy'
 * '<S127>' : 'RateControl/P_yaw/Parallel P Gain'
 * '<S128>' : 'RateControl/P_yaw/Reset Signal'
 * '<S129>' : 'RateControl/P_yaw/Saturation'
 * '<S130>' : 'RateControl/P_yaw/Saturation Fdbk'
 * '<S131>' : 'RateControl/P_yaw/Sum'
 * '<S132>' : 'RateControl/P_yaw/Sum Fdbk'
 * '<S133>' : 'RateControl/P_yaw/Tracking Mode'
 * '<S134>' : 'RateControl/P_yaw/Tracking Mode Sum'
 * '<S135>' : 'RateControl/P_yaw/postSat Signal'
 * '<S136>' : 'RateControl/P_yaw/preSat Signal'
 * '<S137>' : 'RateControl/P_yaw/Anti-windup/Passthrough'
 * '<S138>' : 'RateControl/P_yaw/D Gain/Internal Parameters'
 * '<S139>' : 'RateControl/P_yaw/Filter/Differentiator'
 * '<S140>' : 'RateControl/P_yaw/Filter ICs/Internal IC - Differentiator'
 * '<S141>' : 'RateControl/P_yaw/I Gain/Internal Parameters'
 * '<S142>' : 'RateControl/P_yaw/Ideal P Gain/Passthrough'
 * '<S143>' : 'RateControl/P_yaw/Ideal P Gain Fdbk/Disabled'
 * '<S144>' : 'RateControl/P_yaw/Integrator/Discrete'
 * '<S145>' : 'RateControl/P_yaw/Integrator ICs/Internal IC'
 * '<S146>' : 'RateControl/P_yaw/N Copy/Disabled wSignal Specification'
 * '<S147>' : 'RateControl/P_yaw/N Gain/Passthrough'
 * '<S148>' : 'RateControl/P_yaw/P Copy/Disabled'
 * '<S149>' : 'RateControl/P_yaw/Parallel P Gain/Internal Parameters'
 * '<S150>' : 'RateControl/P_yaw/Reset Signal/Disabled'
 * '<S151>' : 'RateControl/P_yaw/Saturation/Passthrough'
 * '<S152>' : 'RateControl/P_yaw/Saturation Fdbk/Disabled'
 * '<S153>' : 'RateControl/P_yaw/Sum/Sum_PID'
 * '<S154>' : 'RateControl/P_yaw/Sum Fdbk/Disabled'
 * '<S155>' : 'RateControl/P_yaw/Tracking Mode/Disabled'
 * '<S156>' : 'RateControl/P_yaw/Tracking Mode Sum/Passthrough'
 * '<S157>' : 'RateControl/P_yaw/postSat Signal/Forward_Path'
 * '<S158>' : 'RateControl/P_yaw/preSat Signal/Forward_Path'
 * '<S159>' : 'RateControl/Recursive Least Squares Estimator/Check Enable Signal'
 * '<S160>' : 'RateControl/Recursive Least Squares Estimator/Check Initial Covariance'
 * '<S161>' : 'RateControl/Recursive Least Squares Estimator/Check Initial Outputs'
 * '<S162>' : 'RateControl/Recursive Least Squares Estimator/Check Initial Parameters'
 * '<S163>' : 'RateControl/Recursive Least Squares Estimator/Check Initial Regressors'
 * '<S164>' : 'RateControl/Recursive Least Squares Estimator/Check Signals'
 * '<S165>' : 'RateControl/Recursive Least Squares Estimator/Data Type Conversion - AdaptationParameter1'
 * '<S166>' : 'RateControl/Recursive Least Squares Estimator/Data Type Conversion - AdaptationParameter2'
 * '<S167>' : 'RateControl/Recursive Least Squares Estimator/Data Type Conversion - InitialCovariance'
 * '<S168>' : 'RateControl/Recursive Least Squares Estimator/Data Type Conversion - InitialOutputs'
 * '<S169>' : 'RateControl/Recursive Least Squares Estimator/Data Type Conversion - InitialParameters'
 * '<S170>' : 'RateControl/Recursive Least Squares Estimator/Data Type Conversion - InitialRegressors'
 * '<S171>' : 'RateControl/Recursive Least Squares Estimator/Data Type Conversion - L'
 * '<S172>' : 'RateControl/Recursive Least Squares Estimator/Data Type Conversion - Theta'
 * '<S173>' : 'RateControl/Recursive Least Squares Estimator/Data Type Conversion - bufferH'
 * '<S174>' : 'RateControl/Recursive Least Squares Estimator/Data Type Conversion - buffery'
 * '<S175>' : 'RateControl/Recursive Least Squares Estimator/MultiplyWithTranspose'
 * '<S176>' : 'RateControl/Recursive Least Squares Estimator/Process Reset'
 * '<S177>' : 'RateControl/Recursive Least Squares Estimator/ProcessInitialCovariance'
 * '<S178>' : 'RateControl/Recursive Least Squares Estimator/ProcessInitialOutputs'
 * '<S179>' : 'RateControl/Recursive Least Squares Estimator/ProcessInitialParameters'
 * '<S180>' : 'RateControl/Recursive Least Squares Estimator/ProcessInitialRegressors'
 * '<S181>' : 'RateControl/Recursive Least Squares Estimator/RLS'
 * '<S182>' : 'RateControl/Recursive Least Squares Estimator/Process Reset/Check Reset'
 */
#endif                                 /* RTW_HEADER_RateControl_h_ */
