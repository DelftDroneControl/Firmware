/*
 * RateControl.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "RateControl".
 *
 * Model version              : 1.1008
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C++ source code generated on : Wed Jul 17 14:14:42 2019
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
#ifndef RateControl_COMMON_INCLUDES_
# define RateControl_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* RateControl_COMMON_INCLUDES_ */

#include "RateControl_types.h"

/* Shared type includes */
#include "multiword_types.h"

/* Child system includes */
#include "LoeDetector.h"
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

#ifndef rtmGetErrorStatusPointer
# define rtmGetErrorStatusPointer(rtm) ((const char_T **)(&((rtm)->errorStatus)))
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
  real32_T delayTheta_DSTATE[4];       /* '<S26>/delayTheta' */
  real32_T delayL_DSTATE[16];          /* '<S26>/delayL' */
  real32_T H_rates_DSTATE[6];          /* '<Root>/H_rates' */
  real32_T UD_DSTATE_m[3];             /* '<S1>/UD' */
  real32_T H_accel_DSTATE[2];          /* '<Root>/H_accel' */
  real32_T Integrator_DSTATE;          /* '<S184>/Integrator' */
  real32_T UD_DSTATE_b;                /* '<S163>/UD' */
  real32_T Integrator_DSTATE_f;        /* '<S88>/Integrator' */
  real32_T UD_DSTATE_l;                /* '<S67>/UD' */
  real32_T Integrator_DSTATE_b;        /* '<S280>/Integrator' */
  real32_T UD_DSTATE_bg;               /* '<S259>/UD' */
  real32_T H_rates_sp_DSTATE[6];       /* '<Root>/H_rates_sp' */
  real32_T UD_DSTATE_i[3];             /* '<S4>/UD' */
  real32_T H_actuators_DSTATE[8];      /* '<Root>/H_actuators' */
  real32_T P[81];                      /* '<S12>/DataStoreMemory - P' */
  real32_T x[9];                       /* '<S12>/DataStoreMemory - x' */
  real32_T du_last[4];                 /* '<Root>/INDI_allocator' */
  d_controllib_internal_blocks__T rlsEstimator;/* '<S26>/RLS' */
  uint8_T icLoad;                      /* '<S26>/delayBuffery' */
  uint8_T icLoad_i;                    /* '<S26>/delayBufferH' */
  uint8_T icLoad_d;                    /* '<S26>/delayTheta' */
  uint8_T icLoad_e;                    /* '<S26>/delayL' */
  boolean_T rlsEstimator_not_empty;    /* '<S26>/RLS' */
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
} ExtU_RateControl_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real32_T w_sp[4];                    /* '<Root>/w_sp' */
  real32_T actuators_control[4];       /* '<Root>/actuators_control' */
  real32_T kalman_state[9];            /* '<Root>/kalman_state' */
  real_T fail_P[4];                    /* '<Root>/fail_P' */
  int32_T fail_id;                     /* '<Root>/fail_id' */
} ExtY_RateControl_T;

/* Real-time Model Data Structure */
struct tag_RTM_RateControl_T {
  const char_T *errorStatus;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    uint32_T clockTickH0;
  } Timing;
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
                                                *   '<Root>/Constant2'
                                                *   '<S105>/Proportional Gain'
                                                *   '<S201>/Proportional Gain'
                                                *   '<S297>/Proportional Gain'
                                                */
extern LoeDetectorParamsType LoeDetectorParams;/* Variable: LoeDetectorParams
                                                * Referenced by: '<Root>/Model'
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

  /* model instance variable for '<Root>/Model' */
  LoeDetectorModelClass ModelMDLOBJ1;
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
 * '<S6>'   : 'RateControl/Discrete Derivative5'
 * '<S7>'   : 'RateControl/Discrete Derivative6'
 * '<S8>'   : 'RateControl/Discrete Derivative7'
 * '<S9>'   : 'RateControl/FD'
 * '<S10>'  : 'RateControl/INDI_allocator'
 * '<S11>'  : 'RateControl/IsZero'
 * '<S12>'  : 'RateControl/KF_test'
 * '<S13>'  : 'RateControl/MATLAB Function'
 * '<S14>'  : 'RateControl/MATLAB Function1'
 * '<S15>'  : 'RateControl/MATLAB Function2'
 * '<S16>'  : 'RateControl/MATLAB Function3'
 * '<S17>'  : 'RateControl/MATLAB Function4'
 * '<S18>'  : 'RateControl/MATLAB Function5'
 * '<S19>'  : 'RateControl/MATLAB Function6'
 * '<S20>'  : 'RateControl/MATLAB Function7'
 * '<S21>'  : 'RateControl/MATLAB Function8'
 * '<S22>'  : 'RateControl/MATLAB Function9'
 * '<S23>'  : 'RateControl/P_pitch'
 * '<S24>'  : 'RateControl/P_roll'
 * '<S25>'  : 'RateControl/P_yaw'
 * '<S26>'  : 'RateControl/Recursive Least Squares Estimator'
 * '<S27>'  : 'RateControl/controlEffMatrix'
 * '<S28>'  : 'RateControl/lms'
 * '<S29>'  : 'RateControl/KF_test/Correct1'
 * '<S30>'  : 'RateControl/KF_test/Output'
 * '<S31>'  : 'RateControl/KF_test/Predict'
 * '<S32>'  : 'RateControl/KF_test/Correct1/Correct'
 * '<S33>'  : 'RateControl/KF_test/Predict/Predict'
 * '<S34>'  : 'RateControl/P_pitch/Anti-windup'
 * '<S35>'  : 'RateControl/P_pitch/D Gain'
 * '<S36>'  : 'RateControl/P_pitch/Filter'
 * '<S37>'  : 'RateControl/P_pitch/Filter ICs'
 * '<S38>'  : 'RateControl/P_pitch/I Gain'
 * '<S39>'  : 'RateControl/P_pitch/Ideal P Gain'
 * '<S40>'  : 'RateControl/P_pitch/Ideal P Gain Fdbk'
 * '<S41>'  : 'RateControl/P_pitch/Integrator'
 * '<S42>'  : 'RateControl/P_pitch/Integrator ICs'
 * '<S43>'  : 'RateControl/P_pitch/N Copy'
 * '<S44>'  : 'RateControl/P_pitch/N Gain'
 * '<S45>'  : 'RateControl/P_pitch/P Copy'
 * '<S46>'  : 'RateControl/P_pitch/Parallel P Gain'
 * '<S47>'  : 'RateControl/P_pitch/Reset Signal'
 * '<S48>'  : 'RateControl/P_pitch/Saturation'
 * '<S49>'  : 'RateControl/P_pitch/Saturation Fdbk'
 * '<S50>'  : 'RateControl/P_pitch/Sum'
 * '<S51>'  : 'RateControl/P_pitch/Sum Fdbk'
 * '<S52>'  : 'RateControl/P_pitch/Tracking Mode'
 * '<S53>'  : 'RateControl/P_pitch/Tracking Mode Sum'
 * '<S54>'  : 'RateControl/P_pitch/postSat Signal'
 * '<S55>'  : 'RateControl/P_pitch/preSat Signal'
 * '<S56>'  : 'RateControl/P_pitch/Anti-windup/Back Calculation'
 * '<S57>'  : 'RateControl/P_pitch/Anti-windup/Cont. Clamping Ideal'
 * '<S58>'  : 'RateControl/P_pitch/Anti-windup/Cont. Clamping Parallel'
 * '<S59>'  : 'RateControl/P_pitch/Anti-windup/Disabled'
 * '<S60>'  : 'RateControl/P_pitch/Anti-windup/Disc. Clamping Ideal'
 * '<S61>'  : 'RateControl/P_pitch/Anti-windup/Disc. Clamping Parallel'
 * '<S62>'  : 'RateControl/P_pitch/Anti-windup/Passthrough'
 * '<S63>'  : 'RateControl/P_pitch/D Gain/Disabled'
 * '<S64>'  : 'RateControl/P_pitch/D Gain/External Parameters'
 * '<S65>'  : 'RateControl/P_pitch/D Gain/Internal Parameters'
 * '<S66>'  : 'RateControl/P_pitch/Filter/Cont. Filter'
 * '<S67>'  : 'RateControl/P_pitch/Filter/Differentiator'
 * '<S68>'  : 'RateControl/P_pitch/Filter/Disabled'
 * '<S69>'  : 'RateControl/P_pitch/Filter/Disc. Backward Euler Filter'
 * '<S70>'  : 'RateControl/P_pitch/Filter/Disc. Forward Euler Filter'
 * '<S71>'  : 'RateControl/P_pitch/Filter/Disc. Trapezoidal Filter'
 * '<S72>'  : 'RateControl/P_pitch/Filter ICs/Disabled'
 * '<S73>'  : 'RateControl/P_pitch/Filter ICs/External IC'
 * '<S74>'  : 'RateControl/P_pitch/Filter ICs/Internal IC - Differentiator'
 * '<S75>'  : 'RateControl/P_pitch/Filter ICs/Internal IC - Filter'
 * '<S76>'  : 'RateControl/P_pitch/I Gain/Disabled'
 * '<S77>'  : 'RateControl/P_pitch/I Gain/External Parameters'
 * '<S78>'  : 'RateControl/P_pitch/I Gain/Internal Parameters'
 * '<S79>'  : 'RateControl/P_pitch/Ideal P Gain/External Parameters'
 * '<S80>'  : 'RateControl/P_pitch/Ideal P Gain/Internal Parameters'
 * '<S81>'  : 'RateControl/P_pitch/Ideal P Gain/Passthrough'
 * '<S82>'  : 'RateControl/P_pitch/Ideal P Gain Fdbk/Disabled'
 * '<S83>'  : 'RateControl/P_pitch/Ideal P Gain Fdbk/External Parameters'
 * '<S84>'  : 'RateControl/P_pitch/Ideal P Gain Fdbk/Internal Parameters'
 * '<S85>'  : 'RateControl/P_pitch/Ideal P Gain Fdbk/Passthrough'
 * '<S86>'  : 'RateControl/P_pitch/Integrator/Continuous'
 * '<S87>'  : 'RateControl/P_pitch/Integrator/Disabled'
 * '<S88>'  : 'RateControl/P_pitch/Integrator/Discrete'
 * '<S89>'  : 'RateControl/P_pitch/Integrator ICs/Disabled'
 * '<S90>'  : 'RateControl/P_pitch/Integrator ICs/External IC'
 * '<S91>'  : 'RateControl/P_pitch/Integrator ICs/Internal IC'
 * '<S92>'  : 'RateControl/P_pitch/N Copy/Disabled'
 * '<S93>'  : 'RateControl/P_pitch/N Copy/Disabled wSignal Specification'
 * '<S94>'  : 'RateControl/P_pitch/N Copy/External Parameters'
 * '<S95>'  : 'RateControl/P_pitch/N Copy/Internal Parameters'
 * '<S96>'  : 'RateControl/P_pitch/N Gain/Disabled'
 * '<S97>'  : 'RateControl/P_pitch/N Gain/External Parameters'
 * '<S98>'  : 'RateControl/P_pitch/N Gain/Internal Parameters'
 * '<S99>'  : 'RateControl/P_pitch/N Gain/Passthrough'
 * '<S100>' : 'RateControl/P_pitch/P Copy/Disabled'
 * '<S101>' : 'RateControl/P_pitch/P Copy/External Parameters Ideal'
 * '<S102>' : 'RateControl/P_pitch/P Copy/Internal Parameters Ideal'
 * '<S103>' : 'RateControl/P_pitch/Parallel P Gain/Disabled'
 * '<S104>' : 'RateControl/P_pitch/Parallel P Gain/External Parameters'
 * '<S105>' : 'RateControl/P_pitch/Parallel P Gain/Internal Parameters'
 * '<S106>' : 'RateControl/P_pitch/Parallel P Gain/Passthrough'
 * '<S107>' : 'RateControl/P_pitch/Reset Signal/Disabled'
 * '<S108>' : 'RateControl/P_pitch/Reset Signal/External Reset'
 * '<S109>' : 'RateControl/P_pitch/Saturation/Enabled'
 * '<S110>' : 'RateControl/P_pitch/Saturation/Passthrough'
 * '<S111>' : 'RateControl/P_pitch/Saturation Fdbk/Disabled'
 * '<S112>' : 'RateControl/P_pitch/Saturation Fdbk/Enabled'
 * '<S113>' : 'RateControl/P_pitch/Saturation Fdbk/Passthrough'
 * '<S114>' : 'RateControl/P_pitch/Sum/Passthrough_I'
 * '<S115>' : 'RateControl/P_pitch/Sum/Passthrough_P'
 * '<S116>' : 'RateControl/P_pitch/Sum/Sum_PD'
 * '<S117>' : 'RateControl/P_pitch/Sum/Sum_PI'
 * '<S118>' : 'RateControl/P_pitch/Sum/Sum_PID'
 * '<S119>' : 'RateControl/P_pitch/Sum Fdbk/Disabled'
 * '<S120>' : 'RateControl/P_pitch/Sum Fdbk/Enabled'
 * '<S121>' : 'RateControl/P_pitch/Sum Fdbk/Passthrough'
 * '<S122>' : 'RateControl/P_pitch/Tracking Mode/Disabled'
 * '<S123>' : 'RateControl/P_pitch/Tracking Mode/Enabled'
 * '<S124>' : 'RateControl/P_pitch/Tracking Mode Sum/Passthrough'
 * '<S125>' : 'RateControl/P_pitch/Tracking Mode Sum/Tracking Mode'
 * '<S126>' : 'RateControl/P_pitch/postSat Signal/Feedback_Path'
 * '<S127>' : 'RateControl/P_pitch/postSat Signal/Forward_Path'
 * '<S128>' : 'RateControl/P_pitch/preSat Signal/Feedback_Path'
 * '<S129>' : 'RateControl/P_pitch/preSat Signal/Forward_Path'
 * '<S130>' : 'RateControl/P_roll/Anti-windup'
 * '<S131>' : 'RateControl/P_roll/D Gain'
 * '<S132>' : 'RateControl/P_roll/Filter'
 * '<S133>' : 'RateControl/P_roll/Filter ICs'
 * '<S134>' : 'RateControl/P_roll/I Gain'
 * '<S135>' : 'RateControl/P_roll/Ideal P Gain'
 * '<S136>' : 'RateControl/P_roll/Ideal P Gain Fdbk'
 * '<S137>' : 'RateControl/P_roll/Integrator'
 * '<S138>' : 'RateControl/P_roll/Integrator ICs'
 * '<S139>' : 'RateControl/P_roll/N Copy'
 * '<S140>' : 'RateControl/P_roll/N Gain'
 * '<S141>' : 'RateControl/P_roll/P Copy'
 * '<S142>' : 'RateControl/P_roll/Parallel P Gain'
 * '<S143>' : 'RateControl/P_roll/Reset Signal'
 * '<S144>' : 'RateControl/P_roll/Saturation'
 * '<S145>' : 'RateControl/P_roll/Saturation Fdbk'
 * '<S146>' : 'RateControl/P_roll/Sum'
 * '<S147>' : 'RateControl/P_roll/Sum Fdbk'
 * '<S148>' : 'RateControl/P_roll/Tracking Mode'
 * '<S149>' : 'RateControl/P_roll/Tracking Mode Sum'
 * '<S150>' : 'RateControl/P_roll/postSat Signal'
 * '<S151>' : 'RateControl/P_roll/preSat Signal'
 * '<S152>' : 'RateControl/P_roll/Anti-windup/Back Calculation'
 * '<S153>' : 'RateControl/P_roll/Anti-windup/Cont. Clamping Ideal'
 * '<S154>' : 'RateControl/P_roll/Anti-windup/Cont. Clamping Parallel'
 * '<S155>' : 'RateControl/P_roll/Anti-windup/Disabled'
 * '<S156>' : 'RateControl/P_roll/Anti-windup/Disc. Clamping Ideal'
 * '<S157>' : 'RateControl/P_roll/Anti-windup/Disc. Clamping Parallel'
 * '<S158>' : 'RateControl/P_roll/Anti-windup/Passthrough'
 * '<S159>' : 'RateControl/P_roll/D Gain/Disabled'
 * '<S160>' : 'RateControl/P_roll/D Gain/External Parameters'
 * '<S161>' : 'RateControl/P_roll/D Gain/Internal Parameters'
 * '<S162>' : 'RateControl/P_roll/Filter/Cont. Filter'
 * '<S163>' : 'RateControl/P_roll/Filter/Differentiator'
 * '<S164>' : 'RateControl/P_roll/Filter/Disabled'
 * '<S165>' : 'RateControl/P_roll/Filter/Disc. Backward Euler Filter'
 * '<S166>' : 'RateControl/P_roll/Filter/Disc. Forward Euler Filter'
 * '<S167>' : 'RateControl/P_roll/Filter/Disc. Trapezoidal Filter'
 * '<S168>' : 'RateControl/P_roll/Filter ICs/Disabled'
 * '<S169>' : 'RateControl/P_roll/Filter ICs/External IC'
 * '<S170>' : 'RateControl/P_roll/Filter ICs/Internal IC - Differentiator'
 * '<S171>' : 'RateControl/P_roll/Filter ICs/Internal IC - Filter'
 * '<S172>' : 'RateControl/P_roll/I Gain/Disabled'
 * '<S173>' : 'RateControl/P_roll/I Gain/External Parameters'
 * '<S174>' : 'RateControl/P_roll/I Gain/Internal Parameters'
 * '<S175>' : 'RateControl/P_roll/Ideal P Gain/External Parameters'
 * '<S176>' : 'RateControl/P_roll/Ideal P Gain/Internal Parameters'
 * '<S177>' : 'RateControl/P_roll/Ideal P Gain/Passthrough'
 * '<S178>' : 'RateControl/P_roll/Ideal P Gain Fdbk/Disabled'
 * '<S179>' : 'RateControl/P_roll/Ideal P Gain Fdbk/External Parameters'
 * '<S180>' : 'RateControl/P_roll/Ideal P Gain Fdbk/Internal Parameters'
 * '<S181>' : 'RateControl/P_roll/Ideal P Gain Fdbk/Passthrough'
 * '<S182>' : 'RateControl/P_roll/Integrator/Continuous'
 * '<S183>' : 'RateControl/P_roll/Integrator/Disabled'
 * '<S184>' : 'RateControl/P_roll/Integrator/Discrete'
 * '<S185>' : 'RateControl/P_roll/Integrator ICs/Disabled'
 * '<S186>' : 'RateControl/P_roll/Integrator ICs/External IC'
 * '<S187>' : 'RateControl/P_roll/Integrator ICs/Internal IC'
 * '<S188>' : 'RateControl/P_roll/N Copy/Disabled'
 * '<S189>' : 'RateControl/P_roll/N Copy/Disabled wSignal Specification'
 * '<S190>' : 'RateControl/P_roll/N Copy/External Parameters'
 * '<S191>' : 'RateControl/P_roll/N Copy/Internal Parameters'
 * '<S192>' : 'RateControl/P_roll/N Gain/Disabled'
 * '<S193>' : 'RateControl/P_roll/N Gain/External Parameters'
 * '<S194>' : 'RateControl/P_roll/N Gain/Internal Parameters'
 * '<S195>' : 'RateControl/P_roll/N Gain/Passthrough'
 * '<S196>' : 'RateControl/P_roll/P Copy/Disabled'
 * '<S197>' : 'RateControl/P_roll/P Copy/External Parameters Ideal'
 * '<S198>' : 'RateControl/P_roll/P Copy/Internal Parameters Ideal'
 * '<S199>' : 'RateControl/P_roll/Parallel P Gain/Disabled'
 * '<S200>' : 'RateControl/P_roll/Parallel P Gain/External Parameters'
 * '<S201>' : 'RateControl/P_roll/Parallel P Gain/Internal Parameters'
 * '<S202>' : 'RateControl/P_roll/Parallel P Gain/Passthrough'
 * '<S203>' : 'RateControl/P_roll/Reset Signal/Disabled'
 * '<S204>' : 'RateControl/P_roll/Reset Signal/External Reset'
 * '<S205>' : 'RateControl/P_roll/Saturation/Enabled'
 * '<S206>' : 'RateControl/P_roll/Saturation/Passthrough'
 * '<S207>' : 'RateControl/P_roll/Saturation Fdbk/Disabled'
 * '<S208>' : 'RateControl/P_roll/Saturation Fdbk/Enabled'
 * '<S209>' : 'RateControl/P_roll/Saturation Fdbk/Passthrough'
 * '<S210>' : 'RateControl/P_roll/Sum/Passthrough_I'
 * '<S211>' : 'RateControl/P_roll/Sum/Passthrough_P'
 * '<S212>' : 'RateControl/P_roll/Sum/Sum_PD'
 * '<S213>' : 'RateControl/P_roll/Sum/Sum_PI'
 * '<S214>' : 'RateControl/P_roll/Sum/Sum_PID'
 * '<S215>' : 'RateControl/P_roll/Sum Fdbk/Disabled'
 * '<S216>' : 'RateControl/P_roll/Sum Fdbk/Enabled'
 * '<S217>' : 'RateControl/P_roll/Sum Fdbk/Passthrough'
 * '<S218>' : 'RateControl/P_roll/Tracking Mode/Disabled'
 * '<S219>' : 'RateControl/P_roll/Tracking Mode/Enabled'
 * '<S220>' : 'RateControl/P_roll/Tracking Mode Sum/Passthrough'
 * '<S221>' : 'RateControl/P_roll/Tracking Mode Sum/Tracking Mode'
 * '<S222>' : 'RateControl/P_roll/postSat Signal/Feedback_Path'
 * '<S223>' : 'RateControl/P_roll/postSat Signal/Forward_Path'
 * '<S224>' : 'RateControl/P_roll/preSat Signal/Feedback_Path'
 * '<S225>' : 'RateControl/P_roll/preSat Signal/Forward_Path'
 * '<S226>' : 'RateControl/P_yaw/Anti-windup'
 * '<S227>' : 'RateControl/P_yaw/D Gain'
 * '<S228>' : 'RateControl/P_yaw/Filter'
 * '<S229>' : 'RateControl/P_yaw/Filter ICs'
 * '<S230>' : 'RateControl/P_yaw/I Gain'
 * '<S231>' : 'RateControl/P_yaw/Ideal P Gain'
 * '<S232>' : 'RateControl/P_yaw/Ideal P Gain Fdbk'
 * '<S233>' : 'RateControl/P_yaw/Integrator'
 * '<S234>' : 'RateControl/P_yaw/Integrator ICs'
 * '<S235>' : 'RateControl/P_yaw/N Copy'
 * '<S236>' : 'RateControl/P_yaw/N Gain'
 * '<S237>' : 'RateControl/P_yaw/P Copy'
 * '<S238>' : 'RateControl/P_yaw/Parallel P Gain'
 * '<S239>' : 'RateControl/P_yaw/Reset Signal'
 * '<S240>' : 'RateControl/P_yaw/Saturation'
 * '<S241>' : 'RateControl/P_yaw/Saturation Fdbk'
 * '<S242>' : 'RateControl/P_yaw/Sum'
 * '<S243>' : 'RateControl/P_yaw/Sum Fdbk'
 * '<S244>' : 'RateControl/P_yaw/Tracking Mode'
 * '<S245>' : 'RateControl/P_yaw/Tracking Mode Sum'
 * '<S246>' : 'RateControl/P_yaw/postSat Signal'
 * '<S247>' : 'RateControl/P_yaw/preSat Signal'
 * '<S248>' : 'RateControl/P_yaw/Anti-windup/Back Calculation'
 * '<S249>' : 'RateControl/P_yaw/Anti-windup/Cont. Clamping Ideal'
 * '<S250>' : 'RateControl/P_yaw/Anti-windup/Cont. Clamping Parallel'
 * '<S251>' : 'RateControl/P_yaw/Anti-windup/Disabled'
 * '<S252>' : 'RateControl/P_yaw/Anti-windup/Disc. Clamping Ideal'
 * '<S253>' : 'RateControl/P_yaw/Anti-windup/Disc. Clamping Parallel'
 * '<S254>' : 'RateControl/P_yaw/Anti-windup/Passthrough'
 * '<S255>' : 'RateControl/P_yaw/D Gain/Disabled'
 * '<S256>' : 'RateControl/P_yaw/D Gain/External Parameters'
 * '<S257>' : 'RateControl/P_yaw/D Gain/Internal Parameters'
 * '<S258>' : 'RateControl/P_yaw/Filter/Cont. Filter'
 * '<S259>' : 'RateControl/P_yaw/Filter/Differentiator'
 * '<S260>' : 'RateControl/P_yaw/Filter/Disabled'
 * '<S261>' : 'RateControl/P_yaw/Filter/Disc. Backward Euler Filter'
 * '<S262>' : 'RateControl/P_yaw/Filter/Disc. Forward Euler Filter'
 * '<S263>' : 'RateControl/P_yaw/Filter/Disc. Trapezoidal Filter'
 * '<S264>' : 'RateControl/P_yaw/Filter ICs/Disabled'
 * '<S265>' : 'RateControl/P_yaw/Filter ICs/External IC'
 * '<S266>' : 'RateControl/P_yaw/Filter ICs/Internal IC - Differentiator'
 * '<S267>' : 'RateControl/P_yaw/Filter ICs/Internal IC - Filter'
 * '<S268>' : 'RateControl/P_yaw/I Gain/Disabled'
 * '<S269>' : 'RateControl/P_yaw/I Gain/External Parameters'
 * '<S270>' : 'RateControl/P_yaw/I Gain/Internal Parameters'
 * '<S271>' : 'RateControl/P_yaw/Ideal P Gain/External Parameters'
 * '<S272>' : 'RateControl/P_yaw/Ideal P Gain/Internal Parameters'
 * '<S273>' : 'RateControl/P_yaw/Ideal P Gain/Passthrough'
 * '<S274>' : 'RateControl/P_yaw/Ideal P Gain Fdbk/Disabled'
 * '<S275>' : 'RateControl/P_yaw/Ideal P Gain Fdbk/External Parameters'
 * '<S276>' : 'RateControl/P_yaw/Ideal P Gain Fdbk/Internal Parameters'
 * '<S277>' : 'RateControl/P_yaw/Ideal P Gain Fdbk/Passthrough'
 * '<S278>' : 'RateControl/P_yaw/Integrator/Continuous'
 * '<S279>' : 'RateControl/P_yaw/Integrator/Disabled'
 * '<S280>' : 'RateControl/P_yaw/Integrator/Discrete'
 * '<S281>' : 'RateControl/P_yaw/Integrator ICs/Disabled'
 * '<S282>' : 'RateControl/P_yaw/Integrator ICs/External IC'
 * '<S283>' : 'RateControl/P_yaw/Integrator ICs/Internal IC'
 * '<S284>' : 'RateControl/P_yaw/N Copy/Disabled'
 * '<S285>' : 'RateControl/P_yaw/N Copy/Disabled wSignal Specification'
 * '<S286>' : 'RateControl/P_yaw/N Copy/External Parameters'
 * '<S287>' : 'RateControl/P_yaw/N Copy/Internal Parameters'
 * '<S288>' : 'RateControl/P_yaw/N Gain/Disabled'
 * '<S289>' : 'RateControl/P_yaw/N Gain/External Parameters'
 * '<S290>' : 'RateControl/P_yaw/N Gain/Internal Parameters'
 * '<S291>' : 'RateControl/P_yaw/N Gain/Passthrough'
 * '<S292>' : 'RateControl/P_yaw/P Copy/Disabled'
 * '<S293>' : 'RateControl/P_yaw/P Copy/External Parameters Ideal'
 * '<S294>' : 'RateControl/P_yaw/P Copy/Internal Parameters Ideal'
 * '<S295>' : 'RateControl/P_yaw/Parallel P Gain/Disabled'
 * '<S296>' : 'RateControl/P_yaw/Parallel P Gain/External Parameters'
 * '<S297>' : 'RateControl/P_yaw/Parallel P Gain/Internal Parameters'
 * '<S298>' : 'RateControl/P_yaw/Parallel P Gain/Passthrough'
 * '<S299>' : 'RateControl/P_yaw/Reset Signal/Disabled'
 * '<S300>' : 'RateControl/P_yaw/Reset Signal/External Reset'
 * '<S301>' : 'RateControl/P_yaw/Saturation/Enabled'
 * '<S302>' : 'RateControl/P_yaw/Saturation/Passthrough'
 * '<S303>' : 'RateControl/P_yaw/Saturation Fdbk/Disabled'
 * '<S304>' : 'RateControl/P_yaw/Saturation Fdbk/Enabled'
 * '<S305>' : 'RateControl/P_yaw/Saturation Fdbk/Passthrough'
 * '<S306>' : 'RateControl/P_yaw/Sum/Passthrough_I'
 * '<S307>' : 'RateControl/P_yaw/Sum/Passthrough_P'
 * '<S308>' : 'RateControl/P_yaw/Sum/Sum_PD'
 * '<S309>' : 'RateControl/P_yaw/Sum/Sum_PI'
 * '<S310>' : 'RateControl/P_yaw/Sum/Sum_PID'
 * '<S311>' : 'RateControl/P_yaw/Sum Fdbk/Disabled'
 * '<S312>' : 'RateControl/P_yaw/Sum Fdbk/Enabled'
 * '<S313>' : 'RateControl/P_yaw/Sum Fdbk/Passthrough'
 * '<S314>' : 'RateControl/P_yaw/Tracking Mode/Disabled'
 * '<S315>' : 'RateControl/P_yaw/Tracking Mode/Enabled'
 * '<S316>' : 'RateControl/P_yaw/Tracking Mode Sum/Passthrough'
 * '<S317>' : 'RateControl/P_yaw/Tracking Mode Sum/Tracking Mode'
 * '<S318>' : 'RateControl/P_yaw/postSat Signal/Feedback_Path'
 * '<S319>' : 'RateControl/P_yaw/postSat Signal/Forward_Path'
 * '<S320>' : 'RateControl/P_yaw/preSat Signal/Feedback_Path'
 * '<S321>' : 'RateControl/P_yaw/preSat Signal/Forward_Path'
 * '<S322>' : 'RateControl/Recursive Least Squares Estimator/Check Enable Signal'
 * '<S323>' : 'RateControl/Recursive Least Squares Estimator/Check Initial Covariance'
 * '<S324>' : 'RateControl/Recursive Least Squares Estimator/Check Initial Outputs'
 * '<S325>' : 'RateControl/Recursive Least Squares Estimator/Check Initial Parameters'
 * '<S326>' : 'RateControl/Recursive Least Squares Estimator/Check Initial Regressors'
 * '<S327>' : 'RateControl/Recursive Least Squares Estimator/Check Signals'
 * '<S328>' : 'RateControl/Recursive Least Squares Estimator/Data Type Conversion - AdaptationParameter1'
 * '<S329>' : 'RateControl/Recursive Least Squares Estimator/Data Type Conversion - AdaptationParameter2'
 * '<S330>' : 'RateControl/Recursive Least Squares Estimator/Data Type Conversion - InitialCovariance'
 * '<S331>' : 'RateControl/Recursive Least Squares Estimator/Data Type Conversion - InitialOutputs'
 * '<S332>' : 'RateControl/Recursive Least Squares Estimator/Data Type Conversion - InitialParameters'
 * '<S333>' : 'RateControl/Recursive Least Squares Estimator/Data Type Conversion - InitialRegressors'
 * '<S334>' : 'RateControl/Recursive Least Squares Estimator/Data Type Conversion - L'
 * '<S335>' : 'RateControl/Recursive Least Squares Estimator/Data Type Conversion - Theta'
 * '<S336>' : 'RateControl/Recursive Least Squares Estimator/Data Type Conversion - bufferH'
 * '<S337>' : 'RateControl/Recursive Least Squares Estimator/Data Type Conversion - buffery'
 * '<S338>' : 'RateControl/Recursive Least Squares Estimator/MultiplyWithTranspose'
 * '<S339>' : 'RateControl/Recursive Least Squares Estimator/Process Reset'
 * '<S340>' : 'RateControl/Recursive Least Squares Estimator/ProcessInitialCovariance'
 * '<S341>' : 'RateControl/Recursive Least Squares Estimator/ProcessInitialOutputs'
 * '<S342>' : 'RateControl/Recursive Least Squares Estimator/ProcessInitialParameters'
 * '<S343>' : 'RateControl/Recursive Least Squares Estimator/ProcessInitialRegressors'
 * '<S344>' : 'RateControl/Recursive Least Squares Estimator/RLS'
 * '<S345>' : 'RateControl/Recursive Least Squares Estimator/Process Reset/Check Reset'
 */
#endif                                 /* RTW_HEADER_RateControl_h_ */
