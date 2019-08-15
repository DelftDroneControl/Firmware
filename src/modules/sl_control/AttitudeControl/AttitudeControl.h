/*
 * AttitudeControl.h
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
  real_T N;                            /* '<S2>/unwrap2pi' */
  real32_T UD_DSTATE;                  /* '<S6>/UD' */
  real32_T DiscreteStateSpace_DSTATE[3];/* '<S2>/Discrete State-Space' */
  real32_T P[81];                      /* '<S7>/DataStoreMemory - P' */
  real32_T x[9];                       /* '<S7>/DataStoreMemory - x' */
  real32_T psi_last;                   /* '<S2>/unwrap2pi' */
  real32_T psi_last_l;                 /* '<S2>/MATLAB Function' */
  boolean_T psi_last_not_empty;        /* '<S2>/unwrap2pi' */
  boolean_T psi_last_not_empty_n;      /* '<S2>/MATLAB Function' */
} DW_AttitudeControl_T;

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
 * '<S2>'   : 'AttitudeControl/EKF_att_pos'
 * '<S3>'   : 'AttitudeControl/HeadingControl'
 * '<S4>'   : 'AttitudeControl/MATLAB Function1'
 * '<S5>'   : 'AttitudeControl/n_des from accel_sp'
 * '<S6>'   : 'AttitudeControl/EKF_att_pos/Difference'
 * '<S7>'   : 'AttitudeControl/EKF_att_pos/Extended Kalman Filter'
 * '<S8>'   : 'AttitudeControl/EKF_att_pos/MATLAB Function'
 * '<S9>'   : 'AttitudeControl/EKF_att_pos/unwrap2pi'
 * '<S10>'  : 'AttitudeControl/EKF_att_pos/Extended Kalman Filter/Correct1'
 * '<S11>'  : 'AttitudeControl/EKF_att_pos/Extended Kalman Filter/Output'
 * '<S12>'  : 'AttitudeControl/EKF_att_pos/Extended Kalman Filter/Predict'
 * '<S13>'  : 'AttitudeControl/EKF_att_pos/Extended Kalman Filter/Correct1/Correct'
 * '<S14>'  : 'AttitudeControl/EKF_att_pos/Extended Kalman Filter/Predict/Predict'
 * '<S15>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1'
 * '<S16>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Anti-windup'
 * '<S17>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/D Gain'
 * '<S18>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Filter'
 * '<S19>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Filter ICs'
 * '<S20>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/I Gain'
 * '<S21>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Ideal P Gain'
 * '<S22>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Ideal P Gain Fdbk'
 * '<S23>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Integrator'
 * '<S24>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Integrator ICs'
 * '<S25>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/N Copy'
 * '<S26>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/N Gain'
 * '<S27>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/P Copy'
 * '<S28>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Parallel P Gain'
 * '<S29>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Reset Signal'
 * '<S30>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Saturation'
 * '<S31>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Saturation Fdbk'
 * '<S32>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Sum'
 * '<S33>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Sum Fdbk'
 * '<S34>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Tracking Mode'
 * '<S35>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Tracking Mode Sum'
 * '<S36>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/postSat Signal'
 * '<S37>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/preSat Signal'
 * '<S38>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Anti-windup/Passthrough'
 * '<S39>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/D Gain/Internal Parameters'
 * '<S40>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Filter/Disc. Forward Euler Filter'
 * '<S41>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Filter ICs/Internal IC - Filter'
 * '<S42>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/I Gain/Internal Parameters'
 * '<S43>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Ideal P Gain/Passthrough'
 * '<S44>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Ideal P Gain Fdbk/Disabled'
 * '<S45>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Integrator/Discrete'
 * '<S46>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Integrator ICs/Internal IC'
 * '<S47>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/N Copy/Disabled'
 * '<S48>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/N Gain/Internal Parameters'
 * '<S49>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/P Copy/Disabled'
 * '<S50>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Parallel P Gain/Internal Parameters'
 * '<S51>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Reset Signal/Disabled'
 * '<S52>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Saturation/Passthrough'
 * '<S53>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Saturation Fdbk/Disabled'
 * '<S54>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Sum/Sum_PID'
 * '<S55>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Sum Fdbk/Disabled'
 * '<S56>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Tracking Mode/Disabled'
 * '<S57>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Tracking Mode Sum/Passthrough'
 * '<S58>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/postSat Signal/Forward_Path'
 * '<S59>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/preSat Signal/Forward_Path'
 */
#endif                                 /* RTW_HEADER_AttitudeControl_h_ */
