/*
 * PosDirectControl.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "PosDirectControl".
 *
 * Model version              : 1.454
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C++ source code generated on : Wed Jan  9 18:22:33 2019
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_PosDirectControl_h_
#define RTW_HEADER_PosDirectControl_h_
#include <string.h>
#include <cmath>
#include <stddef.h>
#ifndef PosDirectControl_COMMON_INCLUDES_
# define PosDirectControl_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* PosDirectControl_COMMON_INCLUDES_ */

#include "PosDirectControl_types.h"

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
  real_T DiscreteStateSpace_DSTATE[3]; /* '<S4>/Discrete State-Space' */
  real_T Integrator_DSTATE;            /* '<S561>/Integrator' */
  real_T Filter_DSTATE;                /* '<S543>/Filter' */
  real_T psi_last;                     /* '<S4>/unwrap2pi' */
  real_T N;                            /* '<S4>/unwrap2pi' */
  boolean_T psi_last_not_empty;        /* '<S4>/unwrap2pi' */
} DW_PosDirectControl_T;

/* Constant parameters (default storage) */
typedef struct {
  /* Expression: posDirectControlParams
   * Referenced by: '<S4>/indi1'
   */
  PosDirectControlParamsType indi1_posDirectControlParams;
} ConstP_PosDirectControl_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real32_T vel[3];                     /* '<Root>/vel' */
  real32_T pos[3];                     /* '<Root>/pos' */
  real32_T rates[3];                   /* '<Root>/rates' */
  real32_T att[3];                     /* '<Root>/att' */
  int32_T esc_rpm[4];                  /* '<Root>/esc_rpm' */
  real32_T pos_sp[3];                  /* '<Root>/pos_sp' */
  real32_T yaw_sp;                     /* '<Root>/yaw_sp' */
  uint32_T fail_flag;                  /* '<Root>/fail_flag' */
} ExtU_PosDirectControl_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T w_rotors[4];                  /* '<Root>/w_rotors' */
  real32_T actuators_control[4];       /* '<Root>/actuators_control' */
} ExtY_PosDirectControl_T;

/* Real-time Model Data Structure */
struct tag_RTM_PosDirectControl_T {
  const char_T *errorStatus;
};

/* Constant parameters (default storage) */
extern const ConstP_PosDirectControl_T PosDirectControl_ConstP;

/*
 * Exported Global Parameters
 *
 * Note: Exported global parameters are tunable parameters with an exported
 * global storage class designation.  Code generation will declare the memory for
 * these parameters and exports their symbols.
 *
 */
extern PosDirectControlParamsType PosDirectControlParams;/* Variable: PosDirectControlParams
                                                          * Referenced by:
                                                          *   '<S4>/Pos_x'
                                                          *   '<S4>/Pos_y'
                                                          *   '<S4>/Vel_x'
                                                          *   '<S4>/Vel_y'
                                                          */

/* Class declaration for model PosDirectControl */
class PosDirectControlModelClass {
  /* public data and function members */
 public:
  /* External inputs */
  ExtU_PosDirectControl_T PosDirectControl_U;

  /* External outputs */
  ExtY_PosDirectControl_T PosDirectControl_Y;

  /* model initialize function */
  void initialize();

  /* model step function */
  void step();

  /* model terminate function */
  void terminate();

  /* Constructor */
  PosDirectControlModelClass();

  /* Destructor */
  ~PosDirectControlModelClass();

  /* Real-Time Model get method */
  RT_MODEL_PosDirectControl_T * getRTM();

  /* private data and function members */
 private:
  /* Block states */
  DW_PosDirectControl_T PosDirectControl_DW;

  /* Real-Time Model */
  RT_MODEL_PosDirectControl_T PosDirectControl_M;
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
 * '<Root>' : 'PosDirectControl'
 * '<S1>'   : 'PosDirectControl/MATLAB Function2'
 * '<S2>'   : 'PosDirectControl/Subsystem'
 * '<S3>'   : 'PosDirectControl/Subsystem/indi'
 * '<S4>'   : 'PosDirectControl/Subsystem/lqr'
 * '<S5>'   : 'PosDirectControl/Subsystem/indi/Discrete Derivative1'
 * '<S6>'   : 'PosDirectControl/Subsystem/indi/Discrete Derivative2'
 * '<S7>'   : 'PosDirectControl/Subsystem/indi/Discrete Derivative3'
 * '<S8>'   : 'PosDirectControl/Subsystem/indi/Discrete Derivative4'
 * '<S9>'   : 'PosDirectControl/Subsystem/indi/Discrete Derivative5'
 * '<S10>'  : 'PosDirectControl/Subsystem/indi/Discrete Derivative6'
 * '<S11>'  : 'PosDirectControl/Subsystem/indi/Discrete Derivative7'
 * '<S12>'  : 'PosDirectControl/Subsystem/indi/MATLAB Function'
 * '<S13>'  : 'PosDirectControl/Subsystem/indi/MATLAB Function1'
 * '<S14>'  : 'PosDirectControl/Subsystem/indi/PD_x'
 * '<S15>'  : 'PosDirectControl/Subsystem/indi/PD_y'
 * '<S16>'  : 'PosDirectControl/Subsystem/indi/PD_z'
 * '<S17>'  : 'PosDirectControl/Subsystem/indi/indi'
 * '<S18>'  : 'PosDirectControl/Subsystem/indi/n_des from accel_sp'
 * '<S19>'  : 'PosDirectControl/Subsystem/indi/unwrap2pi'
 * '<S20>'  : 'PosDirectControl/Subsystem/indi/PD_x/Anti-windup'
 * '<S21>'  : 'PosDirectControl/Subsystem/indi/PD_x/D Gain'
 * '<S22>'  : 'PosDirectControl/Subsystem/indi/PD_x/Filter'
 * '<S23>'  : 'PosDirectControl/Subsystem/indi/PD_x/Filter ICs'
 * '<S24>'  : 'PosDirectControl/Subsystem/indi/PD_x/I Gain'
 * '<S25>'  : 'PosDirectControl/Subsystem/indi/PD_x/Ideal P Gain'
 * '<S26>'  : 'PosDirectControl/Subsystem/indi/PD_x/Ideal P Gain Fdbk'
 * '<S27>'  : 'PosDirectControl/Subsystem/indi/PD_x/Integrator'
 * '<S28>'  : 'PosDirectControl/Subsystem/indi/PD_x/Integrator ICs'
 * '<S29>'  : 'PosDirectControl/Subsystem/indi/PD_x/N Copy'
 * '<S30>'  : 'PosDirectControl/Subsystem/indi/PD_x/N Gain'
 * '<S31>'  : 'PosDirectControl/Subsystem/indi/PD_x/P Copy'
 * '<S32>'  : 'PosDirectControl/Subsystem/indi/PD_x/Parallel P Gain'
 * '<S33>'  : 'PosDirectControl/Subsystem/indi/PD_x/Reset Signal'
 * '<S34>'  : 'PosDirectControl/Subsystem/indi/PD_x/Saturation'
 * '<S35>'  : 'PosDirectControl/Subsystem/indi/PD_x/Saturation Fdbk'
 * '<S36>'  : 'PosDirectControl/Subsystem/indi/PD_x/Sum'
 * '<S37>'  : 'PosDirectControl/Subsystem/indi/PD_x/Sum Fdbk'
 * '<S38>'  : 'PosDirectControl/Subsystem/indi/PD_x/Tracking Mode'
 * '<S39>'  : 'PosDirectControl/Subsystem/indi/PD_x/Tracking Mode Sum'
 * '<S40>'  : 'PosDirectControl/Subsystem/indi/PD_x/postSat Signal'
 * '<S41>'  : 'PosDirectControl/Subsystem/indi/PD_x/preSat Signal'
 * '<S42>'  : 'PosDirectControl/Subsystem/indi/PD_x/Anti-windup/Back Calculation'
 * '<S43>'  : 'PosDirectControl/Subsystem/indi/PD_x/Anti-windup/Cont. Clamping Ideal'
 * '<S44>'  : 'PosDirectControl/Subsystem/indi/PD_x/Anti-windup/Cont. Clamping Parallel'
 * '<S45>'  : 'PosDirectControl/Subsystem/indi/PD_x/Anti-windup/Disabled'
 * '<S46>'  : 'PosDirectControl/Subsystem/indi/PD_x/Anti-windup/Disc. Clamping Ideal'
 * '<S47>'  : 'PosDirectControl/Subsystem/indi/PD_x/Anti-windup/Disc. Clamping Parallel'
 * '<S48>'  : 'PosDirectControl/Subsystem/indi/PD_x/Anti-windup/Passthrough'
 * '<S49>'  : 'PosDirectControl/Subsystem/indi/PD_x/D Gain/Disabled'
 * '<S50>'  : 'PosDirectControl/Subsystem/indi/PD_x/D Gain/External Parameters'
 * '<S51>'  : 'PosDirectControl/Subsystem/indi/PD_x/D Gain/Internal Parameters'
 * '<S52>'  : 'PosDirectControl/Subsystem/indi/PD_x/Filter/Cont. Filter'
 * '<S53>'  : 'PosDirectControl/Subsystem/indi/PD_x/Filter/Differentiator'
 * '<S54>'  : 'PosDirectControl/Subsystem/indi/PD_x/Filter/Disabled'
 * '<S55>'  : 'PosDirectControl/Subsystem/indi/PD_x/Filter/Disc. Backward Euler Filter'
 * '<S56>'  : 'PosDirectControl/Subsystem/indi/PD_x/Filter/Disc. Forward Euler Filter'
 * '<S57>'  : 'PosDirectControl/Subsystem/indi/PD_x/Filter/Disc. Trapezoidal Filter'
 * '<S58>'  : 'PosDirectControl/Subsystem/indi/PD_x/Filter ICs/Disabled'
 * '<S59>'  : 'PosDirectControl/Subsystem/indi/PD_x/Filter ICs/External IC'
 * '<S60>'  : 'PosDirectControl/Subsystem/indi/PD_x/Filter ICs/Internal IC - Differentiator'
 * '<S61>'  : 'PosDirectControl/Subsystem/indi/PD_x/Filter ICs/Internal IC - Filter'
 * '<S62>'  : 'PosDirectControl/Subsystem/indi/PD_x/I Gain/Disabled'
 * '<S63>'  : 'PosDirectControl/Subsystem/indi/PD_x/I Gain/External Parameters'
 * '<S64>'  : 'PosDirectControl/Subsystem/indi/PD_x/I Gain/Internal Parameters'
 * '<S65>'  : 'PosDirectControl/Subsystem/indi/PD_x/Ideal P Gain/External Parameters'
 * '<S66>'  : 'PosDirectControl/Subsystem/indi/PD_x/Ideal P Gain/Internal Parameters'
 * '<S67>'  : 'PosDirectControl/Subsystem/indi/PD_x/Ideal P Gain/Passthrough'
 * '<S68>'  : 'PosDirectControl/Subsystem/indi/PD_x/Ideal P Gain Fdbk/Disabled'
 * '<S69>'  : 'PosDirectControl/Subsystem/indi/PD_x/Ideal P Gain Fdbk/External Parameters'
 * '<S70>'  : 'PosDirectControl/Subsystem/indi/PD_x/Ideal P Gain Fdbk/Internal Parameters'
 * '<S71>'  : 'PosDirectControl/Subsystem/indi/PD_x/Ideal P Gain Fdbk/Passthrough'
 * '<S72>'  : 'PosDirectControl/Subsystem/indi/PD_x/Integrator/Continuous'
 * '<S73>'  : 'PosDirectControl/Subsystem/indi/PD_x/Integrator/Disabled'
 * '<S74>'  : 'PosDirectControl/Subsystem/indi/PD_x/Integrator/Discrete'
 * '<S75>'  : 'PosDirectControl/Subsystem/indi/PD_x/Integrator ICs/Disabled'
 * '<S76>'  : 'PosDirectControl/Subsystem/indi/PD_x/Integrator ICs/External IC'
 * '<S77>'  : 'PosDirectControl/Subsystem/indi/PD_x/Integrator ICs/Internal IC'
 * '<S78>'  : 'PosDirectControl/Subsystem/indi/PD_x/N Copy/Disabled'
 * '<S79>'  : 'PosDirectControl/Subsystem/indi/PD_x/N Copy/Disabled wSignal Specification'
 * '<S80>'  : 'PosDirectControl/Subsystem/indi/PD_x/N Copy/External Parameters'
 * '<S81>'  : 'PosDirectControl/Subsystem/indi/PD_x/N Copy/Internal Parameters'
 * '<S82>'  : 'PosDirectControl/Subsystem/indi/PD_x/N Gain/Disabled'
 * '<S83>'  : 'PosDirectControl/Subsystem/indi/PD_x/N Gain/External Parameters'
 * '<S84>'  : 'PosDirectControl/Subsystem/indi/PD_x/N Gain/Internal Parameters'
 * '<S85>'  : 'PosDirectControl/Subsystem/indi/PD_x/N Gain/Passthrough'
 * '<S86>'  : 'PosDirectControl/Subsystem/indi/PD_x/P Copy/Disabled'
 * '<S87>'  : 'PosDirectControl/Subsystem/indi/PD_x/P Copy/External Parameters Ideal'
 * '<S88>'  : 'PosDirectControl/Subsystem/indi/PD_x/P Copy/Internal Parameters Ideal'
 * '<S89>'  : 'PosDirectControl/Subsystem/indi/PD_x/Parallel P Gain/Disabled'
 * '<S90>'  : 'PosDirectControl/Subsystem/indi/PD_x/Parallel P Gain/External Parameters'
 * '<S91>'  : 'PosDirectControl/Subsystem/indi/PD_x/Parallel P Gain/Internal Parameters'
 * '<S92>'  : 'PosDirectControl/Subsystem/indi/PD_x/Parallel P Gain/Passthrough'
 * '<S93>'  : 'PosDirectControl/Subsystem/indi/PD_x/Reset Signal/Disabled'
 * '<S94>'  : 'PosDirectControl/Subsystem/indi/PD_x/Reset Signal/External Reset'
 * '<S95>'  : 'PosDirectControl/Subsystem/indi/PD_x/Saturation/Enabled'
 * '<S96>'  : 'PosDirectControl/Subsystem/indi/PD_x/Saturation/Passthrough'
 * '<S97>'  : 'PosDirectControl/Subsystem/indi/PD_x/Saturation Fdbk/Disabled'
 * '<S98>'  : 'PosDirectControl/Subsystem/indi/PD_x/Saturation Fdbk/Enabled'
 * '<S99>'  : 'PosDirectControl/Subsystem/indi/PD_x/Saturation Fdbk/Passthrough'
 * '<S100>' : 'PosDirectControl/Subsystem/indi/PD_x/Sum/Passthrough_I'
 * '<S101>' : 'PosDirectControl/Subsystem/indi/PD_x/Sum/Passthrough_P'
 * '<S102>' : 'PosDirectControl/Subsystem/indi/PD_x/Sum/Sum_PD'
 * '<S103>' : 'PosDirectControl/Subsystem/indi/PD_x/Sum/Sum_PI'
 * '<S104>' : 'PosDirectControl/Subsystem/indi/PD_x/Sum/Sum_PID'
 * '<S105>' : 'PosDirectControl/Subsystem/indi/PD_x/Sum Fdbk/Disabled'
 * '<S106>' : 'PosDirectControl/Subsystem/indi/PD_x/Sum Fdbk/Enabled'
 * '<S107>' : 'PosDirectControl/Subsystem/indi/PD_x/Sum Fdbk/Passthrough'
 * '<S108>' : 'PosDirectControl/Subsystem/indi/PD_x/Tracking Mode/Disabled'
 * '<S109>' : 'PosDirectControl/Subsystem/indi/PD_x/Tracking Mode/Enabled'
 * '<S110>' : 'PosDirectControl/Subsystem/indi/PD_x/Tracking Mode Sum/Passthrough'
 * '<S111>' : 'PosDirectControl/Subsystem/indi/PD_x/Tracking Mode Sum/Tracking Mode'
 * '<S112>' : 'PosDirectControl/Subsystem/indi/PD_x/postSat Signal/Feedback_Path'
 * '<S113>' : 'PosDirectControl/Subsystem/indi/PD_x/postSat Signal/Forward_Path'
 * '<S114>' : 'PosDirectControl/Subsystem/indi/PD_x/preSat Signal/Feedback_Path'
 * '<S115>' : 'PosDirectControl/Subsystem/indi/PD_x/preSat Signal/Forward_Path'
 * '<S116>' : 'PosDirectControl/Subsystem/indi/PD_y/Anti-windup'
 * '<S117>' : 'PosDirectControl/Subsystem/indi/PD_y/D Gain'
 * '<S118>' : 'PosDirectControl/Subsystem/indi/PD_y/Filter'
 * '<S119>' : 'PosDirectControl/Subsystem/indi/PD_y/Filter ICs'
 * '<S120>' : 'PosDirectControl/Subsystem/indi/PD_y/I Gain'
 * '<S121>' : 'PosDirectControl/Subsystem/indi/PD_y/Ideal P Gain'
 * '<S122>' : 'PosDirectControl/Subsystem/indi/PD_y/Ideal P Gain Fdbk'
 * '<S123>' : 'PosDirectControl/Subsystem/indi/PD_y/Integrator'
 * '<S124>' : 'PosDirectControl/Subsystem/indi/PD_y/Integrator ICs'
 * '<S125>' : 'PosDirectControl/Subsystem/indi/PD_y/N Copy'
 * '<S126>' : 'PosDirectControl/Subsystem/indi/PD_y/N Gain'
 * '<S127>' : 'PosDirectControl/Subsystem/indi/PD_y/P Copy'
 * '<S128>' : 'PosDirectControl/Subsystem/indi/PD_y/Parallel P Gain'
 * '<S129>' : 'PosDirectControl/Subsystem/indi/PD_y/Reset Signal'
 * '<S130>' : 'PosDirectControl/Subsystem/indi/PD_y/Saturation'
 * '<S131>' : 'PosDirectControl/Subsystem/indi/PD_y/Saturation Fdbk'
 * '<S132>' : 'PosDirectControl/Subsystem/indi/PD_y/Sum'
 * '<S133>' : 'PosDirectControl/Subsystem/indi/PD_y/Sum Fdbk'
 * '<S134>' : 'PosDirectControl/Subsystem/indi/PD_y/Tracking Mode'
 * '<S135>' : 'PosDirectControl/Subsystem/indi/PD_y/Tracking Mode Sum'
 * '<S136>' : 'PosDirectControl/Subsystem/indi/PD_y/postSat Signal'
 * '<S137>' : 'PosDirectControl/Subsystem/indi/PD_y/preSat Signal'
 * '<S138>' : 'PosDirectControl/Subsystem/indi/PD_y/Anti-windup/Back Calculation'
 * '<S139>' : 'PosDirectControl/Subsystem/indi/PD_y/Anti-windup/Cont. Clamping Ideal'
 * '<S140>' : 'PosDirectControl/Subsystem/indi/PD_y/Anti-windup/Cont. Clamping Parallel'
 * '<S141>' : 'PosDirectControl/Subsystem/indi/PD_y/Anti-windup/Disabled'
 * '<S142>' : 'PosDirectControl/Subsystem/indi/PD_y/Anti-windup/Disc. Clamping Ideal'
 * '<S143>' : 'PosDirectControl/Subsystem/indi/PD_y/Anti-windup/Disc. Clamping Parallel'
 * '<S144>' : 'PosDirectControl/Subsystem/indi/PD_y/Anti-windup/Passthrough'
 * '<S145>' : 'PosDirectControl/Subsystem/indi/PD_y/D Gain/Disabled'
 * '<S146>' : 'PosDirectControl/Subsystem/indi/PD_y/D Gain/External Parameters'
 * '<S147>' : 'PosDirectControl/Subsystem/indi/PD_y/D Gain/Internal Parameters'
 * '<S148>' : 'PosDirectControl/Subsystem/indi/PD_y/Filter/Cont. Filter'
 * '<S149>' : 'PosDirectControl/Subsystem/indi/PD_y/Filter/Differentiator'
 * '<S150>' : 'PosDirectControl/Subsystem/indi/PD_y/Filter/Disabled'
 * '<S151>' : 'PosDirectControl/Subsystem/indi/PD_y/Filter/Disc. Backward Euler Filter'
 * '<S152>' : 'PosDirectControl/Subsystem/indi/PD_y/Filter/Disc. Forward Euler Filter'
 * '<S153>' : 'PosDirectControl/Subsystem/indi/PD_y/Filter/Disc. Trapezoidal Filter'
 * '<S154>' : 'PosDirectControl/Subsystem/indi/PD_y/Filter ICs/Disabled'
 * '<S155>' : 'PosDirectControl/Subsystem/indi/PD_y/Filter ICs/External IC'
 * '<S156>' : 'PosDirectControl/Subsystem/indi/PD_y/Filter ICs/Internal IC - Differentiator'
 * '<S157>' : 'PosDirectControl/Subsystem/indi/PD_y/Filter ICs/Internal IC - Filter'
 * '<S158>' : 'PosDirectControl/Subsystem/indi/PD_y/I Gain/Disabled'
 * '<S159>' : 'PosDirectControl/Subsystem/indi/PD_y/I Gain/External Parameters'
 * '<S160>' : 'PosDirectControl/Subsystem/indi/PD_y/I Gain/Internal Parameters'
 * '<S161>' : 'PosDirectControl/Subsystem/indi/PD_y/Ideal P Gain/External Parameters'
 * '<S162>' : 'PosDirectControl/Subsystem/indi/PD_y/Ideal P Gain/Internal Parameters'
 * '<S163>' : 'PosDirectControl/Subsystem/indi/PD_y/Ideal P Gain/Passthrough'
 * '<S164>' : 'PosDirectControl/Subsystem/indi/PD_y/Ideal P Gain Fdbk/Disabled'
 * '<S165>' : 'PosDirectControl/Subsystem/indi/PD_y/Ideal P Gain Fdbk/External Parameters'
 * '<S166>' : 'PosDirectControl/Subsystem/indi/PD_y/Ideal P Gain Fdbk/Internal Parameters'
 * '<S167>' : 'PosDirectControl/Subsystem/indi/PD_y/Ideal P Gain Fdbk/Passthrough'
 * '<S168>' : 'PosDirectControl/Subsystem/indi/PD_y/Integrator/Continuous'
 * '<S169>' : 'PosDirectControl/Subsystem/indi/PD_y/Integrator/Disabled'
 * '<S170>' : 'PosDirectControl/Subsystem/indi/PD_y/Integrator/Discrete'
 * '<S171>' : 'PosDirectControl/Subsystem/indi/PD_y/Integrator ICs/Disabled'
 * '<S172>' : 'PosDirectControl/Subsystem/indi/PD_y/Integrator ICs/External IC'
 * '<S173>' : 'PosDirectControl/Subsystem/indi/PD_y/Integrator ICs/Internal IC'
 * '<S174>' : 'PosDirectControl/Subsystem/indi/PD_y/N Copy/Disabled'
 * '<S175>' : 'PosDirectControl/Subsystem/indi/PD_y/N Copy/Disabled wSignal Specification'
 * '<S176>' : 'PosDirectControl/Subsystem/indi/PD_y/N Copy/External Parameters'
 * '<S177>' : 'PosDirectControl/Subsystem/indi/PD_y/N Copy/Internal Parameters'
 * '<S178>' : 'PosDirectControl/Subsystem/indi/PD_y/N Gain/Disabled'
 * '<S179>' : 'PosDirectControl/Subsystem/indi/PD_y/N Gain/External Parameters'
 * '<S180>' : 'PosDirectControl/Subsystem/indi/PD_y/N Gain/Internal Parameters'
 * '<S181>' : 'PosDirectControl/Subsystem/indi/PD_y/N Gain/Passthrough'
 * '<S182>' : 'PosDirectControl/Subsystem/indi/PD_y/P Copy/Disabled'
 * '<S183>' : 'PosDirectControl/Subsystem/indi/PD_y/P Copy/External Parameters Ideal'
 * '<S184>' : 'PosDirectControl/Subsystem/indi/PD_y/P Copy/Internal Parameters Ideal'
 * '<S185>' : 'PosDirectControl/Subsystem/indi/PD_y/Parallel P Gain/Disabled'
 * '<S186>' : 'PosDirectControl/Subsystem/indi/PD_y/Parallel P Gain/External Parameters'
 * '<S187>' : 'PosDirectControl/Subsystem/indi/PD_y/Parallel P Gain/Internal Parameters'
 * '<S188>' : 'PosDirectControl/Subsystem/indi/PD_y/Parallel P Gain/Passthrough'
 * '<S189>' : 'PosDirectControl/Subsystem/indi/PD_y/Reset Signal/Disabled'
 * '<S190>' : 'PosDirectControl/Subsystem/indi/PD_y/Reset Signal/External Reset'
 * '<S191>' : 'PosDirectControl/Subsystem/indi/PD_y/Saturation/Enabled'
 * '<S192>' : 'PosDirectControl/Subsystem/indi/PD_y/Saturation/Passthrough'
 * '<S193>' : 'PosDirectControl/Subsystem/indi/PD_y/Saturation Fdbk/Disabled'
 * '<S194>' : 'PosDirectControl/Subsystem/indi/PD_y/Saturation Fdbk/Enabled'
 * '<S195>' : 'PosDirectControl/Subsystem/indi/PD_y/Saturation Fdbk/Passthrough'
 * '<S196>' : 'PosDirectControl/Subsystem/indi/PD_y/Sum/Passthrough_I'
 * '<S197>' : 'PosDirectControl/Subsystem/indi/PD_y/Sum/Passthrough_P'
 * '<S198>' : 'PosDirectControl/Subsystem/indi/PD_y/Sum/Sum_PD'
 * '<S199>' : 'PosDirectControl/Subsystem/indi/PD_y/Sum/Sum_PI'
 * '<S200>' : 'PosDirectControl/Subsystem/indi/PD_y/Sum/Sum_PID'
 * '<S201>' : 'PosDirectControl/Subsystem/indi/PD_y/Sum Fdbk/Disabled'
 * '<S202>' : 'PosDirectControl/Subsystem/indi/PD_y/Sum Fdbk/Enabled'
 * '<S203>' : 'PosDirectControl/Subsystem/indi/PD_y/Sum Fdbk/Passthrough'
 * '<S204>' : 'PosDirectControl/Subsystem/indi/PD_y/Tracking Mode/Disabled'
 * '<S205>' : 'PosDirectControl/Subsystem/indi/PD_y/Tracking Mode/Enabled'
 * '<S206>' : 'PosDirectControl/Subsystem/indi/PD_y/Tracking Mode Sum/Passthrough'
 * '<S207>' : 'PosDirectControl/Subsystem/indi/PD_y/Tracking Mode Sum/Tracking Mode'
 * '<S208>' : 'PosDirectControl/Subsystem/indi/PD_y/postSat Signal/Feedback_Path'
 * '<S209>' : 'PosDirectControl/Subsystem/indi/PD_y/postSat Signal/Forward_Path'
 * '<S210>' : 'PosDirectControl/Subsystem/indi/PD_y/preSat Signal/Feedback_Path'
 * '<S211>' : 'PosDirectControl/Subsystem/indi/PD_y/preSat Signal/Forward_Path'
 * '<S212>' : 'PosDirectControl/Subsystem/indi/PD_z/Anti-windup'
 * '<S213>' : 'PosDirectControl/Subsystem/indi/PD_z/D Gain'
 * '<S214>' : 'PosDirectControl/Subsystem/indi/PD_z/Filter'
 * '<S215>' : 'PosDirectControl/Subsystem/indi/PD_z/Filter ICs'
 * '<S216>' : 'PosDirectControl/Subsystem/indi/PD_z/I Gain'
 * '<S217>' : 'PosDirectControl/Subsystem/indi/PD_z/Ideal P Gain'
 * '<S218>' : 'PosDirectControl/Subsystem/indi/PD_z/Ideal P Gain Fdbk'
 * '<S219>' : 'PosDirectControl/Subsystem/indi/PD_z/Integrator'
 * '<S220>' : 'PosDirectControl/Subsystem/indi/PD_z/Integrator ICs'
 * '<S221>' : 'PosDirectControl/Subsystem/indi/PD_z/N Copy'
 * '<S222>' : 'PosDirectControl/Subsystem/indi/PD_z/N Gain'
 * '<S223>' : 'PosDirectControl/Subsystem/indi/PD_z/P Copy'
 * '<S224>' : 'PosDirectControl/Subsystem/indi/PD_z/Parallel P Gain'
 * '<S225>' : 'PosDirectControl/Subsystem/indi/PD_z/Reset Signal'
 * '<S226>' : 'PosDirectControl/Subsystem/indi/PD_z/Saturation'
 * '<S227>' : 'PosDirectControl/Subsystem/indi/PD_z/Saturation Fdbk'
 * '<S228>' : 'PosDirectControl/Subsystem/indi/PD_z/Sum'
 * '<S229>' : 'PosDirectControl/Subsystem/indi/PD_z/Sum Fdbk'
 * '<S230>' : 'PosDirectControl/Subsystem/indi/PD_z/Tracking Mode'
 * '<S231>' : 'PosDirectControl/Subsystem/indi/PD_z/Tracking Mode Sum'
 * '<S232>' : 'PosDirectControl/Subsystem/indi/PD_z/postSat Signal'
 * '<S233>' : 'PosDirectControl/Subsystem/indi/PD_z/preSat Signal'
 * '<S234>' : 'PosDirectControl/Subsystem/indi/PD_z/Anti-windup/Back Calculation'
 * '<S235>' : 'PosDirectControl/Subsystem/indi/PD_z/Anti-windup/Cont. Clamping Ideal'
 * '<S236>' : 'PosDirectControl/Subsystem/indi/PD_z/Anti-windup/Cont. Clamping Parallel'
 * '<S237>' : 'PosDirectControl/Subsystem/indi/PD_z/Anti-windup/Disabled'
 * '<S238>' : 'PosDirectControl/Subsystem/indi/PD_z/Anti-windup/Disc. Clamping Ideal'
 * '<S239>' : 'PosDirectControl/Subsystem/indi/PD_z/Anti-windup/Disc. Clamping Parallel'
 * '<S240>' : 'PosDirectControl/Subsystem/indi/PD_z/Anti-windup/Passthrough'
 * '<S241>' : 'PosDirectControl/Subsystem/indi/PD_z/D Gain/Disabled'
 * '<S242>' : 'PosDirectControl/Subsystem/indi/PD_z/D Gain/External Parameters'
 * '<S243>' : 'PosDirectControl/Subsystem/indi/PD_z/D Gain/Internal Parameters'
 * '<S244>' : 'PosDirectControl/Subsystem/indi/PD_z/Filter/Cont. Filter'
 * '<S245>' : 'PosDirectControl/Subsystem/indi/PD_z/Filter/Differentiator'
 * '<S246>' : 'PosDirectControl/Subsystem/indi/PD_z/Filter/Disabled'
 * '<S247>' : 'PosDirectControl/Subsystem/indi/PD_z/Filter/Disc. Backward Euler Filter'
 * '<S248>' : 'PosDirectControl/Subsystem/indi/PD_z/Filter/Disc. Forward Euler Filter'
 * '<S249>' : 'PosDirectControl/Subsystem/indi/PD_z/Filter/Disc. Trapezoidal Filter'
 * '<S250>' : 'PosDirectControl/Subsystem/indi/PD_z/Filter ICs/Disabled'
 * '<S251>' : 'PosDirectControl/Subsystem/indi/PD_z/Filter ICs/External IC'
 * '<S252>' : 'PosDirectControl/Subsystem/indi/PD_z/Filter ICs/Internal IC - Differentiator'
 * '<S253>' : 'PosDirectControl/Subsystem/indi/PD_z/Filter ICs/Internal IC - Filter'
 * '<S254>' : 'PosDirectControl/Subsystem/indi/PD_z/I Gain/Disabled'
 * '<S255>' : 'PosDirectControl/Subsystem/indi/PD_z/I Gain/External Parameters'
 * '<S256>' : 'PosDirectControl/Subsystem/indi/PD_z/I Gain/Internal Parameters'
 * '<S257>' : 'PosDirectControl/Subsystem/indi/PD_z/Ideal P Gain/External Parameters'
 * '<S258>' : 'PosDirectControl/Subsystem/indi/PD_z/Ideal P Gain/Internal Parameters'
 * '<S259>' : 'PosDirectControl/Subsystem/indi/PD_z/Ideal P Gain/Passthrough'
 * '<S260>' : 'PosDirectControl/Subsystem/indi/PD_z/Ideal P Gain Fdbk/Disabled'
 * '<S261>' : 'PosDirectControl/Subsystem/indi/PD_z/Ideal P Gain Fdbk/External Parameters'
 * '<S262>' : 'PosDirectControl/Subsystem/indi/PD_z/Ideal P Gain Fdbk/Internal Parameters'
 * '<S263>' : 'PosDirectControl/Subsystem/indi/PD_z/Ideal P Gain Fdbk/Passthrough'
 * '<S264>' : 'PosDirectControl/Subsystem/indi/PD_z/Integrator/Continuous'
 * '<S265>' : 'PosDirectControl/Subsystem/indi/PD_z/Integrator/Disabled'
 * '<S266>' : 'PosDirectControl/Subsystem/indi/PD_z/Integrator/Discrete'
 * '<S267>' : 'PosDirectControl/Subsystem/indi/PD_z/Integrator ICs/Disabled'
 * '<S268>' : 'PosDirectControl/Subsystem/indi/PD_z/Integrator ICs/External IC'
 * '<S269>' : 'PosDirectControl/Subsystem/indi/PD_z/Integrator ICs/Internal IC'
 * '<S270>' : 'PosDirectControl/Subsystem/indi/PD_z/N Copy/Disabled'
 * '<S271>' : 'PosDirectControl/Subsystem/indi/PD_z/N Copy/Disabled wSignal Specification'
 * '<S272>' : 'PosDirectControl/Subsystem/indi/PD_z/N Copy/External Parameters'
 * '<S273>' : 'PosDirectControl/Subsystem/indi/PD_z/N Copy/Internal Parameters'
 * '<S274>' : 'PosDirectControl/Subsystem/indi/PD_z/N Gain/Disabled'
 * '<S275>' : 'PosDirectControl/Subsystem/indi/PD_z/N Gain/External Parameters'
 * '<S276>' : 'PosDirectControl/Subsystem/indi/PD_z/N Gain/Internal Parameters'
 * '<S277>' : 'PosDirectControl/Subsystem/indi/PD_z/N Gain/Passthrough'
 * '<S278>' : 'PosDirectControl/Subsystem/indi/PD_z/P Copy/Disabled'
 * '<S279>' : 'PosDirectControl/Subsystem/indi/PD_z/P Copy/External Parameters Ideal'
 * '<S280>' : 'PosDirectControl/Subsystem/indi/PD_z/P Copy/Internal Parameters Ideal'
 * '<S281>' : 'PosDirectControl/Subsystem/indi/PD_z/Parallel P Gain/Disabled'
 * '<S282>' : 'PosDirectControl/Subsystem/indi/PD_z/Parallel P Gain/External Parameters'
 * '<S283>' : 'PosDirectControl/Subsystem/indi/PD_z/Parallel P Gain/Internal Parameters'
 * '<S284>' : 'PosDirectControl/Subsystem/indi/PD_z/Parallel P Gain/Passthrough'
 * '<S285>' : 'PosDirectControl/Subsystem/indi/PD_z/Reset Signal/Disabled'
 * '<S286>' : 'PosDirectControl/Subsystem/indi/PD_z/Reset Signal/External Reset'
 * '<S287>' : 'PosDirectControl/Subsystem/indi/PD_z/Saturation/Enabled'
 * '<S288>' : 'PosDirectControl/Subsystem/indi/PD_z/Saturation/Passthrough'
 * '<S289>' : 'PosDirectControl/Subsystem/indi/PD_z/Saturation Fdbk/Disabled'
 * '<S290>' : 'PosDirectControl/Subsystem/indi/PD_z/Saturation Fdbk/Enabled'
 * '<S291>' : 'PosDirectControl/Subsystem/indi/PD_z/Saturation Fdbk/Passthrough'
 * '<S292>' : 'PosDirectControl/Subsystem/indi/PD_z/Sum/Passthrough_I'
 * '<S293>' : 'PosDirectControl/Subsystem/indi/PD_z/Sum/Passthrough_P'
 * '<S294>' : 'PosDirectControl/Subsystem/indi/PD_z/Sum/Sum_PD'
 * '<S295>' : 'PosDirectControl/Subsystem/indi/PD_z/Sum/Sum_PI'
 * '<S296>' : 'PosDirectControl/Subsystem/indi/PD_z/Sum/Sum_PID'
 * '<S297>' : 'PosDirectControl/Subsystem/indi/PD_z/Sum Fdbk/Disabled'
 * '<S298>' : 'PosDirectControl/Subsystem/indi/PD_z/Sum Fdbk/Enabled'
 * '<S299>' : 'PosDirectControl/Subsystem/indi/PD_z/Sum Fdbk/Passthrough'
 * '<S300>' : 'PosDirectControl/Subsystem/indi/PD_z/Tracking Mode/Disabled'
 * '<S301>' : 'PosDirectControl/Subsystem/indi/PD_z/Tracking Mode/Enabled'
 * '<S302>' : 'PosDirectControl/Subsystem/indi/PD_z/Tracking Mode Sum/Passthrough'
 * '<S303>' : 'PosDirectControl/Subsystem/indi/PD_z/Tracking Mode Sum/Tracking Mode'
 * '<S304>' : 'PosDirectControl/Subsystem/indi/PD_z/postSat Signal/Feedback_Path'
 * '<S305>' : 'PosDirectControl/Subsystem/indi/PD_z/postSat Signal/Forward_Path'
 * '<S306>' : 'PosDirectControl/Subsystem/indi/PD_z/preSat Signal/Feedback_Path'
 * '<S307>' : 'PosDirectControl/Subsystem/indi/PD_z/preSat Signal/Forward_Path'
 * '<S308>' : 'PosDirectControl/Subsystem/lqr/MATLAB Function1'
 * '<S309>' : 'PosDirectControl/Subsystem/lqr/PD_x1'
 * '<S310>' : 'PosDirectControl/Subsystem/lqr/PD_y1'
 * '<S311>' : 'PosDirectControl/Subsystem/lqr/PD_z'
 * '<S312>' : 'PosDirectControl/Subsystem/lqr/indi1'
 * '<S313>' : 'PosDirectControl/Subsystem/lqr/n_des from accel_sp'
 * '<S314>' : 'PosDirectControl/Subsystem/lqr/unwrap2pi'
 * '<S315>' : 'PosDirectControl/Subsystem/lqr/PD_x1/Anti-windup'
 * '<S316>' : 'PosDirectControl/Subsystem/lqr/PD_x1/D Gain'
 * '<S317>' : 'PosDirectControl/Subsystem/lqr/PD_x1/Filter'
 * '<S318>' : 'PosDirectControl/Subsystem/lqr/PD_x1/Filter ICs'
 * '<S319>' : 'PosDirectControl/Subsystem/lqr/PD_x1/I Gain'
 * '<S320>' : 'PosDirectControl/Subsystem/lqr/PD_x1/Ideal P Gain'
 * '<S321>' : 'PosDirectControl/Subsystem/lqr/PD_x1/Ideal P Gain Fdbk'
 * '<S322>' : 'PosDirectControl/Subsystem/lqr/PD_x1/Integrator'
 * '<S323>' : 'PosDirectControl/Subsystem/lqr/PD_x1/Integrator ICs'
 * '<S324>' : 'PosDirectControl/Subsystem/lqr/PD_x1/N Copy'
 * '<S325>' : 'PosDirectControl/Subsystem/lqr/PD_x1/N Gain'
 * '<S326>' : 'PosDirectControl/Subsystem/lqr/PD_x1/P Copy'
 * '<S327>' : 'PosDirectControl/Subsystem/lqr/PD_x1/Parallel P Gain'
 * '<S328>' : 'PosDirectControl/Subsystem/lqr/PD_x1/Reset Signal'
 * '<S329>' : 'PosDirectControl/Subsystem/lqr/PD_x1/Saturation'
 * '<S330>' : 'PosDirectControl/Subsystem/lqr/PD_x1/Saturation Fdbk'
 * '<S331>' : 'PosDirectControl/Subsystem/lqr/PD_x1/Sum'
 * '<S332>' : 'PosDirectControl/Subsystem/lqr/PD_x1/Sum Fdbk'
 * '<S333>' : 'PosDirectControl/Subsystem/lqr/PD_x1/Tracking Mode'
 * '<S334>' : 'PosDirectControl/Subsystem/lqr/PD_x1/Tracking Mode Sum'
 * '<S335>' : 'PosDirectControl/Subsystem/lqr/PD_x1/postSat Signal'
 * '<S336>' : 'PosDirectControl/Subsystem/lqr/PD_x1/preSat Signal'
 * '<S337>' : 'PosDirectControl/Subsystem/lqr/PD_x1/Anti-windup/Back Calculation'
 * '<S338>' : 'PosDirectControl/Subsystem/lqr/PD_x1/Anti-windup/Cont. Clamping Ideal'
 * '<S339>' : 'PosDirectControl/Subsystem/lqr/PD_x1/Anti-windup/Cont. Clamping Parallel'
 * '<S340>' : 'PosDirectControl/Subsystem/lqr/PD_x1/Anti-windup/Disabled'
 * '<S341>' : 'PosDirectControl/Subsystem/lqr/PD_x1/Anti-windup/Disc. Clamping Ideal'
 * '<S342>' : 'PosDirectControl/Subsystem/lqr/PD_x1/Anti-windup/Disc. Clamping Parallel'
 * '<S343>' : 'PosDirectControl/Subsystem/lqr/PD_x1/Anti-windup/Passthrough'
 * '<S344>' : 'PosDirectControl/Subsystem/lqr/PD_x1/D Gain/Disabled'
 * '<S345>' : 'PosDirectControl/Subsystem/lqr/PD_x1/D Gain/External Parameters'
 * '<S346>' : 'PosDirectControl/Subsystem/lqr/PD_x1/D Gain/Internal Parameters'
 * '<S347>' : 'PosDirectControl/Subsystem/lqr/PD_x1/Filter/Cont. Filter'
 * '<S348>' : 'PosDirectControl/Subsystem/lqr/PD_x1/Filter/Differentiator'
 * '<S349>' : 'PosDirectControl/Subsystem/lqr/PD_x1/Filter/Disabled'
 * '<S350>' : 'PosDirectControl/Subsystem/lqr/PD_x1/Filter/Disc. Backward Euler Filter'
 * '<S351>' : 'PosDirectControl/Subsystem/lqr/PD_x1/Filter/Disc. Forward Euler Filter'
 * '<S352>' : 'PosDirectControl/Subsystem/lqr/PD_x1/Filter/Disc. Trapezoidal Filter'
 * '<S353>' : 'PosDirectControl/Subsystem/lqr/PD_x1/Filter ICs/Disabled'
 * '<S354>' : 'PosDirectControl/Subsystem/lqr/PD_x1/Filter ICs/External IC'
 * '<S355>' : 'PosDirectControl/Subsystem/lqr/PD_x1/Filter ICs/Internal IC - Differentiator'
 * '<S356>' : 'PosDirectControl/Subsystem/lqr/PD_x1/Filter ICs/Internal IC - Filter'
 * '<S357>' : 'PosDirectControl/Subsystem/lqr/PD_x1/I Gain/Disabled'
 * '<S358>' : 'PosDirectControl/Subsystem/lqr/PD_x1/I Gain/External Parameters'
 * '<S359>' : 'PosDirectControl/Subsystem/lqr/PD_x1/I Gain/Internal Parameters'
 * '<S360>' : 'PosDirectControl/Subsystem/lqr/PD_x1/Ideal P Gain/External Parameters'
 * '<S361>' : 'PosDirectControl/Subsystem/lqr/PD_x1/Ideal P Gain/Internal Parameters'
 * '<S362>' : 'PosDirectControl/Subsystem/lqr/PD_x1/Ideal P Gain/Passthrough'
 * '<S363>' : 'PosDirectControl/Subsystem/lqr/PD_x1/Ideal P Gain Fdbk/Disabled'
 * '<S364>' : 'PosDirectControl/Subsystem/lqr/PD_x1/Ideal P Gain Fdbk/External Parameters'
 * '<S365>' : 'PosDirectControl/Subsystem/lqr/PD_x1/Ideal P Gain Fdbk/Internal Parameters'
 * '<S366>' : 'PosDirectControl/Subsystem/lqr/PD_x1/Ideal P Gain Fdbk/Passthrough'
 * '<S367>' : 'PosDirectControl/Subsystem/lqr/PD_x1/Integrator/Continuous'
 * '<S368>' : 'PosDirectControl/Subsystem/lqr/PD_x1/Integrator/Disabled'
 * '<S369>' : 'PosDirectControl/Subsystem/lqr/PD_x1/Integrator/Discrete'
 * '<S370>' : 'PosDirectControl/Subsystem/lqr/PD_x1/Integrator ICs/Disabled'
 * '<S371>' : 'PosDirectControl/Subsystem/lqr/PD_x1/Integrator ICs/External IC'
 * '<S372>' : 'PosDirectControl/Subsystem/lqr/PD_x1/Integrator ICs/Internal IC'
 * '<S373>' : 'PosDirectControl/Subsystem/lqr/PD_x1/N Copy/Disabled'
 * '<S374>' : 'PosDirectControl/Subsystem/lqr/PD_x1/N Copy/Disabled wSignal Specification'
 * '<S375>' : 'PosDirectControl/Subsystem/lqr/PD_x1/N Copy/External Parameters'
 * '<S376>' : 'PosDirectControl/Subsystem/lqr/PD_x1/N Copy/Internal Parameters'
 * '<S377>' : 'PosDirectControl/Subsystem/lqr/PD_x1/N Gain/Disabled'
 * '<S378>' : 'PosDirectControl/Subsystem/lqr/PD_x1/N Gain/External Parameters'
 * '<S379>' : 'PosDirectControl/Subsystem/lqr/PD_x1/N Gain/Internal Parameters'
 * '<S380>' : 'PosDirectControl/Subsystem/lqr/PD_x1/N Gain/Passthrough'
 * '<S381>' : 'PosDirectControl/Subsystem/lqr/PD_x1/P Copy/Disabled'
 * '<S382>' : 'PosDirectControl/Subsystem/lqr/PD_x1/P Copy/External Parameters Ideal'
 * '<S383>' : 'PosDirectControl/Subsystem/lqr/PD_x1/P Copy/Internal Parameters Ideal'
 * '<S384>' : 'PosDirectControl/Subsystem/lqr/PD_x1/Parallel P Gain/Disabled'
 * '<S385>' : 'PosDirectControl/Subsystem/lqr/PD_x1/Parallel P Gain/External Parameters'
 * '<S386>' : 'PosDirectControl/Subsystem/lqr/PD_x1/Parallel P Gain/Internal Parameters'
 * '<S387>' : 'PosDirectControl/Subsystem/lqr/PD_x1/Parallel P Gain/Passthrough'
 * '<S388>' : 'PosDirectControl/Subsystem/lqr/PD_x1/Reset Signal/Disabled'
 * '<S389>' : 'PosDirectControl/Subsystem/lqr/PD_x1/Reset Signal/External Reset'
 * '<S390>' : 'PosDirectControl/Subsystem/lqr/PD_x1/Saturation/Enabled'
 * '<S391>' : 'PosDirectControl/Subsystem/lqr/PD_x1/Saturation/Passthrough'
 * '<S392>' : 'PosDirectControl/Subsystem/lqr/PD_x1/Saturation Fdbk/Disabled'
 * '<S393>' : 'PosDirectControl/Subsystem/lqr/PD_x1/Saturation Fdbk/Enabled'
 * '<S394>' : 'PosDirectControl/Subsystem/lqr/PD_x1/Saturation Fdbk/Passthrough'
 * '<S395>' : 'PosDirectControl/Subsystem/lqr/PD_x1/Sum/Passthrough_I'
 * '<S396>' : 'PosDirectControl/Subsystem/lqr/PD_x1/Sum/Passthrough_P'
 * '<S397>' : 'PosDirectControl/Subsystem/lqr/PD_x1/Sum/Sum_PD'
 * '<S398>' : 'PosDirectControl/Subsystem/lqr/PD_x1/Sum/Sum_PI'
 * '<S399>' : 'PosDirectControl/Subsystem/lqr/PD_x1/Sum/Sum_PID'
 * '<S400>' : 'PosDirectControl/Subsystem/lqr/PD_x1/Sum Fdbk/Disabled'
 * '<S401>' : 'PosDirectControl/Subsystem/lqr/PD_x1/Sum Fdbk/Enabled'
 * '<S402>' : 'PosDirectControl/Subsystem/lqr/PD_x1/Sum Fdbk/Passthrough'
 * '<S403>' : 'PosDirectControl/Subsystem/lqr/PD_x1/Tracking Mode/Disabled'
 * '<S404>' : 'PosDirectControl/Subsystem/lqr/PD_x1/Tracking Mode/Enabled'
 * '<S405>' : 'PosDirectControl/Subsystem/lqr/PD_x1/Tracking Mode Sum/Passthrough'
 * '<S406>' : 'PosDirectControl/Subsystem/lqr/PD_x1/Tracking Mode Sum/Tracking Mode'
 * '<S407>' : 'PosDirectControl/Subsystem/lqr/PD_x1/postSat Signal/Feedback_Path'
 * '<S408>' : 'PosDirectControl/Subsystem/lqr/PD_x1/postSat Signal/Forward_Path'
 * '<S409>' : 'PosDirectControl/Subsystem/lqr/PD_x1/preSat Signal/Feedback_Path'
 * '<S410>' : 'PosDirectControl/Subsystem/lqr/PD_x1/preSat Signal/Forward_Path'
 * '<S411>' : 'PosDirectControl/Subsystem/lqr/PD_y1/Anti-windup'
 * '<S412>' : 'PosDirectControl/Subsystem/lqr/PD_y1/D Gain'
 * '<S413>' : 'PosDirectControl/Subsystem/lqr/PD_y1/Filter'
 * '<S414>' : 'PosDirectControl/Subsystem/lqr/PD_y1/Filter ICs'
 * '<S415>' : 'PosDirectControl/Subsystem/lqr/PD_y1/I Gain'
 * '<S416>' : 'PosDirectControl/Subsystem/lqr/PD_y1/Ideal P Gain'
 * '<S417>' : 'PosDirectControl/Subsystem/lqr/PD_y1/Ideal P Gain Fdbk'
 * '<S418>' : 'PosDirectControl/Subsystem/lqr/PD_y1/Integrator'
 * '<S419>' : 'PosDirectControl/Subsystem/lqr/PD_y1/Integrator ICs'
 * '<S420>' : 'PosDirectControl/Subsystem/lqr/PD_y1/N Copy'
 * '<S421>' : 'PosDirectControl/Subsystem/lqr/PD_y1/N Gain'
 * '<S422>' : 'PosDirectControl/Subsystem/lqr/PD_y1/P Copy'
 * '<S423>' : 'PosDirectControl/Subsystem/lqr/PD_y1/Parallel P Gain'
 * '<S424>' : 'PosDirectControl/Subsystem/lqr/PD_y1/Reset Signal'
 * '<S425>' : 'PosDirectControl/Subsystem/lqr/PD_y1/Saturation'
 * '<S426>' : 'PosDirectControl/Subsystem/lqr/PD_y1/Saturation Fdbk'
 * '<S427>' : 'PosDirectControl/Subsystem/lqr/PD_y1/Sum'
 * '<S428>' : 'PosDirectControl/Subsystem/lqr/PD_y1/Sum Fdbk'
 * '<S429>' : 'PosDirectControl/Subsystem/lqr/PD_y1/Tracking Mode'
 * '<S430>' : 'PosDirectControl/Subsystem/lqr/PD_y1/Tracking Mode Sum'
 * '<S431>' : 'PosDirectControl/Subsystem/lqr/PD_y1/postSat Signal'
 * '<S432>' : 'PosDirectControl/Subsystem/lqr/PD_y1/preSat Signal'
 * '<S433>' : 'PosDirectControl/Subsystem/lqr/PD_y1/Anti-windup/Back Calculation'
 * '<S434>' : 'PosDirectControl/Subsystem/lqr/PD_y1/Anti-windup/Cont. Clamping Ideal'
 * '<S435>' : 'PosDirectControl/Subsystem/lqr/PD_y1/Anti-windup/Cont. Clamping Parallel'
 * '<S436>' : 'PosDirectControl/Subsystem/lqr/PD_y1/Anti-windup/Disabled'
 * '<S437>' : 'PosDirectControl/Subsystem/lqr/PD_y1/Anti-windup/Disc. Clamping Ideal'
 * '<S438>' : 'PosDirectControl/Subsystem/lqr/PD_y1/Anti-windup/Disc. Clamping Parallel'
 * '<S439>' : 'PosDirectControl/Subsystem/lqr/PD_y1/Anti-windup/Passthrough'
 * '<S440>' : 'PosDirectControl/Subsystem/lqr/PD_y1/D Gain/Disabled'
 * '<S441>' : 'PosDirectControl/Subsystem/lqr/PD_y1/D Gain/External Parameters'
 * '<S442>' : 'PosDirectControl/Subsystem/lqr/PD_y1/D Gain/Internal Parameters'
 * '<S443>' : 'PosDirectControl/Subsystem/lqr/PD_y1/Filter/Cont. Filter'
 * '<S444>' : 'PosDirectControl/Subsystem/lqr/PD_y1/Filter/Differentiator'
 * '<S445>' : 'PosDirectControl/Subsystem/lqr/PD_y1/Filter/Disabled'
 * '<S446>' : 'PosDirectControl/Subsystem/lqr/PD_y1/Filter/Disc. Backward Euler Filter'
 * '<S447>' : 'PosDirectControl/Subsystem/lqr/PD_y1/Filter/Disc. Forward Euler Filter'
 * '<S448>' : 'PosDirectControl/Subsystem/lqr/PD_y1/Filter/Disc. Trapezoidal Filter'
 * '<S449>' : 'PosDirectControl/Subsystem/lqr/PD_y1/Filter ICs/Disabled'
 * '<S450>' : 'PosDirectControl/Subsystem/lqr/PD_y1/Filter ICs/External IC'
 * '<S451>' : 'PosDirectControl/Subsystem/lqr/PD_y1/Filter ICs/Internal IC - Differentiator'
 * '<S452>' : 'PosDirectControl/Subsystem/lqr/PD_y1/Filter ICs/Internal IC - Filter'
 * '<S453>' : 'PosDirectControl/Subsystem/lqr/PD_y1/I Gain/Disabled'
 * '<S454>' : 'PosDirectControl/Subsystem/lqr/PD_y1/I Gain/External Parameters'
 * '<S455>' : 'PosDirectControl/Subsystem/lqr/PD_y1/I Gain/Internal Parameters'
 * '<S456>' : 'PosDirectControl/Subsystem/lqr/PD_y1/Ideal P Gain/External Parameters'
 * '<S457>' : 'PosDirectControl/Subsystem/lqr/PD_y1/Ideal P Gain/Internal Parameters'
 * '<S458>' : 'PosDirectControl/Subsystem/lqr/PD_y1/Ideal P Gain/Passthrough'
 * '<S459>' : 'PosDirectControl/Subsystem/lqr/PD_y1/Ideal P Gain Fdbk/Disabled'
 * '<S460>' : 'PosDirectControl/Subsystem/lqr/PD_y1/Ideal P Gain Fdbk/External Parameters'
 * '<S461>' : 'PosDirectControl/Subsystem/lqr/PD_y1/Ideal P Gain Fdbk/Internal Parameters'
 * '<S462>' : 'PosDirectControl/Subsystem/lqr/PD_y1/Ideal P Gain Fdbk/Passthrough'
 * '<S463>' : 'PosDirectControl/Subsystem/lqr/PD_y1/Integrator/Continuous'
 * '<S464>' : 'PosDirectControl/Subsystem/lqr/PD_y1/Integrator/Disabled'
 * '<S465>' : 'PosDirectControl/Subsystem/lqr/PD_y1/Integrator/Discrete'
 * '<S466>' : 'PosDirectControl/Subsystem/lqr/PD_y1/Integrator ICs/Disabled'
 * '<S467>' : 'PosDirectControl/Subsystem/lqr/PD_y1/Integrator ICs/External IC'
 * '<S468>' : 'PosDirectControl/Subsystem/lqr/PD_y1/Integrator ICs/Internal IC'
 * '<S469>' : 'PosDirectControl/Subsystem/lqr/PD_y1/N Copy/Disabled'
 * '<S470>' : 'PosDirectControl/Subsystem/lqr/PD_y1/N Copy/Disabled wSignal Specification'
 * '<S471>' : 'PosDirectControl/Subsystem/lqr/PD_y1/N Copy/External Parameters'
 * '<S472>' : 'PosDirectControl/Subsystem/lqr/PD_y1/N Copy/Internal Parameters'
 * '<S473>' : 'PosDirectControl/Subsystem/lqr/PD_y1/N Gain/Disabled'
 * '<S474>' : 'PosDirectControl/Subsystem/lqr/PD_y1/N Gain/External Parameters'
 * '<S475>' : 'PosDirectControl/Subsystem/lqr/PD_y1/N Gain/Internal Parameters'
 * '<S476>' : 'PosDirectControl/Subsystem/lqr/PD_y1/N Gain/Passthrough'
 * '<S477>' : 'PosDirectControl/Subsystem/lqr/PD_y1/P Copy/Disabled'
 * '<S478>' : 'PosDirectControl/Subsystem/lqr/PD_y1/P Copy/External Parameters Ideal'
 * '<S479>' : 'PosDirectControl/Subsystem/lqr/PD_y1/P Copy/Internal Parameters Ideal'
 * '<S480>' : 'PosDirectControl/Subsystem/lqr/PD_y1/Parallel P Gain/Disabled'
 * '<S481>' : 'PosDirectControl/Subsystem/lqr/PD_y1/Parallel P Gain/External Parameters'
 * '<S482>' : 'PosDirectControl/Subsystem/lqr/PD_y1/Parallel P Gain/Internal Parameters'
 * '<S483>' : 'PosDirectControl/Subsystem/lqr/PD_y1/Parallel P Gain/Passthrough'
 * '<S484>' : 'PosDirectControl/Subsystem/lqr/PD_y1/Reset Signal/Disabled'
 * '<S485>' : 'PosDirectControl/Subsystem/lqr/PD_y1/Reset Signal/External Reset'
 * '<S486>' : 'PosDirectControl/Subsystem/lqr/PD_y1/Saturation/Enabled'
 * '<S487>' : 'PosDirectControl/Subsystem/lqr/PD_y1/Saturation/Passthrough'
 * '<S488>' : 'PosDirectControl/Subsystem/lqr/PD_y1/Saturation Fdbk/Disabled'
 * '<S489>' : 'PosDirectControl/Subsystem/lqr/PD_y1/Saturation Fdbk/Enabled'
 * '<S490>' : 'PosDirectControl/Subsystem/lqr/PD_y1/Saturation Fdbk/Passthrough'
 * '<S491>' : 'PosDirectControl/Subsystem/lqr/PD_y1/Sum/Passthrough_I'
 * '<S492>' : 'PosDirectControl/Subsystem/lqr/PD_y1/Sum/Passthrough_P'
 * '<S493>' : 'PosDirectControl/Subsystem/lqr/PD_y1/Sum/Sum_PD'
 * '<S494>' : 'PosDirectControl/Subsystem/lqr/PD_y1/Sum/Sum_PI'
 * '<S495>' : 'PosDirectControl/Subsystem/lqr/PD_y1/Sum/Sum_PID'
 * '<S496>' : 'PosDirectControl/Subsystem/lqr/PD_y1/Sum Fdbk/Disabled'
 * '<S497>' : 'PosDirectControl/Subsystem/lqr/PD_y1/Sum Fdbk/Enabled'
 * '<S498>' : 'PosDirectControl/Subsystem/lqr/PD_y1/Sum Fdbk/Passthrough'
 * '<S499>' : 'PosDirectControl/Subsystem/lqr/PD_y1/Tracking Mode/Disabled'
 * '<S500>' : 'PosDirectControl/Subsystem/lqr/PD_y1/Tracking Mode/Enabled'
 * '<S501>' : 'PosDirectControl/Subsystem/lqr/PD_y1/Tracking Mode Sum/Passthrough'
 * '<S502>' : 'PosDirectControl/Subsystem/lqr/PD_y1/Tracking Mode Sum/Tracking Mode'
 * '<S503>' : 'PosDirectControl/Subsystem/lqr/PD_y1/postSat Signal/Feedback_Path'
 * '<S504>' : 'PosDirectControl/Subsystem/lqr/PD_y1/postSat Signal/Forward_Path'
 * '<S505>' : 'PosDirectControl/Subsystem/lqr/PD_y1/preSat Signal/Feedback_Path'
 * '<S506>' : 'PosDirectControl/Subsystem/lqr/PD_y1/preSat Signal/Forward_Path'
 * '<S507>' : 'PosDirectControl/Subsystem/lqr/PD_z/Anti-windup'
 * '<S508>' : 'PosDirectControl/Subsystem/lqr/PD_z/D Gain'
 * '<S509>' : 'PosDirectControl/Subsystem/lqr/PD_z/Filter'
 * '<S510>' : 'PosDirectControl/Subsystem/lqr/PD_z/Filter ICs'
 * '<S511>' : 'PosDirectControl/Subsystem/lqr/PD_z/I Gain'
 * '<S512>' : 'PosDirectControl/Subsystem/lqr/PD_z/Ideal P Gain'
 * '<S513>' : 'PosDirectControl/Subsystem/lqr/PD_z/Ideal P Gain Fdbk'
 * '<S514>' : 'PosDirectControl/Subsystem/lqr/PD_z/Integrator'
 * '<S515>' : 'PosDirectControl/Subsystem/lqr/PD_z/Integrator ICs'
 * '<S516>' : 'PosDirectControl/Subsystem/lqr/PD_z/N Copy'
 * '<S517>' : 'PosDirectControl/Subsystem/lqr/PD_z/N Gain'
 * '<S518>' : 'PosDirectControl/Subsystem/lqr/PD_z/P Copy'
 * '<S519>' : 'PosDirectControl/Subsystem/lqr/PD_z/Parallel P Gain'
 * '<S520>' : 'PosDirectControl/Subsystem/lqr/PD_z/Reset Signal'
 * '<S521>' : 'PosDirectControl/Subsystem/lqr/PD_z/Saturation'
 * '<S522>' : 'PosDirectControl/Subsystem/lqr/PD_z/Saturation Fdbk'
 * '<S523>' : 'PosDirectControl/Subsystem/lqr/PD_z/Sum'
 * '<S524>' : 'PosDirectControl/Subsystem/lqr/PD_z/Sum Fdbk'
 * '<S525>' : 'PosDirectControl/Subsystem/lqr/PD_z/Tracking Mode'
 * '<S526>' : 'PosDirectControl/Subsystem/lqr/PD_z/Tracking Mode Sum'
 * '<S527>' : 'PosDirectControl/Subsystem/lqr/PD_z/postSat Signal'
 * '<S528>' : 'PosDirectControl/Subsystem/lqr/PD_z/preSat Signal'
 * '<S529>' : 'PosDirectControl/Subsystem/lqr/PD_z/Anti-windup/Back Calculation'
 * '<S530>' : 'PosDirectControl/Subsystem/lqr/PD_z/Anti-windup/Cont. Clamping Ideal'
 * '<S531>' : 'PosDirectControl/Subsystem/lqr/PD_z/Anti-windup/Cont. Clamping Parallel'
 * '<S532>' : 'PosDirectControl/Subsystem/lqr/PD_z/Anti-windup/Disabled'
 * '<S533>' : 'PosDirectControl/Subsystem/lqr/PD_z/Anti-windup/Disc. Clamping Ideal'
 * '<S534>' : 'PosDirectControl/Subsystem/lqr/PD_z/Anti-windup/Disc. Clamping Parallel'
 * '<S535>' : 'PosDirectControl/Subsystem/lqr/PD_z/Anti-windup/Passthrough'
 * '<S536>' : 'PosDirectControl/Subsystem/lqr/PD_z/D Gain/Disabled'
 * '<S537>' : 'PosDirectControl/Subsystem/lqr/PD_z/D Gain/External Parameters'
 * '<S538>' : 'PosDirectControl/Subsystem/lqr/PD_z/D Gain/Internal Parameters'
 * '<S539>' : 'PosDirectControl/Subsystem/lqr/PD_z/Filter/Cont. Filter'
 * '<S540>' : 'PosDirectControl/Subsystem/lqr/PD_z/Filter/Differentiator'
 * '<S541>' : 'PosDirectControl/Subsystem/lqr/PD_z/Filter/Disabled'
 * '<S542>' : 'PosDirectControl/Subsystem/lqr/PD_z/Filter/Disc. Backward Euler Filter'
 * '<S543>' : 'PosDirectControl/Subsystem/lqr/PD_z/Filter/Disc. Forward Euler Filter'
 * '<S544>' : 'PosDirectControl/Subsystem/lqr/PD_z/Filter/Disc. Trapezoidal Filter'
 * '<S545>' : 'PosDirectControl/Subsystem/lqr/PD_z/Filter ICs/Disabled'
 * '<S546>' : 'PosDirectControl/Subsystem/lqr/PD_z/Filter ICs/External IC'
 * '<S547>' : 'PosDirectControl/Subsystem/lqr/PD_z/Filter ICs/Internal IC - Differentiator'
 * '<S548>' : 'PosDirectControl/Subsystem/lqr/PD_z/Filter ICs/Internal IC - Filter'
 * '<S549>' : 'PosDirectControl/Subsystem/lqr/PD_z/I Gain/Disabled'
 * '<S550>' : 'PosDirectControl/Subsystem/lqr/PD_z/I Gain/External Parameters'
 * '<S551>' : 'PosDirectControl/Subsystem/lqr/PD_z/I Gain/Internal Parameters'
 * '<S552>' : 'PosDirectControl/Subsystem/lqr/PD_z/Ideal P Gain/External Parameters'
 * '<S553>' : 'PosDirectControl/Subsystem/lqr/PD_z/Ideal P Gain/Internal Parameters'
 * '<S554>' : 'PosDirectControl/Subsystem/lqr/PD_z/Ideal P Gain/Passthrough'
 * '<S555>' : 'PosDirectControl/Subsystem/lqr/PD_z/Ideal P Gain Fdbk/Disabled'
 * '<S556>' : 'PosDirectControl/Subsystem/lqr/PD_z/Ideal P Gain Fdbk/External Parameters'
 * '<S557>' : 'PosDirectControl/Subsystem/lqr/PD_z/Ideal P Gain Fdbk/Internal Parameters'
 * '<S558>' : 'PosDirectControl/Subsystem/lqr/PD_z/Ideal P Gain Fdbk/Passthrough'
 * '<S559>' : 'PosDirectControl/Subsystem/lqr/PD_z/Integrator/Continuous'
 * '<S560>' : 'PosDirectControl/Subsystem/lqr/PD_z/Integrator/Disabled'
 * '<S561>' : 'PosDirectControl/Subsystem/lqr/PD_z/Integrator/Discrete'
 * '<S562>' : 'PosDirectControl/Subsystem/lqr/PD_z/Integrator ICs/Disabled'
 * '<S563>' : 'PosDirectControl/Subsystem/lqr/PD_z/Integrator ICs/External IC'
 * '<S564>' : 'PosDirectControl/Subsystem/lqr/PD_z/Integrator ICs/Internal IC'
 * '<S565>' : 'PosDirectControl/Subsystem/lqr/PD_z/N Copy/Disabled'
 * '<S566>' : 'PosDirectControl/Subsystem/lqr/PD_z/N Copy/Disabled wSignal Specification'
 * '<S567>' : 'PosDirectControl/Subsystem/lqr/PD_z/N Copy/External Parameters'
 * '<S568>' : 'PosDirectControl/Subsystem/lqr/PD_z/N Copy/Internal Parameters'
 * '<S569>' : 'PosDirectControl/Subsystem/lqr/PD_z/N Gain/Disabled'
 * '<S570>' : 'PosDirectControl/Subsystem/lqr/PD_z/N Gain/External Parameters'
 * '<S571>' : 'PosDirectControl/Subsystem/lqr/PD_z/N Gain/Internal Parameters'
 * '<S572>' : 'PosDirectControl/Subsystem/lqr/PD_z/N Gain/Passthrough'
 * '<S573>' : 'PosDirectControl/Subsystem/lqr/PD_z/P Copy/Disabled'
 * '<S574>' : 'PosDirectControl/Subsystem/lqr/PD_z/P Copy/External Parameters Ideal'
 * '<S575>' : 'PosDirectControl/Subsystem/lqr/PD_z/P Copy/Internal Parameters Ideal'
 * '<S576>' : 'PosDirectControl/Subsystem/lqr/PD_z/Parallel P Gain/Disabled'
 * '<S577>' : 'PosDirectControl/Subsystem/lqr/PD_z/Parallel P Gain/External Parameters'
 * '<S578>' : 'PosDirectControl/Subsystem/lqr/PD_z/Parallel P Gain/Internal Parameters'
 * '<S579>' : 'PosDirectControl/Subsystem/lqr/PD_z/Parallel P Gain/Passthrough'
 * '<S580>' : 'PosDirectControl/Subsystem/lqr/PD_z/Reset Signal/Disabled'
 * '<S581>' : 'PosDirectControl/Subsystem/lqr/PD_z/Reset Signal/External Reset'
 * '<S582>' : 'PosDirectControl/Subsystem/lqr/PD_z/Saturation/Enabled'
 * '<S583>' : 'PosDirectControl/Subsystem/lqr/PD_z/Saturation/Passthrough'
 * '<S584>' : 'PosDirectControl/Subsystem/lqr/PD_z/Saturation Fdbk/Disabled'
 * '<S585>' : 'PosDirectControl/Subsystem/lqr/PD_z/Saturation Fdbk/Enabled'
 * '<S586>' : 'PosDirectControl/Subsystem/lqr/PD_z/Saturation Fdbk/Passthrough'
 * '<S587>' : 'PosDirectControl/Subsystem/lqr/PD_z/Sum/Passthrough_I'
 * '<S588>' : 'PosDirectControl/Subsystem/lqr/PD_z/Sum/Passthrough_P'
 * '<S589>' : 'PosDirectControl/Subsystem/lqr/PD_z/Sum/Sum_PD'
 * '<S590>' : 'PosDirectControl/Subsystem/lqr/PD_z/Sum/Sum_PI'
 * '<S591>' : 'PosDirectControl/Subsystem/lqr/PD_z/Sum/Sum_PID'
 * '<S592>' : 'PosDirectControl/Subsystem/lqr/PD_z/Sum Fdbk/Disabled'
 * '<S593>' : 'PosDirectControl/Subsystem/lqr/PD_z/Sum Fdbk/Enabled'
 * '<S594>' : 'PosDirectControl/Subsystem/lqr/PD_z/Sum Fdbk/Passthrough'
 * '<S595>' : 'PosDirectControl/Subsystem/lqr/PD_z/Tracking Mode/Disabled'
 * '<S596>' : 'PosDirectControl/Subsystem/lqr/PD_z/Tracking Mode/Enabled'
 * '<S597>' : 'PosDirectControl/Subsystem/lqr/PD_z/Tracking Mode Sum/Passthrough'
 * '<S598>' : 'PosDirectControl/Subsystem/lqr/PD_z/Tracking Mode Sum/Tracking Mode'
 * '<S599>' : 'PosDirectControl/Subsystem/lqr/PD_z/postSat Signal/Feedback_Path'
 * '<S600>' : 'PosDirectControl/Subsystem/lqr/PD_z/postSat Signal/Forward_Path'
 * '<S601>' : 'PosDirectControl/Subsystem/lqr/PD_z/preSat Signal/Feedback_Path'
 * '<S602>' : 'PosDirectControl/Subsystem/lqr/PD_z/preSat Signal/Forward_Path'
 */
#endif                                 /* RTW_HEADER_PosDirectControl_h_ */
