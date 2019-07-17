/*
 * /home/bramsvs/src/monorepo/simulink_model/.codeGenCache/slprj/grt/_sharedutils/mrdivide_helper_aQOE0xcw.cpp
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
#include <cmath>
#include <string.h>
#include "mrdivide_helper_aQOE0xcw.h"

/* Function for MATLAB Function: '<S29>/Correct' */
void mrdivide_helper_aQOE0xcw(real32_T A[36], const real32_T B[16])
{
  int32_T jp;
  real32_T b_A[16];
  int8_T ipiv[4];
  int32_T j;
  int32_T ix;
  real32_T smax;
  real32_T s;
  int32_T k;
  int32_T b_ix;
  int32_T c_ix;
  int32_T d;
  int32_T ijA;
  memcpy(&b_A[0], &B[0], sizeof(real32_T) << 4U);
  ipiv[0] = 1;
  ipiv[1] = 2;
  ipiv[2] = 3;
  ipiv[3] = 4;
  for (j = 0; j < 3; j++) {
    jp = j * 5;
    b_ix = 0;
    ix = jp;
    smax = std::abs(b_A[jp]);
    for (k = 2; k <= 4 - j; k++) {
      ix++;
      s = std::abs(b_A[ix]);
      if (s > smax) {
        b_ix = k - 1;
        smax = s;
      }
    }

    if (b_A[jp + b_ix] != 0.0F) {
      if (b_ix != 0) {
        ix = j + b_ix;
        ipiv[j] = (int8_T)(ix + 1);
        smax = b_A[j];
        b_A[j] = b_A[ix];
        b_A[ix] = smax;
        b_ix = j + 4;
        ix += 4;
        smax = b_A[b_ix];
        b_A[b_ix] = b_A[ix];
        b_A[ix] = smax;
        b_ix += 4;
        ix += 4;
        smax = b_A[b_ix];
        b_A[b_ix] = b_A[ix];
        b_A[ix] = smax;
        b_ix += 4;
        ix += 4;
        smax = b_A[b_ix];
        b_A[b_ix] = b_A[ix];
        b_A[ix] = smax;
      }

      b_ix = (jp - j) + 4;
      for (ix = jp + 1; ix < b_ix; ix++) {
        b_A[ix] /= b_A[jp];
      }
    }

    b_ix = jp;
    ix = jp + 4;
    for (k = 0; k <= 2 - j; k++) {
      if (b_A[ix] != 0.0F) {
        smax = -b_A[ix];
        c_ix = jp + 1;
        d = (b_ix - j) + 8;
        for (ijA = 5 + b_ix; ijA < d; ijA++) {
          b_A[ijA] += b_A[c_ix] * smax;
          c_ix++;
        }
      }

      ix += 4;
      b_ix += 4;
    }
  }

  for (jp = 0; jp < 4; jp++) {
    b_ix = 9 * jp;
    ix = jp << 2;
    for (k = 0; k < jp; k++) {
      c_ix = 9 * k;
      smax = b_A[k + ix];
      if (smax != 0.0F) {
        for (d = 0; d < 9; d++) {
          j = d + b_ix;
          A[j] -= smax * A[d + c_ix];
        }
      }
    }

    smax = 1.0F / b_A[jp + ix];
    for (ix = 0; ix < 9; ix++) {
      j = ix + b_ix;
      A[j] *= smax;
    }
  }

  for (jp = 3; jp >= 0; jp--) {
    b_ix = 9 * jp;
    ix = (jp << 2) - 1;
    for (k = jp + 2; k < 5; k++) {
      c_ix = (k - 1) * 9;
      smax = b_A[k + ix];
      if (smax != 0.0F) {
        for (d = 0; d < 9; d++) {
          j = d + b_ix;
          A[j] -= smax * A[d + c_ix];
        }
      }
    }
  }

  for (j = 2; j >= 0; j--) {
    if (j + 1 != ipiv[j]) {
      jp = ipiv[j] - 1;
      for (b_ix = 0; b_ix < 9; b_ix++) {
        smax = A[9 * j + b_ix];
        A[b_ix + 9 * j] = A[9 * jp + b_ix];
        A[b_ix + 9 * jp] = smax;
      }
    }
  }
}
