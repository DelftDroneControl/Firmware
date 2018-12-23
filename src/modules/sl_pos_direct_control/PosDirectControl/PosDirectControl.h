/*
 * PosDirectControl.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "PosDirectControl".
 *
 * Model version              : 1.229
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C++ source code generated on : Thu Dec 20 19:34:24 2018
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
  real_T Filter_DSTATE[3];             /* '<S51>/Filter' */
  real_T Integrator_DSTATE[3];         /* '<S69>/Integrator' */
  real_T Memory_PreviousInput[4];      /* '<Root>/Memory' */
  real_T psi_last;                     /* '<Root>/unwrap2pi' */
  real_T N;                            /* '<Root>/unwrap2pi' */
  boolean_T psi_last_not_empty;        /* '<Root>/unwrap2pi' */
} DW_PosDirectControl_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real32_T vel[3];                     /* '<Root>/vel' */
  real32_T pos[3];                     /* '<Root>/pos' */
  real32_T rates[3];                   /* '<Root>/rates' */
  real32_T q[4];                       /* '<Root>/q' */
  real32_T w_rotor_meas[4];            /* '<Root>/w_rotor_meas' */
  real32_T pos_sp[3];                  /* '<Root>/pos_sp' */
  real32_T yaw_sp;                     /* '<Root>/yaw_sp' */
} ExtU_PosDirectControl_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T w_rotors[4];                  /* '<Root>/w_rotors' */
  real32_T actuators_control[4];       /* '<Root>/actuators_control' */
} ExtY_PosDirectControl_T;

/* Parameters (default storage) */
struct P_PosDirectControl_T_ {
  PosDirectControlParamsType PosDirectControlParams;/* Variable: PosDirectControlParams
                                                     * Referenced by: '<Root>/indi'
                                                     */
};

/* Real-time Model Data Structure */
struct tag_RTM_PosDirectControl_T {
  const char_T *errorStatus;
};

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
  /* Tunable parameters */
  P_PosDirectControl_T PosDirectControl_P;

  /* Block states */
  DW_PosDirectControl_T PosDirectControl_DW;

  /* Real-Time Model */
  RT_MODEL_PosDirectControl_T PosDirectControl_M;

  /* private member function(s) for subsystem '<Root>'*/
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
 * '<S8>'   : 'PosDirectControl/Discrete PID Controller'
 * '<S9>'   : 'PosDirectControl/MATLAB Function'
 * '<S10>'  : 'PosDirectControl/MATLAB Function1'
 * '<S11>'  : 'PosDirectControl/MATLAB Function2'
 * '<S12>'  : 'PosDirectControl/indi'
 * '<S13>'  : 'PosDirectControl/n_des from a_ref'
 * '<S14>'  : 'PosDirectControl/unwrap2pi'
 * '<S15>'  : 'PosDirectControl/Discrete PID Controller/Anti-windup'
 * '<S16>'  : 'PosDirectControl/Discrete PID Controller/D Gain'
 * '<S17>'  : 'PosDirectControl/Discrete PID Controller/Filter'
 * '<S18>'  : 'PosDirectControl/Discrete PID Controller/Filter ICs'
 * '<S19>'  : 'PosDirectControl/Discrete PID Controller/I Gain'
 * '<S20>'  : 'PosDirectControl/Discrete PID Controller/Ideal P Gain'
 * '<S21>'  : 'PosDirectControl/Discrete PID Controller/Ideal P Gain Fdbk'
 * '<S22>'  : 'PosDirectControl/Discrete PID Controller/Integrator'
 * '<S23>'  : 'PosDirectControl/Discrete PID Controller/Integrator ICs'
 * '<S24>'  : 'PosDirectControl/Discrete PID Controller/N Copy'
 * '<S25>'  : 'PosDirectControl/Discrete PID Controller/N Gain'
 * '<S26>'  : 'PosDirectControl/Discrete PID Controller/P Copy'
 * '<S27>'  : 'PosDirectControl/Discrete PID Controller/Parallel P Gain'
 * '<S28>'  : 'PosDirectControl/Discrete PID Controller/Reset Signal'
 * '<S29>'  : 'PosDirectControl/Discrete PID Controller/Saturation'
 * '<S30>'  : 'PosDirectControl/Discrete PID Controller/Saturation Fdbk'
 * '<S31>'  : 'PosDirectControl/Discrete PID Controller/Sum'
 * '<S32>'  : 'PosDirectControl/Discrete PID Controller/Sum Fdbk'
 * '<S33>'  : 'PosDirectControl/Discrete PID Controller/Tracking Mode'
 * '<S34>'  : 'PosDirectControl/Discrete PID Controller/Tracking Mode Sum'
 * '<S35>'  : 'PosDirectControl/Discrete PID Controller/postSat Signal'
 * '<S36>'  : 'PosDirectControl/Discrete PID Controller/preSat Signal'
 * '<S37>'  : 'PosDirectControl/Discrete PID Controller/Anti-windup/Back Calculation'
 * '<S38>'  : 'PosDirectControl/Discrete PID Controller/Anti-windup/Cont. Clamping Ideal'
 * '<S39>'  : 'PosDirectControl/Discrete PID Controller/Anti-windup/Cont. Clamping Parallel'
 * '<S40>'  : 'PosDirectControl/Discrete PID Controller/Anti-windup/Disabled'
 * '<S41>'  : 'PosDirectControl/Discrete PID Controller/Anti-windup/Disc. Clamping Ideal'
 * '<S42>'  : 'PosDirectControl/Discrete PID Controller/Anti-windup/Disc. Clamping Parallel'
 * '<S43>'  : 'PosDirectControl/Discrete PID Controller/Anti-windup/Passthrough'
 * '<S44>'  : 'PosDirectControl/Discrete PID Controller/D Gain/Disabled'
 * '<S45>'  : 'PosDirectControl/Discrete PID Controller/D Gain/External Parameters'
 * '<S46>'  : 'PosDirectControl/Discrete PID Controller/D Gain/Internal Parameters'
 * '<S47>'  : 'PosDirectControl/Discrete PID Controller/Filter/Cont. Filter'
 * '<S48>'  : 'PosDirectControl/Discrete PID Controller/Filter/Differentiator'
 * '<S49>'  : 'PosDirectControl/Discrete PID Controller/Filter/Disabled'
 * '<S50>'  : 'PosDirectControl/Discrete PID Controller/Filter/Disc. Backward Euler Filter'
 * '<S51>'  : 'PosDirectControl/Discrete PID Controller/Filter/Disc. Forward Euler Filter'
 * '<S52>'  : 'PosDirectControl/Discrete PID Controller/Filter/Disc. Trapezoidal Filter'
 * '<S53>'  : 'PosDirectControl/Discrete PID Controller/Filter ICs/Disabled'
 * '<S54>'  : 'PosDirectControl/Discrete PID Controller/Filter ICs/External IC'
 * '<S55>'  : 'PosDirectControl/Discrete PID Controller/Filter ICs/Internal IC - Differentiator'
 * '<S56>'  : 'PosDirectControl/Discrete PID Controller/Filter ICs/Internal IC - Filter'
 * '<S57>'  : 'PosDirectControl/Discrete PID Controller/I Gain/Disabled'
 * '<S58>'  : 'PosDirectControl/Discrete PID Controller/I Gain/External Parameters'
 * '<S59>'  : 'PosDirectControl/Discrete PID Controller/I Gain/Internal Parameters'
 * '<S60>'  : 'PosDirectControl/Discrete PID Controller/Ideal P Gain/External Parameters'
 * '<S61>'  : 'PosDirectControl/Discrete PID Controller/Ideal P Gain/Internal Parameters'
 * '<S62>'  : 'PosDirectControl/Discrete PID Controller/Ideal P Gain/Passthrough'
 * '<S63>'  : 'PosDirectControl/Discrete PID Controller/Ideal P Gain Fdbk/Disabled'
 * '<S64>'  : 'PosDirectControl/Discrete PID Controller/Ideal P Gain Fdbk/External Parameters'
 * '<S65>'  : 'PosDirectControl/Discrete PID Controller/Ideal P Gain Fdbk/Internal Parameters'
 * '<S66>'  : 'PosDirectControl/Discrete PID Controller/Ideal P Gain Fdbk/Passthrough'
 * '<S67>'  : 'PosDirectControl/Discrete PID Controller/Integrator/Continuous'
 * '<S68>'  : 'PosDirectControl/Discrete PID Controller/Integrator/Disabled'
 * '<S69>'  : 'PosDirectControl/Discrete PID Controller/Integrator/Discrete'
 * '<S70>'  : 'PosDirectControl/Discrete PID Controller/Integrator ICs/Disabled'
 * '<S71>'  : 'PosDirectControl/Discrete PID Controller/Integrator ICs/External IC'
 * '<S72>'  : 'PosDirectControl/Discrete PID Controller/Integrator ICs/Internal IC'
 * '<S73>'  : 'PosDirectControl/Discrete PID Controller/N Copy/Disabled'
 * '<S74>'  : 'PosDirectControl/Discrete PID Controller/N Copy/Disabled wSignal Specification'
 * '<S75>'  : 'PosDirectControl/Discrete PID Controller/N Copy/External Parameters'
 * '<S76>'  : 'PosDirectControl/Discrete PID Controller/N Copy/Internal Parameters'
 * '<S77>'  : 'PosDirectControl/Discrete PID Controller/N Gain/Disabled'
 * '<S78>'  : 'PosDirectControl/Discrete PID Controller/N Gain/External Parameters'
 * '<S79>'  : 'PosDirectControl/Discrete PID Controller/N Gain/Internal Parameters'
 * '<S80>'  : 'PosDirectControl/Discrete PID Controller/N Gain/Passthrough'
 * '<S81>'  : 'PosDirectControl/Discrete PID Controller/P Copy/Disabled'
 * '<S82>'  : 'PosDirectControl/Discrete PID Controller/P Copy/External Parameters Ideal'
 * '<S83>'  : 'PosDirectControl/Discrete PID Controller/P Copy/Internal Parameters Ideal'
 * '<S84>'  : 'PosDirectControl/Discrete PID Controller/Parallel P Gain/Disabled'
 * '<S85>'  : 'PosDirectControl/Discrete PID Controller/Parallel P Gain/External Parameters'
 * '<S86>'  : 'PosDirectControl/Discrete PID Controller/Parallel P Gain/Internal Parameters'
 * '<S87>'  : 'PosDirectControl/Discrete PID Controller/Parallel P Gain/Passthrough'
 * '<S88>'  : 'PosDirectControl/Discrete PID Controller/Reset Signal/Disabled'
 * '<S89>'  : 'PosDirectControl/Discrete PID Controller/Reset Signal/External Reset'
 * '<S90>'  : 'PosDirectControl/Discrete PID Controller/Saturation/Enabled'
 * '<S91>'  : 'PosDirectControl/Discrete PID Controller/Saturation/Passthrough'
 * '<S92>'  : 'PosDirectControl/Discrete PID Controller/Saturation Fdbk/Disabled'
 * '<S93>'  : 'PosDirectControl/Discrete PID Controller/Saturation Fdbk/Enabled'
 * '<S94>'  : 'PosDirectControl/Discrete PID Controller/Saturation Fdbk/Passthrough'
 * '<S95>'  : 'PosDirectControl/Discrete PID Controller/Sum/Passthrough_I'
 * '<S96>'  : 'PosDirectControl/Discrete PID Controller/Sum/Passthrough_P'
 * '<S97>'  : 'PosDirectControl/Discrete PID Controller/Sum/Sum_PD'
 * '<S98>'  : 'PosDirectControl/Discrete PID Controller/Sum/Sum_PI'
 * '<S99>'  : 'PosDirectControl/Discrete PID Controller/Sum/Sum_PID'
 * '<S100>' : 'PosDirectControl/Discrete PID Controller/Sum Fdbk/Disabled'
 * '<S101>' : 'PosDirectControl/Discrete PID Controller/Sum Fdbk/Enabled'
 * '<S102>' : 'PosDirectControl/Discrete PID Controller/Sum Fdbk/Passthrough'
 * '<S103>' : 'PosDirectControl/Discrete PID Controller/Tracking Mode/Disabled'
 * '<S104>' : 'PosDirectControl/Discrete PID Controller/Tracking Mode/Enabled'
 * '<S105>' : 'PosDirectControl/Discrete PID Controller/Tracking Mode Sum/Passthrough'
 * '<S106>' : 'PosDirectControl/Discrete PID Controller/Tracking Mode Sum/Tracking Mode'
 * '<S107>' : 'PosDirectControl/Discrete PID Controller/postSat Signal/Feedback_Path'
 * '<S108>' : 'PosDirectControl/Discrete PID Controller/postSat Signal/Forward_Path'
 * '<S109>' : 'PosDirectControl/Discrete PID Controller/preSat Signal/Feedback_Path'
 * '<S110>' : 'PosDirectControl/Discrete PID Controller/preSat Signal/Forward_Path'
 */
#endif                                 /* RTW_HEADER_PosDirectControl_h_ */
