/*
 * URControl.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "URControl".
 *
 * Model version              : 1.1516
 * Simulink Coder version : 9.1 (R2019a) 23-Nov-2018
 * C++ source code generated on : Thu Oct 24 16:18:01 2019
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
#include "URControl_att.h"
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

#ifndef rtmGetErrorStatusPointer
# define rtmGetErrorStatusPointer(rtm) ((const char_T **)(&((rtm)->errorStatus)))
#endif

/* Block signals for system '<S21>/MATLAB Function' */
typedef struct {
  real_T psi;                          /* '<S21>/MATLAB Function' */
} B_MATLABFunction_URControl_T;

/* Block states (default storage) for system '<S21>/MATLAB Function' */
typedef struct {
  real_T psi_last;                     /* '<S21>/MATLAB Function' */
} DW_MATLABFunction_URControl_T;

/* Block signals for system '<S21>/MATLAB Function2' */
typedef struct {
  real_T lambda;                       /* '<S21>/MATLAB Function2' */
} B_MATLABFunction2_URControl_T;

/* Block signals for system '<S21>/MATLAB Function3' */
typedef struct {
  real_T y;                            /* '<S21>/MATLAB Function3' */
} B_MATLABFunction3_URControl_T;

/* Block signals for system '<S21>/unwrap2pi' */
typedef struct {
  real_T psi;                          /* '<S21>/unwrap2pi' */
} B_unwrap2pi_URControl_T;

/* Block states (default storage) for system '<S21>/unwrap2pi' */
typedef struct {
  real_T psi_last;                     /* '<S21>/unwrap2pi' */
  real_T N;                            /* '<S21>/unwrap2pi' */
  boolean_T psi_last_not_empty;        /* '<S21>/unwrap2pi' */
} DW_unwrap2pi_URControl_T;

/* Block signals (default storage) */
typedef struct {
  real_T att_ekfquat[3];               /* '<S20>/Flip1' */
  real_T Euler_flip[3];                /* '<S21>/Flip' */
  real_T Probe[2];                     /* '<S8>/Probe' */
  real_T Probe_d[2];                   /* '<S12>/Probe' */
  real_T wRotorSet[4];                 /* '<S5>/URControl_att' */
  real_T Merge[4];                     /* '<S42>/Merge' */
  real_T Ftot_ref;                     /* '<S4>/altitude control' */
  B_unwrap2pi_URControl_T sf_unwrap2pi_m;/* '<S23>/unwrap2pi' */
  B_MATLABFunction3_URControl_T sf_MATLABFunction4_k;/* '<S23>/MATLAB Function4' */
  B_MATLABFunction3_URControl_T sf_MATLABFunction3_g;/* '<S23>/MATLAB Function3' */
  B_MATLABFunction2_URControl_T sf_MATLABFunction1_k;/* '<S23>/MATLAB Function1' */
  B_MATLABFunction_URControl_T sf_MATLABFunction_m;/* '<S23>/MATLAB Function' */
  B_unwrap2pi_URControl_T sf_unwrap2pi;/* '<S21>/unwrap2pi' */
  B_MATLABFunction3_URControl_T sf_MATLABFunction4;/* '<S21>/MATLAB Function4' */
  B_MATLABFunction3_URControl_T sf_MATLABFunction3;/* '<S21>/MATLAB Function3' */
  B_MATLABFunction2_URControl_T sf_MATLABFunction2;/* '<S21>/MATLAB Function2' */
  B_MATLABFunction_URControl_T sf_MATLABFunction_i;/* '<S21>/MATLAB Function' */
} B_URControl_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  stateBus State;                      /* '<Root>/Data Store Memory1' */
  LPFilter_URControl_T omegaFilter;    /* '<S7>/basic estimators' */
  LPFilter_URControl_T posFilter;      /* '<S7>/basic estimators' */
  LPFilter_URControl_T velFilter;      /* '<S7>/basic estimators' */
  LPFilter_URControl_T accFilter;      /* '<S7>/basic estimators' */
  real_T DiscreteTimeIntegrator_DSTATE;/* '<S21>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator3_DSTATE[3];/* '<S21>/Discrete-Time Integrator3' */
  real_T UD_DSTATE[3];                 /* '<S43>/UD' */
  real_T Delay1_DSTATE[3];             /* '<S21>/Delay1' */
  real_T Delay_DSTATE[4];              /* '<S21>/Delay' */
  real_T Delay_DSTATE_j[1000];         /* '<Root>/Delay' */
  real_T Integrator_DSTATE[3];         /* '<S11>/Integrator' */
  real_T Integrator_DSTATE_i;          /* '<S15>/Integrator' */
  real_T DiscreteStateSpace_DSTATE[3]; /* '<S20>/Discrete State-Space' */
  real_T DiscreteTimeIntegrator1_DSTATE;/* '<S21>/Discrete-Time Integrator1' */
  real_T DiscreteTimeIntegrator_DSTATE_d;/* '<S23>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator1_DSTAT_h;/* '<S23>/Discrete-Time Integrator1' */
  real_T Memory_PreviousInput[4];      /* '<S20>/Memory' */
  real_T P[100];                       /* '<S24>/DataStoreMemory - P' */
  real_T x[10];                        /* '<S24>/DataStoreMemory - x' */
  real_T failProt;                     /* '<S7>/basic estimators' */
  real_T attPrev[3];                   /* '<S20>/enableMeas' */
  real_T errorInt[3];                  /* '<S4>/position control' */
  real_T errorInt_g;                   /* '<S4>/altitude control' */
  real_T fallCount;                    /* '<S3>/MATLAB Function' */
  real_T thrown;                       /* '<S3>/MATLAB Function' */
  real_T flipTime;                     /* '<S3>/MATLAB Function' */
  void* Assertion_slioAccessor;        /* '<S91>/Assertion' */
  void* Assertion_slioAccessor_a;      /* '<S92>/Assertion' */
  void* Assertion_slioAccessor_o;      /* '<S93>/Assertion' */
  void* Assertion_slioAccessor_oz;     /* '<S94>/Assertion' */
  int8_T Integrator_PrevResetState;    /* '<S11>/Integrator' */
  int8_T Integrator_PrevResetState_i;  /* '<S15>/Integrator' */
  uint8_T Integrator_IC_LOADING;       /* '<S11>/Integrator' */
  uint8_T Integrator_IC_LOADING_a;     /* '<S15>/Integrator' */
  boolean_T omegaFilter_not_empty;     /* '<S7>/basic estimators' */
  boolean_T posFilter_not_empty;       /* '<S7>/basic estimators' */
  boolean_T velFilter_not_empty;       /* '<S7>/basic estimators' */
  boolean_T accFilter_not_empty;       /* '<S7>/basic estimators' */
  DW_unwrap2pi_URControl_T sf_unwrap2pi_m;/* '<S23>/unwrap2pi' */
  DW_MATLABFunction_URControl_T sf_MATLABFunction_m;/* '<S23>/MATLAB Function' */
  DW_unwrap2pi_URControl_T sf_unwrap2pi;/* '<S21>/unwrap2pi' */
  DW_MATLABFunction_URControl_T sf_MATLABFunction_i;/* '<S21>/MATLAB Function' */
} DW_URControl_T;

/* data stores shared across model instances, for system '<Root>' */
typedef struct {
  daqBus DAQ;                          /* '<Root>/Data Store Memory' */
} SharedDSM_URControl_T;

/* Invariant block signals (default storage) */
typedef const struct tag_ConstB_URControl_T {
  real_T u2[3];                        /* '<S58>/1//2' */
  real_T sincos_o1[3];                 /* '<S58>/sincos' */
  real_T sincos_o2[3];                 /* '<S58>/sincos' */
  real_T q0;                           /* '<S58>/q0' */
  real_T q1;                           /* '<S58>/q1' */
  real_T q2;                           /* '<S58>/q2' */
  real_T q3;                           /* '<S58>/q3' */
} ConstB_URControl_T;

/* Constant parameters (default storage) */
typedef struct {
  /* Expression: par
   * Referenced by: '<S7>/basic estimators'
   */
  struct_nx1AFo4IX5U7V8SxjQxOx basicestimators_par;
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
  int32_T fail_flag;                   /* '<Root>/fail_flag' */
  real32_T manual[3];                  /* '<Root>/manual' */
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
extern const ConstB_URControl_T URControl_ConstB;/* constant block i/o */

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
                                            *   '<S5>/URControl_att'
                                            *   '<S7>/basic estimators'
                                            *   '<S21>/MATLAB Function'
                                            *   '<S21>/MATLAB Function11'
                                            *   '<S21>/Gain2'
                                            *   '<S23>/MATLAB Function'
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

  /* model instance variable for '<S5>/URControl_att' */
  URControl_attModelClass URControl_attMDLOBJ1;
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
 * '<S23>'  : 'URControl/estimators/psi_estimator_complimentary'
 * '<S24>'  : 'URControl/estimators/EKFQuat/Extended Kalman Filter'
 * '<S25>'  : 'URControl/estimators/EKFQuat/MATLAB Function'
 * '<S26>'  : 'URControl/estimators/EKFQuat/Quaternions to Rotation Angles'
 * '<S27>'  : 'URControl/estimators/EKFQuat/Rotation Angles to Quaternions'
 * '<S28>'  : 'URControl/estimators/EKFQuat/enableMeas'
 * '<S29>'  : 'URControl/estimators/EKFQuat/Extended Kalman Filter/Correct1'
 * '<S30>'  : 'URControl/estimators/EKFQuat/Extended Kalman Filter/Output'
 * '<S31>'  : 'URControl/estimators/EKFQuat/Extended Kalman Filter/Predict'
 * '<S32>'  : 'URControl/estimators/EKFQuat/Extended Kalman Filter/Correct1/Correct'
 * '<S33>'  : 'URControl/estimators/EKFQuat/Extended Kalman Filter/Predict/Predict'
 * '<S34>'  : 'URControl/estimators/EKFQuat/Quaternions to Rotation Angles/Angle Calculation'
 * '<S35>'  : 'URControl/estimators/EKFQuat/Quaternions to Rotation Angles/Quaternion Normalize'
 * '<S36>'  : 'URControl/estimators/EKFQuat/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input'
 * '<S37>'  : 'URControl/estimators/EKFQuat/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input/If Action Subsystem'
 * '<S38>'  : 'URControl/estimators/EKFQuat/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input/If Action Subsystem1'
 * '<S39>'  : 'URControl/estimators/EKFQuat/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input/If Action Subsystem2'
 * '<S40>'  : 'URControl/estimators/EKFQuat/Quaternions to Rotation Angles/Quaternion Normalize/Quaternion Modulus'
 * '<S41>'  : 'URControl/estimators/EKFQuat/Quaternions to Rotation Angles/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
 * '<S42>'  : 'URControl/estimators/att_estimator_complimentary/Direction Cosine Matrix  to Quaternions'
 * '<S43>'  : 'URControl/estimators/att_estimator_complimentary/Discrete Derivative'
 * '<S44>'  : 'URControl/estimators/att_estimator_complimentary/MATLAB Function'
 * '<S45>'  : 'URControl/estimators/att_estimator_complimentary/MATLAB Function1'
 * '<S46>'  : 'URControl/estimators/att_estimator_complimentary/MATLAB Function11'
 * '<S47>'  : 'URControl/estimators/att_estimator_complimentary/MATLAB Function12'
 * '<S48>'  : 'URControl/estimators/att_estimator_complimentary/MATLAB Function13'
 * '<S49>'  : 'URControl/estimators/att_estimator_complimentary/MATLAB Function2'
 * '<S50>'  : 'URControl/estimators/att_estimator_complimentary/MATLAB Function3'
 * '<S51>'  : 'URControl/estimators/att_estimator_complimentary/MATLAB Function4'
 * '<S52>'  : 'URControl/estimators/att_estimator_complimentary/MATLAB Function6'
 * '<S53>'  : 'URControl/estimators/att_estimator_complimentary/MATLAB Function8'
 * '<S54>'  : 'URControl/estimators/att_estimator_complimentary/Quaternion Multiplication'
 * '<S55>'  : 'URControl/estimators/att_estimator_complimentary/Quaternion Normalize'
 * '<S56>'  : 'URControl/estimators/att_estimator_complimentary/Quaternions to Rotation Angles'
 * '<S57>'  : 'URControl/estimators/att_estimator_complimentary/Quaternions to Rotation Angles1'
 * '<S58>'  : 'URControl/estimators/att_estimator_complimentary/Rotation Angles to Quaternions'
 * '<S59>'  : 'URControl/estimators/att_estimator_complimentary/unwrap2pi'
 * '<S60>'  : 'URControl/estimators/att_estimator_complimentary/Direction Cosine Matrix  to Quaternions/Negative Trace'
 * '<S61>'  : 'URControl/estimators/att_estimator_complimentary/Direction Cosine Matrix  to Quaternions/Positive Trace'
 * '<S62>'  : 'URControl/estimators/att_estimator_complimentary/Direction Cosine Matrix  to Quaternions/Validate DCM'
 * '<S63>'  : 'URControl/estimators/att_estimator_complimentary/Direction Cosine Matrix  to Quaternions/trace(DCM)'
 * '<S64>'  : 'URControl/estimators/att_estimator_complimentary/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)'
 * '<S65>'  : 'URControl/estimators/att_estimator_complimentary/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)'
 * '<S66>'  : 'URControl/estimators/att_estimator_complimentary/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)'
 * '<S67>'  : 'URControl/estimators/att_estimator_complimentary/Direction Cosine Matrix  to Quaternions/Negative Trace/diag(DCM)'
 * '<S68>'  : 'URControl/estimators/att_estimator_complimentary/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/cos(phi)sin(theta)cos(psi) + sin(phi)sin(psi) -sin(theta)'
 * '<S69>'  : 'URControl/estimators/att_estimator_complimentary/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/cos(theta)sin(phi) - (cos(phi)sin(theta)sin(psi) - sin(phi)cos(psi))'
 * '<S70>'  : 'URControl/estimators/att_estimator_complimentary/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/cos(theta)sin(psi) + (sin(phi)sin(theta)cos(psi) - cos(phi)sin(psi))'
 * '<S71>'  : 'URControl/estimators/att_estimator_complimentary/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/if s~=0; s=0.5//s'
 * '<S72>'  : 'URControl/estimators/att_estimator_complimentary/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/u(1) -(u(5)+u(9)) +1'
 * '<S73>'  : 'URControl/estimators/att_estimator_complimentary/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/cos(phi)sin(theta)cos(psi) + sin(phi)sin(psi) +sin(theta)'
 * '<S74>'  : 'URControl/estimators/att_estimator_complimentary/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/cos(theta)sin(phi) + (cos(phi)sin(theta)sin(psi) - sin(phi)cos(psi))'
 * '<S75>'  : 'URControl/estimators/att_estimator_complimentary/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/cos(theta)sin(psi) + (sin(phi)sin(theta)cos(psi) - cos(phi)sin(psi))'
 * '<S76>'  : 'URControl/estimators/att_estimator_complimentary/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/if s~=0; s=0.5//s'
 * '<S77>'  : 'URControl/estimators/att_estimator_complimentary/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/u(5) -(u(1)+u(9)) +1'
 * '<S78>'  : 'URControl/estimators/att_estimator_complimentary/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/cos(phi)sin(theta)cos(psi) + sin(phi)sin(psi) -sin(theta)'
 * '<S79>'  : 'URControl/estimators/att_estimator_complimentary/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/cos(theta)sin(phi) + (cos(phi)sin(theta)sin(psi) - sin(phi)cos(psi))'
 * '<S80>'  : 'URControl/estimators/att_estimator_complimentary/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/cos(theta)sin(psi) - (sin(phi)sin(theta)cos(psi) - cos(phi)sin(psi))'
 * '<S81>'  : 'URControl/estimators/att_estimator_complimentary/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/if s~=0; s=0.5//s'
 * '<S82>'  : 'URControl/estimators/att_estimator_complimentary/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/u(9) -(u(1)+u(5)) +1'
 * '<S83>'  : 'URControl/estimators/att_estimator_complimentary/Direction Cosine Matrix  to Quaternions/Positive Trace/cos(phi)sin(theta)cos(psi) + sin(phi)sin(psi) +sin(theta)'
 * '<S84>'  : 'URControl/estimators/att_estimator_complimentary/Direction Cosine Matrix  to Quaternions/Positive Trace/cos(theta)sin(phi) - (cos(phi)sin(theta)sin(psi) - sin(phi)cos(psi))'
 * '<S85>'  : 'URControl/estimators/att_estimator_complimentary/Direction Cosine Matrix  to Quaternions/Positive Trace/cos(theta)sin(psi) - (sin(phi)sin(theta)cos(psi) - cos(phi)sin(psi))'
 * '<S86>'  : 'URControl/estimators/att_estimator_complimentary/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error'
 * '<S87>'  : 'URControl/estimators/att_estimator_complimentary/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/Else If Not Orthogonal'
 * '<S88>'  : 'URControl/estimators/att_estimator_complimentary/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/If Not Proper'
 * '<S89>'  : 'URControl/estimators/att_estimator_complimentary/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/isNotOrthogonal'
 * '<S90>'  : 'URControl/estimators/att_estimator_complimentary/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/isNotProper'
 * '<S91>'  : 'URControl/estimators/att_estimator_complimentary/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/Else If Not Orthogonal/Error'
 * '<S92>'  : 'URControl/estimators/att_estimator_complimentary/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/Else If Not Orthogonal/Warning'
 * '<S93>'  : 'URControl/estimators/att_estimator_complimentary/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/If Not Proper/Error'
 * '<S94>'  : 'URControl/estimators/att_estimator_complimentary/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/If Not Proper/Warning'
 * '<S95>'  : 'URControl/estimators/att_estimator_complimentary/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/isNotOrthogonal/transpose*dcm ~= eye(3)'
 * '<S96>'  : 'URControl/estimators/att_estimator_complimentary/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/isNotProper/Determinant of 3x3 Matrix'
 * '<S97>'  : 'URControl/estimators/att_estimator_complimentary/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/isNotProper/determinant does not equal 1'
 * '<S98>'  : 'URControl/estimators/att_estimator_complimentary/Quaternion Multiplication/q0'
 * '<S99>'  : 'URControl/estimators/att_estimator_complimentary/Quaternion Multiplication/q1'
 * '<S100>' : 'URControl/estimators/att_estimator_complimentary/Quaternion Multiplication/q2'
 * '<S101>' : 'URControl/estimators/att_estimator_complimentary/Quaternion Multiplication/q3'
 * '<S102>' : 'URControl/estimators/att_estimator_complimentary/Quaternion Normalize/Quaternion Modulus'
 * '<S103>' : 'URControl/estimators/att_estimator_complimentary/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
 * '<S104>' : 'URControl/estimators/att_estimator_complimentary/Quaternions to Rotation Angles/Angle Calculation'
 * '<S105>' : 'URControl/estimators/att_estimator_complimentary/Quaternions to Rotation Angles/Quaternion Normalize'
 * '<S106>' : 'URControl/estimators/att_estimator_complimentary/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input'
 * '<S107>' : 'URControl/estimators/att_estimator_complimentary/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input/If Action Subsystem'
 * '<S108>' : 'URControl/estimators/att_estimator_complimentary/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input/If Action Subsystem1'
 * '<S109>' : 'URControl/estimators/att_estimator_complimentary/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input/If Action Subsystem2'
 * '<S110>' : 'URControl/estimators/att_estimator_complimentary/Quaternions to Rotation Angles/Quaternion Normalize/Quaternion Modulus'
 * '<S111>' : 'URControl/estimators/att_estimator_complimentary/Quaternions to Rotation Angles/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
 * '<S112>' : 'URControl/estimators/att_estimator_complimentary/Quaternions to Rotation Angles1/Angle Calculation'
 * '<S113>' : 'URControl/estimators/att_estimator_complimentary/Quaternions to Rotation Angles1/Quaternion Normalize'
 * '<S114>' : 'URControl/estimators/att_estimator_complimentary/Quaternions to Rotation Angles1/Angle Calculation/Protect asincos input'
 * '<S115>' : 'URControl/estimators/att_estimator_complimentary/Quaternions to Rotation Angles1/Angle Calculation/Protect asincos input/If Action Subsystem'
 * '<S116>' : 'URControl/estimators/att_estimator_complimentary/Quaternions to Rotation Angles1/Angle Calculation/Protect asincos input/If Action Subsystem1'
 * '<S117>' : 'URControl/estimators/att_estimator_complimentary/Quaternions to Rotation Angles1/Angle Calculation/Protect asincos input/If Action Subsystem2'
 * '<S118>' : 'URControl/estimators/att_estimator_complimentary/Quaternions to Rotation Angles1/Quaternion Normalize/Quaternion Modulus'
 * '<S119>' : 'URControl/estimators/att_estimator_complimentary/Quaternions to Rotation Angles1/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
 * '<S120>' : 'URControl/estimators/psi_estimator_complimentary/MATLAB Function'
 * '<S121>' : 'URControl/estimators/psi_estimator_complimentary/MATLAB Function1'
 * '<S122>' : 'URControl/estimators/psi_estimator_complimentary/MATLAB Function3'
 * '<S123>' : 'URControl/estimators/psi_estimator_complimentary/MATLAB Function4'
 * '<S124>' : 'URControl/estimators/psi_estimator_complimentary/unwrap2pi'
 */
#endif                                 /* RTW_HEADER_URControl_h_ */
