/*
 * LoeDetector_types.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "LoeDetector".
 *
 * Model version              : 1.32
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C++ source code generated on : Wed Jul 17 14:14:09 2019
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_LoeDetector_types_h_
#define RTW_HEADER_LoeDetector_types_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#ifndef DEFINED_TYPEDEF_FOR_LoeDetectorParamsType_
#define DEFINED_TYPEDEF_FOR_LoeDetectorParamsType_

typedef struct {
  real_T fdd_k_thres;
  real_T fdd_fail_p_thres;
  real_T fdd_on;
} LoeDetectorParamsType;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_F3FGa1JndAOGVTLrjvwoWF_
#define DEFINED_TYPEDEF_FOR_struct_F3FGa1JndAOGVTLrjvwoWF_

typedef struct {
  real_T A[4];
  real_T B[2];
  real_T C[2];
  real_T D;
} struct_F3FGa1JndAOGVTLrjvwoWF;

#endif

/* Custom Type definition for MATLAB Function: '<Root>/LoeDetector' */
#ifndef typedef_BlocksPkg_Derivative_LoeDetec_T
#define typedef_BlocksPkg_Derivative_LoeDetec_T

typedef struct {
  real_T prev_value[2];
  real_T Ts;
  boolean_T first;
} BlocksPkg_Derivative_LoeDetec_T;

#endif                                 /*typedef_BlocksPkg_Derivative_LoeDetec_T*/

#ifndef typedef_BlocksPkg_SecondOrderFilter_L_T
#define typedef_BlocksPkg_SecondOrderFilter_L_T

typedef struct {
  struct_F3FGa1JndAOGVTLrjvwoWF sys;
  real_T states[4];
} BlocksPkg_SecondOrderFilter_L_T;

#endif                                 /*typedef_BlocksPkg_SecondOrderFilter_L_T*/

#ifndef typedef_BlocksPkg_SecondOrderFilter_1_T
#define typedef_BlocksPkg_SecondOrderFilter_1_T

typedef struct {
  struct_F3FGa1JndAOGVTLrjvwoWF sys;
  real_T states[2];
} BlocksPkg_SecondOrderFilter_1_T;

#endif                                 /*typedef_BlocksPkg_SecondOrderFilter_1_T*/

#ifndef typedef_BlocksPkg_SecondOrderFilter_2_T
#define typedef_BlocksPkg_SecondOrderFilter_2_T

typedef struct {
  struct_F3FGa1JndAOGVTLrjvwoWF sys;
  real_T states[8];
} BlocksPkg_SecondOrderFilter_2_T;

#endif                                 /*typedef_BlocksPkg_SecondOrderFilter_2_T*/

#ifndef typedef_BlocksPkg_KalmanEstimator_Loe_T
#define typedef_BlocksPkg_KalmanEstimator_Loe_T

typedef struct {
  real_T state[4];
  real_T P[16];
  real_T Q[16];
  real_T R[9];
  real_T state_bounds[2];
} BlocksPkg_KalmanEstimator_Loe_T;

#endif                                 /*typedef_BlocksPkg_KalmanEstimator_Loe_T*/

#ifndef typedef_LoeDetectorPkg_LoeDetector_Lo_T
#define typedef_LoeDetectorPkg_LoeDetector_Lo_T

typedef struct {
  BlocksPkg_SecondOrderFilter_L_T FilterRatesMeas;
  BlocksPkg_SecondOrderFilter_1_T FilterAccMeas;
  BlocksPkg_SecondOrderFilter_2_T FilterActuatorMeas;
  BlocksPkg_Derivative_LoeDetec_T DerivRates;
  BlocksPkg_KalmanEstimator_Loe_T Kalman;
  real_T control_eff[3];
  LoeDetectorParamsType fail_diagnosis_params;
} LoeDetectorPkg_LoeDetector_Lo_T;

#endif                                 /*typedef_LoeDetectorPkg_LoeDetector_Lo_T*/

/* Forward declaration for rtModel */
typedef struct tag_RTM_LoeDetector_T RT_MODEL_LoeDetector_T;

#endif                                 /* RTW_HEADER_LoeDetector_types_h_ */
