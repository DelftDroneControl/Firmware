/*
 * URControl.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "URControl".
 *
 * Model version              : 1.848
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C++ source code generated on : Mon Mar 18 14:47:59 2019
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
  real_T P[100];                       /* '<S17>/DataStoreMemory - P' */
  real_T x[10];                        /* '<S17>/DataStoreMemory - x' */
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
  struct_Zb0w9me7uxg4XlR9ZxoSnG pooled1;

  /* Expression: p.R{1}
   * Referenced by: '<S17>/R1'
   */
  real_T R1_Value[49];

  /* Expression: p.Q
   * Referenced by: '<S17>/Q'
   */
  real_T Q_Value[100];

  /* Expression: p.InitialCovariance
   * Referenced by: '<S17>/DataStoreMemory - P'
   */
  real_T DataStoreMemoryP_InitialValue[100];

  /* Expression: p.InitialState
   * Referenced by: '<S17>/DataStoreMemory - x'
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
  void URControl_LPFilter_update(LPFilter_URControl_T *obj, const real_T
    newValue[3]);
  real_T URControl_norm(const real_T x[3]);
  real_T URControl_URTrajCalc(real_T theta0, real_T w0, real_T accMax);
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
  void URControl_controlAllocQPQuick(real_T refStruct_MuRef, real_T
    refStruct_MvRef, real_T refStruct_MzRef, real_T refStruct_FtotRef, const
    real_T FMax[4], const real_T FMin[4], real_T gainStruct_MuGain, real_T
    gainStruct_MvGain, real_T gainStruct_FtotGain, real_T gainStruct_FGain,
    real_T gainStruct_MzGain, real_T y_state_init[4], const
    struct_Zb0w9me7uxg4XlR9ZxoSnG *b_par, real_T URpar_rate_maxIter, real_T x[4],
    real_T *iterSteps, real_T *optimal);
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
    const struct_Zb0w9me7uxg4XlR9ZxoSnG *b_par, real_T w_cmd[4]);
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
 * '<S17>'  : 'URControl/estimators/EKFQuat/Extended Kalman Filter'
 * '<S18>'  : 'URControl/estimators/EKFQuat/MATLAB Function'
 * '<S19>'  : 'URControl/estimators/EKFQuat/Quaternions to Rotation Angles'
 * '<S20>'  : 'URControl/estimators/EKFQuat/Rotation Angles to Quaternions'
 * '<S21>'  : 'URControl/estimators/EKFQuat/enableMeas'
 * '<S22>'  : 'URControl/estimators/EKFQuat/Extended Kalman Filter/Correct1'
 * '<S23>'  : 'URControl/estimators/EKFQuat/Extended Kalman Filter/Output'
 * '<S24>'  : 'URControl/estimators/EKFQuat/Extended Kalman Filter/Predict'
 * '<S25>'  : 'URControl/estimators/EKFQuat/Extended Kalman Filter/Correct1/Correct'
 * '<S26>'  : 'URControl/estimators/EKFQuat/Extended Kalman Filter/Predict/Predict'
 * '<S27>'  : 'URControl/estimators/EKFQuat/Quaternions to Rotation Angles/Angle Calculation'
 * '<S28>'  : 'URControl/estimators/EKFQuat/Quaternions to Rotation Angles/Quaternion Normalize'
 * '<S29>'  : 'URControl/estimators/EKFQuat/Quaternions to Rotation Angles/Quaternion Normalize/Quaternion Modulus'
 * '<S30>'  : 'URControl/estimators/EKFQuat/Quaternions to Rotation Angles/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
 * '<S31>'  : 'URControl/rate controller/control allocator'
 */
#endif                                 /* RTW_HEADER_URControl_h_ */
