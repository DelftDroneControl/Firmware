/*
 * /home/sihao/src/monorepo/simulink_model/.codeGenCache/slprj/grt/_sharedutils/xdotc_HuxiQuDO.cpp
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "URControl_att_lqr".
 *
 * Model version              : 1.103
 * Simulink Coder version : 9.1 (R2019a) 23-Nov-2018
 * C++ source code generated on : Mon Oct  7 20:33:39 2019
 * Created for block: URControl_att_lqr
 */

#include "rtwtypes.h"
#include "xdotc_HuxiQuDO.h"

/* Function for MATLAB Function: '<Root>/Mixer' */
real_T xdotc_HuxiQuDO(int32_T n, const real_T x[16], int32_T ix0, const real_T
                      y[16], int32_T iy0)
{
  real_T d;
  int32_T ix;
  int32_T iy;
  int32_T k;
  d = 0.0;
  ix = ix0;
  iy = iy0;
  for (k = 0; k < n; k++) {
    d += x[ix - 1] * y[iy - 1];
    ix++;
    iy++;
  }

  return d;
}
