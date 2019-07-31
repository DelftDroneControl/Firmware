/*
 * /home/bramsvs/src/monorepo/simulink_model/.codeGenCache/slprj/grt/_sharedutils/pinv_uwVdyKpX.cpp
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
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include <cmath>
#include "svd_QZRIziOM.h"
#include "pinv_uwVdyKpX.h"

/* Function for MATLAB Function: '<Root>/INDI_allocator' */
void pinv_uwVdyKpX(const real32_T A[16], real32_T X[16])
{
  real32_T V[16];
  int32_T r;
  int32_T vcol;
  real32_T U[16];
  real32_T s[4];
  int32_T j;
  boolean_T b_p;
  real32_T absxk;
  int32_T ia;
  int32_T ib;
  int32_T b_ic;
  b_p = true;
  for (r = 0; r < 16; r++) {
    X[r] = 0.0F;
    if (b_p && ((!rtIsInfF(A[r])) && (!rtIsNaNF(A[r])))) {
      b_p = true;
    } else {
      b_p = false;
    }
  }

  if (!b_p) {
    for (r = 0; r < 16; r++) {
      X[r] = (rtNaNF);
    }
  } else {
    svd_QZRIziOM(A, U, s, V);
    absxk = std::abs(s[0]);
    if ((!rtIsInfF(absxk)) && (!rtIsNaNF(absxk))) {
      if (absxk <= 1.17549435E-38F) {
        absxk = 1.4013E-45F;
      } else {
        std::frexp(absxk, &vcol);
        absxk = std::ldexp(1.0F, vcol - 24);
      }
    } else {
      absxk = (rtNaNF);
    }

    absxk *= 4.0F;
    r = -1;
    vcol = 0;
    while ((vcol < 4) && (s[vcol] > absxk)) {
      r++;
      vcol++;
    }

    if (r + 1 > 0) {
      vcol = 0;
      for (j = 0; j <= r; j++) {
        absxk = 1.0F / s[j];
        for (ib = vcol; ib < vcol + 4; ib++) {
          V[ib] *= absxk;
        }

        vcol += 4;
      }

      for (vcol = 0; vcol < 4; vcol++) {
        X[vcol] = 0.0F;
      }

      for (vcol = 4; vcol < 8; vcol++) {
        X[vcol] = 0.0F;
      }

      for (vcol = 8; vcol < 12; vcol++) {
        X[vcol] = 0.0F;
      }

      for (vcol = 12; vcol < 16; vcol++) {
        X[vcol] = 0.0F;
      }

      vcol = -1;
      r <<= 2;
      j = r + 1;
      for (ib = 1; ib <= j; ib += 4) {
        ia = vcol;
        for (b_ic = 0; b_ic < 4; b_ic++) {
          ia++;
          X[b_ic] += U[ib - 1] * V[ia];
        }

        vcol += 4;
      }

      vcol = -1;
      j = r + 2;
      for (ib = 2; ib <= j; ib += 4) {
        ia = vcol;
        for (b_ic = 4; b_ic < 8; b_ic++) {
          ia++;
          X[b_ic] += U[ib - 1] * V[ia];
        }

        vcol += 4;
      }

      vcol = -1;
      j = r + 3;
      for (ib = 3; ib <= j; ib += 4) {
        ia = vcol;
        for (b_ic = 8; b_ic < 12; b_ic++) {
          ia++;
          X[b_ic] += U[ib - 1] * V[ia];
        }

        vcol += 4;
      }

      vcol = -1;
      j = r + 4;
      for (ib = 4; ib <= j; ib += 4) {
        ia = vcol;
        for (b_ic = 12; b_ic < 16; b_ic++) {
          ia++;
          X[b_ic] += U[ib - 1] * V[ia];
        }

        vcol += 4;
      }
    }
  }
}
