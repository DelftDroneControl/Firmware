/*
 * /home/bramsvs/src/monorepo/simulink_model/.codeGenCache/slprj/grt/_sharedutils/xdotc_13D4rq3A.cpp
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "RateControl".
 *
 * Model version              : 1.1008
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C++ source code generated on : Wed Jul 17 14:14:42 2019
 * Created for block: RateControl
 */

#include "rtwtypes.h"
#include "xdotc_13D4rq3A.h"

/* Function for MATLAB Function: '<Root>/INDI_allocator' */
real32_T xdotc_13D4rq3A(int32_T n, const real32_T x[16], int32_T ix0, const
  real32_T y[16], int32_T iy0)
{
  real32_T d;
  int32_T ix;
  int32_T iy;
  int32_T k;
  d = 0.0F;
  ix = ix0;
  iy = iy0;
  for (k = 0; k < n; k++) {
    d += x[ix - 1] * y[iy - 1];
    ix++;
    iy++;
  }

  return d;
}
