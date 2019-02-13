/*
 * URControl.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "URControl".
 *
 * Model version              : 1.737
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C++ source code generated on : Wed Feb 13 21:31:30 2019
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
#include "rt_defines.h"
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
  daqBus DAQ;                          /* '<Root>/Data Store Memory' */
  stateBus State;                      /* '<Root>/Data Store Memory1' */
  real_T DiscreteStateSpace_DSTATE[3]; /* '<S3>/Discrete State-Space' */
  real_T Memory_PreviousInput;         /* '<S7>/Memory' */
  real_T errorInt[3];                  /* '<S6>/control allocator' */
  real_T error_prev[3];                /* '<S6>/control allocator' */
  real_T y_state_prev[4];              /* '<S6>/control allocator' */
  real_T Fset_prev[4];                 /* '<S6>/control allocator' */
  real_T errorInt_p[3];                /* '<S2>/position control' */
  real_T errorInt_b;                   /* '<S2>/altitude control' */
} DW_URControl_T;

/* Constant parameters (default storage) */
typedef struct {
  /* Pooled Parameter (Expression: par)
   * Referenced by:
   *   '<Root>/conversion to px4'
   *   '<S2>/altitude control'
   *   '<S2>/position control'
   *   '<S2>/yaw rate control'
   *   '<S3>/Precession'
   *   '<S3>/attitude controller'
   *   '<S3>/yawRateControl'
   *   '<S5>/basic estimators'
   *   '<S6>/control allocator'
   */
  struct_O8YfWlp7Z2EzTqISxUY2GH pooled1;
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
  /* Block states */
  DW_URControl_T URControl_DW;

  /* Real-Time Model */
  RT_MODEL_URControl_T URControl_M;

  /* private member function(s) for subsystem '<Root>'*/
  real_T URControl_norm(const real_T x[3]);
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
  void URControl_controlAllocQPQuick(real_T refStruct_MuRef, real_T
    refStruct_MvRef, real_T refStruct_MzRef, real_T refStruct_FtotRef, const
    real_T FMax[4], const real_T FMin[4], real_T gainStruct_MuGain, real_T
    gainStruct_MvGain, real_T gainStruct_FtotGain, real_T gainStruct_FGain,
    real_T gainStruct_MzGain, real_T y_state_init[4], const
    struct_O8YfWlp7Z2EzTqISxUY2GH *b_par, const URControlParamsType *URpar,
    real_T x[4], real_T *iter, boolean_T *optimal);
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
 * '<S1>'   : 'URControl/Damage trigger'
 * '<S2>'   : 'URControl/Targets system'
 * '<S3>'   : 'URControl/attitude controlller'
 * '<S4>'   : 'URControl/conversion to px4'
 * '<S5>'   : 'URControl/estimators'
 * '<S6>'   : 'URControl/rate controller'
 * '<S7>'   : 'URControl/Damage trigger/clock'
 * '<S8>'   : 'URControl/Targets system/altitude control'
 * '<S9>'   : 'URControl/Targets system/position control'
 * '<S10>'  : 'URControl/Targets system/yaw rate control'
 * '<S11>'  : 'URControl/attitude controlller/Discrete Derivative'
 * '<S12>'  : 'URControl/attitude controlller/Precession'
 * '<S13>'  : 'URControl/attitude controlller/attitude controller'
 * '<S14>'  : 'URControl/attitude controlller/yawRateControl'
 * '<S15>'  : 'URControl/estimators/basic estimators'
 * '<S16>'  : 'URControl/rate controller/control allocator'
 */
#endif                                 /* RTW_HEADER_URControl_h_ */
