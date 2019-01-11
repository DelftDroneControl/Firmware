/*
 * RateControl.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "RateControl".
 *
 * Model version              : 1.619
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C++ source code generated on : Fri Jan 11 16:16:09 2019
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
  real_T Integrator_DSTATE;            /* '<S169>/Integrator' */
  real_T UD_DSTATE_b;                  /* '<S148>/UD' */
  real_T Integrator_DSTATE_f;          /* '<S73>/Integrator' */
  real_T UD_DSTATE_l;                  /* '<S52>/UD' */
  real_T Integrator_DSTATE_b;          /* '<S265>/Integrator' */
  real_T UD_DSTATE_bg;                 /* '<S244>/UD' */
  real_T H_rates_sp_DSTATE[6];         /* '<Root>/H_rates_sp' */
  real_T UD_DSTATE_i[3];               /* '<S4>/UD' */
  real_T H_actuators_DSTATE[8];        /* '<Root>/H_actuators' */
  real_T H_est_actuators_DSTATE[8];    /* '<Root>/H_est_actuators' */
  real_T UD_DSTATE_p[4];               /* '<S3>/UD' */
  real_T UD_DSTATE_e[4];               /* '<S6>/UD' */
  real_T H_est_rates_DSTATE[6];        /* '<Root>/H_est_rates' */
  real_T UD_DSTATE_d[3];               /* '<S5>/UD' */
  real_T UD_DSTATE_g[3];               /* '<S2>/UD' */
  real_T H_est_accel_DSTATE[2];        /* '<Root>/H_est_accel' */
  real_T UD_DSTATE_j;                  /* '<S7>/UD' */
  real_T Delay_DSTATE[8];              /* '<Root>/Delay' */
  real_T ActuatorDynamics_DSTATE[4];   /* '<Root>/ActuatorDynamics' */
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
  int32_T fail_flag;                   /* '<Root>/fail_flag ' */
  real32_T act_limit;                  /* '<Root>/act_limit' */
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
                                                *   '<S90>/Proportional Gain'
                                                *   '<S186>/Proportional Gain'
                                                *   '<S282>/Proportional Gain'
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
 * '<S4>'   : 'RateControl/Discrete Derivative3'
 * '<S5>'   : 'RateControl/Discrete Derivative4'
 * '<S6>'   : 'RateControl/Discrete Derivative5'
 * '<S7>'   : 'RateControl/Discrete Derivative6'
 * '<S8>'   : 'RateControl/FD'
 * '<S9>'   : 'RateControl/INDI_allocator'
 * '<S10>'  : 'RateControl/MATLAB Function'
 * '<S11>'  : 'RateControl/MATLAB Function1'
 * '<S12>'  : 'RateControl/MATLAB Function2'
 * '<S13>'  : 'RateControl/MATLAB Function3'
 * '<S14>'  : 'RateControl/P_pitch'
 * '<S15>'  : 'RateControl/P_roll'
 * '<S16>'  : 'RateControl/P_yaw'
 * '<S17>'  : 'RateControl/controlEffMatrix'
 * '<S18>'  : 'RateControl/lms'
 * '<S19>'  : 'RateControl/P_pitch/Anti-windup'
 * '<S20>'  : 'RateControl/P_pitch/D Gain'
 * '<S21>'  : 'RateControl/P_pitch/Filter'
 * '<S22>'  : 'RateControl/P_pitch/Filter ICs'
 * '<S23>'  : 'RateControl/P_pitch/I Gain'
 * '<S24>'  : 'RateControl/P_pitch/Ideal P Gain'
 * '<S25>'  : 'RateControl/P_pitch/Ideal P Gain Fdbk'
 * '<S26>'  : 'RateControl/P_pitch/Integrator'
 * '<S27>'  : 'RateControl/P_pitch/Integrator ICs'
 * '<S28>'  : 'RateControl/P_pitch/N Copy'
 * '<S29>'  : 'RateControl/P_pitch/N Gain'
 * '<S30>'  : 'RateControl/P_pitch/P Copy'
 * '<S31>'  : 'RateControl/P_pitch/Parallel P Gain'
 * '<S32>'  : 'RateControl/P_pitch/Reset Signal'
 * '<S33>'  : 'RateControl/P_pitch/Saturation'
 * '<S34>'  : 'RateControl/P_pitch/Saturation Fdbk'
 * '<S35>'  : 'RateControl/P_pitch/Sum'
 * '<S36>'  : 'RateControl/P_pitch/Sum Fdbk'
 * '<S37>'  : 'RateControl/P_pitch/Tracking Mode'
 * '<S38>'  : 'RateControl/P_pitch/Tracking Mode Sum'
 * '<S39>'  : 'RateControl/P_pitch/postSat Signal'
 * '<S40>'  : 'RateControl/P_pitch/preSat Signal'
 * '<S41>'  : 'RateControl/P_pitch/Anti-windup/Back Calculation'
 * '<S42>'  : 'RateControl/P_pitch/Anti-windup/Cont. Clamping Ideal'
 * '<S43>'  : 'RateControl/P_pitch/Anti-windup/Cont. Clamping Parallel'
 * '<S44>'  : 'RateControl/P_pitch/Anti-windup/Disabled'
 * '<S45>'  : 'RateControl/P_pitch/Anti-windup/Disc. Clamping Ideal'
 * '<S46>'  : 'RateControl/P_pitch/Anti-windup/Disc. Clamping Parallel'
 * '<S47>'  : 'RateControl/P_pitch/Anti-windup/Passthrough'
 * '<S48>'  : 'RateControl/P_pitch/D Gain/Disabled'
 * '<S49>'  : 'RateControl/P_pitch/D Gain/External Parameters'
 * '<S50>'  : 'RateControl/P_pitch/D Gain/Internal Parameters'
 * '<S51>'  : 'RateControl/P_pitch/Filter/Cont. Filter'
 * '<S52>'  : 'RateControl/P_pitch/Filter/Differentiator'
 * '<S53>'  : 'RateControl/P_pitch/Filter/Disabled'
 * '<S54>'  : 'RateControl/P_pitch/Filter/Disc. Backward Euler Filter'
 * '<S55>'  : 'RateControl/P_pitch/Filter/Disc. Forward Euler Filter'
 * '<S56>'  : 'RateControl/P_pitch/Filter/Disc. Trapezoidal Filter'
 * '<S57>'  : 'RateControl/P_pitch/Filter ICs/Disabled'
 * '<S58>'  : 'RateControl/P_pitch/Filter ICs/External IC'
 * '<S59>'  : 'RateControl/P_pitch/Filter ICs/Internal IC - Differentiator'
 * '<S60>'  : 'RateControl/P_pitch/Filter ICs/Internal IC - Filter'
 * '<S61>'  : 'RateControl/P_pitch/I Gain/Disabled'
 * '<S62>'  : 'RateControl/P_pitch/I Gain/External Parameters'
 * '<S63>'  : 'RateControl/P_pitch/I Gain/Internal Parameters'
 * '<S64>'  : 'RateControl/P_pitch/Ideal P Gain/External Parameters'
 * '<S65>'  : 'RateControl/P_pitch/Ideal P Gain/Internal Parameters'
 * '<S66>'  : 'RateControl/P_pitch/Ideal P Gain/Passthrough'
 * '<S67>'  : 'RateControl/P_pitch/Ideal P Gain Fdbk/Disabled'
 * '<S68>'  : 'RateControl/P_pitch/Ideal P Gain Fdbk/External Parameters'
 * '<S69>'  : 'RateControl/P_pitch/Ideal P Gain Fdbk/Internal Parameters'
 * '<S70>'  : 'RateControl/P_pitch/Ideal P Gain Fdbk/Passthrough'
 * '<S71>'  : 'RateControl/P_pitch/Integrator/Continuous'
 * '<S72>'  : 'RateControl/P_pitch/Integrator/Disabled'
 * '<S73>'  : 'RateControl/P_pitch/Integrator/Discrete'
 * '<S74>'  : 'RateControl/P_pitch/Integrator ICs/Disabled'
 * '<S75>'  : 'RateControl/P_pitch/Integrator ICs/External IC'
 * '<S76>'  : 'RateControl/P_pitch/Integrator ICs/Internal IC'
 * '<S77>'  : 'RateControl/P_pitch/N Copy/Disabled'
 * '<S78>'  : 'RateControl/P_pitch/N Copy/Disabled wSignal Specification'
 * '<S79>'  : 'RateControl/P_pitch/N Copy/External Parameters'
 * '<S80>'  : 'RateControl/P_pitch/N Copy/Internal Parameters'
 * '<S81>'  : 'RateControl/P_pitch/N Gain/Disabled'
 * '<S82>'  : 'RateControl/P_pitch/N Gain/External Parameters'
 * '<S83>'  : 'RateControl/P_pitch/N Gain/Internal Parameters'
 * '<S84>'  : 'RateControl/P_pitch/N Gain/Passthrough'
 * '<S85>'  : 'RateControl/P_pitch/P Copy/Disabled'
 * '<S86>'  : 'RateControl/P_pitch/P Copy/External Parameters Ideal'
 * '<S87>'  : 'RateControl/P_pitch/P Copy/Internal Parameters Ideal'
 * '<S88>'  : 'RateControl/P_pitch/Parallel P Gain/Disabled'
 * '<S89>'  : 'RateControl/P_pitch/Parallel P Gain/External Parameters'
 * '<S90>'  : 'RateControl/P_pitch/Parallel P Gain/Internal Parameters'
 * '<S91>'  : 'RateControl/P_pitch/Parallel P Gain/Passthrough'
 * '<S92>'  : 'RateControl/P_pitch/Reset Signal/Disabled'
 * '<S93>'  : 'RateControl/P_pitch/Reset Signal/External Reset'
 * '<S94>'  : 'RateControl/P_pitch/Saturation/Enabled'
 * '<S95>'  : 'RateControl/P_pitch/Saturation/Passthrough'
 * '<S96>'  : 'RateControl/P_pitch/Saturation Fdbk/Disabled'
 * '<S97>'  : 'RateControl/P_pitch/Saturation Fdbk/Enabled'
 * '<S98>'  : 'RateControl/P_pitch/Saturation Fdbk/Passthrough'
 * '<S99>'  : 'RateControl/P_pitch/Sum/Passthrough_I'
 * '<S100>' : 'RateControl/P_pitch/Sum/Passthrough_P'
 * '<S101>' : 'RateControl/P_pitch/Sum/Sum_PD'
 * '<S102>' : 'RateControl/P_pitch/Sum/Sum_PI'
 * '<S103>' : 'RateControl/P_pitch/Sum/Sum_PID'
 * '<S104>' : 'RateControl/P_pitch/Sum Fdbk/Disabled'
 * '<S105>' : 'RateControl/P_pitch/Sum Fdbk/Enabled'
 * '<S106>' : 'RateControl/P_pitch/Sum Fdbk/Passthrough'
 * '<S107>' : 'RateControl/P_pitch/Tracking Mode/Disabled'
 * '<S108>' : 'RateControl/P_pitch/Tracking Mode/Enabled'
 * '<S109>' : 'RateControl/P_pitch/Tracking Mode Sum/Passthrough'
 * '<S110>' : 'RateControl/P_pitch/Tracking Mode Sum/Tracking Mode'
 * '<S111>' : 'RateControl/P_pitch/postSat Signal/Feedback_Path'
 * '<S112>' : 'RateControl/P_pitch/postSat Signal/Forward_Path'
 * '<S113>' : 'RateControl/P_pitch/preSat Signal/Feedback_Path'
 * '<S114>' : 'RateControl/P_pitch/preSat Signal/Forward_Path'
 * '<S115>' : 'RateControl/P_roll/Anti-windup'
 * '<S116>' : 'RateControl/P_roll/D Gain'
 * '<S117>' : 'RateControl/P_roll/Filter'
 * '<S118>' : 'RateControl/P_roll/Filter ICs'
 * '<S119>' : 'RateControl/P_roll/I Gain'
 * '<S120>' : 'RateControl/P_roll/Ideal P Gain'
 * '<S121>' : 'RateControl/P_roll/Ideal P Gain Fdbk'
 * '<S122>' : 'RateControl/P_roll/Integrator'
 * '<S123>' : 'RateControl/P_roll/Integrator ICs'
 * '<S124>' : 'RateControl/P_roll/N Copy'
 * '<S125>' : 'RateControl/P_roll/N Gain'
 * '<S126>' : 'RateControl/P_roll/P Copy'
 * '<S127>' : 'RateControl/P_roll/Parallel P Gain'
 * '<S128>' : 'RateControl/P_roll/Reset Signal'
 * '<S129>' : 'RateControl/P_roll/Saturation'
 * '<S130>' : 'RateControl/P_roll/Saturation Fdbk'
 * '<S131>' : 'RateControl/P_roll/Sum'
 * '<S132>' : 'RateControl/P_roll/Sum Fdbk'
 * '<S133>' : 'RateControl/P_roll/Tracking Mode'
 * '<S134>' : 'RateControl/P_roll/Tracking Mode Sum'
 * '<S135>' : 'RateControl/P_roll/postSat Signal'
 * '<S136>' : 'RateControl/P_roll/preSat Signal'
 * '<S137>' : 'RateControl/P_roll/Anti-windup/Back Calculation'
 * '<S138>' : 'RateControl/P_roll/Anti-windup/Cont. Clamping Ideal'
 * '<S139>' : 'RateControl/P_roll/Anti-windup/Cont. Clamping Parallel'
 * '<S140>' : 'RateControl/P_roll/Anti-windup/Disabled'
 * '<S141>' : 'RateControl/P_roll/Anti-windup/Disc. Clamping Ideal'
 * '<S142>' : 'RateControl/P_roll/Anti-windup/Disc. Clamping Parallel'
 * '<S143>' : 'RateControl/P_roll/Anti-windup/Passthrough'
 * '<S144>' : 'RateControl/P_roll/D Gain/Disabled'
 * '<S145>' : 'RateControl/P_roll/D Gain/External Parameters'
 * '<S146>' : 'RateControl/P_roll/D Gain/Internal Parameters'
 * '<S147>' : 'RateControl/P_roll/Filter/Cont. Filter'
 * '<S148>' : 'RateControl/P_roll/Filter/Differentiator'
 * '<S149>' : 'RateControl/P_roll/Filter/Disabled'
 * '<S150>' : 'RateControl/P_roll/Filter/Disc. Backward Euler Filter'
 * '<S151>' : 'RateControl/P_roll/Filter/Disc. Forward Euler Filter'
 * '<S152>' : 'RateControl/P_roll/Filter/Disc. Trapezoidal Filter'
 * '<S153>' : 'RateControl/P_roll/Filter ICs/Disabled'
 * '<S154>' : 'RateControl/P_roll/Filter ICs/External IC'
 * '<S155>' : 'RateControl/P_roll/Filter ICs/Internal IC - Differentiator'
 * '<S156>' : 'RateControl/P_roll/Filter ICs/Internal IC - Filter'
 * '<S157>' : 'RateControl/P_roll/I Gain/Disabled'
 * '<S158>' : 'RateControl/P_roll/I Gain/External Parameters'
 * '<S159>' : 'RateControl/P_roll/I Gain/Internal Parameters'
 * '<S160>' : 'RateControl/P_roll/Ideal P Gain/External Parameters'
 * '<S161>' : 'RateControl/P_roll/Ideal P Gain/Internal Parameters'
 * '<S162>' : 'RateControl/P_roll/Ideal P Gain/Passthrough'
 * '<S163>' : 'RateControl/P_roll/Ideal P Gain Fdbk/Disabled'
 * '<S164>' : 'RateControl/P_roll/Ideal P Gain Fdbk/External Parameters'
 * '<S165>' : 'RateControl/P_roll/Ideal P Gain Fdbk/Internal Parameters'
 * '<S166>' : 'RateControl/P_roll/Ideal P Gain Fdbk/Passthrough'
 * '<S167>' : 'RateControl/P_roll/Integrator/Continuous'
 * '<S168>' : 'RateControl/P_roll/Integrator/Disabled'
 * '<S169>' : 'RateControl/P_roll/Integrator/Discrete'
 * '<S170>' : 'RateControl/P_roll/Integrator ICs/Disabled'
 * '<S171>' : 'RateControl/P_roll/Integrator ICs/External IC'
 * '<S172>' : 'RateControl/P_roll/Integrator ICs/Internal IC'
 * '<S173>' : 'RateControl/P_roll/N Copy/Disabled'
 * '<S174>' : 'RateControl/P_roll/N Copy/Disabled wSignal Specification'
 * '<S175>' : 'RateControl/P_roll/N Copy/External Parameters'
 * '<S176>' : 'RateControl/P_roll/N Copy/Internal Parameters'
 * '<S177>' : 'RateControl/P_roll/N Gain/Disabled'
 * '<S178>' : 'RateControl/P_roll/N Gain/External Parameters'
 * '<S179>' : 'RateControl/P_roll/N Gain/Internal Parameters'
 * '<S180>' : 'RateControl/P_roll/N Gain/Passthrough'
 * '<S181>' : 'RateControl/P_roll/P Copy/Disabled'
 * '<S182>' : 'RateControl/P_roll/P Copy/External Parameters Ideal'
 * '<S183>' : 'RateControl/P_roll/P Copy/Internal Parameters Ideal'
 * '<S184>' : 'RateControl/P_roll/Parallel P Gain/Disabled'
 * '<S185>' : 'RateControl/P_roll/Parallel P Gain/External Parameters'
 * '<S186>' : 'RateControl/P_roll/Parallel P Gain/Internal Parameters'
 * '<S187>' : 'RateControl/P_roll/Parallel P Gain/Passthrough'
 * '<S188>' : 'RateControl/P_roll/Reset Signal/Disabled'
 * '<S189>' : 'RateControl/P_roll/Reset Signal/External Reset'
 * '<S190>' : 'RateControl/P_roll/Saturation/Enabled'
 * '<S191>' : 'RateControl/P_roll/Saturation/Passthrough'
 * '<S192>' : 'RateControl/P_roll/Saturation Fdbk/Disabled'
 * '<S193>' : 'RateControl/P_roll/Saturation Fdbk/Enabled'
 * '<S194>' : 'RateControl/P_roll/Saturation Fdbk/Passthrough'
 * '<S195>' : 'RateControl/P_roll/Sum/Passthrough_I'
 * '<S196>' : 'RateControl/P_roll/Sum/Passthrough_P'
 * '<S197>' : 'RateControl/P_roll/Sum/Sum_PD'
 * '<S198>' : 'RateControl/P_roll/Sum/Sum_PI'
 * '<S199>' : 'RateControl/P_roll/Sum/Sum_PID'
 * '<S200>' : 'RateControl/P_roll/Sum Fdbk/Disabled'
 * '<S201>' : 'RateControl/P_roll/Sum Fdbk/Enabled'
 * '<S202>' : 'RateControl/P_roll/Sum Fdbk/Passthrough'
 * '<S203>' : 'RateControl/P_roll/Tracking Mode/Disabled'
 * '<S204>' : 'RateControl/P_roll/Tracking Mode/Enabled'
 * '<S205>' : 'RateControl/P_roll/Tracking Mode Sum/Passthrough'
 * '<S206>' : 'RateControl/P_roll/Tracking Mode Sum/Tracking Mode'
 * '<S207>' : 'RateControl/P_roll/postSat Signal/Feedback_Path'
 * '<S208>' : 'RateControl/P_roll/postSat Signal/Forward_Path'
 * '<S209>' : 'RateControl/P_roll/preSat Signal/Feedback_Path'
 * '<S210>' : 'RateControl/P_roll/preSat Signal/Forward_Path'
 * '<S211>' : 'RateControl/P_yaw/Anti-windup'
 * '<S212>' : 'RateControl/P_yaw/D Gain'
 * '<S213>' : 'RateControl/P_yaw/Filter'
 * '<S214>' : 'RateControl/P_yaw/Filter ICs'
 * '<S215>' : 'RateControl/P_yaw/I Gain'
 * '<S216>' : 'RateControl/P_yaw/Ideal P Gain'
 * '<S217>' : 'RateControl/P_yaw/Ideal P Gain Fdbk'
 * '<S218>' : 'RateControl/P_yaw/Integrator'
 * '<S219>' : 'RateControl/P_yaw/Integrator ICs'
 * '<S220>' : 'RateControl/P_yaw/N Copy'
 * '<S221>' : 'RateControl/P_yaw/N Gain'
 * '<S222>' : 'RateControl/P_yaw/P Copy'
 * '<S223>' : 'RateControl/P_yaw/Parallel P Gain'
 * '<S224>' : 'RateControl/P_yaw/Reset Signal'
 * '<S225>' : 'RateControl/P_yaw/Saturation'
 * '<S226>' : 'RateControl/P_yaw/Saturation Fdbk'
 * '<S227>' : 'RateControl/P_yaw/Sum'
 * '<S228>' : 'RateControl/P_yaw/Sum Fdbk'
 * '<S229>' : 'RateControl/P_yaw/Tracking Mode'
 * '<S230>' : 'RateControl/P_yaw/Tracking Mode Sum'
 * '<S231>' : 'RateControl/P_yaw/postSat Signal'
 * '<S232>' : 'RateControl/P_yaw/preSat Signal'
 * '<S233>' : 'RateControl/P_yaw/Anti-windup/Back Calculation'
 * '<S234>' : 'RateControl/P_yaw/Anti-windup/Cont. Clamping Ideal'
 * '<S235>' : 'RateControl/P_yaw/Anti-windup/Cont. Clamping Parallel'
 * '<S236>' : 'RateControl/P_yaw/Anti-windup/Disabled'
 * '<S237>' : 'RateControl/P_yaw/Anti-windup/Disc. Clamping Ideal'
 * '<S238>' : 'RateControl/P_yaw/Anti-windup/Disc. Clamping Parallel'
 * '<S239>' : 'RateControl/P_yaw/Anti-windup/Passthrough'
 * '<S240>' : 'RateControl/P_yaw/D Gain/Disabled'
 * '<S241>' : 'RateControl/P_yaw/D Gain/External Parameters'
 * '<S242>' : 'RateControl/P_yaw/D Gain/Internal Parameters'
 * '<S243>' : 'RateControl/P_yaw/Filter/Cont. Filter'
 * '<S244>' : 'RateControl/P_yaw/Filter/Differentiator'
 * '<S245>' : 'RateControl/P_yaw/Filter/Disabled'
 * '<S246>' : 'RateControl/P_yaw/Filter/Disc. Backward Euler Filter'
 * '<S247>' : 'RateControl/P_yaw/Filter/Disc. Forward Euler Filter'
 * '<S248>' : 'RateControl/P_yaw/Filter/Disc. Trapezoidal Filter'
 * '<S249>' : 'RateControl/P_yaw/Filter ICs/Disabled'
 * '<S250>' : 'RateControl/P_yaw/Filter ICs/External IC'
 * '<S251>' : 'RateControl/P_yaw/Filter ICs/Internal IC - Differentiator'
 * '<S252>' : 'RateControl/P_yaw/Filter ICs/Internal IC - Filter'
 * '<S253>' : 'RateControl/P_yaw/I Gain/Disabled'
 * '<S254>' : 'RateControl/P_yaw/I Gain/External Parameters'
 * '<S255>' : 'RateControl/P_yaw/I Gain/Internal Parameters'
 * '<S256>' : 'RateControl/P_yaw/Ideal P Gain/External Parameters'
 * '<S257>' : 'RateControl/P_yaw/Ideal P Gain/Internal Parameters'
 * '<S258>' : 'RateControl/P_yaw/Ideal P Gain/Passthrough'
 * '<S259>' : 'RateControl/P_yaw/Ideal P Gain Fdbk/Disabled'
 * '<S260>' : 'RateControl/P_yaw/Ideal P Gain Fdbk/External Parameters'
 * '<S261>' : 'RateControl/P_yaw/Ideal P Gain Fdbk/Internal Parameters'
 * '<S262>' : 'RateControl/P_yaw/Ideal P Gain Fdbk/Passthrough'
 * '<S263>' : 'RateControl/P_yaw/Integrator/Continuous'
 * '<S264>' : 'RateControl/P_yaw/Integrator/Disabled'
 * '<S265>' : 'RateControl/P_yaw/Integrator/Discrete'
 * '<S266>' : 'RateControl/P_yaw/Integrator ICs/Disabled'
 * '<S267>' : 'RateControl/P_yaw/Integrator ICs/External IC'
 * '<S268>' : 'RateControl/P_yaw/Integrator ICs/Internal IC'
 * '<S269>' : 'RateControl/P_yaw/N Copy/Disabled'
 * '<S270>' : 'RateControl/P_yaw/N Copy/Disabled wSignal Specification'
 * '<S271>' : 'RateControl/P_yaw/N Copy/External Parameters'
 * '<S272>' : 'RateControl/P_yaw/N Copy/Internal Parameters'
 * '<S273>' : 'RateControl/P_yaw/N Gain/Disabled'
 * '<S274>' : 'RateControl/P_yaw/N Gain/External Parameters'
 * '<S275>' : 'RateControl/P_yaw/N Gain/Internal Parameters'
 * '<S276>' : 'RateControl/P_yaw/N Gain/Passthrough'
 * '<S277>' : 'RateControl/P_yaw/P Copy/Disabled'
 * '<S278>' : 'RateControl/P_yaw/P Copy/External Parameters Ideal'
 * '<S279>' : 'RateControl/P_yaw/P Copy/Internal Parameters Ideal'
 * '<S280>' : 'RateControl/P_yaw/Parallel P Gain/Disabled'
 * '<S281>' : 'RateControl/P_yaw/Parallel P Gain/External Parameters'
 * '<S282>' : 'RateControl/P_yaw/Parallel P Gain/Internal Parameters'
 * '<S283>' : 'RateControl/P_yaw/Parallel P Gain/Passthrough'
 * '<S284>' : 'RateControl/P_yaw/Reset Signal/Disabled'
 * '<S285>' : 'RateControl/P_yaw/Reset Signal/External Reset'
 * '<S286>' : 'RateControl/P_yaw/Saturation/Enabled'
 * '<S287>' : 'RateControl/P_yaw/Saturation/Passthrough'
 * '<S288>' : 'RateControl/P_yaw/Saturation Fdbk/Disabled'
 * '<S289>' : 'RateControl/P_yaw/Saturation Fdbk/Enabled'
 * '<S290>' : 'RateControl/P_yaw/Saturation Fdbk/Passthrough'
 * '<S291>' : 'RateControl/P_yaw/Sum/Passthrough_I'
 * '<S292>' : 'RateControl/P_yaw/Sum/Passthrough_P'
 * '<S293>' : 'RateControl/P_yaw/Sum/Sum_PD'
 * '<S294>' : 'RateControl/P_yaw/Sum/Sum_PI'
 * '<S295>' : 'RateControl/P_yaw/Sum/Sum_PID'
 * '<S296>' : 'RateControl/P_yaw/Sum Fdbk/Disabled'
 * '<S297>' : 'RateControl/P_yaw/Sum Fdbk/Enabled'
 * '<S298>' : 'RateControl/P_yaw/Sum Fdbk/Passthrough'
 * '<S299>' : 'RateControl/P_yaw/Tracking Mode/Disabled'
 * '<S300>' : 'RateControl/P_yaw/Tracking Mode/Enabled'
 * '<S301>' : 'RateControl/P_yaw/Tracking Mode Sum/Passthrough'
 * '<S302>' : 'RateControl/P_yaw/Tracking Mode Sum/Tracking Mode'
 * '<S303>' : 'RateControl/P_yaw/postSat Signal/Feedback_Path'
 * '<S304>' : 'RateControl/P_yaw/postSat Signal/Forward_Path'
 * '<S305>' : 'RateControl/P_yaw/preSat Signal/Feedback_Path'
 * '<S306>' : 'RateControl/P_yaw/preSat Signal/Forward_Path'
 */
#endif                                 /* RTW_HEADER_RateControl_h_ */
