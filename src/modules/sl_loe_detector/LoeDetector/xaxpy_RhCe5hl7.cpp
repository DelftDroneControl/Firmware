/*
 * /home/bramsvs/src/monorepo/simulink_model/.codeGenCache/slprj/grt/_sharedutils/xaxpy_RhCe5hl7.cpp
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "RateControl".
 *
 * Model version              : 1.1014
 * Simulink Coder version : 9.1 (R2019a) 23-Nov-2018
 * C++ source code generated on : Thu Aug 15 10:38:46 2019
 * Created for block: RateControl
 */

#include "rtwtypes.h"
#include "xaxpy_RhCe5hl7.h"

/* Function for MATLAB Function: '<Root>/INDI_allocator' */
void xaxpy_RhCe5hl7(int32_T n, real32_T a, int32_T ix0, real32_T y[16], int32_T
                    iy0)
{
  int32_T ix;
  int32_T iy;
  int32_T k;
  if (!(a == 0.0F)) {
    ix = ix0 - 1;
    iy = iy0 - 1;
    for (k = 0; k < n; k++) {
      y[iy] += a * y[ix];
      ix++;
      iy++;
    }
  }
}
