/*
 * /home/bramsvs/src/monorepo/simulink_model/.codeGenCache/slprj/grt/_sharedutils/normcdf_9tjXH1DZ.cpp
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
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include "erfc_XTzCAQjC.h"
#include "normcdf_9tjXH1DZ.h"

/* Function for MATLAB Function: '<Root>/MATLAB Function5' */
real32_T normcdf_9tjXH1DZ(real_T x, real32_T varargin_1, real32_T varargin_2)
{
  real32_T p;
  real32_T b;
  if (varargin_2 == 0.0F) {
    p = (real32_T)!(x < varargin_1);
  } else if (varargin_2 > 0.0F) {
    b = erfc_XTzCAQjC(-(((real32_T)x - varargin_1) / varargin_2) / 1.41421354F);
    p = 0.5F * b;
  } else {
    p = (rtNaNF);
  }

  return p;
}
