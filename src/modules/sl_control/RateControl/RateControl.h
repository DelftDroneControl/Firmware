/*
 * RateControl.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "RateControl".
 *
 * Model version              : 1.584
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C++ source code generated on : Mon Jan  7 17:31:56 2019
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->Custom
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
  real_T H_rates_DSTATE[6];            /* '<Root>/H_rates' */
  real_T UD_DSTATE[3];                 /* '<S1>/UD' */
  real_T H_accel_DSTATE[2];            /* '<Root>/H_accel' */
  real_T H_virtual_control_input_DSTATE[8];/* '<Root>/H_virtual_control_input' */
  real_T H_actuators_DSTATE[8];        /* '<Root>/H_actuators' */
  real_T H_est_actuators_DSTATE[8];    /* '<Root>/H_est_actuators' */
  real_T UD_DSTATE_p[4];               /* '<S3>/UD' */
  real_T UD_DSTATE_e[4];               /* '<S5>/UD' */
  real_T H_est_rates_DSTATE[6];        /* '<Root>/H_est_rates' */
  real_T UD_DSTATE_d[3];               /* '<S4>/UD' */
  real_T UD_DSTATE_g[3];               /* '<S2>/UD' */
  real_T H_est_accel_DSTATE[2];        /* '<Root>/H_est_accel' */
  real_T UD_DSTATE_j;                  /* '<S6>/UD' */
  real_T Delay_DSTATE[8];              /* '<Root>/Delay' */
  real_T ActuatorDynamics_DSTATE[4];   /* '<Root>/ActuatorDynamics' */
  real_T UD_DSTATE_l;                  /* '<S49>/UD' */
  real_T Integrator_DSTATE;            /* '<S70>/Integrator' */
  real_T UD_DSTATE_b;                  /* '<S145>/UD' */
  real_T Integrator_DSTATE_k;          /* '<S166>/Integrator' */
  real_T UD_DSTATE_bg;                 /* '<S241>/UD' */
  real_T Integrator_DSTATE_b;          /* '<S262>/Integrator' */
  real_T du_last[4];                   /* '<Root>/INDI_allocator' */
  real32_T Memory3_PreviousInput[32];  /* '<Root>/Memory3' */
} DW_RateControl_T;

/* Constant parameters (default storage) */
typedef struct {
  /* Pooled Parameter (Mixed Expressions)
   * Referenced by: '<Root>/ActuatorDynamics'
   */
  real_T pooled1[16];

  /* Expression: eye(4)
   * Referenced by: '<Root>/ActuatorDynamics'
   */
  real_T ActuatorDynamics_C[16];

  /* Computed Parameter: Memory3_InitialCondition
   * Referenced by: '<Root>/Memory3'
   */
  real32_T Memory3_InitialCondition[32];
} ConstP_RateControl_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real32_T rates[3];                   /* '<Root>/rates' */
  real32_T rates_sp[3];                /* '<Root>/rates_sp' */
  real32_T accel_z;                    /* '<Root>/accel_z' */
  real32_T thrust_sp;                  /* '<Root>/thrust_sp' */
  int32_T esc_rpm[4];                  /* '<Root>/esc_rpm' */
  real_T fail_id;                      /* '<Root>/fail_id' */
} ExtU_RateControl_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T w_cmd[4];                     /* '<Root>/w_cmd' */
  real32_T actuators_control[4];       /* '<Root>/actuators_control' */
  real32_T G[32];                      /* '<Root>/G' */
} ExtY_RateControl_T;

/* Real-time Model Data Structure */
struct tag_RTM_RateControl_T {
  const char_T *errorStatus;
};

/* Constant parameters (default storage) */
extern const ConstP_RateControl_T RateControl_ConstP;

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
                                                *   '<Root>/controlEffMatrix'
                                                *   '<Root>/ActuatorDynamics'
                                                *   '<S87>/Proportional Gain'
                                                *   '<S183>/Proportional Gain'
                                                *   '<S279>/Proportional Gain'
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

  /* private member function(s) for subsystem '<Root>'*/
  real_T RateControl_xnrm2(int32_T n, const real_T x[16], int32_T ix0);
  real_T RateControl_xnrm2_n(int32_T n, const real_T x[4], int32_T ix0);
  void RateControl_xaxpy_fy(int32_T n, real_T a, const real_T x[4], int32_T ix0,
    real_T y[16], int32_T iy0);
  void RateControl_xaxpy_f(int32_T n, real_T a, const real_T x[16], int32_T ix0,
    real_T y[4], int32_T iy0);
  real_T RateControl_xdotc(int32_T n, const real_T x[16], int32_T ix0, const
    real_T y[16], int32_T iy0);
  void RateControl_xaxpy(int32_T n, real_T a, int32_T ix0, real_T y[16], int32_T
    iy0);
  void RateControl_xscal(real_T a, real_T x[16], int32_T ix0);
  void RateControl_xswap(real_T x[16], int32_T ix0, int32_T iy0);
  void RateControl_xrotg(real_T *a, real_T *b, real_T *c, real_T *s);
  void RateControl_xrot(real_T x[16], int32_T ix0, int32_T iy0, real_T c, real_T
                        s);
  void RateControl_svd(const real_T A[16], real_T U[16], real_T s[4], real_T V
                       [16]);
  void RateControl_pinv(const real_T A[16], real_T X[16]);
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
 * '<S4>'   : 'RateControl/Discrete Derivative4'
 * '<S5>'   : 'RateControl/Discrete Derivative5'
 * '<S6>'   : 'RateControl/Discrete Derivative6'
 * '<S7>'   : 'RateControl/FD'
 * '<S8>'   : 'RateControl/INDI_allocator'
 * '<S9>'   : 'RateControl/MATLAB Function'
 * '<S10>'  : 'RateControl/MATLAB Function1'
 * '<S11>'  : 'RateControl/P_pitch'
 * '<S12>'  : 'RateControl/P_roll'
 * '<S13>'  : 'RateControl/P_yaw'
 * '<S14>'  : 'RateControl/controlEffMatrix'
 * '<S15>'  : 'RateControl/lms'
 * '<S16>'  : 'RateControl/P_pitch/Anti-windup'
 * '<S17>'  : 'RateControl/P_pitch/D Gain'
 * '<S18>'  : 'RateControl/P_pitch/Filter'
 * '<S19>'  : 'RateControl/P_pitch/Filter ICs'
 * '<S20>'  : 'RateControl/P_pitch/I Gain'
 * '<S21>'  : 'RateControl/P_pitch/Ideal P Gain'
 * '<S22>'  : 'RateControl/P_pitch/Ideal P Gain Fdbk'
 * '<S23>'  : 'RateControl/P_pitch/Integrator'
 * '<S24>'  : 'RateControl/P_pitch/Integrator ICs'
 * '<S25>'  : 'RateControl/P_pitch/N Copy'
 * '<S26>'  : 'RateControl/P_pitch/N Gain'
 * '<S27>'  : 'RateControl/P_pitch/P Copy'
 * '<S28>'  : 'RateControl/P_pitch/Parallel P Gain'
 * '<S29>'  : 'RateControl/P_pitch/Reset Signal'
 * '<S30>'  : 'RateControl/P_pitch/Saturation'
 * '<S31>'  : 'RateControl/P_pitch/Saturation Fdbk'
 * '<S32>'  : 'RateControl/P_pitch/Sum'
 * '<S33>'  : 'RateControl/P_pitch/Sum Fdbk'
 * '<S34>'  : 'RateControl/P_pitch/Tracking Mode'
 * '<S35>'  : 'RateControl/P_pitch/Tracking Mode Sum'
 * '<S36>'  : 'RateControl/P_pitch/postSat Signal'
 * '<S37>'  : 'RateControl/P_pitch/preSat Signal'
 * '<S38>'  : 'RateControl/P_pitch/Anti-windup/Back Calculation'
 * '<S39>'  : 'RateControl/P_pitch/Anti-windup/Cont. Clamping Ideal'
 * '<S40>'  : 'RateControl/P_pitch/Anti-windup/Cont. Clamping Parallel'
 * '<S41>'  : 'RateControl/P_pitch/Anti-windup/Disabled'
 * '<S42>'  : 'RateControl/P_pitch/Anti-windup/Disc. Clamping Ideal'
 * '<S43>'  : 'RateControl/P_pitch/Anti-windup/Disc. Clamping Parallel'
 * '<S44>'  : 'RateControl/P_pitch/Anti-windup/Passthrough'
 * '<S45>'  : 'RateControl/P_pitch/D Gain/Disabled'
 * '<S46>'  : 'RateControl/P_pitch/D Gain/External Parameters'
 * '<S47>'  : 'RateControl/P_pitch/D Gain/Internal Parameters'
 * '<S48>'  : 'RateControl/P_pitch/Filter/Cont. Filter'
 * '<S49>'  : 'RateControl/P_pitch/Filter/Differentiator'
 * '<S50>'  : 'RateControl/P_pitch/Filter/Disabled'
 * '<S51>'  : 'RateControl/P_pitch/Filter/Disc. Backward Euler Filter'
 * '<S52>'  : 'RateControl/P_pitch/Filter/Disc. Forward Euler Filter'
 * '<S53>'  : 'RateControl/P_pitch/Filter/Disc. Trapezoidal Filter'
 * '<S54>'  : 'RateControl/P_pitch/Filter ICs/Disabled'
 * '<S55>'  : 'RateControl/P_pitch/Filter ICs/External IC'
 * '<S56>'  : 'RateControl/P_pitch/Filter ICs/Internal IC - Differentiator'
 * '<S57>'  : 'RateControl/P_pitch/Filter ICs/Internal IC - Filter'
 * '<S58>'  : 'RateControl/P_pitch/I Gain/Disabled'
 * '<S59>'  : 'RateControl/P_pitch/I Gain/External Parameters'
 * '<S60>'  : 'RateControl/P_pitch/I Gain/Internal Parameters'
 * '<S61>'  : 'RateControl/P_pitch/Ideal P Gain/External Parameters'
 * '<S62>'  : 'RateControl/P_pitch/Ideal P Gain/Internal Parameters'
 * '<S63>'  : 'RateControl/P_pitch/Ideal P Gain/Passthrough'
 * '<S64>'  : 'RateControl/P_pitch/Ideal P Gain Fdbk/Disabled'
 * '<S65>'  : 'RateControl/P_pitch/Ideal P Gain Fdbk/External Parameters'
 * '<S66>'  : 'RateControl/P_pitch/Ideal P Gain Fdbk/Internal Parameters'
 * '<S67>'  : 'RateControl/P_pitch/Ideal P Gain Fdbk/Passthrough'
 * '<S68>'  : 'RateControl/P_pitch/Integrator/Continuous'
 * '<S69>'  : 'RateControl/P_pitch/Integrator/Disabled'
 * '<S70>'  : 'RateControl/P_pitch/Integrator/Discrete'
 * '<S71>'  : 'RateControl/P_pitch/Integrator ICs/Disabled'
 * '<S72>'  : 'RateControl/P_pitch/Integrator ICs/External IC'
 * '<S73>'  : 'RateControl/P_pitch/Integrator ICs/Internal IC'
 * '<S74>'  : 'RateControl/P_pitch/N Copy/Disabled'
 * '<S75>'  : 'RateControl/P_pitch/N Copy/Disabled wSignal Specification'
 * '<S76>'  : 'RateControl/P_pitch/N Copy/External Parameters'
 * '<S77>'  : 'RateControl/P_pitch/N Copy/Internal Parameters'
 * '<S78>'  : 'RateControl/P_pitch/N Gain/Disabled'
 * '<S79>'  : 'RateControl/P_pitch/N Gain/External Parameters'
 * '<S80>'  : 'RateControl/P_pitch/N Gain/Internal Parameters'
 * '<S81>'  : 'RateControl/P_pitch/N Gain/Passthrough'
 * '<S82>'  : 'RateControl/P_pitch/P Copy/Disabled'
 * '<S83>'  : 'RateControl/P_pitch/P Copy/External Parameters Ideal'
 * '<S84>'  : 'RateControl/P_pitch/P Copy/Internal Parameters Ideal'
 * '<S85>'  : 'RateControl/P_pitch/Parallel P Gain/Disabled'
 * '<S86>'  : 'RateControl/P_pitch/Parallel P Gain/External Parameters'
 * '<S87>'  : 'RateControl/P_pitch/Parallel P Gain/Internal Parameters'
 * '<S88>'  : 'RateControl/P_pitch/Parallel P Gain/Passthrough'
 * '<S89>'  : 'RateControl/P_pitch/Reset Signal/Disabled'
 * '<S90>'  : 'RateControl/P_pitch/Reset Signal/External Reset'
 * '<S91>'  : 'RateControl/P_pitch/Saturation/Enabled'
 * '<S92>'  : 'RateControl/P_pitch/Saturation/Passthrough'
 * '<S93>'  : 'RateControl/P_pitch/Saturation Fdbk/Disabled'
 * '<S94>'  : 'RateControl/P_pitch/Saturation Fdbk/Enabled'
 * '<S95>'  : 'RateControl/P_pitch/Saturation Fdbk/Passthrough'
 * '<S96>'  : 'RateControl/P_pitch/Sum/Passthrough_I'
 * '<S97>'  : 'RateControl/P_pitch/Sum/Passthrough_P'
 * '<S98>'  : 'RateControl/P_pitch/Sum/Sum_PD'
 * '<S99>'  : 'RateControl/P_pitch/Sum/Sum_PI'
 * '<S100>' : 'RateControl/P_pitch/Sum/Sum_PID'
 * '<S101>' : 'RateControl/P_pitch/Sum Fdbk/Disabled'
 * '<S102>' : 'RateControl/P_pitch/Sum Fdbk/Enabled'
 * '<S103>' : 'RateControl/P_pitch/Sum Fdbk/Passthrough'
 * '<S104>' : 'RateControl/P_pitch/Tracking Mode/Disabled'
 * '<S105>' : 'RateControl/P_pitch/Tracking Mode/Enabled'
 * '<S106>' : 'RateControl/P_pitch/Tracking Mode Sum/Passthrough'
 * '<S107>' : 'RateControl/P_pitch/Tracking Mode Sum/Tracking Mode'
 * '<S108>' : 'RateControl/P_pitch/postSat Signal/Feedback_Path'
 * '<S109>' : 'RateControl/P_pitch/postSat Signal/Forward_Path'
 * '<S110>' : 'RateControl/P_pitch/preSat Signal/Feedback_Path'
 * '<S111>' : 'RateControl/P_pitch/preSat Signal/Forward_Path'
 * '<S112>' : 'RateControl/P_roll/Anti-windup'
 * '<S113>' : 'RateControl/P_roll/D Gain'
 * '<S114>' : 'RateControl/P_roll/Filter'
 * '<S115>' : 'RateControl/P_roll/Filter ICs'
 * '<S116>' : 'RateControl/P_roll/I Gain'
 * '<S117>' : 'RateControl/P_roll/Ideal P Gain'
 * '<S118>' : 'RateControl/P_roll/Ideal P Gain Fdbk'
 * '<S119>' : 'RateControl/P_roll/Integrator'
 * '<S120>' : 'RateControl/P_roll/Integrator ICs'
 * '<S121>' : 'RateControl/P_roll/N Copy'
 * '<S122>' : 'RateControl/P_roll/N Gain'
 * '<S123>' : 'RateControl/P_roll/P Copy'
 * '<S124>' : 'RateControl/P_roll/Parallel P Gain'
 * '<S125>' : 'RateControl/P_roll/Reset Signal'
 * '<S126>' : 'RateControl/P_roll/Saturation'
 * '<S127>' : 'RateControl/P_roll/Saturation Fdbk'
 * '<S128>' : 'RateControl/P_roll/Sum'
 * '<S129>' : 'RateControl/P_roll/Sum Fdbk'
 * '<S130>' : 'RateControl/P_roll/Tracking Mode'
 * '<S131>' : 'RateControl/P_roll/Tracking Mode Sum'
 * '<S132>' : 'RateControl/P_roll/postSat Signal'
 * '<S133>' : 'RateControl/P_roll/preSat Signal'
 * '<S134>' : 'RateControl/P_roll/Anti-windup/Back Calculation'
 * '<S135>' : 'RateControl/P_roll/Anti-windup/Cont. Clamping Ideal'
 * '<S136>' : 'RateControl/P_roll/Anti-windup/Cont. Clamping Parallel'
 * '<S137>' : 'RateControl/P_roll/Anti-windup/Disabled'
 * '<S138>' : 'RateControl/P_roll/Anti-windup/Disc. Clamping Ideal'
 * '<S139>' : 'RateControl/P_roll/Anti-windup/Disc. Clamping Parallel'
 * '<S140>' : 'RateControl/P_roll/Anti-windup/Passthrough'
 * '<S141>' : 'RateControl/P_roll/D Gain/Disabled'
 * '<S142>' : 'RateControl/P_roll/D Gain/External Parameters'
 * '<S143>' : 'RateControl/P_roll/D Gain/Internal Parameters'
 * '<S144>' : 'RateControl/P_roll/Filter/Cont. Filter'
 * '<S145>' : 'RateControl/P_roll/Filter/Differentiator'
 * '<S146>' : 'RateControl/P_roll/Filter/Disabled'
 * '<S147>' : 'RateControl/P_roll/Filter/Disc. Backward Euler Filter'
 * '<S148>' : 'RateControl/P_roll/Filter/Disc. Forward Euler Filter'
 * '<S149>' : 'RateControl/P_roll/Filter/Disc. Trapezoidal Filter'
 * '<S150>' : 'RateControl/P_roll/Filter ICs/Disabled'
 * '<S151>' : 'RateControl/P_roll/Filter ICs/External IC'
 * '<S152>' : 'RateControl/P_roll/Filter ICs/Internal IC - Differentiator'
 * '<S153>' : 'RateControl/P_roll/Filter ICs/Internal IC - Filter'
 * '<S154>' : 'RateControl/P_roll/I Gain/Disabled'
 * '<S155>' : 'RateControl/P_roll/I Gain/External Parameters'
 * '<S156>' : 'RateControl/P_roll/I Gain/Internal Parameters'
 * '<S157>' : 'RateControl/P_roll/Ideal P Gain/External Parameters'
 * '<S158>' : 'RateControl/P_roll/Ideal P Gain/Internal Parameters'
 * '<S159>' : 'RateControl/P_roll/Ideal P Gain/Passthrough'
 * '<S160>' : 'RateControl/P_roll/Ideal P Gain Fdbk/Disabled'
 * '<S161>' : 'RateControl/P_roll/Ideal P Gain Fdbk/External Parameters'
 * '<S162>' : 'RateControl/P_roll/Ideal P Gain Fdbk/Internal Parameters'
 * '<S163>' : 'RateControl/P_roll/Ideal P Gain Fdbk/Passthrough'
 * '<S164>' : 'RateControl/P_roll/Integrator/Continuous'
 * '<S165>' : 'RateControl/P_roll/Integrator/Disabled'
 * '<S166>' : 'RateControl/P_roll/Integrator/Discrete'
 * '<S167>' : 'RateControl/P_roll/Integrator ICs/Disabled'
 * '<S168>' : 'RateControl/P_roll/Integrator ICs/External IC'
 * '<S169>' : 'RateControl/P_roll/Integrator ICs/Internal IC'
 * '<S170>' : 'RateControl/P_roll/N Copy/Disabled'
 * '<S171>' : 'RateControl/P_roll/N Copy/Disabled wSignal Specification'
 * '<S172>' : 'RateControl/P_roll/N Copy/External Parameters'
 * '<S173>' : 'RateControl/P_roll/N Copy/Internal Parameters'
 * '<S174>' : 'RateControl/P_roll/N Gain/Disabled'
 * '<S175>' : 'RateControl/P_roll/N Gain/External Parameters'
 * '<S176>' : 'RateControl/P_roll/N Gain/Internal Parameters'
 * '<S177>' : 'RateControl/P_roll/N Gain/Passthrough'
 * '<S178>' : 'RateControl/P_roll/P Copy/Disabled'
 * '<S179>' : 'RateControl/P_roll/P Copy/External Parameters Ideal'
 * '<S180>' : 'RateControl/P_roll/P Copy/Internal Parameters Ideal'
 * '<S181>' : 'RateControl/P_roll/Parallel P Gain/Disabled'
 * '<S182>' : 'RateControl/P_roll/Parallel P Gain/External Parameters'
 * '<S183>' : 'RateControl/P_roll/Parallel P Gain/Internal Parameters'
 * '<S184>' : 'RateControl/P_roll/Parallel P Gain/Passthrough'
 * '<S185>' : 'RateControl/P_roll/Reset Signal/Disabled'
 * '<S186>' : 'RateControl/P_roll/Reset Signal/External Reset'
 * '<S187>' : 'RateControl/P_roll/Saturation/Enabled'
 * '<S188>' : 'RateControl/P_roll/Saturation/Passthrough'
 * '<S189>' : 'RateControl/P_roll/Saturation Fdbk/Disabled'
 * '<S190>' : 'RateControl/P_roll/Saturation Fdbk/Enabled'
 * '<S191>' : 'RateControl/P_roll/Saturation Fdbk/Passthrough'
 * '<S192>' : 'RateControl/P_roll/Sum/Passthrough_I'
 * '<S193>' : 'RateControl/P_roll/Sum/Passthrough_P'
 * '<S194>' : 'RateControl/P_roll/Sum/Sum_PD'
 * '<S195>' : 'RateControl/P_roll/Sum/Sum_PI'
 * '<S196>' : 'RateControl/P_roll/Sum/Sum_PID'
 * '<S197>' : 'RateControl/P_roll/Sum Fdbk/Disabled'
 * '<S198>' : 'RateControl/P_roll/Sum Fdbk/Enabled'
 * '<S199>' : 'RateControl/P_roll/Sum Fdbk/Passthrough'
 * '<S200>' : 'RateControl/P_roll/Tracking Mode/Disabled'
 * '<S201>' : 'RateControl/P_roll/Tracking Mode/Enabled'
 * '<S202>' : 'RateControl/P_roll/Tracking Mode Sum/Passthrough'
 * '<S203>' : 'RateControl/P_roll/Tracking Mode Sum/Tracking Mode'
 * '<S204>' : 'RateControl/P_roll/postSat Signal/Feedback_Path'
 * '<S205>' : 'RateControl/P_roll/postSat Signal/Forward_Path'
 * '<S206>' : 'RateControl/P_roll/preSat Signal/Feedback_Path'
 * '<S207>' : 'RateControl/P_roll/preSat Signal/Forward_Path'
 * '<S208>' : 'RateControl/P_yaw/Anti-windup'
 * '<S209>' : 'RateControl/P_yaw/D Gain'
 * '<S210>' : 'RateControl/P_yaw/Filter'
 * '<S211>' : 'RateControl/P_yaw/Filter ICs'
 * '<S212>' : 'RateControl/P_yaw/I Gain'
 * '<S213>' : 'RateControl/P_yaw/Ideal P Gain'
 * '<S214>' : 'RateControl/P_yaw/Ideal P Gain Fdbk'
 * '<S215>' : 'RateControl/P_yaw/Integrator'
 * '<S216>' : 'RateControl/P_yaw/Integrator ICs'
 * '<S217>' : 'RateControl/P_yaw/N Copy'
 * '<S218>' : 'RateControl/P_yaw/N Gain'
 * '<S219>' : 'RateControl/P_yaw/P Copy'
 * '<S220>' : 'RateControl/P_yaw/Parallel P Gain'
 * '<S221>' : 'RateControl/P_yaw/Reset Signal'
 * '<S222>' : 'RateControl/P_yaw/Saturation'
 * '<S223>' : 'RateControl/P_yaw/Saturation Fdbk'
 * '<S224>' : 'RateControl/P_yaw/Sum'
 * '<S225>' : 'RateControl/P_yaw/Sum Fdbk'
 * '<S226>' : 'RateControl/P_yaw/Tracking Mode'
 * '<S227>' : 'RateControl/P_yaw/Tracking Mode Sum'
 * '<S228>' : 'RateControl/P_yaw/postSat Signal'
 * '<S229>' : 'RateControl/P_yaw/preSat Signal'
 * '<S230>' : 'RateControl/P_yaw/Anti-windup/Back Calculation'
 * '<S231>' : 'RateControl/P_yaw/Anti-windup/Cont. Clamping Ideal'
 * '<S232>' : 'RateControl/P_yaw/Anti-windup/Cont. Clamping Parallel'
 * '<S233>' : 'RateControl/P_yaw/Anti-windup/Disabled'
 * '<S234>' : 'RateControl/P_yaw/Anti-windup/Disc. Clamping Ideal'
 * '<S235>' : 'RateControl/P_yaw/Anti-windup/Disc. Clamping Parallel'
 * '<S236>' : 'RateControl/P_yaw/Anti-windup/Passthrough'
 * '<S237>' : 'RateControl/P_yaw/D Gain/Disabled'
 * '<S238>' : 'RateControl/P_yaw/D Gain/External Parameters'
 * '<S239>' : 'RateControl/P_yaw/D Gain/Internal Parameters'
 * '<S240>' : 'RateControl/P_yaw/Filter/Cont. Filter'
 * '<S241>' : 'RateControl/P_yaw/Filter/Differentiator'
 * '<S242>' : 'RateControl/P_yaw/Filter/Disabled'
 * '<S243>' : 'RateControl/P_yaw/Filter/Disc. Backward Euler Filter'
 * '<S244>' : 'RateControl/P_yaw/Filter/Disc. Forward Euler Filter'
 * '<S245>' : 'RateControl/P_yaw/Filter/Disc. Trapezoidal Filter'
 * '<S246>' : 'RateControl/P_yaw/Filter ICs/Disabled'
 * '<S247>' : 'RateControl/P_yaw/Filter ICs/External IC'
 * '<S248>' : 'RateControl/P_yaw/Filter ICs/Internal IC - Differentiator'
 * '<S249>' : 'RateControl/P_yaw/Filter ICs/Internal IC - Filter'
 * '<S250>' : 'RateControl/P_yaw/I Gain/Disabled'
 * '<S251>' : 'RateControl/P_yaw/I Gain/External Parameters'
 * '<S252>' : 'RateControl/P_yaw/I Gain/Internal Parameters'
 * '<S253>' : 'RateControl/P_yaw/Ideal P Gain/External Parameters'
 * '<S254>' : 'RateControl/P_yaw/Ideal P Gain/Internal Parameters'
 * '<S255>' : 'RateControl/P_yaw/Ideal P Gain/Passthrough'
 * '<S256>' : 'RateControl/P_yaw/Ideal P Gain Fdbk/Disabled'
 * '<S257>' : 'RateControl/P_yaw/Ideal P Gain Fdbk/External Parameters'
 * '<S258>' : 'RateControl/P_yaw/Ideal P Gain Fdbk/Internal Parameters'
 * '<S259>' : 'RateControl/P_yaw/Ideal P Gain Fdbk/Passthrough'
 * '<S260>' : 'RateControl/P_yaw/Integrator/Continuous'
 * '<S261>' : 'RateControl/P_yaw/Integrator/Disabled'
 * '<S262>' : 'RateControl/P_yaw/Integrator/Discrete'
 * '<S263>' : 'RateControl/P_yaw/Integrator ICs/Disabled'
 * '<S264>' : 'RateControl/P_yaw/Integrator ICs/External IC'
 * '<S265>' : 'RateControl/P_yaw/Integrator ICs/Internal IC'
 * '<S266>' : 'RateControl/P_yaw/N Copy/Disabled'
 * '<S267>' : 'RateControl/P_yaw/N Copy/Disabled wSignal Specification'
 * '<S268>' : 'RateControl/P_yaw/N Copy/External Parameters'
 * '<S269>' : 'RateControl/P_yaw/N Copy/Internal Parameters'
 * '<S270>' : 'RateControl/P_yaw/N Gain/Disabled'
 * '<S271>' : 'RateControl/P_yaw/N Gain/External Parameters'
 * '<S272>' : 'RateControl/P_yaw/N Gain/Internal Parameters'
 * '<S273>' : 'RateControl/P_yaw/N Gain/Passthrough'
 * '<S274>' : 'RateControl/P_yaw/P Copy/Disabled'
 * '<S275>' : 'RateControl/P_yaw/P Copy/External Parameters Ideal'
 * '<S276>' : 'RateControl/P_yaw/P Copy/Internal Parameters Ideal'
 * '<S277>' : 'RateControl/P_yaw/Parallel P Gain/Disabled'
 * '<S278>' : 'RateControl/P_yaw/Parallel P Gain/External Parameters'
 * '<S279>' : 'RateControl/P_yaw/Parallel P Gain/Internal Parameters'
 * '<S280>' : 'RateControl/P_yaw/Parallel P Gain/Passthrough'
 * '<S281>' : 'RateControl/P_yaw/Reset Signal/Disabled'
 * '<S282>' : 'RateControl/P_yaw/Reset Signal/External Reset'
 * '<S283>' : 'RateControl/P_yaw/Saturation/Enabled'
 * '<S284>' : 'RateControl/P_yaw/Saturation/Passthrough'
 * '<S285>' : 'RateControl/P_yaw/Saturation Fdbk/Disabled'
 * '<S286>' : 'RateControl/P_yaw/Saturation Fdbk/Enabled'
 * '<S287>' : 'RateControl/P_yaw/Saturation Fdbk/Passthrough'
 * '<S288>' : 'RateControl/P_yaw/Sum/Passthrough_I'
 * '<S289>' : 'RateControl/P_yaw/Sum/Passthrough_P'
 * '<S290>' : 'RateControl/P_yaw/Sum/Sum_PD'
 * '<S291>' : 'RateControl/P_yaw/Sum/Sum_PI'
 * '<S292>' : 'RateControl/P_yaw/Sum/Sum_PID'
 * '<S293>' : 'RateControl/P_yaw/Sum Fdbk/Disabled'
 * '<S294>' : 'RateControl/P_yaw/Sum Fdbk/Enabled'
 * '<S295>' : 'RateControl/P_yaw/Sum Fdbk/Passthrough'
 * '<S296>' : 'RateControl/P_yaw/Tracking Mode/Disabled'
 * '<S297>' : 'RateControl/P_yaw/Tracking Mode/Enabled'
 * '<S298>' : 'RateControl/P_yaw/Tracking Mode Sum/Passthrough'
 * '<S299>' : 'RateControl/P_yaw/Tracking Mode Sum/Tracking Mode'
 * '<S300>' : 'RateControl/P_yaw/postSat Signal/Feedback_Path'
 * '<S301>' : 'RateControl/P_yaw/postSat Signal/Forward_Path'
 * '<S302>' : 'RateControl/P_yaw/preSat Signal/Feedback_Path'
 * '<S303>' : 'RateControl/P_yaw/preSat Signal/Forward_Path'
 */
#endif                                 /* RTW_HEADER_RateControl_h_ */
