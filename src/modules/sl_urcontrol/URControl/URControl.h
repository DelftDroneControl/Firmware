/*
 * URControl.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "URControl".
 *
 * Model version              : 1.897
 * Simulink Coder version : 9.1 (R2019a) 23-Nov-2018
 * C++ source code generated on : Tue Aug 13 23:46:37 2019
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
#include <stddef.h>
#ifndef URControl_COMMON_INCLUDES_
# define URControl_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* URControl_COMMON_INCLUDES_ */

#include "URControl_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#include "rtGetNaN.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block signals (default storage) */
typedef struct {
  real_T att_ekfquat[3];               /* '<S25>/Flip1' */
  real_T Probe[2];                     /* '<S9>/Probe' */
  real_T Probe_d[2];                   /* '<S13>/Probe' */
} B_URControl_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  daqBus DAQ;                          /* '<Root>/Data Store Memory' */
  stateBus State;                      /* '<Root>/Data Store Memory1' */
  SimpleDerivative_URControl_T omegaDot;/* '<S8>/control allocator' */
  SimpleDerivative_URControl_T errorD; /* '<S8>/control allocator' */
  SimpleDerivative_URControl_T uvrDer; /* '<S8>/control allocator' */
  SimpleDerivative_URControl_T omegaDot_h;/* '<S8>/control allocator' */
  LPFilter_2_URControl_T wRotorFilter; /* '<S8>/control allocator' */
  LPFilter_URControl_T omegaFilter;    /* '<S7>/basic estimators' */
  LPFilter_URControl_T posFilter;      /* '<S7>/basic estimators' */
  LPFilter_URControl_T velFilter;      /* '<S7>/basic estimators' */
  LPFilter_URControl_T accFilter;      /* '<S7>/basic estimators' */
  LPFilter_1_URControl_T accZFilt;     /* '<S8>/control allocator' */
  real_T Delay_DSTATE[1000];           /* '<Root>/Delay' */
  real_T Integrator_DSTATE[3];         /* '<S12>/Integrator' */
  real_T Integrator_DSTATE_i;          /* '<S16>/Integrator' */
  real_T DiscreteStateSpace_DSTATE[3]; /* '<S5>/Discrete State-Space' */
  real_T DiscreteStateSpace_DSTATE_i[3];/* '<S25>/Discrete State-Space' */
  real_T Memory_PreviousInput[4];      /* '<S25>/Memory' */
  real_T P[100];                       /* '<S27>/DataStoreMemory - P' */
  real_T x[10];                        /* '<S27>/DataStoreMemory - x' */
  real_T y_state_prev[4];              /* '<S8>/control allocator' */
  real_T Fset_prev[4];                 /* '<S8>/control allocator' */
  real_T M_uvr_set[3];                 /* '<S8>/control allocator' */
  real_T du_last[4];                   /* '<S8>/control allocator' */
  real_T errorInt[3];                  /* '<S8>/control allocator' */
  real_T failProt;                     /* '<S7>/basic estimators' */
  real_T attPrev[3];                   /* '<S25>/enableMeas' */
  real_T errorInt_o[3];                /* '<S4>/position control' */
  real_T errorInt_g;                   /* '<S4>/altitude control' */
  real_T fallCount;                    /* '<S3>/MATLAB Function' */
  real_T thrown;                       /* '<S3>/MATLAB Function' */
  real_T flipTime;                     /* '<S3>/MATLAB Function' */
  int8_T Integrator_PrevResetState;    /* '<S12>/Integrator' */
  int8_T Integrator_PrevResetState_i;  /* '<S16>/Integrator' */
  uint8_T Integrator_IC_LOADING;       /* '<S12>/Integrator' */
  uint8_T Integrator_IC_LOADING_a;     /* '<S16>/Integrator' */
  boolean_T omegaDot_not_empty;        /* '<S8>/control allocator' */
  boolean_T accZFilt_not_empty;        /* '<S8>/control allocator' */
  boolean_T errorD_not_empty;          /* '<S8>/control allocator' */
  boolean_T uvrDer_not_empty;          /* '<S8>/control allocator' */
  boolean_T omegaDot_not_empty_e;      /* '<S8>/control allocator' */
  boolean_T wRotorFilter_not_empty;    /* '<S8>/control allocator' */
  boolean_T omegaFilter_not_empty;     /* '<S7>/basic estimators' */
  boolean_T posFilter_not_empty;       /* '<S7>/basic estimators' */
  boolean_T velFilter_not_empty;       /* '<S7>/basic estimators' */
  boolean_T accFilter_not_empty;       /* '<S7>/basic estimators' */
} DW_URControl_T;

/* Constant parameters (default storage) */
typedef struct {
  /* Expression: par
   * Referenced by: '<S5>/attitude controller'
   */
  struct_qSGzN42JHiR9ghZIF0bJQG attitudecontroller_par;

  /* Expression: par
   * Referenced by: '<S7>/basic estimators'
   */
  struct_qSGzN42JHiR9ghZIF0bJQG basicestimators_par;

  /* Expression: par
   * Referenced by: '<S8>/control allocator'
   */
  struct_qSGzN42JHiR9ghZIF0bJQG controlallocator_par;
} ConstP_URControl_T;

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
                                            *   '<S5>/Precession'
                                            *   '<S5>/attitude controller'
                                            *   '<S5>/yawRateControl'
                                            *   '<S7>/basic estimators'
                                            *   '<S8>/control allocator'
                                            */

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

  /* Real-Time Model */
  RT_MODEL_URControl_T URControl_M;

  /* private member function(s) for subsystem '<Root>'*/
  void URControl_LPFilter_update(LPFilter_URControl_T *obj, const real_T
    newValue[3]);
  void URControl_URAngleControl(daqBus *daq, const real_T nd_i[3], const real_T
    primAxis[3], const stateBus *state, const struct_qSGzN42JHiR9ghZIF0bJQG
    *b_par, const URControlParamsType *URpar, real_T uv_attCtrl[2], real_T
    rotVec[2]);
  SimpleDerivative_URControl_T *SimpleDerivative_SimpleDerivati
    (SimpleDerivative_URControl_T *obj, real_T filterT, const real_T initValue[3],
     real_T maxLim, real_T minLim);
  LPFilter_1_URControl_T *URControl_LPFilter_LPFilter(LPFilter_1_URControl_T
    *obj, real_T filterT);
  void URContr_SimpleDerivative_update(SimpleDerivative_URControl_T *obj, const
    real_T newValue[3], real_T dt);
  void URControl_xswap(int32_T n, real_T x_data[], int32_T ix0, int32_T iy0);
  real_T URControl_xnrm2(int32_T n, const real_T x_data[], int32_T ix0);
  void URControl_xzlarf(int32_T m, int32_T n, int32_T iv0, real_T tau, real_T
                        C_data[], int32_T ic0, int32_T ldc, real_T work_data[]);
  void URControl_xgeqp3(real_T A_data[], int32_T A_size[2], real_T tau_data[],
                        int32_T *tau_size, int32_T jpvt_data[], int32_T
                        jpvt_size[2]);
  void URControl_lusolve(const real_T A_data[], const int32_T A_size[2], real_T
    B_data[]);
  void URControl_mldivide(const real_T A_data[], const int32_T A_size[2], const
    real_T B_data[], const int32_T *B_size, real_T Y_data[], int32_T *Y_size);
  void URControl_QPINDI(const real_T inp[4], const real_T G[16], const real_T K
                        [16], const real_T K2[16], const real_T lowBound[4],
                        const real_T highBound[4], real_T y_state_init[4],
                        real_T x[4], real_T *iterSteps, real_T *optimal);
  void URControl_INDIMomentGen(const real_T state_wRotor[4], const real_T
    state_omegaUV[3], const real_T state_omegafUV[3], daqBus *daq, const real_T
    uvr_des[3], real_T URpar_k0, real_T URpar_t0, real_T URpar_s, real_T
    URpar_est_omegaFilterT, const real_T URpar_rate_MINDI_rateDotKp[3], real_T
    URpar_rate_MINDI_derFilterT, const real_T URpar_rate_MINDI_MKp[3], const
    struct_qSGzN42JHiR9ghZIF0bJQG *b_par, real_T M_uvr[3]);
  void URControl_PIDMomentGen(const real_T state_omegaUV[3], const real_T
    state_omegafUV[3], daqBus *daq, const real_T uvr_des[3], real_T URpar_Iz,
    real_T URpar_Iu, real_T URpar_Iv, const real_T URpar_rate_MPID_rateDotKp[3],
    const real_T URpar_rate_MPID_rateDotKi[3], const real_T
    URpar_rate_MPID_rateDotKd[3], real_T URpar_rate_MPID_derFilterT, real_T
    URpar_rate_MPID_uvrdesderFilter, real_T URpar_rate_MPID_maxInt, real_T
    URpar_rate_MPID_precGain, const struct_qSGzN42JHiR9ghZIF0bJQG *b_par, real_T
    M_uvr[3]);
  void URControl_controlAllocQPQuick(real_T refStruct_MuRef, real_T
    refStruct_MvRef, real_T refStruct_MzRef, real_T refStruct_FtotRef, const
    real_T FMax[4], const real_T FMin[4], real_T gainStruct_MuGain, real_T
    gainStruct_MvGain, real_T gainStruct_MzGain, real_T gainStruct_FGain, real_T
    gainStruct_FtotGain, real_T y_state_init[4], const
    struct_qSGzN42JHiR9ghZIF0bJQG *b_par, real_T URpar_rate_maxIter, real_T x[4],
    real_T *iterSteps, real_T *optimal);
  void URControl_URINDI_allocator(real_T act_fail_id, const real_T Omega_f_dot[3],
    real_T accel_z_f, const real_T v[4], real_T G[32], const real_T w_f[4],
    const struct_qSGzN42JHiR9ghZIF0bJQG *b_par, real_T w_cmd[4]);
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
 * '<S5>'   : 'URControl/attitude controlller'
 * '<S6>'   : 'URControl/conversion to px4'
 * '<S7>'   : 'URControl/estimators'
 * '<S8>'   : 'URControl/rate controller'
 * '<S9>'   : 'URControl/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant'
 * '<S10>'  : 'URControl/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)'
 * '<S11>'  : 'URControl/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Compare To Zero'
 * '<S12>'  : 'URControl/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete'
 * '<S13>'  : 'URControl/Low-Pass Filter (Discrete or Continuous)1/Enable//disable time constant'
 * '<S14>'  : 'URControl/Low-Pass Filter (Discrete or Continuous)1/Integrator (Discrete or Continuous)'
 * '<S15>'  : 'URControl/Low-Pass Filter (Discrete or Continuous)1/Enable//disable time constant/Compare To Zero'
 * '<S16>'  : 'URControl/Low-Pass Filter (Discrete or Continuous)1/Integrator (Discrete or Continuous)/Discrete'
 * '<S17>'  : 'URControl/Overrides/MATLAB Function'
 * '<S18>'  : 'URControl/Targets system/altitude control'
 * '<S19>'  : 'URControl/Targets system/position control'
 * '<S20>'  : 'URControl/Targets system/yaw rate control'
 * '<S21>'  : 'URControl/attitude controlller/Discrete Derivative'
 * '<S22>'  : 'URControl/attitude controlller/Precession'
 * '<S23>'  : 'URControl/attitude controlller/attitude controller'
 * '<S24>'  : 'URControl/attitude controlller/yawRateControl'
 * '<S25>'  : 'URControl/estimators/EKFQuat'
 * '<S26>'  : 'URControl/estimators/basic estimators'
 * '<S27>'  : 'URControl/estimators/EKFQuat/Extended Kalman Filter'
 * '<S28>'  : 'URControl/estimators/EKFQuat/MATLAB Function'
 * '<S29>'  : 'URControl/estimators/EKFQuat/Quaternions to Rotation Angles'
 * '<S30>'  : 'URControl/estimators/EKFQuat/Rotation Angles to Quaternions'
 * '<S31>'  : 'URControl/estimators/EKFQuat/enableMeas'
 * '<S32>'  : 'URControl/estimators/EKFQuat/Extended Kalman Filter/Correct1'
 * '<S33>'  : 'URControl/estimators/EKFQuat/Extended Kalman Filter/Output'
 * '<S34>'  : 'URControl/estimators/EKFQuat/Extended Kalman Filter/Predict'
 * '<S35>'  : 'URControl/estimators/EKFQuat/Extended Kalman Filter/Correct1/Correct'
 * '<S36>'  : 'URControl/estimators/EKFQuat/Extended Kalman Filter/Predict/Predict'
 * '<S37>'  : 'URControl/estimators/EKFQuat/Quaternions to Rotation Angles/Angle Calculation'
 * '<S38>'  : 'URControl/estimators/EKFQuat/Quaternions to Rotation Angles/Quaternion Normalize'
 * '<S39>'  : 'URControl/estimators/EKFQuat/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input'
 * '<S40>'  : 'URControl/estimators/EKFQuat/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input/If Action Subsystem'
 * '<S41>'  : 'URControl/estimators/EKFQuat/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input/If Action Subsystem1'
 * '<S42>'  : 'URControl/estimators/EKFQuat/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input/If Action Subsystem2'
 * '<S43>'  : 'URControl/estimators/EKFQuat/Quaternions to Rotation Angles/Quaternion Normalize/Quaternion Modulus'
 * '<S44>'  : 'URControl/estimators/EKFQuat/Quaternions to Rotation Angles/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
 * '<S45>'  : 'URControl/rate controller/control allocator'
 */
#endif                                 /* RTW_HEADER_URControl_h_ */
