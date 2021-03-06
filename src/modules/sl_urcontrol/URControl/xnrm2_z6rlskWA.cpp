/*
 * /home/sihao/src/monorepo/simulink_model/.codeGenCache/slprj/grt/_sharedutils/xnrm2_z6rlskWA.cpp
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
#include <cmath>
#include "xnrm2_z6rlskWA.h"

/* Function for MATLAB Function: '<S1>/MATLAB Function6' */
real_T xnrm2_z6rlskWA(int32_T n, const real_T x[16], int32_T ix0)
{
  real_T y;
  real_T scale;
  int32_T kend;
  real_T absxk;
  real_T t;
  int32_T k;
  y = 0.0;
  scale = 3.3121686421112381E-170;
  kend = (ix0 + n) - 1;
  for (k = ix0; k <= kend; k++) {
    absxk = std::abs(x[k - 1]);
    if (absxk > scale) {
      t = scale / absxk;
      y = y * t * t + 1.0;
      scale = absxk;
    } else {
      t = absxk / scale;
      y += t * t;
    }
  }

  return scale * std::sqrt(y);
}
