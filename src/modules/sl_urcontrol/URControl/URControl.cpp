/*
 * URControl.cpp
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "URControl".
 *
 * Model version              : 1.879
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C++ source code generated on : Wed May  1 11:40:40 2019
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "URControl.h"
#include "URControl_private.h"

const daqBus URControl_rtZdaqBus = {
  {
    0.0, 0.0, 0.0 }
  ,                                    /* pos */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* vel */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* acc */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* n */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* omegaUV */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* omegafUV */

  {
    0.0, 0.0, 0.0, 0.0 }
  ,                                    /* FMax */

  {
    0.0, 0.0, 0.0, 0.0 }
  ,                                    /* FMin */

  {
    0.0, 0.0 }
  ,                                    /* uvDot_max */

  {
    0.0, 0.0 }
  ,                                    /* uvDot_min */

  {
    0.0, 0.0 }
  ,                                    /* uv_max */

  {
    0.0, 0.0 }
  ,                                    /* uv_min */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* velTarget */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* a_ref */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* n_des */
  0.0,                                 /* Ftot_ref */
  0.0,                                 /* r_cmd */

  {
    0.0, 0.0 }
  ,                                    /* uv_prec */

  {
    0.0, 0.0 }
  ,                                    /* precAngle */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* h_uv */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* n_uv */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* pqr_des */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* uvr_des */

  {
    0.0, 0.0 }
  ,                                    /* uv_des_raw */

  {
    0.0, 0.0 }
  ,                                    /* uv_des */

  {
    0.0, 0.0 }
  ,                                    /* uv_attCtrl */

  {
    0.0, 0.0, 0.0, 0.0 }
  ,                                    /* w_max */

  {
    0.0, 0.0, 0.0, 0.0 }
  ,                                    /* w_min */
  0.0,                                 /* MzGain */
  0.0,                                 /* iter */
  0.0,                                 /* optimal */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* M_uvr_des */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* M_uvr_set */
  0.0,                                 /* Ftot_set */

  {
    0.0, 0.0, 0.0, 0.0 }
  ,                                    /* wRotorSet */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* uvrDot_des */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* pqr_des_dot */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* omegaDot */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* dM */

  {
    0.0, 0.0, 0.0, 0.0 }
  ,                                    /* inp */

  {
    0.0, 0.0, 0.0, 0.0 }
  /* dw_lin */
} ;                                    /* daqBus ground */

const stateBus URControl_rtZstateBus = {
  {
    0.0, 0.0, 0.0 }
  ,                                    /* acc */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* accf */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* vel */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* velf */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* velB */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* pos */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* posf */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* omega */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* omegaf */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* att */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* n */

  {
    0.0, 0.0, 0.0, 0.0 }
  ,                                    /* wRotor */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* omegaUV */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* omegafUV */

  {
    0.0, 0.0, 0.0, 0.0 }
  ,                                    /* FMax */

  {
    0.0, 0.0, 0.0, 0.0 }
  ,                                    /* FMin */
  0.0,                                 /* fail_id */
  0.0,                                 /* fail_id_quick */

  {
    0.0, 0.0 }
  ,                                    /* uvDot_max */

  {
    0.0, 0.0 }
  ,                                    /* uvDot_min */

  {
    0.0, 0.0 }
  ,                                    /* uv_max */

  {
    0.0, 0.0 }
  /* uv_min */
} ;                                    /* stateBus ground */

/* Exported block parameters */
URControlParamsType URControlParams = {
  1.9035e-6,
  1.9202951e-8,
  0.115,
  0.0875,
  0.0014,
  0.0013,
  0.0025,
  8.0e-6,
  0.00191049731745428,
  0.00191049731745428,
  0.14450346016618426,
  0.374,
  9.81,
  0.0,
  300.0,
  -1.0,
  1200.0,
  0.0,

  { 0.70710678118654768, 0.70710678118654768, -0.53801602916367752,
    0.53801602916367752 },
  0.0,
  0.0,
  0.75,
  0.5,
  0.5,
  0.85,
  1.0,

  { 0.01, 0.01, 0.01, 0.1, 0.1, 0.1, 0.001, 0.001, 0.001, 0.001 },

  { 0.1, 0.1, 0.1, 0.2, 0.2, 0.2, 0.2 },
  1.0,
  0.61403508771929827,
  0.26315789473684209,

  { 1.5, 1.5, 1.5 },
  4.0,

  { 2.0, 2.0, 2.0 },

  { 1.0, 1.0, 1.0 },
  0.2,
  0.5,
  -2.0,
  1.0,
  2.0,
  4.0,
  2.0,
  15.0,
  15.0,
  0.5,
  0.52631578947368418,
  1.2280701754385965,
  0.95,
  1.0,
  1.0,
  5.0,
  2.0,
  20.0,
  0.0,
  1.0,
  2.0,
  300.0,
  50.0,
  15.0,
  -0.5,
  -0.1,
  1.0,

  { 0.0, 0.0, -1.0 },
  1.0,
  -10.0,
  15.0,
  4.0,
  0.01,
  10.0,
  2.0,
  -3.0,
  1.0,
  200.0,
  1.2217304763960306,
  0.2,
  1.0,
  2.0,
  1200.0,
  300.0,

  { 2.74104, 2.74104, 2.74104, 2.74104 },

  { 0.171315, 0.171315, 0.171315, 0.171315 },
  0.05,
  5.0,
  2.0,
  1.0,

  { 150.0, 150.0, 100.0, -8.0, -150.0, 150.0, -100.0, -8.0, -150.0, -150.0,
    100.0, -8.0, 150.0, -150.0, -100.0, -8.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, -1.0,
    0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, -1.0, 0.0 },

  { 30.0, 30.0, 3.0 },
  0.8,
  0.85,
  600.0,

  { 30.0, 30.0, 3.0 },

  { 0.0, 0.0, 0.0 },

  { 1.0, 1.0, 0.01 },
  0.8,
  0.8,
  0.5,
  0.0,

  { 40.0, 40.0, 2.0 },
  0.9,

  { 20.0, 20.0, 1.0 },
  150.0,
  150.0,
  -50.0,
  5.0,

  { 0.0, 1.0, -1.0, -1.0, -1.0, 0.0, 1.0, -1.0, 0.0, -1.0, -1.0, -1.0, 1.0, 0.0,
    1.0, -1.0 },

  { 10000.0, 0.0, 0.0, 0.0, 0.0, 10000.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 100.0 },

  { 0.0001, 0.0, 0.0, 0.0, 0.0, 0.0001, 0.0, 0.0, 0.0, 0.0, 0.0001, 0.0, 0.0,
    0.0, 0.0, 0.0001 },
  200.0,

  { 100.0, 100.0, 20.0, 20.0 },

  { 30.0, 30.0, 10.0, 2.0 },
  0.2,

  { 0.4, 0.4, 0.045 },
  10000.0,
  10000.0,
  100.0,
  4.0,
  0.0001,
  5.0,
  0.0,
  0.13,
  0.0,
  300.0,
  0.0,
  0.0,
  0.3,
  4.0,
  0.0,
  -1.0
} ;                                    /* Variable: URControlParams
                                        * Referenced by:
                                        *   '<Root>/delay'
                                        *   '<S3>/MATLAB Function'
                                        *   '<S4>/altitude control'
                                        *   '<S4>/position control'
                                        *   '<S4>/yaw rate control'
                                        *   '<S5>/Precession'
                                        *   '<S5>/attitude controller'
                                        *   '<S5>/yawRateControl'
                                        *   '<S7>/basic estimators'
                                        *   '<S8>/control allocator'
                                        */

/* Function for MATLAB Function: '<S27>/MATLAB Function' */
real_T URControlModelClass::URControl_norm_d(const real_T x[4])
{
  real_T y;
  real_T scale;
  real_T absxk;
  real_T t;
  scale = 3.3121686421112381E-170;
  absxk = std::abs(x[0]);
  if (absxk > 3.3121686421112381E-170) {
    y = 1.0;
    scale = absxk;
  } else {
    t = absxk / 3.3121686421112381E-170;
    y = t * t;
  }

  absxk = std::abs(x[1]);
  if (absxk > scale) {
    t = scale / absxk;
    y = y * t * t + 1.0;
    scale = absxk;
  } else {
    t = absxk / scale;
    y += t * t;
  }

  absxk = std::abs(x[2]);
  if (absxk > scale) {
    t = scale / absxk;
    y = y * t * t + 1.0;
    scale = absxk;
  } else {
    t = absxk / scale;
    y += t * t;
  }

  absxk = std::abs(x[3]);
  if (absxk > scale) {
    t = scale / absxk;
    y = y * t * t + 1.0;
    scale = absxk;
  } else {
    t = absxk / scale;
    y += t * t;
  }

  return scale * std::sqrt(y);
}

/* Function for MATLAB Function: '<S35>/Correct' */
void URControlModelClass::URControl_mrdivide_helper(real_T A[70], const real_T
  B[49])
{
  real_T b_A[49];
  int8_T ipiv[7];
  int32_T j;
  int32_T ix;
  real_T smax;
  real_T s;
  int32_T iy;
  int32_T c_ix;
  int32_T d;
  int32_T ijA;
  int32_T jBcol;
  int32_T kBcol;
  memcpy(&b_A[0], &B[0], 49U * sizeof(real_T));
  for (d = 0; d < 7; d++) {
    ipiv[d] = (int8_T)(1 + d);
  }

  for (j = 0; j < 6; j++) {
    jBcol = j << 3;
    iy = 0;
    ix = jBcol;
    smax = std::abs(b_A[jBcol]);
    for (kBcol = 2; kBcol <= 7 - j; kBcol++) {
      ix++;
      s = std::abs(b_A[ix]);
      if (s > smax) {
        iy = kBcol - 1;
        smax = s;
      }
    }

    if (b_A[jBcol + iy] != 0.0) {
      if (iy != 0) {
        iy += j;
        ipiv[j] = (int8_T)(iy + 1);
        ix = j;
        for (kBcol = 0; kBcol < 7; kBcol++) {
          smax = b_A[ix];
          b_A[ix] = b_A[iy];
          b_A[iy] = smax;
          ix += 7;
          iy += 7;
        }
      }

      iy = (jBcol - j) + 7;
      for (ix = jBcol + 1; ix < iy; ix++) {
        b_A[ix] /= b_A[jBcol];
      }
    }

    iy = jBcol;
    ix = jBcol + 7;
    for (kBcol = 0; kBcol <= 5 - j; kBcol++) {
      if (b_A[ix] != 0.0) {
        smax = -b_A[ix];
        c_ix = jBcol + 1;
        d = (iy - j) + 14;
        for (ijA = 8 + iy; ijA < d; ijA++) {
          b_A[ijA] += b_A[c_ix] * smax;
          c_ix++;
        }
      }

      ix += 7;
      iy += 7;
    }
  }

  for (j = 0; j < 7; j++) {
    jBcol = 10 * j;
    iy = 7 * j;
    for (ix = 0; ix < j; ix++) {
      kBcol = 10 * ix;
      smax = b_A[ix + iy];
      if (smax != 0.0) {
        for (c_ix = 0; c_ix < 10; c_ix++) {
          d = c_ix + jBcol;
          A[d] -= smax * A[c_ix + kBcol];
        }
      }
    }

    smax = 1.0 / b_A[j + iy];
    for (iy = 0; iy < 10; iy++) {
      d = iy + jBcol;
      A[d] *= smax;
    }
  }

  for (j = 6; j >= 0; j--) {
    jBcol = 10 * j;
    iy = 7 * j - 1;
    for (ix = j + 2; ix < 8; ix++) {
      kBcol = (ix - 1) * 10;
      smax = b_A[ix + iy];
      if (smax != 0.0) {
        for (c_ix = 0; c_ix < 10; c_ix++) {
          A[c_ix + jBcol] -= smax * A[c_ix + kBcol];
        }
      }
    }
  }

  for (j = 5; j >= 0; j--) {
    if (j + 1 != ipiv[j]) {
      jBcol = ipiv[j] - 1;
      for (iy = 0; iy < 10; iy++) {
        smax = A[10 * j + iy];
        A[iy + 10 * j] = A[10 * jBcol + iy];
        A[iy + 10 * jBcol] = smax;
      }
    }
  }
}

real_T rt_atan2d_snf(real_T u0, real_T u1)
{
  real_T y;
  int32_T u0_0;
  int32_T u1_0;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else if (rtIsInf(u0) && rtIsInf(u1)) {
    if (u0 > 0.0) {
      u0_0 = 1;
    } else {
      u0_0 = -1;
    }

    if (u1 > 0.0) {
      u1_0 = 1;
    } else {
      u1_0 = -1;
    }

    y = atan2((real_T)u0_0, (real_T)u1_0);
  } else if (u1 == 0.0) {
    if (u0 > 0.0) {
      y = RT_PI / 2.0;
    } else if (u0 < 0.0) {
      y = -(RT_PI / 2.0);
    } else {
      y = 0.0;
    }
  } else {
    y = atan2(u0, u1);
  }

  return y;
}

/* Function for MATLAB Function: '<S5>/basic estimators' */
void URControlModelClass::URControl_mod(const real_T x[3], real_T r[3])
{
  real_T b_r;
  boolean_T rEQ0;
  real_T q;
  if ((!rtIsInf(x[0])) && (!rtIsNaN(x[0]))) {
    if (x[0] == 0.0) {
      b_r = 0.0;
    } else {
      b_r = std::fmod(x[0], 6.2831853071795862);
      rEQ0 = (b_r == 0.0);
      if (!rEQ0) {
        q = std::abs(x[0] / 6.2831853071795862);
        rEQ0 = (std::abs(q - std::floor(q + 0.5)) <= 2.2204460492503131E-16 * q);
      }

      if (rEQ0) {
        b_r = 0.0;
      } else {
        if (x[0] < 0.0) {
          b_r += 6.2831853071795862;
        }
      }
    }
  } else {
    b_r = (rtNaN);
  }

  r[0] = b_r;
  if ((!rtIsInf(x[1])) && (!rtIsNaN(x[1]))) {
    if (x[1] == 0.0) {
      b_r = 0.0;
    } else {
      b_r = std::fmod(x[1], 6.2831853071795862);
      rEQ0 = (b_r == 0.0);
      if (!rEQ0) {
        q = std::abs(x[1] / 6.2831853071795862);
        rEQ0 = (std::abs(q - std::floor(q + 0.5)) <= 2.2204460492503131E-16 * q);
      }

      if (rEQ0) {
        b_r = 0.0;
      } else {
        if (x[1] < 0.0) {
          b_r += 6.2831853071795862;
        }
      }
    }
  } else {
    b_r = (rtNaN);
  }

  r[1] = b_r;
  if ((!rtIsInf(x[2])) && (!rtIsNaN(x[2]))) {
    if (x[2] == 0.0) {
      b_r = 0.0;
    } else {
      b_r = std::fmod(x[2], 6.2831853071795862);
      rEQ0 = (b_r == 0.0);
      if (!rEQ0) {
        q = std::abs(x[2] / 6.2831853071795862);
        rEQ0 = (std::abs(q - std::floor(q + 0.5)) <= 2.2204460492503131E-16 * q);
      }

      if (rEQ0) {
        b_r = 0.0;
      } else {
        if (x[2] < 0.0) {
          b_r += 6.2831853071795862;
        }
      }
    }
  } else {
    b_r = (rtNaN);
  }

  r[2] = b_r;
}

/*
 * Function for MATLAB Function: '<S7>/basic estimators'
 * function obj = LPFilter(filterT, initValue, maxLim, minLim)
 */
LPFilter_URControl_T *URControlModelClass::URControl_LPFilter_LPFilter
  (LPFilter_URControl_T *obj, real_T filterT, const real_T initValue[3], real_T
   maxLim, real_T minLim)
{
  LPFilter_URControl_T *b_obj;
  b_obj = obj;

  /* 'LPFilter:14' obj.filterT = filterT; */
  obj->filterT = filterT;

  /* 'LPFilter:15' obj.value = initValue; */
  obj->value[0] = initValue[0];
  obj->value[1] = initValue[1];
  obj->value[2] = initValue[2];

  /* 'LPFilter:16' obj.maxLim = maxLim; */
  obj->maxLim = maxLim;

  /* 'LPFilter:17' obj.minLim = minLim; */
  obj->minLim = minLim;
  return b_obj;
}

/* Function for MATLAB Function: '<S7>/basic estimators' */
void URControlModelClass::URControl_mod(const real_T x[3], real_T r[3])
{
  real_T b_r;
  boolean_T rEQ0;
  real_T q;
  if ((!rtIsInf(x[0])) && (!rtIsNaN(x[0]))) {
    if (x[0] == 0.0) {
      b_r = 0.0;
    } else {
      b_r = std::fmod(x[0], 6.2831853071795862);
      rEQ0 = (b_r == 0.0);
      if (!rEQ0) {
        q = std::abs(x[0] / 6.2831853071795862);
        rEQ0 = (std::abs(q - std::floor(q + 0.5)) <= 2.2204460492503131E-16 * q);
      }

      if (rEQ0) {
        b_r = 0.0;
      } else {
        if (x[0] < 0.0) {
          b_r += 6.2831853071795862;
        }
      }
    }
  } else {
    b_r = (rtNaN);
  }

  r[0] = b_r;
  if ((!rtIsInf(x[1])) && (!rtIsNaN(x[1]))) {
    if (x[1] == 0.0) {
      b_r = 0.0;
    } else {
      b_r = std::fmod(x[1], 6.2831853071795862);
      rEQ0 = (b_r == 0.0);
      if (!rEQ0) {
        q = std::abs(x[1] / 6.2831853071795862);
        rEQ0 = (std::abs(q - std::floor(q + 0.5)) <= 2.2204460492503131E-16 * q);
      }

      if (rEQ0) {
        b_r = 0.0;
      } else {
        if (x[1] < 0.0) {
          b_r += 6.2831853071795862;
        }
      }
    }
  } else {
    b_r = (rtNaN);
  }

  r[1] = b_r;
  if ((!rtIsInf(x[2])) && (!rtIsNaN(x[2]))) {
    if (x[2] == 0.0) {
      b_r = 0.0;
    } else {
      b_r = std::fmod(x[2], 6.2831853071795862);
      rEQ0 = (b_r == 0.0);
      if (!rEQ0) {
        q = std::abs(x[2] / 6.2831853071795862);
        rEQ0 = (std::abs(q - std::floor(q + 0.5)) <= 2.2204460492503131E-16 * q);
      }

      if (rEQ0) {
        b_r = 0.0;
      } else {
        if (x[2] < 0.0) {
          b_r += 6.2831853071795862;
        }
      }
    }
  } else {
    b_r = (rtNaN);
  }

  r[2] = b_r;
}

/*
 * Function for MATLAB Function: '<S7>/basic estimators'
 * function update(obj,newValue)
 */
void URControlModelClass::URControl_LPFilter_update(LPFilter_URControl_T *obj,
  const real_T newValue[3])
{
  real_T tmp;
  real_T z1;

  /* 'LPFilter:21' obj.value = obj.value*obj.filterT + newValue*(1 - obj.filterT); */
  tmp = 1.0 - obj->filterT;

  /* 'LPFilter:22' obj.value = max(min(obj.value,obj.maxLim),obj.minLim); */
  obj->value[0] = (1.0 - obj->filterT) * newValue[0] + obj->value[0] *
    obj->filterT;
  if ((obj->value[0] < obj->maxLim) || rtIsNaN(obj->maxLim)) {
    z1 = obj->value[0];
  } else {
    z1 = obj->maxLim;
  }

  if ((z1 > obj->minLim) || rtIsNaN(obj->minLim)) {
    obj->value[0] = z1;
  } else {
    obj->value[0] = obj->minLim;
  }

  obj->value[1] = obj->value[1] * obj->filterT + newValue[1] * tmp;
  if ((obj->value[1] < obj->maxLim) || rtIsNaN(obj->maxLim)) {
    z1 = obj->value[1];
  } else {
    z1 = obj->maxLim;
  }

  if ((z1 > obj->minLim) || rtIsNaN(obj->minLim)) {
    obj->value[1] = z1;
  } else {
    obj->value[1] = obj->minLim;
  }

  obj->value[2] = obj->value[2] * obj->filterT + newValue[2] * tmp;
  if ((obj->value[2] < obj->maxLim) || rtIsNaN(obj->maxLim)) {
    z1 = obj->value[2];
  } else {
    z1 = obj->maxLim;
  }

  if ((z1 > obj->minLim) || rtIsNaN(obj->minLim)) {
    obj->value[2] = z1;
  } else {
    obj->value[2] = obj->minLim;
  }
}

real_T rt_powd_snf(real_T u0, real_T u1)
{
  real_T y;
  real_T tmp;
  real_T tmp_0;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else {
    tmp = std::abs(u0);
    tmp_0 = std::abs(u1);
    if (rtIsInf(u1)) {
      if (tmp == 1.0) {
        y = 1.0;
      } else if (tmp > 1.0) {
        if (u1 > 0.0) {
          y = (rtInf);
        } else {
          y = 0.0;
        }
      } else if (u1 > 0.0) {
        y = 0.0;
      } else {
        y = (rtInf);
      }
    } else if (tmp_0 == 0.0) {
      y = 1.0;
    } else if (tmp_0 == 1.0) {
      if (u1 > 0.0) {
        y = u0;
      } else {
        y = 1.0 / u0;
      }
    } else if (u1 == 2.0) {
      y = u0 * u0;
    } else if ((u1 == 0.5) && (u0 >= 0.0)) {
      y = std::sqrt(u0);
    } else if ((u0 < 0.0) && (u1 > std::floor(u1))) {
      y = (rtNaN);
    } else {
      y = pow(u0, u1);
    }
  }

  return y;
}

/* Function for MATLAB Function: '<S5>/attitude controller' */
real_T URControlModelClass::URControl_norm(const real_T x[3])
{
  real_T y;
  real_T scale;
  real_T absxk;
  real_T t;
  scale = 3.3121686421112381E-170;
  absxk = std::abs(x[0]);
  if (absxk > 3.3121686421112381E-170) {
    y = 1.0;
    scale = absxk;
  } else {
    t = absxk / 3.3121686421112381E-170;
    y = t * t;
  }

  absxk = std::abs(x[1]);
  if (absxk > scale) {
    t = scale / absxk;
    y = y * t * t + 1.0;
    scale = absxk;
  } else {
    t = absxk / scale;
    y += t * t;
  }

  absxk = std::abs(x[2]);
  if (absxk > scale) {
    t = scale / absxk;
    y = y * t * t + 1.0;
    scale = absxk;
  } else {
    t = absxk / scale;
    y += t * t;
  }

  return scale * std::sqrt(y);
}

/*
 * Function for MATLAB Function: '<S5>/attitude controller'
 * function t = URTrajCalc(theta0, w0, accMax)
 */
real_T URControlModelClass::URControl_URTrajCalc(real_T theta0, real_T w0,
  real_T accMax)
{
  real_T t;
  real_T A;
  real_T B;
  real_T D;
  real_T u0_tmp;

  /* 'URTrajCalc:3' A = accMax/4; */
  A = accMax / 4.0;

  /* 'URTrajCalc:4' B = w0/2; */
  B = w0 / 2.0;

  /* 'URTrajCalc:5' C = -theta0 - w0^2/(2*accMax) + (w0/(2*accMax))^2; */
  D = w0 / (2.0 * accMax);

  /* 'URTrajCalc:7' D = B^2 - 4*A*C; */
  D = B * B - ((-theta0 - w0 * w0 / (2.0 * accMax)) + D * D) * (4.0 * A);

  /* 'URTrajCalc:9' if D > 0 */
  if (D > 0.0) {
    /* 'URTrajCalc:10' x1 = (-B - sqrt(D))/(2*A); */
    /* 'URTrajCalc:11' x2 = (-B + sqrt(D))/(2*A); */
    /* 'URTrajCalc:13' t = max(x1, x2); */
    u0_tmp = std::sqrt(D);
    D = (-B - u0_tmp) / (2.0 * A);
    t = (-B + u0_tmp) / (2.0 * A);
    if ((D > t) || rtIsNaN(t)) {
      t = D;
    }
  } else {
    /* 'URTrajCalc:15' else */
    /* 'URTrajCalc:16' t = -1; */
    t = -1.0;
  }

  return t;
}

/*
 * Function for MATLAB Function: '<S5>/attitude controller'
 * function [uv_attCtrl, rotVec, daq] = URAngleControl(daq, nd_i, primAxis, state, par, URpar)
 */
void URControlModelClass::URControl_URAngleControl(daqBus *daq, const real_T
  nd_i[3], const real_T primAxis[3], const stateBus *state, const
  struct_RFHeXVQBKrBUbfkgPERCEC *b_par, const URControlParamsType *URpar, real_T
  uv_attCtrl[2], real_T rotVec[2])
{
  real_T h[3];
  real_T totAngle;
  real_T speedAroundVec;
  real_T rotAction;
  real_T vAngle;
  int32_T signt;
  boolean_T y;
  boolean_T x[3];
  real_T h_uv[3];
  real_T tmp[9];
  real_T b_par_0;
  real_T h_uv_idx_0;
  real_T h_uv_tmp;
  real_T h_uv_tmp_0;
  real_T h_uv_tmp_tmp;
  real_T h_uv_tmp_tmp_0;
  real_T totAngle_tmp;
  boolean_T exitg1;

  /* 'URAngleControl:3' phi = state.att(1); */
  /* 'URAngleControl:4' theta = state.att(2); */
  /* 'URAngleControl:5' psi = state.att(3); */
  /* 'URAngleControl:8' R_BI = [cos(theta)*cos(psi) cos(theta)*sin(psi) -sin(theta); */
  /* 'URAngleControl:9'         sin(phi)*sin(theta)*cos(psi)-cos(phi)*sin(psi) sin(phi)*sin(theta)*sin(psi)+cos(phi)*cos(psi) sin(phi)*cos(theta); */
  /* 'URAngleControl:10'         cos(phi)*sin(theta)*cos(psi)+sin(phi)*sin(psi) cos(phi)*sin(theta)*sin(psi)-sin(phi)*cos(psi) cos(phi)*cos(theta)]; */
  /* 'URAngleControl:13' h = R_BI*nd_i; */
  h_uv_tmp = std::cos(state->att[1]);
  h_uv_idx_0 = std::cos(state->att[2]);
  tmp[0] = h_uv_tmp * h_uv_idx_0;
  b_par_0 = std::sin(state->att[2]);
  tmp[3] = h_uv_tmp * b_par_0;
  totAngle = std::sin(state->att[1]);
  tmp[6] = -totAngle;
  speedAroundVec = std::sin(state->att[0]);
  rotAction = speedAroundVec * totAngle;
  vAngle = std::cos(state->att[0]);
  tmp[1] = rotAction * h_uv_idx_0 - vAngle * b_par_0;
  tmp[4] = rotAction * b_par_0 + vAngle * h_uv_idx_0;
  tmp[7] = speedAroundVec * h_uv_tmp;
  totAngle *= vAngle;
  tmp[2] = totAngle * h_uv_idx_0 + speedAroundVec * b_par_0;
  tmp[5] = totAngle * b_par_0 - speedAroundVec * h_uv_idx_0;
  tmp[8] = vAngle * h_uv_tmp;
  for (signt = 0; signt < 3; signt++) {
    h[signt] = tmp[signt + 6] * nd_i[2] + (tmp[signt + 3] * nd_i[1] + tmp[signt]
      * nd_i[0]);
  }

  /* 'URAngleControl:15' h_uv = [par.URC.R_xy_uv*h(1:2); h(3)]; */
  h_uv_idx_0 = b_par->URC.R_xy_uv[0] * h[0] + b_par->URC.R_xy_uv[2] * h[1];
  b_par_0 = b_par->URC.R_xy_uv[1] * h[0] + b_par->URC.R_xy_uv[3] * h[1];

  /* 'URAngleControl:17' n = primAxis; */
  /* 'URAngleControl:19' daq.h_uv = h_uv; */
  /* 'URAngleControl:20' daq.n_uv = n'; */
  /* 'URAngleControl:23' currRotVec = [state.omegaUV(1); state.omegaUV(2); 0]; */
  /* 'URAngleControl:26' totAngle = atan2(norm(cross(h_uv,n)),dot(h_uv,n)); */
  daq->h_uv[0] = h_uv_idx_0;
  daq->n_uv[0] = primAxis[0];
  daq->h_uv[1] = b_par_0;
  daq->n_uv[1] = primAxis[1];
  daq->h_uv[2] = h[2];
  daq->n_uv[2] = primAxis[2];
  h_uv_tmp_tmp = b_par_0 * primAxis[2];
  h_uv_tmp = h_uv_tmp_tmp - h[2] * primAxis[1];
  h_uv[0] = h_uv_tmp;
  h_uv_tmp_0 = h_uv_idx_0 * primAxis[2];
  h_uv[1] = h[2] * primAxis[0] - h_uv_tmp_0;
  h_uv_tmp_tmp_0 = b_par_0 * primAxis[0];
  vAngle = h_uv_idx_0 * primAxis[1];
  speedAroundVec = vAngle - h_uv_tmp_tmp_0;
  h_uv[2] = speedAroundVec;
  rotAction = b_par_0 * primAxis[1];
  totAngle_tmp = h_uv_idx_0 * primAxis[0];
  totAngle = rt_atan2d_snf(URControl_norm(h_uv), (totAngle_tmp + rotAction) + h
    [2] * primAxis[2]);

  /* 'URAngleControl:29' if URpar.attitude_mode == 1 */
  if (URpar->attitude_mode == 1.0) {
    /* 'URAngleControl:33' rotVec3 = cross(h_uv,n); */
    h[0] = h_uv_tmp_tmp - h[2] * primAxis[1];
    h[1] = h[2] * primAxis[0] - h_uv_tmp_0;
    h[2] = speedAroundVec;

    /* 'URAngleControl:34' rotVec3 = rotVec3/max(abs(norm(rotVec3)),0.001); */
    rotAction = std::abs(URControl_norm(h));
    if (!(rotAction > 0.001)) {
      rotAction = 0.001;
    }

    h_uv_tmp = h[0] / rotAction;
    totAngle_tmp = h[1] / rotAction;

    /* 'URAngleControl:35' rotVec = rotVec3(1:2); */
    rotVec[0] = h_uv_tmp;
    rotVec[1] = totAngle_tmp;

    /* 'URAngleControl:37' speedAroundVec = dot(currRotVec, rotVec3); */
    speedAroundVec = (state->omegaUV[0] * h_uv_tmp + state->omegaUV[1] *
                      totAngle_tmp) + speedAroundVec / rotAction * 0.0;

    /* 'URAngleControl:39' if par.URC.attitude_enableTraj == 1 && totAngle > par.URC.attitude_trajThreshold */
    if ((b_par->URC.attitude_enableTraj == 1.0) && (totAngle >
         b_par->URC.attitude_trajThreshold)) {
      /* 'URAngleControl:40' tNormal = URTrajCalc(totAngle, -speedAroundVec, URpar.attitude_rotSpeedComp); */
      vAngle = URControl_URTrajCalc(totAngle, -speedAroundVec,
        URpar->attitude_rotSpeedComp);

      /* 'URAngleControl:41' tReverse = URTrajCalc(2*pi - totAngle, speedAroundVec, URpar.attitude_rotSpeedComp); */
      speedAroundVec = URControl_URTrajCalc(6.2831853071795862 - totAngle,
        speedAroundVec, URpar->attitude_rotSpeedComp);

      /* 'URAngleControl:43' if tNormal > 0 && tReverse > 0 */
      if ((vAngle > 0.0) && (speedAroundVec > 0.0) && (vAngle > speedAroundVec))
      {
        /* 'URAngleControl:44' if tNormal > tReverse */
        /* 'URAngleControl:45' rotVec = -rotVec; */
        rotVec[0] = -h_uv_tmp;
        rotVec[1] = -totAngle_tmp;
      }
    }

    /* 'URAngleControl:50' rotAction = abs(totAngle)*URpar.attitude_rotKp; */
    h_uv_tmp = std::abs(totAngle) * URpar->attitude_rotKp;

    /* 'URAngleControl:52' uv_attCtrl = [rotVec(1); rotVec(2)]*rotAction; */
    uv_attCtrl[0] = rotVec[0] * h_uv_tmp;
    uv_attCtrl[1] = rotVec[1] * h_uv_tmp;
  } else if (URpar->attitude_mode == 2.0) {
    /* 'URAngleControl:54' elseif URpar.attitude_mode == 2 */
    /* 'URAngleControl:58' rotVec3 = cross(h_uv,n); */
    h[0] = h_uv_tmp_tmp - h[2] * primAxis[1];
    h[1] = h[2] * primAxis[0] - h_uv_tmp_0;
    h[2] = speedAroundVec;

    /* 'URAngleControl:59' rotVec3 = rotVec3/max(abs(norm(rotVec3)),0.001); */
    rotAction = std::abs(URControl_norm(h));
    if (!(rotAction > 0.001)) {
      rotAction = 0.001;
    }

    h_uv_tmp = h[0] / rotAction;
    totAngle_tmp = h[1] / rotAction;

    /* 'URAngleControl:60' rotVec = rotVec3(1:2); */
    rotVec[0] = h_uv_tmp;
    rotVec[1] = totAngle_tmp;

    /* 'URAngleControl:62' speedAroundVec = dot(currRotVec, rotVec3); */
    speedAroundVec = (state->omegaUV[0] * h_uv_tmp + state->omegaUV[1] *
                      totAngle_tmp) + speedAroundVec / rotAction * 0.0;

    /* 'URAngleControl:64' if par.URC.attitude_enableTraj == 1 && totAngle > par.URC.attitude_trajThreshold */
    if ((b_par->URC.attitude_enableTraj == 1.0) && (totAngle >
         b_par->URC.attitude_trajThreshold)) {
      /* 'URAngleControl:65' tNormal = URTrajCalc(totAngle, -speedAroundVec, URpar.attitude_rotSpeedComp); */
      vAngle = URControl_URTrajCalc(totAngle, -speedAroundVec,
        URpar->attitude_rotSpeedComp);

      /* 'URAngleControl:66' tReverse = URTrajCalc(2*pi - totAngle, speedAroundVec, URpar.attitude_rotSpeedComp); */
      speedAroundVec = URControl_URTrajCalc(6.2831853071795862 - totAngle,
        speedAroundVec, URpar->attitude_rotSpeedComp);

      /* 'URAngleControl:68' if tNormal > 0 && tReverse > 0 */
      if ((vAngle > 0.0) && (speedAroundVec > 0.0) && (vAngle > speedAroundVec))
      {
        /* 'URAngleControl:69' if tNormal > tReverse */
        /* 'URAngleControl:70' rotVec = -rotVec; */
        rotVec[0] = -h_uv_tmp;
        rotVec[1] = -totAngle_tmp;
      }
    }

    /* 'URAngleControl:76' if state.fail_id == 1 || state.fail_id == 3 */
    if ((state->fail_id == 1.0) || (state->fail_id == 3.0)) {
      /* 'URAngleControl:77' vMax = 0.1*abs(state.omegaUV(3)); */
      h_uv_tmp = 0.1 * std::abs(state->omegaUV[2]);

      /* 'URAngleControl:78' rotVec(2) = max(min(rotVec(2), vMax), -vMax); */
      if ((rotVec[1] < h_uv_tmp) || rtIsNaN(h_uv_tmp)) {
        totAngle_tmp = rotVec[1];
      } else {
        totAngle_tmp = h_uv_tmp;
      }

      if ((totAngle_tmp > -h_uv_tmp) || rtIsNaN(-h_uv_tmp)) {
        rotVec[1] = totAngle_tmp;
      } else {
        rotVec[1] = -h_uv_tmp;
      }
    } else {
      if ((state->fail_id == 2.0) || (state->fail_id == 4.0)) {
        /* 'URAngleControl:80' elseif state.fail_id == 2 || state.fail_id == 4 */
        /* 'URAngleControl:81' uMax = 0.1*abs(state.omegaUV(3)); */
        h_uv_tmp_tmp_0 = 0.1 * std::abs(state->omegaUV[2]);

        /* 'URAngleControl:82' rotVec(1) = max(min(rotVec(1), uMax), -uMax); */
        if ((rotVec[0] < h_uv_tmp_tmp_0) || rtIsNaN(h_uv_tmp_tmp_0)) {
          totAngle_tmp = rotVec[0];
        } else {
          totAngle_tmp = h_uv_tmp_tmp_0;
        }

        if ((totAngle_tmp > -h_uv_tmp_tmp_0) || rtIsNaN(-h_uv_tmp_tmp_0)) {
          rotVec[0] = totAngle_tmp;
        } else {
          rotVec[0] = -h_uv_tmp_tmp_0;
        }
      }
    }

    /* 'URAngleControl:86' rotAction = abs(totAngle)*URpar.attitude_rotKp; */
    h_uv_tmp = std::abs(totAngle) * URpar->attitude_rotKp;

    /* 'URAngleControl:88' uv_attCtrl = [rotVec(1); rotVec(2)]*rotAction; */
    uv_attCtrl[0] = rotVec[0] * h_uv_tmp;
    uv_attCtrl[1] = rotVec[1] * h_uv_tmp;
  } else if (URpar->attitude_mode == 3.0) {
    /* 'URAngleControl:90' elseif URpar.attitude_mode == 3 */
    /* 'URAngleControl:95' if h_uv(3) > URpar.attitude_mode3Lim && state.fail_id > 0 */
    if ((h[2] > URpar->attitude_mode3Lim) && (state->fail_id > 0.0)) {
      /* 'URAngleControl:97' h_u = h_uv; */
      /* 'URAngleControl:97' h_u(1) = 0; */
      /* 'URAngleControl:98' h_v = h_uv; */
      /* 'URAngleControl:98' h_v(2) = 0; */
      /* 'URAngleControl:100' n_u = n; */
      /* 'URAngleControl:100' n_u(1) = 0; */
      /* 'URAngleControl:101' n_v = n; */
      /* 'URAngleControl:101' n_v(2) = 0; */
      /* 'URAngleControl:103' uAngle = atan2(norm(cross(h_u,n)),dot(h_u,n)); */
      h_uv_tmp = h[2] * primAxis[1];
      speedAroundVec = h_uv_tmp_tmp - h_uv_tmp;
      h_uv[0] = speedAroundVec;
      h_uv_tmp_tmp = h[2] * primAxis[0];
      h_uv[1] = h_uv_tmp_tmp - 0.0 * primAxis[2];
      h_uv[2] = 0.0 * primAxis[1] - h_uv_tmp_tmp_0;
      h_uv_tmp_tmp_0 = h[2] * primAxis[2];
      rotAction = rt_atan2d_snf(URControl_norm(h_uv), (0.0 * primAxis[0] +
        rotAction) + h_uv_tmp_tmp_0);

      /* 'URAngleControl:104' vAngle = atan2(norm(cross(h_v,n)),dot(h_v,n)); */
      h_uv[0] = 0.0 * primAxis[2] - h_uv_tmp;
      h_uv_tmp = h_uv_tmp_tmp - h_uv_tmp_0;
      h_uv[1] = h_uv_tmp;
      h_uv[2] = vAngle - 0.0 * primAxis[0];
      vAngle = rt_atan2d_snf(URControl_norm(h_uv), (totAngle_tmp + 0.0 *
        primAxis[1]) + h_uv_tmp_tmp_0);

      /* 'URAngleControl:106' uMax = min(max(state.uvDot_max(1), 5), -min(state.uvDot_min(1), -5)); */
      /* 'URAngleControl:107' vMax = min(max(state.uvDot_max(2), 5), -min(state.uvDot_min(2), -5)); */
      /* 'URAngleControl:109' tu = uAngle/uMax; */
      /* 'URAngleControl:110' tv = vAngle/vMax; */
      /* 'URAngleControl:112' if tu < tv */
      if (state->uvDot_max[0] > 5.0) {
        totAngle_tmp = state->uvDot_max[0];
      } else {
        totAngle_tmp = 5.0;
      }

      if (state->uvDot_min[0] < -5.0) {
        h_uv_tmp_0 = -state->uvDot_min[0];
      } else {
        h_uv_tmp_0 = 5.0;
      }

      if (state->uvDot_max[1] > 5.0) {
        h_uv_tmp_tmp_0 = state->uvDot_max[1];
      } else {
        h_uv_tmp_tmp_0 = 5.0;
      }

      if (state->uvDot_min[1] < -5.0) {
        h_uv_tmp_tmp = -state->uvDot_min[1];
      } else {
        h_uv_tmp_tmp = 5.0;
      }

      if ((totAngle_tmp < h_uv_tmp_0) || rtIsNaN(h_uv_tmp_0)) {
        h_uv_tmp_0 = totAngle_tmp;
      }

      if ((h_uv_tmp_tmp_0 < h_uv_tmp_tmp) || rtIsNaN(h_uv_tmp_tmp)) {
        h_uv_tmp_tmp = h_uv_tmp_tmp_0;
      }

      if (rotAction / h_uv_tmp_0 < vAngle / h_uv_tmp_tmp) {
        /* 'URAngleControl:113' if any(cross(h_u,n_u) < 0) */
        x[0] = (speedAroundVec < 0.0);
        x[1] = false;
        x[2] = false;
        y = false;
        signt = 0;
        exitg1 = false;
        while ((!exitg1) && (signt < 3)) {
          if (x[signt]) {
            y = true;
            exitg1 = true;
          } else {
            signt++;
          }
        }

        if (y) {
          /* 'URAngleControl:113' signt = -1; */
          signt = -1;
        } else {
          /* 'URAngleControl:113' else */
          /* 'URAngleControl:113' signt = 1; */
          signt = 1;
        }

        /* 'URAngleControl:114' rotVec = [1,0]*signt; */
        rotVec[0] = signt;
        rotVec[1] = 0.0 * (real_T)signt;

        /* 'URAngleControl:115' rotAngle = uAngle; */
        vAngle = rotAction;
      } else {
        /* 'URAngleControl:116' else */
        /* 'URAngleControl:117' if any(cross(h_v,n_v) < 0) */
        x[0] = false;
        x[1] = (h_uv_tmp < 0.0);
        x[2] = false;
        y = false;
        signt = 0;
        exitg1 = false;
        while ((!exitg1) && (signt < 3)) {
          if (x[signt]) {
            y = true;
            exitg1 = true;
          } else {
            signt++;
          }
        }

        if (y) {
          /* 'URAngleControl:117' signt = -1; */
          signt = -1;
        } else {
          /* 'URAngleControl:117' else */
          /* 'URAngleControl:117' signt = 1; */
          signt = 1;
        }

        /* 'URAngleControl:118' rotVec = [0,1]*signt; */
        rotVec[0] = 0.0 * (real_T)signt;
        rotVec[1] = signt;

        /* 'URAngleControl:119' rotAngle = vAngle; */
      }

      /* 'URAngleControl:122' rotVec3 = [rotVec, 0]; */
      h[0] = rotVec[0];
      h[1] = rotVec[1];
      h[2] = 0.0;

      /* 'URAngleControl:124' rotAction = abs(rotAngle)*URpar.attitude_rotKp; */
      rotAction = std::abs(vAngle) * URpar->attitude_rotKp;
    } else {
      /* 'URAngleControl:126' else */
      /* 'URAngleControl:128' rotVec3 = cross(h_uv,n); */
      h[0] = h_uv_tmp;
      h[1] = h[2] * primAxis[0] - h_uv_tmp_0;
      h[2] = speedAroundVec;

      /* 'URAngleControl:129' rotVec3 = rotVec3/max(abs(norm(rotVec3)),0.001); */
      rotAction = std::abs(URControl_norm(h));
      if (!(rotAction > 0.001)) {
        rotAction = 0.001;
      }

      h_uv_tmp /= rotAction;
      rotVec[0] = h_uv_tmp;
      rotVec[1] = h[1] / rotAction;
      h[0] = h_uv_tmp;
      h[1] /= rotAction;
      h[2] = speedAroundVec / rotAction;

      /* 'URAngleControl:130' rotVec = rotVec3(1:2); */
      /* 'URAngleControl:131' rotAction = abs(totAngle)*URpar.attitude_rotKp; */
      rotAction = std::abs(totAngle) * URpar->attitude_rotKp;
    }

    /* 'URAngleControl:134' speedAroundVec = dot(currRotVec, rotVec3); */
    speedAroundVec = (state->omegaUV[0] * h[0] + state->omegaUV[1] * h[1]) + 0.0
      * h[2];

    /* 'URAngleControl:136' if par.URC.attitude_enableTraj == 1 && totAngle > par.URC.attitude_trajThreshold */
    if ((b_par->URC.attitude_enableTraj == 1.0) && (totAngle >
         b_par->URC.attitude_trajThreshold)) {
      /* 'URAngleControl:137' tNormal = URTrajCalc(totAngle, -speedAroundVec, URpar.attitude_rotSpeedComp); */
      vAngle = URControl_URTrajCalc(totAngle, -speedAroundVec,
        URpar->attitude_rotSpeedComp);

      /* 'URAngleControl:138' tReverse = URTrajCalc(2*pi - totAngle, speedAroundVec, URpar.attitude_rotSpeedComp); */
      speedAroundVec = URControl_URTrajCalc(6.2831853071795862 - totAngle,
        speedAroundVec, URpar->attitude_rotSpeedComp);

      /* 'URAngleControl:140' if tNormal > 0 && tReverse > 0 */
      if ((vAngle > 0.0) && (speedAroundVec > 0.0) && (vAngle > speedAroundVec))
      {
        /* 'URAngleControl:141' if tNormal > tReverse */
        /* 'URAngleControl:142' rotVec = -rotVec; */
        rotVec[0] = -rotVec[0];
        rotVec[1] = -rotVec[1];
      }
    }

    /* 'URAngleControl:147' uv_attCtrl = [rotVec(1); rotVec(2)]*rotAction; */
    uv_attCtrl[0] = rotVec[0] * rotAction;
    uv_attCtrl[1] = rotVec[1] * rotAction;
  } else {
    /* 'URAngleControl:149' else */
    /* 'URAngleControl:150' rotVec = [0,0]; */
    /* 'URAngleControl:151' uv_attCtrl = [0;0]; */
    rotVec[0] = 0.0;
    uv_attCtrl[0] = 0.0;
    rotVec[1] = 0.0;
    uv_attCtrl[1] = 0.0;
  }

  /* 'URAngleControl:159' uv_yrcComp = -[h_uv(1); h_uv(2)]*state.omegaUV(3)*URpar.attitude_yrcComp; */
  /* 'URAngleControl:161' uv_attCtrl = uv_attCtrl + uv_yrcComp; */
  uv_attCtrl[0] += -h_uv_idx_0 * state->omegaUV[2] * URpar->attitude_yrcComp;
  uv_attCtrl[1] += -b_par_0 * state->omegaUV[2] * URpar->attitude_yrcComp;
}

/*
 * Function for MATLAB Function: '<S8>/control allocator'
 * function obj = SimpleDerivative(filterT, initValue, maxLim, minLim)
 */
SimpleDerivative_URControl_T *URControlModelClass::
  SimpleDerivative_SimpleDerivati(SimpleDerivative_URControl_T *obj, real_T
  filterT, const real_T initValue[3], real_T maxLim, real_T minLim)
{
  SimpleDerivative_URControl_T *b_obj;
  b_obj = obj;

  /* 'SimpleDerivative:12' obj.filterHandle = LPFilter(filterT, initValue, maxLim, minLim); */
  /* 'LPFilter:14' obj.filterT = filterT; */
  obj->filterHandle.filterT = filterT;

  /* 'LPFilter:15' obj.value = initValue; */
  obj->filterHandle.value[0] = initValue[0];
  obj->filterHandle.value[1] = initValue[1];
  obj->filterHandle.value[2] = initValue[2];

  /* 'LPFilter:16' obj.maxLim = maxLim; */
  obj->filterHandle.maxLim = maxLim;

  /* 'LPFilter:17' obj.minLim = minLim; */
  obj->filterHandle.minLim = minLim;

  /* 'SimpleDerivative:13' obj.prevValue = initValue; */
  obj->prevValue[0] = initValue[0];
  obj->prevValue[1] = initValue[1];
  obj->prevValue[2] = initValue[2];
  return b_obj;
}

/*
 * Function for MATLAB Function: '<S8>/control allocator'
 * function obj = LPFilter(filterT, initValue, maxLim, minLim)
 */
LPFilter_1_URControl_T *URControlModelClass::URControl_LPFilter_LPFilter_n
  (LPFilter_1_URControl_T *obj, real_T filterT)
{
  LPFilter_1_URControl_T *b_obj;
  b_obj = obj;

  /* 'LPFilter:14' obj.filterT = filterT; */
  obj->filterT = filterT;

  /* 'LPFilter:15' obj.value = initValue; */
  obj->value = 0.0;

  /* 'LPFilter:16' obj.maxLim = maxLim; */
  obj->maxLim = 30.0;

  /* 'LPFilter:17' obj.minLim = minLim; */
  obj->minLim = -30.0;
  return b_obj;
}

/*
 * Function for MATLAB Function: '<S8>/control allocator'
 * function update(obj,newValue,dt)
 */
void URControlModelClass::URContr_SimpleDerivative_update
  (SimpleDerivative_URControl_T *obj, const real_T newValue[3], real_T dt)
{
  real_T b;
  real_T b_b;
  real_T derRaw_idx_1;
  real_T a_idx_1;
  real_T derRaw_idx_2;
  real_T a_idx_2;
  boolean_T tmp;

  /* 'SimpleDerivative:17' derRaw = (newValue - obj.prevValue)/dt; */
  /* 'SimpleDerivative:18' obj.filterHandle.update(derRaw); */
  /* 'LPFilter:21' obj.value = obj.value*obj.filterT + newValue*(1 - obj.filterT); */
  derRaw_idx_1 = (newValue[1] - obj->prevValue[1]) / dt;
  a_idx_1 = obj->filterHandle.value[1];
  derRaw_idx_2 = (newValue[2] - obj->prevValue[2]) / dt;
  a_idx_2 = obj->filterHandle.value[2];
  b = obj->filterHandle.filterT;
  b_b = 1.0 - obj->filterHandle.filterT;
  obj->filterHandle.value[0] = (newValue[0] - obj->prevValue[0]) / dt * (1.0 -
    obj->filterHandle.filterT) + obj->filterHandle.value[0] *
    obj->filterHandle.filterT;
  obj->filterHandle.value[1] = a_idx_1 * b + derRaw_idx_1 * b_b;
  obj->filterHandle.value[2] = a_idx_2 * b + derRaw_idx_2 * b_b;

  /* 'LPFilter:22' obj.value = max(min(obj.value,obj.maxLim),obj.minLim); */
  tmp = rtIsNaN(obj->filterHandle.maxLim);
  if ((obj->filterHandle.value[0] < obj->filterHandle.maxLim) || tmp) {
    derRaw_idx_1 = obj->filterHandle.value[0];
  } else {
    derRaw_idx_1 = obj->filterHandle.maxLim;
  }

  if ((obj->filterHandle.value[1] < obj->filterHandle.maxLim) || tmp) {
    a_idx_1 = obj->filterHandle.value[1];
  } else {
    a_idx_1 = obj->filterHandle.maxLim;
  }

  if ((obj->filterHandle.value[2] < obj->filterHandle.maxLim) || tmp) {
    a_idx_2 = obj->filterHandle.value[2];
  } else {
    a_idx_2 = obj->filterHandle.maxLim;
  }

  b = obj->filterHandle.minLim;

  /* 'SimpleDerivative:19' obj.derValue = obj.filterHandle.value; */
  /* 'SimpleDerivative:20' obj.prevValue = newValue; */
  if ((derRaw_idx_1 > obj->filterHandle.minLim) || rtIsNaN
      (obj->filterHandle.minLim)) {
    obj->filterHandle.value[0] = derRaw_idx_1;
  } else {
    obj->filterHandle.value[0] = obj->filterHandle.minLim;
  }

  obj->derValue[0] = obj->filterHandle.value[0];
  obj->prevValue[0] = newValue[0];
  if ((a_idx_1 > b) || rtIsNaN(b)) {
    obj->filterHandle.value[1] = a_idx_1;
  } else {
    obj->filterHandle.value[1] = b;
  }

  obj->derValue[1] = obj->filterHandle.value[1];
  obj->prevValue[1] = newValue[1];
  if ((a_idx_2 > b) || rtIsNaN(b)) {
    obj->filterHandle.value[2] = a_idx_2;
  } else {
    obj->filterHandle.value[2] = b;
  }

  obj->derValue[2] = obj->filterHandle.value[2];
  obj->prevValue[2] = newValue[2];
}

/* Function for MATLAB Function: '<S8>/control allocator' */
void URControlModelClass::URControl_xswap_l(int32_T n, real_T x_data[], int32_T
  ix0, int32_T iy0)
{
  int32_T ix;
  int32_T iy;
  real_T temp;
  int32_T k;
  ix = ix0 - 1;
  iy = iy0 - 1;
  for (k = 0; k < n; k++) {
    temp = x_data[ix];
    x_data[ix] = x_data[iy];
    x_data[iy] = temp;
    ix++;
    iy++;
  }
}

/* Function for MATLAB Function: '<S8>/control allocator' */
real_T URControlModelClass::URControl_xnrm2_fx(int32_T n, const real_T x_data[],
  int32_T ix0)
{
  real_T y;
  real_T scale;
  int32_T kend;
  real_T absxk;
  real_T t;
  int32_T k;
  y = 0.0;
  if (n >= 1) {
    if (n == 1) {
      y = std::abs(x_data[ix0 - 1]);
    } else {
      scale = 3.3121686421112381E-170;
      kend = (ix0 + n) - 1;
      for (k = ix0; k <= kend; k++) {
        absxk = std::abs(x_data[k - 1]);
        if (absxk > scale) {
          t = scale / absxk;
          y = y * t * t + 1.0;
          scale = absxk;
        } else {
          t = absxk / scale;
          y += t * t;
        }
      }

      y = scale * std::sqrt(y);
    }
  }

  return y;
}

real_T rt_hypotd_snf(real_T u0, real_T u1)
{
  real_T y;
  real_T a;
  a = std::abs(u0);
  y = std::abs(u1);
  if (a < y) {
    a /= y;
    y *= std::sqrt(a * a + 1.0);
  } else if (a > y) {
    y /= a;
    y = std::sqrt(y * y + 1.0) * a;
  } else {
    if (!rtIsNaN(y)) {
      y = a * 1.4142135623730951;
    }
  }

  return y;
}

/* Function for MATLAB Function: '<S8>/control allocator' */
void URControlModelClass::URControl_xzlarf(int32_T m, int32_T n, int32_T iv0,
  real_T tau, real_T C_data[], int32_T ic0, int32_T ldc, real_T work_data[])
{
  int32_T lastv;
  int32_T lastc;
  int32_T coltop;
  int32_T ix;
  real_T c;
  int32_T iac;
  int32_T d;
  int32_T b_ia;
  int32_T jy;
  int32_T exitg1;
  boolean_T exitg2;
  if (tau != 0.0) {
    lastv = m;
    lastc = iv0 + m;
    while ((lastv > 0) && (C_data[lastc - 2] == 0.0)) {
      lastv--;
      lastc--;
    }

    lastc = n - 1;
    exitg2 = false;
    while ((!exitg2) && (lastc + 1 > 0)) {
      coltop = lastc * ldc + ic0;
      jy = coltop;
      do {
        exitg1 = 0;
        if (jy <= (coltop + lastv) - 1) {
          if (C_data[jy - 1] != 0.0) {
            exitg1 = 1;
          } else {
            jy++;
          }
        } else {
          lastc--;
          exitg1 = 2;
        }
      } while (exitg1 == 0);

      if (exitg1 == 1) {
        exitg2 = true;
      }
    }
  } else {
    lastv = 0;
    lastc = -1;
  }

  if (lastv > 0) {
    if (lastc + 1 != 0) {
      for (coltop = 0; coltop <= lastc; coltop++) {
        work_data[coltop] = 0.0;
      }

      coltop = 0;
      jy = ldc * lastc + ic0;
      iac = ic0;
      while (((ldc > 0) && (iac <= jy)) || ((ldc < 0) && (iac >= jy))) {
        ix = iv0;
        c = 0.0;
        d = (iac + lastv) - 1;
        for (b_ia = iac; b_ia <= d; b_ia++) {
          c += C_data[b_ia - 1] * C_data[ix - 1];
          ix++;
        }

        work_data[coltop] += c;
        coltop++;
        iac += ldc;
      }
    }

    if (!(-tau == 0.0)) {
      coltop = ic0 - 1;
      jy = 0;
      for (iac = 0; iac <= lastc; iac++) {
        if (work_data[jy] != 0.0) {
          c = work_data[jy] * -tau;
          ix = iv0;
          d = lastv + coltop;
          for (b_ia = coltop; b_ia < d; b_ia++) {
            C_data[b_ia] += C_data[ix - 1] * c;
            ix++;
          }
        }

        jy++;
        coltop += ldc;
      }
    }
  }
}

/* Function for MATLAB Function: '<S8>/control allocator' */
void URControlModelClass::URControl_xgeqp3(real_T A_data[], int32_T A_size[2],
  real_T tau_data[], int32_T *tau_size, int32_T jpvt_data[], int32_T jpvt_size[2])
{
  int32_T m;
  int32_T n;
  int32_T mn;
  real_T work_data[12];
  real_T vn1_data[12];
  real_T vn2_data[12];
  int32_T i_i;
  int32_T nmi;
  int32_T itemp;
  int32_T b_n;
  int32_T yk;
  int32_T idxmax;
  int32_T ix;
  real_T smax;
  real_T s;
  int8_T c_idx_0;
  m = A_size[0];
  n = A_size[1];
  if (A_size[0] < A_size[1]) {
    mn = A_size[0];
  } else {
    mn = A_size[1];
  }

  *tau_size = (int8_T)mn;
  if (A_size[1] < 1) {
    b_n = 0;
  } else {
    b_n = A_size[1];
  }

  jpvt_size[0] = 1;
  jpvt_size[1] = b_n;
  if (b_n > 0) {
    jpvt_data[0] = 1;
    yk = 1;
    for (i_i = 2; i_i <= b_n; i_i++) {
      yk++;
      jpvt_data[i_i - 1] = yk;
    }
  }

  if (A_size[1] != 0) {
    c_idx_0 = (int8_T)A_size[1];
    if (0 <= c_idx_0 - 1) {
      memset(&work_data[0], 0, c_idx_0 * sizeof(real_T));
    }

    b_n = 1;
    for (yk = 0; yk < n; yk++) {
      vn1_data[yk] = URControl_xnrm2_fx(m, A_data, b_n);
      vn2_data[yk] = vn1_data[yk];
      b_n += m;
    }

    for (b_n = 0; b_n < mn; b_n++) {
      i_i = b_n * m + b_n;
      nmi = n - b_n;
      yk = m - b_n;
      if (nmi < 1) {
        idxmax = 0;
      } else {
        idxmax = 1;
        if (nmi > 1) {
          ix = b_n;
          smax = std::abs(vn1_data[b_n]);
          for (itemp = 2; itemp <= nmi; itemp++) {
            ix++;
            s = std::abs(vn1_data[ix]);
            if (s > smax) {
              idxmax = itemp;
              smax = s;
            }
          }
        }
      }

      ix = (b_n + idxmax) - 1;
      if (ix + 1 != b_n + 1) {
        URControl_xswap_l(m, A_data, 1 + m * ix, 1 + m * b_n);
        itemp = jpvt_data[ix];
        jpvt_data[ix] = jpvt_data[b_n];
        jpvt_data[b_n] = itemp;
        vn1_data[ix] = vn1_data[b_n];
        vn2_data[ix] = vn2_data[b_n];
      }

      if (b_n + 1 < m) {
        smax = A_data[i_i];
        tau_data[b_n] = 0.0;
        if (yk > 0) {
          s = URControl_xnrm2_fx(yk - 1, A_data, i_i + 2);
          if (s != 0.0) {
            s = rt_hypotd_snf(A_data[i_i], s);
            if (A_data[i_i] >= 0.0) {
              s = -s;
            }

            if (std::abs(s) < 1.0020841800044864E-292) {
              ix = -1;
              itemp = i_i + yk;
              do {
                ix++;
                for (idxmax = i_i + 1; idxmax < itemp; idxmax++) {
                  A_data[idxmax] *= 9.9792015476736E+291;
                }

                s *= 9.9792015476736E+291;
                smax *= 9.9792015476736E+291;
              } while (!(std::abs(s) >= 1.0020841800044864E-292));

              s = rt_hypotd_snf(smax, URControl_xnrm2_fx(yk - 1, A_data, i_i + 2));
              if (smax >= 0.0) {
                s = -s;
              }

              tau_data[b_n] = (s - smax) / s;
              smax = 1.0 / (smax - s);
              itemp = i_i + yk;
              for (idxmax = i_i + 1; idxmax < itemp; idxmax++) {
                A_data[idxmax] *= smax;
              }

              for (idxmax = 0; idxmax <= ix; idxmax++) {
                s *= 1.0020841800044864E-292;
              }

              smax = s;
            } else {
              tau_data[b_n] = (s - A_data[i_i]) / s;
              smax = 1.0 / (A_data[i_i] - s);
              ix = i_i + yk;
              for (itemp = i_i + 1; itemp < ix; itemp++) {
                A_data[itemp] *= smax;
              }

              smax = s;
            }
          }
        }

        A_data[i_i] = smax;
      } else {
        tau_data[b_n] = 0.0;
      }

      if (b_n + 1 < n) {
        smax = A_data[i_i];
        A_data[i_i] = 1.0;
        URControl_xzlarf(yk, nmi - 1, i_i + 1, tau_data[b_n], A_data, (b_n +
          (b_n + 1) * m) + 1, m, work_data);
        A_data[i_i] = smax;
      }

      for (i_i = b_n + 1; i_i < n; i_i++) {
        if (vn1_data[i_i] != 0.0) {
          nmi = A_size[0] * i_i + b_n;
          smax = std::abs(A_data[nmi]) / vn1_data[i_i];
          smax = 1.0 - smax * smax;
          if (smax < 0.0) {
            smax = 0.0;
          }

          s = vn1_data[i_i] / vn2_data[i_i];
          s = s * s * smax;
          if (s <= 1.4901161193847656E-8) {
            if (b_n + 1 < m) {
              vn1_data[i_i] = URControl_xnrm2_fx(yk - 1, A_data, nmi + 2);
              vn2_data[i_i] = vn1_data[i_i];
            } else {
              vn1_data[i_i] = 0.0;
              vn2_data[i_i] = 0.0;
            }
          } else {
            vn1_data[i_i] *= std::sqrt(smax);
          }
        }
      }
    }
  }
}

/* Function for MATLAB Function: '<S8>/control allocator' */
void URControlModelClass::URControl_lusolve(const real_T A_data[], const int32_T
  A_size[2], real_T B_data[])
{
  int32_T n;
  real_T b_A_data[144];
  int32_T ipiv_data[12];
  int32_T mmj;
  int32_T b_n;
  int32_T yk;
  int32_T b_c;
  int32_T ix;
  real_T smax;
  real_T s;
  int32_T iy;
  int32_T c_ix;
  int32_T e;
  int32_T ijA;
  int32_T b_kAcol;
  n = A_size[1];
  yk = A_size[0] * A_size[1] - 1;
  if (0 <= yk) {
    memcpy(&b_A_data[0], &A_data[0], (yk + 1) * sizeof(real_T));
  }

  b_n = A_size[1];
  if (b_n < 1) {
    b_n = 0;
  }

  if (b_n > 0) {
    ipiv_data[0] = 1;
    yk = 1;
    for (b_kAcol = 2; b_kAcol <= b_n; b_kAcol++) {
      yk++;
      ipiv_data[b_kAcol - 1] = yk;
    }
  }

  if (A_size[1] >= 1) {
    yk = A_size[1] - 1;
    if (yk >= A_size[1]) {
      yk = A_size[1];
    }

    for (b_kAcol = 0; b_kAcol < yk; b_kAcol++) {
      mmj = n - b_kAcol;
      b_c = (n + 1) * b_kAcol;
      if (mmj < 1) {
        b_n = -1;
      } else {
        b_n = 0;
        if (mmj > 1) {
          ix = b_c;
          smax = std::abs(b_A_data[b_c]);
          for (iy = 2; iy <= mmj; iy++) {
            ix++;
            s = std::abs(b_A_data[ix]);
            if (s > smax) {
              b_n = iy - 1;
              smax = s;
            }
          }
        }
      }

      if (b_A_data[b_c + b_n] != 0.0) {
        if (b_n != 0) {
          iy = b_kAcol + b_n;
          ipiv_data[b_kAcol] = iy + 1;
          ix = b_kAcol;
          for (b_n = 0; b_n < n; b_n++) {
            smax = b_A_data[ix];
            b_A_data[ix] = b_A_data[iy];
            b_A_data[iy] = smax;
            ix += n;
            iy += n;
          }
        }

        iy = b_c + mmj;
        for (b_n = b_c + 1; b_n < iy; b_n++) {
          b_A_data[b_n] /= b_A_data[b_c];
        }
      }

      ix = b_c + n;
      b_n = ix + 1;
      for (iy = 0; iy <= mmj - 2; iy++) {
        smax = b_A_data[ix];
        if (b_A_data[ix] != 0.0) {
          c_ix = b_c + 1;
          e = mmj + b_n;
          for (ijA = b_n; ijA < e - 1; ijA++) {
            b_A_data[ijA] += b_A_data[c_ix] * -smax;
            c_ix++;
          }
        }

        ix += n;
        b_n += n;
      }
    }
  }

  for (yk = 0; yk <= n - 2; yk++) {
    if (yk + 1 != ipiv_data[yk]) {
      smax = B_data[yk];
      B_data[yk] = B_data[ipiv_data[yk] - 1];
      B_data[ipiv_data[yk] - 1] = smax;
    }
  }

  for (yk = 0; yk < n; yk++) {
    b_kAcol = n * yk;
    if (B_data[yk] != 0.0) {
      for (mmj = yk + 1; mmj < n; mmj++) {
        B_data[mmj] -= b_A_data[mmj + b_kAcol] * B_data[yk];
      }
    }
  }

  for (yk = A_size[1] - 1; yk + 1 > 0; yk--) {
    b_kAcol = n * yk;
    if (B_data[yk] != 0.0) {
      B_data[yk] /= b_A_data[yk + b_kAcol];
      for (mmj = 0; mmj < yk; mmj++) {
        B_data[mmj] -= b_A_data[mmj + b_kAcol] * B_data[yk];
      }
    }
  }
}

/* Function for MATLAB Function: '<S8>/control allocator' */
void URControlModelClass::URControl_mldivide(const real_T A_data[], const
  int32_T A_size[2], const real_T B_data[], const int32_T *B_size, real_T
  Y_data[], int32_T *Y_size)
{
  real_T b_A_data[144];
  real_T tau_data[12];
  int32_T jpvt_data[12];
  int32_T rankR;
  int32_T minmn;
  int32_T maxmn;
  real_T b_B_data[12];
  real_T wj;
  int32_T c_i;
  int32_T b_A_size[2];
  int32_T jpvt_size[2];
  int8_T b_idx_0;
  int32_T b_A_size_0;
  if (A_size[1] == 0) {
    *Y_size = 0;
  } else if (A_size[0] == A_size[1]) {
    *Y_size = *B_size;
    if (0 <= *B_size - 1) {
      memcpy(&Y_data[0], &B_data[0], *B_size * sizeof(real_T));
    }

    URControl_lusolve(A_data, A_size, Y_data);
  } else {
    b_A_size[0] = A_size[0];
    b_A_size[1] = A_size[1];
    minmn = A_size[0] * A_size[1] - 1;
    if (0 <= minmn) {
      memcpy(&b_A_data[0], &A_data[0], (minmn + 1) * sizeof(real_T));
    }

    URControl_xgeqp3(b_A_data, b_A_size, tau_data, &minmn, jpvt_data, jpvt_size);
    rankR = 0;
    if (b_A_size[0] < b_A_size[1]) {
      minmn = b_A_size[0];
      maxmn = b_A_size[1];
    } else {
      minmn = b_A_size[1];
      maxmn = b_A_size[0];
    }

    if (minmn > 0) {
      while ((rankR < minmn) && (!(std::abs(b_A_data[b_A_size[0] * rankR + rankR])
               <= 2.2204460492503131E-15 * (real_T)maxmn * std::abs(b_A_data[0]))))
      {
        rankR++;
      }
    }

    b_idx_0 = (int8_T)b_A_size[1];
    *Y_size = b_idx_0;
    if (0 <= b_idx_0 - 1) {
      memset(&Y_data[0], 0, b_idx_0 * sizeof(real_T));
    }

    if (0 <= *B_size - 1) {
      memcpy(&b_B_data[0], &B_data[0], *B_size * sizeof(real_T));
    }

    minmn = b_A_size[0];
    if (b_A_size[0] < b_A_size[1]) {
      b_A_size_0 = b_A_size[0];
    } else {
      b_A_size_0 = b_A_size[1];
    }

    maxmn = b_A_size_0 - 1;
    for (b_A_size_0 = 0; b_A_size_0 <= maxmn; b_A_size_0++) {
      if (tau_data[b_A_size_0] != 0.0) {
        wj = b_B_data[b_A_size_0];
        for (c_i = b_A_size_0 + 1; c_i < minmn; c_i++) {
          wj += b_A_data[b_A_size[0] * b_A_size_0 + c_i] * b_B_data[c_i];
        }

        wj *= tau_data[b_A_size_0];
        if (wj != 0.0) {
          b_B_data[b_A_size_0] -= wj;
          for (c_i = b_A_size_0 + 1; c_i < minmn; c_i++) {
            b_B_data[c_i] -= b_A_data[b_A_size[0] * b_A_size_0 + c_i] * wj;
          }
        }
      }
    }

    for (maxmn = 0; maxmn < rankR; maxmn++) {
      Y_data[jpvt_data[maxmn] - 1] = b_B_data[maxmn];
    }

    for (rankR--; rankR + 1 > 0; rankR--) {
      minmn = b_A_size[0] * rankR;
      Y_data[jpvt_data[rankR] - 1] /= b_A_data[minmn + rankR];
      for (b_A_size_0 = 0; b_A_size_0 < rankR; b_A_size_0++) {
        Y_data[jpvt_data[b_A_size_0] - 1] -= b_A_data[minmn + b_A_size_0] *
          Y_data[jpvt_data[rankR] - 1];
      }
    }
  }
}

/*
 * Function for MATLAB Function: '<S8>/control allocator'
 * function [x,y_state,iterSteps,optimal] = QPINDI(inp, G, K, K2, lowBound, highBound, y_state_init, par, URpar)
 */
void URControlModelClass::URControl_QPINDI(const real_T inp[4], const real_T G
  [16], const real_T K[16], const real_T K2[16], const real_T lowBound[4], const
  real_T highBound[4], real_T y_state_init[4], real_T x[4], real_T *iterSteps,
  real_T *optimal)
{
  real_T H[16];
  real_T c[4];
  real_T b[8];
  boolean_T indices[8];
  int8_T A_eq_data[32];
  int8_T AT_eq_data[32];
  real_T xy_data[12];
  real_T constraintError[8];
  real_T count;
  int8_T f_data[8];
  int8_T g_data[8];
  int8_T result_data[96];
  boolean_T empty_non_axis_sizes;
  real_T varargin_1_data[48];
  int32_T idx;
  real_T b_ex;
  static const int8_T A[32] = { 1, 0, 0, 0, -1, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0,
    0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 1, 0, 0, 0, -1 };

  real_T H_tmp[16];
  int32_T i;
  real_T varargin_1_data_0[144];
  real_T c_data[12];
  int32_T loop_ub;
  real_T H_tmp_0[16];
  real_T inp_0[4];
  int32_T xy_size;
  int32_T varargin_1_size[2];
  int32_T result_size_idx_1;
  int8_T l2_idx_0;
  int8_T l1_idx_1;
  int32_T H_tmp_tmp;
  int32_T H_tmp_tmp_0;
  int32_T H_tmp_tmp_1;
  int32_T H_tmp_tmp_2;
  real_T tmp;
  boolean_T tmp_0;
  boolean_T guard1 = false;
  boolean_T exitg1;
  boolean_T exitg2;

  /* 'QPINDI:13' x = [0;0;0;0]; */
  /* 'QPINDI:14' y = [0;0;0;0]; */
  /* 'QPINDI:16' H = 2*(G'*K*G + K2); */
  for (i = 0; i < 4; i++) {
    x[i] = 0.0;
    for (loop_ub = 0; loop_ub < 4; loop_ub++) {
      H_tmp_tmp = loop_ub << 2;
      H_tmp_tmp_0 = i + H_tmp_tmp;
      H_tmp[H_tmp_tmp_0] = 0.0;
      H_tmp_tmp_1 = i << 2;
      H_tmp_tmp_2 = H_tmp_tmp + i;
      H_tmp[H_tmp_tmp_0] = H_tmp[H_tmp_tmp_2] + G[H_tmp_tmp_1] * K[H_tmp_tmp];
      H_tmp[H_tmp_tmp_0] = G[H_tmp_tmp_1 + 1] * K[H_tmp_tmp + 1] +
        H_tmp[H_tmp_tmp_2];
      H_tmp[H_tmp_tmp_0] = G[H_tmp_tmp_1 + 2] * K[H_tmp_tmp + 2] +
        H_tmp[H_tmp_tmp_2];
      H_tmp[H_tmp_tmp_0] = G[H_tmp_tmp_1 + 3] * K[H_tmp_tmp + 3] +
        H_tmp[H_tmp_tmp_2];
    }

    for (loop_ub = 0; loop_ub < 4; loop_ub++) {
      H_tmp_tmp = loop_ub << 2;
      H_tmp_0[i + H_tmp_tmp] = (((G[H_tmp_tmp + 1] * H_tmp[i + 4] + G[H_tmp_tmp]
        * H_tmp[i]) + G[H_tmp_tmp + 2] * H_tmp[i + 8]) + G[H_tmp_tmp + 3] *
        H_tmp[i + 12]) + K2[H_tmp_tmp + i];
    }
  }

  for (loop_ub = 0; loop_ub < 16; loop_ub++) {
    H[loop_ub] = 2.0 * H_tmp_0[loop_ub];
  }

  /* 'QPINDI:17' c = -(G'*K*inp + (inp'*K*G)'); */
  for (loop_ub = 0; loop_ub < 4; loop_ub++) {
    H_tmp_tmp = loop_ub << 2;
    count = K[H_tmp_tmp + 3] * inp[3] + (K[H_tmp_tmp + 2] * inp[2] +
      (K[H_tmp_tmp + 1] * inp[1] + K[H_tmp_tmp] * inp[0]));
    inp_0[loop_ub] = count;
  }

  /* 'QPINDI:20' A = [1,0,0,0;... */
  /* 'QPINDI:21'      0,1,0,0;... */
  /* 'QPINDI:22'      0,0,1,0;... */
  /* 'QPINDI:23'      0,0,0,1;... */
  /* 'QPINDI:24'      -1,0,0,0;... */
  /* 'QPINDI:25'      0,-1,0,0;... */
  /* 'QPINDI:26'      0,0,-1,0;... */
  /* 'QPINDI:27'      0,0,0,-1]; */
  /* 'QPINDI:29' b = [highBound;-lowBound]; */
  for (i = 0; i < 4; i++) {
    H_tmp_tmp = i << 2;
    count = G[H_tmp_tmp + 3] * inp_0[3] + (G[H_tmp_tmp + 2] * inp_0[2] +
      (G[H_tmp_tmp + 1] * inp_0[1] + G[H_tmp_tmp] * inp_0[0]));
    c[i] = -((((H_tmp[i + 4] * inp[1] + H_tmp[i] * inp[0]) + H_tmp[i + 8] * inp
               [2]) + H_tmp[i + 12] * inp[3]) + count);
    b[i] = highBound[i];
    b[i + 4] = -lowBound[i];
  }

  /* 'QPINDI:32' y_state = y_state_init; */
  /* 'QPINDI:33' solution = 0; */
  i = 0;

  /* 'QPINDI:34' iterSteps = 0; */
  *iterSteps = 0.0;

  /* 'QPINDI:36' for iter = 1:10 */
  H_tmp_tmp = 0;
  exitg1 = false;
  while ((!exitg1) && (H_tmp_tmp < 10)) {
    /* 'QPINDI:37' iterSteps = iterSteps +1; */
    (*iterSteps)++;

    /* 'QPINDI:47' indices = [(y_state == 1), (y_state == -1)]; */
    indices[0] = (y_state_init[0] == 1.0);
    indices[4] = (y_state_init[0] == -1.0);
    indices[1] = (y_state_init[1] == 1.0);
    indices[5] = (y_state_init[1] == -1.0);
    indices[2] = (y_state_init[2] == 1.0);
    indices[6] = (y_state_init[2] == -1.0);
    indices[3] = (y_state_init[3] == 1.0);
    indices[7] = (y_state_init[3] == -1.0);

    /* 'QPINDI:48' b_eq = b(indices); */
    /* 'QPINDI:49' A_eq = A(indices,:); */
    H_tmp_tmp_1 = 0;
    for (xy_size = 0; xy_size < 8; xy_size++) {
      if (indices[xy_size]) {
        H_tmp_tmp_1++;
      }
    }

    H_tmp_tmp_2 = H_tmp_tmp_1;
    H_tmp_tmp_1 = 0;
    for (xy_size = 0; xy_size < 8; xy_size++) {
      if (indices[xy_size]) {
        f_data[H_tmp_tmp_1] = (int8_T)(xy_size + 1);
        H_tmp_tmp_1++;
      }
    }

    for (loop_ub = 0; loop_ub < H_tmp_tmp_2; loop_ub++) {
      A_eq_data[loop_ub] = A[f_data[loop_ub] - 1];
    }

    for (loop_ub = 0; loop_ub < H_tmp_tmp_2; loop_ub++) {
      A_eq_data[loop_ub + H_tmp_tmp_2] = A[f_data[loop_ub] + 7];
    }

    for (loop_ub = 0; loop_ub < H_tmp_tmp_2; loop_ub++) {
      A_eq_data[loop_ub + (H_tmp_tmp_2 << 1)] = A[f_data[loop_ub] + 15];
    }

    for (loop_ub = 0; loop_ub < H_tmp_tmp_2; loop_ub++) {
      A_eq_data[loop_ub + H_tmp_tmp_2 * 3] = A[f_data[loop_ub] + 23];
    }

    /* 'QPINDI:50' AT_eq = transpose(A_eq); */
    for (loop_ub = 0; loop_ub < H_tmp_tmp_2; loop_ub++) {
      H_tmp_tmp_0 = loop_ub << 2;
      AT_eq_data[H_tmp_tmp_0] = A_eq_data[loop_ub];
      AT_eq_data[1 + H_tmp_tmp_0] = A_eq_data[loop_ub + H_tmp_tmp_2];
      AT_eq_data[2 + H_tmp_tmp_0] = A_eq_data[(H_tmp_tmp_2 << 1) + loop_ub];
      AT_eq_data[3 + H_tmp_tmp_0] = A_eq_data[H_tmp_tmp_2 * 3 + loop_ub];
    }

    /* 'QPINDI:52' if isempty(A_eq) */
    if (H_tmp_tmp_2 == 0) {
      /* 'QPINDI:53' l1=[0,0]; */
      /* 'QPINDI:54' l2=[0,0]; */
      l2_idx_0 = 0;
      l1_idx_1 = 0;
    } else {
      /* 'QPINDI:55' else */
      /* 'QPINDI:56' l1=size(AT_eq); */
      l1_idx_1 = (int8_T)H_tmp_tmp_2;

      /* 'QPINDI:57' l2=size(A_eq); */
      l2_idx_0 = (int8_T)H_tmp_tmp_2;
    }

    /* 'QPINDI:61' D = [H,AT_eq;A_eq,zeros(l2(1),l1(2))]; */
    if (H_tmp_tmp_2 != 0) {
      H_tmp_tmp_1 = H_tmp_tmp_2;
    } else if ((l2_idx_0 != 0) && (l1_idx_1 != 0)) {
      H_tmp_tmp_1 = l2_idx_0;
    } else {
      H_tmp_tmp_1 = 0;
      if (l2_idx_0 > 0) {
        H_tmp_tmp_1 = l2_idx_0;
      }
    }

    empty_non_axis_sizes = (H_tmp_tmp_1 == 0);
    if (empty_non_axis_sizes || (H_tmp_tmp_2 != 0)) {
      xy_size = 4;
    } else {
      xy_size = 0;
    }

    if (empty_non_axis_sizes || ((l2_idx_0 != 0) && (l1_idx_1 != 0))) {
      idx = l1_idx_1;
    } else {
      idx = 0;
    }

    H_tmp_tmp_0 = H_tmp_tmp_1;
    result_size_idx_1 = xy_size + idx;
    xy_size *= H_tmp_tmp_1;
    loop_ub = H_tmp_tmp_1 * idx - 1;
    if (0 <= xy_size - 1) {
      memcpy(&result_data[0], &A_eq_data[0], xy_size * sizeof(int8_T));
    }

    if (0 <= loop_ub) {
      memset(&result_data[xy_size], 0, (((loop_ub + xy_size) - xy_size) + 1) *
             sizeof(int8_T));
    }

    idx = 4 + H_tmp_tmp_2;
    xy_size = (H_tmp_tmp_2 << 2) - 1;
    memcpy(&varargin_1_data[0], &H[0], sizeof(real_T) << 4U);
    for (loop_ub = 0; loop_ub <= xy_size; loop_ub++) {
      varargin_1_data[loop_ub + 16] = AT_eq_data[loop_ub];
    }

    /* 'QPINDI:62' d = [-c;b_eq]; */
    H_tmp_tmp_1 = 0;
    for (xy_size = 0; xy_size < 8; xy_size++) {
      if (indices[xy_size]) {
        H_tmp_tmp_1++;
      }
    }

    H_tmp_tmp_2 = H_tmp_tmp_1;
    H_tmp_tmp_1 = 0;
    for (xy_size = 0; xy_size < 8; xy_size++) {
      if (indices[xy_size]) {
        g_data[H_tmp_tmp_1] = (int8_T)(xy_size + 1);
        H_tmp_tmp_1++;
      }
    }

    /* 'QPINDI:63' xy = D\d; */
    if ((H_tmp_tmp_0 == 0) || (result_size_idx_1 == 0)) {
      H_tmp_tmp_0 = 0;
    }

    varargin_1_size[0] = 4 + H_tmp_tmp_0;
    varargin_1_size[1] = idx;
    for (loop_ub = 0; loop_ub < idx; loop_ub++) {
      for (H_tmp_tmp_1 = 0; H_tmp_tmp_1 < 4; H_tmp_tmp_1++) {
        varargin_1_data_0[H_tmp_tmp_1 + varargin_1_size[0] * loop_ub] =
          varargin_1_data[(loop_ub << 2) + H_tmp_tmp_1];
      }
    }

    for (loop_ub = 0; loop_ub < idx; loop_ub++) {
      for (H_tmp_tmp_1 = 0; H_tmp_tmp_1 < H_tmp_tmp_0; H_tmp_tmp_1++) {
        varargin_1_data_0[(H_tmp_tmp_1 + varargin_1_size[0] * loop_ub) + 4] =
          result_data[H_tmp_tmp_0 * loop_ub + H_tmp_tmp_1];
      }
    }

    H_tmp_tmp_0 = 4 + H_tmp_tmp_2;
    c_data[0] = -c[0];
    c_data[1] = -c[1];
    c_data[2] = -c[2];
    c_data[3] = -c[3];
    for (loop_ub = 0; loop_ub < H_tmp_tmp_2; loop_ub++) {
      c_data[loop_ub + 4] = b[g_data[loop_ub] - 1];
    }

    URControl_mldivide(varargin_1_data_0, varargin_1_size, c_data, &H_tmp_tmp_0,
                       xy_data, &xy_size);

    /* 'QPINDI:64' x = xy(1:4); */
    x[0] = xy_data[0];
    x[1] = xy_data[1];
    x[2] = xy_data[2];
    x[3] = xy_data[3];

    /* 'QPINDI:65' y = xy(5:length(xy)); */
    if (5 > xy_size) {
      H_tmp_tmp_1 = 0;
      xy_size = 0;
    } else {
      H_tmp_tmp_1 = 4;
    }

    /* 'QPINDI:68' constraintError = A*x - b; */
    for (loop_ub = 0; loop_ub < 8; loop_ub++) {
      constraintError[loop_ub] = ((((real_T)A[loop_ub + 8] * x[1] + (real_T)
        A[loop_ub] * x[0]) + (real_T)A[loop_ub + 16] * x[2]) + (real_T)A[loop_ub
        + 24] * x[3]) - b[loop_ub];
    }

    /* 'QPINDI:70' constraintOK = (max(constraintError) <= 0.001); */
    tmp_0 = rtIsNaN(constraintError[0]);
    if (!tmp_0) {
      idx = 1;
    } else {
      idx = 0;
      H_tmp_tmp_0 = 2;
      exitg2 = false;
      while ((!exitg2) && (H_tmp_tmp_0 < 9)) {
        if (!rtIsNaN(constraintError[H_tmp_tmp_0 - 1])) {
          idx = H_tmp_tmp_0;
          exitg2 = true;
        } else {
          H_tmp_tmp_0++;
        }
      }
    }

    if (idx == 0) {
      count = constraintError[0];
    } else {
      count = constraintError[idx - 1];
      while (idx + 1 < 9) {
        if (count < constraintError[idx]) {
          count = constraintError[idx];
        }

        idx++;
      }
    }

    /* 'QPINDI:71' yMultipOK = (isempty(y) || min(y) >= 0); */
    loop_ub = xy_size - H_tmp_tmp_1;
    if (loop_ub == 0) {
      empty_non_axis_sizes = true;
    } else {
      if (loop_ub <= 2) {
        if (loop_ub == 1) {
          b_ex = xy_data[H_tmp_tmp_1];
        } else {
          b_ex = xy_data[H_tmp_tmp_1 + 1];
          if ((xy_data[H_tmp_tmp_1] > b_ex) || (rtIsNaN(xy_data[H_tmp_tmp_1]) &&
               (!rtIsNaN(b_ex)))) {
          } else {
            b_ex = xy_data[H_tmp_tmp_1];
          }
        }
      } else {
        if (!rtIsNaN(xy_data[H_tmp_tmp_1])) {
          idx = 0;
        } else {
          idx = -1;
          H_tmp_tmp_0 = 2;
          exitg2 = false;
          while ((!exitg2) && (H_tmp_tmp_0 <= loop_ub)) {
            if (!rtIsNaN(xy_data[(H_tmp_tmp_1 + H_tmp_tmp_0) - 1])) {
              idx = H_tmp_tmp_0 - 1;
              exitg2 = true;
            } else {
              H_tmp_tmp_0++;
            }
          }
        }

        if (idx + 1 == 0) {
          b_ex = xy_data[H_tmp_tmp_1];
        } else {
          b_ex = xy_data[H_tmp_tmp_1 + idx];
          while (idx + 2 <= loop_ub) {
            tmp = xy_data[(H_tmp_tmp_1 + idx) + 1];
            if (b_ex > tmp) {
              b_ex = tmp;
            }

            idx++;
          }
        }
      }

      if (b_ex >= 0.0) {
        empty_non_axis_sizes = true;
      } else {
        empty_non_axis_sizes = false;
      }
    }

    /* 'QPINDI:73' if constraintOK && yMultipOK */
    if ((count <= 0.001) && empty_non_axis_sizes) {
      /* 'QPINDI:74' solution = 1; */
      i = 1;
      exitg1 = true;
    } else {
      /* 'QPINDI:76' else */
      /* 'QPINDI:77' if isempty(y) || min(y) >= 0.0 */
      guard1 = false;
      if (loop_ub == 0) {
        guard1 = true;
      } else {
        if (loop_ub <= 2) {
          if (loop_ub == 1) {
            count = xy_data[H_tmp_tmp_1];
          } else if ((xy_data[H_tmp_tmp_1] > xy_data[H_tmp_tmp_1 + 1]) ||
                     (rtIsNaN(xy_data[H_tmp_tmp_1]) && (!rtIsNaN
                       (xy_data[H_tmp_tmp_1 + 1])))) {
            count = xy_data[H_tmp_tmp_1 + 1];
          } else {
            count = xy_data[H_tmp_tmp_1];
          }
        } else {
          if (!rtIsNaN(xy_data[H_tmp_tmp_1])) {
            idx = 0;
          } else {
            idx = -1;
            H_tmp_tmp_0 = 2;
            exitg2 = false;
            while ((!exitg2) && (H_tmp_tmp_0 <= loop_ub)) {
              if (!rtIsNaN(xy_data[(H_tmp_tmp_1 + H_tmp_tmp_0) - 1])) {
                idx = H_tmp_tmp_0 - 1;
                exitg2 = true;
              } else {
                H_tmp_tmp_0++;
              }
            }
          }

          if (idx + 1 == 0) {
            count = xy_data[H_tmp_tmp_1];
          } else {
            count = xy_data[H_tmp_tmp_1 + idx];
            while (idx + 2 <= loop_ub) {
              tmp = xy_data[(H_tmp_tmp_1 + idx) + 1];
              if (count > tmp) {
                count = tmp;
              }

              idx++;
            }
          }
        }

        if (count >= 0.0) {
          guard1 = true;
        } else {
          /* 'QPINDI:85' else */
          /* 'QPINDI:87' [~,index] = min(y); */
          if (loop_ub <= 2) {
            if (loop_ub == 1) {
              idx = 1;
            } else if ((xy_data[H_tmp_tmp_1] > xy_data[H_tmp_tmp_1 + 1]) ||
                       (rtIsNaN(xy_data[H_tmp_tmp_1]) && (!rtIsNaN
                         (xy_data[H_tmp_tmp_1 + 1])))) {
              idx = 2;
            } else {
              idx = 1;
            }
          } else {
            if (!rtIsNaN(xy_data[H_tmp_tmp_1])) {
              idx = 1;
            } else {
              idx = 0;
              H_tmp_tmp_0 = 2;
              exitg2 = false;
              while ((!exitg2) && (H_tmp_tmp_0 <= loop_ub)) {
                if (!rtIsNaN(xy_data[(H_tmp_tmp_1 + H_tmp_tmp_0) - 1])) {
                  idx = H_tmp_tmp_0;
                  exitg2 = true;
                } else {
                  H_tmp_tmp_0++;
                }
              }
            }

            if (idx == 0) {
              idx = 1;
            } else {
              count = xy_data[(H_tmp_tmp_1 + idx) - 1];
              for (H_tmp_tmp_0 = idx - 1; H_tmp_tmp_0 + 2 <= loop_ub;
                   H_tmp_tmp_0++) {
                tmp = xy_data[(H_tmp_tmp_1 + H_tmp_tmp_0) + 1];
                if (count > tmp) {
                  count = tmp;
                  idx = H_tmp_tmp_0 + 2;
                }
              }
            }
          }

          /* 'QPINDI:87' ~ */
          /* 'QPINDI:88' count = 0; */
          /* 'QPINDI:89' for i=1:4 */
          /* 'QPINDI:90' count = count + abs(y_state(i)); */
          count = std::abs(y_state_init[0]);

          /* 'QPINDI:91' if count == index */
          if (count == idx) {
            /* 'QPINDI:92' y_state(i) = 0; */
            y_state_init[0] = 0.0;
          }

          /* 'QPINDI:90' count = count + abs(y_state(i)); */
          count += std::abs(y_state_init[1]);

          /* 'QPINDI:91' if count == index */
          if (count == idx) {
            /* 'QPINDI:92' y_state(i) = 0; */
            y_state_init[1] = 0.0;
          }

          /* 'QPINDI:90' count = count + abs(y_state(i)); */
          count += std::abs(y_state_init[2]);

          /* 'QPINDI:91' if count == index */
          if (count == idx) {
            /* 'QPINDI:92' y_state(i) = 0; */
            y_state_init[2] = 0.0;
          }

          /* 'QPINDI:90' count = count + abs(y_state(i)); */
          count += std::abs(y_state_init[3]);

          /* 'QPINDI:91' if count == index */
          if (count == idx) {
            /* 'QPINDI:92' y_state(i) = 0; */
            y_state_init[3] = 0.0;
          }
        }
      }

      if (guard1) {
        /* 'QPINDI:79' [~,index] = max(constraintError); */
        if (!tmp_0) {
          H_tmp_tmp_1 = 1;
        } else {
          H_tmp_tmp_1 = 0;
          xy_size = 2;
          exitg2 = false;
          while ((!exitg2) && (xy_size < 9)) {
            if (!rtIsNaN(constraintError[xy_size - 1])) {
              H_tmp_tmp_1 = xy_size;
              exitg2 = true;
            } else {
              xy_size++;
            }
          }
        }

        if (H_tmp_tmp_1 == 0) {
          H_tmp_tmp_1 = 1;
        } else {
          count = constraintError[H_tmp_tmp_1 - 1];
          for (xy_size = H_tmp_tmp_1; xy_size + 1 < 9; xy_size++) {
            if (count < constraintError[xy_size]) {
              count = constraintError[xy_size];
              H_tmp_tmp_1 = xy_size + 1;
            }
          }
        }

        /* 'QPINDI:79' ~ */
        /* 'QPINDI:80' if index < 5 */
        if (H_tmp_tmp_1 < 5) {
          /* 'QPINDI:81' y_state(index) = 1; */
          y_state_init[H_tmp_tmp_1 - 1] = 1.0;
        } else {
          /* 'QPINDI:82' else */
          /* 'QPINDI:83' y_state(index-4) = -1; */
          y_state_init[H_tmp_tmp_1 - 5] = -1.0;
        }
      }

      H_tmp_tmp++;
    }
  }

  /* 'QPINDI:101' optimal = solution; */
  *optimal = i;
}

/*
 * Function for MATLAB Function: '<S8>/control allocator'
 * function [M_uvr, daq] = INDIMomentGen(state, daq, uvr_des, M_uvr_set_prev, URpar, par)
 */
void URControlModelClass::URControl_INDIMomentGen(const real_T state_wRotor[4],
  const real_T state_omegaUV[3], const real_T state_omegafUV[3], daqBus *daq,
  const real_T uvr_des[3], real_T URpar_k0, real_T URpar_t0, real_T URpar_s,
  real_T URpar_est_omegaFilterT, const real_T URpar_rate_MINDI_rateDotKp[3],
  real_T URpar_rate_MINDI_derFilterT, const real_T URpar_rate_MINDI_MKp[3],
  real_T b_par_freq, real_T M_uvr[3])
{
  real_T Fset;
  real_T Fset_idx_1;
  real_T Fset_idx_0;
  real_T Fset_idx_2;

  /* 'INDIMomentGen:3' if isempty(omegaDot) */
  if (!URControl_DW.omegaDot_not_empty_l) {
    /* 'INDIMomentGen:3' omegaDot = SimpleDerivative(URpar.rate_MINDI_derFilterT, [0,0,0], 300, -300); */
    /* 'SimpleDerivative:12' obj.filterHandle = LPFilter(filterT, initValue, maxLim, minLim); */
    /* 'LPFilter:14' obj.filterT = filterT; */
    URControl_DW.omegaDot_p.filterHandle.filterT = URpar_rate_MINDI_derFilterT;

    /* 'LPFilter:15' obj.value = initValue; */
    /* 'LPFilter:16' obj.maxLim = maxLim; */
    URControl_DW.omegaDot_p.filterHandle.maxLim = 300.0;

    /* 'LPFilter:17' obj.minLim = minLim; */
    URControl_DW.omegaDot_p.filterHandle.minLim = -300.0;

    /* 'SimpleDerivative:13' obj.prevValue = initValue; */
    URControl_DW.omegaDot_p.filterHandle.value[0] = 0.0;
    URControl_DW.omegaDot_p.prevValue[0] = 0.0;
    URControl_DW.omegaDot_p.filterHandle.value[1] = 0.0;
    URControl_DW.omegaDot_p.prevValue[1] = 0.0;
    URControl_DW.omegaDot_p.filterHandle.value[2] = 0.0;
    URControl_DW.omegaDot_p.prevValue[2] = 0.0;
    URControl_DW.omegaDot_not_empty_l = true;
  }

  /* 'INDIMomentGen:4' if isempty(wRotorFilter) */
  if (!URControl_DW.wRotorFilter_not_empty) {
    /* 'INDIMomentGen:4' wRotorFilter = LPFilter(URpar.est_omegaFilterT, [0,0,0,0], 1200, 0); */
    /* 'LPFilter:14' obj.filterT = filterT; */
    URControl_DW.wRotorFilter.filterT = URpar_est_omegaFilterT;

    /* 'LPFilter:15' obj.value = initValue; */
    URControl_DW.wRotorFilter.value[0] = 0.0;
    URControl_DW.wRotorFilter.value[1] = 0.0;
    URControl_DW.wRotorFilter.value[2] = 0.0;
    URControl_DW.wRotorFilter.value[3] = 0.0;

    /* 'LPFilter:16' obj.maxLim = maxLim; */
    URControl_DW.wRotorFilter.maxLim = 1200.0;

    /* 'LPFilter:17' obj.minLim = minLim; */
    URControl_DW.wRotorFilter.minLim = 0.0;
    URControl_DW.wRotorFilter_not_empty = true;
  }

  /* 'INDIMomentGen:6' wRotorFilter.updateFilterT(URpar.rate_MINDI_derFilterT); */
  /* 'LPFilter:26' obj.filterT = filterT; */
  URControl_DW.wRotorFilter.filterT = URpar_rate_MINDI_derFilterT;

  /* 'INDIMomentGen:7' wRotorFilter.update(state.wRotor); */
  /* 'LPFilter:21' obj.value = obj.value*obj.filterT + newValue*(1 - obj.filterT); */
  /* 'LPFilter:22' obj.value = max(min(obj.value,obj.maxLim),obj.minLim); */
  URControl_DW.wRotorFilter.value[0] = (1.0 - URControl_DW.wRotorFilter.filterT)
    * state_wRotor[0] + URControl_DW.wRotorFilter.value[0] *
    URControl_DW.wRotorFilter.filterT;
  if ((URControl_DW.wRotorFilter.value[0] < URControl_DW.wRotorFilter.maxLim) ||
      rtIsNaN(URControl_DW.wRotorFilter.maxLim)) {
    Fset_idx_0 = URControl_DW.wRotorFilter.value[0];
  } else {
    Fset_idx_0 = URControl_DW.wRotorFilter.maxLim;
  }

  if ((Fset_idx_0 > URControl_DW.wRotorFilter.minLim) || rtIsNaN
      (URControl_DW.wRotorFilter.minLim)) {
    URControl_DW.wRotorFilter.value[0] = Fset_idx_0;
  } else {
    URControl_DW.wRotorFilter.value[0] = URControl_DW.wRotorFilter.minLim;
  }

  URControl_DW.wRotorFilter.value[1] = (1.0 - URControl_DW.wRotorFilter.filterT)
    * state_wRotor[1] + URControl_DW.wRotorFilter.value[1] *
    URControl_DW.wRotorFilter.filterT;
  if ((URControl_DW.wRotorFilter.value[1] < URControl_DW.wRotorFilter.maxLim) ||
      rtIsNaN(URControl_DW.wRotorFilter.maxLim)) {
    Fset_idx_0 = URControl_DW.wRotorFilter.value[1];
  } else {
    Fset_idx_0 = URControl_DW.wRotorFilter.maxLim;
  }

  if ((Fset_idx_0 > URControl_DW.wRotorFilter.minLim) || rtIsNaN
      (URControl_DW.wRotorFilter.minLim)) {
    URControl_DW.wRotorFilter.value[1] = Fset_idx_0;
  } else {
    URControl_DW.wRotorFilter.value[1] = URControl_DW.wRotorFilter.minLim;
  }

  URControl_DW.wRotorFilter.value[2] = (1.0 - URControl_DW.wRotorFilter.filterT)
    * state_wRotor[2] + URControl_DW.wRotorFilter.value[2] *
    URControl_DW.wRotorFilter.filterT;
  if ((URControl_DW.wRotorFilter.value[2] < URControl_DW.wRotorFilter.maxLim) ||
      rtIsNaN(URControl_DW.wRotorFilter.maxLim)) {
    Fset_idx_0 = URControl_DW.wRotorFilter.value[2];
  } else {
    Fset_idx_0 = URControl_DW.wRotorFilter.maxLim;
  }

  if ((Fset_idx_0 > URControl_DW.wRotorFilter.minLim) || rtIsNaN
      (URControl_DW.wRotorFilter.minLim)) {
    URControl_DW.wRotorFilter.value[2] = Fset_idx_0;
  } else {
    URControl_DW.wRotorFilter.value[2] = URControl_DW.wRotorFilter.minLim;
  }

  URControl_DW.wRotorFilter.value[3] = (1.0 - URControl_DW.wRotorFilter.filterT)
    * state_wRotor[3] + URControl_DW.wRotorFilter.value[3] *
    URControl_DW.wRotorFilter.filterT;
  if ((URControl_DW.wRotorFilter.value[3] < URControl_DW.wRotorFilter.maxLim) ||
      rtIsNaN(URControl_DW.wRotorFilter.maxLim)) {
    Fset_idx_0 = URControl_DW.wRotorFilter.value[3];
  } else {
    Fset_idx_0 = URControl_DW.wRotorFilter.maxLim;
  }

  if ((Fset_idx_0 > URControl_DW.wRotorFilter.minLim) || rtIsNaN
      (URControl_DW.wRotorFilter.minLim)) {
    URControl_DW.wRotorFilter.value[3] = Fset_idx_0;
  } else {
    URControl_DW.wRotorFilter.value[3] = URControl_DW.wRotorFilter.minLim;
  }

  /* 'INDIMomentGen:9' Fset = wRotorFilter.value.^2*URpar.k0; */
  Fset_idx_0 = URControl_DW.wRotorFilter.value[0] *
    URControl_DW.wRotorFilter.value[0] * URpar_k0;
  Fset_idx_1 = URControl_DW.wRotorFilter.value[1] *
    URControl_DW.wRotorFilter.value[1] * URpar_k0;
  Fset_idx_2 = URControl_DW.wRotorFilter.value[2] *
    URControl_DW.wRotorFilter.value[2] * URpar_k0;
  Fset = URControl_DW.wRotorFilter.value[3] * URControl_DW.wRotorFilter.value[3]
    * URpar_k0;

  /* 'INDIMomentGen:11' M_uvr_prev = zeros(3,1); */
  /* 'INDIMomentGen:12' M_uvr_prev(1) = (Fset(4) - Fset(2))*URpar.s; */
  M_uvr[0] = (Fset - Fset_idx_1) * URpar_s;

  /* 'INDIMomentGen:13' M_uvr_prev(2) = (Fset(1) - Fset(3))*URpar.s; */
  M_uvr[1] = (Fset_idx_0 - Fset_idx_2) * URpar_s;

  /* 'INDIMomentGen:14' M_uvr_prev(3) = (Fset(1) - Fset(2) + Fset(3) - Fset(4))*URpar.t0/URpar.k0; */
  M_uvr[2] = (((Fset_idx_0 - Fset_idx_1) + Fset_idx_2) - Fset) * URpar_t0 /
    URpar_k0;

  /* 'INDIMomentGen:17' error1 = uvr_des' - state.omegafUV; */
  /* 'INDIMomentGen:19' uvrDot_des = error1.*URpar.rate_MINDI_rateDotKp; */
  Fset_idx_0 = (uvr_des[0] - state_omegafUV[0]) * URpar_rate_MINDI_rateDotKp[0];
  Fset_idx_1 = (uvr_des[1] - state_omegafUV[1]) * URpar_rate_MINDI_rateDotKp[1];
  Fset_idx_2 = (uvr_des[2] - state_omegafUV[2]) * URpar_rate_MINDI_rateDotKp[2];

  /* 'INDIMomentGen:22' omegaDot.updateFilterT(URpar.rate_MINDI_derFilterT); */
  /* 'SimpleDerivative:23' obj.filterHandle.updateFilterT(filterT); */
  /* 'LPFilter:26' obj.filterT = filterT; */
  URControl_DW.omegaDot_p.filterHandle.filterT = URpar_rate_MINDI_derFilterT;

  /* 'INDIMomentGen:23' omegaDot.update(state.omegaUV, 1/par.freq); */
  URContr_SimpleDerivative_update(&URControl_DW.omegaDot_p, state_omegaUV, 1.0 /
    b_par_freq);

  /* 'INDIMomentGen:25' error2 = uvrDot_des - omegaDot.derValue; */
  /* 'INDIMomentGen:27' dM = error2.*URpar.rate_MINDI_MKp*1e-4; */
  /* 'INDIMomentGen:29' M_uvr = M_uvr_prev + dM'; */
  /* 'INDIMomentGen:31' daq.uvrDot_des = uvrDot_des; */
  /* 'INDIMomentGen:32' daq.omegaDot = omegaDot.derValue; */
  /* 'INDIMomentGen:33' daq.dM = dM; */
  Fset = (Fset_idx_0 - URControl_DW.omegaDot_p.derValue[0]) *
    URpar_rate_MINDI_MKp[0] * 0.0001;
  daq->uvrDot_des[0] = Fset_idx_0;
  daq->omegaDot[0] = URControl_DW.omegaDot_p.derValue[0];
  daq->dM[0] = Fset;
  M_uvr[0] += Fset;
  Fset = (Fset_idx_1 - URControl_DW.omegaDot_p.derValue[1]) *
    URpar_rate_MINDI_MKp[1] * 0.0001;
  daq->uvrDot_des[1] = Fset_idx_1;
  daq->omegaDot[1] = URControl_DW.omegaDot_p.derValue[1];
  daq->dM[1] = Fset;
  M_uvr[1] += Fset;
  Fset = (Fset_idx_2 - URControl_DW.omegaDot_p.derValue[2]) *
    URpar_rate_MINDI_MKp[2] * 0.0001;
  daq->uvrDot_des[2] = Fset_idx_2;
  daq->omegaDot[2] = URControl_DW.omegaDot_p.derValue[2];
  daq->dM[2] = Fset;
  M_uvr[2] += Fset;
}

/*
 * Function for MATLAB Function: '<S8>/control allocator'
 * function [M_uvr, daq] = PIDMomentGen(state, daq, uvr_des, URpar, par)
 */
void URControlModelClass::URControl_PIDMomentGen(const real_T state_omegaUV[3],
  const real_T state_omegafUV[3], daqBus *daq, const real_T uvr_des[3], real_T
  URpar_Iz, real_T URpar_Iu, real_T URpar_Iv, const real_T
  URpar_rate_MPID_rateDotKp[3], const real_T URpar_rate_MPID_rateDotKi[3], const
  real_T URpar_rate_MPID_rateDotKd[3], real_T URpar_rate_MPID_derFilterT, real_T
  URpar_rate_MPID_uvrdesderFilter, real_T URpar_rate_MPID_maxInt, real_T
  URpar_rate_MPID_precGain, real_T b_par_freq, real_T M_uvr[3])
{
  real_T intLim;
  real_T uvr_des_0[3];
  real_T errorf;
  real_T uvr_des_dot_idx_0;
  real_T errorf_idx_0;
  real_T uvr_des_dot_idx_1;
  real_T errorf_idx_1;
  real_T uvr_des_dot_idx_2;
  boolean_T tmp;

  /* 'PIDMomentGen:3' if isempty(errorInt) */
  /* 'PIDMomentGen:4' if isempty(error_prev) */
  /* 'PIDMomentGen:6' if isempty(errorD) */
  if (!URControl_DW.errorD_not_empty) {
    /* 'PIDMomentGen:6' errorD = SimpleDerivative(URpar.rate_MPID_derFilterT,[0,0,0], 200, -200); */
    /* 'SimpleDerivative:12' obj.filterHandle = LPFilter(filterT, initValue, maxLim, minLim); */
    /* 'LPFilter:14' obj.filterT = filterT; */
    URControl_DW.errorD.filterHandle.filterT = URpar_rate_MPID_derFilterT;

    /* 'LPFilter:15' obj.value = initValue; */
    /* 'LPFilter:16' obj.maxLim = maxLim; */
    URControl_DW.errorD.filterHandle.maxLim = 200.0;

    /* 'LPFilter:17' obj.minLim = minLim; */
    URControl_DW.errorD.filterHandle.minLim = -200.0;

    /* 'SimpleDerivative:13' obj.prevValue = initValue; */
    URControl_DW.errorD.filterHandle.value[0] = 0.0;
    URControl_DW.errorD.prevValue[0] = 0.0;
    URControl_DW.errorD.filterHandle.value[1] = 0.0;
    URControl_DW.errorD.prevValue[1] = 0.0;
    URControl_DW.errorD.filterHandle.value[2] = 0.0;
    URControl_DW.errorD.prevValue[2] = 0.0;
    URControl_DW.errorD_not_empty = true;
  }

  /* 'PIDMomentGen:7' if isempty(uvrDer) */
  if (!URControl_DW.uvrDer_not_empty) {
    /* 'PIDMomentGen:7' uvrDer = SimpleDerivative(URpar.rate_MPID_uvrdesderFilterT,[0,0,0], 200, -200); */
    /* 'SimpleDerivative:12' obj.filterHandle = LPFilter(filterT, initValue, maxLim, minLim); */
    /* 'LPFilter:14' obj.filterT = filterT; */
    URControl_DW.uvrDer.filterHandle.filterT = URpar_rate_MPID_uvrdesderFilter;

    /* 'LPFilter:15' obj.value = initValue; */
    /* 'LPFilter:16' obj.maxLim = maxLim; */
    URControl_DW.uvrDer.filterHandle.maxLim = 200.0;

    /* 'LPFilter:17' obj.minLim = minLim; */
    URControl_DW.uvrDer.filterHandle.minLim = -200.0;

    /* 'SimpleDerivative:13' obj.prevValue = initValue; */
    URControl_DW.uvrDer.filterHandle.value[0] = 0.0;
    URControl_DW.uvrDer.prevValue[0] = 0.0;
    URControl_DW.uvrDer.filterHandle.value[1] = 0.0;
    URControl_DW.uvrDer.prevValue[1] = 0.0;
    URControl_DW.uvrDer.filterHandle.value[2] = 0.0;
    URControl_DW.uvrDer.prevValue[2] = 0.0;
    URControl_DW.uvrDer_not_empty = true;
  }

  /* 'PIDMomentGen:10' errorf = uvr_des' - state.omegafUV; */
  /* 'PIDMomentGen:11' error = uvr_des' - state.omegaUV; */
  /* 'PIDMomentGen:12' errorInt = errorInt + errorf/par.freq; */
  /* 'PIDMomentGen:13' intLim = URpar.rate_MPID_maxInt * 1e-3; */
  intLim = URpar_rate_MPID_maxInt * 0.001;

  /* 'PIDMomentGen:14' errorInt = max(min(errorInt,intLim),-intLim); */
  errorf = uvr_des[0] - state_omegafUV[0];
  URControl_DW.errorInt[0] += errorf / b_par_freq;
  tmp = rtIsNaN(intLim);
  if ((URControl_DW.errorInt[0] < intLim) || tmp) {
    uvr_des_dot_idx_0 = URControl_DW.errorInt[0];
  } else {
    uvr_des_dot_idx_0 = intLim;
  }

  errorf_idx_0 = errorf;
  errorf = uvr_des[1] - state_omegafUV[1];
  URControl_DW.errorInt[1] += errorf / b_par_freq;
  if ((URControl_DW.errorInt[1] < intLim) || tmp) {
    uvr_des_dot_idx_1 = URControl_DW.errorInt[1];
  } else {
    uvr_des_dot_idx_1 = intLim;
  }

  errorf_idx_1 = errorf;
  errorf = uvr_des[2] - state_omegafUV[2];
  URControl_DW.errorInt[2] += errorf / b_par_freq;
  if ((URControl_DW.errorInt[2] < intLim) || tmp) {
    uvr_des_dot_idx_2 = URControl_DW.errorInt[2];
  } else {
    uvr_des_dot_idx_2 = intLim;
  }

  /* 'PIDMomentGen:16' errorD.filterHandle.filterT = URpar.rate_MPID_derFilterT; */
  URControl_DW.errorD.filterHandle.filterT = URpar_rate_MPID_derFilterT;

  /* 'PIDMomentGen:17' errorD.update(error,1/par.freq) */
  tmp = rtIsNaN(-intLim);
  if ((uvr_des_dot_idx_0 > -intLim) || tmp) {
    URControl_DW.errorInt[0] = uvr_des_dot_idx_0;
  } else {
    URControl_DW.errorInt[0] = -intLim;
  }

  uvr_des_0[0] = uvr_des[0] - state_omegaUV[0];
  if ((uvr_des_dot_idx_1 > -intLim) || tmp) {
    URControl_DW.errorInt[1] = uvr_des_dot_idx_1;
  } else {
    URControl_DW.errorInt[1] = -intLim;
  }

  uvr_des_0[1] = uvr_des[1] - state_omegaUV[1];
  if ((uvr_des_dot_idx_2 > -intLim) || tmp) {
    URControl_DW.errorInt[2] = uvr_des_dot_idx_2;
  } else {
    URControl_DW.errorInt[2] = -intLim;
  }

  uvr_des_0[2] = uvr_des[2] - state_omegaUV[2];
  URContr_SimpleDerivative_update(&URControl_DW.errorD, uvr_des_0, 1.0 /
    b_par_freq);

  /* 'PIDMomentGen:19' uvrDer.filterHandle.filterT = URpar.rate_MPID_uvrdesderFilterT; */
  URControl_DW.uvrDer.filterHandle.filterT = URpar_rate_MPID_uvrdesderFilter;

  /* 'PIDMomentGen:20' uvrDer.update(uvr_des', 1/par.freq); */
  URContr_SimpleDerivative_update(&URControl_DW.uvrDer, uvr_des, 1.0 /
    b_par_freq);

  /* 'PIDMomentGen:21' uvr_des_dot = uvrDer.derValue; */
  /* 'PIDMomentGen:23' uvrDot_des = errorf.*URpar.rate_MPID_rateDotKp + errorInt.*URpar.rate_MPID_rateDotKi + errorD.derValue.*URpar.rate_MPID_rateDotKd + uvr_des_dot; */
  /* 'PIDMomentGen:26' M_uvr = uvrDot_des'.*[URpar.Iu; URpar.Iv; URpar.Iz]; */
  /* 'PIDMomentGen:29' M_prec = [state.omegafUV(2)*state.omegafUV(3)*(URpar.Iv - URpar.Iz); */
  /* 'PIDMomentGen:30'           state.omegafUV(1)*state.omegafUV(3)*(URpar.Iz - URpar.Iu); */
  /* 'PIDMomentGen:31'           0]; */
  /* 'PIDMomentGen:33' M_uvr = M_uvr - URpar.rate_MPID_precGain*M_prec; */
  /* 'PIDMomentGen:35' daq.uvrDot_des = uvrDot_des; */
  intLim = ((errorf_idx_0 * URpar_rate_MPID_rateDotKp[0] +
             URControl_DW.errorInt[0] * URpar_rate_MPID_rateDotKi[0]) +
            URControl_DW.errorD.derValue[0] * URpar_rate_MPID_rateDotKd[0]) +
    URControl_DW.uvrDer.derValue[0];
  M_uvr[0] = intLim * URpar_Iu - state_omegafUV[1] * state_omegafUV[2] *
    (URpar_Iv - URpar_Iz) * URpar_rate_MPID_precGain;
  daq->uvrDot_des[0] = intLim;
  intLim = ((errorf_idx_1 * URpar_rate_MPID_rateDotKp[1] +
             URControl_DW.errorInt[1] * URpar_rate_MPID_rateDotKi[1]) +
            URControl_DW.errorD.derValue[1] * URpar_rate_MPID_rateDotKd[1]) +
    URControl_DW.uvrDer.derValue[1];
  M_uvr[1] = intLim * URpar_Iv - state_omegafUV[0] * state_omegafUV[2] *
    (URpar_Iz - URpar_Iu) * URpar_rate_MPID_precGain;
  daq->uvrDot_des[1] = intLim;
  intLim = ((errorf * URpar_rate_MPID_rateDotKp[2] + URControl_DW.errorInt[2] *
             URpar_rate_MPID_rateDotKi[2]) + URControl_DW.errorD.derValue[2] *
            URpar_rate_MPID_rateDotKd[2]) + URControl_DW.uvrDer.derValue[2];
  M_uvr[2] = intLim * URpar_Iz - URpar_rate_MPID_precGain * 0.0;
  daq->uvrDot_des[2] = intLim;
}

/*
 * Function for MATLAB Function: '<S8>/control allocator'
 * function [x,y_state,iterSteps,optimal] = controlAllocQPQuick(refStruct, FMax, FMin, gainStruct, y_state_init, par, URpar)
 */
void URControlModelClass::URControl_controlAllocQPQuick(real_T refStruct_MuRef,
  real_T refStruct_MvRef, real_T refStruct_MzRef, real_T refStruct_FtotRef,
  const real_T FMax[4], const real_T FMin[4], real_T gainStruct_MuGain, real_T
  gainStruct_MvGain, real_T gainStruct_FtotGain, real_T gainStruct_FGain, real_T
  gainStruct_MzGain, real_T y_state_init[4], real_T b_par_URC_k0, real_T
  b_par_URC_t0, real_T b_par_URC_s, real_T URpar_rate_maxIter, real_T x[4],
  real_T *iterSteps, real_T *optimal)
{
  real_T H[16];
  real_T b[8];
  int32_T solution;
  boolean_T indices[8];
  int8_T A_eq_data[32];
  int8_T AT_eq_data[32];
  real_T xy_data[12];
  real_T constraintError[8];
  real_T count;
  int32_T iter;
  int8_T f_data[8];
  int8_T g_data[8];
  int32_T trueCount;
  int8_T result_data[96];
  boolean_T empty_non_axis_sizes;
  real_T varargin_1_data[48];
  int32_T idx;
  static const int8_T A[32] = { 1, 0, 0, 0, -1, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0,
    0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 1, 0, 0, 0, -1 };

  real_T varargin_1_data_0[144];
  real_T c_data[12];
  int32_T loop_ub;
  int32_T xy_size;
  int32_T varargin_1_size[2];
  real_T c_idx_0;
  real_T c_idx_1;
  real_T c_idx_2;
  real_T c_idx_3;
  int32_T f_size_idx_1;
  int32_T result_size_idx_1;
  real_T z1_idx_1;
  real_T z1_idx_2;
  real_T z1_idx_3;
  int8_T l2_idx_0;
  int8_T l1_idx_1;
  real_T c_idx_0_tmp;
  int32_T AT_eq_data_tmp;
  boolean_T tmp;
  boolean_T guard1 = false;
  boolean_T exitg1;
  boolean_T exitg2;

  /* 'controlAllocQPQuick:3' x = [0;0;0;0]; */
  /* 'controlAllocQPQuick:4' y = [0;0;0;0]; */
  /* 'controlAllocQPQuick:7' MuRef = refStruct(1).MuRef; */
  /* 'controlAllocQPQuick:8' MvRef = refStruct(1).MvRef; */
  /* 'controlAllocQPQuick:9' MzRef = refStruct(1).MzRef; */
  /* 'controlAllocQPQuick:10' FtotRef = refStruct(1).FtotRef; */
  /* 'controlAllocQPQuick:12' MuGain = gainStruct(1).MuGain; */
  /* 'controlAllocQPQuick:13' MvGain = gainStruct(1).MvGain; */
  /* 'controlAllocQPQuick:14' MzGain = gainStruct(1).MzGain; */
  /* 'controlAllocQPQuick:15' FtotGain = gainStruct(1).FtotGain; */
  /* 'controlAllocQPQuick:16' FGain = gainStruct(1).FGain; */
  /* 'controlAllocQPQuick:18' s = par.URC.s; */
  /* 'controlAllocQPQuick:19' t0 = par.URC.t0; */
  /* 'controlAllocQPQuick:20' k0 = par.URC.k0; */
  /* 'controlAllocQPQuick:22' FMax = max(FMax,0.001); */
  x[0] = 0.0;
  if (FMax[0] > 0.001) {
    count = FMax[0];
  } else {
    count = 0.001;
  }

  x[1] = 0.0;
  if (FMax[1] > 0.001) {
    z1_idx_1 = FMax[1];
  } else {
    z1_idx_1 = 0.001;
  }

  /* 'QPINDI:34' iterSteps = 0; */
  *iterSteps = 0.0;

  /* 'QPINDI:36' for iter = 1:10 */
  H_tmp_tmp = 0;
  exitg1 = false;
  while ((!exitg1) && (H_tmp_tmp < 10)) {
    /* 'QPINDI:37' iterSteps = iterSteps +1; */
    (*iterSteps)++;

  /* 'controlAllocQPQuick:25' H = zeros(4,4); */
  /* 'controlAllocQPQuick:26' H(1,1) = 2*(MvGain*s^2 + MzGain*(t0/k0)^2 + FtotGain + FGain/FMax(1)); */
  c_idx_0 = b_par_URC_t0 / b_par_URC_k0;
  c_idx_1 = b_par_URC_s * b_par_URC_s;
  H[0] = (((c_idx_1 * gainStruct_MvGain + c_idx_0 * c_idx_0 * gainStruct_MzGain)
           + gainStruct_FtotGain) + gainStruct_FGain / count) * 2.0;

    /* 'QPINDI:48' b_eq = b(indices); */
    /* 'QPINDI:49' A_eq = A(indices,:); */
    H_tmp_tmp_1 = 0;
    for (xy_size = 0; xy_size < 8; xy_size++) {
      if (indices[xy_size]) {
        H_tmp_tmp_1++;
      }
    }

    H_tmp_tmp_2 = H_tmp_tmp_1;
    H_tmp_tmp_1 = 0;
    for (xy_size = 0; xy_size < 8; xy_size++) {
      if (indices[xy_size]) {
        f_data[H_tmp_tmp_1] = (int8_T)(xy_size + 1);
        H_tmp_tmp_1++;
      }
    }

    for (loop_ub = 0; loop_ub < H_tmp_tmp_2; loop_ub++) {
      A_eq_data[loop_ub] = A[f_data[loop_ub] - 1];
    }

    for (loop_ub = 0; loop_ub < H_tmp_tmp_2; loop_ub++) {
      A_eq_data[loop_ub + H_tmp_tmp_2] = A[f_data[loop_ub] + 7];
    }

    for (loop_ub = 0; loop_ub < H_tmp_tmp_2; loop_ub++) {
      A_eq_data[loop_ub + (H_tmp_tmp_2 << 1)] = A[f_data[loop_ub] + 15];
    }

    for (loop_ub = 0; loop_ub < H_tmp_tmp_2; loop_ub++) {
      A_eq_data[loop_ub + H_tmp_tmp_2 * 3] = A[f_data[loop_ub] + 23];
    }

    /* 'QPINDI:50' AT_eq = transpose(A_eq); */
    for (loop_ub = 0; loop_ub < H_tmp_tmp_2; loop_ub++) {
      H_tmp_tmp_0 = loop_ub << 2;
      AT_eq_data[H_tmp_tmp_0] = A_eq_data[loop_ub];
      AT_eq_data[1 + H_tmp_tmp_0] = A_eq_data[loop_ub + H_tmp_tmp_2];
      AT_eq_data[2 + H_tmp_tmp_0] = A_eq_data[(H_tmp_tmp_2 << 1) + loop_ub];
      AT_eq_data[3 + H_tmp_tmp_0] = A_eq_data[H_tmp_tmp_2 * 3 + loop_ub];
    }

    /* 'QPINDI:52' if isempty(A_eq) */
    if (H_tmp_tmp_2 == 0) {
      /* 'QPINDI:53' l1=[0,0]; */
      /* 'QPINDI:54' l2=[0,0]; */
      l2_idx_0 = 0;
      l1_idx_1 = 0;
    } else {
      /* 'QPINDI:55' else */
      /* 'QPINDI:56' l1=size(AT_eq); */
      l1_idx_1 = (int8_T)H_tmp_tmp_2;

      /* 'QPINDI:57' l2=size(A_eq); */
      l2_idx_0 = (int8_T)H_tmp_tmp_2;
    }

    /* 'QPINDI:61' D = [H,AT_eq;A_eq,zeros(l2(1),l1(2))]; */
    if (H_tmp_tmp_2 != 0) {
      H_tmp_tmp_1 = H_tmp_tmp_2;
    } else if ((l2_idx_0 != 0) && (l1_idx_1 != 0)) {
      H_tmp_tmp_1 = l2_idx_0;
    } else {
      H_tmp_tmp_1 = 0;
      if (l2_idx_0 > 0) {
        H_tmp_tmp_1 = l2_idx_0;
      }
    }

    empty_non_axis_sizes = (H_tmp_tmp_1 == 0);
    if (empty_non_axis_sizes || (H_tmp_tmp_2 != 0)) {
      xy_size = 4;
    } else {
      xy_size = 0;
    }

    if (empty_non_axis_sizes || ((l2_idx_0 != 0) && (l1_idx_1 != 0))) {
      idx = l1_idx_1;
    } else {
      idx = 0;
    }

    H_tmp_tmp_0 = H_tmp_tmp_1;
    result_size_idx_1 = xy_size + idx;
    xy_size *= H_tmp_tmp_1;
    loop_ub = H_tmp_tmp_1 * idx - 1;
    if (0 <= xy_size - 1) {
      memcpy(&result_data[0], &A_eq_data[0], xy_size * sizeof(int8_T));
    }

    if (0 <= loop_ub) {
      memset(&result_data[xy_size], 0, (((loop_ub + xy_size) - xy_size) + 1) *
             sizeof(int8_T));
    }

    idx = 4 + H_tmp_tmp_2;
    xy_size = (H_tmp_tmp_2 << 2) - 1;
    memcpy(&varargin_1_data[0], &H[0], sizeof(real_T) << 4U);
    for (loop_ub = 0; loop_ub <= xy_size; loop_ub++) {
      varargin_1_data[loop_ub + 16] = AT_eq_data[loop_ub];
    }

    /* 'QPINDI:62' d = [-c;b_eq]; */
    H_tmp_tmp_1 = 0;
    for (xy_size = 0; xy_size < 8; xy_size++) {
      if (indices[xy_size]) {
        H_tmp_tmp_1++;
      }
    }

    H_tmp_tmp_2 = H_tmp_tmp_1;
    H_tmp_tmp_1 = 0;
    for (xy_size = 0; xy_size < 8; xy_size++) {
      if (indices[xy_size]) {
        g_data[H_tmp_tmp_1] = (int8_T)(xy_size + 1);
        H_tmp_tmp_1++;
      }
    }

    /* 'QPINDI:63' xy = D\d; */
    if ((H_tmp_tmp_0 == 0) || (result_size_idx_1 == 0)) {
      H_tmp_tmp_0 = 0;
    }

    varargin_1_size[0] = 4 + H_tmp_tmp_0;
    varargin_1_size[1] = idx;
    for (loop_ub = 0; loop_ub < idx; loop_ub++) {
      for (H_tmp_tmp_1 = 0; H_tmp_tmp_1 < 4; H_tmp_tmp_1++) {
        varargin_1_data_0[H_tmp_tmp_1 + varargin_1_size[0] * loop_ub] =
          varargin_1_data[(loop_ub << 2) + H_tmp_tmp_1];
      }
    }

    for (loop_ub = 0; loop_ub < idx; loop_ub++) {
      for (H_tmp_tmp_1 = 0; H_tmp_tmp_1 < H_tmp_tmp_0; H_tmp_tmp_1++) {
        varargin_1_data_0[(H_tmp_tmp_1 + varargin_1_size[0] * loop_ub) + 4] =
          result_data[H_tmp_tmp_0 * loop_ub + H_tmp_tmp_1];
      }
    }

    H_tmp_tmp_0 = 4 + H_tmp_tmp_2;
    c_data[0] = -c[0];
    c_data[1] = -c[1];
    c_data[2] = -c[2];
    c_data[3] = -c[3];
    for (loop_ub = 0; loop_ub < H_tmp_tmp_2; loop_ub++) {
      c_data[loop_ub + 4] = b[g_data[loop_ub] - 1];
    }

    URControl_mldivide(varargin_1_data_0, varargin_1_size, c_data, &H_tmp_tmp_0,
                       xy_data, &xy_size);

    /* 'QPINDI:64' x = xy(1:4); */
    x[0] = xy_data[0];
    x[1] = xy_data[1];
    x[2] = xy_data[2];
    x[3] = xy_data[3];

    /* 'QPINDI:65' y = xy(5:length(xy)); */
    if (5 > xy_size) {
      H_tmp_tmp_1 = 0;
      xy_size = 0;
    } else {
      H_tmp_tmp_1 = 4;
    }

    /* 'QPINDI:68' constraintError = A*x - b; */
    for (loop_ub = 0; loop_ub < 8; loop_ub++) {
      constraintError[loop_ub] = ((((real_T)A[loop_ub + 8] * x[1] + (real_T)
        A[loop_ub] * x[0]) + (real_T)A[loop_ub + 16] * x[2]) + (real_T)A[loop_ub
        + 24] * x[3]) - b[loop_ub];
    }

    /* 'QPINDI:70' constraintOK = (max(constraintError) <= 0.001); */
    tmp_0 = rtIsNaN(constraintError[0]);
    if (!tmp_0) {
      idx = 1;
    } else {
      idx = 0;
      H_tmp_tmp_0 = 2;
      exitg2 = false;
      while ((!exitg2) && (H_tmp_tmp_0 < 9)) {
        if (!rtIsNaN(constraintError[H_tmp_tmp_0 - 1])) {
          idx = H_tmp_tmp_0;
          exitg2 = true;
        } else {
          H_tmp_tmp_0++;
        }
      }
    }

    if (idx == 0) {
      count = constraintError[0];
    } else {
      count = constraintError[idx - 1];
      while (idx + 1 < 9) {
        if (count < constraintError[idx]) {
          count = constraintError[idx];
        }

        idx++;
      }
    }

    /* 'QPINDI:71' yMultipOK = (isempty(y) || min(y) >= 0); */
    loop_ub = xy_size - H_tmp_tmp_1;
    if (loop_ub == 0) {
      empty_non_axis_sizes = true;
    } else {
      if (loop_ub <= 2) {
        if (loop_ub == 1) {
          b_ex = xy_data[H_tmp_tmp_1];
        } else {
          b_ex = xy_data[H_tmp_tmp_1 + 1];
          if ((xy_data[H_tmp_tmp_1] > b_ex) || (rtIsNaN(xy_data[H_tmp_tmp_1]) &&
               (!rtIsNaN(b_ex)))) {
          } else {
            b_ex = xy_data[H_tmp_tmp_1];
          }
        }
      } else {
        if (!rtIsNaN(xy_data[H_tmp_tmp_1])) {
          idx = 0;
        } else {
          idx = -1;
          H_tmp_tmp_0 = 2;
          exitg2 = false;
          while ((!exitg2) && (H_tmp_tmp_0 <= loop_ub)) {
            if (!rtIsNaN(xy_data[(H_tmp_tmp_1 + H_tmp_tmp_0) - 1])) {
              idx = H_tmp_tmp_0 - 1;
              exitg2 = true;
            } else {
              H_tmp_tmp_0++;
            }
          }
        }

        if (idx + 1 == 0) {
          b_ex = xy_data[H_tmp_tmp_1];
        } else {
          b_ex = xy_data[H_tmp_tmp_1 + idx];
          while (idx + 2 <= loop_ub) {
            tmp = xy_data[(H_tmp_tmp_1 + idx) + 1];
            if (b_ex > tmp) {
              b_ex = tmp;
            }

            idx++;
          }
        }
      }

      if (b_ex >= 0.0) {
        empty_non_axis_sizes = true;
      } else {
        empty_non_axis_sizes = false;
      }
    }

    /* 'QPINDI:73' if constraintOK && yMultipOK */
    if ((count <= 0.001) && empty_non_axis_sizes) {
      /* 'QPINDI:74' solution = 1; */
      i = 1;
      exitg1 = true;
    } else {
      /* 'QPINDI:76' else */
      /* 'QPINDI:77' if isempty(y) || min(y) >= 0.0 */
      guard1 = false;
      if (loop_ub == 0) {
        guard1 = true;
      } else {
        if (loop_ub <= 2) {
          if (loop_ub == 1) {
            count = xy_data[H_tmp_tmp_1];
          } else if ((xy_data[H_tmp_tmp_1] > xy_data[H_tmp_tmp_1 + 1]) ||
                     (rtIsNaN(xy_data[H_tmp_tmp_1]) && (!rtIsNaN
                       (xy_data[H_tmp_tmp_1 + 1])))) {
            count = xy_data[H_tmp_tmp_1 + 1];
          } else {
            count = xy_data[H_tmp_tmp_1];
          }
        } else {
          if (!rtIsNaN(xy_data[H_tmp_tmp_1])) {
            idx = 0;
          } else {
            idx = -1;
            H_tmp_tmp_0 = 2;
            exitg2 = false;
            while ((!exitg2) && (H_tmp_tmp_0 <= loop_ub)) {
              if (!rtIsNaN(xy_data[(H_tmp_tmp_1 + H_tmp_tmp_0) - 1])) {
                idx = H_tmp_tmp_0 - 1;
                exitg2 = true;
              } else {
                H_tmp_tmp_0++;
              }
            }
          }

          if (idx + 1 == 0) {
            count = xy_data[H_tmp_tmp_1];
          } else {
            count = xy_data[H_tmp_tmp_1 + idx];
            while (idx + 2 <= loop_ub) {
              tmp = xy_data[(H_tmp_tmp_1 + idx) + 1];
              if (count > tmp) {
                count = tmp;
              }

              idx++;
            }
          }
        }

        if (count >= 0.0) {
          guard1 = true;
        } else {
          /* 'QPINDI:85' else */
          /* 'QPINDI:87' [~,index] = min(y); */
          if (loop_ub <= 2) {
            if (loop_ub == 1) {
              idx = 1;
            } else if ((xy_data[H_tmp_tmp_1] > xy_data[H_tmp_tmp_1 + 1]) ||
                       (rtIsNaN(xy_data[H_tmp_tmp_1]) && (!rtIsNaN
                         (xy_data[H_tmp_tmp_1 + 1])))) {
              idx = 2;
            } else {
              idx = 1;
            }
          } else {
            if (!rtIsNaN(xy_data[H_tmp_tmp_1])) {
              idx = 1;
            } else {
              idx = 0;
              H_tmp_tmp_0 = 2;
              exitg2 = false;
              while ((!exitg2) && (H_tmp_tmp_0 <= loop_ub)) {
                if (!rtIsNaN(xy_data[(H_tmp_tmp_1 + H_tmp_tmp_0) - 1])) {
                  idx = H_tmp_tmp_0;
                  exitg2 = true;
                } else {
                  H_tmp_tmp_0++;
                }
              }
            }

            if (idx == 0) {
              idx = 1;
            } else {
              count = xy_data[(H_tmp_tmp_1 + idx) - 1];
              for (H_tmp_tmp_0 = idx - 1; H_tmp_tmp_0 + 2 <= loop_ub;
                   H_tmp_tmp_0++) {
                tmp = xy_data[(H_tmp_tmp_1 + H_tmp_tmp_0) + 1];
                if (count > tmp) {
                  count = tmp;
                  idx = H_tmp_tmp_0 + 2;
                }
              }
            }
          }

          /* 'QPINDI:87' ~ */
          /* 'QPINDI:88' count = 0; */
          /* 'QPINDI:89' for i=1:4 */
          /* 'QPINDI:90' count = count + abs(y_state(i)); */
          count = std::abs(y_state_init[0]);

          /* 'QPINDI:91' if count == index */
          if (count == idx) {
            /* 'QPINDI:92' y_state(i) = 0; */
            y_state_init[0] = 0.0;
          }

          /* 'QPINDI:90' count = count + abs(y_state(i)); */
          count += std::abs(y_state_init[1]);

          /* 'QPINDI:91' if count == index */
          if (count == idx) {
            /* 'QPINDI:92' y_state(i) = 0; */
            y_state_init[1] = 0.0;
          }

          /* 'QPINDI:90' count = count + abs(y_state(i)); */
          count += std::abs(y_state_init[2]);

          /* 'QPINDI:91' if count == index */
          if (count == idx) {
            /* 'QPINDI:92' y_state(i) = 0; */
            y_state_init[2] = 0.0;
          }

          /* 'QPINDI:90' count = count + abs(y_state(i)); */
          count += std::abs(y_state_init[3]);

          /* 'QPINDI:91' if count == index */
          if (count == idx) {
            /* 'QPINDI:92' y_state(i) = 0; */
            y_state_init[3] = 0.0;
          }
        }
      }

      if (guard1) {
        /* 'QPINDI:79' [~,index] = max(constraintError); */
        if (!tmp_0) {
          H_tmp_tmp_1 = 1;
        } else {
          H_tmp_tmp_1 = 0;
          xy_size = 2;
          exitg2 = false;
          while ((!exitg2) && (xy_size < 9)) {
            if (!rtIsNaN(constraintError[xy_size - 1])) {
              H_tmp_tmp_1 = xy_size;
              exitg2 = true;
            } else {
              xy_size++;
            }
          }
        }

        if (H_tmp_tmp_1 == 0) {
          H_tmp_tmp_1 = 1;
        } else {
          count = constraintError[H_tmp_tmp_1 - 1];
          for (xy_size = H_tmp_tmp_1; xy_size + 1 < 9; xy_size++) {
            if (count < constraintError[xy_size]) {
              count = constraintError[xy_size];
              H_tmp_tmp_1 = xy_size + 1;
            }
          }
        }

        /* 'QPINDI:79' ~ */
        /* 'QPINDI:80' if index < 5 */
        if (H_tmp_tmp_1 < 5) {
          /* 'QPINDI:81' y_state(index) = 1; */
          y_state_init[H_tmp_tmp_1 - 1] = 1.0;
        } else {
          /* 'QPINDI:82' else */
          /* 'QPINDI:83' y_state(index-4) = -1; */
          y_state_init[H_tmp_tmp_1 - 5] = -1.0;
        }
      }

      H_tmp_tmp++;
    }
  }

  /* 'QPINDI:101' optimal = solution; */
  *optimal = i;
}

/*
 * Function for MATLAB Function: '<S6>/control allocator'
 * function [M_uvr, daq] = INDIMomentGen(state, daq, uvr_des, M_uvr_set_prev, URpar, par)
 */
void URControlModelClass::URControl_INDIMomentGen(const real_T state_wRotor[4],
  const real_T state_omegaUV[3], const real_T state_omegafUV[3], daqBus *daq,
  const real_T uvr_des[3], real_T URpar_k0, real_T URpar_t0, real_T URpar_s,
  real_T URpar_est_omegaFilterT, const real_T URpar_rate_MINDI_rateDotKp[3],
  real_T URpar_rate_MINDI_derFilterT, const real_T URpar_rate_MINDI_MKp[3],
  real_T b_par_freq, real_T M_uvr[3])
{
  real_T Fset;
  real_T Fset_idx_1;
  real_T Fset_idx_0;
  real_T Fset_idx_2;

  /* 'INDIMomentGen:3' if isempty(omegaDot) */
  if (!URControl_DW.omegaDot_not_empty_l) {
    /* 'INDIMomentGen:3' omegaDot = SimpleDerivative(URpar.rate_MINDI_derFilterT, [0,0,0], 300, -300); */
    /* 'SimpleDerivative:12' obj.filterHandle = LPFilter(filterT, initValue, maxLim, minLim); */
    /* 'LPFilter:14' obj.filterT = filterT; */
    URControl_DW.omegaDot_p.filterHandle.filterT = URpar_rate_MINDI_derFilterT;

    /* 'LPFilter:15' obj.value = initValue; */
    /* 'LPFilter:16' obj.maxLim = maxLim; */
    URControl_DW.omegaDot_p.filterHandle.maxLim = 300.0;

    /* 'LPFilter:17' obj.minLim = minLim; */
    URControl_DW.omegaDot_p.filterHandle.minLim = -300.0;

    /* 'SimpleDerivative:13' obj.prevValue = initValue; */
    URControl_DW.omegaDot_p.filterHandle.value[0] = 0.0;
    URControl_DW.omegaDot_p.prevValue[0] = 0.0;
    URControl_DW.omegaDot_p.filterHandle.value[1] = 0.0;
    URControl_DW.omegaDot_p.prevValue[1] = 0.0;
    URControl_DW.omegaDot_p.filterHandle.value[2] = 0.0;
    URControl_DW.omegaDot_p.prevValue[2] = 0.0;
    URControl_DW.omegaDot_not_empty_l = true;
  }

  /* 'INDIMomentGen:4' if isempty(wRotorFilter) */
  if (!URControl_DW.wRotorFilter_not_empty) {
    /* 'INDIMomentGen:4' wRotorFilter = LPFilter(URpar.est_omegaFilterT, [0,0,0,0], 1200, 0); */
    /* 'LPFilter:14' obj.filterT = filterT; */
    URControl_DW.wRotorFilter.filterT = URpar_est_omegaFilterT;

    /* 'LPFilter:15' obj.value = initValue; */
    URControl_DW.wRotorFilter.value[0] = 0.0;
    URControl_DW.wRotorFilter.value[1] = 0.0;
    URControl_DW.wRotorFilter.value[2] = 0.0;
    URControl_DW.wRotorFilter.value[3] = 0.0;

    /* 'LPFilter:16' obj.maxLim = maxLim; */
    URControl_DW.wRotorFilter.maxLim = 1200.0;

    /* 'LPFilter:17' obj.minLim = minLim; */
    URControl_DW.wRotorFilter.minLim = 0.0;
    URControl_DW.wRotorFilter_not_empty = true;
  }

  /* 'INDIMomentGen:6' wRotorFilter.updateFilterT(URpar.rate_MINDI_derFilterT); */
  /* 'LPFilter:26' obj.filterT = filterT; */
  URControl_DW.wRotorFilter.filterT = URpar_rate_MINDI_derFilterT;

  /* 'INDIMomentGen:7' wRotorFilter.update(state.wRotor); */
  /* 'LPFilter:21' obj.value = obj.value*obj.filterT + newValue*(1 - obj.filterT); */
  /* 'LPFilter:22' obj.value = max(min(obj.value,obj.maxLim),obj.minLim); */
  URControl_DW.wRotorFilter.value[0] = (1.0 - URControl_DW.wRotorFilter.filterT)
    * state_wRotor[0] + URControl_DW.wRotorFilter.value[0] *
    URControl_DW.wRotorFilter.filterT;
  if ((URControl_DW.wRotorFilter.value[0] < URControl_DW.wRotorFilter.maxLim) ||
      rtIsNaN(URControl_DW.wRotorFilter.maxLim)) {
    Fset_idx_0 = URControl_DW.wRotorFilter.value[0];
  } else {
    Fset_idx_0 = URControl_DW.wRotorFilter.maxLim;
  }

  if ((Fset_idx_0 > URControl_DW.wRotorFilter.minLim) || rtIsNaN
      (URControl_DW.wRotorFilter.minLim)) {
    URControl_DW.wRotorFilter.value[0] = Fset_idx_0;
  } else {
    URControl_DW.wRotorFilter.value[0] = URControl_DW.wRotorFilter.minLim;
  }

  URControl_DW.wRotorFilter.value[1] = (1.0 - URControl_DW.wRotorFilter.filterT)
    * state_wRotor[1] + URControl_DW.wRotorFilter.value[1] *
    URControl_DW.wRotorFilter.filterT;
  if ((URControl_DW.wRotorFilter.value[1] < URControl_DW.wRotorFilter.maxLim) ||
      rtIsNaN(URControl_DW.wRotorFilter.maxLim)) {
    Fset_idx_0 = URControl_DW.wRotorFilter.value[1];
  } else {
    Fset_idx_0 = URControl_DW.wRotorFilter.maxLim;
  }

  if ((Fset_idx_0 > URControl_DW.wRotorFilter.minLim) || rtIsNaN
      (URControl_DW.wRotorFilter.minLim)) {
    URControl_DW.wRotorFilter.value[1] = Fset_idx_0;
  } else {
    URControl_DW.wRotorFilter.value[1] = URControl_DW.wRotorFilter.minLim;
  }

  URControl_DW.wRotorFilter.value[2] = (1.0 - URControl_DW.wRotorFilter.filterT)
    * state_wRotor[2] + URControl_DW.wRotorFilter.value[2] *
    URControl_DW.wRotorFilter.filterT;
  if ((URControl_DW.wRotorFilter.value[2] < URControl_DW.wRotorFilter.maxLim) ||
      rtIsNaN(URControl_DW.wRotorFilter.maxLim)) {
    Fset_idx_0 = URControl_DW.wRotorFilter.value[2];
  } else {
    Fset_idx_0 = URControl_DW.wRotorFilter.maxLim;
  }

  if ((Fset_idx_0 > URControl_DW.wRotorFilter.minLim) || rtIsNaN
      (URControl_DW.wRotorFilter.minLim)) {
    URControl_DW.wRotorFilter.value[2] = Fset_idx_0;
  } else {
    URControl_DW.wRotorFilter.value[2] = URControl_DW.wRotorFilter.minLim;
  }

  URControl_DW.wRotorFilter.value[3] = (1.0 - URControl_DW.wRotorFilter.filterT)
    * state_wRotor[3] + URControl_DW.wRotorFilter.value[3] *
    URControl_DW.wRotorFilter.filterT;
  if ((URControl_DW.wRotorFilter.value[3] < URControl_DW.wRotorFilter.maxLim) ||
      rtIsNaN(URControl_DW.wRotorFilter.maxLim)) {
    Fset_idx_0 = URControl_DW.wRotorFilter.value[3];
  } else {
    Fset_idx_0 = URControl_DW.wRotorFilter.maxLim;
  }

  if ((Fset_idx_0 > URControl_DW.wRotorFilter.minLim) || rtIsNaN
      (URControl_DW.wRotorFilter.minLim)) {
    URControl_DW.wRotorFilter.value[3] = Fset_idx_0;
  } else {
    URControl_DW.wRotorFilter.value[3] = URControl_DW.wRotorFilter.minLim;
  }

  /* 'INDIMomentGen:9' Fset = wRotorFilter.value.^2*URpar.k0; */
  Fset_idx_0 = URControl_DW.wRotorFilter.value[0] *
    URControl_DW.wRotorFilter.value[0] * URpar_k0;
  Fset_idx_1 = URControl_DW.wRotorFilter.value[1] *
    URControl_DW.wRotorFilter.value[1] * URpar_k0;
  Fset_idx_2 = URControl_DW.wRotorFilter.value[2] *
    URControl_DW.wRotorFilter.value[2] * URpar_k0;
  Fset = URControl_DW.wRotorFilter.value[3] * URControl_DW.wRotorFilter.value[3]
    * URpar_k0;

  /* 'INDIMomentGen:11' M_uvr_prev = zeros(3,1); */
  /* 'INDIMomentGen:12' M_uvr_prev(1) = (Fset(4) - Fset(2))*URpar.s; */
  M_uvr[0] = (Fset - Fset_idx_1) * URpar_s;

  /* 'INDIMomentGen:13' M_uvr_prev(2) = (Fset(1) - Fset(3))*URpar.s; */
  M_uvr[1] = (Fset_idx_0 - Fset_idx_2) * URpar_s;

  /* 'INDIMomentGen:14' M_uvr_prev(3) = (Fset(1) - Fset(2) + Fset(3) - Fset(4))*URpar.t0/URpar.k0; */
  M_uvr[2] = (((Fset_idx_0 - Fset_idx_1) + Fset_idx_2) - Fset) * URpar_t0 /
    URpar_k0;

  /* 'INDIMomentGen:17' error1 = uvr_des' - state.omegafUV; */
  /* 'INDIMomentGen:19' uvrDot_des = error1.*URpar.rate_MINDI_rateDotKp; */
  Fset_idx_0 = (uvr_des[0] - state_omegafUV[0]) * URpar_rate_MINDI_rateDotKp[0];
  Fset_idx_1 = (uvr_des[1] - state_omegafUV[1]) * URpar_rate_MINDI_rateDotKp[1];
  Fset_idx_2 = (uvr_des[2] - state_omegafUV[2]) * URpar_rate_MINDI_rateDotKp[2];

  /* 'INDIMomentGen:22' omegaDot.updateFilterT(URpar.rate_MINDI_derFilterT); */
  /* 'SimpleDerivative:23' obj.filterHandle.updateFilterT(filterT); */
  /* 'LPFilter:26' obj.filterT = filterT; */
  URControl_DW.omegaDot_p.filterHandle.filterT = URpar_rate_MINDI_derFilterT;

  /* 'INDIMomentGen:23' omegaDot.update(state.omegaUV, 1/par.freq); */
  URContr_SimpleDerivative_update(&URControl_DW.omegaDot_p, state_omegaUV, 1.0 /
    b_par_freq);

  /* 'INDIMomentGen:25' error2 = uvrDot_des - omegaDot.derValue; */
  /* 'INDIMomentGen:27' dM = error2.*URpar.rate_MINDI_MKp*1e-4; */
  /* 'INDIMomentGen:29' M_uvr = M_uvr_prev + dM'; */
  /* 'INDIMomentGen:31' daq.uvrDot_des = uvrDot_des; */
  /* 'INDIMomentGen:32' daq.omegaDot = omegaDot.derValue; */
  /* 'INDIMomentGen:33' daq.dM = dM; */
  Fset = (Fset_idx_0 - URControl_DW.omegaDot_p.derValue[0]) *
    URpar_rate_MINDI_MKp[0] * 0.0001;
  daq->uvrDot_des[0] = Fset_idx_0;
  daq->omegaDot[0] = URControl_DW.omegaDot_p.derValue[0];
  daq->dM[0] = Fset;
  M_uvr[0] += Fset;
  Fset = (Fset_idx_1 - URControl_DW.omegaDot_p.derValue[1]) *
    URpar_rate_MINDI_MKp[1] * 0.0001;
  daq->uvrDot_des[1] = Fset_idx_1;
  daq->omegaDot[1] = URControl_DW.omegaDot_p.derValue[1];
  daq->dM[1] = Fset;
  M_uvr[1] += Fset;
  Fset = (Fset_idx_2 - URControl_DW.omegaDot_p.derValue[2]) *
    URpar_rate_MINDI_MKp[2] * 0.0001;
  daq->uvrDot_des[2] = Fset_idx_2;
  daq->omegaDot[2] = URControl_DW.omegaDot_p.derValue[2];
  daq->dM[2] = Fset;
  M_uvr[2] += Fset;
}

/*
 * Function for MATLAB Function: '<S6>/control allocator'
 * function [M_uvr, daq] = PIDMomentGen(state, daq, uvr_des, URpar, par)
 */
void URControlModelClass::URControl_PIDMomentGen(const real_T state_omegaUV[3],
  const real_T state_omegafUV[3], daqBus *daq, const real_T uvr_des[3], real_T
  URpar_Iz, real_T URpar_Iu, real_T URpar_Iv, const real_T
  URpar_rate_MPID_rateDotKp[3], const real_T URpar_rate_MPID_rateDotKi[3], const
  real_T URpar_rate_MPID_rateDotKd[3], real_T URpar_rate_MPID_derFilterT, real_T
  URpar_rate_MPID_uvrdesderFilter, real_T URpar_rate_MPID_maxInt, real_T
  URpar_rate_MPID_precGain, real_T b_par_freq, real_T M_uvr[3])
{
  real_T intLim;
  real_T uvr_des_0[3];
  real_T errorf;
  real_T uvr_des_dot_idx_0;
  real_T errorf_idx_0;
  real_T uvr_des_dot_idx_1;
  real_T errorf_idx_1;
  real_T uvr_des_dot_idx_2;
  boolean_T tmp;

  /* 'PIDMomentGen:3' if isempty(errorInt) */
  /* 'PIDMomentGen:4' if isempty(error_prev) */
  /* 'PIDMomentGen:6' if isempty(errorD) */
  if (!URControl_DW.errorD_not_empty) {
    /* 'PIDMomentGen:6' errorD = SimpleDerivative(URpar.rate_MPID_derFilterT,[0,0,0], 200, -200); */
    /* 'SimpleDerivative:12' obj.filterHandle = LPFilter(filterT, initValue, maxLim, minLim); */
    /* 'LPFilter:14' obj.filterT = filterT; */
    URControl_DW.errorD.filterHandle.filterT = URpar_rate_MPID_derFilterT;

    /* 'LPFilter:15' obj.value = initValue; */
    /* 'LPFilter:16' obj.maxLim = maxLim; */
    URControl_DW.errorD.filterHandle.maxLim = 200.0;

    /* 'LPFilter:17' obj.minLim = minLim; */
    URControl_DW.errorD.filterHandle.minLim = -200.0;

    /* 'SimpleDerivative:13' obj.prevValue = initValue; */
    URControl_DW.errorD.filterHandle.value[0] = 0.0;
    URControl_DW.errorD.prevValue[0] = 0.0;
    URControl_DW.errorD.filterHandle.value[1] = 0.0;
    URControl_DW.errorD.prevValue[1] = 0.0;
    URControl_DW.errorD.filterHandle.value[2] = 0.0;
    URControl_DW.errorD.prevValue[2] = 0.0;
    URControl_DW.errorD_not_empty = true;
  }

  /* 'PIDMomentGen:7' if isempty(uvrDer) */
  if (!URControl_DW.uvrDer_not_empty) {
    /* 'PIDMomentGen:7' uvrDer = SimpleDerivative(URpar.rate_MPID_uvrdesderFilterT,[0,0,0], 200, -200); */
    /* 'SimpleDerivative:12' obj.filterHandle = LPFilter(filterT, initValue, maxLim, minLim); */
    /* 'LPFilter:14' obj.filterT = filterT; */
    URControl_DW.uvrDer.filterHandle.filterT = URpar_rate_MPID_uvrdesderFilter;

    /* 'LPFilter:15' obj.value = initValue; */
    /* 'LPFilter:16' obj.maxLim = maxLim; */
    URControl_DW.uvrDer.filterHandle.maxLim = 200.0;

    /* 'LPFilter:17' obj.minLim = minLim; */
    URControl_DW.uvrDer.filterHandle.minLim = -200.0;

    /* 'SimpleDerivative:13' obj.prevValue = initValue; */
    URControl_DW.uvrDer.filterHandle.value[0] = 0.0;
    URControl_DW.uvrDer.prevValue[0] = 0.0;
    URControl_DW.uvrDer.filterHandle.value[1] = 0.0;
    URControl_DW.uvrDer.prevValue[1] = 0.0;
    URControl_DW.uvrDer.filterHandle.value[2] = 0.0;
    URControl_DW.uvrDer.prevValue[2] = 0.0;
    URControl_DW.uvrDer_not_empty = true;
  }

  /* 'PIDMomentGen:10' errorf = uvr_des' - state.omegafUV; */
  /* 'PIDMomentGen:11' error = uvr_des' - state.omegaUV; */
  /* 'PIDMomentGen:12' errorInt = errorInt + errorf/par.freq; */
  /* 'PIDMomentGen:13' intLim = URpar.rate_MPID_maxInt * 1e-3; */
  intLim = URpar_rate_MPID_maxInt * 0.001;

  /* 'PIDMomentGen:14' errorInt = max(min(errorInt,intLim),-intLim); */
  errorf = uvr_des[0] - state_omegafUV[0];
  URControl_DW.errorInt[0] += errorf / b_par_freq;
  tmp = rtIsNaN(intLim);
  if ((URControl_DW.errorInt[0] < intLim) || tmp) {
    uvr_des_dot_idx_0 = URControl_DW.errorInt[0];
  } else {
    uvr_des_dot_idx_0 = intLim;
  }

  errorf_idx_0 = errorf;
  errorf = uvr_des[1] - state_omegafUV[1];
  URControl_DW.errorInt[1] += errorf / b_par_freq;
  if ((URControl_DW.errorInt[1] < intLim) || tmp) {
    uvr_des_dot_idx_1 = URControl_DW.errorInt[1];
  } else {
    uvr_des_dot_idx_1 = intLim;
  }

  errorf_idx_1 = errorf;
  errorf = uvr_des[2] - state_omegafUV[2];
  URControl_DW.errorInt[2] += errorf / b_par_freq;
  if ((URControl_DW.errorInt[2] < intLim) || tmp) {
    uvr_des_dot_idx_2 = URControl_DW.errorInt[2];
  } else {
    uvr_des_dot_idx_2 = intLim;
  }

  /* 'PIDMomentGen:16' errorD.filterHandle.filterT = URpar.rate_MPID_derFilterT; */
  URControl_DW.errorD.filterHandle.filterT = URpar_rate_MPID_derFilterT;

  /* 'PIDMomentGen:17' errorD.update(error,1/par.freq) */
  tmp = rtIsNaN(-intLim);
  if ((uvr_des_dot_idx_0 > -intLim) || tmp) {
    URControl_DW.errorInt[0] = uvr_des_dot_idx_0;
  } else {
    URControl_DW.errorInt[0] = -intLim;
  }

  uvr_des_0[0] = uvr_des[0] - state_omegaUV[0];
  if ((uvr_des_dot_idx_1 > -intLim) || tmp) {
    URControl_DW.errorInt[1] = uvr_des_dot_idx_1;
  } else {
    URControl_DW.errorInt[1] = -intLim;
  }

  uvr_des_0[1] = uvr_des[1] - state_omegaUV[1];
  if ((uvr_des_dot_idx_2 > -intLim) || tmp) {
    URControl_DW.errorInt[2] = uvr_des_dot_idx_2;
  } else {
    URControl_DW.errorInt[2] = -intLim;
  }

  uvr_des_0[2] = uvr_des[2] - state_omegaUV[2];
  URContr_SimpleDerivative_update(&URControl_DW.errorD, uvr_des_0, 1.0 /
    b_par_freq);

  /* 'PIDMomentGen:19' uvrDer.filterHandle.filterT = URpar.rate_MPID_uvrdesderFilterT; */
  URControl_DW.uvrDer.filterHandle.filterT = URpar_rate_MPID_uvrdesderFilter;

  /* 'PIDMomentGen:20' uvrDer.update(uvr_des', 1/par.freq); */
  URContr_SimpleDerivative_update(&URControl_DW.uvrDer, uvr_des, 1.0 /
    b_par_freq);

  /* 'PIDMomentGen:21' uvr_des_dot = uvrDer.derValue; */
  /* 'PIDMomentGen:23' uvrDot_des = errorf.*URpar.rate_MPID_rateDotKp + errorInt.*URpar.rate_MPID_rateDotKi + errorD.derValue.*URpar.rate_MPID_rateDotKd + uvr_des_dot; */
  /* 'PIDMomentGen:26' M_uvr = uvrDot_des'.*[URpar.Iu; URpar.Iv; URpar.Iz]; */
  /* 'PIDMomentGen:29' M_prec = [state.omegafUV(2)*state.omegafUV(3)*(URpar.Iv - URpar.Iz); */
  /* 'PIDMomentGen:30'           state.omegafUV(1)*state.omegafUV(3)*(URpar.Iz - URpar.Iu); */
  /* 'PIDMomentGen:31'           0]; */
  /* 'PIDMomentGen:33' M_uvr = M_uvr - URpar.rate_MPID_precGain*M_prec; */
  /* 'PIDMomentGen:35' daq.uvrDot_des = uvrDot_des; */
  intLim = ((errorf_idx_0 * URpar_rate_MPID_rateDotKp[0] +
             URControl_DW.errorInt[0] * URpar_rate_MPID_rateDotKi[0]) +
            URControl_DW.errorD.derValue[0] * URpar_rate_MPID_rateDotKd[0]) +
    URControl_DW.uvrDer.derValue[0];
  M_uvr[0] = intLim * URpar_Iu - state_omegafUV[1] * state_omegafUV[2] *
    (URpar_Iv - URpar_Iz) * URpar_rate_MPID_precGain;
  daq->uvrDot_des[0] = intLim;
  intLim = ((errorf_idx_1 * URpar_rate_MPID_rateDotKp[1] +
             URControl_DW.errorInt[1] * URpar_rate_MPID_rateDotKi[1]) +
            URControl_DW.errorD.derValue[1] * URpar_rate_MPID_rateDotKd[1]) +
    URControl_DW.uvrDer.derValue[1];
  M_uvr[1] = intLim * URpar_Iv - state_omegafUV[0] * state_omegafUV[2] *
    (URpar_Iz - URpar_Iu) * URpar_rate_MPID_precGain;
  daq->uvrDot_des[1] = intLim;
  intLim = ((errorf * URpar_rate_MPID_rateDotKp[2] + URControl_DW.errorInt[2] *
             URpar_rate_MPID_rateDotKi[2]) + URControl_DW.errorD.derValue[2] *
            URpar_rate_MPID_rateDotKd[2]) + URControl_DW.uvrDer.derValue[2];
  M_uvr[2] = intLim * URpar_Iz - URpar_rate_MPID_precGain * 0.0;
  daq->uvrDot_des[2] = intLim;
}

/*
 * Function for MATLAB Function: '<S6>/control allocator'
 * function [x,y_state,iterSteps,optimal] = controlAllocQPQuick(refStruct, FMax, FMin, gainStruct, y_state_init, par, URpar)
 */
void URControlModelClass::URControl_controlAllocQPQuick(real_T refStruct_MuRef,
  real_T refStruct_MvRef, real_T refStruct_MzRef, real_T refStruct_FtotRef,
  const real_T FMax[4], const real_T FMin[4], real_T gainStruct_MuGain, real_T
  gainStruct_MvGain, real_T gainStruct_FtotGain, real_T gainStruct_FGain, real_T
  gainStruct_MzGain, real_T y_state_init[4], real_T b_par_URC_k0, real_T
  b_par_URC_t0, real_T b_par_URC_s, real_T URpar_rate_maxIter, real_T x[4],
  real_T *iterSteps, real_T *optimal)
{
  real_T H[16];
  real_T b[8];
  int32_T solution;
  boolean_T indices[8];
  int8_T A_eq_data[32];
  int8_T AT_eq_data[32];
  real_T xy_data[12];
  real_T constraintError[8];
  real_T count;
  int32_T iter;
  int8_T f_data[8];
  int8_T g_data[8];
  int32_T trueCount;
  int8_T result_data[96];
  boolean_T empty_non_axis_sizes;
  real_T varargin_1_data[48];
  int32_T idx;
  static const int8_T A[32] = { 1, 0, 0, 0, -1, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0,
    0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 1, 0, 0, 0, -1 };

  real_T varargin_1_data_0[144];
  real_T c_data[12];
  int32_T loop_ub;
  int32_T xy_size;
  int32_T varargin_1_size[2];
  real_T c_idx_0;
  real_T c_idx_1;
  real_T c_idx_2;
  real_T c_idx_3;
  int32_T f_size_idx_1;
  int32_T result_size_idx_1;
  real_T z1_idx_1;
  real_T z1_idx_2;
  real_T z1_idx_3;
  int8_T l2_idx_0;
  int8_T l1_idx_1;
  real_T c_idx_0_tmp;
  int32_T AT_eq_data_tmp;
  boolean_T tmp;
  boolean_T guard1 = false;
  boolean_T exitg1;
  boolean_T exitg2;

  /* 'controlAllocQPQuick:3' x = [0;0;0;0]; */
  /* 'controlAllocQPQuick:4' y = [0;0;0;0]; */
  /* 'controlAllocQPQuick:7' MuRef = refStruct(1).MuRef; */
  /* 'controlAllocQPQuick:8' MvRef = refStruct(1).MvRef; */
  /* 'controlAllocQPQuick:9' MzRef = refStruct(1).MzRef; */
  /* 'controlAllocQPQuick:10' FtotRef = refStruct(1).FtotRef; */
  /* 'controlAllocQPQuick:12' MuGain = gainStruct(1).MuGain; */
  /* 'controlAllocQPQuick:13' MvGain = gainStruct(1).MvGain; */
  /* 'controlAllocQPQuick:14' MzGain = gainStruct(1).MzGain; */
  /* 'controlAllocQPQuick:15' FtotGain = gainStruct(1).FtotGain; */
  /* 'controlAllocQPQuick:16' FGain = gainStruct(1).FGain; */
  /* 'controlAllocQPQuick:18' s = par.URC.s; */
  /* 'controlAllocQPQuick:19' t0 = par.URC.t0; */
  /* 'controlAllocQPQuick:20' k0 = par.URC.k0; */
  /* 'controlAllocQPQuick:22' FMax = max(FMax,0.001); */
  x[0] = 0.0;
  if (FMax[0] > 0.001) {
    count = FMax[0];
  } else {
    count = 0.001;
  }

  x[1] = 0.0;
  if (FMax[1] > 0.001) {
    z1_idx_1 = FMax[1];
  } else {
    z1_idx_1 = 0.001;
  }

  x[2] = 0.0;
  if (FMax[2] > 0.001) {
    z1_idx_2 = FMax[2];
  } else {
    z1_idx_2 = 0.001;
  }

  x[3] = 0.0;
  if (FMax[3] > 0.001) {
    z1_idx_3 = FMax[3];
  } else {
    z1_idx_3 = 0.001;
  }

  /* 'controlAllocQPQuick:25' H = zeros(4,4); */
  /* 'controlAllocQPQuick:26' H(1,1) = 2*(MvGain*s^2 + MzGain*(t0/k0)^2 + FtotGain + FGain/FMax(1)); */
  c_idx_0 = b_par_URC_t0 / b_par_URC_k0;
  c_idx_1 = b_par_URC_s * b_par_URC_s;
  H[0] = (((c_idx_1 * gainStruct_MvGain + c_idx_0 * c_idx_0 * gainStruct_MzGain)
           + gainStruct_FtotGain) + gainStruct_FGain / count) * 2.0;

  /* 'controlAllocQPQuick:27' H(1,2) = -2*MzGain*(t0/k0)^2 + FtotGain*2; */
  H[4] = -2.0 * gainStruct_MzGain * (c_idx_0 * c_idx_0) + gainStruct_FtotGain *
    2.0;

  /* 'controlAllocQPQuick:28' H(2,1) = H(1,2); */
  H[1] = -2.0 * gainStruct_MzGain * (c_idx_0 * c_idx_0) + gainStruct_FtotGain *
    2.0;

  /* 'controlAllocQPQuick:29' H(1,3) = -2*MvGain*s^2 + MzGain*2*(t0/k0)^2 + FtotGain*2; */
  H[8] = (-2.0 * gainStruct_MvGain * c_idx_1 + gainStruct_MzGain * 2.0 *
          (c_idx_0 * c_idx_0)) + gainStruct_FtotGain * 2.0;

  /* 'controlAllocQPQuick:30' H(3,1) = H(1,3); */
  H[2] = H[8];

  /* 'controlAllocQPQuick:31' H(1,4) = -2*MzGain*(t0/k0)^2 + FtotGain*2; */
  H[12] = -2.0 * gainStruct_MzGain * (c_idx_0 * c_idx_0) + gainStruct_FtotGain *
    2.0;

  /* 'controlAllocQPQuick:32' H(4,1) = H(1,4); */
  H[3] = -2.0 * gainStruct_MzGain * (c_idx_0 * c_idx_0) + gainStruct_FtotGain *
    2.0;

  /* 'controlAllocQPQuick:34' H(2,2) = 2*(MuGain*s^2 + MzGain*(t0/k0)^2 + FtotGain + FGain/FMax(2)); */
  H[5] = (((c_idx_1 * gainStruct_MuGain + c_idx_0 * c_idx_0 * gainStruct_MzGain)
           + gainStruct_FtotGain) + gainStruct_FGain / z1_idx_1) * 2.0;

  /* 'controlAllocQPQuick:35' H(2,3) = -2*MzGain*(t0/k0)^2 + FtotGain*2; */
  H[9] = -2.0 * gainStruct_MzGain * (c_idx_0 * c_idx_0) + gainStruct_FtotGain *
    2.0;

  /* 'controlAllocQPQuick:36' H(3,2) = H(2,3); */
  H[6] = -2.0 * gainStruct_MzGain * (c_idx_0 * c_idx_0) + gainStruct_FtotGain *
    2.0;

  /* 'controlAllocQPQuick:37' H(2,4) = -2*MuGain*s^2 + MzGain*2*(t0/k0)^2 + 2*FtotGain; */
  H[13] = (-2.0 * gainStruct_MuGain * c_idx_1 + gainStruct_MzGain * 2.0 *
           (c_idx_0 * c_idx_0)) + 2.0 * gainStruct_FtotGain;

  /* 'controlAllocQPQuick:38' H(4,2) = H(2,4); */
  H[7] = H[13];

  /* 'controlAllocQPQuick:40' H(3,3) = 2*(MvGain*s^2 + MzGain*(t0/k0)^2 + FtotGain + FGain/FMax(3)); */
  H[10] = (((b_par_URC_s * b_par_URC_s * gainStruct_MvGain + c_idx_0 * c_idx_0 *
             gainStruct_MzGain) + gainStruct_FtotGain) + gainStruct_FGain /
           z1_idx_2) * 2.0;

  /* 'controlAllocQPQuick:41' H(3,4) = -2*MzGain*(t0/k0)^2 + FtotGain*2; */
  H[14] = -2.0 * gainStruct_MzGain * (c_idx_0 * c_idx_0) + gainStruct_FtotGain *
    2.0;

  /* 'controlAllocQPQuick:42' H(4,3) = H(3,4); */
  H[11] = -2.0 * gainStruct_MzGain * (c_idx_0 * c_idx_0) + gainStruct_FtotGain *
    2.0;

  /* 'controlAllocQPQuick:44' H(4,4) = 2*(MuGain*s^2 + MzGain*(t0/k0)^2 + FtotGain + FGain/FMax(4)); */
  H[15] = (((b_par_URC_s * b_par_URC_s * gainStruct_MuGain + c_idx_0 * c_idx_0 *
             gainStruct_MzGain) + gainStruct_FtotGain) + gainStruct_FGain /
           z1_idx_3) * 2.0;

  /* 'controlAllocQPQuick:47' c = zeros(4,1); */
  /* 'controlAllocQPQuick:49' c(1,1) = -2*MvGain*MvRef*s - 2*t0/k0*MzRef*MzGain - 2*FtotGain*FtotRef; */
  c_idx_3 = 2.0 * b_par_URC_t0 / b_par_URC_k0 * refStruct_MzRef *
    gainStruct_MzGain;
  c_idx_0_tmp = 2.0 * gainStruct_FtotGain * refStruct_FtotRef;
  c_idx_0 = (-2.0 * gainStruct_MvGain * refStruct_MvRef * b_par_URC_s - c_idx_3)
    - c_idx_0_tmp;

  /* 'controlAllocQPQuick:50' c(2,1) = 2*MuGain*MuRef*s + 2*t0/k0*MzRef*MzGain - 2*FtotGain*FtotRef; */
  c_idx_1 = (c_idx_3 + 2.0 * gainStruct_MuGain * refStruct_MuRef * b_par_URC_s)
    - c_idx_0_tmp;

  /* 'controlAllocQPQuick:51' c(3,1) = 2*MvGain*MvRef*s - 2*t0/k0*MzRef*MzGain - 2*FtotGain*FtotRef; */
  c_idx_2 = (2.0 * gainStruct_MvGain * refStruct_MvRef * b_par_URC_s - c_idx_3)
    - c_idx_0_tmp;

  /* 'controlAllocQPQuick:52' c(4,1) = -2*MuGain*MuRef*s + 2*t0/k0*MzRef*MzGain - 2*FtotGain*FtotRef; */
  c_idx_3 = (c_idx_3 + -2.0 * gainStruct_MuGain * refStruct_MuRef * b_par_URC_s)
    - c_idx_0_tmp;

  /* 'controlAllocQPQuick:55' A = [1,0,0,0;... */
  /* 'controlAllocQPQuick:56'      0,1,0,0;... */
  /* 'controlAllocQPQuick:57'      0,0,1,0;... */
  /* 'controlAllocQPQuick:58'      0,0,0,1;... */
  /* 'controlAllocQPQuick:59'      -1,0,0,0;... */
  /* 'controlAllocQPQuick:60'      0,-1,0,0;... */
  /* 'controlAllocQPQuick:61'      0,0,-1,0;... */
  /* 'controlAllocQPQuick:62'      0,0,0,-1]; */
  /* 'controlAllocQPQuick:64' b = [FMax(1);FMax(2);FMax(3);FMax(4);-FMin(1);-FMin(2);-FMin(3);-FMin(4)]; */
  b[0] = count;
  b[1] = z1_idx_1;
  b[2] = z1_idx_2;
  b[3] = z1_idx_3;
  b[4] = -FMin[0];
  b[5] = -FMin[1];
  b[6] = -FMin[2];
  b[7] = -FMin[3];

  /* 'controlAllocQPQuick:68' y_state = y_state_init; */
  /* 'controlAllocQPQuick:69' solution = 0; */
  solution = 0;

  /* 'controlAllocQPQuick:70' iterSteps = 0; */
  *iterSteps = 0.0;

  /* 'controlAllocQPQuick:71' for iter = 1:URpar.rate_maxIter */
  iter = 0;
  exitg1 = false;
  while ((!exitg1) && (iter <= (int32_T)URpar_rate_maxIter - 1)) {
    /* 'controlAllocQPQuick:72' iterSteps = iterSteps +1; */
    (*iterSteps)++;

    /* 'controlAllocQPQuick:82' indices = [(y_state == 1), (y_state == -1)]; */
    indices[0] = (y_state_init[0] == 1.0);
    indices[4] = (y_state_init[0] == -1.0);
    indices[1] = (y_state_init[1] == 1.0);
    indices[5] = (y_state_init[1] == -1.0);
    indices[2] = (y_state_init[2] == 1.0);
    indices[6] = (y_state_init[2] == -1.0);
    indices[3] = (y_state_init[3] == 1.0);
    indices[7] = (y_state_init[3] == -1.0);

    /* 'controlAllocQPQuick:83' b_eq = b(indices); */
    /* 'controlAllocQPQuick:84' A_eq = A(indices,:); */
    trueCount = 0;
    for (xy_size = 0; xy_size < 8; xy_size++) {
      if (indices[xy_size]) {
        trueCount++;
      }
    }

    f_size_idx_1 = trueCount;
    trueCount = 0;
    for (xy_size = 0; xy_size < 8; xy_size++) {
      if (indices[xy_size]) {
        f_data[trueCount] = (int8_T)(xy_size + 1);
        trueCount++;
      }
    }

    for (loop_ub = 0; loop_ub < f_size_idx_1; loop_ub++) {
      A_eq_data[loop_ub] = A[f_data[loop_ub] - 1];
    }

    for (loop_ub = 0; loop_ub < f_size_idx_1; loop_ub++) {
      A_eq_data[loop_ub + f_size_idx_1] = A[f_data[loop_ub] + 7];
    }

    for (loop_ub = 0; loop_ub < f_size_idx_1; loop_ub++) {
      A_eq_data[loop_ub + (f_size_idx_1 << 1)] = A[f_data[loop_ub] + 15];
    }

    for (loop_ub = 0; loop_ub < f_size_idx_1; loop_ub++) {
      A_eq_data[loop_ub + f_size_idx_1 * 3] = A[f_data[loop_ub] + 23];
    }

    /* 'controlAllocQPQuick:85' AT_eq = transpose(A_eq); */
    for (loop_ub = 0; loop_ub < f_size_idx_1; loop_ub++) {
      AT_eq_data_tmp = loop_ub << 2;
      AT_eq_data[AT_eq_data_tmp] = A_eq_data[loop_ub];
      AT_eq_data[1 + AT_eq_data_tmp] = A_eq_data[loop_ub + f_size_idx_1];
      AT_eq_data[2 + AT_eq_data_tmp] = A_eq_data[(f_size_idx_1 << 1) + loop_ub];
      AT_eq_data[3 + AT_eq_data_tmp] = A_eq_data[f_size_idx_1 * 3 + loop_ub];
    }

    /* 'controlAllocQPQuick:87' if isempty(A_eq) */
    if (f_size_idx_1 == 0) {
      /* 'controlAllocQPQuick:88' l1=[0,0]; */
      /* 'controlAllocQPQuick:89' l2=[0,0]; */
      l2_idx_0 = 0;
      l1_idx_1 = 0;
    } else {
      /* 'controlAllocQPQuick:90' else */
      /* 'controlAllocQPQuick:91' l1=size(AT_eq); */
      l1_idx_1 = (int8_T)f_size_idx_1;

      /* 'controlAllocQPQuick:92' l2=size(A_eq); */
      l2_idx_0 = (int8_T)f_size_idx_1;
    }

    /* 'controlAllocQPQuick:96' D = [H,AT_eq;A_eq,zeros(l2(1),l1(2))]; */
    if (f_size_idx_1 != 0) {
      trueCount = f_size_idx_1;
    } else if ((l2_idx_0 != 0) && (l1_idx_1 != 0)) {
      trueCount = l2_idx_0;
    } else {
      trueCount = 0;
      if (l2_idx_0 > 0) {
        trueCount = l2_idx_0;
      }
    }

    empty_non_axis_sizes = (trueCount == 0);
    if (empty_non_axis_sizes || (f_size_idx_1 != 0)) {
      xy_size = 4;
    } else {
      xy_size = 0;
    }

    if (empty_non_axis_sizes || ((l2_idx_0 != 0) && (l1_idx_1 != 0))) {
      idx = l1_idx_1;
    } else {
      idx = 0;
    }

    AT_eq_data_tmp = trueCount;
    result_size_idx_1 = xy_size + idx;
    xy_size *= trueCount;
    loop_ub = trueCount * idx - 1;
    if (0 <= xy_size - 1) {
      memcpy(&result_data[0], &A_eq_data[0], xy_size * sizeof(int8_T));
    }

    if (0 <= loop_ub) {
      memset(&result_data[xy_size], 0, (((loop_ub + xy_size) - xy_size) + 1) *
             sizeof(int8_T));
    }

    idx = 4 + f_size_idx_1;
    xy_size = (f_size_idx_1 << 2) - 1;
    memcpy(&varargin_1_data[0], &H[0], sizeof(real_T) << 4U);
    for (loop_ub = 0; loop_ub <= xy_size; loop_ub++) {
      varargin_1_data[loop_ub + 16] = AT_eq_data[loop_ub];
    }

    /* 'controlAllocQPQuick:97' d = [-c;b_eq]; */
    trueCount = 0;
    for (xy_size = 0; xy_size < 8; xy_size++) {
      if (indices[xy_size]) {
        trueCount++;
      }
    }

    f_size_idx_1 = trueCount;
    trueCount = 0;
    for (xy_size = 0; xy_size < 8; xy_size++) {
      if (indices[xy_size]) {
        g_data[trueCount] = (int8_T)(xy_size + 1);
        trueCount++;
      }
    }

    /* 'controlAllocQPQuick:98' xy = D\d; */
    if ((AT_eq_data_tmp == 0) || (result_size_idx_1 == 0)) {
      AT_eq_data_tmp = 0;
    }

    varargin_1_size[0] = 4 + AT_eq_data_tmp;
    varargin_1_size[1] = idx;
    for (loop_ub = 0; loop_ub < idx; loop_ub++) {
      for (trueCount = 0; trueCount < 4; trueCount++) {
        varargin_1_data_0[trueCount + varargin_1_size[0] * loop_ub] =
          varargin_1_data[(loop_ub << 2) + trueCount];
      }
    }

    for (loop_ub = 0; loop_ub < idx; loop_ub++) {
      for (trueCount = 0; trueCount < AT_eq_data_tmp; trueCount++) {
        varargin_1_data_0[(trueCount + varargin_1_size[0] * loop_ub) + 4] =
          result_data[AT_eq_data_tmp * loop_ub + trueCount];
      }
    }

    trueCount = 4 + f_size_idx_1;
    c_data[0] = -c_idx_0;
    c_data[1] = -c_idx_1;
    c_data[2] = -c_idx_2;
    c_data[3] = -c_idx_3;
    for (loop_ub = 0; loop_ub < f_size_idx_1; loop_ub++) {
      c_data[loop_ub + 4] = b[g_data[loop_ub] - 1];
    }

    URControl_mldivide(varargin_1_data_0, varargin_1_size, c_data, &trueCount,
                       xy_data, &xy_size);

    /* 'controlAllocQPQuick:99' x = xy(1:4); */
    x[0] = xy_data[0];
    x[1] = xy_data[1];
    x[2] = xy_data[2];
    x[3] = xy_data[3];

    /* 'controlAllocQPQuick:100' y = xy(5:length(xy)); */
    if (5 > xy_size) {
      trueCount = 0;
      xy_size = 0;
    } else {
      trueCount = 4;
    }

    /* 'controlAllocQPQuick:103' constraintError = A*x - b; */
    for (loop_ub = 0; loop_ub < 8; loop_ub++) {
      constraintError[loop_ub] = ((((real_T)A[loop_ub + 8] * x[1] + (real_T)
        A[loop_ub] * x[0]) + (real_T)A[loop_ub + 16] * x[2]) + (real_T)A[loop_ub
        + 24] * x[3]) - b[loop_ub];
    }

    /* 'controlAllocQPQuick:105' constraintOK = (max(constraintError) <= 0.001); */
    tmp = rtIsNaN(constraintError[0]);
    if (!tmp) {
      idx = 1;
    } else {
      idx = 0;
      AT_eq_data_tmp = 2;
      exitg2 = false;
      while ((!exitg2) && (AT_eq_data_tmp < 9)) {
        if (!rtIsNaN(constraintError[AT_eq_data_tmp - 1])) {
          idx = AT_eq_data_tmp;
          exitg2 = true;
        } else {
          AT_eq_data_tmp++;
        }
      }
    }

    if (idx == 0) {
      count = constraintError[0];
    } else {
      count = constraintError[idx - 1];
      while (idx + 1 < 9) {
        if (count < constraintError[idx]) {
          count = constraintError[idx];
        }

        idx++;
      }
    }

    /* 'controlAllocQPQuick:106' yMultipOK = (isempty(y) || min(y) >= 0); */
    loop_ub = xy_size - trueCount;
    if (loop_ub == 0) {
      empty_non_axis_sizes = true;
    } else {
      if (loop_ub <= 2) {
        if (loop_ub == 1) {
          z1_idx_1 = xy_data[trueCount];
        } else {
          z1_idx_1 = xy_data[trueCount + 1];
          if ((xy_data[trueCount] > z1_idx_1) || (rtIsNaN(xy_data[trueCount]) &&
               (!rtIsNaN(z1_idx_1)))) {
          } else {
            z1_idx_1 = xy_data[trueCount];
          }
        }
      } else {
        if (!rtIsNaN(xy_data[trueCount])) {
          idx = 0;
        } else {
          idx = -1;
          AT_eq_data_tmp = 2;
          exitg2 = false;
          while ((!exitg2) && (AT_eq_data_tmp <= loop_ub)) {
            if (!rtIsNaN(xy_data[(trueCount + AT_eq_data_tmp) - 1])) {
              idx = AT_eq_data_tmp - 1;
              exitg2 = true;
            } else {
              AT_eq_data_tmp++;
            }
          }
        }

        if (idx + 1 == 0) {
          z1_idx_1 = xy_data[trueCount];
        } else {
          z1_idx_1 = xy_data[trueCount + idx];
          while (idx + 2 <= loop_ub) {
            z1_idx_2 = xy_data[(trueCount + idx) + 1];
            if (z1_idx_1 > z1_idx_2) {
              z1_idx_1 = z1_idx_2;
            }

            idx++;
          }
        }
      }

      if (z1_idx_1 >= 0.0) {
        empty_non_axis_sizes = true;
      } else {
        empty_non_axis_sizes = false;
      }
    }

    /* 'controlAllocQPQuick:108' if constraintOK && yMultipOK */
    if ((count <= 0.001) && empty_non_axis_sizes) {
      /* 'controlAllocQPQuick:109' solution = 1; */
      solution = 1;
      exitg1 = true;
    } else {
      /* 'controlAllocQPQuick:111' else */
      /* 'controlAllocQPQuick:112' if isempty(y) || min(y) >= 0.0 */
      guard1 = false;
      if (loop_ub == 0) {
        guard1 = true;
      } else {
        if (loop_ub <= 2) {
          if (loop_ub == 1) {
            count = xy_data[trueCount];
          } else if ((xy_data[trueCount] > xy_data[trueCount + 1]) || (rtIsNaN
                      (xy_data[trueCount]) && (!rtIsNaN(xy_data[trueCount + 1]))))
          {
            count = xy_data[trueCount + 1];
          } else {
            count = xy_data[trueCount];
          }
        } else {
          if (!rtIsNaN(xy_data[trueCount])) {
            idx = 0;
          } else {
            idx = -1;
            AT_eq_data_tmp = 2;
            exitg2 = false;
            while ((!exitg2) && (AT_eq_data_tmp <= loop_ub)) {
              if (!rtIsNaN(xy_data[(trueCount + AT_eq_data_tmp) - 1])) {
                idx = AT_eq_data_tmp - 1;
                exitg2 = true;
              } else {
                AT_eq_data_tmp++;
              }
            }
          }

          if (idx + 1 == 0) {
            count = xy_data[trueCount];
          } else {
            count = xy_data[trueCount + idx];
            while (idx + 2 <= loop_ub) {
              z1_idx_2 = xy_data[(trueCount + idx) + 1];
              if (count > z1_idx_2) {
                count = z1_idx_2;
              }

              idx++;
            }
          }
        }

        if (count >= 0.0) {
          guard1 = true;
        } else {
          /* 'controlAllocQPQuick:120' else */
          /* 'controlAllocQPQuick:122' [~,index] = min(y); */
          if (loop_ub <= 2) {
            if (loop_ub == 1) {
              idx = 1;
            } else if ((xy_data[trueCount] > xy_data[trueCount + 1]) || (rtIsNaN
                        (xy_data[trueCount]) && (!rtIsNaN(xy_data[trueCount + 1]))))
            {
              idx = 2;
            } else {
              idx = 1;
            }
          } else {
            if (!rtIsNaN(xy_data[trueCount])) {
              idx = 1;
            } else {
              idx = 0;
              AT_eq_data_tmp = 2;
              exitg2 = false;
              while ((!exitg2) && (AT_eq_data_tmp <= loop_ub)) {
                if (!rtIsNaN(xy_data[(trueCount + AT_eq_data_tmp) - 1])) {
                  idx = AT_eq_data_tmp;
                  exitg2 = true;
                } else {
                  AT_eq_data_tmp++;
                }
              }
            }

            if (idx == 0) {
              idx = 1;
            } else {
              count = xy_data[(trueCount + idx) - 1];
              for (AT_eq_data_tmp = idx - 1; AT_eq_data_tmp + 2 <= loop_ub;
                   AT_eq_data_tmp++) {
                z1_idx_2 = xy_data[(trueCount + AT_eq_data_tmp) + 1];
                if (count > z1_idx_2) {
                  count = z1_idx_2;
                  idx = AT_eq_data_tmp + 2;
                }
              }
            }
          }

          /* 'controlAllocQPQuick:122' ~ */
          /* 'controlAllocQPQuick:123' count = 0; */
          /* 'controlAllocQPQuick:124' for i=1:4 */
          /* 'controlAllocQPQuick:125' count = count + abs(y_state(i)); */
          count = std::abs(y_state_init[0]);

          /* 'controlAllocQPQuick:126' if count == index */
          if (count == idx) {
            /* 'controlAllocQPQuick:127' y_state(i) = 0; */
            y_state_init[0] = 0.0;
          }

          /* 'controlAllocQPQuick:125' count = count + abs(y_state(i)); */
          count += std::abs(y_state_init[1]);

          /* 'controlAllocQPQuick:126' if count == index */
          if (count == idx) {
            /* 'controlAllocQPQuick:127' y_state(i) = 0; */
            y_state_init[1] = 0.0;
          }

          /* 'controlAllocQPQuick:125' count = count + abs(y_state(i)); */
          count += std::abs(y_state_init[2]);

          /* 'controlAllocQPQuick:126' if count == index */
          if (count == idx) {
            /* 'controlAllocQPQuick:127' y_state(i) = 0; */
            y_state_init[2] = 0.0;
          }

          /* 'controlAllocQPQuick:125' count = count + abs(y_state(i)); */
          count += std::abs(y_state_init[3]);

          /* 'controlAllocQPQuick:126' if count == index */
          if (count == idx) {
            /* 'controlAllocQPQuick:127' y_state(i) = 0; */
            y_state_init[3] = 0.0;
          }
        }
      }

      if (guard1) {
        /* 'controlAllocQPQuick:114' [~,index] = max(constraintError); */
        if (!tmp) {
          trueCount = 1;
        } else {
          trueCount = 0;
          xy_size = 2;
          exitg2 = false;
          while ((!exitg2) && (xy_size < 9)) {
            if (!rtIsNaN(constraintError[xy_size - 1])) {
              trueCount = xy_size;
              exitg2 = true;
            } else {
              xy_size++;
            }
          }
        }

        if (trueCount == 0) {
          trueCount = 1;
        } else {
          count = constraintError[trueCount - 1];
          for (xy_size = trueCount; xy_size + 1 < 9; xy_size++) {
            if (count < constraintError[xy_size]) {
              count = constraintError[xy_size];
              trueCount = xy_size + 1;
            }
          }
        }

        /* 'controlAllocQPQuick:114' ~ */
        /* 'controlAllocQPQuick:115' if index < 5 */
        if (trueCount < 5) {
          /* 'controlAllocQPQuick:116' y_state(index) = 1; */
          y_state_init[trueCount - 1] = 1.0;
        } else {
          /* 'controlAllocQPQuick:117' else */
          /* 'controlAllocQPQuick:118' y_state(index-4) = -1; */
          y_state_init[trueCount - 5] = -1.0;
        }
      }

      iter++;
    }
  }

  /* 'controlAllocQPQuick:136' optimal = solution; */
  *optimal = solution;
}

/* Function for MATLAB Function: '<S8>/control allocator' */
void URControlModelClass::URControl_sqrt(real_T x[4])
{
  x[0] = std::sqrt(x[0]);
  x[1] = std::sqrt(x[1]);
  x[2] = std::sqrt(x[2]);
  x[3] = std::sqrt(x[3]);
}

/* Function for MATLAB Function: '<S8>/control allocator' */
real_T URControlModelClass::URControl_sum(const real_T x[4])
{
  return ((x[0] + x[1]) + x[2]) + x[3];
}

/* Function for MATLAB Function: '<S8>/control allocator' */
real_T URControlModelClass::URControl_eps(real_T x)
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

/* Function for MATLAB Function: '<S8>/control allocator' */
real_T URControlModelClass::URControl_xnrm2(int32_T n, const real_T x[16],
  int32_T ix0)
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

/* Function for MATLAB Function: '<S8>/control allocator' */
real_T URControlModelClass::URControl_xnrm2_f(int32_T n, const real_T x[4],
  int32_T ix0)
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

/* Function for MATLAB Function: '<S8>/control allocator' */
void URControlModelClass::URControl_xaxpy_hq(int32_T n, real_T a, const real_T
  x[4], int32_T ix0, real_T y[16], int32_T iy0)
{
  int32_T ix;
  int32_T iy;
  int32_T k;
  if (!(a == 0.0)) {
    ix = ix0 - 1;
    iy = iy0 - 1;
    for (k = 0; k < n; k++) {
      y[iy] += a * x[ix];
      ix++;
      iy++;
    }
  }
}

/* Function for MATLAB Function: '<S8>/control allocator' */
void URControlModelClass::URControl_xaxpy_h(int32_T n, real_T a, const real_T x
  [16], int32_T ix0, real_T y[4], int32_T iy0)
{
  int32_T ix;
  int32_T iy;
  int32_T k;
  if (!(a == 0.0)) {
    ix = ix0 - 1;
    iy = iy0 - 1;
    for (k = 0; k < n; k++) {
      y[iy] += a * x[ix];
      ix++;
      iy++;
    }
  }
}

/* Function for MATLAB Function: '<S8>/control allocator' */
real_T URControlModelClass::URControl_xdotc(int32_T n, const real_T x[16],
  int32_T ix0, const real_T y[16], int32_T iy0)
{
  real_T d;
  int32_T ix;
  int32_T iy;
  int32_T k;
  d = 0.0;
  ix = ix0;
  iy = iy0;
  for (k = 0; k < n; k++) {
    d += x[ix - 1] * y[iy - 1];
    ix++;
    iy++;
  }

  return d;
}

/* Function for MATLAB Function: '<S8>/control allocator' */
void URControlModelClass::URControl_xaxpy(int32_T n, real_T a, int32_T ix0,
  real_T y[16], int32_T iy0)
{
  int32_T ix;
  int32_T iy;
  int32_T k;
  if (!(a == 0.0)) {
    ix = ix0 - 1;
    iy = iy0 - 1;
    for (k = 0; k < n; k++) {
      y[iy] += a * y[ix];
      ix++;
      iy++;
    }
  }
}

/* Function for MATLAB Function: '<S8>/control allocator' */
void URControlModelClass::URControl_xscal(real_T a, real_T x[16], int32_T ix0)
{
  int32_T k;
  for (k = ix0; k <= ix0 + 3; k++) {
    x[k - 1] *= a;
  }
}

/* Function for MATLAB Function: '<S8>/control allocator' */
void URControlModelClass::URControl_xswap(real_T x[16], int32_T ix0, int32_T iy0)
{
  int32_T ix;
  int32_T iy;
  real_T temp;
  ix = ix0 - 1;
  iy = iy0 - 1;
  temp = x[ix];
  x[ix] = x[iy];
  x[iy] = temp;
  ix++;
  iy++;
  temp = x[ix];
  x[ix] = x[iy];
  x[iy] = temp;
  ix++;
  iy++;
  temp = x[ix];
  x[ix] = x[iy];
  x[iy] = temp;
  ix++;
  iy++;
  temp = x[ix];
  x[ix] = x[iy];
  x[iy] = temp;
}

/* Function for MATLAB Function: '<S8>/control allocator' */
void URControlModelClass::URControl_xrotg(real_T *a, real_T *b, real_T *c,
  real_T *s)
{
  real_T roe;
  real_T absa;
  real_T absb;
  real_T scale;
  real_T ads;
  real_T bds;
  roe = *b;
  absa = std::abs(*a);
  absb = std::abs(*b);
  if (absa > absb) {
    roe = *a;
  }

  scale = absa + absb;
  if (scale == 0.0) {
    *s = 0.0;
    *c = 1.0;
    absa = 0.0;
  } else {
    ads = absa / scale;
    bds = absb / scale;
    scale *= std::sqrt(ads * ads + bds * bds);
    if (roe < 0.0) {
      scale = -scale;
    }

    *c = *a / scale;
    *s = *b / scale;
    if (absa > absb) {
      absa = *s;
    } else if (*c != 0.0) {
      absa = 1.0 / *c;
    } else {
      absa = 1.0;
    }
  }

  *a = scale;
  *b = absa;
}

/* Function for MATLAB Function: '<S8>/control allocator' */
void URControlModelClass::URControl_xrot(real_T x[16], int32_T ix0, int32_T iy0,
  real_T c, real_T s)
{
  int32_T ix;
  int32_T iy;
  real_T temp;
  ix = ix0 - 1;
  iy = iy0 - 1;
  temp = c * x[ix] + s * x[iy];
  x[iy] = c * x[iy] - s * x[ix];
  x[ix] = temp;
  iy++;
  ix++;
  temp = c * x[ix] + s * x[iy];
  x[iy] = c * x[iy] - s * x[ix];
  x[ix] = temp;
  iy++;
  ix++;
  temp = c * x[ix] + s * x[iy];
  x[iy] = c * x[iy] - s * x[ix];
  x[ix] = temp;
  iy++;
  ix++;
  temp = c * x[ix] + s * x[iy];
  x[iy] = c * x[iy] - s * x[ix];
  x[ix] = temp;
}

/* Function for MATLAB Function: '<S8>/control allocator' */
void URControlModelClass::URControl_svd(const real_T A[16], real_T U[16], real_T
  s[4], real_T V[16])
{
  real_T b_A[16];
  real_T b_s[4];
  real_T e[4];
  real_T work[4];
  real_T Vf[16];
  int32_T qq;
  boolean_T apply_transform;
  real_T nrm;
  int32_T qjj;
  int32_T qp1jj;
  int32_T m;
  int32_T qp1q;
  real_T rt;
  real_T ztest;
  real_T smm1;
  real_T emm1;
  real_T sqds;
  real_T shift;
  int32_T qq_tmp;
  int32_T exitg1;
  boolean_T exitg2;
  e[0] = 0.0;
  work[0] = 0.0;
  e[1] = 0.0;
  work[1] = 0.0;
  e[2] = 0.0;
  work[2] = 0.0;
  e[3] = 0.0;
  work[3] = 0.0;
  for (m = 0; m < 16; m++) {
    b_A[m] = A[m];
    U[m] = 0.0;
    Vf[m] = 0.0;
  }

  qq = 0;
  apply_transform = false;
  nrm = URControl_xnrm2(4, b_A, 1);
  if (nrm > 0.0) {
    apply_transform = true;
    if (b_A[0] < 0.0) {
      b_s[0] = -nrm;
    } else {
      b_s[0] = nrm;
    }

    if (std::abs(b_s[0]) >= 1.0020841800044864E-292) {
      nrm = 1.0 / b_s[0];
      for (qjj = 0; qjj < 4; qjj++) {
        b_A[qjj] *= nrm;
      }
    } else {
      for (qjj = 0; qjj < 4; qjj++) {
        b_A[qjj] /= b_s[0];
      }
    }

    b_A[0]++;
    b_s[0] = -b_s[0];
  } else {
    b_s[0] = 0.0;
  }

  for (qp1q = 1; qp1q + 1 < 5; qp1q++) {
    qjj = qp1q << 2;
    if (apply_transform) {
      URControl_xaxpy(4, -(URControl_xdotc(4, b_A, 1, b_A, qjj + 1) / b_A[0]), 1,
                      b_A, qjj + 1);
    }

    e[qp1q] = b_A[qjj];
  }

  while (qq + 1 < 5) {
    U[qq] = b_A[qq];
    qq++;
  }

  nrm = URControl_xnrm2_f(3, e, 2);
  if (nrm == 0.0) {
    e[0] = 0.0;
  } else {
    if (e[1] < 0.0) {
      e[0] = -nrm;
    } else {
      e[0] = nrm;
    }

    nrm = e[0];
    if (std::abs(e[0]) >= 1.0020841800044864E-292) {
      nrm = 1.0 / e[0];
      for (qq = 1; qq < 4; qq++) {
        e[qq] *= nrm;
      }
    } else {
      for (qq = 1; qq < 4; qq++) {
        e[qq] /= nrm;
      }
    }

    e[1]++;
    e[0] = -e[0];
    for (qq = 1; qq + 1 < 5; qq++) {
      work[qq] = 0.0;
    }

    for (qq = 1; qq + 1 < 5; qq++) {
      URControl_xaxpy_h(3, e[qq], b_A, (qq << 2) + 2, work, 2);
    }

    for (qq = 1; qq + 1 < 5; qq++) {
      URControl_xaxpy_hq(3, -e[qq] / e[1], work, 2, b_A, (qq << 2) + 2);
    }
  }

  for (qq = 1; qq + 1 < 5; qq++) {
    Vf[qq] = e[qq];
  }

  apply_transform = false;
  nrm = URControl_xnrm2(3, b_A, 6);
  if (nrm > 0.0) {
    apply_transform = true;
    if (b_A[5] < 0.0) {
      b_s[1] = -nrm;
    } else {
      b_s[1] = nrm;
    }

    if (std::abs(b_s[1]) >= 1.0020841800044864E-292) {
      nrm = 1.0 / b_s[1];
      for (qjj = 5; qjj < 8; qjj++) {
        b_A[qjj] *= nrm;
      }
    } else {
      for (qjj = 5; qjj < 8; qjj++) {
        b_A[qjj] /= b_s[1];
      }
    }

    b_A[5]++;
    b_s[1] = -b_s[1];
  } else {
    b_s[1] = 0.0;
  }

  for (qp1q = 2; qp1q + 1 < 5; qp1q++) {
    qjj = (qp1q << 2) + 1;
    if (apply_transform) {
      URControl_xaxpy(3, -(URControl_xdotc(3, b_A, 6, b_A, qjj + 1) / b_A[5]), 6,
                      b_A, qjj + 1);
    }

    e[qp1q] = b_A[qjj];
  }

  for (qq = 1; qq + 1 < 5; qq++) {
    U[qq + 4] = b_A[qq + 4];
  }

  nrm = URControl_xnrm2_f(2, e, 3);
  if (nrm == 0.0) {
    e[1] = 0.0;
  } else {
    if (e[2] < 0.0) {
      e[1] = -nrm;
    } else {
      e[1] = nrm;
    }

    nrm = e[1];
    if (std::abs(e[1]) >= 1.0020841800044864E-292) {
      nrm = 1.0 / e[1];
      for (qq = 2; qq < 4; qq++) {
        e[qq] *= nrm;
      }
    } else {
      for (qq = 2; qq < 4; qq++) {
        e[qq] /= nrm;
      }
    }

    e[2]++;
    e[1] = -e[1];
    for (qq = 2; qq + 1 < 5; qq++) {
      work[qq] = 0.0;
    }

    for (qq = 2; qq + 1 < 5; qq++) {
      URControl_xaxpy_h(2, e[qq], b_A, (qq << 2) + 3, work, 3);
    }

    for (qq = 2; qq + 1 < 5; qq++) {
      URControl_xaxpy_hq(2, -e[qq] / e[2], work, 3, b_A, (qq << 2) + 3);
    }
  }

  for (qq = 2; qq + 1 < 5; qq++) {
    Vf[qq + 4] = e[qq];
  }

  apply_transform = false;
  nrm = URControl_xnrm2(2, b_A, 11);
  if (nrm > 0.0) {
    apply_transform = true;
    if (b_A[10] < 0.0) {
      b_s[2] = -nrm;
    } else {
      b_s[2] = nrm;
    }

    if (std::abs(b_s[2]) >= 1.0020841800044864E-292) {
      nrm = 1.0 / b_s[2];
      for (qjj = 10; qjj < 12; qjj++) {
        b_A[qjj] *= nrm;
      }
    } else {
      for (qjj = 10; qjj < 12; qjj++) {
        b_A[qjj] /= b_s[2];
      }
    }

    b_A[10]++;
    b_s[2] = -b_s[2];
  } else {
    b_s[2] = 0.0;
  }

  for (qp1q = 3; qp1q + 1 < 5; qp1q++) {
    qjj = (qp1q << 2) + 2;
    if (apply_transform) {
      URControl_xaxpy(2, -(URControl_xdotc(2, b_A, 11, b_A, qjj + 1) / b_A[10]),
                      11, b_A, qjj + 1);
    }

    e[qp1q] = b_A[qjj];
  }

  for (qq = 2; qq + 1 < 5; qq++) {
    U[qq + 8] = b_A[qq + 8];
  }

  m = 2;
  b_s[3] = b_A[15];
  e[2] = b_A[14];
  e[3] = 0.0;
  U[12] = 0.0;
  U[13] = 0.0;
  U[14] = 0.0;
  U[15] = 1.0;
  for (qp1q = 2; qp1q >= 0; qp1q--) {
    qq_tmp = qp1q << 2;
    qq = qq_tmp + qp1q;
    if (b_s[qp1q] != 0.0) {
      for (qp1jj = qp1q + 1; qp1jj + 1 < 5; qp1jj++) {
        qjj = ((qp1jj << 2) + qp1q) + 1;
        URControl_xaxpy(4 - qp1q, -(URControl_xdotc(4 - qp1q, U, qq + 1, U, qjj)
          / U[qq]), qq + 1, U, qjj);
      }

      for (qjj = qp1q; qjj + 1 < 5; qjj++) {
        U[qjj + qq_tmp] = -U[qq_tmp + qjj];
      }

      U[qq]++;
      for (qq = 0; qq < qp1q; qq++) {
        U[qq + qq_tmp] = 0.0;
      }
    } else {
      U[qq_tmp] = 0.0;
      U[1 + qq_tmp] = 0.0;
      U[2 + qq_tmp] = 0.0;
      U[3 + qq_tmp] = 0.0;
      U[qq] = 1.0;
    }
  }

  for (qq = 3; qq >= 0; qq--) {
    if ((qq + 1 <= 2) && (e[qq] != 0.0)) {
      qp1q = ((qq << 2) + qq) + 2;
      for (qjj = qq + 1; qjj + 1 < 5; qjj++) {
        qp1jj = ((qjj << 2) + qq) + 2;
        URControl_xaxpy(3 - qq, -(URControl_xdotc(3 - qq, Vf, qp1q, Vf, qp1jj) /
          Vf[qp1q - 1]), qp1q, Vf, qp1jj);
      }
    }

    Vf[qq << 2] = 0.0;
    Vf[1 + (qq << 2)] = 0.0;
    Vf[2 + (qq << 2)] = 0.0;
    Vf[3 + (qq << 2)] = 0.0;
    Vf[qq + (qq << 2)] = 1.0;
  }

  ztest = e[0];
  if (b_s[0] != 0.0) {
    rt = std::abs(b_s[0]);
    nrm = b_s[0] / rt;
    b_s[0] = rt;
    ztest = e[0] / nrm;
    URControl_xscal(nrm, U, 1);
  }

  if (ztest != 0.0) {
    rt = std::abs(ztest);
    nrm = rt / ztest;
    ztest = rt;
    b_s[1] *= nrm;
    URControl_xscal(nrm, Vf, 5);
  }

  e[0] = ztest;
  ztest = e[1];
  if (b_s[1] != 0.0) {
    rt = std::abs(b_s[1]);
    nrm = b_s[1] / rt;
    b_s[1] = rt;
    ztest = e[1] / nrm;
    URControl_xscal(nrm, U, 5);
  }

  if (ztest != 0.0) {
    rt = std::abs(ztest);
    nrm = rt / ztest;
    ztest = rt;
    b_s[2] *= nrm;
    URControl_xscal(nrm, Vf, 9);
  }

  e[1] = ztest;
  ztest = b_A[14];
  if (b_s[2] != 0.0) {
    rt = std::abs(b_s[2]);
    nrm = b_s[2] / rt;
    b_s[2] = rt;
    ztest = b_A[14] / nrm;
    URControl_xscal(nrm, U, 9);
  }

  if (ztest != 0.0) {
    rt = std::abs(ztest);
    nrm = rt / ztest;
    ztest = rt;
    b_s[3] = b_A[15] * nrm;
    URControl_xscal(nrm, Vf, 13);
  }

  e[2] = ztest;
  if (b_s[3] != 0.0) {
    rt = std::abs(b_s[3]);
    nrm = b_s[3] / rt;
    b_s[3] = rt;
    URControl_xscal(nrm, U, 13);
  }

  e[3] = 0.0;
  qq = 0;
  if ((b_s[0] > e[0]) || rtIsNaN(e[0])) {
    nrm = b_s[0];
  } else {
    nrm = e[0];
  }

  if ((b_s[1] > e[1]) || rtIsNaN(e[1])) {
    rt = b_s[1];
  } else {
    rt = e[1];
  }

  if ((!(nrm > rt)) && (!rtIsNaN(rt))) {
    nrm = rt;
  }

  if ((b_s[2] > ztest) || rtIsNaN(ztest)) {
    ztest = b_s[2];
  }

  if ((!(nrm > ztest)) && (!rtIsNaN(ztest))) {
    nrm = ztest;
  }

  if (b_s[3] > 0.0) {
    rt = b_s[3];
  } else {
    rt = 0.0;
  }

  if ((!(nrm > rt)) && (!rtIsNaN(rt))) {
    nrm = rt;
  }

  while ((m + 2 > 0) && (qq < 75)) {
    qp1jj = m + 1;
    do {
      exitg1 = 0;
      qp1q = qp1jj;
      if (qp1jj == 0) {
        exitg1 = 1;
      } else {
        rt = std::abs(e[qp1jj - 1]);
        if ((rt <= (std::abs(b_s[qp1jj - 1]) + std::abs(b_s[qp1jj])) *
             2.2204460492503131E-16) || ((rt <= 1.0020841800044864E-292) || ((qq
               > 20) && (rt <= 2.2204460492503131E-16 * nrm)))) {
          e[qp1jj - 1] = 0.0;
          exitg1 = 1;
        } else {
          qp1jj--;
        }
      }
    } while (exitg1 == 0);

    if (m + 1 == qp1jj) {
      qp1jj = 4;
    } else {
      qjj = m + 2;
      qq_tmp = m + 2;
      exitg2 = false;
      while ((!exitg2) && (qq_tmp >= qp1jj)) {
        qjj = qq_tmp;
        if (qq_tmp == qp1jj) {
          exitg2 = true;
        } else {
          rt = 0.0;
          if (qq_tmp < m + 2) {
            rt = std::abs(e[qq_tmp - 1]);
          }

          if (qq_tmp > qp1jj + 1) {
            rt += std::abs(e[qq_tmp - 2]);
          }

          ztest = std::abs(b_s[qq_tmp - 1]);
          if ((ztest <= 2.2204460492503131E-16 * rt) || (ztest <=
               1.0020841800044864E-292)) {
            b_s[qq_tmp - 1] = 0.0;
            exitg2 = true;
          } else {
            qq_tmp--;
          }
        }
      }

      if (qjj == qp1jj) {
        qp1jj = 3;
      } else if (m + 2 == qjj) {
        qp1jj = 1;
      } else {
        qp1jj = 2;
        qp1q = qjj;
      }
    }

    switch (qp1jj) {
     case 1:
      rt = e[m];
      e[m] = 0.0;
      for (qjj = m; qjj + 1 >= qp1q + 1; qjj--) {
        URControl_xrotg(&b_s[qjj], &rt, &ztest, &sqds);
        if (qjj + 1 > qp1q + 1) {
          emm1 = e[qjj - 1];
          rt = emm1 * -sqds;
          e[qjj - 1] = emm1 * ztest;
        }

        URControl_xrot(Vf, 1 + (qjj << 2), 1 + ((m + 1) << 2), ztest, sqds);
      }
      break;

     case 2:
      rt = e[qp1q - 1];
      e[qp1q - 1] = 0.0;
      for (qjj = qp1q; qjj < m + 2; qjj++) {
        URControl_xrotg(&b_s[qjj], &rt, &ztest, &sqds);
        rt = -sqds * e[qjj];
        e[qjj] *= ztest;
        URControl_xrot(U, 1 + (qjj << 2), 1 + ((qp1q - 1) << 2), ztest, sqds);
      }
      break;

     case 3:
      rt = b_s[m + 1];
      ztest = std::abs(rt);
      sqds = std::abs(b_s[m]);
      if ((ztest > sqds) || rtIsNaN(sqds)) {
        sqds = ztest;
      }

      ztest = std::abs(e[m]);
      if ((sqds > ztest) || rtIsNaN(ztest)) {
        ztest = sqds;
      }

      sqds = std::abs(b_s[qp1q]);
      if ((ztest > sqds) || rtIsNaN(sqds)) {
        sqds = ztest;
      }

      ztest = std::abs(e[qp1q]);
      if ((sqds > ztest) || rtIsNaN(ztest)) {
        ztest = sqds;
      }

      rt /= ztest;
      smm1 = b_s[m] / ztest;
      emm1 = e[m] / ztest;
      sqds = b_s[qp1q] / ztest;
      smm1 = ((smm1 + rt) * (smm1 - rt) + emm1 * emm1) / 2.0;
      emm1 *= rt;
      emm1 *= emm1;
      if ((smm1 != 0.0) || (emm1 != 0.0)) {
        shift = std::sqrt(smm1 * smm1 + emm1);
        if (smm1 < 0.0) {
          shift = -shift;
        }

        shift = emm1 / (smm1 + shift);
      } else {
        shift = 0.0;
      }

      rt = (sqds + rt) * (sqds - rt) + shift;
      ztest = e[qp1q] / ztest * sqds;
      for (qjj = qp1q + 1; qjj <= m + 1; qjj++) {
        URControl_xrotg(&rt, &ztest, &sqds, &smm1);
        if (qjj > qp1q + 1) {
          e[qjj - 2] = rt;
        }

        emm1 = e[qjj - 1];
        ztest = b_s[qjj - 1];
        rt = ztest * sqds + emm1 * smm1;
        e[qjj - 1] = emm1 * sqds - ztest * smm1;
        ztest = smm1 * b_s[qjj];
        b_s[qjj] *= sqds;
        URControl_xrot(Vf, 1 + ((qjj - 1) << 2), 1 + (qjj << 2), sqds, smm1);
        URControl_xrotg(&rt, &ztest, &sqds, &smm1);
        b_s[qjj - 1] = rt;
        emm1 = e[qjj - 1];
        rt = emm1 * sqds + smm1 * b_s[qjj];
        b_s[qjj] = emm1 * -smm1 + sqds * b_s[qjj];
        ztest = smm1 * e[qjj];
        e[qjj] *= sqds;
        URControl_xrot(U, 1 + ((qjj - 1) << 2), 1 + (qjj << 2), sqds, smm1);
      }

      e[m] = rt;
      qq++;
      break;

     default:
      if (b_s[qp1q] < 0.0) {
        b_s[qp1q] = -b_s[qp1q];
        URControl_xscal(-1.0, Vf, 1 + (qp1q << 2));
      }

      qq = qp1q + 1;
      while ((qp1q + 1 < 4) && (b_s[qp1q] < b_s[qq])) {
        rt = b_s[qp1q];
        b_s[qp1q] = b_s[qq];
        b_s[qq] = rt;
        URControl_xswap(Vf, 1 + (qp1q << 2), 1 + ((qp1q + 1) << 2));
        URControl_xswap(U, 1 + (qp1q << 2), 1 + ((qp1q + 1) << 2));
        qp1q = qq;
        qq++;
      }

      qq = 0;
      m--;
      break;
    }
  }

  for (m = 0; m < 4; m++) {
    s[m] = b_s[m];
    qq = m << 2;
    V[qq] = Vf[qq];
    V[1 + qq] = Vf[qq + 1];
    V[2 + qq] = Vf[qq + 2];
    V[3 + qq] = Vf[qq + 3];
  }
}

/* Function for MATLAB Function: '<S8>/control allocator' */
void URControlModelClass::URControl_pinv(const real_T A[16], real_T X[16])
{
  real_T V[16];
  int32_T vcol;
  real_T U[16];
  real_T s[4];
  real_T tol;
  int32_T j;
  boolean_T b_p;
  int32_T ar;
  int32_T ia;
  int32_T b_ic;
  int32_T r;
  b_p = true;
  for (r = 0; r < 16; r++) {
    X[r] = 0.0;
    if (b_p && ((!rtIsInf(A[r])) && (!rtIsNaN(A[r])))) {
    } else {
      b_p = false;
    }
  }

  if (!b_p) {
    for (ar = 0; ar < 16; ar++) {
      X[ar] = (rtNaN);
    }
  } else {
    URControl_svd(A, U, s, V);
    tol = 4.0 * URControl_eps(s[0]);
    r = -1;
    vcol = 0;
    while ((vcol < 4) && (s[vcol] > tol)) {
      r++;
      vcol++;
    }

    if (r + 1 > 0) {
      vcol = 0;
      for (j = 0; j <= r; j++) {
        tol = 1.0 / s[j];
        for (ar = vcol; ar < vcol + 4; ar++) {
          V[ar] *= tol;
        }

        vcol += 4;
      }

      for (j = 0; j < 4; j++) {
        X[j] = 0.0;
      }

      for (j = 4; j < 8; j++) {
        X[j] = 0.0;
      }

      for (j = 8; j < 12; j++) {
        X[j] = 0.0;
      }

      for (j = 12; j < 16; j++) {
        X[j] = 0.0;
      }

      ar = -1;
      r <<= 2;
      vcol = r + 1;
      for (j = 1; j <= vcol; j += 4) {
        ia = ar;
        for (b_ic = 0; b_ic < 4; b_ic++) {
          ia++;
          X[b_ic] += U[j - 1] * V[ia];
        }

        ar += 4;
      }

      ar = -1;
      vcol = r + 2;
      for (j = 2; j <= vcol; j += 4) {
        ia = ar;
        for (b_ic = 4; b_ic < 8; b_ic++) {
          ia++;
          X[b_ic] += U[j - 1] * V[ia];
        }

        ar += 4;
      }

      ar = -1;
      vcol = r + 3;
      for (j = 3; j <= vcol; j += 4) {
        ia = ar;
        for (b_ic = 8; b_ic < 12; b_ic++) {
          ia++;
          X[b_ic] += U[j - 1] * V[ia];
        }

        ar += 4;
      }

      ar = -1;
      vcol = r + 4;
      for (j = 4; j <= vcol; j += 4) {
        ia = ar;
        for (b_ic = 12; b_ic < 16; b_ic++) {
          ia++;
          X[b_ic] += U[j - 1] * V[ia];
        }

        ar += 4;
      }
    }
  }
}

/*
 * Function for MATLAB Function: '<S8>/control allocator'
 * function [w_cmd]  = URINDI_allocator(act_fail_id, Omega_f_dot, accel_z_f, v, G, G_kal, w_f, par)
 */
void URControlModelClass::URControl_URINDI_allocator(real_T act_fail_id, const
  real_T Omega_f_dot[3], real_T accel_z_f, const real_T v[4], real_T G[32],
  const real_T w_f[4], real_T b_par_w_max, real_T b_par_w_min, real_T w_cmd[4])
{
  real_T G1[16];
  boolean_T fail_flag;
  real32_T fail_id_vec_data[2];
  real_T G_pinv[16];
  real_T du[4];
  int8_T i_up_data[4];
  int32_T b_data[2];
  boolean_T tf;
  boolean_T p;
  int8_T ii_data[4];
  int32_T idx;
  int32_T b_ii;
  real_T v_0[4];
  int32_T fail_id_vec_size_idx_1;
  real_T v_idx_0;
  real_T v_idx_1;
  real_T v_idx_2;
  real_T v_idx_3;
  real_T du_0;
  int32_T du_tmp;
  boolean_T exitg1;

  /* 'URINDI_allocator:22' if isempty(du_last) */
  /* 'URINDI_allocator:27' G = G*1e-3; */
  for (b_ii = 0; b_ii < 32; b_ii++) {
    G[b_ii] *= 0.001;
  }

  /* 'URINDI_allocator:30' G1 = G(:, 1:4); */
  for (b_ii = 0; b_ii < 4; b_ii++) {
    idx = b_ii << 2;
    G1[idx] = G[idx];
    G1[1 + idx] = G[idx + 1];
    G1[2 + idx] = G[idx + 2];
    G1[3 + idx] = G[idx + 3];
  }

  /* 'URINDI_allocator:31' G2 = G(:, 5:8); */
  /* 'URINDI_allocator:35' fail_flag = true; */
  fail_flag = true;

  /* 'URINDI_allocator:39' if act_fail_id == 13 */
  if (act_fail_id == 13.0) {
    /* 'URINDI_allocator:40' fail_id_vec = single([1 3]); */
    fail_id_vec_size_idx_1 = 2;
    fail_id_vec_data[0] = 1.0F;
    fail_id_vec_data[1] = 3.0F;
  } else if (act_fail_id == 24.0) {
    /* 'URINDI_allocator:41' elseif act_fail_id == 24 */
    /* 'URINDI_allocator:42' fail_id_vec = single([2 4]); */
    fail_id_vec_size_idx_1 = 2;
    fail_id_vec_data[0] = 2.0F;
    fail_id_vec_data[1] = 4.0F;
  } else {
    tf = false;
    idx = 1;
    exitg1 = false;
    while ((!exitg1) && (idx - 1 < 4)) {
      p = (std::abs((real_T)idx - act_fail_id) < URControl_eps((real_T)idx / 2.0));
      if (p) {
        tf = true;
        exitg1 = true;
      } else {
        idx++;
      }
    }

    if (tf) {
      /* 'URINDI_allocator:43' elseif ismember(act_fail_id, [1 2 3 4]) */
      /* 'URINDI_allocator:44' fail_id_vec = single([act_fail_id]); */
      fail_id_vec_size_idx_1 = 1;
      fail_id_vec_data[0] = (real32_T)act_fail_id;
    } else {
      /* 'URINDI_allocator:45' else */
      /* 'URINDI_allocator:46' fail_id_vec = single(0); */
      fail_id_vec_size_idx_1 = 1;
      fail_id_vec_data[0] = 0.0F;

      /* 'URINDI_allocator:47' fail_flag = false; */
      fail_flag = false;
    }
  }

  /* 'URINDI_allocator:51' dv = v - [Omega_f_dot; accel_z_f]; */
  /* 'URINDI_allocator:53' if fail_flag == true */
  if (fail_flag) {
    /* 'URINDI_allocator:54' G1_shrink = G1; */
    /* 'URINDI_allocator:55' G1_shrink(:,fail_id_vec) = 0; */
    for (b_ii = 0; b_ii < fail_id_vec_size_idx_1; b_ii++) {
      b_data[b_ii] = (int32_T)fail_id_vec_data[b_ii];
    }

    for (b_ii = 0; b_ii < fail_id_vec_size_idx_1; b_ii++) {
      idx = (b_data[b_ii] - 1) << 2;
      G1[idx] = 0.0;
      G1[1 + idx] = 0.0;
      G1[2 + idx] = 0.0;
      G1[3 + idx] = 0.0;
    }

    /* 'URINDI_allocator:56' G1_shrink(3,:) = 0; */
    G1[2] = 0.0;
    G1[6] = 0.0;
    G1[10] = 0.0;
    G1[14] = 0.0;

    /* 'URINDI_allocator:57' G_pinv = pinv(G1_shrink); */
    URControl_pinv(G1, G_pinv);

    /* 'URINDI_allocator:58' du = G_pinv*(dv); */
    v_idx_0 = v[0] - Omega_f_dot[0];
    v_idx_1 = v[1] - Omega_f_dot[1];
    v_idx_2 = v[2] - Omega_f_dot[2];
    v_idx_3 = v[3] - accel_z_f;
    for (b_ii = 0; b_ii < 4; b_ii++) {
      du_0 = G_pinv[b_ii + 12] * v_idx_3 + (G_pinv[b_ii + 8] * v_idx_2 +
        (G_pinv[b_ii + 4] * v_idx_1 + G_pinv[b_ii] * v_idx_0));
      du[b_ii] = du_0;
    }
  } else {
    /* 'URINDI_allocator:59' else */
    /* 'URINDI_allocator:61' G_pinv = pinv(G1 + G2); */
    for (b_ii = 0; b_ii < 4; b_ii++) {
      idx = b_ii << 2;
      fail_id_vec_size_idx_1 = (4 + b_ii) << 2;
      G1[idx] = G[fail_id_vec_size_idx_1] + G[idx];
      G1[1 + idx] = G[fail_id_vec_size_idx_1 + 1] + G[idx + 1];
      G1[2 + idx] = G[fail_id_vec_size_idx_1 + 2] + G[idx + 2];
      G1[3 + idx] = G[fail_id_vec_size_idx_1 + 3] + G[idx + 3];
    }

    URControl_pinv(G1, G_pinv);

    /* 'URINDI_allocator:62' du = G_pinv*(dv + G2*du_last); */
    du[0] = Omega_f_dot[0];
    du[1] = Omega_f_dot[1];
    du[2] = Omega_f_dot[2];
    du[3] = accel_z_f;
    for (b_ii = 0; b_ii < 4; b_ii++) {
      v_0[b_ii] = (((G[b_ii + 16] * URControl_DW.du_last[0] + G[b_ii + 20] *
                     URControl_DW.du_last[1]) + G[b_ii + 24] *
                    URControl_DW.du_last[2]) + G[b_ii + 28] *
                   URControl_DW.du_last[3]) + (v[b_ii] - du[b_ii]);
    }

    for (b_ii = 0; b_ii < 4; b_ii++) {
      du_0 = G_pinv[b_ii + 12] * v_0[3] + (G_pinv[b_ii + 8] * v_0[2] +
        (G_pinv[b_ii + 4] * v_0[1] + G_pinv[b_ii] * v_0[0]));
      du[b_ii] = du_0;
    }
  }

  /* 'URINDI_allocator:66' w_cmd = w_f + du; */
  w_cmd[0] = w_f[0] + du[0];
  w_cmd[1] = w_f[1] + du[1];
  w_cmd[2] = w_f[2] + du[2];
  w_cmd[3] = w_f[3] + du[3];

  /* 'URINDI_allocator:69' w_max = par.w_max; */
  /* 'URINDI_allocator:70' w_min = par.w_min; */
  /* 'URINDI_allocator:72' i_up = find(w_cmd>=w_max); */
  idx = 0;
  b_ii = 0;
  exitg1 = false;
  while ((!exitg1) && (b_ii < 4)) {
    if (w_cmd[b_ii] >= b_par_w_max) {
      idx++;
      ii_data[idx - 1] = (int8_T)(b_ii + 1);
      if (idx >= 4) {
        exitg1 = true;
      } else {
        b_ii++;
      }
    } else {
      b_ii++;
    }
  }

  if (1 > idx) {
    idx = 0;
  }

  fail_id_vec_size_idx_1 = idx;
  if (0 <= idx - 1) {
    memcpy(&i_up_data[0], &ii_data[0], idx * sizeof(int8_T));
  }

  /* 'URINDI_allocator:73' i_down = find(w_cmd<w_min); */
  idx = 0;
  b_ii = 0;
  exitg1 = false;
  while ((!exitg1) && (b_ii < 4)) {
    if (w_cmd[b_ii] < b_par_w_min) {
      idx++;
      ii_data[idx - 1] = (int8_T)(b_ii + 1);
      if (idx >= 4) {
        exitg1 = true;
      } else {
        b_ii++;
      }
    } else {
      b_ii++;
    }
  }

  if (1 > idx) {
    idx = 0;
  }

  /* 'URINDI_allocator:75' du(i_up) = w_max - w_f(i_up); */
  for (b_ii = 0; b_ii < fail_id_vec_size_idx_1; b_ii++) {
    du_tmp = i_up_data[b_ii] - 1;
    du[du_tmp] = b_par_w_max - w_f[du_tmp];
  }

  /* 'URINDI_allocator:76' du(i_down) =  w_min - w_f(i_down); */
  for (b_ii = 0; b_ii < idx; b_ii++) {
    du_tmp = ii_data[b_ii] - 1;
    du[du_tmp] = b_par_w_min - w_f[du_tmp];
  }

  /* 'URINDI_allocator:78' w_cmd(i_up) = w_max; */
  for (b_ii = 0; b_ii < fail_id_vec_size_idx_1; b_ii++) {
    w_cmd[i_up_data[b_ii] - 1] = b_par_w_max;
  }

  /* 'URINDI_allocator:79' w_cmd(i_down) = w_min; */
  for (b_ii = 0; b_ii < idx; b_ii++) {
    w_cmd[ii_data[b_ii] - 1] = b_par_w_min;
  }

  /* 'URINDI_allocator:81' du_last = du; */
  URControl_DW.du_last[0] = du[0];
  URControl_DW.du_last[1] = du[1];
  URControl_DW.du_last[2] = du[2];
  URControl_DW.du_last[3] = du[3];
}

/*
 * Function for MATLAB Function: '<S37>/Predict'
 * function A = ekf_state_jacob(x,u)
 */
void URControlModelClass::URControl_ekf_state_jacob(const real_T x[10], const
  real_T u[6], real_T A[100])
{
  static const real_T b[10] = { 1.0, 0.0, 0.0, 0.002, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0 };

  static const real_T c[10] = { 0.0, 1.0, 0.0, 0.0, 0.002, 0.0, 0.0, 0.0, 0.0,
    0.0 };

  static const real_T d[10] = { 0.0, 0.0, 1.0, 0.0, 0.0, 0.002, 0.0, 0.0, 0.0,
    0.0 };

  int32_T i;
  real_T a_tmp;
  real_T b_a_tmp;
  real_T c_a_tmp;
  real_T d_a_tmp;
  real_T A_tmp;
  real_T A_tmp_0;
  real_T A_tmp_1;
  real_T A_tmp_2;
  real_T A_tmp_3;
  real_T A_tmp_tmp;
  real_T d_a_tmp_tmp;
  real_T a_tmp_tmp;
  real_T b_a_tmp_tmp;
  real_T c_a_tmp_tmp;

  /* 'ekf_state_jacob:7' posx = x(1); */
  /* 'ekf_state_jacob:8' posy = x(2); */
  /* 'ekf_state_jacob:9' posz = x(3); */
  /* 'ekf_state_jacob:11' velx = x(4); */
  /* 'ekf_state_jacob:12' vely = x(5); */
  /* 'ekf_state_jacob:13' velz = x(6); */
  /* 'ekf_state_jacob:15' q1 = x(7); */
  /* 'ekf_state_jacob:16' q2 = x(8); */
  /* 'ekf_state_jacob:17' q3 = x(9); */
  /* 'ekf_state_jacob:18' q4 = x(10); */
  /* 'ekf_state_jacob:20' accBx = u(1); */
  /* 'ekf_state_jacob:21' accBy = u(2); */
  /* 'ekf_state_jacob:22' accBz = u(3); */
  /* 'ekf_state_jacob:24' omegax = u(4); */
  /* 'ekf_state_jacob:25' omegay = u(5); */
  /* 'ekf_state_jacob:26' omegaz = u(6); */
  /* 'ekf_state_jacob:28' dt = 0.002; */
  /* 'ekf_state_jacob:65' A = ... */
  /* 'ekf_state_jacob:66' [ 1, 0, 0, dt,  0,  0,                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             0,                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               0,                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               0,                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               0; */
  /* 'ekf_state_jacob:67'  0, 1, 0,  0, dt,  0,                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             0,                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               0,                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               0,                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               0; */
  /* 'ekf_state_jacob:68'  0, 0, 1,  0,  0, dt,                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             0,                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               0,                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               0,                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               0; */
  /* 'ekf_state_jacob:69'  0, 0, 0,  1,  0,  0,                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     dt*(2*accBx*q1 - 2*accBy*q4 + 2*accBz*q3),                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       dt*(2*accBx*q2 + 2*accBy*q3 + 2*accBz*q4),                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       dt*(2*accBy*q2 - 2*accBx*q3 + 2*accBz*q1),                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      -dt*(2*accBy*q1 + 2*accBx*q4 - 2*accBz*q2); */
  /* 'ekf_state_jacob:70'  0, 0, 0,  0,  1,  0,                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     dt*(2*accBy*q1 + 2*accBx*q4 - 2*accBz*q2),                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      -dt*(2*accBy*q2 - 2*accBx*q3 + 2*accBz*q1),                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       dt*(2*accBx*q2 + 2*accBy*q3 + 2*accBz*q4),                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       dt*(2*accBx*q1 - 2*accBy*q4 + 2*accBz*q3); */
  /* 'ekf_state_jacob:71'  0, 0, 0,  0,  0,  1,                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     dt*(2*accBy*q2 - 2*accBx*q3 + 2*accBz*q1),                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       dt*(2*accBy*q1 + 2*accBx*q4 - 2*accBz*q2),                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      -dt*(2*accBx*q1 - 2*accBy*q4 + 2*accBz*q3),                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       dt*(2*accBx*q2 + 2*accBy*q3 + 2*accBz*q4); */
  /* 'ekf_state_jacob:72'  0, 0, 0,  0,  0,  0,               1/((q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2))^2 + (q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2))^2 + (q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2))^2 + (q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2))^2)^(1/2) - ((q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2))*(2*q1 - 2*dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2) + dt*omegax*(q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2)) + dt*omegay*(q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2)) + dt*omegaz*(q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2))))/(2*((q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2))^2 + (q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2))^2 + (q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2))^2 + (q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2))^2)^(3/2)), - (dt*omegax)/(2*((q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2))^2 + (q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2))^2 + (q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2))^2 + (q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2))^2)^(1/2)) - ((q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2))*(2*q2 + 2*dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2) - dt*omegax*(q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2)) + dt*omegay*(q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2)) - dt*omegaz*(q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2))))/(2*((q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2))^2 + (q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2))^2 + (q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2))^2 + (q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2))^2)^(3/2)), - (dt*omegay)/(2*((q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2))^2 + (q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2))^2 + (q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2))^2 + (q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2))^2)^(1/2)) - ((q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2))*(2*q3 + 2*dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2) - dt*omegax*(q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2)) - dt*omegay*(q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2)) + dt*omegaz*(q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2))))/(2*((q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2))^2 + (q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2))^2 + (q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2))^2 + (q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2))^2)^(3/2)), - (dt*omegaz)/(2*((q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2))^2 + (q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2))^2 + (q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2))^2 + (q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2))^2)^(1/2)) - ((q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2))*(2*q4 + 2*dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2) + dt*omegax*(q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2)) - dt*omegay*(q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2)) - dt*omegaz*(q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2))))/(2*((q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2))^2 + (q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2))^2 + (q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2))^2 + (q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2))^2)^(3/2)); */
  /* 'ekf_state_jacob:73'  0, 0, 0,  0,  0,  0, (dt*omegax)/(2*((q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2))^2 + (q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2))^2 + (q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2))^2 + (q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2))^2)^(1/2)) - ((q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2))*(2*q1 - 2*dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2) + dt*omegax*(q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2)) + dt*omegay*(q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2)) + dt*omegaz*(q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2))))/(2*((q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2))^2 + (q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2))^2 + (q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2))^2 + (q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2))^2)^(3/2)),                 1/((q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2))^2 + (q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2))^2 + (q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2))^2 + (q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2))^2)^(1/2) - ((q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2))*(2*q2 + 2*dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2) - dt*omegax*(q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2)) + dt*omegay*(q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2)) - dt*omegaz*(q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2))))/(2*((q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2))^2 + (q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2))^2 + (q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2))^2 + (q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2))^2)^(3/2)),   (dt*omegaz)/(2*((q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2))^2 + (q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2))^2 + (q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2))^2 + (q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2))^2)^(1/2)) - ((q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2))*(2*q3 + 2*dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2) - dt*omegax*(q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2)) - dt*omegay*(q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2)) + dt*omegaz*(q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2))))/(2*((q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2))^2 + (q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2))^2 + (q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2))^2 + (q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2))^2)^(3/2)), - (dt*omegay)/(2*((q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2))^2 + (q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2))^2 + (q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2))^2 + (q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2))^2)^(1/2)) - ((q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2))*(2*q4 + 2*dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2) + dt*omegax*(q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2)) - dt*omegay*(q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2)) - dt*omegaz*(q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2))))/(2*((q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2))^2 + (q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2))^2 + (q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2))^2 + (q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2))^2)^(3/2)); */
  /* 'ekf_state_jacob:74'  0, 0, 0,  0,  0,  0, (dt*omegay)/(2*((q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2))^2 + (q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2))^2 + (q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2))^2 + (q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2))^2)^(1/2)) - ((q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2))*(2*q1 - 2*dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2) + dt*omegax*(q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2)) + dt*omegay*(q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2)) + dt*omegaz*(q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2))))/(2*((q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2))^2 + (q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2))^2 + (q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2))^2 + (q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2))^2)^(3/2)), - (dt*omegaz)/(2*((q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2))^2 + (q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2))^2 + (q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2))^2 + (q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2))^2)^(1/2)) - ((q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2))*(2*q2 + 2*dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2) - dt*omegax*(q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2)) + dt*omegay*(q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2)) - dt*omegaz*(q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2))))/(2*((q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2))^2 + (q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2))^2 + (q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2))^2 + (q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2))^2)^(3/2)),                 1/((q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2))^2 + (q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2))^2 + (q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2))^2 + (q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2))^2)^(1/2) - ((q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2))*(2*q3 + 2*dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2) - dt*omegax*(q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2)) - dt*omegay*(q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2)) + dt*omegaz*(q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2))))/(2*((q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2))^2 + (q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2))^2 + (q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2))^2 + (q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2))^2)^(3/2)),   (dt*omegax)/(2*((q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2))^2 + (q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2))^2 + (q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2))^2 + (q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2))^2)^(1/2)) - ((q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2))*(2*q4 + 2*dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2) + dt*omegax*(q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2)) - dt*omegay*(q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2)) - dt*omegaz*(q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2))))/(2*((q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2))^2 + (q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2))^2 + (q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2))^2 + (q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2))^2)^(3/2)); */
  /* 'ekf_state_jacob:75'  0, 0, 0,  0,  0,  0, (dt*omegaz)/(2*((q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2))^2 + (q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2))^2 + (q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2))^2 + (q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2))^2)^(1/2)) - ((q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2))*(2*q1 - 2*dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2) + dt*omegax*(q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2)) + dt*omegay*(q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2)) + dt*omegaz*(q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2))))/(2*((q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2))^2 + (q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2))^2 + (q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2))^2 + (q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2))^2)^(3/2)),   (dt*omegay)/(2*((q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2))^2 + (q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2))^2 + (q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2))^2 + (q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2))^2)^(1/2)) - ((q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2))*(2*q2 + 2*dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2) - dt*omegax*(q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2)) + dt*omegay*(q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2)) - dt*omegaz*(q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2))))/(2*((q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2))^2 + (q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2))^2 + (q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2))^2 + (q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2))^2)^(3/2)), - (dt*omegax)/(2*((q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2))^2 + (q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2))^2 + (q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2))^2 + (q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2))^2)^(1/2)) - ((q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2))*(2*q3 + 2*dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2) - dt*omegax*(q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2)) - dt*omegay*(q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2)) + dt*omegaz*(q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2))))/(2*((q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2))^2 + (q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2))^2 + (q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2))^2 + (q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2))^2)^(3/2)),                 1/((q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2))^2 + (q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2))^2 + (q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2))^2 + (q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2))^2)^(1/2) - ((q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2))*(2*q4 + 2*dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2) + dt*omegax*(q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2)) - dt*omegay*(q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2)) - dt*omegaz*(q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2))))/(2*((q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2))^2 + (q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2))^2 + (q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2))^2 + (q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2))^2)^(3/2))]; */
  a_tmp_tmp = (u[3] * x[6] / 2.0 - u[4] * x[9] / 2.0) + u[5] * x[8] / 2.0;
  a_tmp = a_tmp_tmp * 0.002 + x[7];
  b_a_tmp_tmp = (u[4] * x[6] / 2.0 + u[3] * x[9] / 2.0) - u[5] * x[7] / 2.0;
  b_a_tmp = b_a_tmp_tmp * 0.002 + x[8];
  c_a_tmp_tmp = (u[4] * x[7] / 2.0 - u[3] * x[8] / 2.0) + u[5] * x[6] / 2.0;
  c_a_tmp = c_a_tmp_tmp * 0.002 + x[9];
  d_a_tmp_tmp = (u[3] * x[7] / 2.0 + u[4] * x[8] / 2.0) + u[5] * x[9] / 2.0;
  d_a_tmp = x[6] - d_a_tmp_tmp * 0.002;
  for (i = 0; i < 10; i++) {
    A[10 * i] = b[i];
    A[1 + 10 * i] = c[i];
    A[2 + 10 * i] = d[i];
  }

  A[3] = 0.0;
  A[13] = 0.0;
  A[23] = 0.0;
  A[33] = 1.0;
  A[43] = 0.0;
  A[53] = 0.0;
  A_tmp_tmp = (2.0 * u[0] * x[6] - 2.0 * u[1] * x[9]) + 2.0 * u[2] * x[8];
  A_tmp_2 = A_tmp_tmp * 0.002;
  A[63] = A_tmp_2;
  A_tmp_1 = ((2.0 * u[0] * x[7] + 2.0 * u[1] * x[8]) + 2.0 * u[2] * x[9]) *
    0.002;
  A[73] = A_tmp_1;
  A_tmp_0 = (2.0 * u[1] * x[7] - 2.0 * u[0] * x[8]) + 2.0 * u[2] * x[6];
  A_tmp_3 = A_tmp_0 * 0.002;
  A[83] = A_tmp_3;
  A_tmp = (2.0 * u[1] * x[6] + 2.0 * u[0] * x[9]) - 2.0 * u[2] * x[7];
  A[93] = A_tmp * -0.002;
  A[4] = 0.0;
  A[14] = 0.0;
  A[24] = 0.0;
  A[34] = 0.0;
  A[44] = 1.0;
  A[54] = 0.0;
  A_tmp *= 0.002;
  A[64] = A_tmp;
  A[74] = A_tmp_0 * -0.002;
  A[84] = A_tmp_1;
  A[94] = A_tmp_2;
  A[5] = 0.0;
  A[15] = 0.0;
  A[25] = 0.0;
  A[35] = 0.0;
  A[45] = 0.0;
  A[55] = 1.0;
  A[65] = A_tmp_3;
  A[75] = A_tmp;
  A[85] = A_tmp_tmp * -0.002;
  A[95] = A_tmp_1;
  A[6] = 0.0;
  A[16] = 0.0;
  A[26] = 0.0;
  A[36] = 0.0;
  A[46] = 0.0;
  A[56] = 0.0;
  A_tmp_2 = ((a_tmp * (0.002 * u[3]) + (2.0 * x[6] - d_a_tmp_tmp * 0.004)) +
             b_a_tmp * (0.002 * u[4])) + c_a_tmp * (0.002 * u[5]);
  A[66] = 1.0 / std::sqrt(((a_tmp * a_tmp + b_a_tmp * b_a_tmp) + c_a_tmp *
    c_a_tmp) + d_a_tmp * d_a_tmp) - A_tmp_2 * d_a_tmp / (rt_powd_snf(((a_tmp *
    a_tmp + b_a_tmp * b_a_tmp) + c_a_tmp * c_a_tmp) + d_a_tmp * d_a_tmp, 1.5) *
    2.0);
  A_tmp_1 = (((a_tmp_tmp * 0.004 + 2.0 * x[7]) - d_a_tmp * (0.002 * u[3])) +
             c_a_tmp * (0.002 * u[4])) - b_a_tmp * (0.002 * u[5]);
  A[76] = -(0.002 * u[3]) / (std::sqrt(((a_tmp * a_tmp + b_a_tmp * b_a_tmp) +
    c_a_tmp * c_a_tmp) + d_a_tmp * d_a_tmp) * 2.0) - A_tmp_1 * d_a_tmp /
    (rt_powd_snf(((a_tmp * a_tmp + b_a_tmp * b_a_tmp) + c_a_tmp * c_a_tmp) +
                 d_a_tmp * d_a_tmp, 1.5) * 2.0);
  A_tmp_0 = (((b_a_tmp_tmp * 0.004 + 2.0 * x[8]) - c_a_tmp * (0.002 * u[3])) -
             d_a_tmp * (0.002 * u[4])) + a_tmp * (0.002 * u[5]);
  A[86] = -(0.002 * u[4]) / (std::sqrt(((a_tmp * a_tmp + b_a_tmp * b_a_tmp) +
    c_a_tmp * c_a_tmp) + d_a_tmp * d_a_tmp) * 2.0) - A_tmp_0 * d_a_tmp /
    (rt_powd_snf(((a_tmp * a_tmp + b_a_tmp * b_a_tmp) + c_a_tmp * c_a_tmp) +
                 d_a_tmp * d_a_tmp, 1.5) * 2.0);
  A_tmp_3 = ((b_a_tmp * (0.002 * u[3]) + (c_a_tmp_tmp * 0.004 + 2.0 * x[9])) -
             a_tmp * (0.002 * u[4])) - d_a_tmp * (0.002 * u[5]);
  A[96] = -(0.002 * u[5]) / (std::sqrt(((a_tmp * a_tmp + b_a_tmp * b_a_tmp) +
    c_a_tmp * c_a_tmp) + d_a_tmp * d_a_tmp) * 2.0) - A_tmp_3 * d_a_tmp /
    (rt_powd_snf(((a_tmp * a_tmp + b_a_tmp * b_a_tmp) + c_a_tmp * c_a_tmp) +
                 d_a_tmp * d_a_tmp, 1.5) * 2.0);
  A[7] = 0.0;
  A[17] = 0.0;
  A[27] = 0.0;
  A[37] = 0.0;
  A[47] = 0.0;
  A[57] = 0.0;
  A[67] = 0.002 * u[3] / (std::sqrt(((a_tmp * a_tmp + b_a_tmp * b_a_tmp) +
    c_a_tmp * c_a_tmp) + d_a_tmp * d_a_tmp) * 2.0) - A_tmp_2 * a_tmp /
    (rt_powd_snf(((a_tmp * a_tmp + b_a_tmp * b_a_tmp) + c_a_tmp * c_a_tmp) +
                 d_a_tmp * d_a_tmp, 1.5) * 2.0);
  A[77] = 1.0 / std::sqrt(((a_tmp * a_tmp + b_a_tmp * b_a_tmp) + c_a_tmp *
    c_a_tmp) + d_a_tmp * d_a_tmp) - A_tmp_1 * a_tmp / (rt_powd_snf(((a_tmp *
    a_tmp + b_a_tmp * b_a_tmp) + c_a_tmp * c_a_tmp) + d_a_tmp * d_a_tmp, 1.5) *
    2.0);
  A[87] = 0.002 * u[5] / (std::sqrt(((a_tmp * a_tmp + b_a_tmp * b_a_tmp) +
    c_a_tmp * c_a_tmp) + d_a_tmp * d_a_tmp) * 2.0) - A_tmp_0 * a_tmp /
    (rt_powd_snf(((a_tmp * a_tmp + b_a_tmp * b_a_tmp) + c_a_tmp * c_a_tmp) +
                 d_a_tmp * d_a_tmp, 1.5) * 2.0);
  A[97] = -(0.002 * u[4]) / (std::sqrt(((a_tmp * a_tmp + b_a_tmp * b_a_tmp) +
    c_a_tmp * c_a_tmp) + d_a_tmp * d_a_tmp) * 2.0) - A_tmp_3 * a_tmp /
    (rt_powd_snf(((a_tmp * a_tmp + b_a_tmp * b_a_tmp) + c_a_tmp * c_a_tmp) +
                 d_a_tmp * d_a_tmp, 1.5) * 2.0);
  A[8] = 0.0;
  A[18] = 0.0;
  A[28] = 0.0;
  A[38] = 0.0;
  A[48] = 0.0;
  A[58] = 0.0;
  A[68] = 0.002 * u[4] / (std::sqrt(((a_tmp * a_tmp + b_a_tmp * b_a_tmp) +
    c_a_tmp * c_a_tmp) + d_a_tmp * d_a_tmp) * 2.0) - A_tmp_2 * b_a_tmp /
    (rt_powd_snf(((a_tmp * a_tmp + b_a_tmp * b_a_tmp) + c_a_tmp * c_a_tmp) +
                 d_a_tmp * d_a_tmp, 1.5) * 2.0);
  A[78] = -(0.002 * u[5]) / (std::sqrt(((a_tmp * a_tmp + b_a_tmp * b_a_tmp) +
    c_a_tmp * c_a_tmp) + d_a_tmp * d_a_tmp) * 2.0) - A_tmp_1 * b_a_tmp /
    (rt_powd_snf(((a_tmp * a_tmp + b_a_tmp * b_a_tmp) + c_a_tmp * c_a_tmp) +
                 d_a_tmp * d_a_tmp, 1.5) * 2.0);
  A[88] = 1.0 / std::sqrt(((a_tmp * a_tmp + b_a_tmp * b_a_tmp) + c_a_tmp *
    c_a_tmp) + d_a_tmp * d_a_tmp) - A_tmp_0 * b_a_tmp / (rt_powd_snf(((a_tmp *
    a_tmp + b_a_tmp * b_a_tmp) + c_a_tmp * c_a_tmp) + d_a_tmp * d_a_tmp, 1.5) *
    2.0);
  A[98] = 0.002 * u[3] / (std::sqrt(((a_tmp * a_tmp + b_a_tmp * b_a_tmp) +
    c_a_tmp * c_a_tmp) + d_a_tmp * d_a_tmp) * 2.0) - A_tmp_3 * b_a_tmp /
    (rt_powd_snf(((a_tmp * a_tmp + b_a_tmp * b_a_tmp) + c_a_tmp * c_a_tmp) +
                 d_a_tmp * d_a_tmp, 1.5) * 2.0);
  A[9] = 0.0;
  A[19] = 0.0;
  A[29] = 0.0;
  A[39] = 0.0;
  A[49] = 0.0;
  A[59] = 0.0;
  A[69] = 0.002 * u[5] / (std::sqrt(((a_tmp * a_tmp + b_a_tmp * b_a_tmp) +
    c_a_tmp * c_a_tmp) + d_a_tmp * d_a_tmp) * 2.0) - A_tmp_2 * c_a_tmp /
    (rt_powd_snf(((a_tmp * a_tmp + b_a_tmp * b_a_tmp) + c_a_tmp * c_a_tmp) +
                 d_a_tmp * d_a_tmp, 1.5) * 2.0);
  A[79] = 0.002 * u[4] / (std::sqrt(((a_tmp * a_tmp + b_a_tmp * b_a_tmp) +
    c_a_tmp * c_a_tmp) + d_a_tmp * d_a_tmp) * 2.0) - A_tmp_1 * c_a_tmp /
    (rt_powd_snf(((a_tmp * a_tmp + b_a_tmp * b_a_tmp) + c_a_tmp * c_a_tmp) +
                 d_a_tmp * d_a_tmp, 1.5) * 2.0);
  A[89] = -(0.002 * u[3]) / (std::sqrt(((a_tmp * a_tmp + b_a_tmp * b_a_tmp) +
    c_a_tmp * c_a_tmp) + d_a_tmp * d_a_tmp) * 2.0) - A_tmp_0 * c_a_tmp /
    (rt_powd_snf(((a_tmp * a_tmp + b_a_tmp * b_a_tmp) + c_a_tmp * c_a_tmp) +
                 d_a_tmp * d_a_tmp, 1.5) * 2.0);
  A[99] = 1.0 / std::sqrt(((a_tmp * a_tmp + b_a_tmp * b_a_tmp) + c_a_tmp *
    c_a_tmp) + d_a_tmp * d_a_tmp) - A_tmp_3 * c_a_tmp / (rt_powd_snf(((a_tmp *
    a_tmp + b_a_tmp * b_a_tmp) + c_a_tmp * c_a_tmp) + d_a_tmp * d_a_tmp, 1.5) *
    2.0);
}

/* Model step function */
void URControlModelClass::step()
{
  /* local block i/o variables */
  real_T rtb_acc[3];
  real_T rtb_accs_filter[3];
  real_T rtb_n_des[3];
  real_T rtb_DiscreteStateSpace[3];
  stateBus b_State;
  real_T R_IB[9];
  real_T FMin[4];
  int32_T r2;
  int32_T r3;
  int32_T rtemp;
  real_T Mu_max;
  real_T Mu_min;
  real_T Mv_max;
  real_T Mv_min;
  real_T u_max;
  real_T v_max;
  real_T uDot2_min;
  real_T vDot2_min;
  static const int8_T b[3] = { 0, 0, -1 };

  real_T uv_des[2];
  real_T uv_attCtrl[2];
  real_T b_z1[2];
  real_T K[16];
  real_T dHdx[70];
  real_T zEstimated[7];
  real_T qconj[4];
  real_T dummy[4];
  real_T gain[70];
  static const int8_T b_0[10] = { 0, 0, 0, 0, 0, 0, 1, 0, 0, 0 };

  static const int8_T c[10] = { 0, 0, 0, 0, 0, 0, 0, 1, 0, 0 };

  static const int8_T d[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 };

  static const int8_T e[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 };

  real_T Jacobian[100];
  real_T rtb_sincos_o1[3];
  real_T rtb_att[3];
  sensorsBus rtb_BusConversion_InsertedFor_b;
  int32_T i;
  real_T rtb_enableMeas;
  real_T rtb_DataStoreRead_k[10];
  real_T rtb_Product2;
  real_T rtb_fcn5;
  boolean_T rtb_Compare;
  boolean_T rtb_Compare_j;
  real_T rtb_xNew[10];
  real_T rtb_TmpSignalConversionAtSFunct[6];
  real_T tmp[16];
  real_T qconj_0[4];
  real_T b_z1_0[4];
  real_T tmp_0[32];
  real_T tmp_1[3];
  real_T dHdx_0[49];
  real_T rtb_TmpSignalConversionAtSFun_0[4];
  real_T dHdx_1[70];
  real_T rtb_pos_0[7];
  real_T rtb_pos_1[7];
  int16_T tmp_2[16];
  real_T Jacobian_0[100];
  uint32_T tmp_3;
  real_T rtb_pos_idx_0;
  real_T rtb_TmpSignalConversionAtSFun_1;
  real_T rtb_TmpSignalConversionAtSFun_2;
  real_T rtb_TmpSignalConversionAtSFun_3;
  real_T rtb_TmpSignalConversionAtSFun_4;
  real_T rtb_u2_idx_2;
  real_T rtb_u2_idx_0;
  real_T dummy_idx_1;
  real_T dummy_idx_0;
  real_T rtb_precAngle_idx_1;
  real_T u0;
  real_T Iu_tmp;
  boolean_T tmp_4;
  boolean_T tmp_5;
  real_T rtb_Product1_tmp;

  /* DataTypeConversion: '<Root>/Data Type Conversion1' incorporates:
   *  Inport: '<Root>/accs'
   */
  rtb_acc[0] = URControl_U.accs[0];

  /* BusCreator: '<S7>/BusConversion_InsertedFor_basic estimators_at_inport_0' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion5'
   *  Inport: '<Root>/rates'
   */
  rtb_BusConversion_InsertedFor_b.acc[0] = rtb_acc[0];
  rtb_BusConversion_InsertedFor_b.omega[0] = URControl_U.rates[0];

  /* DataTypeConversion: '<Root>/Data Type Conversion1' incorporates:
   *  Inport: '<Root>/accs'
   */
  rtb_acc[1] = URControl_U.accs[1];

  /* BusCreator: '<S7>/BusConversion_InsertedFor_basic estimators_at_inport_0' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion5'
   *  Inport: '<Root>/rates'
   */
  rtb_BusConversion_InsertedFor_b.acc[1] = rtb_acc[1];
  rtb_BusConversion_InsertedFor_b.omega[1] = URControl_U.rates[1];

  /* DataTypeConversion: '<Root>/Data Type Conversion1' incorporates:
   *  Inport: '<Root>/accs'
   */
  rtb_acc[2] = URControl_U.accs[2];

  /* BusCreator: '<S7>/BusConversion_InsertedFor_basic estimators_at_inport_0' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion5'
   *  Inport: '<Root>/rates'
   */
  rtb_BusConversion_InsertedFor_b.acc[2] = rtb_acc[2];
  rtb_BusConversion_InsertedFor_b.omega[2] = URControl_U.rates[2];

  /* Gain: '<S33>/1//2' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion6'
   *  Inport: '<Root>/att'
   */
  rtb_TmpSignalConversionAtSFun_2 = 0.5 * URControl_U.att[2];

  /* Trigonometry: '<S33>/sincos' */
  dummy_idx_1 = std::sin(rtb_TmpSignalConversionAtSFun_2);
  rtb_DiscreteStateSpace[0] = std::cos(rtb_TmpSignalConversionAtSFun_2);

  /* Fcn: '<S33>/q0' */
  rtb_enableMeas = dummy_idx_1;

  /* Trigonometry: '<S33>/sincos' */
  rtb_sincos_o1[0] = dummy_idx_1;

  /* Gain: '<S33>/1//2' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion6'
   *  Inport: '<Root>/att'
   */
  rtb_TmpSignalConversionAtSFun_2 = 0.5 * URControl_U.att[1];

  /* Trigonometry: '<S33>/sincos' */
  dummy_idx_1 = std::sin(rtb_TmpSignalConversionAtSFun_2);
  rtb_DiscreteStateSpace[1] = std::cos(rtb_TmpSignalConversionAtSFun_2);

  /* Fcn: '<S33>/q0' */
  rtb_TmpSignalConversionAtSFun_4 = dummy_idx_1;

  /* Trigonometry: '<S33>/sincos' */
  rtb_sincos_o1[1] = dummy_idx_1;

  /* Gain: '<S33>/1//2' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion6'
   *  Inport: '<Root>/att'
   */
  rtb_TmpSignalConversionAtSFun_2 = 0.5 * URControl_U.att[0];

  /* Trigonometry: '<S33>/sincos' */
  dummy_idx_1 = std::sin(rtb_TmpSignalConversionAtSFun_2);
  rtb_DiscreteStateSpace[2] = std::cos(rtb_TmpSignalConversionAtSFun_2);

  /* Fcn: '<S33>/q0' incorporates:
   *  Fcn: '<S33>/q1'
   */
  rtb_TmpSignalConversionAtSFun_2 = rtb_DiscreteStateSpace[0] *
    rtb_DiscreteStateSpace[1];

  /* SignalConversion: '<S31>/TmpSignal ConversionAt SFunction Inport1' incorporates:
   *  Fcn: '<S33>/q0'
   *  Fcn: '<S33>/q1'
   *  MATLAB Function: '<S27>/MATLAB Function'
   */
  rtb_TmpSignalConversionAtSFun_4 = rtb_TmpSignalConversionAtSFun_2 *
    rtb_DiscreteStateSpace[2] + rtb_enableMeas * rtb_TmpSignalConversionAtSFun_4
    * dummy_idx_1;
  rtb_TmpSignalConversionAtSFun_3 = rtb_TmpSignalConversionAtSFun_2 *
    dummy_idx_1 - rtb_sincos_o1[0] * rtb_sincos_o1[1] * rtb_DiscreteStateSpace[2];

  /* Fcn: '<S33>/q2' incorporates:
   *  Fcn: '<S33>/q3'
   */
  rtb_enableMeas = rtb_sincos_o1[0] * rtb_DiscreteStateSpace[1];
  rtb_fcn5 = rtb_DiscreteStateSpace[0] * rtb_sincos_o1[1];

  /* SignalConversion: '<S31>/TmpSignal ConversionAt SFunction Inport1' incorporates:
   *  Fcn: '<S33>/q2'
   *  Fcn: '<S33>/q3'
   *  MATLAB Function: '<S27>/MATLAB Function'
   */
  rtb_TmpSignalConversionAtSFun_2 = rtb_fcn5 * rtb_DiscreteStateSpace[2] +
    rtb_enableMeas * dummy_idx_1;
  rtb_TmpSignalConversionAtSFun_1 = rtb_enableMeas * rtb_DiscreteStateSpace[2] -
    rtb_fcn5 * dummy_idx_1;

  /* MATLAB Function: '<S27>/MATLAB Function' incorporates:
   *  Memory: '<S27>/Memory'
   */
  /* :  error1 = norm(qMeas - qState); */
  /* :  error2 = norm(-qMeas - qState); */
  /* :  if error1 > error2 */
  rtb_TmpSignalConversionAtSFun_0[0] = rtb_TmpSignalConversionAtSFun_4 -
    URControl_DW.Memory_PreviousInput[0];
  dummy[0] = -rtb_TmpSignalConversionAtSFun_4 -
    URControl_DW.Memory_PreviousInput[0];
  rtb_TmpSignalConversionAtSFun_0[1] = rtb_TmpSignalConversionAtSFun_3 -
    URControl_DW.Memory_PreviousInput[1];
  dummy[1] = -rtb_TmpSignalConversionAtSFun_3 -
    URControl_DW.Memory_PreviousInput[1];
  rtb_TmpSignalConversionAtSFun_0[2] = rtb_TmpSignalConversionAtSFun_2 -
    URControl_DW.Memory_PreviousInput[2];
  dummy[2] = -rtb_TmpSignalConversionAtSFun_2 -
    URControl_DW.Memory_PreviousInput[2];
  rtb_TmpSignalConversionAtSFun_0[3] = rtb_TmpSignalConversionAtSFun_1 -
    URControl_DW.Memory_PreviousInput[3];
  dummy[3] = -rtb_TmpSignalConversionAtSFun_1 -
    URControl_DW.Memory_PreviousInput[3];
  if (URControl_norm_d(rtb_TmpSignalConversionAtSFun_0) > URControl_norm_d(dummy))
  {
    /* :  q = -qMeas; */
    rtb_TmpSignalConversionAtSFun_4 = -rtb_TmpSignalConversionAtSFun_4;
    rtb_TmpSignalConversionAtSFun_3 = -rtb_TmpSignalConversionAtSFun_3;
    rtb_TmpSignalConversionAtSFun_2 = -rtb_TmpSignalConversionAtSFun_2;
    rtb_TmpSignalConversionAtSFun_1 = -rtb_TmpSignalConversionAtSFun_1;
  } else {
    /* :  else */
    /* :  q = qMeas; */
  }

  /* MATLAB Function: '<S27>/enableMeas' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion6'
   *  Inport: '<Root>/att'
   */
  /* :  if isempty(attPrev) */
  /* :  enableMeas = 1; */
  rtb_enableMeas = 1.0;

  /* :  tol = 1e-3; */
  /* :  errorSum = sum(abs((attPrev - att))); */
  URControl_DW.attPrev[0] -= URControl_U.att[0];
  URControl_DW.attPrev[1] -= URControl_U.att[1];
  URControl_DW.attPrev[2] -= URControl_U.att[2];

  /* :  if errorSum < tol */
  if ((std::abs(URControl_DW.attPrev[0]) + std::abs(URControl_DW.attPrev[1])) +
      std::abs(URControl_DW.attPrev[2]) < 0.001) {
    /* :  enableMeas = 0; */
    rtb_enableMeas = 0.0;
  }

  /* :  attPrev = att; */
  URControl_DW.attPrev[0] = URControl_U.att[0];
  URControl_DW.attPrev[1] = URControl_U.att[1];
  URControl_DW.attPrev[2] = URControl_U.att[2];

  /* End of MATLAB Function: '<S27>/enableMeas' */

  /* Outputs for Enabled SubSystem: '<S30>/Correct1' incorporates:
   *  EnablePort: '<S35>/Enable'
   */
  /* DataTypeConversion: '<S30>/DataTypeConversion_Enable1' */
  if (rtb_enableMeas != 0.0) {
    /* MATLAB Function: '<S35>/Correct' incorporates:
     *  Constant: '<S30>/R1'
     *  DataStoreRead: '<S35>/Data Store ReadP'
     *  DataStoreRead: '<S35>/Data Store ReadX'
     */
    /* :  if pM.IsSimulinkFcn */
    /* :  else */
    /* :  MeasurementFcnH = str2func(pM.FcnName); */
    /* :  if pM.HasJacobian */
    /* :  MeasurementJacobianFcnH = str2func(pM.JacobianFcnName); */
    /* :  switch pM.NumberOfExtraArgumentInports */
    /* :  case 1 */
    /* :  extraArgs = {uMeas}; */
    /* :  xNew = zeros(size(x),'like',x); */
    /* :  if pM.HasAdditiveNoise */
    /* :  [xNew,P] = matlabshared.tracking.internal.EKFCorrectorAdditive.correct(... */
    /* :          yMeas,R,x,P,MeasurementFcnH,MeasurementJacobianFcnH,extraArgs{:}); */
    /* 'ekf_meas_jacob:13' posx = x(1); */
    /* 'ekf_meas_jacob:14' posy = x(2); */
    /* 'ekf_meas_jacob:15' posz = x(3); */
    /* 'ekf_meas_jacob:17' q1 = x(7); */
    /* 'ekf_meas_jacob:18' q2 = x(8); */
    /* 'ekf_meas_jacob:19' q3 = x(9); */
    /* 'ekf_meas_jacob:20' q4 = x(10); */
    /* 'ekf_meas_jacob:22' dx = u(1); */
    /* 'ekf_meas_jacob:23' dy = u(2); */
    /* 'ekf_meas_jacob:24' dz = u(3); */
    /* 'ekf_meas_jacob:26' B = ... */
    /* 'ekf_meas_jacob:27' [ 1, 0, 0, 0, 0, 0, 2*dx*q1 - 2*dy*q4 + 2*dz*q3, 2*dx*q2 + 2*dy*q3 + 2*dz*q4, 2*dy*q2 - 2*dx*q3 + 2*dz*q1, 2*dz*q2 - 2*dy*q1 - 2*dx*q4; */
    /* 'ekf_meas_jacob:28'  0, 1, 0, 0, 0, 0, 2*dx*q4 + 2*dy*q1 - 2*dz*q2, 2*dx*q3 - 2*dy*q2 - 2*dz*q1, 2*dx*q2 + 2*dy*q3 + 2*dz*q4, 2*dx*q1 - 2*dy*q4 + 2*dz*q3; */
    /* 'ekf_meas_jacob:29'  0, 0, 1, 0, 0, 0, 2*dy*q2 - 2*dx*q3 + 2*dz*q1, 2*dx*q4 + 2*dy*q1 - 2*dz*q2, 2*dy*q4 - 2*dx*q1 - 2*dz*q3, 2*dx*q2 + 2*dy*q3 + 2*dz*q4; */
    /* 'ekf_meas_jacob:30'  0, 0, 0, 0, 0, 0,                           1,                           0,                           0,                           0; */
    /* 'ekf_meas_jacob:31'  0, 0, 0, 0, 0, 0,                           0,                           1,                           0,                           0; */
    /* 'ekf_meas_jacob:32'  0, 0, 0, 0, 0, 0,                           0,                           0,                           1,                           0; */
    /* 'ekf_meas_jacob:33'  0, 0, 0, 0, 0, 0,                           0,                           0,                           0,                           1]; */
    dHdx[0] = 1.0;
    dHdx[7] = 0.0;
    dHdx[14] = 0.0;
    dHdx[21] = 0.0;
    dHdx[28] = 0.0;
    dHdx[35] = 0.0;
    rtb_enableMeas = (0.0 * URControl_DW.x[6] - 0.0 * URControl_DW.x[9]) + 0.0 *
      URControl_DW.x[8];
    dHdx[42] = rtb_enableMeas;
    rtb_fcn5 = (0.0 * URControl_DW.x[7] + 0.0 * URControl_DW.x[8]) + 0.0 *
      URControl_DW.x[9];
    dHdx[49] = rtb_fcn5;
    dummy_idx_1 = (0.0 * URControl_DW.x[7] - 0.0 * URControl_DW.x[8]) + 0.0 *
      URControl_DW.x[6];
    dHdx[56] = dummy_idx_1;
    dHdx[63] = (0.0 * URControl_DW.x[7] - 0.0 * URControl_DW.x[6]) - 0.0 *
      URControl_DW.x[9];
    dHdx[1] = 0.0;
    dHdx[8] = 1.0;
    dHdx[15] = 0.0;
    dHdx[22] = 0.0;
    dHdx[29] = 0.0;
    dHdx[36] = 0.0;
    dummy_idx_0 = (0.0 * URControl_DW.x[9] + 0.0 * URControl_DW.x[6]) - 0.0 *
      URControl_DW.x[7];
    dHdx[43] = dummy_idx_0;
    dHdx[50] = (0.0 * URControl_DW.x[8] - 0.0 * URControl_DW.x[7]) - 0.0 *
      URControl_DW.x[6];
    dHdx[57] = rtb_fcn5;
    dHdx[64] = rtb_enableMeas;
    dHdx[2] = 0.0;
    dHdx[9] = 0.0;
    dHdx[16] = 1.0;
    dHdx[23] = 0.0;
    dHdx[30] = 0.0;
    dHdx[37] = 0.0;
    dHdx[44] = dummy_idx_1;
    dHdx[51] = dummy_idx_0;
    dHdx[58] = (0.0 * URControl_DW.x[9] - 0.0 * URControl_DW.x[6]) - 0.0 *
      URControl_DW.x[8];
    dHdx[65] = rtb_fcn5;
    for (r2 = 0; r2 < 10; r2++) {
      dHdx[3 + 7 * r2] = b_0[r2];
      dHdx[4 + 7 * r2] = c[r2];
      dHdx[5 + 7 * r2] = d[r2];
      dHdx[6 + 7 * r2] = e[r2];
    }

    /* 'ekf_meas_func:3' y = zeros(7,1); */
    /* 'ekf_meas_func:5' posx = x(1); */
    /* 'ekf_meas_func:6' posy = x(2); */
    /* 'ekf_meas_func:7' posz = x(3); */
    /* 'ekf_meas_func:9' q = x(7:10); */
    /* 'ekf_meas_func:11' dx = u(1); */
    /* 'ekf_meas_func:12' dy = u(2); */
    /* 'ekf_meas_func:13' dz = u(3); */
    /* 'ekf_meas_func:15' dPos = quatRot(q', [dx, dy, dz]); */
    /* 'quatRot:3' qconj = [ q(:,1)  -q(:,2:4) ]; */
    /* 'quatRot:5' dummy = HProduct(HProduct(q,[0,vector]),qconj); */
    /* 'quatRot:14' vec = [v1(:,1).*v2(:,2) v1(:,1).*v2(:,3) v1(:,1).*v2(:,4)] + ... */
    /* 'quatRot:15'          [v2(:,1).*v1(:,2) v2(:,1).*v1(:,3) v2(:,1).*v1(:,4)]+... */
    /* 'quatRot:16'          [ v1(:,3).*v2(:,4)-v1(:,4).*v2(:,3) ... */
    /* 'quatRot:17'            v1(:,4).*v2(:,2)-v1(:,2).*v2(:,4) ... */
    /* 'quatRot:18'            v1(:,2).*v2(:,3)-v1(:,3).*v2(:,2)]; */
    /* 'quatRot:22' scalar = v1(:,1).*v2(:,1) - v1(:,2).*v2(:,2) - ... */
    /* 'quatRot:23'              v1(:,3).*v2(:,3) - v1(:,4).*v2(:,4); */
    /* 'quatRot:25' qout = [scalar  vec]; */
    FMin[0] = ((URControl_DW.x[6] * 0.0 - URControl_DW.x[7] * 0.0) -
               URControl_DW.x[8] * 0.0) - URControl_DW.x[9] * 0.0;
    FMin[1] = (URControl_DW.x[6] * 0.0 + 0.0 * URControl_DW.x[7]) +
      (URControl_DW.x[8] * 0.0 - URControl_DW.x[9] * 0.0);
    FMin[2] = (URControl_DW.x[6] * 0.0 + 0.0 * URControl_DW.x[8]) +
      (URControl_DW.x[9] * 0.0 - URControl_DW.x[7] * 0.0);
    FMin[3] = (URControl_DW.x[6] * 0.0 + 0.0 * URControl_DW.x[9]) +
      (URControl_DW.x[7] * 0.0 - URControl_DW.x[8] * 0.0);

    /* 'quatRot:14' vec = [v1(:,1).*v2(:,2) v1(:,1).*v2(:,3) v1(:,1).*v2(:,4)] + ... */
    /* 'quatRot:15'          [v2(:,1).*v1(:,2) v2(:,1).*v1(:,3) v2(:,1).*v1(:,4)]+... */
    /* 'quatRot:16'          [ v1(:,3).*v2(:,4)-v1(:,4).*v2(:,3) ... */
    /* 'quatRot:17'            v1(:,4).*v2(:,2)-v1(:,2).*v2(:,4) ... */
    /* 'quatRot:18'            v1(:,2).*v2(:,3)-v1(:,3).*v2(:,2)]; */
    /* 'quatRot:22' scalar = v1(:,1).*v2(:,1) - v1(:,2).*v2(:,2) - ... */
    /* 'quatRot:23'              v1(:,3).*v2(:,3) - v1(:,4).*v2(:,4); */
    /* 'quatRot:25' qout = [scalar  vec]; */
    /* 'quatRot:6' r = dummy(2:4); */
    /* 'ekf_meas_func:17' y(1) = posx + dPos(1); */
    zEstimated[0] = ((FMin[0] * -URControl_DW.x[7] + URControl_DW.x[6] * FMin[1])
                     + (FMin[2] * -URControl_DW.x[9] - FMin[3] *
                        -URControl_DW.x[8])) + URControl_DW.x[0];

    /* 'ekf_meas_func:18' y(2) = posy + dPos(2); */
    zEstimated[1] = ((FMin[0] * -URControl_DW.x[8] + URControl_DW.x[6] * FMin[2])
                     + (FMin[3] * -URControl_DW.x[7] - FMin[1] *
                        -URControl_DW.x[9])) + URControl_DW.x[1];

    /* 'ekf_meas_func:19' y(3) = posz + dPos(3); */
    zEstimated[2] = ((FMin[0] * -URControl_DW.x[9] + URControl_DW.x[6] * FMin[3])
                     + (FMin[1] * -URControl_DW.x[8] - FMin[2] *
                        -URControl_DW.x[7])) + URControl_DW.x[2];

    /* 'ekf_meas_func:21' y(4:7) = q; */
    zEstimated[3] = URControl_DW.x[6];
    zEstimated[4] = URControl_DW.x[7];
    zEstimated[5] = URControl_DW.x[8];
    zEstimated[6] = URControl_DW.x[9];
    for (r2 = 0; r2 < 10; r2++) {
      for (r3 = 0; r3 < 7; r3++) {
        rtemp = r2 + 10 * r3;
        gain[rtemp] = 0.0;
        for (i = 0; i < 10; i++) {
          gain[rtemp] = URControl_DW.P[10 * i + r2] * dHdx[7 * i + r3] + gain[10
            * r3 + r2];
        }
      }
    }

    for (r2 = 0; r2 < 7; r2++) {
      for (r3 = 0; r3 < 10; r3++) {
        rtemp = r2 + 7 * r3;
        dHdx_1[rtemp] = 0.0;
        for (i = 0; i < 10; i++) {
          dHdx_1[rtemp] = dHdx[7 * i + r2] * URControl_DW.P[10 * r3 + i] +
            dHdx_1[7 * r3 + r2];
        }
      }

      for (r3 = 0; r3 < 7; r3++) {
        rtb_precAngle_idx_1 = 0.0;
        for (i = 0; i < 10; i++) {
          rtb_precAngle_idx_1 += dHdx_1[7 * i + r2] * dHdx[7 * i + r3];
        }

        dHdx_0[r2 + 7 * r3] = URControl_ConstP.R1_Value[7 * r3 + r2] +
          rtb_precAngle_idx_1;
      }
    }

    URControl_mrdivide_helper(gain, dHdx_0);
    for (r2 = 0; r2 < 10; r2++) {
      for (r3 = 0; r3 < 10; r3++) {
        rtemp = r2 + 10 * r3;
        Jacobian[rtemp] = 0.0;
        for (i = 0; i < 7; i++) {
          Jacobian[rtemp] = gain[10 * i + r2] * dHdx[7 * r3 + i] + Jacobian[10 *
            r3 + r2];
        }
      }

      for (r3 = 0; r3 < 10; r3++) {
        rtb_precAngle_idx_1 = 0.0;
        for (i = 0; i < 10; i++) {
          rtb_precAngle_idx_1 += Jacobian[10 * i + r2] * URControl_DW.P[10 * r3
            + i];
        }

        Jacobian_0[r2 + 10 * r3] = URControl_DW.P[10 * r3 + r2] -
          rtb_precAngle_idx_1;
      }
    }

    /* DataStoreWrite: '<S35>/Data Store WriteP' */
    memcpy(&URControl_DW.P[0], &Jacobian_0[0], 100U * sizeof(real_T));

    /* SignalConversion: '<S38>/TmpSignal ConversionAt SFunction Inport3' incorporates:
     *  DataTypeConversion: '<Root>/Data Type Conversion4'
     *  Inport: '<Root>/pos'
     *  MATLAB Function: '<S35>/Correct'
     */
    rtb_pos_0[0] = URControl_U.pos[0];
    rtb_pos_0[1] = URControl_U.pos[1];
    rtb_pos_0[2] = URControl_U.pos[2];
    rtb_pos_0[3] = rtb_TmpSignalConversionAtSFun_4;
    rtb_pos_0[4] = rtb_TmpSignalConversionAtSFun_3;
    rtb_pos_0[5] = rtb_TmpSignalConversionAtSFun_2;
    rtb_pos_0[6] = rtb_TmpSignalConversionAtSFun_1;

    /* MATLAB Function: '<S35>/Correct' incorporates:
     *  SignalConversion: '<S38>/TmpSignal ConversionAt SFunction Inport3'
     */
    for (r2 = 0; r2 < 7; r2++) {
      rtb_pos_1[r2] = rtb_pos_0[r2] - zEstimated[r2];
    }

    /* DataStoreWrite: '<S35>/Data Store WriteX' incorporates:
     *  DataStoreRead: '<S35>/Data Store ReadX'
     *  MATLAB Function: '<S35>/Correct'
     */
    for (r2 = 0; r2 < 10; r2++) {
      rtb_precAngle_idx_1 = 0.0;
      for (r3 = 0; r3 < 7; r3++) {
        rtb_precAngle_idx_1 += gain[10 * r3 + r2] * rtb_pos_1[r3];
      }

      URControl_DW.x[r2] += rtb_precAngle_idx_1;
    }

    /* End of DataStoreWrite: '<S35>/Data Store WriteX' */
  }

  /* End of DataTypeConversion: '<S30>/DataTypeConversion_Enable1' */
  /* End of Outputs for SubSystem: '<S30>/Correct1' */

  /* Outputs for Atomic SubSystem: '<S30>/Output' */
  /* DataStoreRead: '<S36>/Data Store Read' */
  memcpy(&rtb_DataStoreRead_k[0], &URControl_DW.x[0], 10U * sizeof(real_T));

  /* Sqrt: '<S42>/sqrt' incorporates:
   *  DataStoreRead: '<S36>/Data Store Read'
   *  Product: '<S43>/Product'
   *  Product: '<S43>/Product1'
   *  Product: '<S43>/Product2'
   *  Product: '<S43>/Product3'
   *  Sum: '<S43>/Sum'
   */
  rtb_TmpSignalConversionAtSFun_4 = std::sqrt(((URControl_DW.x[6] *
    URControl_DW.x[6] + URControl_DW.x[7] * URControl_DW.x[7]) + URControl_DW.x
    [8] * URControl_DW.x[8]) + URControl_DW.x[9] * URControl_DW.x[9]);

  /* Product: '<S41>/Product' incorporates:
   *  DataStoreRead: '<S36>/Data Store Read'
   */
  rtb_fcn5 = URControl_DW.x[6] / rtb_TmpSignalConversionAtSFun_4;

  /* Product: '<S41>/Product1' incorporates:
   *  DataStoreRead: '<S36>/Data Store Read'
   */
  rtb_TmpSignalConversionAtSFun_2 = URControl_DW.x[7] /
    rtb_TmpSignalConversionAtSFun_4;

  /* Product: '<S41>/Product2' incorporates:
   *  DataStoreRead: '<S36>/Data Store Read'
   */
  rtb_Product2 = URControl_DW.x[8] / rtb_TmpSignalConversionAtSFun_4;

  /* Product: '<S41>/Product3' incorporates:
   *  DataStoreRead: '<S36>/Data Store Read'
   */
  rtb_TmpSignalConversionAtSFun_4 = URControl_DW.x[9] /
    rtb_TmpSignalConversionAtSFun_4;

  /* End of Outputs for SubSystem: '<S30>/Output' */

  /* Fcn: '<S32>/fcn2' incorporates:
   *  Fcn: '<S32>/fcn5'
   */
  rtb_enableMeas = rtb_fcn5 * rtb_fcn5;
  rtb_TmpSignalConversionAtSFun_3 = rtb_TmpSignalConversionAtSFun_2 *
    rtb_TmpSignalConversionAtSFun_2;
  rtb_TmpSignalConversionAtSFun_1 = rtb_Product2 * rtb_Product2;
  dummy_idx_1 = rtb_TmpSignalConversionAtSFun_4 *
    rtb_TmpSignalConversionAtSFun_4;

  /* Trigonometry: '<S40>/Trigonometric Function1' incorporates:
   *  Fcn: '<S32>/fcn1'
   *  Fcn: '<S32>/fcn2'
   */
  rtb_DiscreteStateSpace[0] = rt_atan2d_snf((rtb_TmpSignalConversionAtSFun_2 *
    rtb_Product2 + rtb_fcn5 * rtb_TmpSignalConversionAtSFun_4) * 2.0,
    ((rtb_enableMeas + rtb_TmpSignalConversionAtSFun_3) -
     rtb_TmpSignalConversionAtSFun_1) - dummy_idx_1);

  /* Fcn: '<S32>/fcn3' */
  u0 = (rtb_TmpSignalConversionAtSFun_2 * rtb_TmpSignalConversionAtSFun_4 -
        rtb_fcn5 * rtb_Product2) * -2.0;

  /* Trigonometry: '<S40>/trigFcn' */
  if (u0 > 1.0) {
    u0 = 1.0;
  } else {
    if (u0 < -1.0) {
      u0 = -1.0;
    }
  }

  rtb_DiscreteStateSpace[1] = std::asin(u0);

  /* End of Trigonometry: '<S40>/trigFcn' */

  /* Trigonometry: '<S40>/Trigonometric Function3' incorporates:
   *  Fcn: '<S32>/fcn4'
   *  Fcn: '<S32>/fcn5'
   */
  rtb_DiscreteStateSpace[2] = rt_atan2d_snf((rtb_Product2 *
    rtb_TmpSignalConversionAtSFun_4 + rtb_fcn5 * rtb_TmpSignalConversionAtSFun_2)
    * 2.0, ((rtb_enableMeas - rtb_TmpSignalConversionAtSFun_3) -
            rtb_TmpSignalConversionAtSFun_1) + dummy_idx_1);

  /* DSPFlip: '<S27>/Flip1' */
  URControl_B.att_ekfquat[0] = rtb_DiscreteStateSpace[2];
  URControl_B.att_ekfquat[2] = rtb_DiscreteStateSpace[0];
  URControl_B.att_ekfquat[1] = rtb_DiscreteStateSpace[1];
  URControl_B.att_ekfquat[1] = rtb_DiscreteStateSpace[1];

  /* Delay: '<Root>/Delay' incorporates:
   *  Constant: '<Root>/delay'
   *  DataTypeConversion: '<Root>/Data Type Conversion10'
   *  Inport: '<Root>/fail_flag'
   */
  rtb_precAngle_idx_1 = std::floor(URControlParams.fail_delay * 500.0);
  if ((rtb_precAngle_idx_1 < 1.0) || rtIsNaN(rtb_precAngle_idx_1)) {
    rtb_enableMeas = URControl_U.fail_flag;
  } else {
    if (rtb_precAngle_idx_1 > 1000.0) {
      tmp_3 = 1000U;
    } else {
      if (rtIsNaN(rtb_precAngle_idx_1) || rtIsInf(rtb_precAngle_idx_1)) {
        rtb_precAngle_idx_1 = 0.0;
      } else {
        rtb_precAngle_idx_1 = std::fmod(rtb_precAngle_idx_1, 4.294967296E+9);
      }

      tmp_3 = rtb_precAngle_idx_1 < 0.0 ? (uint32_T)-(int32_T)(uint32_T)
        -rtb_precAngle_idx_1 : (uint32_T)rtb_precAngle_idx_1;
    }

    rtb_enableMeas = URControl_DW.Delay_DSTATE[1000U - tmp_3];
  }

  /* End of Delay: '<Root>/Delay' */

  /* MATLAB Function: '<S7>/basic estimators' incorporates:
   *  BusCreator: '<S7>/BusConversion_InsertedFor_basic estimators_at_inport_0'
   *  DataStoreRead: '<S36>/Data Store Read'
   *  DataTypeConversion: '<Root>/Data Type Conversion10'
   *  DataTypeConversion: '<Root>/Data Type Conversion2'
   *  DataTypeConversion: '<Root>/Data Type Conversion4'
   *  DataTypeConversion: '<Root>/Data Type Conversion5'
   *  DataTypeConversion: '<Root>/Data Type Conversion6'
   *  DataTypeConversion: '<Root>/Data Type Conversion7'
   *  Inport: '<Root>/att'
   *  Inport: '<Root>/esc_rpm'
   *  Inport: '<Root>/fail_flag'
   *  Inport: '<Root>/pos'
   *  Inport: '<Root>/rates'
   *  Inport: '<Root>/vel'
   *  MATLAB Function: '<S5>/Precession'
   */
  /* :  [State, DAQ] = UREstimators(sensors, State, DAQ, pos_ekf, vel_ekf, att_ekf, fail_id_slow, fail_id_quick, par, URControlParams); */
  rtb_TmpSignalConversionAtSFun_2 = URControl_U.fail_flag;
  b_State = URControl_DW.State;

  /* 'UREstimators:3' if isempty(omegaFilter) */
  if (!URControl_DW.omegaFilter_not_empty) {
    /* 'UREstimators:3' omegaFilter = LPFilter(URpar.est_omegaFilterT, [0,0,0], 40, -40); */
    tmp_1[0] = 0.0;
    tmp_1[1] = 0.0;
    tmp_1[2] = 0.0;
    URControl_LPFilter_LPFilter(&URControl_DW.omegaFilter,
      URControlParams.est_omegaFilterT, tmp_1, 40.0, -40.0);
    URControl_DW.omegaFilter_not_empty = true;
  }

  /* 'UREstimators:4' if isempty(posFilter) */
  if (!URControl_DW.posFilter_not_empty) {
    /* 'UREstimators:4' posFilter = LPFilter(URpar.est_posFilterT, [0,0,0], inf, -inf); */
    tmp_1[0] = 0.0;
    tmp_1[1] = 0.0;
    tmp_1[2] = 0.0;
    URControl_LPFilter_LPFilter(&URControl_DW.posFilter,
      URControlParams.est_posFilterT, tmp_1, (rtInf), (rtMinusInf));
    URControl_DW.posFilter_not_empty = true;
  }

  /* 'UREstimators:5' if isempty(velFilter) */
  if (!URControl_DW.velFilter_not_empty) {
    /* 'UREstimators:5' velFilter = LPFilter(URpar.est_velFilterT, [0,0,0], 20, -20); */
    tmp_1[0] = 0.0;
    tmp_1[1] = 0.0;
    tmp_1[2] = 0.0;
    URControl_LPFilter_LPFilter(&URControl_DW.velFilter,
      URControlParams.est_velFilterT, tmp_1, 20.0, -20.0);
    URControl_DW.velFilter_not_empty = true;
  }

  /* 'UREstimators:6' if isempty(accFilter) */
  if (!URControl_DW.accFilter_not_empty) {
    /* 'UREstimators:6' accFilter = LPFilter(URpar.est_accFilterT, [0,0,0], 40, -40); */
    /* 'LPFilter:14' obj.filterT = filterT; */
    URControl_DW.accFilter.filterT = URControlParams.est_accFilterT;

    /* 'LPFilter:15' obj.value = initValue; */
    URControl_DW.accFilter.value[0] = 0.0;
    URControl_DW.accFilter.value[1] = 0.0;
    URControl_DW.accFilter.value[2] = 0.0;

    /* 'LPFilter:16' obj.maxLim = maxLim; */
    URControl_DW.accFilter.maxLim = 40.0;

    /* 'LPFilter:17' obj.minLim = minLim; */
    URControl_DW.accFilter.minLim = -40.0;
    URControl_DW.accFilter_not_empty = true;
  }

  /* 'UREstimators:7' if isempty(failProt) */
  /* 'UREstimators:9' state.acc = sensors.acc; */
  b_State.acc[0] = rtb_acc[0];
  b_State.acc[1] = rtb_acc[1];
  b_State.acc[2] = rtb_acc[2];

  /* 'UREstimators:10' if URpar.est_useEKF == 1 */
  if (URControlParams.est_useEKF == 1.0) {
    /* Outputs for Atomic SubSystem: '<S30>/Output' */
    /* 'UREstimators:11' state.vel = vel_est'; */
    /* 'UREstimators:12' state.pos = pos_est'; */
    /* 'UREstimators:13' state.att = (mod(att_est + pi, 2*pi) - pi)'; */
    b_State.vel[0] = URControl_DW.x[3];
    b_State.pos[0] = URControl_DW.x[0];

    /* End of Outputs for SubSystem: '<S30>/Output' */
    tmp_1[0] = URControl_B.att_ekfquat[0] + 3.1415926535897931;

    /* Outputs for Atomic SubSystem: '<S30>/Output' */
    b_State.vel[1] = URControl_DW.x[4];
    b_State.pos[1] = URControl_DW.x[1];

    /* End of Outputs for SubSystem: '<S30>/Output' */
    tmp_1[1] = URControl_B.att_ekfquat[1] + 3.1415926535897931;

    /* Outputs for Atomic SubSystem: '<S30>/Output' */
    b_State.vel[2] = URControl_DW.x[5];
    b_State.pos[2] = URControl_DW.x[2];

    /* End of Outputs for SubSystem: '<S30>/Output' */
    tmp_1[2] = URControl_B.att_ekfquat[2] + 3.1415926535897931;
    URControl_mod(tmp_1, rtb_sincos_o1);
    b_State.att[0] = rtb_sincos_o1[0] - 3.1415926535897931;
    b_State.att[1] = rtb_sincos_o1[1] - 3.1415926535897931;
    b_State.att[2] = rtb_sincos_o1[2] - 3.1415926535897931;
  } else {
    /* 'UREstimators:14' else */
    /* 'UREstimators:15' state.vel = sensors.vel; */
    /* 'UREstimators:16' state.pos = sensors.pos; */
    /* 'UREstimators:17' state.att = sensors.att; */
    b_State.vel[0] = URControl_U.vel[0];
    b_State.pos[0] = URControl_U.pos[0];
    b_State.att[0] = URControl_U.att[0];
    b_State.vel[1] = URControl_U.vel[1];
    b_State.pos[1] = URControl_U.pos[1];
    b_State.att[1] = URControl_U.att[1];
    b_State.vel[2] = URControl_U.vel[2];
    b_State.pos[2] = URControl_U.pos[2];
    b_State.att[2] = URControl_U.att[2];
  }

  /* 'UREstimators:20' state.omega = sensors.omega; */
  b_State.omega[0] = URControl_U.rates[0];
  b_State.omega[1] = URControl_U.rates[1];
  b_State.omega[2] = URControl_U.rates[2];

  /* 'UREstimators:22' omegaFilter.updateFilterT(URpar.est_omegaFilterT); */
  /* 'LPFilter:26' obj.filterT = filterT; */
  URControl_DW.omegaFilter.filterT = URControlParams.est_omegaFilterT;

  /* 'UREstimators:23' omegaFilter.update(sensors.omega); */
  URControl_LPFilter_update(&URControl_DW.omegaFilter,
    rtb_BusConversion_InsertedFor_b.omega);

  /* 'UREstimators:24' state.omegaf = omegaFilter.value; */
  b_State.omegaf[0] = URControl_DW.omegaFilter.value[0];
  b_State.omegaf[1] = URControl_DW.omegaFilter.value[1];
  b_State.omegaf[2] = URControl_DW.omegaFilter.value[2];

  /* 'UREstimators:26' posFilter.updateFilterT(URpar.est_posFilterT); */
  /* 'LPFilter:26' obj.filterT = filterT; */
  URControl_DW.posFilter.filterT = URControlParams.est_posFilterT;

  /* 'UREstimators:27' posFilter.update(state.pos); */
  URControl_LPFilter_update(&URControl_DW.posFilter, b_State.pos);

  /* 'UREstimators:28' state.posf = posFilter.value; */
  b_State.posf[0] = URControl_DW.posFilter.value[0];
  b_State.posf[1] = URControl_DW.posFilter.value[1];
  b_State.posf[2] = URControl_DW.posFilter.value[2];

  /* 'UREstimators:30' velFilter.updateFilterT(URpar.est_velFilterT); */
  /* 'LPFilter:26' obj.filterT = filterT; */
  URControl_DW.velFilter.filterT = URControlParams.est_velFilterT;

  /* 'UREstimators:31' velFilter.update(state.vel); */
  URControl_LPFilter_update(&URControl_DW.velFilter, b_State.vel);

  /* 'UREstimators:32' state.velf = velFilter.value; */
  b_State.velf[0] = URControl_DW.velFilter.value[0];
  b_State.velf[1] = URControl_DW.velFilter.value[1];
  b_State.velf[2] = URControl_DW.velFilter.value[2];

  /* 'UREstimators:34' accFilter.updateFilterT(URpar.est_accFilterT); */
  /* 'LPFilter:26' obj.filterT = filterT; */
  URControl_DW.accFilter.filterT = URControlParams.est_accFilterT;

  /* 'UREstimators:35' accFilter.update(state.acc); */
  URControl_LPFilter_update(&URControl_DW.accFilter,
    rtb_BusConversion_InsertedFor_b.acc);

  /* 'UREstimators:36' state.accf = accFilter.value; */
  b_State.accf[0] = URControl_DW.accFilter.value[0];
  b_State.accf[1] = URControl_DW.accFilter.value[1];
  b_State.accf[2] = URControl_DW.accFilter.value[2];

  /* 'UREstimators:38' state.wRotor = sensors.wRotor/30*pi; */
  b_State.wRotor[0] = (real_T)URControl_U.esc_rpm[0] / 30.0 * 3.1415926535897931;
  b_State.wRotor[1] = (real_T)URControl_U.esc_rpm[1] / 30.0 * 3.1415926535897931;
  b_State.wRotor[2] = (real_T)URControl_U.esc_rpm[2] / 30.0 * 3.1415926535897931;
  b_State.wRotor[3] = (real_T)URControl_U.esc_rpm[3] / 30.0 * 3.1415926535897931;

  /* 'UREstimators:40' phi = state.att(1); */
  /* 'UREstimators:41' theta = state.att(2); */
  /* 'UREstimators:42' psi = state.att(3); */
  /* 'UREstimators:45' R_IB = [cos(theta)*cos(psi)                             , cos(theta)*sin(psi)                               , -sin(theta); */
  /* 'UREstimators:46'         sin(phi)*sin(theta)*cos(psi)-cos(phi)*sin(psi)  , sin(phi)*sin(theta)*sin(psi)+cos(phi)*cos(psi)    , sin(phi)*cos(theta); */
  /* 'UREstimators:47'         cos(phi)*sin(theta)*cos(psi)+sin(phi)*sin(psi)  , cos(phi)*sin(theta)*sin(psi)-sin(phi)*cos(psi)    , cos(phi)*cos(theta)]; */
  rtb_TmpSignalConversionAtSFun_4 = std::cos(b_State.att[1]);
  rtb_TmpSignalConversionAtSFun_3 = std::cos(b_State.att[2]);
  R_IB[0] = rtb_TmpSignalConversionAtSFun_4 * rtb_TmpSignalConversionAtSFun_3;
  rtb_fcn5 = std::sin(b_State.att[2]);
  R_IB[3] = rtb_TmpSignalConversionAtSFun_4 * rtb_fcn5;
  rtb_TmpSignalConversionAtSFun_1 = std::sin(b_State.att[1]);
  R_IB[6] = -rtb_TmpSignalConversionAtSFun_1;
  dummy_idx_1 = std::sin(b_State.att[0]);
  dummy_idx_0 = dummy_idx_1 * rtb_TmpSignalConversionAtSFun_1;
  rtb_u2_idx_2 = std::cos(b_State.att[0]);
  R_IB[1] = dummy_idx_0 * rtb_TmpSignalConversionAtSFun_3 - rtb_u2_idx_2 *
    rtb_fcn5;
  R_IB[4] = dummy_idx_0 * rtb_fcn5 + rtb_u2_idx_2 *
    rtb_TmpSignalConversionAtSFun_3;
  R_IB[7] = dummy_idx_1 * rtb_TmpSignalConversionAtSFun_4;
  rtb_TmpSignalConversionAtSFun_1 *= rtb_u2_idx_2;
  R_IB[2] = rtb_TmpSignalConversionAtSFun_1 * rtb_TmpSignalConversionAtSFun_3 +
    dummy_idx_1 * rtb_fcn5;
  R_IB[5] = rtb_TmpSignalConversionAtSFun_1 * rtb_fcn5 - dummy_idx_1 *
    rtb_TmpSignalConversionAtSFun_3;
  R_IB[8] = rtb_u2_idx_2 * rtb_TmpSignalConversionAtSFun_4;

  /* 'UREstimators:49' state.n = (R_IB\[0;0;-1])'; */
  i = 0;
  r2 = 1;
  r3 = 2;
  rtb_fcn5 = std::abs(R_IB[0]);
  rtb_TmpSignalConversionAtSFun_4 = std::abs(R_IB[1]);
  if (rtb_TmpSignalConversionAtSFun_4 > rtb_fcn5) {
    rtb_fcn5 = rtb_TmpSignalConversionAtSFun_4;
    i = 1;
    r2 = 0;
  }

  if (std::abs(R_IB[2]) > rtb_fcn5) {
    i = 2;
    r2 = 1;
    r3 = 0;
  }

  R_IB[r2] /= R_IB[i];
  R_IB[r3] /= R_IB[i];
  R_IB[3 + r2] -= R_IB[3 + i] * R_IB[r2];
  R_IB[3 + r3] -= R_IB[3 + i] * R_IB[r3];
  R_IB[6 + r2] -= R_IB[6 + i] * R_IB[r2];
  R_IB[6 + r3] -= R_IB[6 + i] * R_IB[r3];
  if (std::abs(R_IB[3 + r3]) > std::abs(R_IB[3 + r2])) {
    rtemp = r2;
    r2 = r3;
    r3 = rtemp;
  }

  R_IB[3 + r3] /= R_IB[3 + r2];
  R_IB[6 + r3] -= R_IB[3 + r3] * R_IB[6 + r2];
  rtb_TmpSignalConversionAtSFun_3 = (real_T)b[r2] - (real_T)b[i] * R_IB[r2];
  rtb_TmpSignalConversionAtSFun_1 = (((real_T)b[r3] - (real_T)b[i] * R_IB[r3]) -
    R_IB[3 + r3] * rtb_TmpSignalConversionAtSFun_3) / R_IB[6 + r3];
  rtb_TmpSignalConversionAtSFun_3 -= R_IB[6 + r2] *
    rtb_TmpSignalConversionAtSFun_1;
  rtb_TmpSignalConversionAtSFun_3 /= R_IB[3 + r2];
  rtb_pos_idx_0 = (((real_T)b[i] - R_IB[6 + i] * rtb_TmpSignalConversionAtSFun_1)
                   - R_IB[3 + i] * rtb_TmpSignalConversionAtSFun_3) / R_IB[i];
  b_State.n[0] = rtb_pos_idx_0;
  b_State.n[1] = rtb_TmpSignalConversionAtSFun_3;
  b_State.n[2] = rtb_TmpSignalConversionAtSFun_1;

  /* 'UREstimators:54' dummy = par.URC.R_xy_uv*[state.omega(1); state.omega(2)]; */
  rtb_TmpSignalConversionAtSFun_4 = 0.70710678118654768 * URControl_U.rates[0];
  dummy_idx_1 = rtb_TmpSignalConversionAtSFun_4 + 0.53801602916367752 *
    URControl_U.rates[1];

  /* 'UREstimators:55' uRot = dummy(1); */
  /* 'UREstimators:55' vRot = dummy(2); */
  /* 'UREstimators:56' state.omegaUV = [uRot,vRot,state.omega(3)]; */
  b_State.omegaUV[0] = rtb_TmpSignalConversionAtSFun_4 + -0.53801602916367752 *
    URControl_U.rates[1];
  b_State.omegaUV[1] = dummy_idx_1;
  b_State.omegaUV[2] = URControl_U.rates[2];

  /* 'UREstimators:58' dummy = par.URC.R_xy_uv*[state.omegaf(1); state.omegaf(2)]; */
  dummy_idx_0 = 0.70710678118654768 * b_State.omegaf[0] + -0.53801602916367752 *
    b_State.omegaf[1];
  rtb_u2_idx_2 = 0.70710678118654768 * b_State.omegaf[0] + 0.53801602916367752 *
    b_State.omegaf[1];

  /* 'UREstimators:59' uRot = dummy(1); */
  /* 'UREstimators:59' vRot = dummy(2); */
  /* 'UREstimators:60' state.omegafUV = [uRot,vRot,state.omegaf(3)]; */
  b_State.omegafUV[0] = dummy_idx_0;
  b_State.omegafUV[1] = rtb_u2_idx_2;
  b_State.omegafUV[2] = b_State.omegaf[2];

  /* 'UREstimators:63' if URpar.fail_altProt && state.pos(3) > URpar.fail_altThresh && fail_id_slow > 0 && sum(state.wRotor) > 400*4 */
  if ((URControlParams.fail_altProt != 0.0) && (b_State.pos[2] >
       URControlParams.fail_altThresh) && (rtb_enableMeas > 0.0) &&
      (((b_State.wRotor[0] + b_State.wRotor[1]) + b_State.wRotor[2]) +
       b_State.wRotor[3] > 1600.0)) {
    /* 'UREstimators:64' failProt = 1; */
    URControl_DW.failProt = 1.0;
  }

  /* 'UREstimators:67' if ~(fail_id_slow > 0) */
  if (!(rtb_enableMeas > 0.0)) {
    /* 'UREstimators:68' failProt = 0; */
    URControl_DW.failProt = 0.0;
  }

  /* 'UREstimators:71' if failProt */
  if (URControl_DW.failProt != 0.0) {
    /* 'UREstimators:72' fail_id_slow = 0; */
    rtb_enableMeas = 0.0;

    /* 'UREstimators:73' fail_id_quick = 0; */
    rtb_TmpSignalConversionAtSFun_2 = 0.0;
  }

  /* 'UREstimators:78' FMax = URpar.envp_FMax; */
  /* 'UREstimators:79' FMin = URpar.envp_FMin; */
  qconj[0] = URControlParams.envp_FMax[0];
  FMin[0] = URControlParams.envp_FMin[0];
  qconj[1] = URControlParams.envp_FMax[1];
  FMin[1] = URControlParams.envp_FMin[1];
  qconj[2] = URControlParams.envp_FMax[2];
  FMin[2] = URControlParams.envp_FMin[2];
  qconj[3] = URControlParams.envp_FMax[3];
  FMin[3] = URControlParams.envp_FMin[3];

  /* 'UREstimators:80' if fail_id_slow > 0 */
  if (rtb_enableMeas > 0.0) {
    /* 'UREstimators:81' FMax(fail_id_slow) = URpar.fail_wRot^2*URpar.k0; */
    rtb_TmpSignalConversionAtSFun_4 = URControlParams.fail_wRot *
      URControlParams.fail_wRot * URControlParams.k0;
    r2 = (int32_T)rtb_enableMeas - 1;
    qconj[r2] = rtb_TmpSignalConversionAtSFun_4;

    /* 'UREstimators:82' FMin(fail_id_slow) = URpar.fail_wRot^2*URpar.k0; */
    FMin[r2] = rtb_TmpSignalConversionAtSFun_4;
  }

  /* 'UREstimators:84' state.FMax = FMax; */
  /* 'UREstimators:85' state.FMin = FMin; */
  b_State.FMax[0] = qconj[0];
  b_State.FMin[0] = FMin[0];
  b_State.FMax[1] = qconj[1];
  b_State.FMin[1] = FMin[1];
  b_State.FMax[2] = qconj[2];
  b_State.FMin[2] = FMin[2];
  b_State.FMax[3] = qconj[3];
  b_State.FMin[3] = FMin[3];

  /* 'UREstimators:87' state.fail_id = fail_id_slow; */
  b_State.fail_id = rtb_enableMeas;

  /* 'UREstimators:88' state.fail_id_quick = fail_id_quick; */
  b_State.fail_id_quick = rtb_TmpSignalConversionAtSFun_2;

  /* 'UREstimators:91' [uvDot_max, uvDot_min, uv_max, uv_min] = UREnvelopCalc(state, URpar); */
  /* 'UREnvelopCalc:3' s = sqrt(URpar.l^2 + URpar.b^2); */
  rtb_u2_idx_0 = std::sqrt(URControlParams.l * URControlParams.l +
    URControlParams.b * URControlParams.b);

  /* 'UREnvelopCalc:4' r = state.omega(3); */
  /* 'UREnvelopCalc:7' Mu_max = (-state.FMin(2) + state.FMax(4))*s; */
  Mu_max = (-FMin[1] + qconj[3]) * rtb_u2_idx_0;

  /* 'UREnvelopCalc:8' Mu_min = (-state.FMax(2) + state.FMin(4))*s; */
  Mu_min = (-qconj[1] + FMin[3]) * rtb_u2_idx_0;

  /* 'UREnvelopCalc:9' Mv_max = (state.FMax(1) - state.FMin(3))*s; */
  Mv_max = (qconj[0] - FMin[2]) * rtb_u2_idx_0;

  /* 'UREnvelopCalc:10' Mv_min = (state.FMin(1) - state.FMax(3))*s; */
  Mv_min = (FMin[0] - qconj[2]) * rtb_u2_idx_0;

  /* 'UREnvelopCalc:13' Iu = sqrt(URpar.Ix^2 + URpar.Iy^2); */
  Iu_tmp = std::sqrt(URControlParams.Ix * URControlParams.Ix +
                     URControlParams.Iy * URControlParams.Iy);

  /* 'UREnvelopCalc:14' Iv = sqrt(URpar.Ix^2 + URpar.Iy^2); */
  /* 'UREnvelopCalc:17' MuPrec = state.omegafUV(2)*r*(Iv - URpar.Iz); */
  rtb_TmpSignalConversionAtSFun_4 = rtb_u2_idx_2 * URControl_U.rates[2] *
    (Iu_tmp - URControlParams.Iz);

  /* 'UREnvelopCalc:18' MvPrec = state.omegafUV(1)*r*(URpar.Iz - Iu); */
  rtb_Product1_tmp = URControlParams.Iz - Iu_tmp;
  rtb_TmpSignalConversionAtSFun_2 = dummy_idx_0 * URControl_U.rates[2] *
    rtb_Product1_tmp;

  /* 'UREnvelopCalc:21' uDot_max = (MuPrec + Mu_max)/Iu; */
  rtb_enableMeas = (rtb_TmpSignalConversionAtSFun_4 + Mu_max) / Iu_tmp;

  /* 'UREnvelopCalc:22' uDot_min = (MuPrec + Mu_min)/Iu; */
  rtb_TmpSignalConversionAtSFun_4 = (rtb_TmpSignalConversionAtSFun_4 + Mu_min) /
    Iu_tmp;

  /* 'UREnvelopCalc:24' vDot_max = (MvPrec + Mv_max)/Iv; */
  rtb_fcn5 = (rtb_TmpSignalConversionAtSFun_2 + Mv_max) / Iu_tmp;

  /* 'UREnvelopCalc:25' vDot_min = (MvPrec + Mv_min)/Iv; */
  rtb_TmpSignalConversionAtSFun_2 = (rtb_TmpSignalConversionAtSFun_2 + Mv_min) /
    Iu_tmp;

  /* 'UREnvelopCalc:28' dt = URpar.envp_timeHorz; */
  /* 'UREnvelopCalc:30' if URpar.envp_mode == 1 */
  if (URControlParams.envp_mode == 1.0) {
    /* 'UREnvelopCalc:33' u_max = state.omegafUV(1) + max(uDot_max,URpar.envp_minDeviation)*dt; */
    if ((rtb_enableMeas > URControlParams.envp_minDeviation) || rtIsNaN
        (URControlParams.envp_minDeviation)) {
      rtb_Product2 = rtb_enableMeas;
    } else {
      rtb_Product2 = URControlParams.envp_minDeviation;
    }

    u_max = rtb_Product2 * URControlParams.envp_timeHorz + dummy_idx_0;

    /* 'UREnvelopCalc:34' u_min = state.omegafUV(1) + min(uDot_min,-URpar.envp_minDeviation)*dt; */
    if ((rtb_TmpSignalConversionAtSFun_4 < -URControlParams.envp_minDeviation) ||
        rtIsNaN(-URControlParams.envp_minDeviation)) {
      rtb_Product2 = rtb_TmpSignalConversionAtSFun_4;
    } else {
      rtb_Product2 = -URControlParams.envp_minDeviation;
    }

    Mv_min = rtb_Product2 * URControlParams.envp_timeHorz + dummy_idx_0;

    /* 'UREnvelopCalc:36' v_max = state.omegafUV(2) + max(vDot_max,URpar.envp_minDeviation)*dt; */
    if ((rtb_fcn5 > URControlParams.envp_minDeviation) || rtIsNaN
        (URControlParams.envp_minDeviation)) {
      rtb_Product2 = rtb_fcn5;
    } else {
      rtb_Product2 = URControlParams.envp_minDeviation;
    }

    v_max = rtb_Product2 * URControlParams.envp_timeHorz + rtb_u2_idx_2;

    /* 'UREnvelopCalc:37' v_min = state.omegafUV(2) + min(vDot_min,-URpar.envp_minDeviation)*dt; */
    if ((rtb_TmpSignalConversionAtSFun_2 < -URControlParams.envp_minDeviation) ||
        rtIsNaN(-URControlParams.envp_minDeviation)) {
      rtb_Product2 = rtb_TmpSignalConversionAtSFun_2;
    } else {
      rtb_Product2 = -URControlParams.envp_minDeviation;
    }

    rtb_Product2 = rtb_Product2 * URControlParams.envp_timeHorz + rtb_u2_idx_2;
  } else if (URControlParams.envp_mode == 2.0) {
    /* 'UREnvelopCalc:39' elseif URpar.envp_mode == 2 */
    /* 'UREnvelopCalc:42' uDot2_max = max(uDot_max,URpar.envp_minDeviation); */
    if ((rtb_enableMeas > URControlParams.envp_minDeviation) || rtIsNaN
        (URControlParams.envp_minDeviation)) {
      v_max = rtb_enableMeas;
    } else {
      v_max = URControlParams.envp_minDeviation;
    }

    /* 'UREnvelopCalc:43' uDot2_min = min(uDot_min,-URpar.envp_minDeviation); */
    if ((rtb_TmpSignalConversionAtSFun_4 < -URControlParams.envp_minDeviation) ||
        rtIsNaN(-URControlParams.envp_minDeviation)) {
      uDot2_min = rtb_TmpSignalConversionAtSFun_4;
    } else {
      uDot2_min = -URControlParams.envp_minDeviation;
    }

    /* 'UREnvelopCalc:45' u_max = max(state.omegafUV(1) + min(uDot2_max, -uDot2_min)*dt,0); */
    if ((v_max < -uDot2_min) || rtIsNaN(-uDot2_min)) {
      u0 = v_max;
    } else {
      u0 = -uDot2_min;
    }

    u_max = u0 * URControlParams.envp_timeHorz + dummy_idx_0;
    if (!(u_max > 0.0)) {
      u_max = 0.0;
    }

    /* 'UREnvelopCalc:46' u_min = min(state.omegafUV(1) + max(uDot2_min, -uDot2_max)*dt,0); */
    if ((!(uDot2_min > -v_max)) && (!rtIsNaN(-v_max))) {
      uDot2_min = -v_max;
    }

    Mv_min = uDot2_min * URControlParams.envp_timeHorz + dummy_idx_0;
    if (!(Mv_min < 0.0)) {
      Mv_min = 0.0;
    }

    /* 'UREnvelopCalc:48' vDot2_max = max(vDot_max,URpar.envp_minDeviation); */
    if ((rtb_fcn5 > URControlParams.envp_minDeviation) || rtIsNaN
        (URControlParams.envp_minDeviation)) {
      rtb_Product2 = rtb_fcn5;
    } else {
      rtb_Product2 = URControlParams.envp_minDeviation;
    }

    /* 'UREnvelopCalc:49' vDot2_min = min(vDot_min,-URpar.envp_minDeviation); */
    if ((rtb_TmpSignalConversionAtSFun_2 < -URControlParams.envp_minDeviation) ||
        rtIsNaN(-URControlParams.envp_minDeviation)) {
      vDot2_min = rtb_TmpSignalConversionAtSFun_2;
    } else {
      vDot2_min = -URControlParams.envp_minDeviation;
    }

    /* 'UREnvelopCalc:51' v_max = max(state.omegafUV(2) + min(vDot2_max, -vDot2_min)*dt,0); */
    if ((rtb_Product2 < -vDot2_min) || rtIsNaN(-vDot2_min)) {
      u0 = rtb_Product2;
    } else {
      u0 = -vDot2_min;
    }

    v_max = u0 * URControlParams.envp_timeHorz + rtb_u2_idx_2;
    if (!(v_max > 0.0)) {
      v_max = 0.0;
    }

    /* 'UREnvelopCalc:52' v_min = min(state.omegafUV(2) + max(vDot2_min, -vDot2_max)*dt,0); */
    if ((!(vDot2_min > -rtb_Product2)) && (!rtIsNaN(-rtb_Product2))) {
      vDot2_min = -rtb_Product2;
    }

    rtb_Product2 = vDot2_min * URControlParams.envp_timeHorz + rtb_u2_idx_2;
    if (!(rtb_Product2 < 0.0)) {
      rtb_Product2 = 0.0;
    }
  } else if (URControlParams.envp_mode == 3.0) {
    /* 'UREnvelopCalc:54' elseif URpar.envp_mode == 3 */
    /* 'UREnvelopCalc:57' uDot2_max = max(uDot_max,URpar.envp_minDeviation); */
    tmp_4 = rtIsNaN(URControlParams.envp_minDeviation);
    if ((rtb_enableMeas > URControlParams.envp_minDeviation) || tmp_4) {
      v_max = rtb_enableMeas;
    } else {
      v_max = URControlParams.envp_minDeviation;
    }

    /* 'UREnvelopCalc:58' uDot2_min = min(uDot_min,-URpar.envp_minDeviation); */
    tmp_5 = rtIsNaN(-URControlParams.envp_minDeviation);
    if ((rtb_TmpSignalConversionAtSFun_4 < -URControlParams.envp_minDeviation) ||
        tmp_5) {
      uDot2_min = rtb_TmpSignalConversionAtSFun_4;
    } else {
      uDot2_min = -URControlParams.envp_minDeviation;
    }

    /* 'UREnvelopCalc:60' u_max = max(state.omegafUV(1) + min(uDot2_max, -uDot2_min)*dt,0); */
    /* 'UREnvelopCalc:61' u_min = min(state.omegafUV(1) + max(uDot2_min, -uDot2_max)*dt,0); */
    /* 'UREnvelopCalc:63' vDot2_max = max(vDot_max,URpar.envp_minDeviation); */
    if ((rtb_fcn5 > URControlParams.envp_minDeviation) || tmp_4) {
      rtb_Product2 = rtb_fcn5;
    } else {
      rtb_Product2 = URControlParams.envp_minDeviation;
    }

    /* 'UREnvelopCalc:64' vDot2_min = min(vDot_min,-URpar.envp_minDeviation); */
    if ((rtb_TmpSignalConversionAtSFun_2 < -URControlParams.envp_minDeviation) ||
        tmp_5) {
      vDot2_min = rtb_TmpSignalConversionAtSFun_2;
    } else {
      vDot2_min = -URControlParams.envp_minDeviation;
    }

    /* 'UREnvelopCalc:66' v_max = max(state.omegafUV(2) + min(vDot2_max, -vDot2_min)*dt,0); */
    /* 'UREnvelopCalc:67' v_min = min(state.omegafUV(2) + max(vDot2_min, -vDot2_max)*dt,0); */
    /* 'UREnvelopCalc:70' if abs(r) < 1e-3 */
    u0 = std::abs((real_T)URControl_U.rates[2]);
    if (u0 < 0.001) {
      /* 'UREnvelopCalc:71' rTemp = URpar.attitude_yawThreshold; */
      u_max = URControlParams.attitude_yawThreshold;
    } else {
      /* 'UREnvelopCalc:72' else */
      /* 'UREnvelopCalc:73' rTemp = sign(r)*max(abs(r), URpar.attitude_yawThreshold); */
      if (URControl_U.rates[2] < 0.0F) {
        rtb_precAngle_idx_1 = -1.0;
      } else if (URControl_U.rates[2] > 0.0F) {
        rtb_precAngle_idx_1 = 1.0;
      } else if (URControl_U.rates[2] == 0.0F) {
        rtb_precAngle_idx_1 = 0.0;
      } else {
        rtb_precAngle_idx_1 = (rtNaN);
      }

      if ((!(u0 > URControlParams.attitude_yawThreshold)) && (!rtIsNaN
           (URControlParams.attitude_yawThreshold))) {
        u0 = URControlParams.attitude_yawThreshold;
      }

      u_max = rtb_precAngle_idx_1 * u0;
    }

    /* 'UREnvelopCalc:76' u_prec_lim1 = -max(Mv_max,0)/(rTemp*(URpar.Iz - Iu)); */
    if (!(Mv_max > 0.0)) {
      Mv_max = 0.0;
    }

    u0 = rtb_Product1_tmp * u_max;
    Mv_max = -Mv_max / u0;

    /* 'UREnvelopCalc:77' u_prec_lim2 = -min(Mv_min,0)/(rTemp*(URpar.Iz - Iu)); */
    if (!(Mv_min < 0.0)) {
      Mv_min = 0.0;
    }

    Mv_min = -Mv_min / u0;

    /* 'UREnvelopCalc:79' v_prec_lim1 = -max(Mu_max,0)/(rTemp*(Iv - URpar.Iz)); */
    if (!(Mu_max > 0.0)) {
      Mu_max = 0.0;
    }

    u0 = (Iu_tmp - URControlParams.Iz) * u_max;
    Mu_max = -Mu_max / u0;

    /* 'UREnvelopCalc:80' v_prec_lim2 = -min(Mu_min,0)/(rTemp*(Iv - URpar.Iz)); */
    if (!(Mu_min < 0.0)) {
      Mu_min = 0.0;
    }

    Mu_min = -Mu_min / u0;

    /* 'UREnvelopCalc:82' u_max = min(u_max, max(u_prec_lim1, u_prec_lim2)); */
    if ((v_max < -uDot2_min) || rtIsNaN(-uDot2_min)) {
      u0 = v_max;
    } else {
      u0 = -uDot2_min;
    }

    u0 = u0 * URControlParams.envp_timeHorz + dummy_idx_0;
    if (!(u0 > 0.0)) {
      u0 = 0.0;
    }

    tmp_4 = rtIsNaN(Mv_min);
    if ((Mv_max > Mv_min) || tmp_4) {
      u_max = Mv_max;
    } else {
      u_max = Mv_min;
    }

    if ((u0 < u_max) || rtIsNaN(u_max)) {
      u_max = u0;
    }

    /* 'UREnvelopCalc:83' u_min = max(u_min, min(u_prec_lim1, u_prec_lim2)); */
    if ((!(uDot2_min > -v_max)) && (!rtIsNaN(-v_max))) {
      uDot2_min = -v_max;
    }

    u0 = uDot2_min * URControlParams.envp_timeHorz + dummy_idx_0;
    if (!(u0 < 0.0)) {
      u0 = 0.0;
    }

    if ((Mv_max < Mv_min) || tmp_4) {
      Mv_min = Mv_max;
    }

    if ((u0 > Mv_min) || rtIsNaN(Mv_min)) {
      Mv_min = u0;
    }

    /* 'UREnvelopCalc:85' v_max = min(v_max, max(v_prec_lim1, v_prec_lim2)); */
    if ((rtb_Product2 < -vDot2_min) || rtIsNaN(-vDot2_min)) {
      u0 = rtb_Product2;
    } else {
      u0 = -vDot2_min;
    }

    u0 = u0 * URControlParams.envp_timeHorz + rtb_u2_idx_2;
    if (!(u0 > 0.0)) {
      u0 = 0.0;
    }

    tmp_4 = rtIsNaN(Mu_min);
    if ((Mu_max > Mu_min) || tmp_4) {
      v_max = Mu_max;
    } else {
      v_max = Mu_min;
    }

    if ((u0 < v_max) || rtIsNaN(v_max)) {
      v_max = u0;
    }

    /* 'UREnvelopCalc:86' v_min = max(v_min, min(v_prec_lim1, v_prec_lim2)); */
    if ((!(vDot2_min > -rtb_Product2)) && (!rtIsNaN(-rtb_Product2))) {
      vDot2_min = -rtb_Product2;
    }

    rtb_Product2 = vDot2_min * URControlParams.envp_timeHorz + rtb_u2_idx_2;
    if (!(rtb_Product2 < 0.0)) {
      rtb_Product2 = 0.0;
    }

    if ((Mu_max < Mu_min) || tmp_4) {
      Mu_min = Mu_max;
    }

    if ((!(rtb_Product2 > Mu_min)) && (!rtIsNaN(Mu_min))) {
      rtb_Product2 = Mu_min;
    }
  } else {
    /* 'UREnvelopCalc:88' else */
    /* 'UREnvelopCalc:89' u_max = 0; */
    u_max = 0.0;

    /* 'UREnvelopCalc:89' u_min = 0; */
    Mv_min = 0.0;

    /* 'UREnvelopCalc:89' v_max = 0; */
    v_max = 0.0;

    /* 'UREnvelopCalc:89' v_min = 0; */
    rtb_Product2 = 0.0;
  }

  /* 'UREnvelopCalc:93' uvDot_max = [uDot_max; vDot_max]; */
  /* 'UREnvelopCalc:94' uvDot_min = [uDot_min; vDot_min]; */
  /* 'UREnvelopCalc:95' uv_min = [u_min; v_min]; */
  /* 'UREnvelopCalc:96' uv_max = [u_max; v_max]; */
  /* 'UREstimators:92' state.uvDot_max = uvDot_max; */
  b_State.uvDot_max[0] = rtb_enableMeas;
  b_State.uvDot_max[1] = rtb_fcn5;

  /* 'UREstimators:93' state.uvDot_min = uvDot_min; */
  b_State.uvDot_min[0] = rtb_TmpSignalConversionAtSFun_4;
  b_State.uvDot_min[1] = rtb_TmpSignalConversionAtSFun_2;

  /* 'UREstimators:94' state.uv_max = uv_max; */
  b_State.uv_max[0] = u_max;
  b_State.uv_max[1] = v_max;

  /* 'UREstimators:95' state.uv_min = uv_min; */
  b_State.uv_min[0] = Mv_min;
  b_State.uv_min[1] = rtb_Product2;

  /* 'UREstimators:98' daq.pos = state.pos; */
  /* 'UREstimators:99' daq.vel = state.vel; */
  /* 'UREstimators:100' daq.acc = state.att; */
  /* 'UREstimators:101' daq.n = state.n; */
  /* 'UREstimators:103' daq.omegaUV = state.omegaUV; */
  /* 'UREstimators:104' daq.omegafUV = state.omegafUV; */
  URControl_DW.DAQ.pos[0] = b_State.pos[0];
  URControl_DW.DAQ.vel[0] = b_State.vel[0];
  URControl_DW.DAQ.acc[0] = b_State.att[0];
  URControl_DW.DAQ.n[0] = rtb_pos_idx_0;
  URControl_DW.DAQ.omegaUV[0] = b_State.omegaUV[0];
  URControl_DW.DAQ.omegafUV[0] = dummy_idx_0;
  URControl_DW.DAQ.pos[1] = b_State.pos[1];
  URControl_DW.DAQ.vel[1] = b_State.vel[1];
  URControl_DW.DAQ.acc[1] = b_State.att[1];
  URControl_DW.DAQ.n[1] = rtb_TmpSignalConversionAtSFun_3;
  URControl_DW.DAQ.omegaUV[1] = dummy_idx_1;
  URControl_DW.DAQ.omegafUV[1] = rtb_u2_idx_2;
  URControl_DW.DAQ.pos[2] = b_State.pos[2];
  URControl_DW.DAQ.vel[2] = b_State.vel[2];
  URControl_DW.DAQ.acc[2] = b_State.att[2];
  URControl_DW.DAQ.n[2] = rtb_TmpSignalConversionAtSFun_1;
  URControl_DW.DAQ.omegaUV[2] = URControl_U.rates[2];
  URControl_DW.DAQ.omegafUV[2] = b_State.omegafUV[2];

  /* 'UREstimators:105' daq.FMax = state.FMax; */
  /* 'UREstimators:106' daq.FMin = state.FMin; */
  URControl_DW.DAQ.FMax[0] = qconj[0];
  URControl_DW.DAQ.FMin[0] = FMin[0];
  URControl_DW.DAQ.FMax[1] = qconj[1];
  URControl_DW.DAQ.FMin[1] = FMin[1];
  URControl_DW.DAQ.FMax[2] = qconj[2];
  URControl_DW.DAQ.FMin[2] = FMin[2];
  URControl_DW.DAQ.FMax[3] = qconj[3];
  URControl_DW.DAQ.FMin[3] = FMin[3];

  /* 'UREstimators:107' daq.uvDot_max = state.uvDot_max; */
  URControl_DW.DAQ.uvDot_max[0] = rtb_enableMeas;
  URControl_DW.DAQ.uvDot_max[1] = rtb_fcn5;

  /* 'UREstimators:108' daq.uvDot_min = state.uvDot_min; */
  URControl_DW.DAQ.uvDot_min[0] = rtb_TmpSignalConversionAtSFun_4;
  URControl_DW.DAQ.uvDot_min[1] = rtb_TmpSignalConversionAtSFun_2;

  /* 'UREstimators:109' daq.uv_max = state.uv_max; */
  URControl_DW.DAQ.uv_max[0] = u_max;
  URControl_DW.DAQ.uv_max[1] = v_max;

  /* 'UREstimators:110' daq.uv_min = state.uv_min; */
  URControl_DW.DAQ.uv_min[0] = Mv_min;
  URControl_DW.DAQ.uv_min[1] = rtb_Product2;
  URControl_DW.State = b_State;

  /* MATLAB Function: '<S5>/Precession' incorporates:
   *  MATLAB Function: '<S7>/basic estimators'
   */
  /* :  stateOut = State; */
  /* :  [uv_prec, precAngle, DAQ] = URGenPrecession(state, DAQ, par, URControlParams); */
  /* 'URGenPrecession:3' s = sqrt(URpar.l^2 + URpar.b^2); */
  /* 'URGenPrecession:4' r = state.omegaf(3); */
  /* 'URGenPrecession:7' Mu_max = (-state.FMin(2) + state.FMax(4))*s; */
  Mu_max = (-URControl_DW.State.FMin[1] + URControl_DW.State.FMax[3]) *
    rtb_u2_idx_0;

  /* 'URGenPrecession:8' Mu_min = (-state.FMax(2) + state.FMin(4))*s; */
  Mu_min = (-URControl_DW.State.FMax[1] + URControl_DW.State.FMin[3]) *
    rtb_u2_idx_0;

  /* 'URGenPrecession:9' Mv_max = (state.FMax(1) - state.FMin(3))*s; */
  Mv_max = (URControl_DW.State.FMax[0] - URControl_DW.State.FMin[2]) *
    rtb_u2_idx_0;

  /* 'URGenPrecession:10' Mv_min = (state.FMin(1) - state.FMax(3))*s; */
  Mv_min = (URControl_DW.State.FMin[0] - URControl_DW.State.FMax[2]) *
    rtb_u2_idx_0;

  /* 'URGenPrecession:12' MMargin = URpar.attitude_MMargin; */
  /* 'URGenPrecession:15' if Mu_max < MMargin */
  if (Mu_max < URControlParams.attitude_MMargin) {
    /* 'URGenPrecession:16' MuPrec = MMargin - Mu_max; */
    rtb_TmpSignalConversionAtSFun_4 = URControlParams.attitude_MMargin - Mu_max;
  } else if (Mu_min > -URControlParams.attitude_MMargin) {
    /* 'URGenPrecession:17' elseif Mu_min > -MMargin */
    /* 'URGenPrecession:18' MuPrec = -MMargin - Mu_min; */
    rtb_TmpSignalConversionAtSFun_4 = -URControlParams.attitude_MMargin - Mu_min;
  } else {
    /* 'URGenPrecession:19' else */
    /* 'URGenPrecession:20' MuPrec = 0; */
    rtb_TmpSignalConversionAtSFun_4 = 0.0;
  }

  /* 'URGenPrecession:24' if Mv_max < MMargin */
  if (Mv_max < URControlParams.attitude_MMargin) {
    /* 'URGenPrecession:25' MvPrec = MMargin - Mv_max; */
    rtb_TmpSignalConversionAtSFun_2 = URControlParams.attitude_MMargin - Mv_max;
  } else if (Mv_min > -URControlParams.attitude_MMargin) {
    /* 'URGenPrecession:26' elseif Mv_min > -MMargin */
    /* 'URGenPrecession:27' MvPrec = -MMargin - Mv_min; */
    rtb_TmpSignalConversionAtSFun_2 = -URControlParams.attitude_MMargin - Mv_min;
  } else {
    /* 'URGenPrecession:28' else */
    /* 'URGenPrecession:29' MvPrec = 0; */
    rtb_TmpSignalConversionAtSFun_2 = 0.0;
  }

  /* 'URGenPrecession:32' Iu = sqrt(URpar.Ix^2 + URpar.Iy^2); */
  /* 'URGenPrecession:33' Iv = sqrt(URpar.Ix^2 + URpar.Iy^2); */
  /* 'URGenPrecession:38' if abs(r) < URpar.attitude_yawThreshold */
  rtb_precAngle_idx_1 = std::abs(URControl_DW.State.omegaf[2]);
  if (rtb_precAngle_idx_1 < URControlParams.attitude_yawThreshold) {
    /* 'URGenPrecession:39' rTemp = sign(r)*URpar.attitude_yawThreshold; */
    if (URControl_DW.State.omegaf[2] < 0.0) {
      rtb_enableMeas = -1.0;
    } else if (URControl_DW.State.omegaf[2] > 0.0) {
      rtb_enableMeas = 1.0;
    } else if (URControl_DW.State.omegaf[2] == 0.0) {
      rtb_enableMeas = 0.0;
    } else {
      rtb_enableMeas = (rtNaN);
    }

    u_max = rtb_enableMeas * URControlParams.attitude_yawThreshold;

    /* 'URGenPrecession:40' gain = 1 - (URpar.attitude_yawThreshold - abs(r))/URpar.attitude_yawThreshold; */
    /* 'URGenPrecession:41' gain = max(min(gain,1),0); */
    rtb_fcn5 = 1.0 - (URControlParams.attitude_yawThreshold -
                      rtb_precAngle_idx_1) /
      URControlParams.attitude_yawThreshold;
    if (!(rtb_fcn5 < 1.0)) {
      rtb_fcn5 = 1.0;
    }

    if (!(rtb_fcn5 > 0.0)) {
      rtb_fcn5 = 0.0;
    }

    /* 'URGenPrecession:42' u_prec = (MvPrec/(rTemp*(URpar.Iz - Iu)))*gain; */
    rtb_enableMeas = rtb_TmpSignalConversionAtSFun_2 / ((URControlParams.Iz -
      std::sqrt(URControlParams.Ix * URControlParams.Ix + URControlParams.Iy *
                URControlParams.Iy)) * u_max) * rtb_fcn5;

    /* 'URGenPrecession:43' v_prec = (MuPrec/(rTemp*(Iv - URpar.Iz)))*gain; */
    rtb_TmpSignalConversionAtSFun_4 = rtb_TmpSignalConversionAtSFun_4 / ((std::
      sqrt(URControlParams.Ix * URControlParams.Ix + URControlParams.Iy *
           URControlParams.Iy) - URControlParams.Iz) * u_max) * rtb_fcn5;
  } else {
    /* 'URGenPrecession:44' else */
    /* 'URGenPrecession:45' u_prec = MvPrec/(r*(URpar.Iz - Iu)); */
    rtb_enableMeas = rtb_TmpSignalConversionAtSFun_2 / ((URControlParams.Iz -
      std::sqrt(URControlParams.Ix * URControlParams.Ix + URControlParams.Iy *
                URControlParams.Iy)) * URControl_DW.State.omegaf[2]);

    /* 'URGenPrecession:46' v_prec = MuPrec/(r*(Iv - URpar.Iz)); */
    rtb_TmpSignalConversionAtSFun_4 /= (std::sqrt(URControlParams.Ix *
      URControlParams.Ix + URControlParams.Iy * URControlParams.Iy) -
      URControlParams.Iz) * URControl_DW.State.omegaf[2];
  }

  /* 'URGenPrecession:49' u_prec = max(min(u_prec,URpar.attitude_maxPrecSpeed),-URpar.attitude_maxPrecSpeed); */
  tmp_4 = rtIsNaN(URControlParams.attitude_maxPrecSpeed);
  if ((!(rtb_enableMeas < URControlParams.attitude_maxPrecSpeed)) && (!tmp_4)) {
    rtb_enableMeas = URControlParams.attitude_maxPrecSpeed;
  }

  tmp_5 = rtIsNaN(-URControlParams.attitude_maxPrecSpeed);
  if ((!(rtb_enableMeas > -URControlParams.attitude_maxPrecSpeed)) && (!tmp_5))
  {
    rtb_enableMeas = -URControlParams.attitude_maxPrecSpeed;
  }

  /* 'URGenPrecession:50' v_prec = max(min(v_prec,URpar.attitude_maxPrecSpeed),-URpar.attitude_maxPrecSpeed); */
  if ((!(rtb_TmpSignalConversionAtSFun_4 < URControlParams.attitude_maxPrecSpeed))
      && (!tmp_4)) {
    rtb_TmpSignalConversionAtSFun_4 = URControlParams.attitude_maxPrecSpeed;
  }

  if ((!(rtb_TmpSignalConversionAtSFun_4 >
         -URControlParams.attitude_maxPrecSpeed)) && (!tmp_5)) {
    rtb_TmpSignalConversionAtSFun_4 = -URControlParams.attitude_maxPrecSpeed;
  }

  /* 'URGenPrecession:52' u_precAngle = 0; */
  rtb_fcn5 = 0.0;

  /* 'URGenPrecession:52' v_precAngle = 0; */
  rtb_TmpSignalConversionAtSFun_2 = 0.0;

  /* 'URGenPrecession:54' if URpar.attitude_precMode == 2 */
  if (URControlParams.attitude_precMode == 2.0) {
    /* 'URGenPrecession:56' u_precAngle = sign(v_prec)*URpar.attitude_precAngle/180*pi; */
    if (rtb_TmpSignalConversionAtSFun_4 < 0.0) {
      rtb_Product2 = -1.0;
    } else if (rtb_TmpSignalConversionAtSFun_4 > 0.0) {
      rtb_Product2 = 1.0;
    } else if (rtb_TmpSignalConversionAtSFun_4 == 0.0) {
      rtb_Product2 = 0.0;
    } else {
      rtb_Product2 = (rtNaN);
    }

    rtb_fcn5 = rtb_Product2 * URControlParams.attitude_precAngle / 180.0 *
      3.1415926535897931;

    /* 'URGenPrecession:57' v_precAngle = sign(u_prec)*URpar.attitude_precAngle/180*pi; */
    if (rtb_enableMeas < 0.0) {
      rtb_Product2 = -1.0;
    } else if (rtb_enableMeas > 0.0) {
      rtb_Product2 = 1.0;
    } else if (rtb_enableMeas == 0.0) {
      rtb_Product2 = 0.0;
    } else {
      rtb_Product2 = (rtNaN);
    }

    rtb_TmpSignalConversionAtSFun_2 = rtb_Product2 *
      URControlParams.attitude_precAngle / 180.0 * 3.1415926535897931;
  }

  /* 'URGenPrecession:60' if URpar.attitude_precMode == 0 */
  if (URControlParams.attitude_precMode == 0.0) {
    /* 'URGenPrecession:62' u_prec = 0; */
    rtb_enableMeas = 0.0;

    /* 'URGenPrecession:62' v_prec = 0; */
    rtb_TmpSignalConversionAtSFun_4 = 0.0;

    /* 'URGenPrecession:63' u_precAngle = 0; */
    rtb_fcn5 = 0.0;

    /* 'URGenPrecession:63' v_precAngle = 0; */
    rtb_TmpSignalConversionAtSFun_2 = 0.0;
  }

  /* 'URGenPrecession:66' uv_prec = [u_prec; v_prec]; */
  dummy_idx_0 = rtb_enableMeas;
  dummy_idx_1 = rtb_TmpSignalConversionAtSFun_4;

  /* 'URGenPrecession:68' precAngle = [u_precAngle; v_precAngle]; */
  rtb_pos_idx_0 = rtb_fcn5;
  rtb_precAngle_idx_1 = rtb_TmpSignalConversionAtSFun_2;

  /* 'URGenPrecession:71' daq.uv_prec = uv_prec; */
  /* 'URGenPrecession:72' daq.precAngle = precAngle; */
  URControl_DW.DAQ.uv_prec[0] = rtb_enableMeas;
  URControl_DW.DAQ.precAngle[0] = rtb_fcn5;
  URControl_DW.DAQ.uv_prec[1] = rtb_TmpSignalConversionAtSFun_4;
  URControl_DW.DAQ.precAngle[1] = rtb_TmpSignalConversionAtSFun_2;

  /* MATLAB Function: '<S5>/yawRateControl' incorporates:
   *  MATLAB Function: '<S7>/basic estimators'
   */
  /* :  [w_min, w_max, MzGain, DAQ] = URFailureYawRateControl(state, DAQ, par, URControlParams); */
  /* 'URFailureYawRateControl:4' w_max = ones(4,1)*par.wRotorMax; */
  /* 'URFailureYawRateControl:5' w_min = ones(4,1)*par.wRotorMin; */
  FMin[0] = 1200.0;
  rtb_TmpSignalConversionAtSFun_3 = 0.0;
  FMin[2] = 1200.0;
  rtb_TmpSignalConversionAtSFun_1 = 0.0;

  /* 'URFailureYawRateControl:6' MzGain = URpar.rate_MzGain; */
  rtb_enableMeas = URControlParams.rate_MzGain;

  /* 'URFailureYawRateControl:8' if URpar.YRCFail_enable && state.fail_id > 0 */
  if ((URControlParams.YRCFail_enable != 0.0) && (URControl_DW.State.fail_id >
       0.0)) {
    /* 'URFailureYawRateControl:9' r = state.omegaf(3); */
    /* 'URFailureYawRateControl:11' yawDirection = (-1)^(state.fail_id); */
    /* 'URFailureYawRateControl:13' errorGain = (state.n(3) - URpar.YRCFail_nLim2)/(URpar.YRCFail_nLim1 - URpar.YRCFail_nLim2); */
    /* 'URFailureYawRateControl:14' errorGain = max(min(errorGain,1),0); */
    /* 'URFailureYawRateControl:16' error = (r*yawDirection - URpar.YRCFail_yawRateTarget)*errorGain; */
    u0 = (URControl_DW.State.n[2] - URControlParams.YRCFail_nLim2) /
      (URControlParams.YRCFail_nLim1 - URControlParams.YRCFail_nLim2);
    if (!(u0 < 1.0)) {
      u0 = 1.0;
    }

    if (!(u0 > 0.0)) {
      u0 = 0.0;
    }

    rtb_TmpSignalConversionAtSFun_4 = (URControl_DW.State.omegaf[2] *
      rt_powd_snf(-1.0, URControl_DW.State.fail_id) -
      URControlParams.YRCFail_yawRateTarget) * u0;

    /* 'URFailureYawRateControl:18' if URpar.YRCFail_mode == 1 */
    if (URControlParams.YRCFail_mode == 1.0) {
      /* 'URFailureYawRateControl:19' dw = -error*URpar.YRCFail_Kp_dw; */
      /* 'URFailureYawRateControl:21' lim = par.wRotorMax - par.wRotorMin; */
      /* 'URFailureYawRateControl:22' dw = max(min(dw, lim), 0); */
      rtb_TmpSignalConversionAtSFun_4 = -rtb_TmpSignalConversionAtSFun_4 *
        URControlParams.YRCFail_Kp_dw;
      if (!(rtb_TmpSignalConversionAtSFun_4 < 1200.0)) {
        rtb_TmpSignalConversionAtSFun_4 = 1200.0;
      }

      if (!(rtb_TmpSignalConversionAtSFun_4 > 0.0)) {
        rtb_TmpSignalConversionAtSFun_4 = 0.0;
      }

      /* 'URFailureYawRateControl:25' w_max = w_max - [dw; 0; dw; 0]; */
      /* 'URFailureYawRateControl:26' w_min = w_min + [0; dw; 0; dw]; */
      FMin[0] = 1200.0 - rtb_TmpSignalConversionAtSFun_4;
      rtb_TmpSignalConversionAtSFun_3 = rtb_TmpSignalConversionAtSFun_4;
      FMin[2] = 1200.0 - rtb_TmpSignalConversionAtSFun_4;
      rtb_TmpSignalConversionAtSFun_1 = rtb_TmpSignalConversionAtSFun_4;
    } else {
      if (URControlParams.YRCFail_mode == 2.0) {
        /* 'URFailureYawRateControl:28' elseif URpar.YRCFail_mode == 2 */
        /* 'URFailureYawRateControl:29' dMzGain = -error*URpar.YRCFail_Kp_dMzGain; */
        /* 'URFailureYawRateControl:30' dMzGain = max(dMzGain,0); */
        rtb_enableMeas = -rtb_TmpSignalConversionAtSFun_4 *
          URControlParams.YRCFail_Kp_dMzGain;
        if (!(rtb_enableMeas > 0.0)) {
          rtb_enableMeas = 0.0;
        }

        /* 'URFailureYawRateControl:31' MzGain = MzGain + dMzGain^2; */
        rtb_enableMeas = rtb_enableMeas * rtb_enableMeas +
          URControlParams.rate_MzGain;
      }
    }
  }

  /* RelationalOperator: '<S11>/Compare' incorporates:
   *  Constant: '<S11>/Constant'
   *  Constant: '<S9>/Time constant'
   *  Sum: '<S9>/Sum1'
   */
  rtb_Compare = (0.05 - URControl_B.Probe[0] <= 0.0);

  /* DiscreteIntegrator: '<S13>/Integrator' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion8'
   *  Inport: '<Root>/pos_sp'
   */
  if (URControl_DW.Integrator_IC_LOADING != 0) {
    URControl_DW.Integrator_DSTATE[0] = URControl_U.pos_sp[0];
    URControl_DW.Integrator_DSTATE[1] = URControl_U.pos_sp[1];
    URControl_DW.Integrator_DSTATE[2] = URControl_U.pos_sp[2];
  }

  if (rtb_Compare || (URControl_DW.Integrator_PrevResetState != 0)) {
    URControl_DW.Integrator_DSTATE[0] = URControl_U.pos_sp[0];
    URControl_DW.Integrator_DSTATE[1] = URControl_U.pos_sp[1];
    URControl_DW.Integrator_DSTATE[2] = URControl_U.pos_sp[2];
  }

  /* RelationalOperator: '<S16>/Compare' incorporates:
   *  Constant: '<S14>/Time constant'
   *  Constant: '<S16>/Constant'
   *  Sum: '<S14>/Sum1'
   */
  rtb_Compare_j = (0.05 - URControl_B.Probe_d[0] <= 0.0);

  /* DiscreteIntegrator: '<S18>/Integrator' incorporates:
   *  Inport: '<Root>/yaw_sp'
   */
  if (URControl_DW.Integrator_IC_LOADING_a != 0) {
    URControl_DW.Integrator_DSTATE_i = URControl_U.yaw_sp;
  }

  if (rtb_Compare_j || (URControl_DW.Integrator_PrevResetState_i != 0)) {
    URControl_DW.Integrator_DSTATE_i = URControl_U.yaw_sp;
  }

  /* MATLAB Function: '<S4>/position control' incorporates:
   *  BusCreator: '<S4>/BusConversion_InsertedFor_position control_at_inport_0'
   *  DiscreteIntegrator: '<S13>/Integrator'
   *  MATLAB Function: '<S7>/basic estimators'
   */
  /* :  [n_des, DAQ] = URpositionControl(inputs, state, DAQ, par, URControlParams); */
  /* 'URpositionControl:3' if isempty(errorInt) */
  /* 'URpositionControl:6' if state.fail_id > 0 */
  if (URControl_DW.State.fail_id > 0.0) {
    /* 'URpositionControl:8' maxAngle = URpar.position_maxAngleFailure; */
    rtb_fcn5 = URControlParams.position_maxAngleFailure;

    /* 'URpositionControl:9' overallGain = URpar.position_failGain; */
    rtb_TmpSignalConversionAtSFun_4 = URControlParams.position_failGain;
  } else {
    /* 'URpositionControl:10' else */
    /* 'URpositionControl:11' maxAngle = URpar.position_maxAngle; */
    rtb_fcn5 = URControlParams.position_maxAngle;

    /* 'URpositionControl:12' overallGain = 1; */
    rtb_TmpSignalConversionAtSFun_4 = 1.0;
  }

  /* 'URpositionControl:16' errorPos = [inputs.xTarget, inputs.yTarget, inputs.zTarget]  - state.posf; */
  /* 'URpositionControl:17' velTarget = URpar.position_Kp_pos.*errorPos*overallGain; */
  /* 'URpositionControl:18' maxVel = URpar.position_maxVel; */
  /* 'URpositionControl:19' velTarget = max(min(velTarget,maxVel),-maxVel); */
  u0 = (URControl_DW.Integrator_DSTATE[0] - URControl_DW.State.posf[0]) *
    URControlParams.position_Kp_pos[0] * rtb_TmpSignalConversionAtSFun_4;
  tmp_4 = rtIsNaN(URControlParams.position_maxVel);
  if ((u0 < URControlParams.position_maxVel) || tmp_4) {
    rtb_sincos_o1[0] = u0;
  } else {
    rtb_sincos_o1[0] = URControlParams.position_maxVel;
  }

  u0 = (URControl_DW.Integrator_DSTATE[1] - URControl_DW.State.posf[1]) *
    URControlParams.position_Kp_pos[1] * rtb_TmpSignalConversionAtSFun_4;
  if ((u0 < URControlParams.position_maxVel) || tmp_4) {
    rtb_sincos_o1[1] = u0;
  } else {
    rtb_sincos_o1[1] = URControlParams.position_maxVel;
  }

  u0 = (URControl_DW.Integrator_DSTATE[2] - URControl_DW.State.posf[2]) *
    URControlParams.position_Kp_pos[2] * rtb_TmpSignalConversionAtSFun_4;
  if ((u0 < URControlParams.position_maxVel) || tmp_4) {
    rtb_sincos_o1[2] = u0;
  } else {
    rtb_sincos_o1[2] = URControlParams.position_maxVel;
  }

  /* 'URpositionControl:22' errorVel = velTarget - state.velf; */
  /* 'URpositionControl:23' errorInt = errorInt + errorVel/par.freq; */
  tmp_4 = rtIsNaN(-URControlParams.position_maxVel);
  if ((rtb_sincos_o1[0] > -URControlParams.position_maxVel) || tmp_4) {
    u0 = rtb_sincos_o1[0];
  } else {
    u0 = -URControlParams.position_maxVel;
  }

  rtb_TmpSignalConversionAtSFun_2 = u0 - URControl_DW.State.velf[0];
  URControl_DW.errorInt_p[0] += rtb_TmpSignalConversionAtSFun_2 / 500.0;
  rtb_att[0] = u0;
  rtb_u2_idx_0 = rtb_TmpSignalConversionAtSFun_2;

  /* MATLAB Function: '<S4>/position control' incorporates:
   *  MATLAB Function: '<S7>/basic estimators'
   */
  if ((rtb_sincos_o1[1] > -URControlParams.position_maxVel) || tmp_4) {
    u0 = rtb_sincos_o1[1];
  } else {
    u0 = -URControlParams.position_maxVel;
  }

  rtb_TmpSignalConversionAtSFun_2 = u0 - URControl_DW.State.velf[1];
  URControl_DW.errorInt_p[1] += rtb_TmpSignalConversionAtSFun_2 / 500.0;
  rtb_att[1] = u0;
  Mv_min = rtb_TmpSignalConversionAtSFun_2;

  /* MATLAB Function: '<S4>/position control' incorporates:
   *  MATLAB Function: '<S7>/basic estimators'
   */
  if ((rtb_sincos_o1[2] > -URControlParams.position_maxVel) || tmp_4) {
    u0 = rtb_sincos_o1[2];
  } else {
    u0 = -URControlParams.position_maxVel;
  }

  rtb_TmpSignalConversionAtSFun_2 = u0 - URControl_DW.State.velf[2];
  URControl_DW.errorInt_p[2] += rtb_TmpSignalConversionAtSFun_2 / 500.0;

  /* 'URpositionControl:24' intLim = URpar.position_intLim; */
  /* 'URpositionControl:25' errorInt = max(min(errorInt,intLim),-intLim); */
  tmp_4 = rtIsNaN(URControlParams.position_intLim);
  if ((URControl_DW.errorInt_p[0] < URControlParams.position_intLim) || tmp_4) {
    rtb_u2_idx_2 = URControl_DW.errorInt_p[0];
  } else {
    rtb_u2_idx_2 = URControlParams.position_intLim;
  }

  if ((URControl_DW.errorInt_p[1] < URControlParams.position_intLim) || tmp_4) {
    rtb_Product2 = URControl_DW.errorInt_p[1];
  } else {
    rtb_yawTarget = URControlParams.position_intLim;
  }

  if ((URControl_DW.errorInt_p[2] < URControlParams.position_intLim) || tmp_4) {
    u_max = URControl_DW.errorInt_p[2];
  } else {
    u_max = URControlParams.position_intLim;
  }

  /* 'URpositionControl:28' a_ref = URpar.position_Kp_vel.*errorVel*overallGain + URpar.position_Ki_vel.*errorInt*overallGain; */
  tmp_4 = rtIsNaN(-URControlParams.position_intLim);
  if ((rtb_u2_idx_2 > -URControlParams.position_intLim) || tmp_4) {
    URControl_DW.errorInt_p[0] = rtb_u2_idx_2;
  } else {
    URControl_DW.errorInt_p[0] = -URControlParams.position_intLim;
  }

  rtb_u2_idx_0 = URControlParams.position_Kp_vel[0] * rtb_u2_idx_0 *
    rtb_TmpSignalConversionAtSFun_4 + URControlParams.position_Ki_vel[0] *
    URControl_DW.errorInt_p[0] * rtb_TmpSignalConversionAtSFun_4;
  if ((rtb_Product2 > -URControlParams.position_intLim) || tmp_4) {
    URControl_DW.errorInt_p[1] = rtb_Product2;
  } else {
    URControl_DW.errorInt_p[1] = -URControlParams.position_intLim;
  }

  Mv_min = URControlParams.position_Kp_vel[1] * Mv_min *
    rtb_TmpSignalConversionAtSFun_4 + URControlParams.position_Ki_vel[1] *
    URControl_DW.errorInt_p[1] * rtb_TmpSignalConversionAtSFun_4;
  if ((u_max > -URControlParams.position_intLim) || tmp_4) {
    URControl_DW.errorInt_p[2] = u_max;
  } else {
    URControl_DW.errorInt_p[2] = -URControlParams.position_intLim;
  }

  rtb_TmpSignalConversionAtSFun_2 = URControlParams.position_Kp_vel[2] *
    rtb_TmpSignalConversionAtSFun_2 * rtb_TmpSignalConversionAtSFun_4 +
    URControlParams.position_Ki_vel[2] * URControl_DW.errorInt_p[2] *
    rtb_TmpSignalConversionAtSFun_4;

  /* 'URpositionControl:30' a_ref(3) = a_ref(3) - par.g; */
  /* 'URpositionControl:31' a_ref(3) = min(a_ref(3), par.URC.position_maxAref); */
  if (rtb_TmpSignalConversionAtSFun_2 - 9.81 < -2.0) {
    rtb_u2_idx_2 = rtb_TmpSignalConversionAtSFun_2 - 9.81;
  } else {
    rtb_u2_idx_2 = -2.0;
  }

  /* 'URpositionControl:34' maxLateral = abs(par.g*tan(maxAngle)); */
  /* 'URpositionControl:35' latRatio = sqrt(a_ref(1)^2 + a_ref(2)^2)/maxLateral; */
  rtb_TmpSignalConversionAtSFun_4 = std::sqrt(rtb_u2_idx_0 * rtb_u2_idx_0 +
    Mv_min * Mv_min) / std::abs(9.81 * std::tan(rtb_fcn5));

  /* 'URpositionControl:36' a_ref(1) = a_ref(1)/(max(latRatio,1)); */
  if (rtb_TmpSignalConversionAtSFun_4 > 1.0) {
    rtb_Product2 = rtb_TmpSignalConversionAtSFun_4;
  } else {
    rtb_Product2 = 1.0;
    rtb_TmpSignalConversionAtSFun_4 = 1.0;
  }

  rtb_u2_idx_0 /= rtb_Product2;

  /* 'URpositionControl:37' a_ref(2) = a_ref(2)/(max(latRatio,1)); */
  Mv_min /= rtb_TmpSignalConversionAtSFun_4;

  /* 'URpositionControl:43' n_des = a_ref/norm(a_ref); */
  rtb_TmpSignalConversionAtSFun_4 = 3.3121686421112381E-170;
  rtb_TmpSignalConversionAtSFun_2 = std::abs(rtb_u2_idx_0);
  if (rtb_TmpSignalConversionAtSFun_2 > 3.3121686421112381E-170) {
    rtb_fcn5 = 1.0;
    rtb_TmpSignalConversionAtSFun_4 = rtb_TmpSignalConversionAtSFun_2;
  } else {
    rtb_Product2 = rtb_TmpSignalConversionAtSFun_2 / 3.3121686421112381E-170;
    rtb_fcn5 = rtb_Product2 * rtb_Product2;
  }

  rtb_TmpSignalConversionAtSFun_2 = std::abs(Mv_min);
  if (rtb_TmpSignalConversionAtSFun_2 > rtb_TmpSignalConversionAtSFun_4) {
    rtb_Product2 = rtb_TmpSignalConversionAtSFun_4 /
      rtb_TmpSignalConversionAtSFun_2;
    rtb_fcn5 = rtb_fcn5 * rtb_Product2 * rtb_Product2 + 1.0;
    rtb_TmpSignalConversionAtSFun_4 = rtb_TmpSignalConversionAtSFun_2;
  } else {
    rtb_Product2 = rtb_TmpSignalConversionAtSFun_2 /
      rtb_TmpSignalConversionAtSFun_4;
    rtb_fcn5 += rtb_Product2 * rtb_Product2;
  }

  rtb_TmpSignalConversionAtSFun_2 = std::abs(rtb_u2_idx_2);
  if (rtb_TmpSignalConversionAtSFun_2 > rtb_TmpSignalConversionAtSFun_4) {
    rtb_Product2 = rtb_TmpSignalConversionAtSFun_4 /
      rtb_TmpSignalConversionAtSFun_2;
    rtb_fcn5 = rtb_fcn5 * rtb_Product2 * rtb_Product2 + 1.0;
    rtb_TmpSignalConversionAtSFun_4 = rtb_TmpSignalConversionAtSFun_2;
  } else {
    rtb_Product2 = rtb_TmpSignalConversionAtSFun_2 /
      rtb_TmpSignalConversionAtSFun_4;
    rtb_fcn5 += rtb_Product2 * rtb_Product2;
  }

  rtb_fcn5 = rtb_TmpSignalConversionAtSFun_4 * std::sqrt(rtb_fcn5);
  rtb_n_des[0] = rtb_u2_idx_0 / rtb_fcn5;
  rtb_n_des[1] = Mv_min / rtb_fcn5;
  rtb_n_des[2] = rtb_u2_idx_2 / rtb_fcn5;

  /* 'URpositionControl:45' if URpar.position_enable == 0 */
  if (URControlParams.position_enable == 0.0) {
    /* 'URpositionControl:46' n_des = [0, 0, -1]; */
    rtb_n_des[0] = 0.0;
    rtb_n_des[1] = 0.0;
    rtb_n_des[2] = -1.0;
  }

  /* 'URpositionControl:50' daq.velTarget = velTarget; */
  /* 'URpositionControl:51' daq.a_ref = a_ref; */
  /* 'URpositionControl:52' daq.n_des = n_des; */
  URControl_DW.DAQ.velTarget[0] = rtb_att[0];
  URControl_DW.DAQ.a_ref[0] = rtb_u2_idx_0;
  URControl_DW.DAQ.n_des[0] = rtb_n_des[0];
  URControl_DW.DAQ.velTarget[1] = rtb_att[1];
  URControl_DW.DAQ.a_ref[1] = Mv_min;
  URControl_DW.DAQ.n_des[1] = rtb_n_des[1];
  URControl_DW.DAQ.velTarget[2] = u0;
  URControl_DW.DAQ.a_ref[2] = rtb_u2_idx_2;
  URControl_DW.DAQ.n_des[2] = rtb_n_des[2];

  /* DiscreteStateSpace: '<S5>/Discrete State-Space' */
  {
    rtb_DiscreteStateSpace[0] = (1.0)*URControl_DW.DiscreteStateSpace_DSTATE[0];
    rtb_DiscreteStateSpace[1] = (1.0)*URControl_DW.DiscreteStateSpace_DSTATE[1];
    rtb_DiscreteStateSpace[2] = (1.0)*URControl_DW.DiscreteStateSpace_DSTATE[2];
  }

  /* MATLAB Function: '<S4>/yaw rate control' incorporates:
   *  DiscreteIntegrator: '<S18>/Integrator'
   *  MATLAB Function: '<S7>/basic estimators'
   */
  /* :  [r_cmd, DAQ] = URYawControl(inputs, state, DAQ, par, URControlParams); */
  /* 'URYawControl:3' psiError = inputs.yawTarget - state.att(3); */
  /* 'URYawControl:4' psi_dot_cmd = psiError*URpar.YRC_Kp_psi; */
  /* 'URYawControl:6' r_cmd = psi_dot_cmd*cos(state.att(1))*cos(state.att(2))-sin(state.att(1))*state.omegaf(2); */
  rtb_fcn5 = (URControl_DW.Integrator_DSTATE_i - URControl_DW.State.att[2]) *
    URControlParams.YRC_Kp_psi * std::cos(URControl_DW.State.att[0]) * std::cos
    (URControl_DW.State.att[1]) - std::sin(URControl_DW.State.att[0]) *
    URControl_DW.State.omegaf[1];

  /* 'URYawControl:8' if URpar.YRC_mode == 2 */
  if (URControlParams.YRC_mode == 2.0) {
    /* 'URYawControl:9' r_cmd = URpar.YRC_rateCmd; */
    rtb_fcn5 = URControlParams.YRC_rateCmd;
  }

  /* 'URYawControl:13' if state.fail_id > 0 */
  if (URControl_DW.State.fail_id > 0.0) {
    /* 'URYawControl:14' yawDirection = (-1)^(state.fail_id); */
    /* 'URYawControl:15' r_cmd = yawDirection*URpar.YRC_r_cmd_fail; */
    rtb_fcn5 = rt_powd_snf(-1.0, URControl_DW.State.fail_id) *
      URControlParams.YRC_r_cmd_fail;
  }

  /* 'URYawControl:19' if URpar.YRC_enable == 0 */
  if (URControlParams.YRC_enable == 0.0) {
    /* 'URYawControl:20' r_cmd = 0; */
    rtb_fcn5 = 0.0;
  }

  /* 'URYawControl:25' daq.r_cmd = r_cmd; */
  URControl_DW.DAQ.r_cmd = rtb_fcn5;

  /* MATLAB Function: '<S5>/attitude controller' incorporates:
   *  MATLAB Function: '<S4>/yaw rate control'
   *  MATLAB Function: '<S5>/yawRateControl'
   *  MATLAB Function: '<S7>/basic estimators'
   */
  /* :  [pqr_des, uvr_des, w_max, w_min, MzGain, DAQ] = URAttitudeController(state, DAQ, uv_prec, precAngle, w_min, w_max, MzGain, nd_i,ndi_dot,r_cmd,par,URControlParams); */
  /* 'URAttitudeController:7' primAxis = [-sin(precAngle(2)), sin(precAngle(1)), -1*cos(precAngle(1))*cos(precAngle(2))]; */
  /* 'URAttitudeController:9' [uv_attCtrl, rotVec, daq] = URAngleControl(daq, nd_i, primAxis, state, par, URpar); */
  tmp_1[0] = -std::sin(rtb_precAngle_idx_1);
  tmp_1[1] = std::sin(rtb_pos_idx_0);
  tmp_1[2] = -std::cos(rtb_pos_idx_0) * std::cos(rtb_precAngle_idx_1);
  URControl_URAngleControl(&URControl_DW.DAQ, rtb_n_des, tmp_1,
    &URControl_DW.State, &URControl_ConstP.pooled3, &URControlParams, uv_attCtrl,
    uv_des);

  /* 'URAttitudeController:12' uv_des_raw = (uv_prec + uv_attCtrl); */
  dummy_idx_0 += uv_attCtrl[0];
  dummy_idx_1 += uv_attCtrl[1];

  /* 'URAttitudeController:19' if URpar.envp_enable == 1 */
  if (URControlParams.envp_enable == 1.0) {
    /* 'URAttitudeController:20' uv_des = min(max(uv_des_raw, state.uv_min), state.uv_max); */
    if ((dummy_idx_0 > URControl_DW.State.uv_min[0]) || rtIsNaN
        (URControl_DW.State.uv_min[0])) {
      rtb_pos_idx_0 = dummy_idx_0;
    } else {
      rtb_pos_idx_0 = URControl_DW.State.uv_min[0];
    }

    if ((rtb_pos_idx_0 < URControl_DW.State.uv_max[0]) || rtIsNaN
        (URControl_DW.State.uv_max[0])) {
      uv_des[0] = rtb_pos_idx_0;
    } else {
      uv_des[0] = URControl_DW.State.uv_max[0];
    }

    if ((dummy_idx_1 > URControl_DW.State.uv_min[1]) || rtIsNaN
        (URControl_DW.State.uv_min[1])) {
      rtb_pos_idx_0 = dummy_idx_1;
    } else {
      rtb_pos_idx_0 = URControl_DW.State.uv_min[1];
    }

    if ((rtb_pos_idx_0 < URControl_DW.State.uv_max[1]) || rtIsNaN
        (URControl_DW.State.uv_max[1])) {
      uv_des[1] = rtb_pos_idx_0;
    } else {
      uv_des[1] = URControl_DW.State.uv_max[1];
    }
  } else {
    /* 'URAttitudeController:21' else */
    /* 'URAttitudeController:22' uv_des = uv_des_raw; */
    uv_des[0] = dummy_idx_0;
    uv_des[1] = dummy_idx_1;
  }

  /* 'URAttitudeController:26' uv_des = max(min(uv_des,URpar.attitude_maxuv_des),-URpar.attitude_maxuv_des); */
  tmp_4 = rtIsNaN(URControlParams.attitude_maxuv_des);
  if ((uv_des[0] < URControlParams.attitude_maxuv_des) || tmp_4) {
    rtb_pos_idx_0 = uv_des[0];
  } else {
    rtb_pos_idx_0 = URControlParams.attitude_maxuv_des;
  }

  tmp_5 = rtIsNaN(-URControlParams.attitude_maxuv_des);
  if ((rtb_pos_idx_0 > -URControlParams.attitude_maxuv_des) || tmp_5) {
    rtb_u2_idx_2 = rtb_pos_idx_0;
    b_z1[0] = rtb_pos_idx_0;
  } else {
    rtb_u2_idx_2 = -URControlParams.attitude_maxuv_des;
    b_z1[0] = -URControlParams.attitude_maxuv_des;
  }

  if ((uv_des[1] < URControlParams.attitude_maxuv_des) || tmp_4) {
    rtb_pos_idx_0 = uv_des[1];
  } else {
    rtb_pos_idx_0 = URControlParams.attitude_maxuv_des;
  }

  if ((rtb_pos_idx_0 > -URControlParams.attitude_maxuv_des) || tmp_5) {
    b_z1[1] = rtb_pos_idx_0;
  } else {
    rtb_pos_idx_0 = -URControlParams.attitude_maxuv_des;
    b_z1[1] = -URControlParams.attitude_maxuv_des;
  }

  /* 'URAttitudeController:29' pq_des = par.URC.R_xy_uv\uv_des; */
  if (std::abs(URControl_ConstP.pooled3.URC.R_xy_uv[1]) > std::abs
      (URControl_ConstP.pooled3.URC.R_xy_uv[0])) {
    i = 1;
    r2 = 0;
  } else {
    i = 0;
    r2 = 1;
  }

  rtb_TmpSignalConversionAtSFun_4 = URControl_ConstP.pooled3.URC.R_xy_uv[r2] /
    URControl_ConstP.pooled3.URC.R_xy_uv[i];
  rtb_TmpSignalConversionAtSFun_2 = URControl_ConstP.pooled3.URC.R_xy_uv[2 + i];
  uv_des[1] = (b_z1[r2] - b_z1[i] * rtb_TmpSignalConversionAtSFun_4) /
    (URControl_ConstP.pooled3.URC.R_xy_uv[2 + r2] -
     rtb_TmpSignalConversionAtSFun_2 * rtb_TmpSignalConversionAtSFun_4);
  uv_des[0] = (b_z1[i] - rtb_TmpSignalConversionAtSFun_2 * uv_des[1]) /
    URControl_ConstP.pooled3.URC.R_xy_uv[i];

  /* 'URAttitudeController:31' pqr_des = [pq_des; r_cmd]; */
  rtb_sincos_o1[2] = rtb_fcn5;

  /* 'URAttitudeController:32' uvr_des = [uv_des; r_cmd]; */
  rtb_att[0] = rtb_u2_idx_2;
  rtb_att[1] = rtb_pos_idx_0;
  rtb_att[2] = rtb_fcn5;

  /* 'URAttitudeController:35' daq.pqr_des = pqr_des; */
  /* 'URAttitudeController:36' daq.uvr_des = uvr_des; */
  URControl_DW.DAQ.pqr_des[0] = uv_des[0];
  URControl_DW.DAQ.uvr_des[0] = b_z1[0];
  URControl_DW.DAQ.pqr_des[1] = uv_des[1];
  URControl_DW.DAQ.uvr_des[1] = b_z1[1];
  URControl_DW.DAQ.pqr_des[2] = rtb_fcn5;
  URControl_DW.DAQ.uvr_des[2] = rtb_fcn5;

  /* 'URAttitudeController:37' daq.uv_des_raw = uv_des_raw; */
  /* 'URAttitudeController:38' daq.uv_des = uv_des; */
  /* 'URAttitudeController:39' daq.uv_attCtrl = uv_attCtrl; */
  URControl_DW.DAQ.uv_des_raw[0] = dummy_idx_0;
  URControl_DW.DAQ.uv_des[0] = rtb_u2_idx_2;
  URControl_DW.DAQ.uv_attCtrl[0] = uv_attCtrl[0];
  URControl_DW.DAQ.uv_des_raw[1] = dummy_idx_1;
  URControl_DW.DAQ.uv_des[1] = rtb_pos_idx_0;
  URControl_DW.DAQ.uv_attCtrl[1] = uv_attCtrl[1];

  /* 'URAttitudeController:40' daq.w_max = w_max; */
  /* 'URAttitudeController:41' daq.w_min = w_min; */
  URControl_DW.DAQ.w_max[0] = FMin[0];
  URControl_DW.DAQ.w_min[0] = 0.0;
  URControl_DW.DAQ.w_max[1] = 1200.0;
  URControl_DW.DAQ.w_min[1] = rtb_TmpSignalConversionAtSFun_3;
  URControl_DW.DAQ.w_max[2] = FMin[2];
  URControl_DW.DAQ.w_min[2] = 0.0;
  URControl_DW.DAQ.w_max[3] = 1200.0;
  URControl_DW.DAQ.w_min[3] = rtb_TmpSignalConversionAtSFun_1;

  /* 'URAttitudeController:42' daq.MzGain = MzGain; */
  URControl_DW.DAQ.MzGain = rtb_enableMeas;

  /* MATLAB Function: '<S4>/altitude control' incorporates:
   *  DiscreteIntegrator: '<S13>/Integrator'
   *  MATLAB Function: '<S7>/basic estimators'
   */
  /* :  [Ftot_ref, DAQ] = URAltitudeControl(inputs, state, DAQ, par, URControlParams); */
  /* 'URAltitudeControl:3' if isempty(errorInt) */
  /* 'URAltitudeControl:6' errorPos = inputs.zTarget  - state.pos(3); */
  /* 'URAltitudeControl:7' velTarget = URpar.altitude_Kp_pos.*errorPos; */
  /* 'URAltitudeControl:8' if state.fail_id > 0 */
  if (URControl_DW.State.fail_id > 0.0) {
    /* 'URAltitudeControl:9' maxVel = URpar.altitude_maxVelFail; */
    rtb_TmpSignalConversionAtSFun_4 = URControlParams.altitude_maxVelFail;
  } else {
    /* 'URAltitudeControl:10' else */
    /* 'URAltitudeControl:11' maxVel = URpar.altitude_maxVel; */
    rtb_TmpSignalConversionAtSFun_4 = URControlParams.altitude_maxVel;
  }

  /* 'URAltitudeControl:13' velTarget = max(min(velTarget,maxVel),-maxVel); */
  /* 'URAltitudeControl:17' errorVel = velTarget - state.vel(3); */
  u0 = (URControl_DW.Integrator_DSTATE[2] - URControl_DW.State.pos[2]) *
    URControlParams.altitude_Kp_pos;
  if ((!(u0 < rtb_TmpSignalConversionAtSFun_4)) && (!rtIsNaN
       (rtb_TmpSignalConversionAtSFun_4))) {
    u0 = rtb_TmpSignalConversionAtSFun_4;
  }

  if ((!(u0 > -rtb_TmpSignalConversionAtSFun_4)) && (!rtIsNaN
       (-rtb_TmpSignalConversionAtSFun_4))) {
    u0 = -rtb_TmpSignalConversionAtSFun_4;
  }

  rtb_TmpSignalConversionAtSFun_4 = u0 - URControl_DW.State.vel[2];

  /* 'URAltitudeControl:18' errorInt = errorInt + errorVel/par.freq; */
  URControl_DW.errorInt_b += rtb_TmpSignalConversionAtSFun_4 / 500.0;

  /* 'URAltitudeControl:19' intLim = URpar.altitude_intLim; */
  /* 'URAltitudeControl:20' errorInt = max(min(errorInt,intLim),-intLim); */
  if ((URControl_DW.errorInt_b < URControlParams.altitude_intLim) || rtIsNaN
      (URControlParams.altitude_intLim)) {
    u0 = URControl_DW.errorInt_b;
  } else {
    u0 = URControlParams.altitude_intLim;
  }

  if ((u0 > -URControlParams.altitude_intLim) || rtIsNaN
      (-URControlParams.altitude_intLim)) {
    URControl_DW.errorInt_b = u0;
  } else {
    URControl_DW.errorInt_b = -URControlParams.altitude_intLim;
  }

  /* 'URAltitudeControl:23' az_ref = URpar.altitude_Kp_vel.*errorVel + URpar.altitude_Ki_vel.*errorInt; */
  /* 'URAltitudeControl:24' peakAngle = URpar.altitude_peakAngle; */
  /* 'URAltitudeControl:28' multiFactor = 1/(cos(max(min(state.att(1),peakAngle),-peakAngle))*cos(max(min(state.att(2),peakAngle),-peakAngle))); */
  /* 'URAltitudeControl:29' Ftot_ref = -(az_ref - par.g)*par.mass*multiFactor; */
  /* 'URAltitudeControl:30' Ftot_ref = max(Ftot_ref,0); */
  tmp_4 = rtIsNaN(URControlParams.altitude_peakAngle);
  if ((URControl_DW.State.att[1] < URControlParams.altitude_peakAngle) || tmp_4)
  {
    u0 = URControl_DW.State.att[1];
  } else {
    u0 = URControlParams.altitude_peakAngle;
  }

  if ((URControl_DW.State.att[0] < URControlParams.altitude_peakAngle) || tmp_4)
  {
    rtb_TmpSignalConversionAtSFun_2 = URControl_DW.State.att[0];
  } else {
    rtb_TmpSignalConversionAtSFun_2 = URControlParams.altitude_peakAngle;
  }

  tmp_4 = rtIsNaN(-URControlParams.altitude_peakAngle);
  if ((!(rtb_TmpSignalConversionAtSFun_2 > -URControlParams.altitude_peakAngle))
      && (!tmp_4)) {
    rtb_TmpSignalConversionAtSFun_2 = -URControlParams.altitude_peakAngle;
  }

  if ((!(u0 > -URControlParams.altitude_peakAngle)) && (!tmp_4)) {
    u0 = -URControlParams.altitude_peakAngle;
  }

  rtb_TmpSignalConversionAtSFun_4 = -((URControlParams.altitude_Kp_vel *
    rtb_TmpSignalConversionAtSFun_4 + URControlParams.altitude_Ki_vel *
    URControl_DW.errorInt_b) - 9.81) * 0.374 * (1.0 / (std::cos
    (rtb_TmpSignalConversionAtSFun_2) * std::cos(u0)));
  if (!(rtb_TmpSignalConversionAtSFun_4 > 0.0)) {
    rtb_TmpSignalConversionAtSFun_4 = 0.0;
  }

  /* 'URAltitudeControl:31' maxAngle = max(abs(state.att(1)),abs(state.att(2))); */
  u0 = std::abs(URControl_DW.State.att[0]);
  rtb_fcn5 = std::abs(URControl_DW.State.att[1]);
  if ((u0 > rtb_fcn5) || rtIsNaN(rtb_fcn5)) {
    rtb_fcn5 = u0;
  }

  /* 'URAltitudeControl:32' if maxAngle > URpar.altitude_peakAngle */
  if (rtb_fcn5 > URControlParams.altitude_peakAngle) {
    /* 'URAltitudeControl:34' redFactor = 1 - (maxAngle - URpar.altitude_peakAngle)/(URpar.altitude_LOCAngle - URpar.altitude_peakAngle); */
    /* 'URAltitudeControl:35' redFactor = max(min(redFactor,1),0); */
    /* 'URAltitudeControl:36' Ftot_ref = Ftot_ref*redFactor; */
    u0 = 1.0 - (rtb_fcn5 - URControlParams.altitude_peakAngle) /
      (URControlParams.altitude_LOCAngle - URControlParams.altitude_peakAngle);
    if (!(u0 < 1.0)) {
      u0 = 1.0;
    }

    if (!(u0 > 0.0)) {
      u0 = 0.0;
    }

    rtb_TmpSignalConversionAtSFun_4 *= u0;
  }

  /* 'URAltitudeControl:42' maxFtot = sum(state.FMax)*URpar.altitude_maxFPerc; */
  /* 'URAltitudeControl:43' Ftot_ref = min(Ftot_ref,maxFtot); */
  rtb_TmpSignalConversionAtSFun_2 = (((URControl_DW.State.FMax[0] +
    URControl_DW.State.FMax[1]) + URControl_DW.State.FMax[2]) +
    URControl_DW.State.FMax[3]) * URControlParams.altitude_maxFPerc;
  if ((!(rtb_TmpSignalConversionAtSFun_4 < rtb_TmpSignalConversionAtSFun_2)) &&
      (!rtIsNaN(rtb_TmpSignalConversionAtSFun_2))) {
    rtb_TmpSignalConversionAtSFun_4 = rtb_TmpSignalConversionAtSFun_2;
  }

  /* 'URAltitudeControl:45' if URpar.altitude_enable == 0 */
  if (URControlParams.altitude_enable == 0.0) {
    /* 'URAltitudeControl:46' Ftot_ref = par.g*par.mass; */
    rtb_TmpSignalConversionAtSFun_4 = 3.66894;
  }

  /* 'URAltitudeControl:50' daq.Ftot_ref = Ftot_ref; */
  URControl_DW.DAQ.Ftot_ref = rtb_TmpSignalConversionAtSFun_4;

  /* MATLAB Function: '<S8>/control allocator' incorporates:
   *  MATLAB Function: '<S4>/altitude control'
   *  MATLAB Function: '<S5>/attitude controller'
   *  MATLAB Function: '<S5>/yawRateControl'
   *  MATLAB Function: '<S7>/basic estimators'
   */
  /* :  [wRotorSet, DAQ] = URControl_alloc(state, DAQ, pqr_des, uvr_des, w_max, w_min, MzGain, Ftot_ref, par, URControlParams); */
  /* 'URControl_alloc:3' if isempty(y_state_prev) */
  /* 'URControl_alloc:4' if isempty(Fset_prev) */
  /* 'URControl_alloc:5' if isempty(M_uvr_set) */
  /* 'URControl_alloc:6' if isempty(omegaDot) */
  if (!URControl_DW.omegaDot_not_empty) {
    /* 'URControl_alloc:6' omegaDot = SimpleDerivative(URpar.rate_INDI_omegaDotFilterT, [0,0,0], 300, -300); */
    tmp_1[0] = 0.0;
    tmp_1[1] = 0.0;
    tmp_1[2] = 0.0;
    SimpleDerivative_SimpleDerivati(&URControl_DW.omegaDot,
      URControlParams.rate_INDI_omegaDotFilterT, tmp_1, 300.0, -300.0);
    URControl_DW.omegaDot_not_empty = true;
  }

  /* 'URControl_alloc:7' if isempty(accZFilt) */
  if (!URControl_DW.accZFilt_not_empty) {
    /* 'URControl_alloc:7' accZFilt = LPFilter(URpar.rate_INDI_accZFilterT, 0, 30, -30); */
    URControl_LPFilter_LPFilter_n(&URControl_DW.accZFilt,
      URControlParams.rate_INDI_accZFilterT);
    URControl_DW.accZFilt_not_empty = true;
  }

  /* 'URControl_alloc:9' wRotorSet = [0;0;0;0]; */
  qconj[0] = 0.0;
  qconj[1] = 0.0;
  qconj[2] = 0.0;
  qconj[3] = 0.0;

  /* 'URControl_alloc:11' if URpar.rate_mode == 1 */
  if (URControlParams.rate_mode == 1.0) {
    /* 'URControl_alloc:13' error = pqr_des - state.omegaf'; */
    /* 'URControl_alloc:14' pqr_des_dot = error.*URpar.rate_INDI_rateDotKp'; */
    rtb_sincos_o1[0] = (uv_des[0] - URControl_DW.State.omegaf[0]) *
      URControlParams.rate_INDI_rateDotKp[0];
    rtb_sincos_o1[1] = (uv_des[1] - URControl_DW.State.omegaf[1]) *
      URControlParams.rate_INDI_rateDotKp[1];
    dummy_idx_1 = (rtb_sincos_o1[2] - URControl_DW.State.omegaf[2]) *
      URControlParams.rate_INDI_rateDotKp[2];

    /* 'URControl_alloc:15' acc_z_des = -Ftot_ref/URpar.mass; */
    /* 'URControl_alloc:16' v = [pqr_des_dot; acc_z_des]; */
    /* 'URControl_alloc:18' omegaDot.updateFilterT(URpar.rate_INDI_omegaDotFilterT); */
    /* 'SimpleDerivative:23' obj.filterHandle.updateFilterT(filterT); */
    /* 'LPFilter:26' obj.filterT = filterT; */
    URControl_DW.omegaDot.filterHandle.filterT =
      URControlParams.rate_INDI_omegaDotFilterT;

    /* 'URControl_alloc:19' omegaDot.update(state.omega, 1/par.freq); */
    URContr_SimpleDerivative_update(&URControl_DW.omegaDot,
      URControl_DW.State.omega, 0.002);

    /* 'URControl_alloc:20' accZFilt.updateFilterT(URpar.rate_INDI_accZFilterT); */
    /* 'LPFilter:26' obj.filterT = filterT; */
    URControl_DW.accZFilt.filterT = URControlParams.rate_INDI_accZFilterT;

    /* 'URControl_alloc:21' accZFilt.update(state.acc(3)); */
    /* 'LPFilter:21' obj.value = obj.value*obj.filterT + newValue*(1 - obj.filterT); */
    URControl_DW.accZFilt.value = (1.0 - URControl_DW.accZFilt.filterT) *
      URControl_DW.State.acc[2] + URControl_DW.accZFilt.value *
      URControl_DW.accZFilt.filterT;

    /* 'LPFilter:22' obj.value = max(min(obj.value,obj.maxLim),obj.minLim); */
    rtb_enableMeas = URControl_DW.accZFilt.value;
    rtb_fcn5 = URControl_DW.accZFilt.maxLim;
    rtb_TmpSignalConversionAtSFun_2 = URControl_DW.accZFilt.minLim;
    if ((rtb_enableMeas < rtb_fcn5) || rtIsNaN(rtb_fcn5)) {
      rtb_fcn5 = rtb_enableMeas;
    }

    if ((rtb_fcn5 > rtb_TmpSignalConversionAtSFun_2) || rtIsNaN
        (rtb_TmpSignalConversionAtSFun_2)) {
      URControl_DW.accZFilt.value = rtb_fcn5;
    } else {
      URControl_DW.accZFilt.value = rtb_TmpSignalConversionAtSFun_2;
    }

    /* 'URControl_alloc:23' [w_cmd]  = URINDI_allocator(state.fail_id, omegaDot.derValue', accZFilt.value, v, URpar.rate_INDI_G, [], state.wRotor', par); */
    tmp_1[0] = URControl_DW.omegaDot.derValue[0];
    tmp_1[1] = URControl_DW.omegaDot.derValue[1];
    tmp_1[2] = URControl_DW.omegaDot.derValue[2];
    rtb_TmpSignalConversionAtSFun_0[0] = rtb_sincos_o1[0];
    rtb_TmpSignalConversionAtSFun_0[1] = rtb_sincos_o1[1];
    rtb_TmpSignalConversionAtSFun_0[2] = dummy_idx_1;
    rtb_TmpSignalConversionAtSFun_0[3] = -rtb_TmpSignalConversionAtSFun_4 /
      URControlParams.mass;
    memcpy(&tmp_0[0], &URControlParams.rate_INDI_G[0], sizeof(real_T) << 5U);
    URControl_URINDI_allocator(URControl_DW.State.fail_id, tmp_1,
      URControl_DW.accZFilt.value, rtb_TmpSignalConversionAtSFun_0, tmp_0,
      URControl_DW.State.wRotor, 1256.0, 300.0, qconj);

    /* 'URControl_alloc:25' wRotorSet = w_cmd; */
    /* 'URControl_alloc:27' daq.pqr_des_dot = pqr_des_dot; */
    URControl_DW.DAQ.pqr_des_dot[0] = rtb_sincos_o1[0];
    URControl_DW.DAQ.pqr_des_dot[1] = rtb_sincos_o1[1];
    URControl_DW.DAQ.pqr_des_dot[2] = dummy_idx_1;

    /* 'URControl_alloc:28' daq.omegaDot = omegaDot.derValue; */
    URControl_DW.DAQ.omegaDot[0] = URControl_DW.omegaDot.derValue[0];
    URControl_DW.DAQ.omegaDot[1] = URControl_DW.omegaDot.derValue[1];
    URControl_DW.DAQ.omegaDot[2] = URControl_DW.omegaDot.derValue[2];
  } else if (URControlParams.rate_mode == 2.0) {
    /* 'URControl_alloc:30' elseif URpar.rate_mode == 2 */
    /* 'URControl_alloc:32' M_uvr = zeros(3,1); */
    rtb_sincos_o1[0] = 0.0;
    rtb_sincos_o1[1] = 0.0;
    rtb_sincos_o1[2] = 0.0;

    /* 'URControl_alloc:33' if URpar.rate_momentMode == 1 */
    if (URControlParams.rate_momentMode == 1.0) {
      /* 'URControl_alloc:34' [M_uvr, daq] = PIDMomentGen(state, daq, uvr_des, URpar, par); */
      URControl_PIDMomentGen(URControl_DW.State.omegaUV,
        URControl_DW.State.omegafUV, &URControl_DW.DAQ, rtb_att,
        URControlParams.Iz, URControlParams.Iu, URControlParams.Iv,
        URControlParams.rate_MPID_rateDotKp, URControlParams.rate_MPID_rateDotKi,
        URControlParams.rate_MPID_rateDotKd,
        URControlParams.rate_MPID_derFilterT,
        URControlParams.rate_MPID_uvrdesderFilterT,
        URControlParams.rate_MPID_maxInt, URControlParams.rate_MPID_precGain,
        500.0, rtb_sincos_o1);
    } else {
      if (URControlParams.rate_momentMode == 2.0) {
        /* 'URControl_alloc:35' elseif URpar.rate_momentMode == 2 */
        /* 'URControl_alloc:36' [M_uvr, daq] = INDIMomentGen(state, daq, uvr_des, M_uvr_set, URpar, par); */
        URControl_INDIMomentGen(URControl_DW.State.wRotor,
          URControl_DW.State.omegaUV, URControl_DW.State.omegafUV,
          &URControl_DW.DAQ, rtb_att, URControlParams.k0, URControlParams.t0,
          URControlParams.s, URControlParams.est_omegaFilterT,
          URControlParams.rate_MINDI_rateDotKp,
          URControlParams.rate_MINDI_derFilterT, URControlParams.rate_MINDI_MKp,
          500.0, rtb_sincos_o1);
      }
    }

    /* 'URControl_alloc:39' M_uvr = max(min(M_uvr, URpar.rate_maxMoments'), -URpar.rate_maxMoments'); */
    if ((rtb_sincos_o1[0] < URControlParams.rate_maxMoments[0]) || rtIsNaN
        (URControlParams.rate_maxMoments[0])) {
      rtb_att[0] = rtb_sincos_o1[0];
    } else {
      rtb_att[0] = URControlParams.rate_maxMoments[0];
    }

    if ((rtb_sincos_o1[1] < URControlParams.rate_maxMoments[1]) || rtIsNaN
        (URControlParams.rate_maxMoments[1])) {
      rtb_att[1] = rtb_sincos_o1[1];
    } else {
      rtb_att[1] = URControlParams.rate_maxMoments[1];
    }

    if ((rtb_sincos_o1[2] < URControlParams.rate_maxMoments[2]) || rtIsNaN
        (URControlParams.rate_maxMoments[2])) {
      rtb_att[2] = rtb_sincos_o1[2];
    } else {
      rtb_att[2] = URControlParams.rate_maxMoments[2];
    }

    if ((rtb_att[0] > -URControlParams.rate_maxMoments[0]) || rtIsNaN
        (-URControlParams.rate_maxMoments[0])) {
      rtb_u2_idx_2 = rtb_att[0];
    } else {
      rtb_u2_idx_2 = -URControlParams.rate_maxMoments[0];
    }

    if ((rtb_att[1] > -URControlParams.rate_maxMoments[1]) || rtIsNaN
        (-URControlParams.rate_maxMoments[1])) {
      rtb_Product2 = rtb_att[1];
    } else {
      rtb_Product2 = -URControlParams.rate_maxMoments[1];
    }

    if ((rtb_att[2] > -URControlParams.rate_maxMoments[2]) || rtIsNaN
        (-URControlParams.rate_maxMoments[2])) {
      u_max = rtb_att[2];
    } else {
      u_max = -URControlParams.rate_maxMoments[2];
    }

    /* 'URControl_alloc:42' refStruct.MuRef = M_uvr(1); */
    /* 'URControl_alloc:42' refStruct.MvRef = M_uvr(2); */
    /* 'URControl_alloc:42' refStruct.MzRef = M_uvr(3); */
    /* 'URControl_alloc:42' refStruct.FtotRef = Ftot_ref; */
    /* 'URControl_alloc:43' gains = struct(); */
    /* 'URControl_alloc:43' gains.MuGain = URpar.rate_MuGain; */
    /* 'URControl_alloc:43' gains.MvGain = URpar.rate_MvGain; */
    /* 'URControl_alloc:44' gains.FtotGain = URpar.rate_FtotGain; */
    /* 'URControl_alloc:44' gains.FGain = URpar.rate_FGain; */
    /* 'URControl_alloc:44' gains.MzGain = MzGain; */
    /* 'URControl_alloc:47' y_state_initial = y_state_prev; */
    /* 'URControl_alloc:49' [x,y_state,iter,optimal] = controlAllocQPQuick(refStruct, state.FMax, state.FMin, gains, y_state_initial, par, URpar); */
    URControl_controlAllocQPQuick(rtb_u2_idx_2, rtb_Product2, u_max,
      rtb_TmpSignalConversionAtSFun_4, URControl_DW.State.FMax,
      URControl_DW.State.FMin, URControlParams.rate_MuGain,
      URControlParams.rate_MvGain, URControlParams.rate_FtotGain,
      URControlParams.rate_FGain, rtb_enableMeas, URControl_DW.y_state_prev,
      1.9035E-6, 1.9202951E-8, 0.14450346016618426, URControlParams.rate_maxIter,
      rtb_TmpSignalConversionAtSFun_0, &URControl_DW.DAQ.iter, &rtb_fcn5);

    /* 'URControl_alloc:50' y_state_prev = y_state; */
    /* 'URControl_alloc:51' if optimal */
    if (rtb_fcn5 != 0.0) {
      /* 'URControl_alloc:52' Fset = x; */
      URControl_DW.Fset_prev[0] = rtb_TmpSignalConversionAtSFun_0[0];
      URControl_DW.Fset_prev[1] = rtb_TmpSignalConversionAtSFun_0[1];
      URControl_DW.Fset_prev[2] = rtb_TmpSignalConversionAtSFun_0[2];
      URControl_DW.Fset_prev[3] = rtb_TmpSignalConversionAtSFun_0[3];

      /* 'URControl_alloc:53' Fset_prev = Fset; */
    } else {
      /* 'URControl_alloc:54' else */
      /* 'URControl_alloc:55' Fset = Fset_prev*0.99; */
      URControl_DW.Fset_prev[0] *= 0.99;
      URControl_DW.Fset_prev[1] *= 0.99;
      URControl_DW.Fset_prev[2] *= 0.99;
      URControl_DW.Fset_prev[3] *= 0.99;

      /* 'URControl_alloc:56' Fset_prev = Fset; */
    }

    /* 'URControl_alloc:59' wRotorSet = sqrt(max(Fset,0)/URpar.k0); */
    if (URControl_DW.Fset_prev[0] > 0.0) {
      rtb_precAngle_idx_1 = URControl_DW.Fset_prev[0];
    } else {
      rtb_precAngle_idx_1 = 0.0;
    }

    qconj[0] = rtb_precAngle_idx_1 / URControlParams.k0;
    if (URControl_DW.Fset_prev[1] > 0.0) {
      rtb_precAngle_idx_1 = URControl_DW.Fset_prev[1];
    } else {
      rtb_precAngle_idx_1 = 0.0;
    }

    qconj[1] = rtb_precAngle_idx_1 / URControlParams.k0;
    if (URControl_DW.Fset_prev[2] > 0.0) {
      rtb_precAngle_idx_1 = URControl_DW.Fset_prev[2];
    } else {
      rtb_precAngle_idx_1 = 0.0;
    }

    qconj[2] = rtb_precAngle_idx_1 / URControlParams.k0;
    if (URControl_DW.Fset_prev[3] > 0.0) {
      rtb_precAngle_idx_1 = URControl_DW.Fset_prev[3];
    } else {
      rtb_precAngle_idx_1 = 0.0;
    }

    qconj[3] = rtb_precAngle_idx_1 / URControlParams.k0;
    URControl_sqrt(qconj);

    /* 'URControl_alloc:62' M_uvr_set(1) = (x(4) - x(2))*URpar.s; */
    URControl_DW.M_uvr_set[0] = (rtb_TmpSignalConversionAtSFun_0[3] -
      rtb_TmpSignalConversionAtSFun_0[1]) * URControlParams.s;

    /* 'URControl_alloc:63' M_uvr_set(2) = (x(1) - x(3))*URpar.s; */
    URControl_DW.M_uvr_set[1] = (rtb_TmpSignalConversionAtSFun_0[0] -
      rtb_TmpSignalConversionAtSFun_0[2]) * URControlParams.s;

    /* 'URControl_alloc:64' M_uvr_set(3) = (x(1) - x(2) + x(3) - x(4))*URpar.t0/URpar.k0; */
    URControl_DW.M_uvr_set[2] = (((rtb_TmpSignalConversionAtSFun_0[0] -
      rtb_TmpSignalConversionAtSFun_0[1]) + rtb_TmpSignalConversionAtSFun_0[2])
      - rtb_TmpSignalConversionAtSFun_0[3]) * URControlParams.t0 /
      URControlParams.k0;

    /* 'URControl_alloc:65' Ftot_set = sum(x); */
    /* 'URControl_alloc:68' daq.iter = iter; */
    /* 'URControl_alloc:69' daq.optimal = optimal; */
    URControl_DW.DAQ.optimal = rtb_fcn5;

    /* 'URControl_alloc:70' daq.M_uvr_des = M_uvr; */
    /* 'URControl_alloc:71' daq.M_uvr_set = M_uvr_set; */
    URControl_DW.DAQ.M_uvr_des[0] = rtb_u2_idx_2;
    URControl_DW.DAQ.M_uvr_set[0] = URControl_DW.M_uvr_set[0];
    URControl_DW.DAQ.M_uvr_des[1] = rtb_Product2;
    URControl_DW.DAQ.M_uvr_set[1] = URControl_DW.M_uvr_set[1];
    URControl_DW.DAQ.M_uvr_des[2] = u_max;
    URControl_DW.DAQ.M_uvr_set[2] = URControl_DW.M_uvr_set[2];

    /* 'URControl_alloc:72' daq.Ftot_set = Ftot_set; */
    URControl_DW.DAQ.Ftot_set = URControl_sum(rtb_TmpSignalConversionAtSFun_0);
  } else {
    if (URControlParams.rate_mode == 3.0) {
      /* 'URControl_alloc:74' elseif URpar.rate_mode == 3 */
      /* 'URControl_alloc:78' errorf = uvr_des' - state.omegafUV; */
      /* 'URControl_alloc:79' uvrDot_des = errorf.*URpar.rate_INDI_rateDotKp; */
      /* 'URControl_alloc:83' acc_z_des = -Ftot_ref/URpar.mass; */
      /* 'URControl_alloc:85' omegaDot.updateFilterT(URpar.rate_INDI_omegaDotFilterT) */
      /* 'SimpleDerivative:23' obj.filterHandle.updateFilterT(filterT); */
      /* 'LPFilter:26' obj.filterT = filterT; */
      URControl_DW.omegaDot.filterHandle.filterT =
        URControlParams.rate_INDI_omegaDotFilterT;

      /* 'URControl_alloc:86' omegaDot.update(state.omegaUV, 1/par.freq); */
      URContr_SimpleDerivative_update(&URControl_DW.omegaDot,
        URControl_DW.State.omegaUV, 0.002);

      /* 'URControl_alloc:87' accZFilt.updateFilterT(URpar.rate_INDI_accZFilterT); */
      /* 'LPFilter:26' obj.filterT = filterT; */
      URControl_DW.accZFilt.filterT = URControlParams.rate_INDI_accZFilterT;

      /* 'URControl_alloc:88' accZFilt.update(state.acc(3)); */
      /* 'LPFilter:21' obj.value = obj.value*obj.filterT + newValue*(1 - obj.filterT); */
      URControl_DW.accZFilt.value = (1.0 - URControl_DW.accZFilt.filterT) *
        URControl_DW.State.acc[2] + URControl_DW.accZFilt.value *
        URControl_DW.accZFilt.filterT;

      /* 'LPFilter:22' obj.value = max(min(obj.value,obj.maxLim),obj.minLim); */
      rtb_fcn5 = URControl_DW.accZFilt.value;
      rtb_TmpSignalConversionAtSFun_2 = URControl_DW.accZFilt.maxLim;
      rtb_Product2 = URControl_DW.accZFilt.minLim;
      if ((rtb_fcn5 < rtb_TmpSignalConversionAtSFun_2) || rtIsNaN
          (rtb_TmpSignalConversionAtSFun_2)) {
        rtb_TmpSignalConversionAtSFun_2 = rtb_fcn5;
      }

      if ((rtb_TmpSignalConversionAtSFun_2 > rtb_Product2) || rtIsNaN
          (rtb_Product2)) {
        URControl_DW.accZFilt.value = rtb_TmpSignalConversionAtSFun_2;
      } else {
        URControl_DW.accZFilt.value = rtb_Product2;
      }

      /* 'URControl_alloc:90' inp = -[omegaDot.derValue'; accZFilt.value] + [uvrDot_des';  acc_z_des]; */
      rtb_TmpSignalConversionAtSFun_2 = -URControl_DW.omegaDot.derValue[0];
      rtb_fcn5 = -URControl_DW.omegaDot.derValue[1];
      dummy_idx_0 = -URControl_DW.omegaDot.derValue[2];
      rtb_Product2 = -URControl_DW.accZFilt.value;

      /* 'URControl_alloc:91' inp = max(min(inp, par.URC.rate_QPINDI_maxInp), -par.URC.rate_QPINDI_maxInp); */
      dummy_idx_1 = (rtb_u2_idx_2 - URControl_DW.State.omegafUV[0]) *
        URControlParams.rate_INDI_rateDotKp[0] + rtb_TmpSignalConversionAtSFun_2;
      if (!(dummy_idx_1 < 100.0)) {
        dummy_idx_1 = 100.0;
      }

      if (dummy_idx_1 > -100.0) {
        rtb_TmpSignalConversionAtSFun_2 = dummy_idx_1;
      } else {
        rtb_TmpSignalConversionAtSFun_2 = -100.0;
      }

      dummy_idx_1 = (rtb_pos_idx_0 - URControl_DW.State.omegafUV[1]) *
        URControlParams.rate_INDI_rateDotKp[1] + rtb_fcn5;
      if (!(dummy_idx_1 < 100.0)) {
        dummy_idx_1 = 100.0;
      }

      if (dummy_idx_1 > -100.0) {
        rtb_fcn5 = dummy_idx_1;
      } else {
        rtb_fcn5 = -100.0;
      }

      dummy_idx_1 = (rtb_att[2] - URControl_DW.State.omegafUV[2]) *
        URControlParams.rate_INDI_rateDotKp[2] + dummy_idx_0;
      if (!(dummy_idx_1 < 20.0)) {
        dummy_idx_1 = 20.0;
      }

      if (dummy_idx_1 > -20.0) {
        dummy_idx_0 = dummy_idx_1;
      } else {
        dummy_idx_0 = -20.0;
      }

      dummy_idx_1 = -rtb_TmpSignalConversionAtSFun_4 / URControlParams.mass +
        rtb_Product2;
      if (!(dummy_idx_1 < 20.0)) {
        dummy_idx_1 = 20.0;
      }

      if (!(dummy_idx_1 > -20.0)) {
        dummy_idx_1 = -20.0;
      }

      /* 'URControl_alloc:93' inp_gain = max(min(abs(inp)./URpar.rate_QPINDI_cutoff, 1),URpar.rate_QPINDI_minGain); */
      /* 'URControl_alloc:94' inp = inp_gain.*inp; */
      rtb_TmpSignalConversionAtSFun_4 = std::abs(rtb_TmpSignalConversionAtSFun_2)
        / URControlParams.rate_QPINDI_cutoff[0];
      if (!(rtb_TmpSignalConversionAtSFun_4 < 1.0)) {
        rtb_TmpSignalConversionAtSFun_4 = 1.0;
      }

      tmp_4 = rtIsNaN(URControlParams.rate_QPINDI_minGain);
      if ((!(rtb_TmpSignalConversionAtSFun_4 >
             URControlParams.rate_QPINDI_minGain)) && (!tmp_4)) {
        rtb_TmpSignalConversionAtSFun_4 = URControlParams.rate_QPINDI_minGain;
      }

      dummy[0] = rtb_TmpSignalConversionAtSFun_4 *
        rtb_TmpSignalConversionAtSFun_2;
      rtb_TmpSignalConversionAtSFun_4 = std::abs(rtb_fcn5) /
        URControlParams.rate_QPINDI_cutoff[1];
      if (!(rtb_TmpSignalConversionAtSFun_4 < 1.0)) {
        rtb_TmpSignalConversionAtSFun_4 = 1.0;
      }

      if ((!(rtb_TmpSignalConversionAtSFun_4 >
             URControlParams.rate_QPINDI_minGain)) && (!tmp_4)) {
        rtb_TmpSignalConversionAtSFun_4 = URControlParams.rate_QPINDI_minGain;
      }

      dummy[1] = rtb_TmpSignalConversionAtSFun_4 * rtb_fcn5;
      rtb_TmpSignalConversionAtSFun_4 = std::abs(dummy_idx_0) /
        URControlParams.rate_QPINDI_cutoff[2];
      if (!(rtb_TmpSignalConversionAtSFun_4 < 1.0)) {
        rtb_TmpSignalConversionAtSFun_4 = 1.0;
      }

      if ((!(rtb_TmpSignalConversionAtSFun_4 >
             URControlParams.rate_QPINDI_minGain)) && (!tmp_4)) {
        rtb_TmpSignalConversionAtSFun_4 = URControlParams.rate_QPINDI_minGain;
      }

      dummy[2] = rtb_TmpSignalConversionAtSFun_4 * dummy_idx_0;
      rtb_TmpSignalConversionAtSFun_4 = std::abs(dummy_idx_1) /
        URControlParams.rate_QPINDI_cutoff[3];
      if (!(rtb_TmpSignalConversionAtSFun_4 < 1.0)) {
        rtb_TmpSignalConversionAtSFun_4 = 1.0;
      }

      if ((!(rtb_TmpSignalConversionAtSFun_4 >
             URControlParams.rate_QPINDI_minGain)) && (!tmp_4)) {
        rtb_TmpSignalConversionAtSFun_4 = URControlParams.rate_QPINDI_minGain;
      }

      rtb_u2_idx_2 = rtb_TmpSignalConversionAtSFun_4 * dummy_idx_1;
      dummy[3] = rtb_u2_idx_2;

      /* 'URControl_alloc:97' wMax = min(w_max, par.w_max); */
      /* 'URControl_alloc:98' wMin = max(w_min, par.w_min); */
      /* 'URControl_alloc:100' wMax = min(wMax, state.wRotor' + URpar.rate_QPINDI_dwMax); */
      /* 'URControl_alloc:101' wMin = max(wMin, state.wRotor' - URpar.rate_QPINDI_dwMax); */
      rtb_TmpSignalConversionAtSFun_4 = URControl_DW.State.wRotor[0] +
        URControlParams.rate_QPINDI_dwMax;
      if ((FMin[0] < rtb_TmpSignalConversionAtSFun_4) || rtIsNaN
          (rtb_TmpSignalConversionAtSFun_4)) {
        qconj[0] = FMin[0];
      } else {
        qconj[0] = rtb_TmpSignalConversionAtSFun_4;
      }

      rtb_TmpSignalConversionAtSFun_0[0] = URControl_DW.State.wRotor[0] -
        URControlParams.rate_QPINDI_dwMax;
      if (rtb_TmpSignalConversionAtSFun_3 > 300.0) {
        rtb_fcn5 = rtb_TmpSignalConversionAtSFun_3;
      } else {
        rtb_fcn5 = 300.0;
      }

      rtb_TmpSignalConversionAtSFun_4 = URControl_DW.State.wRotor[1] +
        URControlParams.rate_QPINDI_dwMax;
      if ((1200.0 < rtb_TmpSignalConversionAtSFun_4) || rtIsNaN
          (rtb_TmpSignalConversionAtSFun_4)) {
        qconj[1] = 1200.0;
      } else {
        qconj[1] = rtb_TmpSignalConversionAtSFun_4;
      }

      rtb_TmpSignalConversionAtSFun_0[1] = URControl_DW.State.wRotor[1] -
        URControlParams.rate_QPINDI_dwMax;
      rtb_TmpSignalConversionAtSFun_4 = URControl_DW.State.wRotor[2] +
        URControlParams.rate_QPINDI_dwMax;
      if ((FMin[2] < rtb_TmpSignalConversionAtSFun_4) || rtIsNaN
          (rtb_TmpSignalConversionAtSFun_4)) {
        qconj[2] = FMin[2];
      } else {
        qconj[2] = rtb_TmpSignalConversionAtSFun_4;
      }

      rtb_TmpSignalConversionAtSFun_0[2] = URControl_DW.State.wRotor[2] -
        URControlParams.rate_QPINDI_dwMax;
      if (rtb_TmpSignalConversionAtSFun_1 > 300.0) {
        dummy_idx_1 = rtb_TmpSignalConversionAtSFun_1;
      } else {
        dummy_idx_1 = 300.0;
      }

      rtb_TmpSignalConversionAtSFun_4 = URControl_DW.State.wRotor[3] +
        URControlParams.rate_QPINDI_dwMax;
      if ((1200.0 < rtb_TmpSignalConversionAtSFun_4) || rtIsNaN
          (rtb_TmpSignalConversionAtSFun_4)) {
        qconj[3] = 1200.0;
      } else {
        qconj[3] = rtb_TmpSignalConversionAtSFun_4;
      }

      rtb_TmpSignalConversionAtSFun_0[3] = URControl_DW.State.wRotor[3] -
        URControlParams.rate_QPINDI_dwMax;
      if ((300.0 > rtb_TmpSignalConversionAtSFun_0[0]) || rtIsNaN
          (rtb_TmpSignalConversionAtSFun_0[0])) {
        rtb_TmpSignalConversionAtSFun_4 = 300.0;
      } else {
        rtb_TmpSignalConversionAtSFun_4 = rtb_TmpSignalConversionAtSFun_0[0];
      }

      if ((rtb_fcn5 > rtb_TmpSignalConversionAtSFun_0[1]) || rtIsNaN
          (rtb_TmpSignalConversionAtSFun_0[1])) {
        rtb_Product2 = rtb_fcn5;
      } else {
        rtb_Product2 = rtb_TmpSignalConversionAtSFun_0[1];
      }

      if ((300.0 > rtb_TmpSignalConversionAtSFun_0[2]) || rtIsNaN
          (rtb_TmpSignalConversionAtSFun_0[2])) {
        u0 = 300.0;
      } else {
        u0 = rtb_TmpSignalConversionAtSFun_0[2];
      }

      /* 'URControl_alloc:103' if state.fail_id~=0 */
      if (URControl_DW.State.fail_id != 0.0) {
        /* 'URControl_alloc:104' wMax(state.fail_id) = par.w_min; */
        qconj[(int32_T)URControl_DW.State.fail_id - 1] = 300.0;
      }

      /* 'URControl_alloc:107' dw_lin_max = (wMax/100).^2 - (state.wRotor/100)'.^2; */
      /* 'URControl_alloc:108' dw_lin_min = (wMin/100).^2 - (state.wRotor/100)'.^2; */
      rtb_pos_idx_0 = qconj[0] / 100.0;
      rtb_TmpSignalConversionAtSFun_2 = rtb_pos_idx_0 * rtb_pos_idx_0;
      u_max = URControl_DW.State.wRotor[0] / 100.0;
      rtb_TmpSignalConversionAtSFun_0[0] = u_max * u_max;
      rtb_precAngle_idx_1 = u_max;
      rtb_TmpSignalConversionAtSFun_4 /= 100.0;
      rtb_pos_idx_0 = qconj[1] / 100.0;
      rtb_fcn5 = rtb_pos_idx_0 * rtb_pos_idx_0;
      u_max = URControl_DW.State.wRotor[1] / 100.0;
      rtb_TmpSignalConversionAtSFun_0[1] = u_max * u_max;
      rtb_u2_idx_0 = u_max;
      rtb_Product2 /= 100.0;
      rtb_pos_idx_0 = qconj[2] / 100.0;
      dummy_idx_0 = rtb_pos_idx_0 * rtb_pos_idx_0;
      u_max = URControl_DW.State.wRotor[2] / 100.0;
      rtb_TmpSignalConversionAtSFun_0[2] = u_max * u_max;
      Mv_min = u_max;
      u0 /= 100.0;
      rtb_pos_idx_0 = qconj[3] / 100.0;
      u_max = URControl_DW.State.wRotor[3] / 100.0;
      if ((!(dummy_idx_1 > rtb_TmpSignalConversionAtSFun_0[3])) && (!rtIsNaN
           (rtb_TmpSignalConversionAtSFun_0[3]))) {
        dummy_idx_1 = rtb_TmpSignalConversionAtSFun_0[3];
      }

      dummy_idx_1 /= 100.0;

      /* 'URControl_alloc:110' y_state_initial = y_state_prev; */
      /* 'URControl_alloc:111' G = par.URC.rate_G1_unit.*[par.URC.rate_roll_eff*ones(1,4); par.URC.rate_pitch_eff*ones(1,4); par.URC.rate_yaw_eff*ones(1,4); par.URC.rate_az_eff*ones(1,4)].*1e-2; */
      /* 'URControl_alloc:112' K = URpar.rate_QPINDI_K; */
      memcpy(&K[0], &URControlParams.rate_QPINDI_K[0], sizeof(real_T) << 4U);

      /* 'URControl_alloc:113' K(3,3) = MzGain/100; */
      K[10] = rtb_enableMeas / 100.0;

      /* 'URControl_alloc:114' [dw_lin,y_state,iter,optimal] = QPINDI(inp, G, K, URpar.rate_QPINDI_K2, dw_lin_min, dw_lin_max, y_state_initial, par, URpar); */
      tmp_2[0] = 150;
      tmp_2[1] = 150;
      tmp_2[2] = -50;
      tmp_2[3] = 5;
      tmp_2[4] = 150;
      tmp_2[5] = 150;
      tmp_2[6] = -50;
      tmp_2[7] = 5;
      tmp_2[8] = 150;
      tmp_2[9] = 150;
      tmp_2[10] = -50;
      tmp_2[11] = 5;
      tmp_2[12] = 150;
      tmp_2[13] = 150;
      tmp_2[14] = -50;
      tmp_2[15] = 5;
      for (r2 = 0; r2 < 16; r2++) {
        tmp[r2] = URControl_ConstP.pooled3.URC.rate_G1_unit[r2] * (real_T)
          tmp_2[r2] * 0.01;
      }

      qconj_0[0] = rtb_TmpSignalConversionAtSFun_4 *
        rtb_TmpSignalConversionAtSFun_4 - rtb_precAngle_idx_1 *
        rtb_precAngle_idx_1;
      b_z1_0[0] = rtb_TmpSignalConversionAtSFun_2 -
        rtb_TmpSignalConversionAtSFun_0[0];
      qconj_0[1] = rtb_Product2 * rtb_Product2 - rtb_u2_idx_0 * rtb_u2_idx_0;
      b_z1_0[1] = rtb_fcn5 - rtb_TmpSignalConversionAtSFun_0[1];
      qconj_0[2] = u0 * u0 - Mv_min * Mv_min;
      b_z1_0[2] = dummy_idx_0 - rtb_TmpSignalConversionAtSFun_0[2];
      rtb_TmpSignalConversionAtSFun_4 = u_max * u_max;
      qconj_0[3] = dummy_idx_1 * dummy_idx_1 - rtb_TmpSignalConversionAtSFun_4;
      b_z1_0[3] = rtb_pos_idx_0 * rtb_pos_idx_0 -
        rtb_TmpSignalConversionAtSFun_4;
      URControl_QPINDI(dummy, tmp, K, URControlParams.rate_QPINDI_K2, qconj_0,
                       b_z1_0, URControl_DW.y_state_prev,
                       rtb_TmpSignalConversionAtSFun_0, &URControl_DW.DAQ.iter,
                       &rtb_enableMeas);

      /* 'URControl_alloc:115' y_state_prev = y_state; */
      /* 'URControl_alloc:117' if optimal */
      if (rtb_enableMeas != 0.0) {
        /* 'URControl_alloc:118' wRotorSet = 100*sqrt(max((state.wRotor/100)'.^2 + dw_lin,0)); */
        dummy_idx_1 = rtb_precAngle_idx_1 * rtb_precAngle_idx_1 +
          rtb_TmpSignalConversionAtSFun_0[0];
        if (!(dummy_idx_1 > 0.0)) {
          dummy_idx_1 = 0.0;
        }

        qconj[0] = 100.0 * std::sqrt(dummy_idx_1);
        dummy_idx_1 = rtb_u2_idx_0 * rtb_u2_idx_0 +
          rtb_TmpSignalConversionAtSFun_0[1];
        if (!(dummy_idx_1 > 0.0)) {
          dummy_idx_1 = 0.0;
        }

        qconj[1] = 100.0 * std::sqrt(dummy_idx_1);
        dummy_idx_1 = Mv_min * Mv_min + rtb_TmpSignalConversionAtSFun_0[2];
        if (!(dummy_idx_1 > 0.0)) {
          dummy_idx_1 = 0.0;
        }

        qconj[2] = 100.0 * std::sqrt(dummy_idx_1);
        dummy_idx_1 = rtb_TmpSignalConversionAtSFun_4 +
          rtb_TmpSignalConversionAtSFun_0[3];
        if (!(dummy_idx_1 > 0.0)) {
          dummy_idx_1 = 0.0;
        }

        qconj[3] = 100.0 * std::sqrt(dummy_idx_1);
      } else {
        /* 'URControl_alloc:119' else */
        /* 'URControl_alloc:120' wRotorSet = state.wRotor'*0.99; */
        qconj[0] = URControl_DW.State.wRotor[0] * 0.99;
        qconj[1] = URControl_DW.State.wRotor[1] * 0.99;
        qconj[2] = URControl_DW.State.wRotor[2] * 0.99;
        qconj[3] = URControl_DW.State.wRotor[3] * 0.99;
      }

      /* 'URControl_alloc:125' daq.iter = iter; */
      /* 'URControl_alloc:126' daq.optimal = optimal; */
      URControl_DW.DAQ.optimal = rtb_enableMeas;

      /* 'URControl_alloc:127' daq.inp = inp; */
      /* 'URControl_alloc:128' daq.dw_lin = dw_lin; */
      URControl_DW.DAQ.inp[0] = dummy[0];
      URControl_DW.DAQ.dw_lin[0] = rtb_TmpSignalConversionAtSFun_0[0];
      URControl_DW.DAQ.inp[1] = dummy[1];
      URControl_DW.DAQ.dw_lin[1] = rtb_TmpSignalConversionAtSFun_0[1];
      URControl_DW.DAQ.inp[2] = dummy[2];
      URControl_DW.DAQ.dw_lin[2] = rtb_TmpSignalConversionAtSFun_0[2];
      URControl_DW.DAQ.inp[3] = rtb_u2_idx_2;
      URControl_DW.DAQ.dw_lin[3] = rtb_TmpSignalConversionAtSFun_0[3];
    }
  }

  /* 'URControl_alloc:136' wRotorSet = max(min(wRotorSet, w_max), w_min); */
  if ((qconj[0] < FMin[0]) || rtIsNaN(FMin[0])) {
    rtb_TmpSignalConversionAtSFun_4 = qconj[0];
  } else {
    rtb_TmpSignalConversionAtSFun_4 = FMin[0];
  }

  if (qconj[1] < 1200.0) {
    rtb_Product2 = qconj[1];
  } else {
    rtb_Product2 = 1200.0;
  }

  if ((qconj[2] < FMin[2]) || rtIsNaN(FMin[2])) {
    u0 = qconj[2];
  } else {
    u0 = FMin[2];
  }

  if (qconj[3] < 1200.0) {
    rtb_enableMeas = qconj[3];
  } else {
    rtb_enableMeas = 1200.0;
  }

  if (rtb_TmpSignalConversionAtSFun_4 > 0.0) {
    qconj[0] = rtb_TmpSignalConversionAtSFun_4;
  } else {
    qconj[0] = 0.0;
  }

  tmp_4 = rtIsNaN(rtb_TmpSignalConversionAtSFun_3);
  if ((rtb_Product2 > rtb_TmpSignalConversionAtSFun_3) || tmp_4) {
    qconj[1] = rtb_Product2;
  } else {
    qconj[1] = rtb_TmpSignalConversionAtSFun_3;
  }

  if (u0 > 0.0) {
    qconj[2] = u0;
  } else {
    qconj[2] = 0.0;
  }

  tmp_5 = rtIsNaN(rtb_TmpSignalConversionAtSFun_1);
  if ((rtb_enableMeas > rtb_TmpSignalConversionAtSFun_1) || tmp_5) {
    qconj[3] = rtb_enableMeas;
  } else {
    qconj[3] = rtb_TmpSignalConversionAtSFun_1;
  }

  /* 'URControl_alloc:138' daq.wRotorSet = wRotorSet; */
  if (rtb_TmpSignalConversionAtSFun_4 > 0.0) {
    URControl_DW.DAQ.wRotorSet[0] = rtb_TmpSignalConversionAtSFun_4;
  } else {
    URControl_DW.DAQ.wRotorSet[0] = 0.0;
  }

  if ((rtb_Product2 > rtb_TmpSignalConversionAtSFun_3) || tmp_4) {
    URControl_DW.DAQ.wRotorSet[1] = rtb_Product2;
  } else {
    URControl_DW.DAQ.wRotorSet[1] = rtb_TmpSignalConversionAtSFun_3;
  }

  if (u0 > 0.0) {
    URControl_DW.DAQ.wRotorSet[2] = u0;
  } else {
    URControl_DW.DAQ.wRotorSet[2] = 0.0;
  }

  if ((rtb_enableMeas > rtb_TmpSignalConversionAtSFun_1) || tmp_5) {
    URControl_DW.DAQ.wRotorSet[3] = rtb_enableMeas;
  } else {
    URControl_DW.DAQ.wRotorSet[3] = rtb_TmpSignalConversionAtSFun_1;
  }

  /* 'URControl_alloc:141' if state.fail_id_quick~=0 */
  if (URControl_DW.State.fail_id_quick != 0.0) {
    /* 'URControl_alloc:142' wRotorSet(state.fail_id_quick) = URpar.fail_wRot; */
    qconj[(int32_T)URControl_DW.State.fail_id_quick - 1] =
      URControlParams.fail_wRot;
  }

  /* MATLAB Function: '<S3>/MATLAB Function' incorporates:
   *  MATLAB Function: '<S7>/basic estimators'
   *  MATLAB Function: '<S8>/control allocator'
   */
  /* :  [wRotorSetFinal, DAQ] = UROverrides(state, DAQ, wRotorSet, par, URControlParams); */
  /* 'UROverrides:3' if isempty(fallCount) */
  /* 'UROverrides:4' if isempty(thrown) */
  /* 'UROverrides:6' if isempty(flipTime) */
  /* 'UROverrides:8' wRotorSetFinal = wRotorSet; */
  /* 'UROverrides:11' if URpar.throw_mode == 1 */
  if (URControlParams.throw_mode == 1.0) {
    /* 'UROverrides:14' if rms(state.accf) < URpar.throw_threshold */
    if (std::sqrt(((URControl_DW.State.accf[0] * URControl_DW.State.accf[0] +
                    URControl_DW.State.accf[1] * URControl_DW.State.accf[1]) +
                   URControl_DW.State.accf[2] * URControl_DW.State.accf[2]) /
                  3.0) < URControlParams.throw_threshold) {
      /* 'UROverrides:15' fallCount = fallCount + 1; */
      URControl_DW.fallCount++;
    } else {
      /* 'UROverrides:16' else */
      /* 'UROverrides:17' fallCount = fallCount*0.998; */
      URControl_DW.fallCount *= 0.998;
    }

    /* 'UROverrides:20' if fallCount > URpar.throw_falltime*par.freq */
    if (URControl_DW.fallCount > URControlParams.throw_falltime * 500.0) {
      /* 'UROverrides:21' thrown = 1; */
      URControl_DW.thrown = 1.0;
    }

    /* 'UROverrides:24' if thrown == 0 */
    if (URControl_DW.thrown == 0.0) {
      /* 'UROverrides:25' wRotorSetFinal = ones(4,1).*par.w_min; */
      FMin[0] = 300.0;
      FMin[1] = 300.0;
      FMin[2] = 300.0;
      FMin[3] = 300.0;
    } else {
      /* 'UROverrides:26' else */
      /* 'UROverrides:27' wRotorSetFinal = wRotorSet; */
      FMin[0] = qconj[0];
      FMin[1] = qconj[1];
      FMin[2] = qconj[2];
      FMin[3] = qconj[3];
    }
  } else {
    /* 'UROverrides:30' else */
    /* 'UROverrides:31' fallCount = 0; */
    URControl_DW.fallCount = 0.0;

    /* 'UROverrides:32' thrown = 0; */
    URControl_DW.thrown = 0.0;

    /* 'UROverrides:33' wRotorSetFinal = wRotorSet; */
    FMin[0] = qconj[0];
    FMin[1] = qconj[1];
    FMin[2] = qconj[2];
    FMin[3] = qconj[3];
  }

  /* 'UROverrides:37' if ~(URpar.throw_mode == 1 && thrown == 0) */
  if ((!(URControlParams.throw_mode == 1.0)) || (!(URControl_DW.thrown == 0.0)))
  {
    /* 'UROverrides:38' if URpar.flip_mode == 0 */
    if (URControlParams.flip_mode == 0.0) {
      /* 'UROverrides:39' flipTime = 0; */
      URControl_DW.flipTime = 0.0;

      /* 'UROverrides:40' wRotorSetFinal = wRotorSet; */
      FMin[0] = qconj[0];
      FMin[1] = qconj[1];
      FMin[2] = qconj[2];
      FMin[3] = qconj[3];
    } else {
      if (URControlParams.flip_mode == 1.0) {
        /* 'UROverrides:42' elseif URpar.flip_mode == 1 */
        /* 'UROverrides:44' flipTime = flipTime + 1/par.freq; */
        URControl_DW.flipTime += 0.002;

        /* 'UROverrides:45' if flipTime > URpar.flip_time + URpar.flip_upTime */
        if (URControl_DW.flipTime > URControlParams.flip_time +
            URControlParams.flip_upTime) {
          /* 'UROverrides:46' wRotorSetFinal = wRotorSet; */
          FMin[0] = qconj[0];
          FMin[1] = qconj[1];
          FMin[2] = qconj[2];
          FMin[3] = qconj[3];
        } else {
          /* 'UROverrides:47' else */
          /* 'UROverrides:48' if flipTime < URpar.flip_upTime */
          if (URControl_DW.flipTime < URControlParams.flip_upTime) {
            /* 'UROverrides:49' wRotorSetFinal = ones(4,1).*1000; */
            FMin[0] = 1000.0;
            FMin[1] = 1000.0;
            FMin[2] = 1000.0;
            FMin[3] = 1000.0;
          } else {
            /* 'UROverrides:50' else */
            /* 'UROverrides:51' wRotorSetFinal = ones(4,1).*700 + [1;-1;-1;1]*URpar.flip_intensityX + [1;1;-1;-1]*URpar.flip_intensityY; */
            FMin[0] = (700.0 + URControlParams.flip_intensityX) +
              URControlParams.flip_intensityY;
            FMin[1] = (700.0 + -URControlParams.flip_intensityX) +
              URControlParams.flip_intensityY;
            FMin[2] = (700.0 + -URControlParams.flip_intensityX) +
              -URControlParams.flip_intensityY;
            FMin[3] = (700.0 + URControlParams.flip_intensityX) +
              -URControlParams.flip_intensityY;
          }
        }
      }
    }
  }

  /* End of MATLAB Function: '<S3>/MATLAB Function' */

  /* Outport: '<Root>/w_rotors' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion'
   */
  /* :  actuator_controls = w_sp_to_px4_actuator_controls(w_sp, par); */
  /* 'w_sp_to_px4_actuator_controls:10' w_min_sq = par.px4.w_min^2; */
  /* 'w_sp_to_px4_actuator_controls:11' w_max_sq = par.px4.w_max^2; */
  /* 'w_sp_to_px4_actuator_controls:13' actuator_controls = -1 + 2*(w_sp.^2 - w_min_sq)./(w_max_sq - w_min_sq); */
  URControl_Y.w_rotors[0] = (real32_T)FMin[0];

  /* Outport: '<Root>/actuators_control' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion'
   *  DataTypeConversion: '<Root>/Data Type Conversion11'
   *  MATLAB Function: '<Root>/conversion to px4'
   */
  URControl_Y.actuators_control[0] = (real32_T)((FMin[0] * FMin[0] -
    98696.044010893587) * 2.0 / 1.5335171993870398E+6 + -1.0);

  /* Outport: '<Root>/w_rotors' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion'
   */
  URControl_Y.w_rotors[1] = (real32_T)FMin[1];

  /* Outport: '<Root>/actuators_control' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion'
   *  DataTypeConversion: '<Root>/Data Type Conversion11'
   *  MATLAB Function: '<Root>/conversion to px4'
   */
  URControl_Y.actuators_control[1] = (real32_T)((FMin[1] * FMin[1] -
    98696.044010893587) * 2.0 / 1.5335171993870398E+6 + -1.0);

  /* Outport: '<Root>/w_rotors' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion'
   */
  URControl_Y.w_rotors[2] = (real32_T)FMin[2];

  /* Outport: '<Root>/actuators_control' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion'
   *  DataTypeConversion: '<Root>/Data Type Conversion11'
   *  MATLAB Function: '<Root>/conversion to px4'
   */
  URControl_Y.actuators_control[2] = (real32_T)((FMin[2] * FMin[2] -
    98696.044010893587) * 2.0 / 1.5335171993870398E+6 + -1.0);

  /* Outport: '<Root>/w_rotors' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion'
   */
  URControl_Y.w_rotors[3] = (real32_T)FMin[3];

  /* Outport: '<Root>/actuators_control' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion'
   *  DataTypeConversion: '<Root>/Data Type Conversion11'
   *  MATLAB Function: '<Root>/conversion to px4'
   */
  URControl_Y.actuators_control[3] = (real32_T)((FMin[3] * FMin[3] -
    98696.044010893587) * 2.0 / 1.5335171993870398E+6 + -1.0);

  /* DiscreteStateSpace: '<S27>/Discrete State-Space' */
  {
    rtb_accs_filter[0] = (1.0)*URControl_DW.DiscreteStateSpace_DSTATE_i[0];
    rtb_accs_filter[1] = (1.0)*URControl_DW.DiscreteStateSpace_DSTATE_i[1];
    rtb_accs_filter[2] = (1.0)*URControl_DW.DiscreteStateSpace_DSTATE_i[2];
  }

  /* Outputs for Atomic SubSystem: '<S30>/Predict' */
  /* SignalConversion: '<S39>/TmpSignal ConversionAt SFunction Inport4' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion5'
   *  Inport: '<Root>/rates'
   *  MATLAB Function: '<S37>/Predict'
   */
  rtb_TmpSignalConversionAtSFunct[0] = rtb_accs_filter[0];
  rtb_TmpSignalConversionAtSFunct[3] = URControl_U.rates[0];
  rtb_TmpSignalConversionAtSFunct[1] = rtb_accs_filter[1];
  rtb_TmpSignalConversionAtSFunct[4] = URControl_U.rates[1];
  rtb_TmpSignalConversionAtSFunct[2] = rtb_accs_filter[2];
  rtb_TmpSignalConversionAtSFunct[5] = URControl_U.rates[2];

  /* MATLAB Function: '<S37>/Predict' incorporates:
   *  DataStoreRead: '<S37>/Data Store ReadP'
   *  DataStoreRead: '<S37>/Data Store ReadX'
   *  DataTypeConversion: '<Root>/Data Type Conversion5'
   *  Inport: '<Root>/rates'
   *  SignalConversion: '<S39>/TmpSignal ConversionAt SFunction Inport4'
   */
  /* :  if pS.IsSimulinkFcn */
  /* :  else */
  /* :  StateTransitionFcnH = str2func(pS.FcnName); */
  /* :  if pS.HasJacobian */
  /* :  StateTransitionJacobianFcnH = str2func(pS.JacobianFcnName); */
  /* :  switch pS.NumberOfExtraArgumentInports */
  /* :  case 1 */
  /* :  extraArgs = {uState}; */
  /* :  xNew = zeros(size(x),'like',x); */
  /* :  if pS.HasAdditiveNoise */
  /* :  [xNew,P] = matlabshared.tracking.internal.EKFPredictorAdditive.predict(... */
  /* :          Q,x,P,StateTransitionFcnH,StateTransitionJacobianFcnH,extraArgs{:}); */
  URControl_ekf_state_jacob(URControl_DW.x, rtb_TmpSignalConversionAtSFunct,
    Jacobian);

  /* 'ekf_state_func:7' posx = x(1); */
  /* 'ekf_state_func:8' posy = x(2); */
  /* 'ekf_state_func:9' posz = x(3); */
  /* 'ekf_state_func:11' velx = x(4); */
  /* 'ekf_state_func:12' vely = x(5); */
  /* 'ekf_state_func:13' velz = x(6); */
  /* 'ekf_state_func:15' q1 = x(7); */
  /* 'ekf_state_func:16' q2 = x(8); */
  /* 'ekf_state_func:17' q3 = x(9); */
  /* 'ekf_state_func:18' q4 = x(10); */
  /* 'ekf_state_func:20' accBx = u(1); */
  /* 'ekf_state_func:21' accBy = u(2); */
  /* 'ekf_state_func:22' accBz = u(3); */
  /* 'ekf_state_func:24' omegax = u(4); */
  /* 'ekf_state_func:25' omegay = u(5); */
  /* 'ekf_state_func:26' omegaz = u(6); */
  /* 'ekf_state_func:28' dt = 0.002; */
  /* 'ekf_state_func:31' pos = [posx; posy; posz]; */
  /* 'ekf_state_func:32' vel = [velx; vely; velz]; */
  /* 'ekf_state_func:33' accB = [accBx; accBy; accBz]; */
  /* 'ekf_state_func:34' omega = [omegax; omegay; omegaz]; */
  /* 'ekf_state_func:35' q = [q1; q2; q3; q4]; */
  /* 'ekf_state_func:37' x = zeros(10,1); */
  /* 'ekf_state_func:39' acc = quatRot(q', accB') + [0,0,9.81]; */
  /* 'quatRot:3' qconj = [ q(:,1)  -q(:,2:4) ]; */
  /* 'quatRot:5' dummy = HProduct(HProduct(q,[0,vector]),qconj); */
  /* 'quatRot:14' vec = [v1(:,1).*v2(:,2) v1(:,1).*v2(:,3) v1(:,1).*v2(:,4)] + ... */
  /* 'quatRot:15'          [v2(:,1).*v1(:,2) v2(:,1).*v1(:,3) v2(:,1).*v1(:,4)]+... */
  /* 'quatRot:16'          [ v1(:,3).*v2(:,4)-v1(:,4).*v2(:,3) ... */
  /* 'quatRot:17'            v1(:,4).*v2(:,2)-v1(:,2).*v2(:,4) ... */
  /* 'quatRot:18'            v1(:,2).*v2(:,3)-v1(:,3).*v2(:,2)]; */
  /* 'quatRot:22' scalar = v1(:,1).*v2(:,1) - v1(:,2).*v2(:,2) - ... */
  /* 'quatRot:23'              v1(:,3).*v2(:,3) - v1(:,4).*v2(:,4); */
  /* 'quatRot:25' qout = [scalar  vec]; */
  FMin[0] = ((URControl_DW.x[6] * 0.0 - URControl_DW.x[7] * rtb_accs_filter[0])
             - URControl_DW.x[8] * rtb_accs_filter[1]) - URControl_DW.x[9] *
    rtb_accs_filter[2];
  FMin[1] = (URControl_DW.x[6] * rtb_accs_filter[0] + 0.0 * URControl_DW.x[7]) +
    (URControl_DW.x[8] * rtb_accs_filter[2] - URControl_DW.x[9] *
     rtb_accs_filter[1]);
  FMin[2] = (URControl_DW.x[6] * rtb_accs_filter[1] + 0.0 * URControl_DW.x[8]) +
    (URControl_DW.x[9] * rtb_accs_filter[0] - URControl_DW.x[7] *
     rtb_accs_filter[2]);
  FMin[3] = (URControl_DW.x[6] * rtb_accs_filter[2] + 0.0 * URControl_DW.x[9]) +
    (URControl_DW.x[7] * rtb_accs_filter[1] - URControl_DW.x[8] *
     rtb_accs_filter[0]);

  /* 'quatRot:14' vec = [v1(:,1).*v2(:,2) v1(:,1).*v2(:,3) v1(:,1).*v2(:,4)] + ... */
  /* 'quatRot:15'          [v2(:,1).*v1(:,2) v2(:,1).*v1(:,3) v2(:,1).*v1(:,4)]+... */
  /* 'quatRot:16'          [ v1(:,3).*v2(:,4)-v1(:,4).*v2(:,3) ... */
  /* 'quatRot:17'            v1(:,4).*v2(:,2)-v1(:,2).*v2(:,4) ... */
  /* 'quatRot:18'            v1(:,2).*v2(:,3)-v1(:,3).*v2(:,2)]; */
  /* 'quatRot:22' scalar = v1(:,1).*v2(:,1) - v1(:,2).*v2(:,2) - ... */
  /* 'quatRot:23'              v1(:,3).*v2(:,3) - v1(:,4).*v2(:,4); */
  /* 'quatRot:25' qout = [scalar  vec]; */
  /* 'quatRot:6' r = dummy(2:4); */
  /* 'ekf_state_func:42' for i = 1:3 */
  /* 'ekf_state_func:45' for i = 1:3 */
  /* 'ekf_state_func:49' q_dot1 = -0.5*dotProduct(q(2:4),omega); */
  /* 'dotProduct:3' c = sum(a.*b); */
  /* 'ekf_state_func:43' x(i) = pos(i) + vel(i)*dt; */
  rtb_xNew[0] = URControl_DW.x[3] * 0.002 + URControl_DW.x[0];

  /* 'ekf_state_func:46' x(i+3) = vel(i) + acc(i)*dt; */
  rtb_xNew[3] = ((FMin[0] * -URControl_DW.x[7] + URControl_DW.x[6] * FMin[1]) +
                 (FMin[2] * -URControl_DW.x[9] - FMin[3] * -URControl_DW.x[8])) *
    0.002 + URControl_DW.x[3];

  /* 'ekf_state_func:43' x(i) = pos(i) + vel(i)*dt; */
  rtb_xNew[1] = URControl_DW.x[4] * 0.002 + URControl_DW.x[1];

  /* 'ekf_state_func:46' x(i+3) = vel(i) + acc(i)*dt; */
  rtb_xNew[4] = ((FMin[0] * -URControl_DW.x[8] + URControl_DW.x[6] * FMin[2]) +
                 (FMin[3] * -URControl_DW.x[7] - FMin[1] * -URControl_DW.x[9])) *
    0.002 + URControl_DW.x[4];

  /* 'ekf_state_func:43' x(i) = pos(i) + vel(i)*dt; */
  rtb_xNew[2] = URControl_DW.x[5] * 0.002 + URControl_DW.x[2];

  /* 'ekf_state_func:46' x(i+3) = vel(i) + acc(i)*dt; */
  rtb_xNew[5] = (((FMin[0] * -URControl_DW.x[9] + URControl_DW.x[6] * FMin[3]) +
                  (FMin[1] * -URControl_DW.x[8] - FMin[2] * -URControl_DW.x[7]))
                 + 9.81) * 0.002 + URControl_DW.x[5];

  /* 'ekf_state_func:50' q_dot24 = 0.5*(crossProduct(q(2:4),omega) + omega*q(1)); */
  /* 'crossProduct:3' c = [a(2)*b(3) - a(3)*b(2); a(3)*b(1) - a(1)*b(3); a(1)*b(2) - a(2)*b(1)]; */
  /* 'ekf_state_func:51' q_dot = [q_dot1; q_dot24]; */
  /* 'ekf_state_func:53' q = q + q_dot*dt; */
  rtb_TmpSignalConversionAtSFun_4 = ((URControl_DW.x[7] * URControl_U.rates[0] +
    URControl_DW.x[8] * URControl_U.rates[1]) + URControl_DW.x[9] *
    URControl_U.rates[2]) * -0.5 * 0.002 + URControl_DW.x[6];
  rtb_TmpSignalConversionAtSFun_3 = ((URControl_DW.x[8] * URControl_U.rates[2] -
    URControl_DW.x[9] * URControl_U.rates[1]) + URControl_U.rates[0] *
    URControl_DW.x[6]) * 0.5 * 0.002 + URControl_DW.x[7];
  rtb_TmpSignalConversionAtSFun_2 = ((URControl_DW.x[9] * URControl_U.rates[0] -
    URControl_DW.x[7] * URControl_U.rates[2]) + URControl_U.rates[1] *
    URControl_DW.x[6]) * 0.5 * 0.002 + URControl_DW.x[8];
  rtb_enableMeas = ((URControl_DW.x[7] * URControl_U.rates[1] - URControl_DW.x[8]
                     * URControl_U.rates[0]) + URControl_U.rates[2] *
                    URControl_DW.x[6]) * 0.5 * 0.002 + URControl_DW.x[9];

  /* 'ekf_state_func:54' qnorm = sqrt(q(1)^2 + q(2)^2 + q(3)^2 + q(4)^2); */
  rtb_fcn5 = std::sqrt(((rtb_TmpSignalConversionAtSFun_4 *
    rtb_TmpSignalConversionAtSFun_4 + rtb_TmpSignalConversionAtSFun_3 *
    rtb_TmpSignalConversionAtSFun_3) + rtb_TmpSignalConversionAtSFun_2 *
                        rtb_TmpSignalConversionAtSFun_2) + rtb_enableMeas *
                       rtb_enableMeas);

  /* 'ekf_state_func:55' q = q/qnorm; */
  /* 'ekf_state_func:57' for i = 1:4 */
  /* 'ekf_state_func:58' x(i+6) = q(i); */
  rtb_xNew[6] = rtb_TmpSignalConversionAtSFun_4 / rtb_fcn5;

  /* 'ekf_state_func:58' x(i+6) = q(i); */
  rtb_xNew[7] = rtb_TmpSignalConversionAtSFun_3 / rtb_fcn5;

  /* 'ekf_state_func:58' x(i+6) = q(i); */
  rtb_xNew[8] = rtb_TmpSignalConversionAtSFun_2 / rtb_fcn5;

  /* 'ekf_state_func:58' x(i+6) = q(i); */
  rtb_xNew[9] = rtb_enableMeas / rtb_fcn5;
  for (r2 = 0; r2 < 10; r2++) {
    for (r3 = 0; r3 < 10; r3++) {
      rtemp = r3 + 10 * r2;
      Jacobian_0[rtemp] = 0.0;
      for (i = 0; i < 10; i++) {
        Jacobian_0[rtemp] = Jacobian[10 * i + r3] * URControl_DW.P[10 * r2 + i]
          + Jacobian_0[10 * r2 + r3];
      }
    }
  }

  for (i = 0; i < 10; i++) {
    /* DataStoreWrite: '<S37>/Data Store WriteP' incorporates:
     *  Constant: '<S30>/Q'
     *  MATLAB Function: '<S37>/Predict'
     */
    for (r2 = 0; r2 < 10; r2++) {
      rtb_precAngle_idx_1 = 0.0;
      for (r3 = 0; r3 < 10; r3++) {
        rtb_precAngle_idx_1 += Jacobian_0[10 * r3 + i] * Jacobian[10 * r3 + r2];
      }

      URControl_DW.P[i + 10 * r2] = URControl_ConstP.Q_Value[10 * r2 + i] +
        rtb_precAngle_idx_1;
    }

    /* End of DataStoreWrite: '<S37>/Data Store WriteP' */

    /* DataStoreWrite: '<S37>/Data Store WriteX' */
    URControl_DW.x[i] = rtb_xNew[i];
  }

  /* End of Outputs for SubSystem: '<S30>/Predict' */

  /* Outport: '<Root>/daq' incorporates:
   *  DataStoreRead: '<Root>/Data Store Read'
   */
  URControl_Y.daq = URControl_DW.DAQ;

  /* Update for Memory: '<S27>/Memory' */
  URControl_DW.Memory_PreviousInput[0] = rtb_DataStoreRead_k[6];
  URControl_DW.Memory_PreviousInput[1] = rtb_DataStoreRead_k[7];
  URControl_DW.Memory_PreviousInput[2] = rtb_DataStoreRead_k[8];
  URControl_DW.Memory_PreviousInput[3] = rtb_DataStoreRead_k[9];

  /* Update for Delay: '<Root>/Delay' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion10'
   *  Inport: '<Root>/fail_flag'
   */
  for (i = 0; i < 999; i++) {
    URControl_DW.Delay_DSTATE[i] = URControl_DW.Delay_DSTATE[i + 1];
  }

  URControl_DW.Delay_DSTATE[999] = URControl_U.fail_flag;

  /* End of Update for Delay: '<Root>/Delay' */

  /* Update for DiscreteIntegrator: '<S13>/Integrator' */
  URControl_DW.Integrator_IC_LOADING = 0U;

  /* MinMax: '<S9>/Max' */
  if (URControl_B.Probe[0] > 0.05) {
    rtb_precAngle_idx_1 = URControl_B.Probe[0];
  } else {
    rtb_precAngle_idx_1 = 0.05;
  }

  /* End of MinMax: '<S9>/Max' */

  /* Product: '<S1>/1//T' */
  rtb_precAngle_idx_1 = 1.0 / rtb_precAngle_idx_1;

  /* Update for DiscreteIntegrator: '<S13>/Integrator' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion8'
   *  Inport: '<Root>/pos_sp'
   *  Product: '<S1>/1//T'
   *  Sum: '<S1>/Sum1'
   */
  URControl_DW.Integrator_DSTATE[0] += (URControl_U.pos_sp[0] -
    URControl_DW.Integrator_DSTATE[0]) * rtb_precAngle_idx_1 * 0.002;
  URControl_DW.Integrator_DSTATE[1] += (URControl_U.pos_sp[1] -
    URControl_DW.Integrator_DSTATE[1]) * rtb_precAngle_idx_1 * 0.002;
  URControl_DW.Integrator_DSTATE[2] += (URControl_U.pos_sp[2] -
    URControl_DW.Integrator_DSTATE[2]) * rtb_precAngle_idx_1 * 0.002;
  URControl_DW.Integrator_PrevResetState = (int8_T)rtb_Compare;

  /* Update for DiscreteIntegrator: '<S18>/Integrator' */
  URControl_DW.Integrator_IC_LOADING_a = 0U;

  /* MinMax: '<S14>/Max' */
  if (URControl_B.Probe_d[0] > 0.05) {
    rtb_precAngle_idx_1 = URControl_B.Probe_d[0];
  } else {
    rtb_precAngle_idx_1 = 0.05;
  }

  /* End of MinMax: '<S14>/Max' */

  /* Update for DiscreteIntegrator: '<S18>/Integrator' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion9'
   *  Inport: '<Root>/yaw_sp'
   *  Product: '<S2>/1//T'
   *  Sum: '<S2>/Sum1'
   */
  URControl_DW.Integrator_DSTATE_i += 1.0 / rtb_precAngle_idx_1 *
    (URControl_U.yaw_sp - URControl_DW.Integrator_DSTATE_i) * 0.002;
  URControl_DW.Integrator_PrevResetState_i = (int8_T)rtb_Compare_j;

  /* Update for DiscreteStateSpace: '<S5>/Discrete State-Space' */
  {
    real_T xnew[3];
    xnew[0] = (0.96)*URControl_DW.DiscreteStateSpace_DSTATE[0];
    xnew[0] += (0.04)*rtb_n_des[0];
    xnew[1] = (0.96)*URControl_DW.DiscreteStateSpace_DSTATE[1];
    xnew[1] += (0.04)*rtb_n_des[1];
    xnew[2] = (0.96)*URControl_DW.DiscreteStateSpace_DSTATE[2];
    xnew[2] += (0.04)*rtb_n_des[2];
    (void) memcpy(&URControl_DW.DiscreteStateSpace_DSTATE[0], xnew,
                  sizeof(real_T)*3);
  }

  /* Update for DiscreteStateSpace: '<S27>/Discrete State-Space' */
  {
    real_T xnew[3];
    xnew[0] = (0.9)*URControl_DW.DiscreteStateSpace_DSTATE_i[0];
    xnew[0] += (0.1)*rtb_acc[0];
    xnew[1] = (0.9)*URControl_DW.DiscreteStateSpace_DSTATE_i[1];
    xnew[1] += (0.1)*rtb_acc[1];
    xnew[2] = (0.9)*URControl_DW.DiscreteStateSpace_DSTATE_i[2];
    xnew[2] += (0.1)*rtb_acc[2];
    (void) memcpy(&URControl_DW.DiscreteStateSpace_DSTATE_i[0], xnew,
                  sizeof(real_T)*3);
  }
}

/* Model initialize function */
void URControlModelClass::initialize()
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize error status */
  rtmSetErrorStatus(getRTM(), (NULL));

  /* block I/O */
  (void) memset(((void *) &URControl_B), 0,
                sizeof(B_URControl_T));

  /* states (dwork) */
  (void) memset((void *)&URControl_DW, 0,
                sizeof(DW_URControl_T));

  /* external inputs */
  (void)memset(&URControl_U, 0, sizeof(ExtU_URControl_T));

  /* external outputs */
  (void) memset((void *)&URControl_Y, 0,
                sizeof(ExtY_URControl_T));

  /* Start for Probe: '<S9>/Probe' */
  URControl_B.Probe[0] = 0.002;
  URControl_B.Probe[1] = 0.0;

  /* Start for Probe: '<S14>/Probe' */
  URControl_B.Probe_d[0] = 0.002;
  URControl_B.Probe_d[1] = 0.0;

  /* Start for DataStoreMemory: '<S30>/DataStoreMemory - P' */
  memcpy(&URControl_DW.P[0], &URControl_ConstP.DataStoreMemoryP_InitialValue[0],
         100U * sizeof(real_T));

  /* Start for DataStoreMemory: '<S30>/DataStoreMemory - x' */
  memcpy(&URControl_DW.x[0], &URControl_ConstP.DataStoreMemoryx_InitialValue[0],
         10U * sizeof(real_T));

  /* Start for DataStoreMemory: '<Root>/Data Store Memory' */
  URControl_DW.DAQ = URControl_rtZdaqBus;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory1' */
  URControl_DW.State = URControl_rtZstateBus;

  /* InitializeConditions for Memory: '<S27>/Memory' */
  URControl_DW.Memory_PreviousInput[0] = 0.0;
  URControl_DW.Memory_PreviousInput[1] = 0.0;
  URControl_DW.Memory_PreviousInput[2] = 0.0;
  URControl_DW.Memory_PreviousInput[3] = 0.0;

  /* InitializeConditions for Delay: '<Root>/Delay' */
  memset(&URControl_DW.Delay_DSTATE[0], 0, 1000U * sizeof(real_T));

  /* InitializeConditions for DiscreteIntegrator: '<S13>/Integrator' */
  URControl_DW.Integrator_IC_LOADING = 1U;
  URControl_DW.Integrator_PrevResetState = 0;

  /* InitializeConditions for DiscreteIntegrator: '<S18>/Integrator' */
  URControl_DW.Integrator_IC_LOADING_a = 1U;
  URControl_DW.Integrator_PrevResetState_i = 0;

  /* InitializeConditions for DiscreteStateSpace: '<S5>/Discrete State-Space' */
  URControl_DW.DiscreteStateSpace_DSTATE[0] = (0.0);
  URControl_DW.DiscreteStateSpace_DSTATE[1] = (0.0);
  URControl_DW.DiscreteStateSpace_DSTATE[2] = (-1.0);

  /* InitializeConditions for DiscreteStateSpace: '<S27>/Discrete State-Space' */
  URControl_DW.DiscreteStateSpace_DSTATE_i[0] = (0.0);
  URControl_DW.DiscreteStateSpace_DSTATE_i[1] = (0.0);
  URControl_DW.DiscreteStateSpace_DSTATE_i[2] = (0.0);

  /* SystemInitialize for MATLAB Function: '<S7>/basic estimators' */
  /* :  attPrev = [0;0;0]; */
  URControl_DW.omegaFilter_not_empty = false;
  URControl_DW.posFilter_not_empty = false;
  URControl_DW.velFilter_not_empty = false;
  URControl_DW.accFilter_not_empty = false;

  /* 'UREstimators:7' failProt = 0; */
  URControl_DW.failProt = 0.0;

  /* SystemInitialize for MATLAB Function: '<S27>/enableMeas' */
  /* 'URpositionControl:3' errorInt = [0,0,0]; */
  URControl_DW.attPrev[0] = 0.0;

  /* SystemInitialize for MATLAB Function: '<S4>/position control' */
  URControl_DW.errorInt_p[0] = 0.0;

  /* SystemInitialize for MATLAB Function: '<S27>/enableMeas' */
  URControl_DW.attPrev[1] = 0.0;

  /* SystemInitialize for MATLAB Function: '<S4>/position control' */
  URControl_DW.errorInt_p[1] = 0.0;

  /* SystemInitialize for MATLAB Function: '<S27>/enableMeas' */
  URControl_DW.attPrev[2] = 0.0;

  /* SystemInitialize for MATLAB Function: '<S4>/position control' */
  URControl_DW.errorInt_p[2] = 0.0;

  /* SystemInitialize for MATLAB Function: '<S4>/altitude control' */
  /* 'URAltitudeControl:3' errorInt = 0; */
  URControl_DW.errorInt_b = 0.0;

  /* SystemInitialize for MATLAB Function: '<S8>/control allocator' */
  URControl_DW.omegaDot_not_empty = false;
  URControl_DW.accZFilt_not_empty = false;
  URControl_DW.errorD_not_empty = false;
  URControl_DW.uvrDer_not_empty = false;
  URControl_DW.omegaDot_not_empty_l = false;
  URControl_DW.wRotorFilter_not_empty = false;

  /* 'URControl_alloc:3' y_state_prev = [0,0,0,0]; */
  /* 'URControl_alloc:4' Fset_prev = [0;0;0;0]; */
  URControl_DW.y_state_prev[0] = 0.0;
  URControl_DW.Fset_prev[0] = 0.0;
  URControl_DW.y_state_prev[1] = 0.0;
  URControl_DW.Fset_prev[1] = 0.0;
  URControl_DW.y_state_prev[2] = 0.0;
  URControl_DW.Fset_prev[2] = 0.0;
  URControl_DW.y_state_prev[3] = 0.0;
  URControl_DW.Fset_prev[3] = 0.0;

  /* 'URControl_alloc:5' M_uvr_set = [0;0;0]; */
  URControl_DW.M_uvr_set[0] = 0.0;
  URControl_DW.M_uvr_set[1] = 0.0;
  URControl_DW.M_uvr_set[2] = 0.0;

  /* 'URINDI_allocator:23' du_last = [0 0 0 0]'; */
  URControl_DW.du_last[0] = 0.0;
  URControl_DW.du_last[1] = 0.0;
  URControl_DW.du_last[2] = 0.0;
  URControl_DW.du_last[3] = 0.0;

  /* 'PIDMomentGen:3' errorInt = [0,0,0]; */
  URControl_DW.errorInt[0] = 0.0;
  URControl_DW.errorInt[1] = 0.0;
  URControl_DW.errorInt[2] = 0.0;

  /* SystemInitialize for MATLAB Function: '<S3>/MATLAB Function' */
  /* 'PIDMomentGen:4' error_prev = [0,0,0]; */
  /* 'UROverrides:3' fallCount = 0; */
  URControl_DW.fallCount = 0.0;

  /* 'UROverrides:4' thrown = 0; */
  URControl_DW.thrown = 0.0;

  /* 'UROverrides:6' flipTime = 0; */
  URControl_DW.flipTime = 0.0;
}

/* Model terminate function */
void URControlModelClass::terminate()
{
  /* (no terminate code required) */
}

/* Constructor */
URControlModelClass::URControlModelClass()
{
  /* Currently there is no constructor body generated.*/
}

/* Destructor */
URControlModelClass::~URControlModelClass()
{
  /* Currently there is no destructor body generated.*/
}

/* Real-Time Model get method */
RT_MODEL_URControl_T * URControlModelClass::getRTM()
{
  return (&URControl_M);
}
