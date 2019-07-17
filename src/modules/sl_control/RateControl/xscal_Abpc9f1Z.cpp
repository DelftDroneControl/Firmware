/*
 * /home/bramsvs/src/monorepo/simulink_model/.codeGenCache/slprj/grt/_sharedutils/xscal_Abpc9f1Z.cpp
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
#include "xscal_Abpc9f1Z.h"

/* Function for MATLAB Function: '<Root>/INDI_allocator' */
void xscal_Abpc9f1Z(real32_T a, real32_T x[16], int32_T ix0)
{
  int32_T k;
  for (k = ix0; k <= ix0 + 3; k++) {
    x[k - 1] *= a;
  }
}
