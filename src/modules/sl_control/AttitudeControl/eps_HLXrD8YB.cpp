/*
 * /home/bramsvs/src/monorepo/simulink_model/.codeGenCache/slprj/grt/_sharedutils/eps_HLXrD8YB.cpp
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "URControl".
 *
 * Model version              : 1.873
 * Simulink Coder version : 9.1 (R2019a) 23-Nov-2018
 * C++ source code generated on : Wed Jul 31 16:55:41 2019
 * Created for block: URControl
 */

#include "rtwtypes.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include <cmath>
#include <math.h>
#include "eps_HLXrD8YB.h"

/* Function for MATLAB Function: '<S8>/control allocator' */
real_T eps_HLXrD8YB(real_T x)
{
  real_T r;
  real_T absxk;
  int32_T exponent;
  absxk = std::abs(x);
  if ((!rtIsInf(absxk)) && (!rtIsNaN(absxk))) {
    if (absxk <= 2.2250738585072014E-308) {
      r = 4.94065645841247E-324;
    } else {
      frexp(absxk, &exponent);
      r = std::ldexp(1.0, exponent - 53);
    }
  } else {
    r = (rtNaN);
  }

  return r;
}
