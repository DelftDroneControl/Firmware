/*
 * /home/bramsvs/src/monorepo/simulink_model/.codeGenCache/slprj/grt/_sharedutils/xaxpy_LR9VgS5N.cpp
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "URControl".
 *
 * Model version              : 1.897
 * Simulink Coder version : 9.1 (R2019a) 23-Nov-2018
 * C++ source code generated on : Mon Aug 19 14:50:43 2019
 * Created for block: URControl
 */

#include "rtwtypes.h"
#include "xaxpy_LR9VgS5N.h"

/* Function for MATLAB Function: '<S8>/control allocator' */
void xaxpy_LR9VgS5N(int32_T n, real_T a, const real_T x[4], int32_T ix0, real_T
                    y[16], int32_T iy0)
{
  int32_T ix;
  int32_T iy;
  int32_T k;
  if (!(a == 0.0)) {
    ix = ix0 - 1;
    iy = iy0 - 1;
    for (k = 0; k < n; k++) {
      y[iy] += a * x[ix];
      ix++;
      iy++;
    }
  }
}
