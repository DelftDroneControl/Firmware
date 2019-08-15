/*
 * /home/bramsvs/src/monorepo/simulink_model/.codeGenCache/slprj/grt/_sharedutils/xrotg_w5ZKw2NN.cpp
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "RateControl".
 *
 * Model version              : 1.1008
 * Simulink Coder version : 9.1 (R2019a) 23-Nov-2018
 * C++ source code generated on : Tue Jul 30 15:43:43 2019
 * Created for block: RateControl
 */

#include "rtwtypes.h"
#include <cmath>
#include "xrotg_w5ZKw2NN.h"

/* Function for MATLAB Function: '<Root>/INDI_allocator' */
void xrotg_w5ZKw2NN(real32_T *a, real32_T *b, real32_T *c, real32_T *s)
{
  real32_T roe;
  real32_T absa;
  real32_T absb;
  real32_T scale;
  real32_T ads;
  real32_T bds;
  roe = *b;
  absa = std::abs(*a);
  absb = std::abs(*b);
  if (absa > absb) {
    roe = *a;
  }

  scale = absa + absb;
  if (scale == 0.0F) {
    *s = 0.0F;
    *c = 1.0F;
    scale = 0.0F;
    *b = 0.0F;
  } else {
    ads = absa / scale;
    bds = absb / scale;
    scale *= std::sqrt(ads * ads + bds * bds);
    if (roe < 0.0F) {
      scale = -scale;
    }

    *c = *a / scale;
    *s = *b / scale;
    if (absa > absb) {
      *b = *s;
    } else if (*c != 0.0F) {
      *b = 1.0F / *c;
    } else {
      *b = 1.0F;
    }
  }

  *a = scale;
}
