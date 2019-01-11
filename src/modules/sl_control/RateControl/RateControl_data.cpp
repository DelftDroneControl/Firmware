/*
 * RateControl_data.cpp
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "RateControl".
 *
 * Model version              : 1.619
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C++ source code generated on : Fri Jan 11 16:16:09 2019
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "RateControl.h"
#include "RateControl_private.h"

/* Constant parameters (default storage) */
const ConstP_RateControl_T RateControl_ConstP = {
  /* Pooled Parameter (Mixed Expressions)
   * Referenced by: '<Root>/ActuatorDynamics'
   */
  { 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    1.0 },

  /* Expression: eye(4)
   * Referenced by: '<Root>/ActuatorDynamics'
   */
  { 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    1.0 },

  /* Computed Parameter: Memory3_InitialCondition
   * Referenced by: '<Root>/Memory3'
   */
  { 170.0F, 170.0F, 1000.0F, -8.0F, -170.0F, 170.0F, -1000.0F, -8.0F, -170.0F,
    -170.0F, 1000.0F, -8.0F, 170.0F, -170.0F, -1000.0F, -8.0F, 0.0F, 0.0F, 10.0F,
    0.0F, 0.0F, 0.0F, -10.0F, 0.0F, 0.0F, 0.0F, 10.0F, 0.0F, 0.0F, 0.0F, -10.0F,
    0.0F }
};
