/*
 * /home/bramsvs/src/monorepo/simulink_model/.codeGenCache/slprj/grt/_sharedutils/mrdivide_helper_uljIr725.cpp
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "AttitudeControl".
 *
 * Model version              : 1.235
 * Simulink Coder version : 9.1 (R2019a) 23-Nov-2018
 * C++ source code generated on : Thu Aug  1 12:03:00 2019
 * Created for block: AttitudeControl
 */

#include "rtwtypes.h"
#include <cmath>
#include <string.h>
#include "mrdivide_helper_uljIr725.h"

/* Function for MATLAB Function: '<S10>/Correct' */
void mrdivide_helper_uljIr725(real32_T A[54], const real32_T B[36])
{
  real32_T b_A[36];
  int8_T ipiv[6];
  int32_T j;
  int32_T ix;
  real32_T smax;
  real32_T s;
  int32_T iy;
  int32_T c_ix;
  int32_T d;
  int32_T ijA;
  int32_T jBcol;
  int32_T kBcol;
  memcpy(&b_A[0], &B[0], 36U * sizeof(real32_T));
  for (d = 0; d < 6; d++) {
    ipiv[d] = static_cast<int8_T>((1 + d));
  }

  for (j = 0; j < 5; j++) {
    jBcol = j * 7;
    iy = 0;
    ix = jBcol;
    smax = std::abs(b_A[jBcol]);
    for (kBcol = 2; kBcol <= 6 - j; kBcol++) {
      ix++;
      s = std::abs(b_A[ix]);
      if (s > smax) {
        iy = kBcol - 1;
        smax = s;
      }
    }

    if (b_A[jBcol + iy] != 0.0F) {
      if (iy != 0) {
        iy += j;
        ipiv[j] = static_cast<int8_T>((iy + 1));
        ix = j;
        for (kBcol = 0; kBcol < 6; kBcol++) {
          smax = b_A[ix];
          b_A[ix] = b_A[iy];
          b_A[iy] = smax;
          ix += 6;
          iy += 6;
        }
      }

      iy = (jBcol - j) + 6;
      for (ix = jBcol + 1; ix < iy; ix++) {
        b_A[ix] /= b_A[jBcol];
      }
    }

    iy = jBcol;
    ix = jBcol + 6;
    for (kBcol = 0; kBcol <= 4 - j; kBcol++) {
      if (b_A[ix] != 0.0F) {
        smax = -b_A[ix];
        c_ix = jBcol + 1;
        d = (iy - j) + 12;
        for (ijA = 7 + iy; ijA < d; ijA++) {
          b_A[ijA] += b_A[c_ix] * smax;
          c_ix++;
        }
      }

      ix += 6;
      iy += 6;
    }
  }

  for (j = 0; j < 6; j++) {
    jBcol = 9 * j;
    iy = 6 * j;
    for (ix = 0; ix < j; ix++) {
      kBcol = 9 * ix;
      if (b_A[ix + iy] != 0.0F) {
        for (c_ix = 0; c_ix < 9; c_ix++) {
          d = c_ix + jBcol;
          A[d] -= b_A[ix + iy] * A[c_ix + kBcol];
        }
      }
    }

    smax = 1.0F / b_A[j + iy];
    for (iy = 0; iy < 9; iy++) {
      d = iy + jBcol;
      A[d] *= smax;
    }
  }

  for (j = 5; j >= 0; j--) {
    jBcol = 9 * j;
    iy = 6 * j - 1;
    for (ix = j + 2; ix < 7; ix++) {
      kBcol = (ix - 1) * 9;
      if (b_A[ix + iy] != 0.0F) {
        for (c_ix = 0; c_ix < 9; c_ix++) {
          A[c_ix + jBcol] -= b_A[ix + iy] * A[c_ix + kBcol];
        }
      }
    }
  }

  for (j = 4; j >= 0; j--) {
    if (j + 1 != ipiv[j]) {
      jBcol = ipiv[j] - 1;
      for (iy = 0; iy < 9; iy++) {
        smax = A[9 * j + iy];
        d = 9 * jBcol + iy;
        A[iy + 9 * j] = A[d];
        A[d] = smax;
      }
    }
  }
}
