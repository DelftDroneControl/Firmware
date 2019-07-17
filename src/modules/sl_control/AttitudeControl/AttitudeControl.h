/*
 * AttitudeControl.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "AttitudeControl".
 *
 * Model version              : 1.234
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C++ source code generated on : Fri Feb 22 16:16:41 2019
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_AttitudeControl_h_
#define RTW_HEADER_AttitudeControl_h_
#include <string.h>
#include <cmath>
#include <stddef.h>
#ifndef AttitudeControl_COMMON_INCLUDES_
# define AttitudeControl_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* AttitudeControl_COMMON_INCLUDES_ */

#include "AttitudeControl_types.h"

/* Shared type includes */
#include "multiword_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T N;                            /* '<S4>/unwrap2pi' */
  real32_T UD_DSTATE;                  /* '<S14>/UD' */
  real32_T DiscreteStateSpace_DSTATE[3];/* '<S4>/Discrete State-Space' */
  real32_T P[81];                      /* '<S15>/DataStoreMemory - P' */
  real32_T x[9];                       /* '<S15>/DataStoreMemory - x' */
  real32_T psi_last;                   /* '<S4>/unwrap2pi' */
  real32_T psi_last_j;                 /* '<S4>/MATLAB Function' */
  boolean_T psi_last_not_empty;        /* '<S4>/unwrap2pi' */
  boolean_T psi_last_not_empty_g;      /* '<S4>/MATLAB Function' */
} DW_AttitudeControl_T;

/* Constant parameters (default storage) */
typedef struct {
  /* Expression: p.R{1}
   * Referenced by: '<S15>/R1'
   */
  real32_T R1_Value[36];

  /* Expression: p.Q
   * Referenced by: '<S15>/Q'
   */
  real32_T Q_Value[81];

  /* Expression: p.InitialCovariance
   * Referenced by: '<S15>/DataStoreMemory - P'
   */
  real32_T DataStoreMemoryP_InitialValue[81];
} ConstP_AttitudeControl_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real32_T att[3];                     /* '<Root>/att' */
  real32_T rates[3];                   /* '<Root>/rates' */
  real32_T yaw_angle_sp;               /* '<Root>/yaw_angle_sp' */
  real32_T pos_sp[3];                  /* '<Root>/pos_sp' */
  real32_T accel[3];                   /* '<Root>/accel' */
  real32_T pos[3];                     /* '<Root>/pos' */
} ExtU_AttitudeControl_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real32_T rates_sp[3];                /* '<Root>/rates_sp' */
  real32_T accel_z_sp;                 /* '<Root>/accel_z_sp' */
} ExtY_AttitudeControl_T;

/* Real-time Model Data Structure */
struct tag_RTM_AttitudeControl_T {
  const char_T *errorStatus;
};

/* Constant parameters (default storage) */
extern const ConstP_AttitudeControl_T AttitudeControl_ConstP;

/*
 * Exported Global Parameters
 *
 * Note: Exported global parameters are tunable parameters with an exported
 * global storage class designation.  Code generation will declare the memory for
 * these parameters and exports their symbols.
 *
 */
extern AttitudeControlParamsType AttitudeControlParams;/* Variable: AttitudeControlParams
                                                        * Referenced by:
                                                        *   '<Root>/Attitude Controller'
                                                        *   '<Root>/MATLAB Function1'
                                                        *   '<Root>/Pos_x'
                                                        *   '<Root>/Pos_y'
                                                        *   '<Root>/Pos_z'
                                                        *   '<Root>/Vel_z'
                                                        */

/* Class declaration for model AttitudeControl */
class AttitudeControlModelClass {
  /* public data and function members */
 public:
  /* External inputs */
  ExtU_AttitudeControl_T AttitudeControl_U;

  /* External outputs */
  ExtY_AttitudeControl_T AttitudeControl_Y;

  /* model initialize function */
  void initialize();

  /* model step function */
  void step();

  /* model terminate function */
  void terminate();

  /* Constructor */
  AttitudeControlModelClass();

  /* Destructor */
  ~AttitudeControlModelClass();

  /* Real-Time Model get method */
  RT_MODEL_AttitudeControl_T * getRTM();

  /* private data and function members */
 private:
  /* Block states */
  DW_AttitudeControl_T AttitudeControl_DW;

  /* Real-Time Model */
  RT_MODEL_AttitudeControl_T AttitudeControl_M;

  /* private member function(s) for subsystem '<Root>'*/
  void AttitudeControl_mrdivide_helper(real32_T A[54], const real32_T B[36]);
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
 * '<Root>' : 'AttitudeControl'
 * '<S1>'   : 'AttitudeControl/Attitude Controller'
 * '<S2>'   : 'AttitudeControl/Discrete Derivative'
 * '<S3>'   : 'AttitudeControl/EKF'
 * '<S4>'   : 'AttitudeControl/EKF_att_pos'
 * '<S5>'   : 'AttitudeControl/HeadingControl'
 * '<S6>'   : 'AttitudeControl/MATLAB Function'
 * '<S7>'   : 'AttitudeControl/MATLAB Function1'
 * '<S8>'   : 'AttitudeControl/n_des from accel_sp'
 * '<S9>'   : 'AttitudeControl/EKF/Correct1'
 * '<S10>'  : 'AttitudeControl/EKF/Output'
 * '<S11>'  : 'AttitudeControl/EKF/Predict'
 * '<S12>'  : 'AttitudeControl/EKF/Correct1/Correct'
 * '<S13>'  : 'AttitudeControl/EKF/Predict/Predict'
 * '<S14>'  : 'AttitudeControl/EKF_att_pos/Difference'
 * '<S15>'  : 'AttitudeControl/EKF_att_pos/Extended Kalman Filter'
 * '<S16>'  : 'AttitudeControl/EKF_att_pos/MATLAB Function'
 * '<S17>'  : 'AttitudeControl/EKF_att_pos/unwrap2pi'
 * '<S18>'  : 'AttitudeControl/EKF_att_pos/Extended Kalman Filter/Correct1'
 * '<S19>'  : 'AttitudeControl/EKF_att_pos/Extended Kalman Filter/Output'
 * '<S20>'  : 'AttitudeControl/EKF_att_pos/Extended Kalman Filter/Predict'
 * '<S21>'  : 'AttitudeControl/EKF_att_pos/Extended Kalman Filter/Correct1/Correct'
 * '<S22>'  : 'AttitudeControl/EKF_att_pos/Extended Kalman Filter/Predict/Predict'
 * '<S23>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1'
 * '<S24>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Anti-windup'
 * '<S25>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/D Gain'
 * '<S26>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Filter'
 * '<S27>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Filter ICs'
 * '<S28>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/I Gain'
 * '<S29>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Ideal P Gain'
 * '<S30>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Ideal P Gain Fdbk'
 * '<S31>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Integrator'
 * '<S32>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Integrator ICs'
 * '<S33>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/N Copy'
 * '<S34>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/N Gain'
 * '<S35>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/P Copy'
 * '<S36>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Parallel P Gain'
 * '<S37>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Reset Signal'
 * '<S38>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Saturation'
 * '<S39>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Saturation Fdbk'
 * '<S40>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Sum'
 * '<S41>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Sum Fdbk'
 * '<S42>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Tracking Mode'
 * '<S43>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Tracking Mode Sum'
 * '<S44>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/postSat Signal'
 * '<S45>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/preSat Signal'
 * '<S46>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Anti-windup/Back Calculation'
 * '<S47>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Anti-windup/Cont. Clamping Ideal'
 * '<S48>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Anti-windup/Cont. Clamping Parallel'
 * '<S49>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Anti-windup/Disabled'
 * '<S50>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Anti-windup/Disc. Clamping Ideal'
 * '<S51>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Anti-windup/Disc. Clamping Parallel'
 * '<S52>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Anti-windup/Passthrough'
 * '<S53>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/D Gain/Disabled'
 * '<S54>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/D Gain/External Parameters'
 * '<S55>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/D Gain/Internal Parameters'
 * '<S56>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Filter/Cont. Filter'
 * '<S57>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Filter/Differentiator'
 * '<S58>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Filter/Disabled'
 * '<S59>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Filter/Disc. Backward Euler Filter'
 * '<S60>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Filter/Disc. Forward Euler Filter'
 * '<S61>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Filter/Disc. Trapezoidal Filter'
 * '<S62>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Filter ICs/Disabled'
 * '<S63>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Filter ICs/External IC'
 * '<S64>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Filter ICs/Internal IC - Differentiator'
 * '<S65>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Filter ICs/Internal IC - Filter'
 * '<S66>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/I Gain/Disabled'
 * '<S67>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/I Gain/External Parameters'
 * '<S68>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/I Gain/Internal Parameters'
 * '<S69>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Ideal P Gain/External Parameters'
 * '<S70>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Ideal P Gain/Internal Parameters'
 * '<S71>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Ideal P Gain/Passthrough'
 * '<S72>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Ideal P Gain Fdbk/Disabled'
 * '<S73>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Ideal P Gain Fdbk/External Parameters'
 * '<S74>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Ideal P Gain Fdbk/Internal Parameters'
 * '<S75>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Ideal P Gain Fdbk/Passthrough'
 * '<S76>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Integrator/Continuous'
 * '<S77>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Integrator/Disabled'
 * '<S78>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Integrator/Discrete'
 * '<S79>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Integrator ICs/Disabled'
 * '<S80>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Integrator ICs/External IC'
 * '<S81>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Integrator ICs/Internal IC'
 * '<S82>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/N Copy/Disabled'
 * '<S83>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/N Copy/Disabled wSignal Specification'
 * '<S84>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/N Copy/External Parameters'
 * '<S85>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/N Copy/Internal Parameters'
 * '<S86>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/N Gain/Disabled'
 * '<S87>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/N Gain/External Parameters'
 * '<S88>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/N Gain/Internal Parameters'
 * '<S89>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/N Gain/Passthrough'
 * '<S90>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/P Copy/Disabled'
 * '<S91>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/P Copy/External Parameters Ideal'
 * '<S92>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/P Copy/Internal Parameters Ideal'
 * '<S93>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Parallel P Gain/Disabled'
 * '<S94>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Parallel P Gain/External Parameters'
 * '<S95>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Parallel P Gain/Internal Parameters'
 * '<S96>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Parallel P Gain/Passthrough'
 * '<S97>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Reset Signal/Disabled'
 * '<S98>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Reset Signal/External Reset'
 * '<S99>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Saturation/Enabled'
 * '<S100>' : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Saturation/Passthrough'
 * '<S101>' : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Saturation Fdbk/Disabled'
 * '<S102>' : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Saturation Fdbk/Enabled'
 * '<S103>' : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Saturation Fdbk/Passthrough'
 * '<S104>' : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Sum/Passthrough_I'
 * '<S105>' : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Sum/Passthrough_P'
 * '<S106>' : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Sum/Sum_PD'
 * '<S107>' : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Sum/Sum_PI'
 * '<S108>' : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Sum/Sum_PID'
 * '<S109>' : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Sum Fdbk/Disabled'
 * '<S110>' : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Sum Fdbk/Enabled'
 * '<S111>' : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Sum Fdbk/Passthrough'
 * '<S112>' : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Tracking Mode/Disabled'
 * '<S113>' : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Tracking Mode/Enabled'
 * '<S114>' : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Tracking Mode Sum/Passthrough'
 * '<S115>' : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Tracking Mode Sum/Tracking Mode'
 * '<S116>' : 'AttitudeControl/HeadingControl/Discrete PID Controller1/postSat Signal/Feedback_Path'
 * '<S117>' : 'AttitudeControl/HeadingControl/Discrete PID Controller1/postSat Signal/Forward_Path'
 * '<S118>' : 'AttitudeControl/HeadingControl/Discrete PID Controller1/preSat Signal/Feedback_Path'
 * '<S119>' : 'AttitudeControl/HeadingControl/Discrete PID Controller1/preSat Signal/Forward_Path'
 */
#endif                                 /* RTW_HEADER_AttitudeControl_h_ */
