/*
 * PosDirectControl.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "PosDirectControl".
 *
 * Model version              : 1.479
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C++ source code generated on : Sat Jan 12 15:20:23 2019
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
  real_T DiscreteStateSpace1_DSTATE[6];/* '<S3>/Discrete State-Space1' */
  real_T UD_DSTATE[6];                 /* '<S9>/UD' */
  real_T DiscreteStateSpace_DSTATE[3]; /* '<S3>/Discrete State-Space' */
  real_T UD_DSTATE_b[3];               /* '<S8>/UD' */
  real_T UD_DSTATE_br[3];              /* '<S7>/UD' */
  real_T UD_DSTATE_g;                  /* '<S6>/UD' */
  real_T DiscreteStateSpace2_DSTATE;   /* '<S3>/Discrete State-Space2' */
  real_T UD_DSTATE_o;                  /* '<S5>/UD' */
  real_T DiscreteStateSpace3_DSTATE[4];/* '<S3>/Discrete State-Space3' */
  real_T DiscreteStateSpace4_DSTATE[3];/* '<S3>/Discrete State-Space4' */
  real_T ActuatorDynamics_DSTATE[4];   /* '<S3>/ActuatorDynamics' */
  real_T Memory_PreviousInput[4];      /* '<S3>/Memory' */
  real_T psi_last;                     /* '<S3>/unwrap2pi' */
  real_T N;                            /* '<S3>/unwrap2pi' */
  boolean_T psi_last_not_empty;        /* '<S3>/unwrap2pi' */
} DW_PosDirectControl_T;

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

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    struct {
      uint8_T TID[2];
    } TaskCounters;
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
extern PosDirectControlParamsType PosDirectControlParams;/* Variable: PosDirectControlParams
                                                          * Referenced by:
                                                          *   '<S3>/indi'
                                                          *   '<S3>/rpm_feedback'
                                                          *   '<S3>/Pos_x'
                                                          *   '<S3>/Pos_y'
                                                          *   '<S3>/Vel_x'
                                                          *   '<S3>/Vel_y'
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
 * '<S309>' : 'PosDirectControl/Subsystem/lqr/indi1'
 * '<S310>' : 'PosDirectControl/Subsystem/lqr/n_des from accel_sp'
 * '<S311>' : 'PosDirectControl/Subsystem/lqr/unwrap2pi'
 */
#endif                                 /* RTW_HEADER_PosDirectControl_h_ */
