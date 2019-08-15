/*
 * PosDirectControl.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "PosDirectControl".
 *
 * Model version              : 1.1528
 * Simulink Coder version : 9.1 (R2019a) 23-Nov-2018
 * C++ source code generated on : Tue Aug 13 23:45:22 2019
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Custom
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

/* Block signals (default storage) */
typedef struct {
  real_T att_ekfquat[3];               /* '<S5>/Flip1' */
} B_PosDirectControl_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T DiscreteStateSpace1_DSTATE[6];/* '<S6>/Discrete State-Space1' */
  real_T UD_DSTATE[6];                 /* '<S34>/UD' */
  real_T DiscreteStateSpace_DSTATE[3]; /* '<S6>/Discrete State-Space' */
  real_T UD_DSTATE_b[3];               /* '<S33>/UD' */
  real_T UD_DSTATE_br[3];              /* '<S32>/UD' */
  real_T DiscreteStateSpace4_DSTATE[3];/* '<S3>/Discrete State-Space4' */
  real_T UD_DSTATE_g;                  /* '<S31>/UD' */
  real_T DiscreteTimeIntegrator_DSTATE;/* '<S37>/Discrete-Time Integrator' */
  real_T DiscreteStateSpace2_DSTATE;   /* '<S6>/Discrete State-Space2' */
  real_T UD_DSTATE_o;                  /* '<S30>/UD' */
  real_T DiscreteStateSpace3_DSTATE[4];/* '<S6>/Discrete State-Space3' */
  real_T DiscreteStateSpace4_DSTATE_g[3];/* '<S6>/Discrete State-Space4' */
  real_T DiscreteTimeIntegrator1_DSTATE;/* '<S6>/Discrete-Time Integrator1' */
  real_T ActuatorDynamics_EST_DSTATE[4];/* '<S3>/ActuatorDynamics_EST' */
  real_T DiscreteStateSpace_DSTATE_b[3];/* '<S5>/Discrete State-Space' */
  real_T DiscreteTimeIntegrator_DSTATE_c[3];/* '<S10>/Discrete-Time Integrator' */
  real_T Memory_PreviousInput[4];      /* '<S5>/Memory' */
  real_T Memory_PreviousInput_d[4];    /* '<S6>/Memory' */
  real_T P[100];                       /* '<S12>/DataStoreMemory - P' */
  real_T x[10];                        /* '<S12>/DataStoreMemory - x' */
  real_T psi_last;                     /* '<S3>/unwrap2pi' */
  real_T N;                            /* '<S3>/unwrap2pi' */
  real_T t_takeoff;                    /* '<S3>/MATLAB Function3' */
  real_T t_takeoff_d;                  /* '<S3>/MATLAB Function2' */
  real_T attPrev[3];                   /* '<S5>/enableMeas' */
  boolean_T psi_last_not_empty;        /* '<S3>/unwrap2pi' */
  boolean_T t_takeoff_not_empty;       /* '<S3>/MATLAB Function3' */
  boolean_T t_takeoff_not_empty_l;     /* '<S3>/MATLAB Function2' */
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
  int32_T fail_flag;                   /* '<Root>/fail_flag' */
  real32_T accs[3];                    /* '<Root>/accs' */
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
    uint32_T clockTick0;
    uint32_T clockTickH0;
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
                                                          *   '<S3>/rpm_feedback'
                                                          *   '<S6>/indi'
                                                          *   '<S6>/att_i'
                                                          *   '<S10>/Pos_x'
                                                          *   '<S10>/Pos_x_i'
                                                          *   '<S10>/Pos_y'
                                                          *   '<S10>/Pos_y_i'
                                                          *   '<S10>/Vel_x'
                                                          *   '<S10>/Vel_y'
                                                          *   '<S37>/Pos_z_i'
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
  /* Block signals */
  B_PosDirectControl_T PosDirectControl_B;

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
 * '<S4>'   : 'PosDirectControl/Subsystem/indi/Discrete Derivative3'
 * '<S5>'   : 'PosDirectControl/Subsystem/indi/EKFQuat'
 * '<S6>'   : 'PosDirectControl/Subsystem/indi/INDI_DRF'
 * '<S7>'   : 'PosDirectControl/Subsystem/indi/MATLAB Function2'
 * '<S8>'   : 'PosDirectControl/Subsystem/indi/MATLAB Function3'
 * '<S9>'   : 'PosDirectControl/Subsystem/indi/n_des from accel_sp'
 * '<S10>'  : 'PosDirectControl/Subsystem/indi/position_control'
 * '<S11>'  : 'PosDirectControl/Subsystem/indi/unwrap2pi'
 * '<S12>'  : 'PosDirectControl/Subsystem/indi/EKFQuat/Extended Kalman Filter'
 * '<S13>'  : 'PosDirectControl/Subsystem/indi/EKFQuat/MATLAB Function'
 * '<S14>'  : 'PosDirectControl/Subsystem/indi/EKFQuat/Quaternions to Rotation Angles'
 * '<S15>'  : 'PosDirectControl/Subsystem/indi/EKFQuat/Rotation Angles to Quaternions'
 * '<S16>'  : 'PosDirectControl/Subsystem/indi/EKFQuat/enableMeas'
 * '<S17>'  : 'PosDirectControl/Subsystem/indi/EKFQuat/Extended Kalman Filter/Correct1'
 * '<S18>'  : 'PosDirectControl/Subsystem/indi/EKFQuat/Extended Kalman Filter/Output'
 * '<S19>'  : 'PosDirectControl/Subsystem/indi/EKFQuat/Extended Kalman Filter/Predict'
 * '<S20>'  : 'PosDirectControl/Subsystem/indi/EKFQuat/Extended Kalman Filter/Correct1/Correct'
 * '<S21>'  : 'PosDirectControl/Subsystem/indi/EKFQuat/Extended Kalman Filter/Predict/Predict'
 * '<S22>'  : 'PosDirectControl/Subsystem/indi/EKFQuat/Quaternions to Rotation Angles/Angle Calculation'
 * '<S23>'  : 'PosDirectControl/Subsystem/indi/EKFQuat/Quaternions to Rotation Angles/Quaternion Normalize'
 * '<S24>'  : 'PosDirectControl/Subsystem/indi/EKFQuat/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input'
 * '<S25>'  : 'PosDirectControl/Subsystem/indi/EKFQuat/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input/If Action Subsystem'
 * '<S26>'  : 'PosDirectControl/Subsystem/indi/EKFQuat/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input/If Action Subsystem1'
 * '<S27>'  : 'PosDirectControl/Subsystem/indi/EKFQuat/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input/If Action Subsystem2'
 * '<S28>'  : 'PosDirectControl/Subsystem/indi/EKFQuat/Quaternions to Rotation Angles/Quaternion Normalize/Quaternion Modulus'
 * '<S29>'  : 'PosDirectControl/Subsystem/indi/EKFQuat/Quaternions to Rotation Angles/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
 * '<S30>'  : 'PosDirectControl/Subsystem/indi/INDI_DRF/Discrete Derivative1'
 * '<S31>'  : 'PosDirectControl/Subsystem/indi/INDI_DRF/Discrete Derivative2'
 * '<S32>'  : 'PosDirectControl/Subsystem/indi/INDI_DRF/Discrete Derivative3'
 * '<S33>'  : 'PosDirectControl/Subsystem/indi/INDI_DRF/Discrete Derivative4'
 * '<S34>'  : 'PosDirectControl/Subsystem/indi/INDI_DRF/Discrete Derivative5'
 * '<S35>'  : 'PosDirectControl/Subsystem/indi/INDI_DRF/MATLAB Function'
 * '<S36>'  : 'PosDirectControl/Subsystem/indi/INDI_DRF/MATLAB Function1'
 * '<S37>'  : 'PosDirectControl/Subsystem/indi/INDI_DRF/alt_int'
 * '<S38>'  : 'PosDirectControl/Subsystem/indi/INDI_DRF/indi'
 */
#endif                                 /* RTW_HEADER_PosDirectControl_h_ */
