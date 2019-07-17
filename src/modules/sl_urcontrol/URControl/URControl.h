/*
 * URControl.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "URControl".
 *
 * Model version              : 1.874
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C++ source code generated on : Wed Jul 17 14:39:49 2019
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_URControl_h_
#define RTW_HEADER_URControl_h_
#include <string.h>
#include <cmath>
#include <math.h>
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
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"
#include "rt_defines.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block signals (default storage) */
typedef struct {
  real_T att_ekfquat[3];               /* '<S15>/Flip1' */
} B_URControl_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  daqBus DAQ;                          /* '<Root>/Data Store Memory' */
  stateBus State;                      /* '<Root>/Data Store Memory1' */
  SimpleDerivative_URControl_T omegaDot;/* '<S6>/control allocator' */
  SimpleDerivative_URControl_T errorD; /* '<S6>/control allocator' */
  SimpleDerivative_URControl_T uvrDer; /* '<S6>/control allocator' */
  SimpleDerivative_URControl_T omegaDot_p;/* '<S6>/control allocator' */
  LPFilter_2_URControl_T wRotorFilter; /* '<S6>/control allocator' */
  LPFilter_URControl_T omegaFilter;    /* '<S5>/basic estimators' */
  LPFilter_URControl_T posFilter;      /* '<S5>/basic estimators' */
  LPFilter_URControl_T velFilter;      /* '<S5>/basic estimators' */
  LPFilter_URControl_T accFilter;      /* '<S5>/basic estimators' */
  LPFilter_1_URControl_T accZFilt;     /* '<S6>/control allocator' */
  real_T Delay_DSTATE[1000];           /* '<Root>/Delay' */
  real_T DiscreteStateSpace_DSTATE[3]; /* '<S3>/Discrete State-Space' */
  real_T DiscreteStateSpace_DSTATE_i[3];/* '<S15>/Discrete State-Space' */
  real_T Memory_PreviousInput[4];      /* '<S15>/Memory' */
  real_T P[100];                       /* '<S18>/DataStoreMemory - P' */
  real_T x[10];                        /* '<S18>/DataStoreMemory - x' */
  real_T y_state_prev[4];              /* '<S6>/control allocator' */
  real_T Fset_prev[4];                 /* '<S6>/control allocator' */
  real_T M_uvr_set[3];                 /* '<S6>/control allocator' */
  real_T du_last[4];                   /* '<S6>/control allocator' */
  real_T errorInt[3];                  /* '<S6>/control allocator' */
  real_T attPrev[3];                   /* '<S15>/enableMeas' */
  real_T errorInt_p[3];                /* '<S2>/position control' */
  real_T errorInt_b;                   /* '<S2>/altitude control' */
  real_T fallCount;                    /* '<S1>/MATLAB Function' */
  real_T thrown;                       /* '<S1>/MATLAB Function' */
  real_T flipTime;                     /* '<S1>/MATLAB Function' */
  boolean_T omegaDot_not_empty;        /* '<S6>/control allocator' */
  boolean_T accZFilt_not_empty;        /* '<S6>/control allocator' */
  boolean_T errorD_not_empty;          /* '<S6>/control allocator' */
  boolean_T uvrDer_not_empty;          /* '<S6>/control allocator' */
  boolean_T omegaDot_not_empty_l;      /* '<S6>/control allocator' */
  boolean_T wRotorFilter_not_empty;    /* '<S6>/control allocator' */
  boolean_T omegaFilter_not_empty;     /* '<S5>/basic estimators' */
  boolean_T posFilter_not_empty;       /* '<S5>/basic estimators' */
  boolean_T velFilter_not_empty;       /* '<S5>/basic estimators' */
  boolean_T accFilter_not_empty;       /* '<S5>/basic estimators' */
} DW_URControl_T;

/* Constant parameters (default storage) */
typedef struct {
  /* Pooled Parameter (Expression: par)
   * Referenced by:
   *   '<Root>/conversion to px4'
   *   '<S1>/MATLAB Function'
   *   '<S2>/altitude control'
   *   '<S2>/position control'
   *   '<S2>/yaw rate control'
   *   '<S3>/Precession'
   *   '<S3>/attitude controller'
   *   '<S3>/yawRateControl'
   *   '<S5>/basic estimators'
   *   '<S6>/control allocator'
   */
  struct_HII8N3zGC7mDOCUhLU7JpB pooled1;

  /* Expression: p.R{1}
   * Referenced by: '<S18>/R1'
   */
  real_T R1_Value[49];

  /* Expression: p.Q
   * Referenced by: '<S18>/Q'
   */
  real_T Q_Value[100];

  /* Expression: p.InitialCovariance
   * Referenced by: '<S18>/DataStoreMemory - P'
   */
  real_T DataStoreMemoryP_InitialValue[100];

  /* Expression: p.InitialState
   * Referenced by: '<S18>/DataStoreMemory - x'
   */
  real_T DataStoreMemoryx_InitialValue[10];
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
                                            *   '<S1>/MATLAB Function'
                                            *   '<S2>/altitude control'
                                            *   '<S2>/position control'
                                            *   '<S2>/yaw rate control'
                                            *   '<S3>/Precession'
                                            *   '<S3>/attitude controller'
                                            *   '<S3>/yawRateControl'
                                            *   '<S5>/basic estimators'
                                            *   '<S6>/control allocator'
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
  real_T URControl_norm_d(const real_T x[4]);
  void URControl_mrdivide_helper(real_T A[70], const real_T B[49]);
  void URControl_mod(const real_T x[3], real_T r[3]);
  void URControl_LPFilter_update(LPFilter_URControl_T *obj, const real_T
    newValue[3]);
  real_T URControl_norm(const real_T x[3]);
  real_T URControl_URTrajCalc(real_T theta0, real_T w0, real_T accMax);
  SimpleDerivative_URControl_T *SimpleDerivative_SimpleDerivati
    (SimpleDerivative_URControl_T *obj, real_T filterT, const real_T initValue[3],
     real_T maxLim, real_T minLim);
  LPFilter_1_URControl_T *URControl_LPFilter_LPFilter(LPFilter_1_URControl_T
    *obj, real_T filterT);
  void URContr_SimpleDerivative_update(SimpleDerivative_URControl_T *obj, const
    real_T newValue[3], real_T dt);
  void URControl_xswap_l(int32_T n, real_T x_data[], int32_T ix0, int32_T iy0);
  real_T URControl_xnrm2_fx(int32_T n, const real_T x_data[], int32_T ix0);
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
    URpar_rate_MINDI_derFilterT, const real_T URpar_rate_MINDI_MKp[3], real_T
    b_par_freq, real_T M_uvr[3]);
  void URControl_PIDMomentGen(const real_T state_omegaUV[3], const real_T
    state_omegafUV[3], daqBus *daq, const real_T uvr_des[3], real_T URpar_Iz,
    real_T URpar_Iu, real_T URpar_Iv, const real_T URpar_rate_MPID_rateDotKp[3],
    const real_T URpar_rate_MPID_rateDotKi[3], const real_T
    URpar_rate_MPID_rateDotKd[3], real_T URpar_rate_MPID_derFilterT, real_T
    URpar_rate_MPID_uvrdesderFilter, real_T URpar_rate_MPID_maxInt, real_T
    URpar_rate_MPID_precGain, real_T b_par_freq, real_T M_uvr[3]);
  void URControl_controlAllocQPQuick(real_T refStruct_MuRef, real_T
    refStruct_MvRef, real_T refStruct_MzRef, real_T refStruct_FtotRef, const
    real_T FMax[4], const real_T FMin[4], real_T gainStruct_MuGain, real_T
    gainStruct_MvGain, real_T gainStruct_FtotGain, real_T gainStruct_FGain,
    real_T gainStruct_MzGain, real_T y_state_init[4], real_T b_par_URC_k0,
    real_T b_par_URC_t0, real_T b_par_URC_s, real_T URpar_rate_maxIter, real_T
    x[4], real_T *iterSteps, real_T *optimal);
  void URControl_sqrt(real_T x[4]);
  real_T URControl_sum(const real_T x[4]);
  real_T URControl_eps(real_T x);
  real_T URControl_xnrm2(int32_T n, const real_T x[16], int32_T ix0);
  real_T URControl_xnrm2_f(int32_T n, const real_T x[4], int32_T ix0);
  void URControl_xaxpy_hq(int32_T n, real_T a, const real_T x[4], int32_T ix0,
    real_T y[16], int32_T iy0);
  void URControl_xaxpy_h(int32_T n, real_T a, const real_T x[16], int32_T ix0,
    real_T y[4], int32_T iy0);
  real_T URControl_xdotc(int32_T n, const real_T x[16], int32_T ix0, const
    real_T y[16], int32_T iy0);
  void URControl_xaxpy(int32_T n, real_T a, int32_T ix0, real_T y[16], int32_T
                       iy0);
  void URControl_xscal(real_T a, real_T x[16], int32_T ix0);
  void URControl_xswap(real_T x[16], int32_T ix0, int32_T iy0);
  void URControl_xrotg(real_T *a, real_T *b, real_T *c, real_T *s);
  void URControl_xrot(real_T x[16], int32_T ix0, int32_T iy0, real_T c, real_T s);
  void URControl_svd(const real_T A[16], real_T U[16], real_T s[4], real_T V[16]);
  void URControl_pinv(const real_T A[16], real_T X[16]);
  void URControl_URINDI_allocator(real_T act_fail_id, const real_T Omega_f_dot[3],
    real_T accel_z_f, const real_T v[4], real_T G[32], const real_T w_f[4],
    real_T b_par_w_max, real_T b_par_w_min, real_T w_cmd[4]);
  void URControl_ekf_state_jacob(const real_T x[10], const real_T u[6], real_T
    A[100]);
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
 * '<S1>'   : 'URControl/Overrides'
 * '<S2>'   : 'URControl/Targets system'
 * '<S3>'   : 'URControl/attitude controlller'
 * '<S4>'   : 'URControl/conversion to px4'
 * '<S5>'   : 'URControl/estimators'
 * '<S6>'   : 'URControl/rate controller'
 * '<S7>'   : 'URControl/Overrides/MATLAB Function'
 * '<S8>'   : 'URControl/Targets system/altitude control'
 * '<S9>'   : 'URControl/Targets system/position control'
 * '<S10>'  : 'URControl/Targets system/yaw rate control'
 * '<S11>'  : 'URControl/attitude controlller/Discrete Derivative'
 * '<S12>'  : 'URControl/attitude controlller/Precession'
 * '<S13>'  : 'URControl/attitude controlller/attitude controller'
 * '<S14>'  : 'URControl/attitude controlller/yawRateControl'
 * '<S15>'  : 'URControl/estimators/EKFQuat'
 * '<S16>'  : 'URControl/estimators/basic estimators'
 * '<S17>'  : 'URControl/estimators/omegaFilter'
 * '<S18>'  : 'URControl/estimators/EKFQuat/Extended Kalman Filter'
 * '<S19>'  : 'URControl/estimators/EKFQuat/MATLAB Function'
 * '<S20>'  : 'URControl/estimators/EKFQuat/Quaternions to Rotation Angles'
 * '<S21>'  : 'URControl/estimators/EKFQuat/Rotation Angles to Quaternions'
 * '<S22>'  : 'URControl/estimators/EKFQuat/enableMeas'
 * '<S23>'  : 'URControl/estimators/EKFQuat/Extended Kalman Filter/Correct1'
 * '<S24>'  : 'URControl/estimators/EKFQuat/Extended Kalman Filter/Output'
 * '<S25>'  : 'URControl/estimators/EKFQuat/Extended Kalman Filter/Predict'
 * '<S26>'  : 'URControl/estimators/EKFQuat/Extended Kalman Filter/Correct1/Correct'
 * '<S27>'  : 'URControl/estimators/EKFQuat/Extended Kalman Filter/Predict/Predict'
 * '<S28>'  : 'URControl/estimators/EKFQuat/Quaternions to Rotation Angles/Angle Calculation'
 * '<S29>'  : 'URControl/estimators/EKFQuat/Quaternions to Rotation Angles/Quaternion Normalize'
 * '<S30>'  : 'URControl/estimators/EKFQuat/Quaternions to Rotation Angles/Quaternion Normalize/Quaternion Modulus'
 * '<S31>'  : 'URControl/estimators/EKFQuat/Quaternions to Rotation Angles/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
 * '<S32>'  : 'URControl/estimators/omegaFilter/Discrete PID Controller'
 * '<S33>'  : 'URControl/estimators/omegaFilter/Discrete PID Controller1'
 * '<S34>'  : 'URControl/estimators/omegaFilter/Discrete PID Controller/Anti-windup'
 * '<S35>'  : 'URControl/estimators/omegaFilter/Discrete PID Controller/D Gain'
 * '<S36>'  : 'URControl/estimators/omegaFilter/Discrete PID Controller/Filter'
 * '<S37>'  : 'URControl/estimators/omegaFilter/Discrete PID Controller/Filter ICs'
 * '<S38>'  : 'URControl/estimators/omegaFilter/Discrete PID Controller/I Gain'
 * '<S39>'  : 'URControl/estimators/omegaFilter/Discrete PID Controller/Ideal P Gain'
 * '<S40>'  : 'URControl/estimators/omegaFilter/Discrete PID Controller/Ideal P Gain Fdbk'
 * '<S41>'  : 'URControl/estimators/omegaFilter/Discrete PID Controller/Integrator'
 * '<S42>'  : 'URControl/estimators/omegaFilter/Discrete PID Controller/Integrator ICs'
 * '<S43>'  : 'URControl/estimators/omegaFilter/Discrete PID Controller/N Copy'
 * '<S44>'  : 'URControl/estimators/omegaFilter/Discrete PID Controller/N Gain'
 * '<S45>'  : 'URControl/estimators/omegaFilter/Discrete PID Controller/P Copy'
 * '<S46>'  : 'URControl/estimators/omegaFilter/Discrete PID Controller/Parallel P Gain'
 * '<S47>'  : 'URControl/estimators/omegaFilter/Discrete PID Controller/Reset Signal'
 * '<S48>'  : 'URControl/estimators/omegaFilter/Discrete PID Controller/Saturation'
 * '<S49>'  : 'URControl/estimators/omegaFilter/Discrete PID Controller/Saturation Fdbk'
 * '<S50>'  : 'URControl/estimators/omegaFilter/Discrete PID Controller/Sum'
 * '<S51>'  : 'URControl/estimators/omegaFilter/Discrete PID Controller/Sum Fdbk'
 * '<S52>'  : 'URControl/estimators/omegaFilter/Discrete PID Controller/Tracking Mode'
 * '<S53>'  : 'URControl/estimators/omegaFilter/Discrete PID Controller/Tracking Mode Sum'
 * '<S54>'  : 'URControl/estimators/omegaFilter/Discrete PID Controller/postSat Signal'
 * '<S55>'  : 'URControl/estimators/omegaFilter/Discrete PID Controller/preSat Signal'
 * '<S56>'  : 'URControl/estimators/omegaFilter/Discrete PID Controller/Anti-windup/Back Calculation'
 * '<S57>'  : 'URControl/estimators/omegaFilter/Discrete PID Controller/Anti-windup/Cont. Clamping Ideal'
 * '<S58>'  : 'URControl/estimators/omegaFilter/Discrete PID Controller/Anti-windup/Cont. Clamping Parallel'
 * '<S59>'  : 'URControl/estimators/omegaFilter/Discrete PID Controller/Anti-windup/Disabled'
 * '<S60>'  : 'URControl/estimators/omegaFilter/Discrete PID Controller/Anti-windup/Disc. Clamping Ideal'
 * '<S61>'  : 'URControl/estimators/omegaFilter/Discrete PID Controller/Anti-windup/Disc. Clamping Parallel'
 * '<S62>'  : 'URControl/estimators/omegaFilter/Discrete PID Controller/Anti-windup/Passthrough'
 * '<S63>'  : 'URControl/estimators/omegaFilter/Discrete PID Controller/D Gain/Disabled'
 * '<S64>'  : 'URControl/estimators/omegaFilter/Discrete PID Controller/D Gain/External Parameters'
 * '<S65>'  : 'URControl/estimators/omegaFilter/Discrete PID Controller/D Gain/Internal Parameters'
 * '<S66>'  : 'URControl/estimators/omegaFilter/Discrete PID Controller/Filter/Cont. Filter'
 * '<S67>'  : 'URControl/estimators/omegaFilter/Discrete PID Controller/Filter/Differentiator'
 * '<S68>'  : 'URControl/estimators/omegaFilter/Discrete PID Controller/Filter/Disabled'
 * '<S69>'  : 'URControl/estimators/omegaFilter/Discrete PID Controller/Filter/Disc. Backward Euler Filter'
 * '<S70>'  : 'URControl/estimators/omegaFilter/Discrete PID Controller/Filter/Disc. Forward Euler Filter'
 * '<S71>'  : 'URControl/estimators/omegaFilter/Discrete PID Controller/Filter/Disc. Trapezoidal Filter'
 * '<S72>'  : 'URControl/estimators/omegaFilter/Discrete PID Controller/Filter ICs/Disabled'
 * '<S73>'  : 'URControl/estimators/omegaFilter/Discrete PID Controller/Filter ICs/External IC'
 * '<S74>'  : 'URControl/estimators/omegaFilter/Discrete PID Controller/Filter ICs/Internal IC - Differentiator'
 * '<S75>'  : 'URControl/estimators/omegaFilter/Discrete PID Controller/Filter ICs/Internal IC - Filter'
 * '<S76>'  : 'URControl/estimators/omegaFilter/Discrete PID Controller/I Gain/Disabled'
 * '<S77>'  : 'URControl/estimators/omegaFilter/Discrete PID Controller/I Gain/External Parameters'
 * '<S78>'  : 'URControl/estimators/omegaFilter/Discrete PID Controller/I Gain/Internal Parameters'
 * '<S79>'  : 'URControl/estimators/omegaFilter/Discrete PID Controller/Ideal P Gain/External Parameters'
 * '<S80>'  : 'URControl/estimators/omegaFilter/Discrete PID Controller/Ideal P Gain/Internal Parameters'
 * '<S81>'  : 'URControl/estimators/omegaFilter/Discrete PID Controller/Ideal P Gain/Passthrough'
 * '<S82>'  : 'URControl/estimators/omegaFilter/Discrete PID Controller/Ideal P Gain Fdbk/Disabled'
 * '<S83>'  : 'URControl/estimators/omegaFilter/Discrete PID Controller/Ideal P Gain Fdbk/External Parameters'
 * '<S84>'  : 'URControl/estimators/omegaFilter/Discrete PID Controller/Ideal P Gain Fdbk/Internal Parameters'
 * '<S85>'  : 'URControl/estimators/omegaFilter/Discrete PID Controller/Ideal P Gain Fdbk/Passthrough'
 * '<S86>'  : 'URControl/estimators/omegaFilter/Discrete PID Controller/Integrator/Continuous'
 * '<S87>'  : 'URControl/estimators/omegaFilter/Discrete PID Controller/Integrator/Disabled'
 * '<S88>'  : 'URControl/estimators/omegaFilter/Discrete PID Controller/Integrator/Discrete'
 * '<S89>'  : 'URControl/estimators/omegaFilter/Discrete PID Controller/Integrator ICs/Disabled'
 * '<S90>'  : 'URControl/estimators/omegaFilter/Discrete PID Controller/Integrator ICs/External IC'
 * '<S91>'  : 'URControl/estimators/omegaFilter/Discrete PID Controller/Integrator ICs/Internal IC'
 * '<S92>'  : 'URControl/estimators/omegaFilter/Discrete PID Controller/N Copy/Disabled'
 * '<S93>'  : 'URControl/estimators/omegaFilter/Discrete PID Controller/N Copy/Disabled wSignal Specification'
 * '<S94>'  : 'URControl/estimators/omegaFilter/Discrete PID Controller/N Copy/External Parameters'
 * '<S95>'  : 'URControl/estimators/omegaFilter/Discrete PID Controller/N Copy/Internal Parameters'
 * '<S96>'  : 'URControl/estimators/omegaFilter/Discrete PID Controller/N Gain/Disabled'
 * '<S97>'  : 'URControl/estimators/omegaFilter/Discrete PID Controller/N Gain/External Parameters'
 * '<S98>'  : 'URControl/estimators/omegaFilter/Discrete PID Controller/N Gain/Internal Parameters'
 * '<S99>'  : 'URControl/estimators/omegaFilter/Discrete PID Controller/N Gain/Passthrough'
 * '<S100>' : 'URControl/estimators/omegaFilter/Discrete PID Controller/P Copy/Disabled'
 * '<S101>' : 'URControl/estimators/omegaFilter/Discrete PID Controller/P Copy/External Parameters Ideal'
 * '<S102>' : 'URControl/estimators/omegaFilter/Discrete PID Controller/P Copy/Internal Parameters Ideal'
 * '<S103>' : 'URControl/estimators/omegaFilter/Discrete PID Controller/Parallel P Gain/Disabled'
 * '<S104>' : 'URControl/estimators/omegaFilter/Discrete PID Controller/Parallel P Gain/External Parameters'
 * '<S105>' : 'URControl/estimators/omegaFilter/Discrete PID Controller/Parallel P Gain/Internal Parameters'
 * '<S106>' : 'URControl/estimators/omegaFilter/Discrete PID Controller/Parallel P Gain/Passthrough'
 * '<S107>' : 'URControl/estimators/omegaFilter/Discrete PID Controller/Reset Signal/Disabled'
 * '<S108>' : 'URControl/estimators/omegaFilter/Discrete PID Controller/Reset Signal/External Reset'
 * '<S109>' : 'URControl/estimators/omegaFilter/Discrete PID Controller/Saturation/Enabled'
 * '<S110>' : 'URControl/estimators/omegaFilter/Discrete PID Controller/Saturation/Passthrough'
 * '<S111>' : 'URControl/estimators/omegaFilter/Discrete PID Controller/Saturation Fdbk/Disabled'
 * '<S112>' : 'URControl/estimators/omegaFilter/Discrete PID Controller/Saturation Fdbk/Enabled'
 * '<S113>' : 'URControl/estimators/omegaFilter/Discrete PID Controller/Saturation Fdbk/Passthrough'
 * '<S114>' : 'URControl/estimators/omegaFilter/Discrete PID Controller/Sum/Passthrough_I'
 * '<S115>' : 'URControl/estimators/omegaFilter/Discrete PID Controller/Sum/Passthrough_P'
 * '<S116>' : 'URControl/estimators/omegaFilter/Discrete PID Controller/Sum/Sum_PD'
 * '<S117>' : 'URControl/estimators/omegaFilter/Discrete PID Controller/Sum/Sum_PI'
 * '<S118>' : 'URControl/estimators/omegaFilter/Discrete PID Controller/Sum/Sum_PID'
 * '<S119>' : 'URControl/estimators/omegaFilter/Discrete PID Controller/Sum Fdbk/Disabled'
 * '<S120>' : 'URControl/estimators/omegaFilter/Discrete PID Controller/Sum Fdbk/Enabled'
 * '<S121>' : 'URControl/estimators/omegaFilter/Discrete PID Controller/Sum Fdbk/Passthrough'
 * '<S122>' : 'URControl/estimators/omegaFilter/Discrete PID Controller/Tracking Mode/Disabled'
 * '<S123>' : 'URControl/estimators/omegaFilter/Discrete PID Controller/Tracking Mode/Enabled'
 * '<S124>' : 'URControl/estimators/omegaFilter/Discrete PID Controller/Tracking Mode Sum/Passthrough'
 * '<S125>' : 'URControl/estimators/omegaFilter/Discrete PID Controller/Tracking Mode Sum/Tracking Mode'
 * '<S126>' : 'URControl/estimators/omegaFilter/Discrete PID Controller/postSat Signal/Feedback_Path'
 * '<S127>' : 'URControl/estimators/omegaFilter/Discrete PID Controller/postSat Signal/Forward_Path'
 * '<S128>' : 'URControl/estimators/omegaFilter/Discrete PID Controller/preSat Signal/Feedback_Path'
 * '<S129>' : 'URControl/estimators/omegaFilter/Discrete PID Controller/preSat Signal/Forward_Path'
 * '<S130>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/Anti-windup'
 * '<S131>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/D Gain'
 * '<S132>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/Filter'
 * '<S133>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/Filter ICs'
 * '<S134>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/I Gain'
 * '<S135>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/Ideal P Gain'
 * '<S136>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/Ideal P Gain Fdbk'
 * '<S137>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/Integrator'
 * '<S138>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/Integrator ICs'
 * '<S139>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/N Copy'
 * '<S140>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/N Gain'
 * '<S141>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/P Copy'
 * '<S142>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/Parallel P Gain'
 * '<S143>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/Reset Signal'
 * '<S144>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/Saturation'
 * '<S145>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/Saturation Fdbk'
 * '<S146>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/Sum'
 * '<S147>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/Sum Fdbk'
 * '<S148>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/Tracking Mode'
 * '<S149>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/Tracking Mode Sum'
 * '<S150>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/postSat Signal'
 * '<S151>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/preSat Signal'
 * '<S152>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/Anti-windup/Back Calculation'
 * '<S153>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/Anti-windup/Cont. Clamping Ideal'
 * '<S154>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/Anti-windup/Cont. Clamping Parallel'
 * '<S155>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/Anti-windup/Disabled'
 * '<S156>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/Anti-windup/Disc. Clamping Ideal'
 * '<S157>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/Anti-windup/Disc. Clamping Parallel'
 * '<S158>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/Anti-windup/Passthrough'
 * '<S159>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/D Gain/Disabled'
 * '<S160>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/D Gain/External Parameters'
 * '<S161>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/D Gain/Internal Parameters'
 * '<S162>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/Filter/Cont. Filter'
 * '<S163>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/Filter/Differentiator'
 * '<S164>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/Filter/Disabled'
 * '<S165>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/Filter/Disc. Backward Euler Filter'
 * '<S166>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/Filter/Disc. Forward Euler Filter'
 * '<S167>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/Filter/Disc. Trapezoidal Filter'
 * '<S168>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/Filter ICs/Disabled'
 * '<S169>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/Filter ICs/External IC'
 * '<S170>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/Filter ICs/Internal IC - Differentiator'
 * '<S171>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/Filter ICs/Internal IC - Filter'
 * '<S172>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/I Gain/Disabled'
 * '<S173>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/I Gain/External Parameters'
 * '<S174>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/I Gain/Internal Parameters'
 * '<S175>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/Ideal P Gain/External Parameters'
 * '<S176>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/Ideal P Gain/Internal Parameters'
 * '<S177>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/Ideal P Gain/Passthrough'
 * '<S178>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/Ideal P Gain Fdbk/Disabled'
 * '<S179>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/Ideal P Gain Fdbk/External Parameters'
 * '<S180>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/Ideal P Gain Fdbk/Internal Parameters'
 * '<S181>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/Ideal P Gain Fdbk/Passthrough'
 * '<S182>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/Integrator/Continuous'
 * '<S183>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/Integrator/Disabled'
 * '<S184>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/Integrator/Discrete'
 * '<S185>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/Integrator ICs/Disabled'
 * '<S186>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/Integrator ICs/External IC'
 * '<S187>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/Integrator ICs/Internal IC'
 * '<S188>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/N Copy/Disabled'
 * '<S189>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/N Copy/Disabled wSignal Specification'
 * '<S190>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/N Copy/External Parameters'
 * '<S191>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/N Copy/Internal Parameters'
 * '<S192>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/N Gain/Disabled'
 * '<S193>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/N Gain/External Parameters'
 * '<S194>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/N Gain/Internal Parameters'
 * '<S195>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/N Gain/Passthrough'
 * '<S196>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/P Copy/Disabled'
 * '<S197>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/P Copy/External Parameters Ideal'
 * '<S198>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/P Copy/Internal Parameters Ideal'
 * '<S199>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/Parallel P Gain/Disabled'
 * '<S200>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/Parallel P Gain/External Parameters'
 * '<S201>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/Parallel P Gain/Internal Parameters'
 * '<S202>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/Parallel P Gain/Passthrough'
 * '<S203>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/Reset Signal/Disabled'
 * '<S204>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/Reset Signal/External Reset'
 * '<S205>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/Saturation/Enabled'
 * '<S206>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/Saturation/Passthrough'
 * '<S207>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/Saturation Fdbk/Disabled'
 * '<S208>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/Saturation Fdbk/Enabled'
 * '<S209>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/Saturation Fdbk/Passthrough'
 * '<S210>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/Sum/Passthrough_I'
 * '<S211>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/Sum/Passthrough_P'
 * '<S212>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/Sum/Sum_PD'
 * '<S213>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/Sum/Sum_PI'
 * '<S214>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/Sum/Sum_PID'
 * '<S215>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/Sum Fdbk/Disabled'
 * '<S216>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/Sum Fdbk/Enabled'
 * '<S217>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/Sum Fdbk/Passthrough'
 * '<S218>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/Tracking Mode/Disabled'
 * '<S219>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/Tracking Mode/Enabled'
 * '<S220>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/Tracking Mode Sum/Passthrough'
 * '<S221>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/Tracking Mode Sum/Tracking Mode'
 * '<S222>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/postSat Signal/Feedback_Path'
 * '<S223>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/postSat Signal/Forward_Path'
 * '<S224>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/preSat Signal/Feedback_Path'
 * '<S225>' : 'URControl/estimators/omegaFilter/Discrete PID Controller1/preSat Signal/Forward_Path'
 * '<S226>' : 'URControl/rate controller/control allocator'
 */
#endif                                 /* RTW_HEADER_URControl_h_ */
