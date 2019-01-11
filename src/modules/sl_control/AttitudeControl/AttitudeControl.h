/*
 * AttitudeControl.h
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
  real_T DiscreteStateSpace_DSTATE[3]; /* '<Root>/Discrete State-Space' */
  real_T UD_DSTATE[3];                 /* '<S2>/UD' */
  real_T Integrator_DSTATE;            /* '<S59>/Integrator' */
  real_T Filter_DSTATE;                /* '<S41>/Filter' */
} DW_AttitudeControl_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real32_T att[3];                     /* '<Root>/att' */
  real32_T rates[3];                   /* '<Root>/rates' */
  real32_T thrust_vec_sp[3];           /* '<Root>/thrust_vec_sp' */
  real32_T yaw_angle_sp;               /* '<Root>/yaw_angle_sp' */
} ExtU_AttitudeControl_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real32_T rates_sp[3];                /* '<Root>/rates_sp' */
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
                                                        * Referenced by: '<Root>/Attitude Controller'
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
 * '<S2>'   : 'AttitudeControl/Discrete Derivative'
 * '<S3>'   : 'AttitudeControl/HeadingControl'
 * '<S4>'   : 'AttitudeControl/HeadingControl/Discrete PID Controller1'
 * '<S5>'   : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Anti-windup'
 * '<S6>'   : 'AttitudeControl/HeadingControl/Discrete PID Controller1/D Gain'
 * '<S7>'   : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Filter'
 * '<S8>'   : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Filter ICs'
 * '<S9>'   : 'AttitudeControl/HeadingControl/Discrete PID Controller1/I Gain'
 * '<S10>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Ideal P Gain'
 * '<S11>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Ideal P Gain Fdbk'
 * '<S12>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Integrator'
 * '<S13>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Integrator ICs'
 * '<S14>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/N Copy'
 * '<S15>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/N Gain'
 * '<S16>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/P Copy'
 * '<S17>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Parallel P Gain'
 * '<S18>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Reset Signal'
 * '<S19>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Saturation'
 * '<S20>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Saturation Fdbk'
 * '<S21>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Sum'
 * '<S22>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Sum Fdbk'
 * '<S23>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Tracking Mode'
 * '<S24>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Tracking Mode Sum'
 * '<S25>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/postSat Signal'
 * '<S26>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/preSat Signal'
 * '<S27>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Anti-windup/Back Calculation'
 * '<S28>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Anti-windup/Cont. Clamping Ideal'
 * '<S29>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Anti-windup/Cont. Clamping Parallel'
 * '<S30>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Anti-windup/Disabled'
 * '<S31>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Anti-windup/Disc. Clamping Ideal'
 * '<S32>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Anti-windup/Disc. Clamping Parallel'
 * '<S33>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Anti-windup/Passthrough'
 * '<S34>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/D Gain/Disabled'
 * '<S35>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/D Gain/External Parameters'
 * '<S36>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/D Gain/Internal Parameters'
 * '<S37>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Filter/Cont. Filter'
 * '<S38>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Filter/Differentiator'
 * '<S39>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Filter/Disabled'
 * '<S40>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Filter/Disc. Backward Euler Filter'
 * '<S41>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Filter/Disc. Forward Euler Filter'
 * '<S42>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Filter/Disc. Trapezoidal Filter'
 * '<S43>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Filter ICs/Disabled'
 * '<S44>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Filter ICs/External IC'
 * '<S45>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Filter ICs/Internal IC - Differentiator'
 * '<S46>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Filter ICs/Internal IC - Filter'
 * '<S47>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/I Gain/Disabled'
 * '<S48>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/I Gain/External Parameters'
 * '<S49>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/I Gain/Internal Parameters'
 * '<S50>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Ideal P Gain/External Parameters'
 * '<S51>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Ideal P Gain/Internal Parameters'
 * '<S52>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Ideal P Gain/Passthrough'
 * '<S53>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Ideal P Gain Fdbk/Disabled'
 * '<S54>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Ideal P Gain Fdbk/External Parameters'
 * '<S55>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Ideal P Gain Fdbk/Internal Parameters'
 * '<S56>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Ideal P Gain Fdbk/Passthrough'
 * '<S57>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Integrator/Continuous'
 * '<S58>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Integrator/Disabled'
 * '<S59>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Integrator/Discrete'
 * '<S60>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Integrator ICs/Disabled'
 * '<S61>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Integrator ICs/External IC'
 * '<S62>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Integrator ICs/Internal IC'
 * '<S63>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/N Copy/Disabled'
 * '<S64>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/N Copy/Disabled wSignal Specification'
 * '<S65>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/N Copy/External Parameters'
 * '<S66>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/N Copy/Internal Parameters'
 * '<S67>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/N Gain/Disabled'
 * '<S68>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/N Gain/External Parameters'
 * '<S69>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/N Gain/Internal Parameters'
 * '<S70>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/N Gain/Passthrough'
 * '<S71>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/P Copy/Disabled'
 * '<S72>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/P Copy/External Parameters Ideal'
 * '<S73>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/P Copy/Internal Parameters Ideal'
 * '<S74>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Parallel P Gain/Disabled'
 * '<S75>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Parallel P Gain/External Parameters'
 * '<S76>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Parallel P Gain/Internal Parameters'
 * '<S77>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Parallel P Gain/Passthrough'
 * '<S78>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Reset Signal/Disabled'
 * '<S79>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Reset Signal/External Reset'
 * '<S80>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Saturation/Enabled'
 * '<S81>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Saturation/Passthrough'
 * '<S82>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Saturation Fdbk/Disabled'
 * '<S83>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Saturation Fdbk/Enabled'
 * '<S84>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Saturation Fdbk/Passthrough'
 * '<S85>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Sum/Passthrough_I'
 * '<S86>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Sum/Passthrough_P'
 * '<S87>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Sum/Sum_PD'
 * '<S88>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Sum/Sum_PI'
 * '<S89>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Sum/Sum_PID'
 * '<S90>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Sum Fdbk/Disabled'
 * '<S91>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Sum Fdbk/Enabled'
 * '<S92>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Sum Fdbk/Passthrough'
 * '<S93>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Tracking Mode/Disabled'
 * '<S94>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Tracking Mode/Enabled'
 * '<S95>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Tracking Mode Sum/Passthrough'
 * '<S96>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/Tracking Mode Sum/Tracking Mode'
 * '<S97>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/postSat Signal/Feedback_Path'
 * '<S98>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/postSat Signal/Forward_Path'
 * '<S99>'  : 'AttitudeControl/HeadingControl/Discrete PID Controller1/preSat Signal/Feedback_Path'
 * '<S100>' : 'AttitudeControl/HeadingControl/Discrete PID Controller1/preSat Signal/Forward_Path'
 */
#endif                                 /* RTW_HEADER_AttitudeControl_h_ */
