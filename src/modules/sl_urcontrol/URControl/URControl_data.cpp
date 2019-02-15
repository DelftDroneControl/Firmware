/*
 * URControl_data.cpp
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "URControl".
 *
 * Model version              : 1.745
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C++ source code generated on : Fri Feb 15 00:52:00 2019
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "URControl.h"
#include "URControl_private.h"

/* Constant parameters (default storage) */
const ConstP_URControl_T URControl_ConstP = {
  /* Pooled Parameter (Expression: par)
   * Referenced by:
   *   '<Root>/conversion to px4'
   *   '<S1>/altitude control'
   *   '<S1>/position control'
   *   '<S1>/yaw rate control'
   *   '<S2>/Precession'
   *   '<S2>/attitude controller'
   *   '<S2>/yawRateControl'
   *   '<S4>/basic estimators'
   *   '<S5>/control allocator'
   */
  {
    500.0,
    9.81,
    1200.0,
    0.0,
    0.374,
    1.0,
    0.5,
    0.0,

    {
      { 0.0, 0.0, -1.0 },

      { 0.0014476067249728415, 0.0, 2.30441852439024e-5, 0.0,
        0.0012553745877489874, 0.0, 2.30441852439024e-5, 0.0,
        0.0025202784367571356 },

      { 4.2e-6, 0.0, 0.0, 0.0, 4.2e-6, 0.0, 0.0, 0.0, 8.0e-6 },
      0.07,
      0.4,
      1.0,
      0.5,
      -1.0,

      {
        1.0,
        0.52631578947368418,

        { 0.8, 0.8, 0.0 },
        4.0,

        { 10.0, 10.0, 0.0 },

        { 0.0, 0.0, 0.0 },
        1.0
      },

      {
        1.0,
        1.0,
        4.0,
        10.0,
        20.0,
        1.0,
        0.52631578947368418,
        1.2280701754385965,
        1600.0,
        4000.0
      },

      {
        1.0,
        0.5,
        2.0
      }
    },

    {
      1.9035e-6,
      1.9202951e-8,
      0.115,
      0.0875,
      0.0014,
      0.0013,
      0.0025,
      0.00191049731745428,
      0.00191049731745428,
      0.14450346016618426,
      0.374,
      9.81,
      0.0,
      1.0,
      0.52631578947368418,
      0.35087719298245612,

      { 0.8, 0.8, 0.8 },
      4.0,

      { 2.0, 2.0, 2.0 },

      { 1.0, 1.0, 1.0 },
      1.0,
      1.0,
      1.0,
      4.0,
      10.0,
      20.0,
      1.0,
      0.52631578947368418,
      1.2280701754385965,
      0.9,
      1.0,
      5.0,
      2.0,
      30.0,
      1.0,
      2.0,
      300.0,
      100.0,
      15.0,
      -0.5,
      -0.1,

      { 0.0, 0.0, -1.0 },
      2.0,
      -10.0,
      8.0,
      0.03,
      6.0,
      0.0,
      1.0,
      1200.0,
      300.0,

      { 2.74104, 2.74104, 2.74104, 2.74104 },

      { 0.171315, 0.171315, 0.171315, 0.171315 },
      0.05,
      10.0,
      2.0,

      { 50.0, 50.0, 5.0 },

      { 0.0, 0.0, 0.0 },

      { 1.0, 1.0, 0.01 },
      0.5,
      100.0,

      { 0.4, 0.4, 0.045 },
      10000.0,
      10000.0,
      100.0,
      2.0,
      0.0001,
      5.0
    },

    {
      1277.5810124598493,
      314.15926535897933
    }
  }
};
