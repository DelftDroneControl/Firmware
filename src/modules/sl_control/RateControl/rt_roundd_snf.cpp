/*
 * /home/bramsvs/src/monorepo/simulink_model/.codeGenCache/slprj/grt/_sharedutils/rt_roundd_snf.cpp
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "LoeDetector".
 *
 * Model version              : 1.32
 * Simulink Coder version : 9.1 (R2019a) 23-Nov-2018
 * C++ source code generated on : Tue Jul 30 15:42:57 2019
 * Created for block: LoeDetector
 */

#include "rtwtypes.h"
#include <cmath>
#include "rt_roundd_snf.h"

real_T rt_roundd_snf(real_T u)
{
  real_T y;
  if (std::abs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = std::floor(u + 0.5);
    } else if (u > -0.5) {
      y = u * 0.0;
    } else {
      y = std::ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}
