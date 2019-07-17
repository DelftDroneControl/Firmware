/*
 * LoeDetector_private.h
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

#ifndef RTW_HEADER_LoeDetector_private_h_
#define RTW_HEADER_LoeDetector_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        (*((rtm)->errorStatus))
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   (*((rtm)->errorStatus) = (val))
#endif

#ifndef rtmGetErrorStatusPointer
# define rtmGetErrorStatusPointer(rtm) (rtm)->errorStatus
#endif

#ifndef rtmSetErrorStatusPointer
# define rtmSetErrorStatusPointer(rtm, val) ((rtm)->errorStatus = (val))
#endif

/* Constant parameters (default storage) */
typedef struct {
  /* Expression: loe_detector_filter_sys
   * Referenced by: '<Root>/LoeDetector'
   */
  struct_F3FGa1JndAOGVTLrjvwoWF LoeDetector_loe_detector_filter;
} ConstP_LoeDetector_T;

/* Constant parameters (default storage) */
extern const ConstP_LoeDetector_T LoeDetector_ConstP;

#endif                                 /* RTW_HEADER_LoeDetector_private_h_ */
