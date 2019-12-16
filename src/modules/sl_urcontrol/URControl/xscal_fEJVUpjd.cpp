/*
 * /home/sihao/src/monorepo/simulink_model/.codeGenCache/slprj/grt/_sharedutils/xscal_fEJVUpjd.cpp
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "URControl_att_indi".
 *
 * Model version              : 1.501
 * Simulink Coder version : 9.1 (R2019a) 23-Nov-2018
 * C++ source code generated on : Wed Dec 11 10:03:20 2019
 * Created for block: URControl_att_indi
 */

#include "rtwtypes.h"
#include "xscal_fEJVUpjd.h"

/* Function for MATLAB Function: '<S1>/MATLAB Function6' */
void xscal_fEJVUpjd(real_T a, real_T x[16], int32_T ix0)
{
  int32_T k;
  for (k = ix0; k <= ix0 + 3; k++) {
    x[k - 1] *= a;
  }
}
