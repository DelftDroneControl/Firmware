/*
 * PosDirectControl.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "PosDirectControl".
 *
 * Model version              : 1.247
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C++ source code generated on : Fri Dec 28 16:51:21 2018
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
#include <math.h>
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
  real_T DiscreteStateSpace1_DSTATE[6];/* '<Root>/Discrete State-Space1' */
  real_T UD_DSTATE[6];                 /* '<S5>/UD' */
  real_T DiscreteStateSpace_DSTATE[3]; /* '<Root>/Discrete State-Space' */
  real_T UD_DSTATE_b[3];               /* '<S4>/UD' */
  real_T UD_DSTATE_br[3];              /* '<S3>/UD' */
  real_T UD_DSTATE_g;                  /* '<S2>/UD' */
  real_T DiscreteStateSpace2_DSTATE;   /* '<Root>/Discrete State-Space2' */
  real_T UD_DSTATE_o;                  /* '<S1>/UD' */
  real_T DiscreteStateSpace3_DSTATE[4];/* '<Root>/Discrete State-Space3' */
  real_T DiscreteStateSpace4_DSTATE[3];/* '<Root>/Discrete State-Space4' */
  real_T ActuatorDynamics_DSTATE[4];   /* '<Root>/ActuatorDynamics' */
  real_T Memory_PreviousInput[4];      /* '<Root>/Memory' */
  real_T psi_last;                     /* '<Root>/unwrap2pi' */
  real_T N;                            /* '<Root>/unwrap2pi' */
  boolean_T psi_last_not_empty;        /* '<Root>/unwrap2pi' */
} DW_PosDirectControl_T;

/* Invariant block signals (default storage) */
typedef const struct tag_ConstB_PosDirectControl_T {
  real_T Sum[3];                       /* '<S15>/Sum' */
  real_T Normalization[3];             /* '<S15>/Normalization' */
} ConstB_PosDirectControl_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real32_T vel[3];                     /* '<Root>/vel' */
  real32_T pos[3];                     /* '<Root>/pos' */
  real32_T rates[3];                   /* '<Root>/rates' */
  real32_T att[3];                     /* '<Root>/att' */
  real32_T w_rotor_meas[4];            /* '<Root>/w_rotor_meas' */
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

extern const ConstB_PosDirectControl_T PosDirectControl_ConstB;/* constant block i/o */

/*
 * Exported Global Parameters
 *
 * Note: Exported global parameters are tunable parameters with an exported
 * global storage class designation.  Code generation will declare the memory for
 * these parameters and exports their symbols.
 *
 */
extern PosDirectControlParamsType PosDirectControlParams;/* Variable: PosDirectControlParams
                                                          * Referenced by: '<Root>/indi'
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

  /* private member function(s) for subsystem '<Root>'*/
  void PosDirectControl_mldivide(const real_T A[9], const real_T B[3], real_T Y
    [3]);
  real_T PosDirectControl_xnrm2(int32_T n, const real_T x[16], int32_T ix0);
  real_T PosDirectControl_xnrm2_g(int32_T n, const real_T x[4], int32_T ix0);
  void PosDirectControl_xaxpy_lx(int32_T n, real_T a, const real_T x[4], int32_T
    ix0, real_T y[16], int32_T iy0);
  void PosDirectControl_xaxpy_l(int32_T n, real_T a, const real_T x[16], int32_T
    ix0, real_T y[4], int32_T iy0);
  real_T PosDirectControl_xdotc(int32_T n, const real_T x[16], int32_T ix0,
    const real_T y[16], int32_T iy0);
  void PosDirectControl_xaxpy(int32_T n, real_T a, int32_T ix0, real_T y[16],
    int32_T iy0);
  void PosDirectControl_xscal(real_T a, real_T x[16], int32_T ix0);
  void PosDirectControl_xswap(real_T x[16], int32_T ix0, int32_T iy0);
  void PosDirectControl_xrotg(real_T *a, real_T *b, real_T *c, real_T *s);
  void PosDirectControl_xrot(real_T x[16], int32_T ix0, int32_T iy0, real_T c,
    real_T s);
  void PosDirectControl_svd(const real_T A[16], real_T U[16], real_T s[4],
    real_T V[16]);
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
 * '<S1>'   : 'PosDirectControl/Discrete Derivative1'
 * '<S2>'   : 'PosDirectControl/Discrete Derivative2'
 * '<S3>'   : 'PosDirectControl/Discrete Derivative3'
 * '<S4>'   : 'PosDirectControl/Discrete Derivative4'
 * '<S5>'   : 'PosDirectControl/Discrete Derivative5'
 * '<S6>'   : 'PosDirectControl/Discrete Derivative6'
 * '<S7>'   : 'PosDirectControl/Discrete Derivative7'
 * '<S8>'   : 'PosDirectControl/MATLAB Function'
 * '<S9>'   : 'PosDirectControl/MATLAB Function1'
 * '<S10>'  : 'PosDirectControl/MATLAB Function2'
 * '<S11>'  : 'PosDirectControl/PD_x'
 * '<S12>'  : 'PosDirectControl/PD_y'
 * '<S13>'  : 'PosDirectControl/PD_z'
 * '<S14>'  : 'PosDirectControl/indi'
 * '<S15>'  : 'PosDirectControl/n_des from accel_sp'
 * '<S16>'  : 'PosDirectControl/unwrap2pi'
 * '<S17>'  : 'PosDirectControl/PD_x/Anti-windup'
 * '<S18>'  : 'PosDirectControl/PD_x/D Gain'
 * '<S19>'  : 'PosDirectControl/PD_x/Filter'
 * '<S20>'  : 'PosDirectControl/PD_x/Filter ICs'
 * '<S21>'  : 'PosDirectControl/PD_x/I Gain'
 * '<S22>'  : 'PosDirectControl/PD_x/Ideal P Gain'
 * '<S23>'  : 'PosDirectControl/PD_x/Ideal P Gain Fdbk'
 * '<S24>'  : 'PosDirectControl/PD_x/Integrator'
 * '<S25>'  : 'PosDirectControl/PD_x/Integrator ICs'
 * '<S26>'  : 'PosDirectControl/PD_x/N Copy'
 * '<S27>'  : 'PosDirectControl/PD_x/N Gain'
 * '<S28>'  : 'PosDirectControl/PD_x/P Copy'
 * '<S29>'  : 'PosDirectControl/PD_x/Parallel P Gain'
 * '<S30>'  : 'PosDirectControl/PD_x/Reset Signal'
 * '<S31>'  : 'PosDirectControl/PD_x/Saturation'
 * '<S32>'  : 'PosDirectControl/PD_x/Saturation Fdbk'
 * '<S33>'  : 'PosDirectControl/PD_x/Sum'
 * '<S34>'  : 'PosDirectControl/PD_x/Sum Fdbk'
 * '<S35>'  : 'PosDirectControl/PD_x/Tracking Mode'
 * '<S36>'  : 'PosDirectControl/PD_x/Tracking Mode Sum'
 * '<S37>'  : 'PosDirectControl/PD_x/postSat Signal'
 * '<S38>'  : 'PosDirectControl/PD_x/preSat Signal'
 * '<S39>'  : 'PosDirectControl/PD_x/Anti-windup/Back Calculation'
 * '<S40>'  : 'PosDirectControl/PD_x/Anti-windup/Cont. Clamping Ideal'
 * '<S41>'  : 'PosDirectControl/PD_x/Anti-windup/Cont. Clamping Parallel'
 * '<S42>'  : 'PosDirectControl/PD_x/Anti-windup/Disabled'
 * '<S43>'  : 'PosDirectControl/PD_x/Anti-windup/Disc. Clamping Ideal'
 * '<S44>'  : 'PosDirectControl/PD_x/Anti-windup/Disc. Clamping Parallel'
 * '<S45>'  : 'PosDirectControl/PD_x/Anti-windup/Passthrough'
 * '<S46>'  : 'PosDirectControl/PD_x/D Gain/Disabled'
 * '<S47>'  : 'PosDirectControl/PD_x/D Gain/External Parameters'
 * '<S48>'  : 'PosDirectControl/PD_x/D Gain/Internal Parameters'
 * '<S49>'  : 'PosDirectControl/PD_x/Filter/Cont. Filter'
 * '<S50>'  : 'PosDirectControl/PD_x/Filter/Differentiator'
 * '<S51>'  : 'PosDirectControl/PD_x/Filter/Disabled'
 * '<S52>'  : 'PosDirectControl/PD_x/Filter/Disc. Backward Euler Filter'
 * '<S53>'  : 'PosDirectControl/PD_x/Filter/Disc. Forward Euler Filter'
 * '<S54>'  : 'PosDirectControl/PD_x/Filter/Disc. Trapezoidal Filter'
 * '<S55>'  : 'PosDirectControl/PD_x/Filter ICs/Disabled'
 * '<S56>'  : 'PosDirectControl/PD_x/Filter ICs/External IC'
 * '<S57>'  : 'PosDirectControl/PD_x/Filter ICs/Internal IC - Differentiator'
 * '<S58>'  : 'PosDirectControl/PD_x/Filter ICs/Internal IC - Filter'
 * '<S59>'  : 'PosDirectControl/PD_x/I Gain/Disabled'
 * '<S60>'  : 'PosDirectControl/PD_x/I Gain/External Parameters'
 * '<S61>'  : 'PosDirectControl/PD_x/I Gain/Internal Parameters'
 * '<S62>'  : 'PosDirectControl/PD_x/Ideal P Gain/External Parameters'
 * '<S63>'  : 'PosDirectControl/PD_x/Ideal P Gain/Internal Parameters'
 * '<S64>'  : 'PosDirectControl/PD_x/Ideal P Gain/Passthrough'
 * '<S65>'  : 'PosDirectControl/PD_x/Ideal P Gain Fdbk/Disabled'
 * '<S66>'  : 'PosDirectControl/PD_x/Ideal P Gain Fdbk/External Parameters'
 * '<S67>'  : 'PosDirectControl/PD_x/Ideal P Gain Fdbk/Internal Parameters'
 * '<S68>'  : 'PosDirectControl/PD_x/Ideal P Gain Fdbk/Passthrough'
 * '<S69>'  : 'PosDirectControl/PD_x/Integrator/Continuous'
 * '<S70>'  : 'PosDirectControl/PD_x/Integrator/Disabled'
 * '<S71>'  : 'PosDirectControl/PD_x/Integrator/Discrete'
 * '<S72>'  : 'PosDirectControl/PD_x/Integrator ICs/Disabled'
 * '<S73>'  : 'PosDirectControl/PD_x/Integrator ICs/External IC'
 * '<S74>'  : 'PosDirectControl/PD_x/Integrator ICs/Internal IC'
 * '<S75>'  : 'PosDirectControl/PD_x/N Copy/Disabled'
 * '<S76>'  : 'PosDirectControl/PD_x/N Copy/Disabled wSignal Specification'
 * '<S77>'  : 'PosDirectControl/PD_x/N Copy/External Parameters'
 * '<S78>'  : 'PosDirectControl/PD_x/N Copy/Internal Parameters'
 * '<S79>'  : 'PosDirectControl/PD_x/N Gain/Disabled'
 * '<S80>'  : 'PosDirectControl/PD_x/N Gain/External Parameters'
 * '<S81>'  : 'PosDirectControl/PD_x/N Gain/Internal Parameters'
 * '<S82>'  : 'PosDirectControl/PD_x/N Gain/Passthrough'
 * '<S83>'  : 'PosDirectControl/PD_x/P Copy/Disabled'
 * '<S84>'  : 'PosDirectControl/PD_x/P Copy/External Parameters Ideal'
 * '<S85>'  : 'PosDirectControl/PD_x/P Copy/Internal Parameters Ideal'
 * '<S86>'  : 'PosDirectControl/PD_x/Parallel P Gain/Disabled'
 * '<S87>'  : 'PosDirectControl/PD_x/Parallel P Gain/External Parameters'
 * '<S88>'  : 'PosDirectControl/PD_x/Parallel P Gain/Internal Parameters'
 * '<S89>'  : 'PosDirectControl/PD_x/Parallel P Gain/Passthrough'
 * '<S90>'  : 'PosDirectControl/PD_x/Reset Signal/Disabled'
 * '<S91>'  : 'PosDirectControl/PD_x/Reset Signal/External Reset'
 * '<S92>'  : 'PosDirectControl/PD_x/Saturation/Enabled'
 * '<S93>'  : 'PosDirectControl/PD_x/Saturation/Passthrough'
 * '<S94>'  : 'PosDirectControl/PD_x/Saturation Fdbk/Disabled'
 * '<S95>'  : 'PosDirectControl/PD_x/Saturation Fdbk/Enabled'
 * '<S96>'  : 'PosDirectControl/PD_x/Saturation Fdbk/Passthrough'
 * '<S97>'  : 'PosDirectControl/PD_x/Sum/Passthrough_I'
 * '<S98>'  : 'PosDirectControl/PD_x/Sum/Passthrough_P'
 * '<S99>'  : 'PosDirectControl/PD_x/Sum/Sum_PD'
 * '<S100>' : 'PosDirectControl/PD_x/Sum/Sum_PI'
 * '<S101>' : 'PosDirectControl/PD_x/Sum/Sum_PID'
 * '<S102>' : 'PosDirectControl/PD_x/Sum Fdbk/Disabled'
 * '<S103>' : 'PosDirectControl/PD_x/Sum Fdbk/Enabled'
 * '<S104>' : 'PosDirectControl/PD_x/Sum Fdbk/Passthrough'
 * '<S105>' : 'PosDirectControl/PD_x/Tracking Mode/Disabled'
 * '<S106>' : 'PosDirectControl/PD_x/Tracking Mode/Enabled'
 * '<S107>' : 'PosDirectControl/PD_x/Tracking Mode Sum/Passthrough'
 * '<S108>' : 'PosDirectControl/PD_x/Tracking Mode Sum/Tracking Mode'
 * '<S109>' : 'PosDirectControl/PD_x/postSat Signal/Feedback_Path'
 * '<S110>' : 'PosDirectControl/PD_x/postSat Signal/Forward_Path'
 * '<S111>' : 'PosDirectControl/PD_x/preSat Signal/Feedback_Path'
 * '<S112>' : 'PosDirectControl/PD_x/preSat Signal/Forward_Path'
 * '<S113>' : 'PosDirectControl/PD_y/Anti-windup'
 * '<S114>' : 'PosDirectControl/PD_y/D Gain'
 * '<S115>' : 'PosDirectControl/PD_y/Filter'
 * '<S116>' : 'PosDirectControl/PD_y/Filter ICs'
 * '<S117>' : 'PosDirectControl/PD_y/I Gain'
 * '<S118>' : 'PosDirectControl/PD_y/Ideal P Gain'
 * '<S119>' : 'PosDirectControl/PD_y/Ideal P Gain Fdbk'
 * '<S120>' : 'PosDirectControl/PD_y/Integrator'
 * '<S121>' : 'PosDirectControl/PD_y/Integrator ICs'
 * '<S122>' : 'PosDirectControl/PD_y/N Copy'
 * '<S123>' : 'PosDirectControl/PD_y/N Gain'
 * '<S124>' : 'PosDirectControl/PD_y/P Copy'
 * '<S125>' : 'PosDirectControl/PD_y/Parallel P Gain'
 * '<S126>' : 'PosDirectControl/PD_y/Reset Signal'
 * '<S127>' : 'PosDirectControl/PD_y/Saturation'
 * '<S128>' : 'PosDirectControl/PD_y/Saturation Fdbk'
 * '<S129>' : 'PosDirectControl/PD_y/Sum'
 * '<S130>' : 'PosDirectControl/PD_y/Sum Fdbk'
 * '<S131>' : 'PosDirectControl/PD_y/Tracking Mode'
 * '<S132>' : 'PosDirectControl/PD_y/Tracking Mode Sum'
 * '<S133>' : 'PosDirectControl/PD_y/postSat Signal'
 * '<S134>' : 'PosDirectControl/PD_y/preSat Signal'
 * '<S135>' : 'PosDirectControl/PD_y/Anti-windup/Back Calculation'
 * '<S136>' : 'PosDirectControl/PD_y/Anti-windup/Cont. Clamping Ideal'
 * '<S137>' : 'PosDirectControl/PD_y/Anti-windup/Cont. Clamping Parallel'
 * '<S138>' : 'PosDirectControl/PD_y/Anti-windup/Disabled'
 * '<S139>' : 'PosDirectControl/PD_y/Anti-windup/Disc. Clamping Ideal'
 * '<S140>' : 'PosDirectControl/PD_y/Anti-windup/Disc. Clamping Parallel'
 * '<S141>' : 'PosDirectControl/PD_y/Anti-windup/Passthrough'
 * '<S142>' : 'PosDirectControl/PD_y/D Gain/Disabled'
 * '<S143>' : 'PosDirectControl/PD_y/D Gain/External Parameters'
 * '<S144>' : 'PosDirectControl/PD_y/D Gain/Internal Parameters'
 * '<S145>' : 'PosDirectControl/PD_y/Filter/Cont. Filter'
 * '<S146>' : 'PosDirectControl/PD_y/Filter/Differentiator'
 * '<S147>' : 'PosDirectControl/PD_y/Filter/Disabled'
 * '<S148>' : 'PosDirectControl/PD_y/Filter/Disc. Backward Euler Filter'
 * '<S149>' : 'PosDirectControl/PD_y/Filter/Disc. Forward Euler Filter'
 * '<S150>' : 'PosDirectControl/PD_y/Filter/Disc. Trapezoidal Filter'
 * '<S151>' : 'PosDirectControl/PD_y/Filter ICs/Disabled'
 * '<S152>' : 'PosDirectControl/PD_y/Filter ICs/External IC'
 * '<S153>' : 'PosDirectControl/PD_y/Filter ICs/Internal IC - Differentiator'
 * '<S154>' : 'PosDirectControl/PD_y/Filter ICs/Internal IC - Filter'
 * '<S155>' : 'PosDirectControl/PD_y/I Gain/Disabled'
 * '<S156>' : 'PosDirectControl/PD_y/I Gain/External Parameters'
 * '<S157>' : 'PosDirectControl/PD_y/I Gain/Internal Parameters'
 * '<S158>' : 'PosDirectControl/PD_y/Ideal P Gain/External Parameters'
 * '<S159>' : 'PosDirectControl/PD_y/Ideal P Gain/Internal Parameters'
 * '<S160>' : 'PosDirectControl/PD_y/Ideal P Gain/Passthrough'
 * '<S161>' : 'PosDirectControl/PD_y/Ideal P Gain Fdbk/Disabled'
 * '<S162>' : 'PosDirectControl/PD_y/Ideal P Gain Fdbk/External Parameters'
 * '<S163>' : 'PosDirectControl/PD_y/Ideal P Gain Fdbk/Internal Parameters'
 * '<S164>' : 'PosDirectControl/PD_y/Ideal P Gain Fdbk/Passthrough'
 * '<S165>' : 'PosDirectControl/PD_y/Integrator/Continuous'
 * '<S166>' : 'PosDirectControl/PD_y/Integrator/Disabled'
 * '<S167>' : 'PosDirectControl/PD_y/Integrator/Discrete'
 * '<S168>' : 'PosDirectControl/PD_y/Integrator ICs/Disabled'
 * '<S169>' : 'PosDirectControl/PD_y/Integrator ICs/External IC'
 * '<S170>' : 'PosDirectControl/PD_y/Integrator ICs/Internal IC'
 * '<S171>' : 'PosDirectControl/PD_y/N Copy/Disabled'
 * '<S172>' : 'PosDirectControl/PD_y/N Copy/Disabled wSignal Specification'
 * '<S173>' : 'PosDirectControl/PD_y/N Copy/External Parameters'
 * '<S174>' : 'PosDirectControl/PD_y/N Copy/Internal Parameters'
 * '<S175>' : 'PosDirectControl/PD_y/N Gain/Disabled'
 * '<S176>' : 'PosDirectControl/PD_y/N Gain/External Parameters'
 * '<S177>' : 'PosDirectControl/PD_y/N Gain/Internal Parameters'
 * '<S178>' : 'PosDirectControl/PD_y/N Gain/Passthrough'
 * '<S179>' : 'PosDirectControl/PD_y/P Copy/Disabled'
 * '<S180>' : 'PosDirectControl/PD_y/P Copy/External Parameters Ideal'
 * '<S181>' : 'PosDirectControl/PD_y/P Copy/Internal Parameters Ideal'
 * '<S182>' : 'PosDirectControl/PD_y/Parallel P Gain/Disabled'
 * '<S183>' : 'PosDirectControl/PD_y/Parallel P Gain/External Parameters'
 * '<S184>' : 'PosDirectControl/PD_y/Parallel P Gain/Internal Parameters'
 * '<S185>' : 'PosDirectControl/PD_y/Parallel P Gain/Passthrough'
 * '<S186>' : 'PosDirectControl/PD_y/Reset Signal/Disabled'
 * '<S187>' : 'PosDirectControl/PD_y/Reset Signal/External Reset'
 * '<S188>' : 'PosDirectControl/PD_y/Saturation/Enabled'
 * '<S189>' : 'PosDirectControl/PD_y/Saturation/Passthrough'
 * '<S190>' : 'PosDirectControl/PD_y/Saturation Fdbk/Disabled'
 * '<S191>' : 'PosDirectControl/PD_y/Saturation Fdbk/Enabled'
 * '<S192>' : 'PosDirectControl/PD_y/Saturation Fdbk/Passthrough'
 * '<S193>' : 'PosDirectControl/PD_y/Sum/Passthrough_I'
 * '<S194>' : 'PosDirectControl/PD_y/Sum/Passthrough_P'
 * '<S195>' : 'PosDirectControl/PD_y/Sum/Sum_PD'
 * '<S196>' : 'PosDirectControl/PD_y/Sum/Sum_PI'
 * '<S197>' : 'PosDirectControl/PD_y/Sum/Sum_PID'
 * '<S198>' : 'PosDirectControl/PD_y/Sum Fdbk/Disabled'
 * '<S199>' : 'PosDirectControl/PD_y/Sum Fdbk/Enabled'
 * '<S200>' : 'PosDirectControl/PD_y/Sum Fdbk/Passthrough'
 * '<S201>' : 'PosDirectControl/PD_y/Tracking Mode/Disabled'
 * '<S202>' : 'PosDirectControl/PD_y/Tracking Mode/Enabled'
 * '<S203>' : 'PosDirectControl/PD_y/Tracking Mode Sum/Passthrough'
 * '<S204>' : 'PosDirectControl/PD_y/Tracking Mode Sum/Tracking Mode'
 * '<S205>' : 'PosDirectControl/PD_y/postSat Signal/Feedback_Path'
 * '<S206>' : 'PosDirectControl/PD_y/postSat Signal/Forward_Path'
 * '<S207>' : 'PosDirectControl/PD_y/preSat Signal/Feedback_Path'
 * '<S208>' : 'PosDirectControl/PD_y/preSat Signal/Forward_Path'
 * '<S209>' : 'PosDirectControl/PD_z/Anti-windup'
 * '<S210>' : 'PosDirectControl/PD_z/D Gain'
 * '<S211>' : 'PosDirectControl/PD_z/Filter'
 * '<S212>' : 'PosDirectControl/PD_z/Filter ICs'
 * '<S213>' : 'PosDirectControl/PD_z/I Gain'
 * '<S214>' : 'PosDirectControl/PD_z/Ideal P Gain'
 * '<S215>' : 'PosDirectControl/PD_z/Ideal P Gain Fdbk'
 * '<S216>' : 'PosDirectControl/PD_z/Integrator'
 * '<S217>' : 'PosDirectControl/PD_z/Integrator ICs'
 * '<S218>' : 'PosDirectControl/PD_z/N Copy'
 * '<S219>' : 'PosDirectControl/PD_z/N Gain'
 * '<S220>' : 'PosDirectControl/PD_z/P Copy'
 * '<S221>' : 'PosDirectControl/PD_z/Parallel P Gain'
 * '<S222>' : 'PosDirectControl/PD_z/Reset Signal'
 * '<S223>' : 'PosDirectControl/PD_z/Saturation'
 * '<S224>' : 'PosDirectControl/PD_z/Saturation Fdbk'
 * '<S225>' : 'PosDirectControl/PD_z/Sum'
 * '<S226>' : 'PosDirectControl/PD_z/Sum Fdbk'
 * '<S227>' : 'PosDirectControl/PD_z/Tracking Mode'
 * '<S228>' : 'PosDirectControl/PD_z/Tracking Mode Sum'
 * '<S229>' : 'PosDirectControl/PD_z/postSat Signal'
 * '<S230>' : 'PosDirectControl/PD_z/preSat Signal'
 * '<S231>' : 'PosDirectControl/PD_z/Anti-windup/Back Calculation'
 * '<S232>' : 'PosDirectControl/PD_z/Anti-windup/Cont. Clamping Ideal'
 * '<S233>' : 'PosDirectControl/PD_z/Anti-windup/Cont. Clamping Parallel'
 * '<S234>' : 'PosDirectControl/PD_z/Anti-windup/Disabled'
 * '<S235>' : 'PosDirectControl/PD_z/Anti-windup/Disc. Clamping Ideal'
 * '<S236>' : 'PosDirectControl/PD_z/Anti-windup/Disc. Clamping Parallel'
 * '<S237>' : 'PosDirectControl/PD_z/Anti-windup/Passthrough'
 * '<S238>' : 'PosDirectControl/PD_z/D Gain/Disabled'
 * '<S239>' : 'PosDirectControl/PD_z/D Gain/External Parameters'
 * '<S240>' : 'PosDirectControl/PD_z/D Gain/Internal Parameters'
 * '<S241>' : 'PosDirectControl/PD_z/Filter/Cont. Filter'
 * '<S242>' : 'PosDirectControl/PD_z/Filter/Differentiator'
 * '<S243>' : 'PosDirectControl/PD_z/Filter/Disabled'
 * '<S244>' : 'PosDirectControl/PD_z/Filter/Disc. Backward Euler Filter'
 * '<S245>' : 'PosDirectControl/PD_z/Filter/Disc. Forward Euler Filter'
 * '<S246>' : 'PosDirectControl/PD_z/Filter/Disc. Trapezoidal Filter'
 * '<S247>' : 'PosDirectControl/PD_z/Filter ICs/Disabled'
 * '<S248>' : 'PosDirectControl/PD_z/Filter ICs/External IC'
 * '<S249>' : 'PosDirectControl/PD_z/Filter ICs/Internal IC - Differentiator'
 * '<S250>' : 'PosDirectControl/PD_z/Filter ICs/Internal IC - Filter'
 * '<S251>' : 'PosDirectControl/PD_z/I Gain/Disabled'
 * '<S252>' : 'PosDirectControl/PD_z/I Gain/External Parameters'
 * '<S253>' : 'PosDirectControl/PD_z/I Gain/Internal Parameters'
 * '<S254>' : 'PosDirectControl/PD_z/Ideal P Gain/External Parameters'
 * '<S255>' : 'PosDirectControl/PD_z/Ideal P Gain/Internal Parameters'
 * '<S256>' : 'PosDirectControl/PD_z/Ideal P Gain/Passthrough'
 * '<S257>' : 'PosDirectControl/PD_z/Ideal P Gain Fdbk/Disabled'
 * '<S258>' : 'PosDirectControl/PD_z/Ideal P Gain Fdbk/External Parameters'
 * '<S259>' : 'PosDirectControl/PD_z/Ideal P Gain Fdbk/Internal Parameters'
 * '<S260>' : 'PosDirectControl/PD_z/Ideal P Gain Fdbk/Passthrough'
 * '<S261>' : 'PosDirectControl/PD_z/Integrator/Continuous'
 * '<S262>' : 'PosDirectControl/PD_z/Integrator/Disabled'
 * '<S263>' : 'PosDirectControl/PD_z/Integrator/Discrete'
 * '<S264>' : 'PosDirectControl/PD_z/Integrator ICs/Disabled'
 * '<S265>' : 'PosDirectControl/PD_z/Integrator ICs/External IC'
 * '<S266>' : 'PosDirectControl/PD_z/Integrator ICs/Internal IC'
 * '<S267>' : 'PosDirectControl/PD_z/N Copy/Disabled'
 * '<S268>' : 'PosDirectControl/PD_z/N Copy/Disabled wSignal Specification'
 * '<S269>' : 'PosDirectControl/PD_z/N Copy/External Parameters'
 * '<S270>' : 'PosDirectControl/PD_z/N Copy/Internal Parameters'
 * '<S271>' : 'PosDirectControl/PD_z/N Gain/Disabled'
 * '<S272>' : 'PosDirectControl/PD_z/N Gain/External Parameters'
 * '<S273>' : 'PosDirectControl/PD_z/N Gain/Internal Parameters'
 * '<S274>' : 'PosDirectControl/PD_z/N Gain/Passthrough'
 * '<S275>' : 'PosDirectControl/PD_z/P Copy/Disabled'
 * '<S276>' : 'PosDirectControl/PD_z/P Copy/External Parameters Ideal'
 * '<S277>' : 'PosDirectControl/PD_z/P Copy/Internal Parameters Ideal'
 * '<S278>' : 'PosDirectControl/PD_z/Parallel P Gain/Disabled'
 * '<S279>' : 'PosDirectControl/PD_z/Parallel P Gain/External Parameters'
 * '<S280>' : 'PosDirectControl/PD_z/Parallel P Gain/Internal Parameters'
 * '<S281>' : 'PosDirectControl/PD_z/Parallel P Gain/Passthrough'
 * '<S282>' : 'PosDirectControl/PD_z/Reset Signal/Disabled'
 * '<S283>' : 'PosDirectControl/PD_z/Reset Signal/External Reset'
 * '<S284>' : 'PosDirectControl/PD_z/Saturation/Enabled'
 * '<S285>' : 'PosDirectControl/PD_z/Saturation/Passthrough'
 * '<S286>' : 'PosDirectControl/PD_z/Saturation Fdbk/Disabled'
 * '<S287>' : 'PosDirectControl/PD_z/Saturation Fdbk/Enabled'
 * '<S288>' : 'PosDirectControl/PD_z/Saturation Fdbk/Passthrough'
 * '<S289>' : 'PosDirectControl/PD_z/Sum/Passthrough_I'
 * '<S290>' : 'PosDirectControl/PD_z/Sum/Passthrough_P'
 * '<S291>' : 'PosDirectControl/PD_z/Sum/Sum_PD'
 * '<S292>' : 'PosDirectControl/PD_z/Sum/Sum_PI'
 * '<S293>' : 'PosDirectControl/PD_z/Sum/Sum_PID'
 * '<S294>' : 'PosDirectControl/PD_z/Sum Fdbk/Disabled'
 * '<S295>' : 'PosDirectControl/PD_z/Sum Fdbk/Enabled'
 * '<S296>' : 'PosDirectControl/PD_z/Sum Fdbk/Passthrough'
 * '<S297>' : 'PosDirectControl/PD_z/Tracking Mode/Disabled'
 * '<S298>' : 'PosDirectControl/PD_z/Tracking Mode/Enabled'
 * '<S299>' : 'PosDirectControl/PD_z/Tracking Mode Sum/Passthrough'
 * '<S300>' : 'PosDirectControl/PD_z/Tracking Mode Sum/Tracking Mode'
 * '<S301>' : 'PosDirectControl/PD_z/postSat Signal/Feedback_Path'
 * '<S302>' : 'PosDirectControl/PD_z/postSat Signal/Forward_Path'
 * '<S303>' : 'PosDirectControl/PD_z/preSat Signal/Feedback_Path'
 * '<S304>' : 'PosDirectControl/PD_z/preSat Signal/Forward_Path'
 */
#endif                                 /* RTW_HEADER_PosDirectControl_h_ */
