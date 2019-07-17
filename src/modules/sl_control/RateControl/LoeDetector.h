/*
 * Code generation for system model 'LoeDetector'
 * For more details, see corresponding source file LoeDetector.c
 *
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
#include <string.h>
#include <stddef.h>
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Block states (default storage) for model 'LoeDetector' */
typedef struct {
  LoeDetectorPkg_LoeDetector_Lo_T loeDetector;/* '<Root>/LoeDetector' */
  real_T fail_id;                      /* '<Root>/LoeDetector' */
  boolean_T loeDetector_not_empty;     /* '<Root>/LoeDetector' */
} DW_LoeDetector_T;

/* Real-time Model Data Structure */
struct tag_RTM_LoeDetector_T {
  const char_T **errorStatus;
};

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
  /* model initialize function */
  void initialize();

  /* model step function */
  void step(const real32_T rtu_rates[3], const real32_T *rtu_acc_z, const
            int32_T rtu_esc_rpm[4], int32_T *rty_fail_id);

  /* Initial conditions function */
  void init();

  /* Reset function */
  void reset();

  /* Constructor */
  LoeDetectorModelClass();

  /* Destructor */
  ~LoeDetectorModelClass();

  /* Real-Time Model get method */
  RT_MODEL_LoeDetector_T * getRTM();

  /* member function to initialize Real-Time model */
  void initializeRTM();

  /*member function to setup error status pointer */
  void setErrorStatusPointer(const char_T **rt_errorStatus);

  /* private data and function members */
 private:
  /* Block states */
  DW_LoeDetector_T LoeDetector_DW;

  /* Real-Time Model */
  RT_MODEL_LoeDetector_T LoeDetector_M;

  /* private member function(s) for subsystem '<Root>/TmpModelReferenceSubsystem'*/
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
