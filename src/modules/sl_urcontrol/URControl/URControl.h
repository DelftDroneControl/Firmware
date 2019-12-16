/*
 * URControl.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "URControl".
 *
 * Model version              : 1.1881
 * Simulink Coder version : 9.1 (R2019a) 23-Nov-2018
 * C++ source code generated on : Mon Dec 16 11:43:25 2019
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_URControl_h_
#define RTW_HEADER_URControl_h_
#include <string.h>
#include <cmath>
#ifndef URControl_COMMON_INCLUDES_
# define URControl_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* URControl_COMMON_INCLUDES_ */

#include "URControl_types.h"

/* Shared type includes */
#include "multiword_types.h"

/* Child system includes */
#include "URControl_att_indi.h"
#include "rtGetInf.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetErrorStatusPointer
# define rtmGetErrorStatusPointer(rtm) ((const char_T **)(&((rtm)->errorStatus)))
#endif

/* Block signals for system '<S21>/MATLAB Function3' */
typedef struct {
  real_T y;                            /* '<S21>/MATLAB Function3' */
} B_MATLABFunction3_URControl_T;

/* Block signals (default storage) */
typedef struct {
  real_T att_ekfquat[3];               /* '<S20>/Flip1' */
  real_T Euler_flip[3];                /* '<S21>/Flip' */
  real_T Probe[2];                     /* '<S8>/Probe' */
  real_T Probe_d[2];                   /* '<S12>/Probe' */
  real_T Merge[4];                     /* '<S41>/Merge' */
  B_MATLABFunction3_URControl_T sf_MATLABFunction4;/* '<S21>/MATLAB Function4' */
  B_MATLABFunction3_URControl_T sf_MATLABFunction3;/* '<S21>/MATLAB Function3' */
} B_URControl_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  stateBus State;                      /* '<Root>/Data Store Memory1' */
  LPFilter_URControl_T omegaFilter;    /* '<S7>/basic estimators' */
  LPFilter_URControl_T posFilter;      /* '<S7>/basic estimators' */
  LPFilter_URControl_T velFilter;      /* '<S7>/basic estimators' */
  LPFilter_URControl_T accFilter;      /* '<S7>/basic estimators' */
  real_T DiscreteTimeIntegrator_DSTATE;/* '<S21>/Discrete-Time Integrator' */
  real_T Delay2_DSTATE[3];             /* '<S21>/Delay2' */
  real_T DiscreteTimeIntegrator3_DSTATE[3];/* '<S21>/Discrete-Time Integrator3' */
  real_T Delay1_DSTATE[3];             /* '<S21>/Delay1' */
  real_T Delay_DSTATE[4];              /* '<S21>/Delay' */
  real_T Delay_DSTATE_j[1000];         /* '<Root>/Delay' */
  real_T Integrator_DSTATE[3];         /* '<S11>/Integrator' */
  real_T Integrator_DSTATE_i;          /* '<S15>/Integrator' */
  real_T DiscreteStateSpace_DSTATE[3]; /* '<S20>/Discrete State-Space' */
  real_T DiscreteTimeIntegrator1_DSTATE;/* '<S21>/Discrete-Time Integrator1' */
  real_T Memory_PreviousInput[4];      /* '<S20>/Memory' */
  real_T P[100];                       /* '<S23>/DataStoreMemory - P' */
  real_T x[10];                        /* '<S23>/DataStoreMemory - x' */
  real_T failProt;                     /* '<S7>/basic estimators' */
  real_T psi_last;                     /* '<S21>/unwrap2pi' */
  real_T N;                            /* '<S21>/unwrap2pi' */
  real_T psi_last_a;                   /* '<S21>/MATLAB Function' */
  real_T attPrev[3];                   /* '<S20>/enableMeas' */
  real_T errorInt[3];                  /* '<S4>/position control' */
  real_T errorInt_g;                   /* '<S4>/altitude control' */
  real_T fallCount;                    /* '<S3>/MATLAB Function' */
  real_T thrown;                       /* '<S3>/MATLAB Function' */
  real_T flipTime;                     /* '<S3>/MATLAB Function' */
  void* Assertion_slioAccessor;        /* '<S88>/Assertion' */
  void* Assertion_slioAccessor_a;      /* '<S89>/Assertion' */
  void* Assertion_slioAccessor_o;      /* '<S90>/Assertion' */
  void* Assertion_slioAccessor_oz;     /* '<S91>/Assertion' */
  int8_T Integrator_PrevResetState;    /* '<S11>/Integrator' */
  int8_T Integrator_PrevResetState_i;  /* '<S15>/Integrator' */
  uint8_T Integrator_IC_LOADING;       /* '<S11>/Integrator' */
  uint8_T Integrator_IC_LOADING_a;     /* '<S15>/Integrator' */
  boolean_T omegaFilter_not_empty;     /* '<S7>/basic estimators' */
  boolean_T posFilter_not_empty;       /* '<S7>/basic estimators' */
  boolean_T velFilter_not_empty;       /* '<S7>/basic estimators' */
  boolean_T accFilter_not_empty;       /* '<S7>/basic estimators' */
  boolean_T psi_last_not_empty;        /* '<S21>/unwrap2pi' */
} DW_URControl_T;

/* data stores shared across model instances, for system '<Root>' */
typedef struct {
  daqBus DAQ;                          /* '<Root>/Data Store Memory' */
} SharedDSM_URControl_T;

/* Constant parameters (default storage) */
typedef struct {
  /* Expression: par
   * Referenced by: '<S7>/basic estimators'
   */
  struct_YhmxgXLVjzlogleEk1YuME basicestimators_par;
} ConstP_URControl_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real32_T vel[3];                     /* '<Root>/vel' */
  real32_T pos[3];                     /* '<Root>/pos' */
  real32_T rates[3];                   /* '<Root>/rates' */
  real32_T att[3];                     /* '<Root>/att' */
  int32_T esc_rpm[4];                  /* '<Root>/esc_rpm' */
  real32_T accs[3];                    /* '<Root>/accs' */
  real32_T mag[3];                     /* '<Root>/mag' */
  real32_T pos_sp[3];                  /* '<Root>/pos_sp' */
  real32_T yaw_sp;                     /* '<Root>/yaw_sp' */
  real32_T manual[5];                  /* '<Root>/manual' */
  int32_T fail_flag;                   /* '<Root>/fail_flag' */
} ExtU_URControl_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real32_T w_rotors[4];                /* '<Root>/w_rotors' */
  real32_T actuators_control[4];       /* '<Root>/actuators_control' */
  daqBus daq;                          /* '<Root>/daq' */
} ExtY_URControl_T;

/* Real-time Model Data Structure */
struct tag_RTM_URControl_T {
  const char_T *errorStatus;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    uint32_T clockTickH0;
  } Timing;
};

/* External data declarations for dependent source files */
extern const daqBus URControl_rtZdaqBus;/* daqBus ground */
extern const stateBus URControl_rtZstateBus;/* stateBus ground */

/* Constant parameters (default storage) */
extern const ConstP_URControl_T URControl_ConstP;

/*
 * Exported Global Parameters
 *
 * Note: Exported global parameters are tunable parameters with an exported
 * global storage class designation.  Code generation will declare the memory for
 * these parameters and exports their symbols.
 *
 */
extern URControlParamsType URControlParams;/* Variable: URControlParams
                                            * Referenced by:
                                            *   '<Root>/delay'
                                            *   '<S3>/MATLAB Function'
                                            *   '<S4>/altitude control'
                                            *   '<S4>/position control'
                                            *   '<S4>/yaw rate control'
                                            *   '<S5>/URControl_att_indi'
                                            *   '<S7>/basic estimators'
                                            *   '<S21>/MATLAB Function'
                                            *   '<S21>/MATLAB Function11'
                                            *   '<S21>/Gain2'
                                            */

/*
 * Exported States
 *
 * Note: Exported states are block states with an exported global
 * storage class designation.  Code generation will declare the memory for these
 * states and exports their symbols.
 *
 */
extern boolean_T _URControl_SharedDataInit_;/* synthesized block */

/* Class declaration for model URControl */
class URControlModelClass {
  /* public data and function members */
 public:
  /* External inputs */
  ExtU_URControl_T URControl_U;

  /* External outputs */
  ExtY_URControl_T URControl_Y;

  /* model initialize function */
  void initialize();

  /* model step function */
  void step();

  /* model terminate function */
  void terminate();

  /* Constructor */
  URControlModelClass();

  /* Destructor */
  ~URControlModelClass();

  /* Real-Time Model get method */
  RT_MODEL_URControl_T * getRTM();

  /* private data and function members */
 private:
  /* Block signals */
  B_URControl_T URControl_B;

  /* Block states */
  DW_URControl_T URControl_DW;

  /* data stores shared across model instances */
  static SharedDSM_URControl_T URControl_SharedDSM;

  /* Real-Time Model */
  RT_MODEL_URControl_T URControl_M;

  /* private member function(s) for subsystem '<Root>'*/
  void URControl_LPFilter_update(LPFilter_URControl_T *obj, const real_T
    newValue[3]);

  /* model instance variable for '<S5>/URControl_att_indi' */
  URControl_att_indiModelClass URControl_att_indiMDLOBJ1;
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
 * '<Root>' : 'URControl'
 * '<S1>'   : 'URControl/Low-Pass Filter (Discrete or Continuous)'
 * '<S2>'   : 'URControl/Low-Pass Filter (Discrete or Continuous)1'
 * '<S3>'   : 'URControl/Overrides'
 * '<S4>'   : 'URControl/Targets system'
 * '<S5>'   : 'URControl/Variant Model'
 * '<S6>'   : 'URControl/conversion to px4'
 * '<S7>'   : 'URControl/estimators'
 * '<S8>'   : 'URControl/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant'
 * '<S9>'   : 'URControl/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)'
 * '<S10>'  : 'URControl/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Compare To Zero'
 * '<S11>'  : 'URControl/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete'
 * '<S12>'  : 'URControl/Low-Pass Filter (Discrete or Continuous)1/Enable//disable time constant'
 * '<S13>'  : 'URControl/Low-Pass Filter (Discrete or Continuous)1/Integrator (Discrete or Continuous)'
 * '<S14>'  : 'URControl/Low-Pass Filter (Discrete or Continuous)1/Enable//disable time constant/Compare To Zero'
 * '<S15>'  : 'URControl/Low-Pass Filter (Discrete or Continuous)1/Integrator (Discrete or Continuous)/Discrete'
 * '<S16>'  : 'URControl/Overrides/MATLAB Function'
 * '<S17>'  : 'URControl/Targets system/altitude control'
 * '<S18>'  : 'URControl/Targets system/position control'
 * '<S19>'  : 'URControl/Targets system/yaw rate control'
 * '<S20>'  : 'URControl/estimators/EKFQuat'
 * '<S21>'  : 'URControl/estimators/att_estimator_complimentary'
 * '<S22>'  : 'URControl/estimators/basic estimators'
 * '<S23>'  : 'URControl/estimators/EKFQuat/Extended Kalman Filter'
 * '<S24>'  : 'URControl/estimators/EKFQuat/MATLAB Function'
 * '<S25>'  : 'URControl/estimators/EKFQuat/Quaternions to Rotation Angles'
 * '<S26>'  : 'URControl/estimators/EKFQuat/Rotation Angles to Quaternions'
 * '<S27>'  : 'URControl/estimators/EKFQuat/enableMeas'
 * '<S28>'  : 'URControl/estimators/EKFQuat/Extended Kalman Filter/Correct1'
 * '<S29>'  : 'URControl/estimators/EKFQuat/Extended Kalman Filter/Output'
 * '<S30>'  : 'URControl/estimators/EKFQuat/Extended Kalman Filter/Predict'
 * '<S31>'  : 'URControl/estimators/EKFQuat/Extended Kalman Filter/Correct1/Correct'
 * '<S32>'  : 'URControl/estimators/EKFQuat/Extended Kalman Filter/Predict/Predict'
 * '<S33>'  : 'URControl/estimators/EKFQuat/Quaternions to Rotation Angles/Angle Calculation'
 * '<S34>'  : 'URControl/estimators/EKFQuat/Quaternions to Rotation Angles/Quaternion Normalize'
 * '<S35>'  : 'URControl/estimators/EKFQuat/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input'
 * '<S36>'  : 'URControl/estimators/EKFQuat/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input/If Action Subsystem'
 * '<S37>'  : 'URControl/estimators/EKFQuat/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input/If Action Subsystem1'
 * '<S38>'  : 'URControl/estimators/EKFQuat/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input/If Action Subsystem2'
 * '<S39>'  : 'URControl/estimators/EKFQuat/Quaternions to Rotation Angles/Quaternion Normalize/Quaternion Modulus'
 * '<S40>'  : 'URControl/estimators/EKFQuat/Quaternions to Rotation Angles/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
 * '<S41>'  : 'URControl/estimators/att_estimator_complimentary/Direction Cosine Matrix  to Quaternions'
 * '<S42>'  : 'URControl/estimators/att_estimator_complimentary/Discrete Derivative'
 * '<S43>'  : 'URControl/estimators/att_estimator_complimentary/Discrete Derivative1'
 * '<S44>'  : 'URControl/estimators/att_estimator_complimentary/MATLAB Function'
 * '<S45>'  : 'URControl/estimators/att_estimator_complimentary/MATLAB Function1'
 * '<S46>'  : 'URControl/estimators/att_estimator_complimentary/MATLAB Function11'
 * '<S47>'  : 'URControl/estimators/att_estimator_complimentary/MATLAB Function12'
 * '<S48>'  : 'URControl/estimators/att_estimator_complimentary/MATLAB Function2'
 * '<S49>'  : 'URControl/estimators/att_estimator_complimentary/MATLAB Function3'
 * '<S50>'  : 'URControl/estimators/att_estimator_complimentary/MATLAB Function4'
 * '<S51>'  : 'URControl/estimators/att_estimator_complimentary/MATLAB Function6'
 * '<S52>'  : 'URControl/estimators/att_estimator_complimentary/Quaternion Multiplication'
 * '<S53>'  : 'URControl/estimators/att_estimator_complimentary/Quaternions to Rotation Angles'
 * '<S54>'  : 'URControl/estimators/att_estimator_complimentary/Quaternions to Rotation Angles1'
 * '<S55>'  : 'URControl/estimators/att_estimator_complimentary/Subsystem'
 * '<S56>'  : 'URControl/estimators/att_estimator_complimentary/unwrap2pi'
 * '<S57>'  : 'URControl/estimators/att_estimator_complimentary/Direction Cosine Matrix  to Quaternions/Negative Trace'
 * '<S58>'  : 'URControl/estimators/att_estimator_complimentary/Direction Cosine Matrix  to Quaternions/Positive Trace'
 * '<S59>'  : 'URControl/estimators/att_estimator_complimentary/Direction Cosine Matrix  to Quaternions/Validate DCM'
 * '<S60>'  : 'URControl/estimators/att_estimator_complimentary/Direction Cosine Matrix  to Quaternions/trace(DCM)'
 * '<S61>'  : 'URControl/estimators/att_estimator_complimentary/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)'
 * '<S62>'  : 'URControl/estimators/att_estimator_complimentary/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)'
 * '<S63>'  : 'URControl/estimators/att_estimator_complimentary/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)'
 * '<S64>'  : 'URControl/estimators/att_estimator_complimentary/Direction Cosine Matrix  to Quaternions/Negative Trace/diag(DCM)'
 * '<S65>'  : 'URControl/estimators/att_estimator_complimentary/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/cos(phi)sin(theta)cos(psi) + sin(phi)sin(psi) -sin(theta)'
 * '<S66>'  : 'URControl/estimators/att_estimator_complimentary/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/cos(theta)sin(phi) - (cos(phi)sin(theta)sin(psi) - sin(phi)cos(psi))'
 * '<S67>'  : 'URControl/estimators/att_estimator_complimentary/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/cos(theta)sin(psi) + (sin(phi)sin(theta)cos(psi) - cos(phi)sin(psi))'
 * '<S68>'  : 'URControl/estimators/att_estimator_complimentary/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/if s~=0; s=0.5//s'
 * '<S69>'  : 'URControl/estimators/att_estimator_complimentary/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/u(1) -(u(5)+u(9)) +1'
 * '<S70>'  : 'URControl/estimators/att_estimator_complimentary/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/cos(phi)sin(theta)cos(psi) + sin(phi)sin(psi) +sin(theta)'
 * '<S71>'  : 'URControl/estimators/att_estimator_complimentary/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/cos(theta)sin(phi) + (cos(phi)sin(theta)sin(psi) - sin(phi)cos(psi))'
 * '<S72>'  : 'URControl/estimators/att_estimator_complimentary/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/cos(theta)sin(psi) + (sin(phi)sin(theta)cos(psi) - cos(phi)sin(psi))'
 * '<S73>'  : 'URControl/estimators/att_estimator_complimentary/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/if s~=0; s=0.5//s'
 * '<S74>'  : 'URControl/estimators/att_estimator_complimentary/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/u(5) -(u(1)+u(9)) +1'
 * '<S75>'  : 'URControl/estimators/att_estimator_complimentary/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/cos(phi)sin(theta)cos(psi) + sin(phi)sin(psi) -sin(theta)'
 * '<S76>'  : 'URControl/estimators/att_estimator_complimentary/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/cos(theta)sin(phi) + (cos(phi)sin(theta)sin(psi) - sin(phi)cos(psi))'
 * '<S77>'  : 'URControl/estimators/att_estimator_complimentary/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/cos(theta)sin(psi) - (sin(phi)sin(theta)cos(psi) - cos(phi)sin(psi))'
 * '<S78>'  : 'URControl/estimators/att_estimator_complimentary/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/if s~=0; s=0.5//s'
 * '<S79>'  : 'URControl/estimators/att_estimator_complimentary/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/u(9) -(u(1)+u(5)) +1'
 * '<S80>'  : 'URControl/estimators/att_estimator_complimentary/Direction Cosine Matrix  to Quaternions/Positive Trace/cos(phi)sin(theta)cos(psi) + sin(phi)sin(psi) +sin(theta)'
 * '<S81>'  : 'URControl/estimators/att_estimator_complimentary/Direction Cosine Matrix  to Quaternions/Positive Trace/cos(theta)sin(phi) - (cos(phi)sin(theta)sin(psi) - sin(phi)cos(psi))'
 * '<S82>'  : 'URControl/estimators/att_estimator_complimentary/Direction Cosine Matrix  to Quaternions/Positive Trace/cos(theta)sin(psi) - (sin(phi)sin(theta)cos(psi) - cos(phi)sin(psi))'
 * '<S83>'  : 'URControl/estimators/att_estimator_complimentary/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error'
 * '<S84>'  : 'URControl/estimators/att_estimator_complimentary/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/Else If Not Orthogonal'
 * '<S85>'  : 'URControl/estimators/att_estimator_complimentary/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/If Not Proper'
 * '<S86>'  : 'URControl/estimators/att_estimator_complimentary/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/isNotOrthogonal'
 * '<S87>'  : 'URControl/estimators/att_estimator_complimentary/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/isNotProper'
 * '<S88>'  : 'URControl/estimators/att_estimator_complimentary/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/Else If Not Orthogonal/Error'
 * '<S89>'  : 'URControl/estimators/att_estimator_complimentary/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/Else If Not Orthogonal/Warning'
 * '<S90>'  : 'URControl/estimators/att_estimator_complimentary/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/If Not Proper/Error'
 * '<S91>'  : 'URControl/estimators/att_estimator_complimentary/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/If Not Proper/Warning'
 * '<S92>'  : 'URControl/estimators/att_estimator_complimentary/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/isNotOrthogonal/transpose*dcm ~= eye(3)'
 * '<S93>'  : 'URControl/estimators/att_estimator_complimentary/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/isNotProper/Determinant of 3x3 Matrix'
 * '<S94>'  : 'URControl/estimators/att_estimator_complimentary/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/isNotProper/determinant does not equal 1'
 * '<S95>'  : 'URControl/estimators/att_estimator_complimentary/Quaternion Multiplication/q0'
 * '<S96>'  : 'URControl/estimators/att_estimator_complimentary/Quaternion Multiplication/q1'
 * '<S97>'  : 'URControl/estimators/att_estimator_complimentary/Quaternion Multiplication/q2'
 * '<S98>'  : 'URControl/estimators/att_estimator_complimentary/Quaternion Multiplication/q3'
 * '<S99>'  : 'URControl/estimators/att_estimator_complimentary/Quaternions to Rotation Angles/Angle Calculation'
 * '<S100>' : 'URControl/estimators/att_estimator_complimentary/Quaternions to Rotation Angles/Quaternion Normalize'
 * '<S101>' : 'URControl/estimators/att_estimator_complimentary/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input'
 * '<S102>' : 'URControl/estimators/att_estimator_complimentary/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input/If Action Subsystem'
 * '<S103>' : 'URControl/estimators/att_estimator_complimentary/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input/If Action Subsystem1'
 * '<S104>' : 'URControl/estimators/att_estimator_complimentary/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input/If Action Subsystem2'
 * '<S105>' : 'URControl/estimators/att_estimator_complimentary/Quaternions to Rotation Angles/Quaternion Normalize/Quaternion Modulus'
 * '<S106>' : 'URControl/estimators/att_estimator_complimentary/Quaternions to Rotation Angles/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
 * '<S107>' : 'URControl/estimators/att_estimator_complimentary/Quaternions to Rotation Angles1/Angle Calculation'
 * '<S108>' : 'URControl/estimators/att_estimator_complimentary/Quaternions to Rotation Angles1/Quaternion Normalize'
 * '<S109>' : 'URControl/estimators/att_estimator_complimentary/Quaternions to Rotation Angles1/Angle Calculation/Protect asincos input'
 * '<S110>' : 'URControl/estimators/att_estimator_complimentary/Quaternions to Rotation Angles1/Angle Calculation/Protect asincos input/If Action Subsystem'
 * '<S111>' : 'URControl/estimators/att_estimator_complimentary/Quaternions to Rotation Angles1/Angle Calculation/Protect asincos input/If Action Subsystem1'
 * '<S112>' : 'URControl/estimators/att_estimator_complimentary/Quaternions to Rotation Angles1/Angle Calculation/Protect asincos input/If Action Subsystem2'
 * '<S113>' : 'URControl/estimators/att_estimator_complimentary/Quaternions to Rotation Angles1/Quaternion Normalize/Quaternion Modulus'
 * '<S114>' : 'URControl/estimators/att_estimator_complimentary/Quaternions to Rotation Angles1/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
 * '<S115>' : 'URControl/estimators/att_estimator_complimentary/Subsystem/Rotation Angles to Quaternions'
 */
#endif                                 /* RTW_HEADER_URControl_h_ */
