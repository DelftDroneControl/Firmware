/*
 * LoeDetector.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "LoeDetector".
 *
 * Model version              : 1.32
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C++ source code generated on : Wed Jul 17 14:15:00 2019
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_LoeDetector_h_
#define RTW_HEADER_LoeDetector_h_
#include <cmath>
#include <string.h>
#include <stddef.h>
#ifndef LoeDetector_COMMON_INCLUDES_
# define LoeDetector_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* LoeDetector_COMMON_INCLUDES_ */

#include "LoeDetector_types.h"

/* Shared type includes */
#include "multiword_types.h"
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
  LoeDetectorPkg_LoeDetector_Lo_T loeDetector;/* '<Root>/LoeDetector' */
  real_T fail_id;                      /* '<Root>/LoeDetector' */
  boolean_T loeDetector_not_empty;     /* '<Root>/LoeDetector' */
} DW_LoeDetector_T;

/* Constant parameters (default storage) */
typedef struct {
  /* Expression: loe_detector_filter_sys
   * Referenced by: '<Root>/LoeDetector'
   */
  struct_F3FGa1JndAOGVTLrjvwoWF LoeDetector_loe_detector_filter;
} ConstP_LoeDetector_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real32_T rates[3];                   /* '<Root>/rates' */
  real32_T acc_z;                      /* '<Root>/acc_z' */
  int32_T esc_rpm[4];                  /* '<Root>/esc_rpm' */
} ExtU_LoeDetector_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  int32_T fail_id;                     /* '<Root>/fail_id' */
} ExtY_LoeDetector_T;

/* Real-time Model Data Structure */
struct tag_RTM_LoeDetector_T {
  const char_T *errorStatus;
};

/* Constant parameters (default storage) */
extern const ConstP_LoeDetector_T LoeDetector_ConstP;

/*
 * Exported Global Parameters
 *
 * Note: Exported global parameters are tunable parameters with an exported
 * global storage class designation.  Code generation will declare the memory for
 * these parameters and exports their symbols.
 *
 */
extern LoeDetectorParamsType LoeDetectorParams;/* Variable: LoeDetectorParams
                                                * Referenced by: '<Root>/LoeDetector'
                                                */

/* Class declaration for model LoeDetector */
class LoeDetectorModelClass {
  /* public data and function members */
 public:
  /* External inputs */
  ExtU_LoeDetector_T LoeDetector_U;

  /* External outputs */
  ExtY_LoeDetector_T LoeDetector_Y;

  /* model initialize function */
  void initialize();

  /* model step function */
  void step();

  /* model terminate function */
  void terminate();

  /* Constructor */
  LoeDetectorModelClass();

  /* Destructor */
  ~LoeDetectorModelClass();

  /* Real-Time Model get method */
  RT_MODEL_LoeDetector_T * getRTM();

  /* private data and function members */
 private:
  /* Block states */
  DW_LoeDetector_T LoeDetector_DW;

  /* Real-Time Model */
  RT_MODEL_LoeDetector_T LoeDetector_M;

  /* private member function(s) for subsystem '<Root>'*/
  void LoeDetecto_KalmanEstimator_step(BlocksPkg_KalmanEstimator_Loe_T *obj,
    const real_T z[3], const real_T obs_matrix[12], real_T state[4], real_T P[16]);
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
 * '<Root>' : 'LoeDetector'
 * '<S1>'   : 'LoeDetector/LoeDetector'
 * '<S2>'   : 'LoeDetector/MATLAB Function1'
 */
#endif                                 /* RTW_HEADER_LoeDetector_h_ */
