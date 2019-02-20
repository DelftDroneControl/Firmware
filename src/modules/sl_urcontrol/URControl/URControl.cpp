/*
 * URControl.cpp
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "URControl".
 *
 * Model version              : 1.772
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C++ source code generated on : Wed Feb 20 14:09:45 2019
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
  /* omegaDot */
} ;                                    /* daqBus ground */

const stateBus URControl_rtZstateBus = {
  {
    0.0, 0.0, 0.0 }
  ,                                    /* acc */

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
  0.00191049731745428,
  0.00191049731745428,
  0.14450346016618426,
  0.374,
  9.81,
  0.0,
  -1.0,
  0.75,
  0.85,
  0.85,
  0.0,
  1.0,
  0.52631578947368418,
  0.35087719298245612,

  { 1.5, 1.5, 1.5 },
  4.0,

  { 2.0, 2.0, 2.0 },

  { 1.0, 1.0, 1.0 },
  1.0,
  0.2,
  -2.0,
  1.0,
  1.0,
  4.0,
  10.0,
  20.0,
  1.0,
  0.52631578947368418,
  1.2280701754385965,
  0.9,
  1.0,
  1.0,
  5.0,
  2.0,
  20.0,
  0.0,
  1.0,
  2.0,
  300.0,
  100.0,
  15.0,
  -0.5,
  -0.1,

  { 0.0, 0.0, -1.0 },
  2.0,
  -10.0,
  4.0,
  0.01,
  10.0,
  0.0,
  1.0,
  1.0,
  1200.0,
  300.0,

  { 2.74104, 2.74104, 2.74104, 2.74104 },

  { 0.171315, 0.171315, 0.171315, 0.171315 },
  0.05,
  10.0,
  2.0,
  1.0,

  { 170.0, 170.0, 30.0, -8.0, -170.0, 170.0, -30.0, -8.0, -170.0, -170.0, 30.0,
    -8.0, 170.0, -170.0, -30.0, -8.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, -1.0, 0.0,
    0.0, 0.0, 1.0, 0.0, 0.0, 0.0, -1.0, 0.0 },

  { 30.0, 30.0, 3.0 },
  0.85,
  0.85,

  { 30.0, 30.0, 3.0 },

  { 0.0, 0.0, 0.0 },

  { 2.0, 2.0, 0.01 },
  0.8,
  0.8,
  0.95,
  50.0,

  { 20.0, 20.0, 2.0 },
  0.8,

  { 40.0, 40.0, 1.0 },

  { 0.4, 0.4, 0.045 },
  10000.0,
  10000.0,
  100.0,
  2.0,
  0.0001,
  5.0,
  0.0,
  0.1,
  0.0,
  0.2,
  1.0
} ;                                    /* Variable: URControlParams
                                        * Referenced by:
                                        *   '<S1>/MATLAB Function'
                                        *   '<S2>/altitude control'
                                        *   '<S2>/position control'
                                        *   '<S2>/yaw rate control'
                                        *   '<S3>/Precession'
                                        *   '<S3>/attitude controller'
                                        *   '<S3>/yawRateControl'
                                        *   '<S5>/basic estimators'
                                        *   '<S6>/control allocator'
                                        */

/* Function for MATLAB Function: '<S21>/Correct' */
void URControlModelClass::URControl_mrdivide_helper(real_T A[54], const real_T
  B[36])
{
  real_T b_A[36];
  int8_T ipiv[6];
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
  memcpy(&b_A[0], &B[0], 36U * sizeof(real_T));
  for (d = 0; d < 6; d++) {
    ipiv[d] = (int8_T)(1 + d);
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

    if (b_A[jBcol + iy] != 0.0) {
      if (iy != 0) {
        iy += j;
        ipiv[j] = (int8_T)(iy + 1);
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
      if (b_A[ix] != 0.0) {
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
      smax = b_A[ix + iy];
      if (smax != 0.0) {
        for (c_ix = 0; c_ix < 9; c_ix++) {
          d = c_ix + jBcol;
          A[d] -= smax * A[c_ix + kBcol];
        }
      }
    }

    smax = 1.0 / b_A[j + iy];
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
      smax = b_A[ix + iy];
      if (smax != 0.0) {
        for (c_ix = 0; c_ix < 9; c_ix++) {
          A[c_ix + jBcol] -= smax * A[c_ix + kBcol];
        }
      }
    }
  }

  for (j = 4; j >= 0; j--) {
    if (j + 1 != ipiv[j]) {
      jBcol = ipiv[j] - 1;
      for (iy = 0; iy < 9; iy++) {
        smax = A[9 * j + iy];
        A[iy + 9 * j] = A[9 * jBcol + iy];
        A[iy + 9 * jBcol] = smax;
      }
    }
  }
}

/*
 * Function for MATLAB Function: '<S5>/basic estimators'
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

/* Function for MATLAB Function: '<S3>/attitude controller' */
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

/*
 * Function for MATLAB Function: '<S6>/control allocator'
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

/* Function for MATLAB Function: '<S6>/control allocator' */
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

/* Function for MATLAB Function: '<S6>/control allocator' */
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

/* Function for MATLAB Function: '<S6>/control allocator' */
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

/* Function for MATLAB Function: '<S6>/control allocator' */
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

/* Function for MATLAB Function: '<S6>/control allocator' */
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

/* Function for MATLAB Function: '<S6>/control allocator' */
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
 * Function for MATLAB Function: '<S6>/control allocator'
 * function [x,y_state,iterSteps,optimal] = controlAllocQPQuick(refStruct, FMax, FMin, gainStruct, y_state_init, par, URpar)
 */
void URControlModelClass::URControl_controlAllocQPQuick(real_T refStruct_MuRef,
  real_T refStruct_MvRef, real_T refStruct_MzRef, real_T refStruct_FtotRef,
  const real_T FMax[4], const real_T FMin[4], real_T gainStruct_MuGain, real_T
  gainStruct_MvGain, real_T gainStruct_FtotGain, real_T gainStruct_FGain, real_T
  gainStruct_MzGain, real_T y_state_init[4], const struct_BjJlvF3OtyTGFNKTXKdR2G
  *b_par, real_T URpar_rate_maxIter, real_T x[4], real_T *iterSteps, real_T
  *optimal)
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
  c_idx_0 = b_par->URC.t0 / b_par->URC.k0;
  c_idx_1 = b_par->URC.s * b_par->URC.s;
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
  H[10] = (((b_par->URC.s * b_par->URC.s * gainStruct_MvGain + c_idx_0 * c_idx_0
             * gainStruct_MzGain) + gainStruct_FtotGain) + gainStruct_FGain /
           z1_idx_2) * 2.0;

  /* 'controlAllocQPQuick:41' H(3,4) = -2*MzGain*(t0/k0)^2 + FtotGain*2; */
  H[14] = -2.0 * gainStruct_MzGain * (c_idx_0 * c_idx_0) + gainStruct_FtotGain *
    2.0;

  /* 'controlAllocQPQuick:42' H(4,3) = H(3,4); */
  H[11] = -2.0 * gainStruct_MzGain * (c_idx_0 * c_idx_0) + gainStruct_FtotGain *
    2.0;

  /* 'controlAllocQPQuick:44' H(4,4) = 2*(MuGain*s^2 + MzGain*(t0/k0)^2 + FtotGain + FGain/FMax(4)); */
  H[15] = (((b_par->URC.s * b_par->URC.s * gainStruct_MuGain + c_idx_0 * c_idx_0
             * gainStruct_MzGain) + gainStruct_FtotGain) + gainStruct_FGain /
           z1_idx_3) * 2.0;

  /* 'controlAllocQPQuick:47' c = zeros(4,1); */
  /* 'controlAllocQPQuick:49' c(1,1) = -2*MvGain*MvRef*s - 2*t0/k0*MzRef*MzGain - 2*FtotGain*FtotRef; */
  c_idx_3 = 2.0 * b_par->URC.t0 / b_par->URC.k0 * refStruct_MzRef *
    gainStruct_MzGain;
  c_idx_0_tmp = 2.0 * gainStruct_FtotGain * refStruct_FtotRef;
  c_idx_0 = (-2.0 * gainStruct_MvGain * refStruct_MvRef * b_par->URC.s - c_idx_3)
    - c_idx_0_tmp;

  /* 'controlAllocQPQuick:50' c(2,1) = 2*MuGain*MuRef*s + 2*t0/k0*MzRef*MzGain - 2*FtotGain*FtotRef; */
  c_idx_1 = (c_idx_3 + 2.0 * gainStruct_MuGain * refStruct_MuRef * b_par->URC.s)
    - c_idx_0_tmp;

  /* 'controlAllocQPQuick:51' c(3,1) = 2*MvGain*MvRef*s - 2*t0/k0*MzRef*MzGain - 2*FtotGain*FtotRef; */
  c_idx_2 = (2.0 * gainStruct_MvGain * refStruct_MvRef * b_par->URC.s - c_idx_3)
    - c_idx_0_tmp;

  /* 'controlAllocQPQuick:52' c(4,1) = -2*MuGain*MuRef*s + 2*t0/k0*MzRef*MzGain - 2*FtotGain*FtotRef; */
  c_idx_3 = (c_idx_3 + -2.0 * gainStruct_MuGain * refStruct_MuRef * b_par->URC.s)
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

/* Function for MATLAB Function: '<S6>/control allocator' */
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

/* Function for MATLAB Function: '<S6>/control allocator' */
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

/* Function for MATLAB Function: '<S6>/control allocator' */
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

/* Function for MATLAB Function: '<S6>/control allocator' */
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

/* Function for MATLAB Function: '<S6>/control allocator' */
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

/* Function for MATLAB Function: '<S6>/control allocator' */
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

/* Function for MATLAB Function: '<S6>/control allocator' */
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

/* Function for MATLAB Function: '<S6>/control allocator' */
void URControlModelClass::URControl_xscal(real_T a, real_T x[16], int32_T ix0)
{
  int32_T k;
  for (k = ix0; k <= ix0 + 3; k++) {
    x[k - 1] *= a;
  }
}

/* Function for MATLAB Function: '<S6>/control allocator' */
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

/* Function for MATLAB Function: '<S6>/control allocator' */
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

/* Function for MATLAB Function: '<S6>/control allocator' */
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

/* Function for MATLAB Function: '<S6>/control allocator' */
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

/* Function for MATLAB Function: '<S6>/control allocator' */
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
 * Function for MATLAB Function: '<S6>/control allocator'
 * function [w_cmd]  = URINDI_allocator(act_fail_id, Omega_f_dot, accel_z_f, v, G, G_kal, w_f, par)
 */
void URControlModelClass::URControl_URINDI_allocator(real_T act_fail_id, const
  real_T Omega_f_dot[3], real_T accel_z_f, const real_T v[4], real_T G[32],
  const real_T w_f[4], const struct_BjJlvF3OtyTGFNKTXKdR2G *b_par, real_T w_cmd
  [4])
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
  boolean_T x[4];
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
  /* 'URINDI_allocator:69' w_max = par.w_max; */
  /* 'URINDI_allocator:70' w_min = par.w_min; */
  /* 'URINDI_allocator:72' i_up = find(w_cmd>=w_max); */
  du_0 = w_f[0] + du[0];
  x[0] = (du_0 >= b_par->w_max);
  w_cmd[0] = du_0;
  du_0 = w_f[1] + du[1];
  x[1] = (du_0 >= b_par->w_max);
  w_cmd[1] = du_0;
  du_0 = w_f[2] + du[2];
  x[2] = (du_0 >= b_par->w_max);
  w_cmd[2] = du_0;
  du_0 = w_f[3] + du[3];
  x[3] = (du_0 >= b_par->w_max);
  w_cmd[3] = du_0;
  idx = 0;
  b_ii = 0;
  exitg1 = false;
  while ((!exitg1) && (b_ii < 4)) {
    if (x[b_ii]) {
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
  x[0] = (w_cmd[0] < b_par->w_min);
  x[1] = (w_cmd[1] < b_par->w_min);
  x[2] = (w_cmd[2] < b_par->w_min);
  x[3] = (du_0 < b_par->w_min);
  idx = 0;
  b_ii = 0;
  exitg1 = false;
  while ((!exitg1) && (b_ii < 4)) {
    if (x[b_ii]) {
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
    du[du_tmp] = b_par->w_max - w_f[du_tmp];
  }

  /* 'URINDI_allocator:76' du(i_down) =  w_min - w_f(i_down); */
  for (b_ii = 0; b_ii < idx; b_ii++) {
    du_tmp = ii_data[b_ii] - 1;
    du[du_tmp] = b_par->w_min - w_f[du_tmp];
  }

  /* 'URINDI_allocator:78' w_cmd(i_up) = w_max; */
  for (b_ii = 0; b_ii < fail_id_vec_size_idx_1; b_ii++) {
    w_cmd[i_up_data[b_ii] - 1] = b_par->w_max;
  }

  /* 'URINDI_allocator:79' w_cmd(i_down) = w_min; */
  for (b_ii = 0; b_ii < idx; b_ii++) {
    w_cmd[ii_data[b_ii] - 1] = b_par->w_min;
  }

  /* 'URINDI_allocator:81' du_last = du; */
  URControl_DW.du_last[0] = du[0];
  URControl_DW.du_last[1] = du[1];
  URControl_DW.du_last[2] = du[2];
  URControl_DW.du_last[3] = du[3];
}

/* Model step function */
void URControlModelClass::step()
{
  /* local block i/o variables */
  real_T rtb_acc[3];
  real_T rtb_VectorConcatenate1[6];
  real_T rtb_n_des[3];
  real_T rtb_DiscreteStateSpace[3];
  real_T psi;
  real_T R_IB[9];
  real_T FMax[4];
  real_T FMin[4];
  int32_T r1;
  int32_T r2;
  int32_T r3;
  real_T maxval;
  int32_T rtemp;
  real_T Iu;
  real_T Iv;
  real_T MuPrec;
  real_T uDot_max;
  static const int8_T b[3] = { 0, 0, -1 };

  real_T rotVec3[3];
  real_T Fset[4];
  real_T dHdx[54];
  real_T zEstimated[6];
  real_T dPos[3];
  real_T gain[54];
  static const int8_T b_0[9] = { 0, 0, 0, 0, 0, 0, 1, 0, 0 };

  static const int8_T c[9] = { 0, 0, 0, 0, 0, 0, 0, 1, 0 };

  static const int8_T d[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 1 };

  real_T Jacobian[81];
  static const real_T b_1[9] = { 1.0, 0.0, 0.0, 0.002, 0.0, 0.0, 0.0, 0.0, 0.0 };

  static const real_T c_0[9] = { 0.0, 1.0, 0.0, 0.0, 0.002, 0.0, 0.0, 0.0, 0.0 };

  static const real_T d_0[9] = { 0.0, 0.0, 1.0, 0.0, 0.0, 0.002, 0.0, 0.0, 0.0 };

  static const real_T e[3] = { 0.0, 0.0, 9.8124 };

  real_T rtb_omega[3];
  real_T rtb_att[3];
  real_T rtb_VectorConcatenate2[6];
  real_T rtb_xNew[9];
  real_T tmp[32];
  real_T dHdx_0[36];
  real_T tmp_0[9];
  real_T dHdx_1[54];
  real_T gain_0[81];
  real_T tmp_1[81];
  real_T rtb_VectorConcatenate2_0[6];
  real_T rtb_att_out_idx_2;
  real_T uv_des_idx_1;
  real_T rtb_DataTypeConversion8_idx_1;
  real_T dummy_idx_1;
  real_T dummy_idx_0;
  real_T errorVel_idx_0;
  real_T errorVel_idx_1;
  real_T w_max_idx_0;
  real_T wRotorSet_data_idx_3;
  boolean_T tmp_2;
  boolean_T tmp_3;
  real_T Jacobian_tmp;
  real_T Jacobian_tmp_0;
  real_T Jacobian_tmp_tmp;

  /* DataTypeConversion: '<Root>/Data Type Conversion1' incorporates:
   *  Inport: '<Root>/accs'
   */
  rtb_acc[0] = URControl_U.accs[0];

  /* SignalConversion: '<S5>/BusConversion_InsertedFor_basic estimators_at_inport_0' */
  rtb_DiscreteStateSpace[0] = 0.0;

  /* DataTypeConversion: '<Root>/Data Type Conversion5' incorporates:
   *  Inport: '<Root>/rates'
   */
  rtb_omega[0] = URControl_U.rates[0];

  /* SignalConversion: '<S15>/ConcatBufferAtVector Concatenate2In1' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion4'
   *  Inport: '<Root>/pos'
   */
  rtb_VectorConcatenate2[0] = URControl_U.pos[0];

  /* DataTypeConversion: '<Root>/Data Type Conversion1' incorporates:
   *  Inport: '<Root>/accs'
   */
  rtb_acc[1] = URControl_U.accs[1];

  /* SignalConversion: '<S5>/BusConversion_InsertedFor_basic estimators_at_inport_0' */
  rtb_DiscreteStateSpace[1] = 0.0;

  /* DataTypeConversion: '<Root>/Data Type Conversion5' incorporates:
   *  Inport: '<Root>/rates'
   */
  rtb_omega[1] = URControl_U.rates[1];

  /* SignalConversion: '<S15>/ConcatBufferAtVector Concatenate2In1' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion4'
   *  Inport: '<Root>/pos'
   */
  rtb_VectorConcatenate2[1] = URControl_U.pos[1];

  /* DataTypeConversion: '<Root>/Data Type Conversion1' incorporates:
   *  Inport: '<Root>/accs'
   */
  rtb_acc[2] = URControl_U.accs[2];

  /* SignalConversion: '<S5>/BusConversion_InsertedFor_basic estimators_at_inport_0' */
  rtb_DiscreteStateSpace[2] = 0.0;

  /* DataTypeConversion: '<Root>/Data Type Conversion5' incorporates:
   *  Inport: '<Root>/rates'
   */
  rtb_omega[2] = URControl_U.rates[2];

  /* SignalConversion: '<S15>/ConcatBufferAtVector Concatenate2In1' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion4'
   *  Inport: '<Root>/pos'
   */
  rtb_VectorConcatenate2[2] = URControl_U.pos[2];

  /* MATLAB Function: '<S15>/unwrap2pi' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion6'
   *  Inport: '<Root>/att'
   */
  /* :  psi0 = att(3); */
  /* :  if isempty(psi_last) */
  if (!URControl_DW.psi_last_not_empty) {
    /* :  psi_last = psi0; */
    URControl_DW.psi_last = URControl_U.att[2];
    URControl_DW.psi_last_not_empty = true;
  }

  /* :  if isempty(N) */
  /* :  if (psi0-psi_last)>1.0*pi */
  uv_des_idx_1 = URControl_U.att[2] - URControl_DW.psi_last;
  if (uv_des_idx_1 > 3.1415926535897931) {
    /* :  N = N-1; */
    URControl_DW.N--;
  } else {
    if (uv_des_idx_1 < -3.1415926535897931) {
      /* :  elseif (psi0-psi_last)< -1.0*pi */
      /* :  N = N+1; */
      URControl_DW.N++;
    }
  }

  /* :  psi_last = psi0; */
  URControl_DW.psi_last = URControl_U.att[2];

  /* :  att_out = att; */
  /* :  att_out(3) = psi0 + 2*N*pi; */
  rtb_att_out_idx_2 = 2.0 * URControl_DW.N * 3.1415926535897931 +
    URControl_U.att[2];

  /* End of MATLAB Function: '<S15>/unwrap2pi' */

  /* MATLAB Function: '<S15>/MATLAB Function' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion5'
   *  DataTypeConversion: '<Root>/Data Type Conversion6'
   *  Inport: '<Root>/att'
   *  Inport: '<Root>/rates'
   *  Sum: '<S17>/Diff'
   *  UnitDelay: '<S17>/UD'
   */
  /* :  if isempty(psi_last) */
  /* :  tol_max = 2; */
  /* :  tol = 1e-3; */
  /* :  dt = 0.002; */
  /* :  r = rates(3); */
  /* :  if abs(psi_diff) < tol */
  if (std::abs(rtb_att_out_idx_2 - URControl_DW.UD_DSTATE) < 0.001) {
    /* :  psi = psi_last + r * dt; */
    psi = URControl_U.rates[2] * 0.002 + URControl_DW.psi_last_b;
  } else if (std::abs(URControl_DW.psi_last_b - rtb_att_out_idx_2) > 2.0) {
    /* :  elseif abs(psi_last - att(3)) > tol_max */
    /* :  psi = psi_last + r * dt; */
    psi = URControl_U.rates[2] * 0.002 + URControl_DW.psi_last_b;
  } else {
    /* :  else */
    /* :  psi = att(3); */
    psi = rtb_att_out_idx_2;
  }

  /* :  psi_last = psi; */
  URControl_DW.psi_last_b = psi;

  /* :  att_smooth = att; */
  rtb_VectorConcatenate2[3] = URControl_U.att[0];
  rtb_VectorConcatenate2[4] = URControl_U.att[1];

  /* :  att_smooth(3) = psi; */
  rtb_VectorConcatenate2[5] = psi;

  /* End of MATLAB Function: '<S15>/MATLAB Function' */

  /* Outputs for Enabled SubSystem: '<S18>/Correct1' incorporates:
   *  EnablePort: '<S21>/Enable'
   */
  /* MATLAB Function: '<S21>/Correct' incorporates:
   *  Constant: '<S18>/R1'
   *  DataStoreRead: '<S21>/Data Store ReadP'
   *  DataStoreRead: '<S21>/Data Store ReadX'
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
  /* 'EKF_att_pos_mea_Jacobian:3' phi = x(7); */
  /* 'EKF_att_pos_mea_Jacobian:4' theta = x(8); */
  /* 'EKF_att_pos_mea_Jacobian:5' psi = x(9); */
  /* 'EKF_att_pos_mea_Jacobian:7' dx = u(1); */
  /* 'EKF_att_pos_mea_Jacobian:8' dy = u(2); */
  /* 'EKF_att_pos_mea_Jacobian:9' dz = u(3); */
  /* 'EKF_att_pos_mea_Jacobian:29' B = ... */
  /* 'EKF_att_pos_mea_Jacobian:30' [ 1, 0, 0, 0, 0, 0,   (dy)*(sin((phi))*sin((psi)) + cos((phi))*cos((psi))*sin((theta))) + (dz)*(cos((phi))*sin((psi)) - cos((psi))*sin((phi))*sin((theta))), cos((phi))*cos((psi))*cos((theta))*(dz) - cos((psi))*sin((theta))*(dx) + cos((psi))*cos((theta))*sin((phi))*(dy), (dz)*(cos((psi))*sin((phi)) - cos((phi))*sin((psi))*sin((theta))) - (dy)*(cos((phi))*cos((psi)) + sin((phi))*sin((psi))*sin((theta))) - cos((theta))*sin((psi))*(dx); */
  /* 'EKF_att_pos_mea_Jacobian:31'  0, 1, 0, 0, 0, 0, - (dy)*(cos((psi))*sin((phi)) - cos((phi))*sin((psi))*sin((theta))) - (dz)*(cos((phi))*cos((psi)) + sin((phi))*sin((psi))*sin((theta))), cos((phi))*cos((theta))*sin((psi))*(dz) - sin((psi))*sin((theta))*(dx) + cos((theta))*sin((phi))*sin((psi))*(dy), (dz)*(sin((phi))*sin((psi)) + cos((phi))*cos((psi))*sin((theta))) - (dy)*(cos((phi))*sin((psi)) - cos((psi))*sin((phi))*sin((theta))) + cos((psi))*cos((theta))*(dx); */
  /* 'EKF_att_pos_mea_Jacobian:32'  0, 0, 1, 0, 0, 0,                                                                                                     cos((phi))*cos((theta))*(dy) - cos((theta))*sin((phi))*(dz),                                            - cos((theta))*(dx) - cos((phi))*sin((theta))*(dz) - sin((phi))*sin((theta))*(dy),                                                                                                                                                                                                                                0; */
  /* 'EKF_att_pos_mea_Jacobian:33'  0, 0, 0, 0, 0, 0,                                                                                                                                                                                       1,                                                                                                                                                            0,                                                                                                                                                                                                                                0; */
  /* 'EKF_att_pos_mea_Jacobian:34'  0, 0, 0, 0, 0, 0,                                                                                                                                                                                       0,                                                                                                                                                            1,                                                                                                                                                                                                                                0; */
  /* 'EKF_att_pos_mea_Jacobian:35'  0, 0, 0, 0, 0, 0,                                                                                                                                                                                       0,                                                                                                                                                            0,                                                                                                                                                                                                                                1]; */
  dHdx[0] = 1.0;
  dHdx[6] = 0.0;
  dHdx[12] = 0.0;
  dHdx[18] = 0.0;
  dHdx[24] = 0.0;
  dHdx[30] = 0.0;
  MuPrec = std::cos(URControl_DW.x[6]);
  psi = std::sin(URControl_DW.x[8]);
  w_max_idx_0 = std::cos(URControl_DW.x[8]);
  Iu = std::sin(URControl_DW.x[6]);
  maxval = std::sin(URControl_DW.x[7]);
  dummy_idx_0 = MuPrec * w_max_idx_0;
  dummy_idx_1 = MuPrec * psi;
  uv_des_idx_1 = w_max_idx_0 * Iu;
  uDot_max = Iu * psi;
  rtb_DataTypeConversion8_idx_1 = (dummy_idx_0 * maxval + uDot_max) * 0.0;
  Iv = (dummy_idx_1 - uv_des_idx_1 * maxval) * 0.0;
  dHdx[36] = rtb_DataTypeConversion8_idx_1 + Iv;
  errorVel_idx_0 = std::cos(URControl_DW.x[7]);
  errorVel_idx_1 = w_max_idx_0 * errorVel_idx_0;
  wRotorSet_data_idx_3 = w_max_idx_0 * maxval;
  dHdx[42] = (dummy_idx_0 * errorVel_idx_0 * 0.0 - wRotorSet_data_idx_3 * 0.0) +
    errorVel_idx_1 * Iu * 0.0;
  dummy_idx_1 = uv_des_idx_1 - dummy_idx_1 * maxval;
  dummy_idx_0 = (uDot_max * maxval + dummy_idx_0) * 0.0;
  dHdx[48] = (dummy_idx_1 * 0.0 - dummy_idx_0) - errorVel_idx_0 * psi * 0.0;
  dHdx[1] = 0.0;
  dHdx[7] = 1.0;
  dHdx[13] = 0.0;
  dHdx[19] = 0.0;
  dHdx[25] = 0.0;
  dHdx[31] = 0.0;
  dHdx[37] = dummy_idx_1 * -0.0 - dummy_idx_0;
  dummy_idx_0 = MuPrec * errorVel_idx_0;
  dummy_idx_1 = errorVel_idx_0 * Iu;
  uDot_max = psi * maxval;
  dHdx[43] = (dummy_idx_0 * psi * 0.0 - uDot_max * 0.0) + dummy_idx_1 * psi *
    0.0;
  dHdx[49] = (rtb_DataTypeConversion8_idx_1 - Iv) + errorVel_idx_1 * 0.0;
  dHdx[2] = 0.0;
  dHdx[8] = 0.0;
  dHdx[14] = 1.0;
  dHdx[20] = 0.0;
  dHdx[26] = 0.0;
  dHdx[32] = 0.0;
  dHdx[38] = dummy_idx_0 * 0.0 - dummy_idx_1 * 0.0;
  dHdx[44] = (-errorVel_idx_0 * 0.0 - MuPrec * maxval * 0.0) - Iu * maxval * 0.0;
  dHdx[50] = 0.0;
  for (r1 = 0; r1 < 9; r1++) {
    dHdx[3 + 6 * r1] = b_0[r1];
    dHdx[4 + 6 * r1] = c[r1];
    dHdx[5 + 6 * r1] = d[r1];
  }

  /* 'EKF_att_pos_mea:3' y = zeros(6,1); */
  /* 'EKF_att_pos_mea:5' px = x(1); */
  /* 'EKF_att_pos_mea:6' py = x(2); */
  /* 'EKF_att_pos_mea:7' pz = x(3); */
  /* 'EKF_att_pos_mea:9' phi = x(7); */
  /* 'EKF_att_pos_mea:10' theta = x(8); */
  /* 'EKF_att_pos_mea:11' psi = x(9); */
  /* 'EKF_att_pos_mea:13' dx = u(1); */
  /* 'EKF_att_pos_mea:14' dy = u(2); */
  /* 'EKF_att_pos_mea:15' dz = u(3); */
  /* 'EKF_att_pos_mea:17' R_IB = [cos(psi)*cos(theta) , cos(psi)*sin(theta)*sin(phi)-sin(psi)*cos(phi), cos(psi)*sin(theta)*cos(phi)+sin(psi)*sin(phi); */
  /* 'EKF_att_pos_mea:18'     sin(psi)*cos(theta) ,sin(psi)*sin(theta)*sin(phi)+cos(psi)*cos(phi), sin(psi)*sin(theta)*cos(phi)-cos(psi)*sin(phi); */
  /* 'EKF_att_pos_mea:19'     -sin(theta)          , cos(theta)*sin(phi)                          , cos(theta)*cos(phi)                          ]; */
  /* 'EKF_att_pos_mea:21' dPos = R_IB*[dx;dy;dz]; */
  tmp_0[0] = errorVel_idx_1;
  tmp_0[3] = wRotorSet_data_idx_3 * Iu - psi * MuPrec;
  tmp_0[6] = wRotorSet_data_idx_3 * MuPrec + psi * Iu;
  tmp_0[1] = psi * errorVel_idx_0;
  tmp_0[4] = uDot_max * Iu + w_max_idx_0 * MuPrec;
  tmp_0[7] = uDot_max * MuPrec - uv_des_idx_1;
  tmp_0[2] = -maxval;
  tmp_0[5] = dummy_idx_1;
  tmp_0[8] = errorVel_idx_0 * MuPrec;
  for (r1 = 0; r1 < 3; r1++) {
    dPos[r1] = tmp_0[r1 + 6] * 0.0 + (tmp_0[r1 + 3] * 0.0 + tmp_0[r1] * 0.0);
  }

  /* 'EKF_att_pos_mea:23' y(1) = px + dPos(1); */
  zEstimated[0] = URControl_DW.x[0] + dPos[0];

  /* 'EKF_att_pos_mea:24' y(2) = py + dPos(2); */
  zEstimated[1] = URControl_DW.x[1] + dPos[1];

  /* 'EKF_att_pos_mea:25' y(3) = pz + dPos(3); */
  zEstimated[2] = URControl_DW.x[2] + dPos[2];

  /* 'EKF_att_pos_mea:26' y(4) = phi; */
  zEstimated[3] = URControl_DW.x[6];

  /* 'EKF_att_pos_mea:27' y(5) = theta; */
  zEstimated[4] = URControl_DW.x[7];

  /* 'EKF_att_pos_mea:28' y(6) = psi; */
  zEstimated[5] = URControl_DW.x[8];
  for (r1 = 0; r1 < 9; r1++) {
    for (r2 = 0; r2 < 6; r2++) {
      rtemp = r1 + 9 * r2;
      gain[rtemp] = 0.0;
      for (r3 = 0; r3 < 9; r3++) {
        gain[rtemp] = URControl_DW.P[9 * r3 + r1] * dHdx[6 * r3 + r2] + gain[9 *
          r2 + r1];
      }
    }
  }

  for (r1 = 0; r1 < 6; r1++) {
    for (r2 = 0; r2 < 9; r2++) {
      rtemp = r1 + 6 * r2;
      dHdx_1[rtemp] = 0.0;
      for (r3 = 0; r3 < 9; r3++) {
        dHdx_1[rtemp] = dHdx[6 * r3 + r1] * URControl_DW.P[9 * r2 + r3] +
          dHdx_1[6 * r2 + r1];
      }
    }

    for (r2 = 0; r2 < 6; r2++) {
      uv_des_idx_1 = 0.0;
      for (r3 = 0; r3 < 9; r3++) {
        uv_des_idx_1 += dHdx_1[6 * r3 + r1] * dHdx[6 * r3 + r2];
      }

      dHdx_0[r1 + 6 * r2] = URControl_ConstP.R1_Value[6 * r2 + r1] +
        uv_des_idx_1;
    }
  }

  URControl_mrdivide_helper(gain, dHdx_0);
  for (r1 = 0; r1 < 9; r1++) {
    for (r2 = 0; r2 < 9; r2++) {
      rtemp = r1 + 9 * r2;
      gain_0[rtemp] = 0.0;
      for (r3 = 0; r3 < 6; r3++) {
        gain_0[rtemp] = gain[9 * r3 + r1] * dHdx[6 * r2 + r3] + gain_0[9 * r2 +
          r1];
      }
    }

    for (r2 = 0; r2 < 9; r2++) {
      uv_des_idx_1 = 0.0;
      for (r3 = 0; r3 < 9; r3++) {
        uv_des_idx_1 += gain_0[9 * r3 + r1] * URControl_DW.P[9 * r2 + r3];
      }

      tmp_1[r1 + 9 * r2] = URControl_DW.P[9 * r2 + r1] - uv_des_idx_1;
    }
  }

  /* DataStoreWrite: '<S21>/Data Store WriteP' */
  memcpy(&URControl_DW.P[0], &tmp_1[0], 81U * sizeof(real_T));

  /* MATLAB Function: '<S21>/Correct' */
  for (r1 = 0; r1 < 6; r1++) {
    rtb_VectorConcatenate2_0[r1] = rtb_VectorConcatenate2[r1] - zEstimated[r1];
  }

  /* DataStoreWrite: '<S21>/Data Store WriteX' incorporates:
   *  DataStoreRead: '<S21>/Data Store ReadX'
   *  MATLAB Function: '<S21>/Correct'
   */
  for (r1 = 0; r1 < 9; r1++) {
    uv_des_idx_1 = 0.0;
    for (r2 = 0; r2 < 6; r2++) {
      uv_des_idx_1 += gain[9 * r2 + r1] * rtb_VectorConcatenate2_0[r2];
    }

    URControl_DW.x[r1] += uv_des_idx_1;
  }

  /* End of DataStoreWrite: '<S21>/Data Store WriteX' */
  /* End of Outputs for SubSystem: '<S18>/Correct1' */

  /* MATLAB Function: '<S5>/basic estimators' incorporates:
   *  BusCreator: '<S5>/BusConversion_InsertedFor_basic estimators_at_inport_0'
   *  DataStoreRead: '<S22>/Data Store Read'
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
   *  MATLAB Function: '<S3>/Precession'
   */
  /* :  [State, DAQ] = UREstimators(sensors, State, DAQ, pos_est, vel_est, att_est, fail_id, par, URControlParams); */
  /* 'UREstimators:3' if isempty(omegaFilter) */
  if (!URControl_DW.omegaFilter_not_empty) {
    /* 'UREstimators:3' omegaFilter = LPFilter(URpar.est_omegaFilterT, [0,0,0], 40, -40); */
    /* 'LPFilter:14' obj.filterT = filterT; */
    URControl_DW.omegaFilter.filterT = URControlParams.est_omegaFilterT;

    /* 'LPFilter:15' obj.value = initValue; */
    URControl_DW.omegaFilter.value[0] = 0.0;
    URControl_DW.omegaFilter.value[1] = 0.0;
    URControl_DW.omegaFilter.value[2] = 0.0;

    /* 'LPFilter:16' obj.maxLim = maxLim; */
    URControl_DW.omegaFilter.maxLim = 40.0;

    /* 'LPFilter:17' obj.minLim = minLim; */
    URControl_DW.omegaFilter.minLim = -40.0;
    URControl_DW.omegaFilter_not_empty = true;
  }

  /* 'UREstimators:4' if isempty(posFilter) */
  if (!URControl_DW.posFilter_not_empty) {
    /* 'UREstimators:4' posFilter = LPFilter(URpar.est_posFilterT, [0,0,0], inf, -inf); */
    /* 'LPFilter:14' obj.filterT = filterT; */
    URControl_DW.posFilter.filterT = URControlParams.est_posFilterT;

    /* 'LPFilter:15' obj.value = initValue; */
    URControl_DW.posFilter.value[0] = 0.0;
    URControl_DW.posFilter.value[1] = 0.0;
    URControl_DW.posFilter.value[2] = 0.0;

    /* 'LPFilter:16' obj.maxLim = maxLim; */
    URControl_DW.posFilter.maxLim = (rtInf);

    /* 'LPFilter:17' obj.minLim = minLim; */
    URControl_DW.posFilter.minLim = (rtMinusInf);
    URControl_DW.posFilter_not_empty = true;
  }

  /* 'UREstimators:5' if isempty(velFilter) */
  if (!URControl_DW.velFilter_not_empty) {
    /* 'UREstimators:5' velFilter = LPFilter(URpar.est_velFilterT, [0,0,0], 20, -20); */
    /* 'LPFilter:14' obj.filterT = filterT; */
    URControl_DW.velFilter.filterT = URControlParams.est_velFilterT;

    /* 'LPFilter:15' obj.value = initValue; */
    URControl_DW.velFilter.value[0] = 0.0;
    URControl_DW.velFilter.value[1] = 0.0;
    URControl_DW.velFilter.value[2] = 0.0;

    /* 'LPFilter:16' obj.maxLim = maxLim; */
    URControl_DW.velFilter.maxLim = 20.0;

    /* 'LPFilter:17' obj.minLim = minLim; */
    URControl_DW.velFilter.minLim = -20.0;
    URControl_DW.velFilter_not_empty = true;
  }

  /* 'UREstimators:7' state.acc = sensors.acc; */
  URControl_DW.State.acc[0] = rtb_acc[0];
  URControl_DW.State.acc[1] = rtb_acc[1];
  URControl_DW.State.acc[2] = rtb_acc[2];

  /* 'UREstimators:8' if URpar.est_useEKF == 1 */
  if (URControlParams.est_useEKF == 1.0) {
    /* Outputs for Atomic SubSystem: '<S18>/Output' */
    /* 'UREstimators:9' state.vel = vel_est'; */
    /* 'UREstimators:10' state.pos = pos_est'; */
    /* 'UREstimators:11' state.att = att_est'; */
    URControl_DW.State.vel[0] = URControl_DW.x[3];
    URControl_DW.State.pos[0] = URControl_DW.x[0];
    URControl_DW.State.att[0] = URControl_DW.x[6];
    URControl_DW.State.vel[1] = URControl_DW.x[4];
    URControl_DW.State.pos[1] = URControl_DW.x[1];
    URControl_DW.State.att[1] = URControl_DW.x[7];
    URControl_DW.State.vel[2] = URControl_DW.x[5];
    URControl_DW.State.pos[2] = URControl_DW.x[2];
    URControl_DW.State.att[2] = URControl_DW.x[8];

    /* End of Outputs for SubSystem: '<S18>/Output' */
  } else {
    /* 'UREstimators:12' else */
    /* 'UREstimators:13' state.vel = sensors.vel; */
    /* 'UREstimators:14' state.pos = sensors.pos; */
    /* 'UREstimators:15' state.att = sensors.att; */
    URControl_DW.State.vel[0] = URControl_U.vel[0];
    URControl_DW.State.pos[0] = URControl_U.pos[0];
    URControl_DW.State.att[0] = URControl_U.att[0];
    URControl_DW.State.vel[1] = URControl_U.vel[1];
    URControl_DW.State.pos[1] = URControl_U.pos[1];
    URControl_DW.State.att[1] = URControl_U.att[1];
    URControl_DW.State.vel[2] = URControl_U.vel[2];
    URControl_DW.State.pos[2] = URControl_U.pos[2];
    URControl_DW.State.att[2] = URControl_U.att[2];
  }

  /* 'UREstimators:17' state.velB = sensors.velB; */
  /* 'UREstimators:18' state.omega = sensors.omega; */
  URControl_DW.State.velB[0] = rtb_DiscreteStateSpace[0];
  URControl_DW.State.omega[0] = URControl_U.rates[0];
  URControl_DW.State.velB[1] = rtb_DiscreteStateSpace[1];
  URControl_DW.State.omega[1] = URControl_U.rates[1];
  URControl_DW.State.velB[2] = rtb_DiscreteStateSpace[2];
  URControl_DW.State.omega[2] = URControl_U.rates[2];

  /* 'UREstimators:20' omegaFilter.updateFilterT(URpar.est_omegaFilterT); */
  /* 'LPFilter:26' obj.filterT = filterT; */
  URControl_DW.omegaFilter.filterT = URControlParams.est_omegaFilterT;

  /* 'UREstimators:21' omegaFilter.update(sensors.omega); */
  URControl_LPFilter_update(&URControl_DW.omegaFilter, rtb_omega);

  /* 'UREstimators:22' state.omegaf = omegaFilter.value; */
  URControl_DW.State.omegaf[0] = URControl_DW.omegaFilter.value[0];
  URControl_DW.State.omegaf[1] = URControl_DW.omegaFilter.value[1];
  URControl_DW.State.omegaf[2] = URControl_DW.omegaFilter.value[2];

  /* 'UREstimators:24' posFilter.updateFilterT(URpar.est_posFilterT); */
  /* 'LPFilter:26' obj.filterT = filterT; */
  URControl_DW.posFilter.filterT = URControlParams.est_posFilterT;

  /* 'UREstimators:25' posFilter.update(state.pos); */
  URControl_LPFilter_update(&URControl_DW.posFilter, URControl_DW.State.pos);

  /* 'UREstimators:26' state.posf = posFilter.value; */
  URControl_DW.State.posf[0] = URControl_DW.posFilter.value[0];
  URControl_DW.State.posf[1] = URControl_DW.posFilter.value[1];
  URControl_DW.State.posf[2] = URControl_DW.posFilter.value[2];

  /* 'UREstimators:28' velFilter.updateFilterT(URpar.est_velFilterT); */
  /* 'LPFilter:26' obj.filterT = filterT; */
  URControl_DW.velFilter.filterT = URControlParams.est_velFilterT;

  /* 'UREstimators:29' velFilter.update(state.vel); */
  URControl_LPFilter_update(&URControl_DW.velFilter, URControl_DW.State.vel);

  /* 'UREstimators:30' state.velf = velFilter.value; */
  URControl_DW.State.velf[0] = URControl_DW.velFilter.value[0];
  URControl_DW.State.velf[1] = URControl_DW.velFilter.value[1];
  URControl_DW.State.velf[2] = URControl_DW.velFilter.value[2];

  /* 'UREstimators:32' state.wRotor = sensors.wRotor/30*pi; */
  URControl_DW.State.wRotor[0] = (real_T)URControl_U.esc_rpm[0] / 30.0 *
    3.1415926535897931;
  URControl_DW.State.wRotor[1] = (real_T)URControl_U.esc_rpm[1] / 30.0 *
    3.1415926535897931;
  URControl_DW.State.wRotor[2] = (real_T)URControl_U.esc_rpm[2] / 30.0 *
    3.1415926535897931;
  URControl_DW.State.wRotor[3] = (real_T)URControl_U.esc_rpm[3] / 30.0 *
    3.1415926535897931;

  /* 'UREstimators:34' phi = state.att(1); */
  /* 'UREstimators:35' theta = state.att(2); */
  /* 'UREstimators:36' psi = state.att(3); */
  /* 'UREstimators:39' R_IB = [cos(theta)*cos(psi)                             , cos(theta)*sin(psi)                               , -sin(theta); */
  /* 'UREstimators:40'         sin(phi)*sin(theta)*cos(psi)-cos(phi)*sin(psi)  , sin(phi)*sin(theta)*sin(psi)+cos(phi)*cos(psi)    , sin(phi)*cos(theta); */
  /* 'UREstimators:41'         cos(phi)*sin(theta)*cos(psi)+sin(phi)*sin(psi)  , cos(phi)*sin(theta)*sin(psi)-sin(phi)*cos(psi)    , cos(phi)*cos(theta)]; */
  MuPrec = std::cos(URControl_DW.State.att[1]);
  psi = std::cos(URControl_DW.State.att[2]);
  R_IB[0] = MuPrec * psi;
  w_max_idx_0 = std::sin(URControl_DW.State.att[2]);
  R_IB[3] = MuPrec * w_max_idx_0;
  Iu = std::sin(URControl_DW.State.att[1]);
  R_IB[6] = -Iu;
  maxval = std::sin(URControl_DW.State.att[0]);
  dummy_idx_0 = maxval * Iu;
  dummy_idx_1 = std::cos(URControl_DW.State.att[0]);
  R_IB[1] = dummy_idx_0 * psi - dummy_idx_1 * w_max_idx_0;
  R_IB[4] = dummy_idx_0 * w_max_idx_0 + dummy_idx_1 * psi;
  R_IB[7] = maxval * MuPrec;
  Iu *= dummy_idx_1;
  R_IB[2] = Iu * psi + maxval * w_max_idx_0;
  R_IB[5] = Iu * w_max_idx_0 - maxval * psi;
  R_IB[8] = dummy_idx_1 * MuPrec;

  /* 'UREstimators:43' state.n = (R_IB\[0;0;-1])'; */
  r1 = 0;
  r2 = 1;
  r3 = 2;
  maxval = std::abs(R_IB[0]);
  psi = std::abs(R_IB[1]);
  if (psi > maxval) {
    maxval = psi;
    r1 = 1;
    r2 = 0;
  }

  if (std::abs(R_IB[2]) > maxval) {
    r1 = 2;
    r2 = 1;
    r3 = 0;
  }

  R_IB[r2] /= R_IB[r1];
  R_IB[r3] /= R_IB[r1];
  R_IB[3 + r2] -= R_IB[3 + r1] * R_IB[r2];
  R_IB[3 + r3] -= R_IB[3 + r1] * R_IB[r3];
  R_IB[6 + r2] -= R_IB[6 + r1] * R_IB[r2];
  R_IB[6 + r3] -= R_IB[6 + r1] * R_IB[r3];
  if (std::abs(R_IB[3 + r3]) > std::abs(R_IB[3 + r2])) {
    rtemp = r2;
    r2 = r3;
    r3 = rtemp;
  }

  R_IB[3 + r3] /= R_IB[3 + r2];
  R_IB[6 + r3] -= R_IB[3 + r3] * R_IB[6 + r2];
  rtb_DataTypeConversion8_idx_1 = (real_T)b[r2] - (real_T)b[r1] * R_IB[r2];
  maxval = (((real_T)b[r3] - (real_T)b[r1] * R_IB[r3]) - R_IB[3 + r3] *
            rtb_DataTypeConversion8_idx_1) / R_IB[6 + r3];
  rtb_DataTypeConversion8_idx_1 -= R_IB[6 + r2] * maxval;
  rtb_DataTypeConversion8_idx_1 /= R_IB[3 + r2];
  URControl_DW.State.n[0] = (((real_T)b[r1] - R_IB[6 + r1] * maxval) - R_IB[3 +
    r1] * rtb_DataTypeConversion8_idx_1) / R_IB[r1];
  URControl_DW.State.n[1] = rtb_DataTypeConversion8_idx_1;
  URControl_DW.State.n[2] = maxval;

  /* 'UREstimators:47' rotAngle = 45/180*pi; */
  /* 'UREstimators:48' Rxu = [cos(rotAngle), -sin(rotAngle); ... */
  /* 'UREstimators:49'        sin(rotAngle), cos(rotAngle)]; */
  /* 'UREstimators:52' dummy = Rxu*[state.omega(1); state.omega(2)]; */
  /* 'UREstimators:53' uRot = dummy(1); */
  /* 'UREstimators:53' vRot = dummy(2); */
  /* 'UREstimators:54' state.omegaUV = [uRot,vRot,state.omega(3)]; */
  URControl_DW.State.omegaUV[0] = 0.70710678118654757 *
    URControl_DW.State.omega[0] + -0.70710678118654746 *
    URControl_DW.State.omega[1];
  URControl_DW.State.omegaUV[1] = 0.70710678118654746 *
    URControl_DW.State.omega[0] + 0.70710678118654757 *
    URControl_DW.State.omega[1];
  URControl_DW.State.omegaUV[2] = URControl_DW.State.omega[2];

  /* 'UREstimators:56' dummy = Rxu*[state.omegaf(1); state.omegaf(2)]; */
  /* 'UREstimators:57' uRot = dummy(1); */
  /* 'UREstimators:57' vRot = dummy(2); */
  /* 'UREstimators:58' state.omegafUV = [uRot,vRot,state.omegaf(3)]; */
  URControl_DW.State.omegafUV[0] = 0.70710678118654757 *
    URControl_DW.State.omegaf[0] + -0.70710678118654746 *
    URControl_DW.State.omegaf[1];
  URControl_DW.State.omegafUV[1] = 0.70710678118654746 *
    URControl_DW.State.omegaf[0] + 0.70710678118654757 *
    URControl_DW.State.omegaf[1];
  URControl_DW.State.omegafUV[2] = URControl_DW.State.omegaf[2];

  /* 'UREstimators:61' FMax = URpar.envp_FMax; */
  /* 'UREstimators:62' FMin = URpar.envp_FMin; */
  FMax[0] = URControlParams.envp_FMax[0];
  FMin[0] = URControlParams.envp_FMin[0];
  FMax[1] = URControlParams.envp_FMax[1];
  FMin[1] = URControlParams.envp_FMin[1];
  FMax[2] = URControlParams.envp_FMax[2];
  FMin[2] = URControlParams.envp_FMin[2];
  FMax[3] = URControlParams.envp_FMax[3];
  FMin[3] = URControlParams.envp_FMin[3];

  /* 'UREstimators:63' if fail_id > 0 */
  if (URControl_U.fail_flag > 0) {
    /* 'UREstimators:64' FMax(fail_id) = par.fail_wRot^2*URpar.k0; */
    MuPrec = 90000.0 * URControlParams.k0;
    FMax[URControl_U.fail_flag - 1] = MuPrec;

    /* 'UREstimators:65' FMin(fail_id) = par.fail_wRot^2*URpar.k0; */
    FMin[URControl_U.fail_flag - 1] = MuPrec;
  }

  /* 'UREstimators:67' state.FMax = FMax; */
  /* 'UREstimators:68' state.FMin = FMin; */
  URControl_DW.State.FMax[0] = FMax[0];
  URControl_DW.State.FMin[0] = FMin[0];
  URControl_DW.State.FMax[1] = FMax[1];
  URControl_DW.State.FMin[1] = FMin[1];
  URControl_DW.State.FMax[2] = FMax[2];
  URControl_DW.State.FMin[2] = FMin[2];
  URControl_DW.State.FMax[3] = FMax[3];
  URControl_DW.State.FMin[3] = FMin[3];

  /* 'UREstimators:70' state.fail_id = fail_id; */
  URControl_DW.State.fail_id = URControl_U.fail_flag;

  /* 'UREstimators:73' [uvDot_max, uvDot_min, uv_max, uv_min] = UREnvelopCalc(state, URpar); */
  /* 'UREnvelopCalc:3' s = sqrt(URpar.l^2 + URpar.b^2); */
  w_max_idx_0 = std::sqrt(URControlParams.l * URControlParams.l +
    URControlParams.b * URControlParams.b);

  /* 'UREnvelopCalc:4' r = state.omega(3); */
  /* 'UREnvelopCalc:7' Mu_max = (-state.FMin(2) + state.FMax(4))*s; */
  /* 'UREnvelopCalc:8' Mu_min = (-state.FMax(2) + state.FMin(4))*s; */
  /* 'UREnvelopCalc:9' Mv_max = (state.FMax(1) - state.FMin(3))*s; */
  /* 'UREnvelopCalc:10' Mv_min = (state.FMin(1) - state.FMax(3))*s; */
  /* 'UREnvelopCalc:13' Iu = sqrt(URpar.Ix^2 + URpar.Iy^2); */
  psi = std::sqrt(URControlParams.Ix * URControlParams.Ix + URControlParams.Iy *
                  URControlParams.Iy);

  /* 'UREnvelopCalc:14' Iv = sqrt(URpar.Ix^2 + URpar.Iy^2); */
  /* 'UREnvelopCalc:17' MuPrec = state.omegafUV(2)*r*(Iv - URpar.Iz); */
  MuPrec = URControl_DW.State.omegafUV[1] * URControl_DW.State.omega[2] * (psi -
    URControlParams.Iz);

  /* 'UREnvelopCalc:18' MvPrec = state.omegafUV(1)*r*(URpar.Iz - Iu); */
  maxval = URControl_DW.State.omegafUV[0] * URControl_DW.State.omega[2] *
    (URControlParams.Iz - psi);

  /* 'UREnvelopCalc:21' uDot_max = (MuPrec + Mu_max)/Iu; */
  uDot_max = ((-FMin[1] + FMax[3]) * w_max_idx_0 + MuPrec) / psi;

  /* 'UREnvelopCalc:22' uDot_min = (MuPrec + Mu_min)/Iu; */
  MuPrec = ((-FMax[1] + FMin[3]) * w_max_idx_0 + MuPrec) / psi;

  /* 'UREnvelopCalc:24' vDot_max = (MvPrec + Mv_max)/Iv; */
  Iu = ((FMax[0] - FMin[2]) * w_max_idx_0 + maxval) / psi;

  /* 'UREnvelopCalc:25' vDot_min = (MvPrec + Mv_min)/Iv; */
  psi = ((FMin[0] - FMax[2]) * w_max_idx_0 + maxval) / psi;

  /* 'UREnvelopCalc:28' dt = URpar.envp_timeHorz; */
  /* 'UREnvelopCalc:30' u_max = state.omegafUV(1) + max(uDot_max,URpar.envp_minDeviation)*dt; */
  /* 'UREnvelopCalc:31' u_min = state.omegafUV(1) + min(uDot_min,-URpar.envp_minDeviation)*dt; */
  /* 'UREnvelopCalc:33' v_max = state.omegafUV(2) + max(vDot_max,URpar.envp_minDeviation)*dt; */
  /* 'UREnvelopCalc:34' v_min = state.omegafUV(2) + min(vDot_min,-URpar.envp_minDeviation)*dt; */
  /* 'UREnvelopCalc:37' uvDot_max = [uDot_max; vDot_max]; */
  /* 'UREnvelopCalc:38' uvDot_min = [uDot_min; vDot_min]; */
  /* 'UREnvelopCalc:39' uv_min = [u_min; v_min]; */
  /* 'UREnvelopCalc:40' uv_max = [u_max; v_max]; */
  /* 'UREstimators:74' state.uvDot_max = uvDot_max; */
  URControl_DW.State.uvDot_max[0] = uDot_max;
  URControl_DW.State.uvDot_max[1] = Iu;

  /* 'UREstimators:75' state.uvDot_min = uvDot_min; */
  URControl_DW.State.uvDot_min[0] = MuPrec;
  URControl_DW.State.uvDot_min[1] = psi;

  /* 'UREstimators:76' state.uv_max = uv_max; */
  tmp_2 = rtIsNaN(URControlParams.envp_minDeviation);
  if ((uDot_max > URControlParams.envp_minDeviation) || tmp_2) {
    maxval = uDot_max;
  } else {
    maxval = URControlParams.envp_minDeviation;
  }

  URControl_DW.State.uv_max[0] = maxval * URControlParams.envp_timeHorz +
    URControl_DW.State.omegafUV[0];
  if ((Iu > URControlParams.envp_minDeviation) || tmp_2) {
    maxval = Iu;
  } else {
    maxval = URControlParams.envp_minDeviation;
  }

  URControl_DW.State.uv_max[1] = maxval * URControlParams.envp_timeHorz +
    URControl_DW.State.omegafUV[1];

  /* 'UREstimators:77' state.uv_min = uv_min; */
  tmp_3 = rtIsNaN(-URControlParams.envp_minDeviation);
  if ((MuPrec < -URControlParams.envp_minDeviation) || tmp_3) {
    maxval = MuPrec;
  } else {
    maxval = -URControlParams.envp_minDeviation;
  }

  URControl_DW.State.uv_min[0] = maxval * URControlParams.envp_timeHorz +
    URControl_DW.State.omegafUV[0];
  if ((psi < -URControlParams.envp_minDeviation) || tmp_3) {
    maxval = psi;
  } else {
    maxval = -URControlParams.envp_minDeviation;
  }

  URControl_DW.State.uv_min[1] = maxval * URControlParams.envp_timeHorz +
    URControl_DW.State.omegafUV[1];

  /* 'UREstimators:80' daq.omegaUV = state.omegaUV; */
  /* 'UREstimators:81' daq.omegafUV = state.omegafUV; */
  URControl_DW.DAQ.omegaUV[0] = URControl_DW.State.omegaUV[0];
  URControl_DW.DAQ.omegafUV[0] = URControl_DW.State.omegafUV[0];
  URControl_DW.DAQ.omegaUV[1] = URControl_DW.State.omegaUV[1];
  URControl_DW.DAQ.omegafUV[1] = URControl_DW.State.omegafUV[1];
  URControl_DW.DAQ.omegaUV[2] = URControl_DW.State.omegaUV[2];
  URControl_DW.DAQ.omegafUV[2] = URControl_DW.State.omegafUV[2];

  /* 'UREstimators:82' daq.FMax = state.FMax; */
  /* 'UREstimators:83' daq.FMin = state.FMin; */
  URControl_DW.DAQ.FMax[0] = FMax[0];
  URControl_DW.DAQ.FMin[0] = FMin[0];
  URControl_DW.DAQ.FMax[1] = FMax[1];
  URControl_DW.DAQ.FMin[1] = FMin[1];
  URControl_DW.DAQ.FMax[2] = FMax[2];
  URControl_DW.DAQ.FMin[2] = FMin[2];
  URControl_DW.DAQ.FMax[3] = FMax[3];
  URControl_DW.DAQ.FMin[3] = FMin[3];

  /* 'UREstimators:84' daq.uvDot_max = state.uvDot_max; */
  URControl_DW.DAQ.uvDot_max[0] = uDot_max;
  URControl_DW.DAQ.uvDot_max[1] = Iu;

  /* 'UREstimators:85' daq.uvDot_min = state.uvDot_min; */
  URControl_DW.DAQ.uvDot_min[0] = MuPrec;
  URControl_DW.DAQ.uvDot_min[1] = psi;

  /* 'UREstimators:86' daq.uv_max = state.uv_max; */
  if ((!(uDot_max > URControlParams.envp_minDeviation)) && (!tmp_2)) {
    uDot_max = URControlParams.envp_minDeviation;
  }

  URControl_DW.DAQ.uv_max[0] = uDot_max * URControlParams.envp_timeHorz +
    URControl_DW.State.omegafUV[0];
  if ((!(Iu > URControlParams.envp_minDeviation)) && (!tmp_2)) {
    Iu = URControlParams.envp_minDeviation;
  }

  URControl_DW.DAQ.uv_max[1] = Iu * URControlParams.envp_timeHorz +
    URControl_DW.State.omegafUV[1];

  /* 'UREstimators:87' daq.uv_min = state.uv_min; */
  if ((!(MuPrec < -URControlParams.envp_minDeviation)) && (!tmp_3)) {
    MuPrec = -URControlParams.envp_minDeviation;
  }

  URControl_DW.DAQ.uv_min[0] = MuPrec * URControlParams.envp_timeHorz +
    URControl_DW.State.omegafUV[0];
  if ((!(psi < -URControlParams.envp_minDeviation)) && (!tmp_3)) {
    psi = -URControlParams.envp_minDeviation;
  }

  URControl_DW.DAQ.uv_min[1] = psi * URControlParams.envp_timeHorz +
    URControl_DW.State.omegafUV[1];

  /* MATLAB Function: '<S3>/Precession' incorporates:
   *  MATLAB Function: '<S5>/basic estimators'
   */
  /* :  stateOut = State; */
  /* :  [uv_prec, DAQ] = URGenPrecession(state, DAQ, par, URControlParams); */
  /* 'URGenPrecession:3' s = sqrt(URpar.l^2 + URpar.b^2); */
  /* 'URGenPrecession:4' r = state.omegaf(3); */
  /* 'URGenPrecession:7' Mu_max = (-state.FMin(2) + state.FMax(4))*s; */
  MuPrec = (-URControl_DW.State.FMin[1] + URControl_DW.State.FMax[3]) *
    w_max_idx_0;

  /* 'URGenPrecession:8' Mu_min = (-state.FMax(2) + state.FMin(4))*s; */
  uDot_max = (-URControl_DW.State.FMax[1] + URControl_DW.State.FMin[3]) *
    w_max_idx_0;

  /* 'URGenPrecession:9' Mv_max = (state.FMax(1) - state.FMin(3))*s; */
  maxval = (URControl_DW.State.FMax[0] - URControl_DW.State.FMin[2]) *
    w_max_idx_0;

  /* 'URGenPrecession:10' Mv_min = (state.FMin(1) - state.FMax(3))*s; */
  psi = (URControl_DW.State.FMin[0] - URControl_DW.State.FMax[2]) * w_max_idx_0;

  /* 'URGenPrecession:12' MMargin = URpar.attitude_MMargin; */
  /* 'URGenPrecession:15' if Mu_max < MMargin */
  if (MuPrec < URControlParams.attitude_MMargin) {
    /* 'URGenPrecession:16' MuPrec = MMargin - Mu_max; */
    MuPrec = URControlParams.attitude_MMargin - MuPrec;
  } else if (uDot_max > -URControlParams.attitude_MMargin) {
    /* 'URGenPrecession:17' elseif Mu_min > -MMargin */
    /* 'URGenPrecession:18' MuPrec = -MMargin - Mu_min; */
    MuPrec = -URControlParams.attitude_MMargin - uDot_max;
  } else {
    /* 'URGenPrecession:19' else */
    /* 'URGenPrecession:20' MuPrec = 0; */
    MuPrec = 0.0;
  }

  /* 'URGenPrecession:24' if Mv_max < MMargin */
  if (maxval < URControlParams.attitude_MMargin) {
    /* 'URGenPrecession:25' MvPrec = MMargin - Mv_max; */
    maxval = URControlParams.attitude_MMargin - maxval;
  } else if (psi > -URControlParams.attitude_MMargin) {
    /* 'URGenPrecession:26' elseif Mv_min > -MMargin */
    /* 'URGenPrecession:27' MvPrec = -MMargin - Mv_min; */
    maxval = -URControlParams.attitude_MMargin - psi;
  } else {
    /* 'URGenPrecession:28' else */
    /* 'URGenPrecession:29' MvPrec = 0; */
    maxval = 0.0;
  }

  /* 'URGenPrecession:32' Iu = sqrt(URpar.Ix^2 + URpar.Iy^2); */
  /* 'URGenPrecession:33' Iv = sqrt(URpar.Ix^2 + URpar.Iy^2); */
  /* 'URGenPrecession:38' if abs(r) < URpar.attitude_yawThreshold */
  uv_des_idx_1 = std::abs(URControl_DW.State.omegaf[2]);
  if (uv_des_idx_1 < URControlParams.attitude_yawThreshold) {
    /* 'URGenPrecession:39' rTemp = sign(r)*URpar.attitude_yawThreshold; */
    if (URControl_DW.State.omegaf[2] < 0.0) {
      uDot_max = -1.0;
    } else if (URControl_DW.State.omegaf[2] > 0.0) {
      uDot_max = 1.0;
    } else if (URControl_DW.State.omegaf[2] == 0.0) {
      uDot_max = 0.0;
    } else {
      uDot_max = (rtNaN);
    }

    uDot_max *= URControlParams.attitude_yawThreshold;

    /* 'URGenPrecession:40' gain = 1 - (URpar.attitude_yawThreshold - abs(r))/URpar.attitude_yawThreshold; */
    /* 'URGenPrecession:41' gain = max(min(gain,1),0); */
    Iv = 1.0 - (URControlParams.attitude_yawThreshold - uv_des_idx_1) /
      URControlParams.attitude_yawThreshold;
    if (!(Iv < 1.0)) {
      Iv = 1.0;
    }

    if (!(Iv > 0.0)) {
      Iv = 0.0;
    }

    /* 'URGenPrecession:42' u_prec = (MvPrec/(rTemp*(URpar.Iz - Iu)))*gain; */
    psi = maxval / ((URControlParams.Iz - std::sqrt(URControlParams.Ix *
      URControlParams.Ix + URControlParams.Iy * URControlParams.Iy)) * uDot_max)
      * Iv;

    /* 'URGenPrecession:43' v_prec = (MuPrec/(rTemp*(Iv - URpar.Iz)))*gain; */
    MuPrec = MuPrec / ((std::sqrt(URControlParams.Ix * URControlParams.Ix +
      URControlParams.Iy * URControlParams.Iy) - URControlParams.Iz) * uDot_max)
      * Iv;
  } else {
    /* 'URGenPrecession:44' else */
    /* 'URGenPrecession:45' u_prec = MvPrec/(r*(URpar.Iz - Iu)); */
    psi = maxval / ((URControlParams.Iz - std::sqrt(URControlParams.Ix *
      URControlParams.Ix + URControlParams.Iy * URControlParams.Iy)) *
                    URControl_DW.State.omegaf[2]);

    /* 'URGenPrecession:46' v_prec = MuPrec/(r*(Iv - URpar.Iz)); */
    MuPrec /= (std::sqrt(URControlParams.Ix * URControlParams.Ix +
                         URControlParams.Iy * URControlParams.Iy) -
               URControlParams.Iz) * URControl_DW.State.omegaf[2];
  }

  /* 'URGenPrecession:49' u_prec = max(min(u_prec,URpar.attitude_maxPrecSpeed),-URpar.attitude_maxPrecSpeed); */
  tmp_2 = rtIsNaN(URControlParams.attitude_maxPrecSpeed);
  if ((!(psi < URControlParams.attitude_maxPrecSpeed)) && (!tmp_2)) {
    psi = URControlParams.attitude_maxPrecSpeed;
  }

  tmp_3 = rtIsNaN(-URControlParams.attitude_maxPrecSpeed);
  if ((!(psi > -URControlParams.attitude_maxPrecSpeed)) && (!tmp_3)) {
    psi = -URControlParams.attitude_maxPrecSpeed;
  }

  /* 'URGenPrecession:50' v_prec = max(min(v_prec,URpar.attitude_maxPrecSpeed),-URpar.attitude_maxPrecSpeed); */
  if ((!(MuPrec < URControlParams.attitude_maxPrecSpeed)) && (!tmp_2)) {
    MuPrec = URControlParams.attitude_maxPrecSpeed;
  }

  if ((!(MuPrec > -URControlParams.attitude_maxPrecSpeed)) && (!tmp_3)) {
    MuPrec = -URControlParams.attitude_maxPrecSpeed;
  }

  /* 'URGenPrecession:52' if URpar.attitude_enablePrec == 0 */
  if (URControlParams.attitude_enablePrec == 0.0) {
    /* 'URGenPrecession:53' u_prec = 0; */
    psi = 0.0;

    /* 'URGenPrecession:53' v_prec = 0; */
    MuPrec = 0.0;
  }

  /* 'URGenPrecession:56' uv_prec = [u_prec; v_prec]; */
  dummy_idx_0 = psi;
  dummy_idx_1 = MuPrec;

  /* 'URGenPrecession:59' daq.uv_prec = uv_prec; */
  URControl_DW.DAQ.uv_prec[0] = psi;
  URControl_DW.DAQ.uv_prec[1] = MuPrec;

  /* MATLAB Function: '<S3>/yawRateControl' incorporates:
   *  MATLAB Function: '<S5>/basic estimators'
   */
  /* :  [w_min, w_max, MzGain, DAQ] = URFailureYawRateControl(state, DAQ, par, URControlParams); */
  /* 'URFailureYawRateControl:4' w_max = ones(4,1)*par.wRotorMax; */
  /* 'URFailureYawRateControl:5' w_min = ones(4,1)*par.wRotorMin; */
  w_max_idx_0 = 1200.0;
  FMax[1] = 0.0;
  Iu = 1200.0;
  FMax[3] = 0.0;

  /* 'URFailureYawRateControl:6' MzGain = URpar.rate_MzGain; */
  psi = URControlParams.rate_MzGain;

  /* 'URFailureYawRateControl:8' if URpar.YRCFail_enable && state.fail_id > 0 */
  if ((URControlParams.YRCFail_enable != 0.0) && (URControl_DW.State.fail_id >
       0.0)) {
    /* 'URFailureYawRateControl:9' r = state.omegaf(3); */
    /* 'URFailureYawRateControl:11' yawDirection = (-1)^(state.fail_id); */
    /* 'URFailureYawRateControl:13' errorGain = (state.n(3) - URpar.YRCFail_nLim2)/(URpar.YRCFail_nLim1 - URpar.YRCFail_nLim2); */
    /* 'URFailureYawRateControl:14' errorGain = max(min(errorGain,1),0); */
    /* 'URFailureYawRateControl:16' error = (r*yawDirection - URpar.YRCFail_yawRateTarget)*errorGain; */
    Iv = (URControl_DW.State.n[2] - URControlParams.YRCFail_nLim2) /
      (URControlParams.YRCFail_nLim1 - URControlParams.YRCFail_nLim2);
    if (!(Iv < 1.0)) {
      Iv = 1.0;
    }

    if (!(Iv > 0.0)) {
      Iv = 0.0;
    }

    MuPrec = (URControl_DW.State.omegaf[2] * rt_powd_snf(-1.0,
               URControl_DW.State.fail_id) -
              URControlParams.YRCFail_yawRateTarget) * Iv;

    /* 'URFailureYawRateControl:18' if URpar.YRCFail_mode == 1 */
    if (URControlParams.YRCFail_mode == 1.0) {
      /* 'URFailureYawRateControl:19' dw = -error*URpar.YRCFail_Kp_dw; */
      /* 'URFailureYawRateControl:21' lim = par.wRotorMax - par.wRotorMin; */
      /* 'URFailureYawRateControl:22' dw = max(min(dw, lim), 0); */
      MuPrec = -MuPrec * URControlParams.YRCFail_Kp_dw;
      if (!(MuPrec < 1200.0)) {
        MuPrec = 1200.0;
      }

      if (!(MuPrec > 0.0)) {
        MuPrec = 0.0;
      }

      /* 'URFailureYawRateControl:25' w_max = w_max - [dw; 0; dw; 0]; */
      /* 'URFailureYawRateControl:26' w_min = w_min + [0; dw; 0; dw]; */
      w_max_idx_0 = 1200.0 - MuPrec;
      FMax[1] = MuPrec;
      Iu = 1200.0 - MuPrec;
      FMax[3] = MuPrec;
    } else {
      if (URControlParams.YRCFail_mode == 2.0) {
        /* 'URFailureYawRateControl:28' elseif URpar.YRCFail_mode == 2 */
        /* 'URFailureYawRateControl:29' dMzGain = -error*URpar.YRCFail_Kp_dMzGain; */
        /* 'URFailureYawRateControl:30' dMzGain = max(dMzGain,0); */
        psi = -MuPrec * URControlParams.YRCFail_Kp_dMzGain;
        if (!(psi > 0.0)) {
          psi = 0.0;
        }

        /* 'URFailureYawRateControl:31' MzGain = MzGain + dMzGain^2; */
        psi = psi * psi + URControlParams.rate_MzGain;
      }
    }
  }

  /* MATLAB Function: '<S2>/position control' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion8'
   *  Inport: '<Root>/pos_sp'
   *  MATLAB Function: '<S5>/basic estimators'
   */
  /* :  [n_des, DAQ] = URpositionControl(inputs, state, DAQ, par, URControlParams); */
  /* 'URpositionControl:3' if isempty(errorInt) */
  /* 'URpositionControl:6' if state.fail_id > 0 */
  if (URControl_DW.State.fail_id > 0.0) {
    /* 'URpositionControl:8' maxAngle = URpar.position_maxAngleFailure; */
    maxval = URControlParams.position_maxAngleFailure;

    /* 'URpositionControl:9' overallGain = URpar.position_failGain; */
    MuPrec = URControlParams.position_failGain;
  } else {
    /* 'URpositionControl:10' else */
    /* 'URpositionControl:11' maxAngle = URpar.position_maxAngle; */
    maxval = URControlParams.position_maxAngle;

    /* 'URpositionControl:12' overallGain = 1; */
    MuPrec = 1.0;
  }

  /* 'URpositionControl:16' errorPos = [inputs.xTarget, inputs.yTarget, inputs.zTarget]  - state.posf; */
  /* 'URpositionControl:17' velTarget = URpar.position_Kp_pos.*errorPos*overallGain; */
  /* 'URpositionControl:18' maxVel = URpar.position_maxVel; */
  /* 'URpositionControl:19' velTarget = max(min(velTarget,maxVel),-maxVel); */
  Iv = (URControl_U.pos_sp[0] - URControl_DW.State.posf[0]) *
    URControlParams.position_Kp_pos[0] * MuPrec;
  tmp_2 = rtIsNaN(URControlParams.position_maxVel);
  if ((Iv < URControlParams.position_maxVel) || tmp_2) {
    dPos[0] = Iv;
  } else {
    dPos[0] = URControlParams.position_maxVel;
  }

  Iv = (URControl_U.pos_sp[1] - URControl_DW.State.posf[1]) *
    URControlParams.position_Kp_pos[1] * MuPrec;
  if ((Iv < URControlParams.position_maxVel) || tmp_2) {
    dPos[1] = Iv;
  } else {
    dPos[1] = URControlParams.position_maxVel;
  }

  Iv = (URControl_U.pos_sp[2] - URControl_DW.State.posf[2]) *
    URControlParams.position_Kp_pos[2] * MuPrec;
  if ((Iv < URControlParams.position_maxVel) || tmp_2) {
    dPos[2] = Iv;
  } else {
    dPos[2] = URControlParams.position_maxVel;
  }

  /* 'URpositionControl:22' errorVel = velTarget - state.velf; */
  /* 'URpositionControl:23' errorInt = errorInt + errorVel/par.freq; */
  tmp_2 = rtIsNaN(-URControlParams.position_maxVel);
  if ((dPos[0] > -URControlParams.position_maxVel) || tmp_2) {
    uv_des_idx_1 = dPos[0];
  } else {
    uv_des_idx_1 = -URControlParams.position_maxVel;
  }

  wRotorSet_data_idx_3 = uv_des_idx_1 - URControl_DW.State.velf[0];
  URControl_DW.errorInt_p[0] += wRotorSet_data_idx_3 / 500.0;
  rtb_att[0] = uv_des_idx_1;
  errorVel_idx_0 = wRotorSet_data_idx_3;
  if ((dPos[1] > -URControlParams.position_maxVel) || tmp_2) {
    uv_des_idx_1 = dPos[1];
  } else {
    uv_des_idx_1 = -URControlParams.position_maxVel;
  }

  wRotorSet_data_idx_3 = uv_des_idx_1 - URControl_DW.State.velf[1];
  URControl_DW.errorInt_p[1] += wRotorSet_data_idx_3 / 500.0;
  rtb_att[1] = uv_des_idx_1;
  errorVel_idx_1 = wRotorSet_data_idx_3;
  if ((dPos[2] > -URControlParams.position_maxVel) || tmp_2) {
    uv_des_idx_1 = dPos[2];
  } else {
    uv_des_idx_1 = -URControlParams.position_maxVel;
  }

  wRotorSet_data_idx_3 = uv_des_idx_1 - URControl_DW.State.velf[2];
  URControl_DW.errorInt_p[2] += wRotorSet_data_idx_3 / 500.0;

  /* 'URpositionControl:24' intLim = URpar.position_intLim; */
  /* 'URpositionControl:25' errorInt = max(min(errorInt,intLim),-intLim); */
  tmp_2 = rtIsNaN(URControlParams.position_intLim);
  if ((URControl_DW.errorInt_p[0] < URControlParams.position_intLim) || tmp_2) {
    uDot_max = URControl_DW.errorInt_p[0];
  } else {
    uDot_max = URControlParams.position_intLim;
  }

  if ((URControl_DW.errorInt_p[1] < URControlParams.position_intLim) || tmp_2) {
    rtb_DataTypeConversion8_idx_1 = URControl_DW.errorInt_p[1];
  } else {
    rtb_DataTypeConversion8_idx_1 = URControlParams.position_intLim;
  }

  if ((URControl_DW.errorInt_p[2] < URControlParams.position_intLim) || tmp_2) {
    Iv = URControl_DW.errorInt_p[2];
  } else {
    Iv = URControlParams.position_intLim;
  }

  /* 'URpositionControl:28' a_ref = (URpar.position_Kp_vel.*errorVel + URpar.position_Ki_vel.*errorInt)*overallGain; */
  tmp_2 = rtIsNaN(-URControlParams.position_intLim);
  if ((uDot_max > -URControlParams.position_intLim) || tmp_2) {
    URControl_DW.errorInt_p[0] = uDot_max;
  } else {
    URControl_DW.errorInt_p[0] = -URControlParams.position_intLim;
  }

  errorVel_idx_0 = (URControlParams.position_Kp_vel[0] * errorVel_idx_0 +
                    URControlParams.position_Ki_vel[0] *
                    URControl_DW.errorInt_p[0]) * MuPrec;
  if ((rtb_DataTypeConversion8_idx_1 > -URControlParams.position_intLim) ||
      tmp_2) {
    URControl_DW.errorInt_p[1] = rtb_DataTypeConversion8_idx_1;
  } else {
    URControl_DW.errorInt_p[1] = -URControlParams.position_intLim;
  }

  errorVel_idx_1 = (URControlParams.position_Kp_vel[1] * errorVel_idx_1 +
                    URControlParams.position_Ki_vel[1] *
                    URControl_DW.errorInt_p[1]) * MuPrec;
  if ((Iv > -URControlParams.position_intLim) || tmp_2) {
    URControl_DW.errorInt_p[2] = Iv;
  } else {
    URControl_DW.errorInt_p[2] = -URControlParams.position_intLim;
  }

  wRotorSet_data_idx_3 = (URControlParams.position_Kp_vel[2] *
    wRotorSet_data_idx_3 + URControlParams.position_Ki_vel[2] *
    URControl_DW.errorInt_p[2]) * MuPrec;

  /* 'URpositionControl:30' a_ref(3) = a_ref(3) - par.g; */
  /* 'URpositionControl:31' a_ref(3) = min(a_ref(3), par.URC.position_maxAref); */
  if (wRotorSet_data_idx_3 - 9.81 < -2.0) {
    rtb_DataTypeConversion8_idx_1 = wRotorSet_data_idx_3 - 9.81;
  } else {
    rtb_DataTypeConversion8_idx_1 = -2.0;
  }

  /* 'URpositionControl:34' maxLateral = abs(par.g*tan(maxAngle)); */
  /* 'URpositionControl:35' latRatio = sqrt(a_ref(1)^2 + a_ref(2)^2)/maxLateral; */
  MuPrec = std::sqrt(errorVel_idx_0 * errorVel_idx_0 + errorVel_idx_1 *
                     errorVel_idx_1) / std::abs(9.81 * std::tan(maxval));

  /* 'URpositionControl:36' a_ref(1) = a_ref(1)/(max(latRatio,1)); */
  if (MuPrec > 1.0) {
    maxval = MuPrec;
  } else {
    maxval = 1.0;
    MuPrec = 1.0;
  }

  errorVel_idx_0 /= maxval;

  /* 'URpositionControl:37' a_ref(2) = a_ref(2)/(max(latRatio,1)); */
  errorVel_idx_1 /= MuPrec;

  /* 'URpositionControl:43' n_des = a_ref/norm(a_ref); */
  MuPrec = 3.3121686421112381E-170;
  uDot_max = std::abs(errorVel_idx_0);
  if (uDot_max > 3.3121686421112381E-170) {
    maxval = 1.0;
    MuPrec = uDot_max;
  } else {
    Iv = uDot_max / 3.3121686421112381E-170;
    maxval = Iv * Iv;
  }

  uDot_max = std::abs(errorVel_idx_1);
  if (uDot_max > MuPrec) {
    Iv = MuPrec / uDot_max;
    maxval = maxval * Iv * Iv + 1.0;
    MuPrec = uDot_max;
  } else {
    Iv = uDot_max / MuPrec;
    maxval += Iv * Iv;
  }

  uDot_max = std::abs(rtb_DataTypeConversion8_idx_1);
  if (uDot_max > MuPrec) {
    Iv = MuPrec / uDot_max;
    maxval = maxval * Iv * Iv + 1.0;
    MuPrec = uDot_max;
  } else {
    Iv = uDot_max / MuPrec;
    maxval += Iv * Iv;
  }

  maxval = MuPrec * std::sqrt(maxval);
  rtb_n_des[0] = errorVel_idx_0 / maxval;
  rtb_n_des[1] = errorVel_idx_1 / maxval;
  rtb_n_des[2] = rtb_DataTypeConversion8_idx_1 / maxval;

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
  URControl_DW.DAQ.a_ref[0] = errorVel_idx_0;
  URControl_DW.DAQ.n_des[0] = rtb_n_des[0];
  URControl_DW.DAQ.velTarget[1] = rtb_att[1];
  URControl_DW.DAQ.a_ref[1] = errorVel_idx_1;
  URControl_DW.DAQ.n_des[1] = rtb_n_des[1];
  URControl_DW.DAQ.velTarget[2] = uv_des_idx_1;
  URControl_DW.DAQ.a_ref[2] = rtb_DataTypeConversion8_idx_1;
  URControl_DW.DAQ.n_des[2] = rtb_n_des[2];

  /* End of MATLAB Function: '<S2>/position control' */

  /* DiscreteStateSpace: '<S3>/Discrete State-Space' */
  {
    rtb_DiscreteStateSpace[0] = (1.0)*URControl_DW.DiscreteStateSpace_DSTATE[0];
    rtb_DiscreteStateSpace[1] = (1.0)*URControl_DW.DiscreteStateSpace_DSTATE[1];
    rtb_DiscreteStateSpace[2] = (1.0)*URControl_DW.DiscreteStateSpace_DSTATE[2];
  }

  /* MATLAB Function: '<S2>/yaw rate control' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion9'
   *  Inport: '<Root>/yaw_sp'
   *  MATLAB Function: '<S3>/attitude controller'
   *  MATLAB Function: '<S5>/basic estimators'
   */
  /* :  [r_cmd, DAQ] = URYawControl(inputs, state, DAQ, par, URControlParams); */
  /* 'URYawControl:3' psiError = inputs.yawTarget - state.att(3); */
  /* 'URYawControl:4' psi_dot_cmd = psiError*URpar.YRC_Kp_psi; */
  /* 'URYawControl:6' r_cmd = psi_dot_cmd*cos(state.att(1))*cos(state.att(2))-sin(state.att(1))*state.omegaf(2); */
  maxval = std::cos(URControl_DW.State.att[1]);
  rtb_DataTypeConversion8_idx_1 = std::sin(URControl_DW.State.att[0]);
  Iv = std::cos(URControl_DW.State.att[0]);
  MuPrec = (URControl_U.yaw_sp - URControl_DW.State.att[2]) *
    URControlParams.YRC_Kp_psi * Iv * maxval - rtb_DataTypeConversion8_idx_1 *
    URControl_DW.State.omegaf[1];

  /* 'URYawControl:8' if URpar.YRC_mode == 2 */
  if (URControlParams.YRC_mode == 2.0) {
    /* 'URYawControl:9' r_cmd = URpar.YRC_rateCmd; */
    MuPrec = URControlParams.YRC_rateCmd;
  }

  /* 'URYawControl:13' if state.fail_id > 0 */
  if (URControl_DW.State.fail_id > 0.0) {
    /* 'URYawControl:14' yawDirection = (-1)^(state.fail_id); */
    /* 'URYawControl:15' r_cmd = yawDirection*URpar.YRC_r_cmd_fail; */
    MuPrec = rt_powd_snf(-1.0, URControl_DW.State.fail_id) *
      URControlParams.YRC_r_cmd_fail;
  }

  /* 'URYawControl:19' if URpar.YRC_enable == 0 */
  if (URControlParams.YRC_enable == 0.0) {
    /* 'URYawControl:20' r_cmd = 0; */
    MuPrec = 0.0;
  }

  /* 'URYawControl:25' daq.r_cmd = r_cmd; */
  URControl_DW.DAQ.r_cmd = MuPrec;

  /* MATLAB Function: '<S3>/attitude controller' incorporates:
   *  MATLAB Function: '<S2>/yaw rate control'
   *  MATLAB Function: '<S3>/yawRateControl'
   *  MATLAB Function: '<S5>/basic estimators'
   */
  /* :  [pqr_des, uvr_des, w_max, w_min, MzGain, DAQ] = URAttitudeController(state, DAQ, uv_prec, w_min, w_max, MzGain, nd_i,ndi_dot,r_cmd,par,URControlParams); */
  /* 'URAttitudeController:4' rotAngle = 45/180*pi; */
  /* 'URAttitudeController:5' Rxu = [cos(rotAngle), -sin(rotAngle); ... */
  /* 'URAttitudeController:6'        sin(rotAngle), cos(rotAngle)]; */
  /* 'URAttitudeController:9' primAxis = URpar.attitude_primary_axis; */
  /* 'URAttitudeController:11' [uv_attCtrl, rotVec] = URAngleControl(nd_i, primAxis, state, par, URpar); */
  /* 'URAngleControl:3' rotAngle = 45/180*pi; */
  /* 'URAngleControl:4' Rxu = [cos(rotAngle), -sin(rotAngle); ... */
  /* 'URAngleControl:5'        sin(rotAngle), cos(rotAngle)]; */
  /* 'URAngleControl:7' phi = state.att(1); */
  /* 'URAngleControl:8' theta = state.att(2); */
  /* 'URAngleControl:9' psi = state.att(3); */
  /* 'URAngleControl:12' R_BI = [cos(theta)*cos(psi) cos(theta)*sin(psi) -sin(theta); */
  /* 'URAngleControl:13'         sin(phi)*sin(theta)*cos(psi)-cos(phi)*sin(psi) sin(phi)*sin(theta)*sin(psi)+cos(phi)*cos(psi) sin(phi)*cos(theta); */
  /* 'URAngleControl:14'         cos(phi)*sin(theta)*cos(psi)+sin(phi)*sin(psi) cos(phi)*sin(theta)*sin(psi)-sin(phi)*cos(psi) cos(phi)*cos(theta)]; */
  /* 'URAngleControl:17' h = R_BI*nd_i; */
  uv_des_idx_1 = std::cos(URControl_DW.State.att[2]);
  tmp_0[0] = maxval * uv_des_idx_1;
  uDot_max = std::sin(URControl_DW.State.att[2]);
  tmp_0[3] = maxval * uDot_max;
  errorVel_idx_0 = std::sin(URControl_DW.State.att[1]);
  tmp_0[6] = -errorVel_idx_0;
  errorVel_idx_1 = rtb_DataTypeConversion8_idx_1 * errorVel_idx_0;
  tmp_0[1] = errorVel_idx_1 * uv_des_idx_1 - Iv * uDot_max;
  tmp_0[4] = errorVel_idx_1 * uDot_max + Iv * uv_des_idx_1;
  tmp_0[7] = rtb_DataTypeConversion8_idx_1 * maxval;
  errorVel_idx_0 *= Iv;
  tmp_0[2] = errorVel_idx_0 * uv_des_idx_1 + rtb_DataTypeConversion8_idx_1 *
    uDot_max;
  tmp_0[5] = errorVel_idx_0 * uDot_max - rtb_DataTypeConversion8_idx_1 *
    uv_des_idx_1;
  tmp_0[8] = Iv * maxval;
  for (r1 = 0; r1 < 3; r1++) {
    dPos[r1] = tmp_0[r1 + 6] * rtb_n_des[2] + (tmp_0[r1 + 3] * rtb_n_des[1] +
      tmp_0[r1] * rtb_n_des[0]);
  }

  /* 'URAngleControl:19' h_uv = [Rxu*h(1:2); h(3)]; */
  rtb_att[0] = 0.70710678118654757 * dPos[0] + -0.70710678118654746 * dPos[1];
  uDot_max = 0.70710678118654746 * dPos[0] + 0.70710678118654757 * dPos[1];

  /* 'URAngleControl:21' n = primAxis; */
  /* 'URAngleControl:24' currRotVec = [state.omegafUV(1); state.omegafUV(2); 0]*URpar.attitude_rotComp; */
  /* 'URAngleControl:27' rotVec3 = cross(h_uv,n); */
  rtb_DataTypeConversion8_idx_1 = uDot_max *
    URControlParams.attitude_primary_axis[2] - dPos[2] *
    URControlParams.attitude_primary_axis[1];
  rotVec3[0] = rtb_DataTypeConversion8_idx_1;
  Iv = dPos[2] * URControlParams.attitude_primary_axis[0] - rtb_att[0] *
    URControlParams.attitude_primary_axis[2];
  rotVec3[1] = Iv;
  errorVel_idx_0 = rtb_att[0] * URControlParams.attitude_primary_axis[1] -
    uDot_max * URControlParams.attitude_primary_axis[0];
  rotVec3[2] = errorVel_idx_0;

  /* 'URAngleControl:28' rotVec3 = rotVec3/max(abs(norm(rotVec3)),0.001); */
  maxval = std::abs(URControl_norm(rotVec3));
  if (!(maxval > 0.001)) {
    maxval = 0.001;
  }

  rotVec3[0] = rtb_DataTypeConversion8_idx_1 / maxval;
  rotVec3[1] = Iv / maxval;
  uv_des_idx_1 = errorVel_idx_0 / maxval;

  /* 'URAngleControl:31' totAngle = atan2(norm(cross(h_uv,n)),dot(h_uv,n)); */
  rtb_omega[0] = rtb_DataTypeConversion8_idx_1;
  rtb_omega[1] = Iv;
  rtb_omega[2] = errorVel_idx_0;
  uDot_max = rt_atan2d_snf(URControl_norm(rtb_omega), (rtb_att[0] *
    URControlParams.attitude_primary_axis[0] + uDot_max *
    URControlParams.attitude_primary_axis[1]) + dPos[2] *
    URControlParams.attitude_primary_axis[2]);

  /* 'URAngleControl:33' speedCompVec = dot(currRotVec, rotVec3*abs(totAngle)/180); */
  maxval = std::abs(uDot_max);
  maxval = (rotVec3[0] * maxval / 180.0 * (URControl_DW.State.omegafUV[0] *
             URControlParams.attitude_rotComp) + rotVec3[1] * maxval / 180.0 *
            (URControl_DW.State.omegafUV[1] * URControlParams.attitude_rotComp))
    + uv_des_idx_1 * maxval / 180.0 * (0.0 * URControlParams.attitude_rotComp);

  /* 'URAngleControl:34' rotVec3 = rotVec3 - speedCompVec*rotVec3; */
  rotVec3[0] -= maxval * rotVec3[0];
  rotVec3[1] -= maxval * rotVec3[1];
  rotVec3[2] = uv_des_idx_1 - maxval * uv_des_idx_1;

  /* 'URAngleControl:35' rotVec3 = rotVec3/max(abs(norm(rotVec3)),0.001); */
  maxval = std::abs(URControl_norm(rotVec3));
  if (!(maxval > 0.001)) {
    maxval = 0.001;
  }

  rotVec3[0] /= maxval;
  uv_des_idx_1 = rotVec3[1] / maxval;

  /* 'URAngleControl:36' rotVec = rotVec3(1:2); */
  /* 'URAngleControl:38' rotAction = totAngle*URpar.attitude_rotKp; */
  maxval = uDot_max * URControlParams.attitude_rotKp;

  /* 'URAngleControl:40' uv_attCtrl = [rotVec(1); rotVec(2)]*rotAction; */
  Iv = rotVec3[0] * maxval;
  maxval *= uv_des_idx_1;

  /* 'URAttitudeController:14' uv_des_raw = (uv_prec + uv_attCtrl); */
  dummy_idx_0 += Iv;
  errorVel_idx_0 = dummy_idx_1 + maxval;

  /* 'URAttitudeController:21' if URpar.envp_envelopeProt == 1 */
  if (URControlParams.envp_envelopeProt == 1.0) {
    /* 'URAttitudeController:22' uv_des = min(max(uv_des_raw, state.uv_min), state.uv_max); */
    if ((dummy_idx_0 > URControl_DW.State.uv_min[0]) || rtIsNaN
        (URControl_DW.State.uv_min[0])) {
      uv_des_idx_1 = dummy_idx_0;
    } else {
      uv_des_idx_1 = URControl_DW.State.uv_min[0];
    }

    if ((uv_des_idx_1 < URControl_DW.State.uv_max[0]) || rtIsNaN
        (URControl_DW.State.uv_max[0])) {
      dummy_idx_1 = uv_des_idx_1;
    } else {
      dummy_idx_1 = URControl_DW.State.uv_max[0];
    }

    if ((errorVel_idx_0 > URControl_DW.State.uv_min[1]) || rtIsNaN
        (URControl_DW.State.uv_min[1])) {
      uv_des_idx_1 = errorVel_idx_0;
    } else {
      uv_des_idx_1 = URControl_DW.State.uv_min[1];
    }

    if ((!(uv_des_idx_1 < URControl_DW.State.uv_max[1])) && (!rtIsNaN
         (URControl_DW.State.uv_max[1]))) {
      uv_des_idx_1 = URControl_DW.State.uv_max[1];
    }
  } else {
    /* 'URAttitudeController:23' else */
    /* 'URAttitudeController:24' uv_des = uv_des_raw; */
    dummy_idx_1 = dummy_idx_0;
    uv_des_idx_1 = errorVel_idx_0;
  }

  /* 'URAttitudeController:28' pq_des = Rxu\uv_des; */
  uDot_max = (uv_des_idx_1 - dummy_idx_1 * 0.99999999999999989) /
    1.4142135623730949;
  rtb_DataTypeConversion8_idx_1 = (dummy_idx_1 - uDot_max * -0.70710678118654746)
    / 0.70710678118654757;

  /* 'URAttitudeController:30' pqr_des = [pq_des; r_cmd]; */
  dPos[2] = MuPrec;

  /* 'URAttitudeController:31' uvr_des = [uv_des; r_cmd]; */
  rtb_att[0] = dummy_idx_1;
  rtb_att[1] = uv_des_idx_1;
  rtb_att[2] = MuPrec;

  /* 'URAttitudeController:34' daq.pqr_des = pqr_des; */
  /* 'URAttitudeController:35' daq.uvr_des = uvr_des; */
  URControl_DW.DAQ.pqr_des[0] = rtb_DataTypeConversion8_idx_1;
  URControl_DW.DAQ.uvr_des[0] = dummy_idx_1;
  URControl_DW.DAQ.pqr_des[1] = uDot_max;
  URControl_DW.DAQ.uvr_des[1] = uv_des_idx_1;
  URControl_DW.DAQ.pqr_des[2] = MuPrec;
  URControl_DW.DAQ.uvr_des[2] = MuPrec;

  /* 'URAttitudeController:36' daq.uv_des_raw = uv_des_raw; */
  /* 'URAttitudeController:37' daq.uv_des = uv_des; */
  /* 'URAttitudeController:38' daq.uv_attCtrl = uv_attCtrl; */
  URControl_DW.DAQ.uv_des_raw[0] = dummy_idx_0;
  URControl_DW.DAQ.uv_des[0] = dummy_idx_1;
  URControl_DW.DAQ.uv_attCtrl[0] = Iv;
  URControl_DW.DAQ.uv_des_raw[1] = errorVel_idx_0;
  URControl_DW.DAQ.uv_des[1] = uv_des_idx_1;
  URControl_DW.DAQ.uv_attCtrl[1] = maxval;

  /* 'URAttitudeController:39' daq.w_max = w_max; */
  /* 'URAttitudeController:40' daq.w_min = w_min; */
  URControl_DW.DAQ.w_max[0] = w_max_idx_0;
  URControl_DW.DAQ.w_min[0] = 0.0;
  URControl_DW.DAQ.w_max[1] = 1200.0;
  URControl_DW.DAQ.w_min[1] = FMax[1];
  URControl_DW.DAQ.w_max[2] = Iu;
  URControl_DW.DAQ.w_min[2] = 0.0;
  URControl_DW.DAQ.w_max[3] = 1200.0;
  URControl_DW.DAQ.w_min[3] = FMax[3];

  /* 'URAttitudeController:41' daq.MzGain = MzGain; */
  URControl_DW.DAQ.MzGain = psi;

  /* MATLAB Function: '<S2>/altitude control' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion8'
   *  Inport: '<Root>/pos_sp'
   *  MATLAB Function: '<S5>/basic estimators'
   */
  /* :  [Ftot_ref, DAQ] = URAltitudeControl(inputs, state, DAQ, par, URControlParams); */
  /* 'URAltitudeControl:3' if isempty(errorInt) */
  /* 'URAltitudeControl:6' errorPos = inputs.zTarget  - state.pos(3); */
  /* 'URAltitudeControl:7' velTarget = URpar.altitude_Kp_pos.*errorPos; */
  /* 'URAltitudeControl:8' maxVel = URpar.altitude_maxVel; */
  /* 'URAltitudeControl:9' velTarget = max(min(velTarget,maxVel),-maxVel); */
  /* 'URAltitudeControl:13' errorVel = velTarget - state.vel(3); */
  Iv = (URControl_U.pos_sp[2] - URControl_DW.State.pos[2]) *
    URControlParams.altitude_Kp_pos;
  if ((!(Iv < URControlParams.altitude_maxVel)) && (!rtIsNaN
       (URControlParams.altitude_maxVel))) {
    Iv = URControlParams.altitude_maxVel;
  }

  if ((!(Iv > -URControlParams.altitude_maxVel)) && (!rtIsNaN
       (-URControlParams.altitude_maxVel))) {
    Iv = -URControlParams.altitude_maxVel;
  }

  MuPrec = Iv - URControl_DW.State.vel[2];

  /* 'URAltitudeControl:14' errorInt = errorInt + errorVel/par.freq; */
  URControl_DW.errorInt_b += MuPrec / 500.0;

  /* 'URAltitudeControl:15' intLim = URpar.altitude_intLim; */
  /* 'URAltitudeControl:16' errorInt = max(min(errorInt,intLim),-intLim); */
  if ((URControl_DW.errorInt_b < URControlParams.altitude_intLim) || rtIsNaN
      (URControlParams.altitude_intLim)) {
    Iv = URControl_DW.errorInt_b;
  } else {
    Iv = URControlParams.altitude_intLim;
  }

  if ((Iv > -URControlParams.altitude_intLim) || rtIsNaN
      (-URControlParams.altitude_intLim)) {
    URControl_DW.errorInt_b = Iv;
  } else {
    URControl_DW.errorInt_b = -URControlParams.altitude_intLim;
  }

  /* 'URAltitudeControl:19' az_ref = URpar.altitude_Kp_vel.*errorVel + URpar.altitude_Ki_vel.*errorInt; */
  /* 'URAltitudeControl:20' peakAngle = URpar.altitude_peakAngle; */
  /* 'URAltitudeControl:24' multiFactor = 1/(cos(max(min(state.att(1),peakAngle),-peakAngle))*cos(max(min(state.att(2),peakAngle),-peakAngle))); */
  /* 'URAltitudeControl:25' Ftot_ref = -(az_ref - par.g)*par.mass*multiFactor; */
  /* 'URAltitudeControl:26' Ftot_ref = max(Ftot_ref,0); */
  tmp_2 = rtIsNaN(URControlParams.altitude_peakAngle);
  if ((URControl_DW.State.att[1] < URControlParams.altitude_peakAngle) || tmp_2)
  {
    Iv = URControl_DW.State.att[1];
  } else {
    Iv = URControlParams.altitude_peakAngle;
  }

  if ((URControl_DW.State.att[0] < URControlParams.altitude_peakAngle) || tmp_2)
  {
    maxval = URControl_DW.State.att[0];
  } else {
    maxval = URControlParams.altitude_peakAngle;
  }

  tmp_2 = rtIsNaN(-URControlParams.altitude_peakAngle);
  if ((!(maxval > -URControlParams.altitude_peakAngle)) && (!tmp_2)) {
    maxval = -URControlParams.altitude_peakAngle;
  }

  if ((!(Iv > -URControlParams.altitude_peakAngle)) && (!tmp_2)) {
    Iv = -URControlParams.altitude_peakAngle;
  }

  MuPrec = -((URControlParams.altitude_Kp_vel * MuPrec +
              URControlParams.altitude_Ki_vel * URControl_DW.errorInt_b) - 9.81)
    * 0.374 * (1.0 / (std::cos(maxval) * std::cos(Iv)));
  if (!(MuPrec > 0.0)) {
    MuPrec = 0.0;
  }

  /* 'URAltitudeControl:27' maxAngle = max(abs(state.att(1)),abs(state.att(2))); */
  Iv = std::abs(URControl_DW.State.att[0]);
  maxval = std::abs(URControl_DW.State.att[1]);
  if ((Iv > maxval) || rtIsNaN(maxval)) {
    maxval = Iv;
  }

  /* 'URAltitudeControl:28' if maxAngle > URpar.altitude_peakAngle */
  if (maxval > URControlParams.altitude_peakAngle) {
    /* 'URAltitudeControl:30' redFactor = 1 - (maxAngle - URpar.altitude_peakAngle)/(URpar.altitude_LOCAngle - URpar.altitude_peakAngle); */
    /* 'URAltitudeControl:31' redFactor = max(min(redFactor,1),0); */
    /* 'URAltitudeControl:32' Ftot_ref = Ftot_ref*redFactor; */
    Iv = 1.0 - (maxval - URControlParams.altitude_peakAngle) /
      (URControlParams.altitude_LOCAngle - URControlParams.altitude_peakAngle);
    if (!(Iv < 1.0)) {
      Iv = 1.0;
    }

    if (!(Iv > 0.0)) {
      Iv = 0.0;
    }

    MuPrec *= Iv;
  }

  /* 'URAltitudeControl:38' maxFtot = sum(state.FMax)*URpar.altitude_maxFPerc; */
  /* 'URAltitudeControl:39' Ftot_ref = min(Ftot_ref,maxFtot); */
  maxval = (((URControl_DW.State.FMax[0] + URControl_DW.State.FMax[1]) +
             URControl_DW.State.FMax[2]) + URControl_DW.State.FMax[3]) *
    URControlParams.altitude_maxFPerc;
  if ((!(MuPrec < maxval)) && (!rtIsNaN(maxval))) {
    MuPrec = maxval;
  }

  /* 'URAltitudeControl:41' if URpar.altitude_enable == 0 */
  if (URControlParams.altitude_enable == 0.0) {
    /* 'URAltitudeControl:42' Ftot_ref = par.g*par.mass; */
    MuPrec = 3.66894;
  }

  /* 'URAltitudeControl:46' daq.Ftot_ref = Ftot_ref; */
  URControl_DW.DAQ.Ftot_ref = MuPrec;

  /* MATLAB Function: '<S6>/control allocator' incorporates:
   *  Inport: '<Root>/fail_flag'
   *  MATLAB Function: '<S2>/altitude control'
   *  MATLAB Function: '<S3>/attitude controller'
   *  MATLAB Function: '<S3>/yawRateControl'
   *  MATLAB Function: '<S5>/basic estimators'
   */
  /* :  [wRotorSet, DAQ] = URControl_alloc(state, DAQ, pqr_des, uvr_des, w_max, w_min, MzGain, Ftot_ref, fail_id_quick, par, URControlParams); */
  /* 'URControl_alloc:3' if isempty(y_state_prev) */
  /* 'URControl_alloc:4' if isempty(Fset_prev) */
  /* 'URControl_alloc:5' if isempty(M_uvr_set) */
  /* 'URControl_alloc:6' if isempty(omegaDot) */
  if (!URControl_DW.omegaDot_not_empty) {
    /* 'URControl_alloc:6' omegaDot = SimpleDerivative(URpar.rate_INDI_omegaDotFilterT, [0,0,0], 300, -300); */
    /* 'SimpleDerivative:12' obj.filterHandle = LPFilter(filterT, initValue, maxLim, minLim); */
    /* 'LPFilter:14' obj.filterT = filterT; */
    URControl_DW.omegaDot.filterHandle.filterT =
      URControlParams.rate_INDI_omegaDotFilterT;

    /* 'LPFilter:15' obj.value = initValue; */
    /* 'LPFilter:16' obj.maxLim = maxLim; */
    URControl_DW.omegaDot.filterHandle.maxLim = 300.0;

    /* 'LPFilter:17' obj.minLim = minLim; */
    URControl_DW.omegaDot.filterHandle.minLim = -300.0;

    /* 'SimpleDerivative:13' obj.prevValue = initValue; */
    URControl_DW.omegaDot.filterHandle.value[0] = 0.0;
    URControl_DW.omegaDot.prevValue[0] = 0.0;
    URControl_DW.omegaDot.filterHandle.value[1] = 0.0;
    URControl_DW.omegaDot.prevValue[1] = 0.0;
    URControl_DW.omegaDot.filterHandle.value[2] = 0.0;
    URControl_DW.omegaDot.prevValue[2] = 0.0;
    URControl_DW.omegaDot_not_empty = true;
  }

  /* 'URControl_alloc:7' if isempty(accZFilt) */
  if (!URControl_DW.accZFilt_not_empty) {
    /* 'URControl_alloc:7' accZFilt = LPFilter(URpar.rate_INDI_accZFilterT, 0, 30, -30); */
    /* 'LPFilter:14' obj.filterT = filterT; */
    URControl_DW.accZFilt.filterT = URControlParams.rate_INDI_accZFilterT;

    /* 'LPFilter:15' obj.value = initValue; */
    URControl_DW.accZFilt.value = 0.0;

    /* 'LPFilter:16' obj.maxLim = maxLim; */
    URControl_DW.accZFilt.maxLim = 30.0;

    /* 'LPFilter:17' obj.minLim = minLim; */
    URControl_DW.accZFilt.minLim = -30.0;
    URControl_DW.accZFilt_not_empty = true;
  }

  /* 'URControl_alloc:9' wRotorSet = [0,0,0,0]; */
  Iv = 0.0;
  errorVel_idx_0 = 0.0;
  errorVel_idx_1 = 0.0;
  wRotorSet_data_idx_3 = 0.0;

  /* 'URControl_alloc:11' if URpar.rate_mode == 1 */
  if (URControlParams.rate_mode == 1.0) {
    /* 'URControl_alloc:13' error = pqr_des - state.omegaf'; */
    /* 'URControl_alloc:14' pqr_des_dot = error.*URpar.rate_INDI_rateDotKp'; */
    dummy_idx_1 = (rtb_DataTypeConversion8_idx_1 - URControl_DW.State.omegaf[0])
      * URControlParams.rate_INDI_rateDotKp[0];
    uv_des_idx_1 = (uDot_max - URControl_DW.State.omegaf[1]) *
      URControlParams.rate_INDI_rateDotKp[1];
    dummy_idx_0 = (dPos[2] - URControl_DW.State.omegaf[2]) *
      URControlParams.rate_INDI_rateDotKp[2];

    /* 'URControl_alloc:15' acc_z_des = -Ftot_ref/URpar.mass; */
    /* 'URControl_alloc:16' v = [pqr_des_dot; acc_z_des]; */
    /* 'URControl_alloc:18' omegaDot.update(state.omega, 1/par.freq); */
    URContr_SimpleDerivative_update(&URControl_DW.omegaDot,
      URControl_DW.State.omega, 0.002);

    /* 'URControl_alloc:19' accZFilt.update(state.acc(3)); */
    /* 'LPFilter:21' obj.value = obj.value*obj.filterT + newValue*(1 - obj.filterT); */
    URControl_DW.accZFilt.value = (1.0 - URControl_DW.accZFilt.filterT) *
      URControl_DW.State.acc[2] + URControl_DW.accZFilt.value *
      URControl_DW.accZFilt.filterT;

    /* 'LPFilter:22' obj.value = max(min(obj.value,obj.maxLim),obj.minLim); */
    if ((URControl_DW.accZFilt.value < URControl_DW.accZFilt.maxLim) || rtIsNaN
        (URControl_DW.accZFilt.maxLim)) {
      Iv = URControl_DW.accZFilt.value;
    } else {
      Iv = URControl_DW.accZFilt.maxLim;
    }

    if ((Iv > URControl_DW.accZFilt.minLim) || rtIsNaN
        (URControl_DW.accZFilt.minLim)) {
      URControl_DW.accZFilt.value = Iv;
    } else {
      URControl_DW.accZFilt.value = URControl_DW.accZFilt.minLim;
    }

    /* 'URControl_alloc:21' [w_cmd]  = URINDI_allocator(state.fail_id, omegaDot.derValue', accZFilt.value, v, URpar.rate_INDI_G, [], state.wRotor', par); */
    FMin[0] = dummy_idx_1;
    FMin[1] = uv_des_idx_1;
    FMin[2] = dummy_idx_0;
    FMin[3] = -MuPrec / URControlParams.mass;
    memcpy(&tmp[0], &URControlParams.rate_INDI_G[0], sizeof(real_T) << 5U);
    URControl_URINDI_allocator(URControl_DW.State.fail_id,
      URControl_DW.omegaDot.derValue, URControl_DW.accZFilt.value, FMin, tmp,
      URControl_DW.State.wRotor, &URControl_ConstP.pooled1, Fset);

    /* 'URControl_alloc:23' wRotorSet = w_cmd; */
    Iv = Fset[0];
    errorVel_idx_0 = Fset[1];
    errorVel_idx_1 = Fset[2];
    wRotorSet_data_idx_3 = Fset[3];

    /* 'URControl_alloc:25' daq.pqr_des_dot = pqr_des_dot; */
    /* 'URControl_alloc:26' daq.omegaDot = omegaDot.derValue; */
    URControl_DW.DAQ.pqr_des_dot[0] = dummy_idx_1;
    URControl_DW.DAQ.omegaDot[0] = URControl_DW.omegaDot.derValue[0];
    URControl_DW.DAQ.pqr_des_dot[1] = uv_des_idx_1;
    URControl_DW.DAQ.omegaDot[1] = URControl_DW.omegaDot.derValue[1];
    URControl_DW.DAQ.pqr_des_dot[2] = dummy_idx_0;
    URControl_DW.DAQ.omegaDot[2] = URControl_DW.omegaDot.derValue[2];
  } else {
    if (URControlParams.rate_mode == 2.0) {
      /* 'URControl_alloc:28' elseif URpar.rate_mode == 2 */
      /* 'URControl_alloc:30' M_uvr = zeros(3,1); */
      dummy_idx_0 = 0.0;
      rtb_DataTypeConversion8_idx_1 = 0.0;
      maxval = 0.0;

      /* 'URControl_alloc:31' if URpar.rate_momentMode == 1 */
      if (URControlParams.rate_momentMode == 1.0) {
        /* 'URControl_alloc:32' [M_uvr, daq] = PIDMomentGen(state, daq, uvr_des, URpar, par); */
        /* 'PIDMomentGen:3' if isempty(errorInt) */
        /* 'PIDMomentGen:4' if isempty(error_prev) */
        /* 'PIDMomentGen:6' if isempty(errorD) */
        if (!URControl_DW.errorD_not_empty) {
          /* 'PIDMomentGen:6' errorD = SimpleDerivative(URpar.rate_MPID_derFilterT,[0,0,0], 200, -200); */
          /* 'SimpleDerivative:12' obj.filterHandle = LPFilter(filterT, initValue, maxLim, minLim); */
          /* 'LPFilter:14' obj.filterT = filterT; */
          URControl_DW.errorD.filterHandle.filterT =
            URControlParams.rate_MPID_derFilterT;

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
          URControl_DW.uvrDer.filterHandle.filterT =
            URControlParams.rate_MPID_uvrdesderFilterT;

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
        /* 'PIDMomentGen:13' errorInt = max(min(errorInt,URpar.rate_MPID_maxInt),-URpar.rate_MPID_maxInt); */
        dummy_idx_0 = dummy_idx_1 - URControl_DW.State.omegafUV[0];
        URControl_DW.errorInt[0] += dummy_idx_0 / 500.0;
        tmp_2 = rtIsNaN(URControlParams.rate_MPID_maxInt);
        if ((URControl_DW.errorInt[0] < URControlParams.rate_MPID_maxInt) ||
            tmp_2) {
          uDot_max = URControl_DW.errorInt[0];
        } else {
          uDot_max = URControlParams.rate_MPID_maxInt;
        }

        errorVel_idx_0 = uv_des_idx_1 - URControl_DW.State.omegafUV[1];
        URControl_DW.errorInt[1] += errorVel_idx_0 / 500.0;
        if ((URControl_DW.errorInt[1] < URControlParams.rate_MPID_maxInt) ||
            tmp_2) {
          rtb_DataTypeConversion8_idx_1 = URControl_DW.errorInt[1];
        } else {
          rtb_DataTypeConversion8_idx_1 = URControlParams.rate_MPID_maxInt;
        }

        maxval = rtb_att[2] - URControl_DW.State.omegafUV[2];
        URControl_DW.errorInt[2] += maxval / 500.0;
        if ((URControl_DW.errorInt[2] < URControlParams.rate_MPID_maxInt) ||
            tmp_2) {
          Iv = URControl_DW.errorInt[2];
        } else {
          Iv = URControlParams.rate_MPID_maxInt;
        }

        /* 'PIDMomentGen:15' errorD.filterHandle.filterT = URpar.rate_MPID_derFilterT; */
        URControl_DW.errorD.filterHandle.filterT =
          URControlParams.rate_MPID_derFilterT;

        /* 'PIDMomentGen:16' errorD.update(error,1/par.freq) */
        tmp_2 = rtIsNaN(-URControlParams.rate_MPID_maxInt);
        if ((uDot_max > -URControlParams.rate_MPID_maxInt) || tmp_2) {
          URControl_DW.errorInt[0] = uDot_max;
        } else {
          URControl_DW.errorInt[0] = -URControlParams.rate_MPID_maxInt;
        }

        rtb_omega[0] = dummy_idx_1 - URControl_DW.State.omegaUV[0];
        if ((rtb_DataTypeConversion8_idx_1 > -URControlParams.rate_MPID_maxInt) ||
            tmp_2) {
          URControl_DW.errorInt[1] = rtb_DataTypeConversion8_idx_1;
        } else {
          URControl_DW.errorInt[1] = -URControlParams.rate_MPID_maxInt;
        }

        rtb_omega[1] = uv_des_idx_1 - URControl_DW.State.omegaUV[1];
        if ((Iv > -URControlParams.rate_MPID_maxInt) || tmp_2) {
          URControl_DW.errorInt[2] = Iv;
        } else {
          URControl_DW.errorInt[2] = -URControlParams.rate_MPID_maxInt;
        }

        rtb_omega[2] = rtb_att[2] - URControl_DW.State.omegaUV[2];
        URContr_SimpleDerivative_update(&URControl_DW.errorD, rtb_omega, 0.002);

        /* 'PIDMomentGen:18' uvrDer.filterHandle.filterT = URpar.rate_MPID_uvrdesderFilterT; */
        URControl_DW.uvrDer.filterHandle.filterT =
          URControlParams.rate_MPID_uvrdesderFilterT;

        /* 'PIDMomentGen:19' uvrDer.update(uvr_des', 1/par.freq); */
        URContr_SimpleDerivative_update(&URControl_DW.uvrDer, rtb_att, 0.002);

        /* 'PIDMomentGen:20' uvr_des_dot = uvrDer.derValue; */
        /* 'PIDMomentGen:22' uvrDot_des = errorf.*URpar.rate_MPID_rateDotKp + errorInt.*URpar.rate_MPID_rateDotKi + errorD.derValue.*URpar.rate_MPID_rateDotKd + uvr_des_dot; */
        /* 'PIDMomentGen:25' M_uvr = uvrDot_des'.*[URpar.Iu; URpar.Iv; URpar.Iz]; */
        /* 'PIDMomentGen:27' daq.uvrDot_des = uvrDot_des; */
        uv_des_idx_1 = ((dummy_idx_0 * URControlParams.rate_MPID_rateDotKp[0] +
                         URControl_DW.errorInt[0] *
                         URControlParams.rate_MPID_rateDotKi[0]) +
                        URControl_DW.errorD.derValue[0] *
                        URControlParams.rate_MPID_rateDotKd[0]) +
          URControl_DW.uvrDer.derValue[0];
        URControl_DW.DAQ.uvrDot_des[0] = uv_des_idx_1;
        dummy_idx_0 = uv_des_idx_1 * URControlParams.Iu;
        uv_des_idx_1 = ((errorVel_idx_0 * URControlParams.rate_MPID_rateDotKp[1]
                         + URControl_DW.errorInt[1] *
                         URControlParams.rate_MPID_rateDotKi[1]) +
                        URControl_DW.errorD.derValue[1] *
                        URControlParams.rate_MPID_rateDotKd[1]) +
          URControl_DW.uvrDer.derValue[1];
        URControl_DW.DAQ.uvrDot_des[1] = uv_des_idx_1;
        rtb_DataTypeConversion8_idx_1 = uv_des_idx_1 * URControlParams.Iv;
        uv_des_idx_1 = ((maxval * URControlParams.rate_MPID_rateDotKp[2] +
                         URControl_DW.errorInt[2] *
                         URControlParams.rate_MPID_rateDotKi[2]) +
                        URControl_DW.errorD.derValue[2] *
                        URControlParams.rate_MPID_rateDotKd[2]) +
          URControl_DW.uvrDer.derValue[2];
        URControl_DW.DAQ.uvrDot_des[2] = uv_des_idx_1;
        maxval = uv_des_idx_1 * URControlParams.Iz;
      } else {
        if (URControlParams.rate_momentMode == 2.0) {
          /* 'URControl_alloc:33' elseif URpar.rate_momentMode == 2 */
          /* 'URControl_alloc:34' [M_uvr, daq] = INDIMomentGen(state, daq, uvr_des, M_uvr_set, URpar, par); */
          /* 'INDIMomentGen:3' if isempty(omegaDot) */
          if (!URControl_DW.omegaDot_not_empty_l) {
            /* 'INDIMomentGen:3' omegaDot = SimpleDerivative(URpar.rate_MINDI_derFilterT, [0,0,0], 300, -300); */
            /* 'SimpleDerivative:12' obj.filterHandle = LPFilter(filterT, initValue, maxLim, minLim); */
            /* 'LPFilter:14' obj.filterT = filterT; */
            URControl_DW.omegaDot_p.filterHandle.filterT =
              URControlParams.rate_MINDI_derFilterT;

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

          /* 'INDIMomentGen:5' Fset = state.wRotor.^2*URpar.k0; */
          Fset[0] = URControl_DW.State.wRotor[0] * URControl_DW.State.wRotor[0] *
            URControlParams.k0;
          Fset[1] = URControl_DW.State.wRotor[1] * URControl_DW.State.wRotor[1] *
            URControlParams.k0;
          Fset[2] = URControl_DW.State.wRotor[2] * URControl_DW.State.wRotor[2] *
            URControlParams.k0;
          uDot_max = URControl_DW.State.wRotor[3] * URControl_DW.State.wRotor[3]
            * URControlParams.k0;

          /* 'INDIMomentGen:7' M_uvr_prev = zeros(3,1); */
          /* 'INDIMomentGen:8' M_uvr_prev(1) = (Fset(4) - Fset(2))*URpar.s; */
          /* 'INDIMomentGen:9' M_uvr_prev(2) = (Fset(1) - Fset(3))*URpar.s; */
          /* 'INDIMomentGen:10' M_uvr_prev(3) = (Fset(1) - Fset(2) + Fset(3) - Fset(4))*URpar.t0/URpar.k0; */
          /* 'INDIMomentGen:13' error1 = uvr_des' - state.omegafUV; */
          /* 'INDIMomentGen:15' uvrDot_des = error1.*URpar.rate_MINDI_rateDotKp; */
          rtb_att[0] = (dummy_idx_1 - URControl_DW.State.omegafUV[0]) *
            URControlParams.rate_MINDI_rateDotKp[0];
          rtb_att[1] = (uv_des_idx_1 - URControl_DW.State.omegafUV[1]) *
            URControlParams.rate_MINDI_rateDotKp[1];
          uv_des_idx_1 = (rtb_att[2] - URControl_DW.State.omegafUV[2]) *
            URControlParams.rate_MINDI_rateDotKp[2];

          /* 'INDIMomentGen:18' omegaDot.updateFilterT(URpar.rate_MINDI_derFilterT); */
          /* 'SimpleDerivative:23' obj.filterHandle.updateFilterT(filterT); */
          /* 'LPFilter:26' obj.filterT = filterT; */
          URControl_DW.omegaDot_p.filterHandle.filterT =
            URControlParams.rate_MINDI_derFilterT;

          /* 'INDIMomentGen:19' omegaDot.update(state.omegaUV, 1/par.freq); */
          URContr_SimpleDerivative_update(&URControl_DW.omegaDot_p,
            URControl_DW.State.omegaUV, 0.002);

          /* 'INDIMomentGen:21' error2 = uvrDot_des - omegaDot.derValue; */
          /* 'INDIMomentGen:23' dM = error2.*URpar.rate_MINDI_MKp*1e-4; */
          /* 'INDIMomentGen:25' M_uvr = M_uvr_prev + dM'; */
          /* 'INDIMomentGen:27' daq.uvrDot_des = uvrDot_des; */
          /* 'INDIMomentGen:28' daq.omegaDot = omegaDot.derValue; */
          URControl_DW.DAQ.uvrDot_des[0] = rtb_att[0];
          URControl_DW.DAQ.omegaDot[0] = URControl_DW.omegaDot_p.derValue[0];
          dummy_idx_0 = (rtb_att[0] - URControl_DW.omegaDot_p.derValue[0]) *
            URControlParams.rate_MINDI_MKp[0] * 0.0001 + (uDot_max - Fset[1]) *
            URControlParams.s;
          URControl_DW.DAQ.uvrDot_des[1] = rtb_att[1];
          URControl_DW.DAQ.omegaDot[1] = URControl_DW.omegaDot_p.derValue[1];
          rtb_DataTypeConversion8_idx_1 = (rtb_att[1] -
            URControl_DW.omegaDot_p.derValue[1]) *
            URControlParams.rate_MINDI_MKp[1] * 0.0001 + (Fset[0] - Fset[2]) *
            URControlParams.s;
          URControl_DW.DAQ.uvrDot_des[2] = uv_des_idx_1;
          URControl_DW.DAQ.omegaDot[2] = URControl_DW.omegaDot_p.derValue[2];
          maxval = (((Fset[0] - Fset[1]) + Fset[2]) - uDot_max) *
            URControlParams.t0 / URControlParams.k0 + (uv_des_idx_1 -
            URControl_DW.omegaDot_p.derValue[2]) *
            URControlParams.rate_MINDI_MKp[2] * 0.0001;
        }
      }

      /* 'URControl_alloc:37' M_uvr = max(min(M_uvr, URpar.rate_maxMoments'), -URpar.rate_maxMoments'); */
      if ((!(dummy_idx_0 < URControlParams.rate_maxMoments[0])) && (!rtIsNaN
           (URControlParams.rate_maxMoments[0]))) {
        dummy_idx_0 = URControlParams.rate_maxMoments[0];
      }

      if ((dummy_idx_0 > -URControlParams.rate_maxMoments[0]) || rtIsNaN
          (-URControlParams.rate_maxMoments[0])) {
        dummy_idx_1 = dummy_idx_0;
      } else {
        dummy_idx_1 = -URControlParams.rate_maxMoments[0];
      }

      if ((rtb_DataTypeConversion8_idx_1 < URControlParams.rate_maxMoments[1]) ||
          rtIsNaN(URControlParams.rate_maxMoments[1])) {
        dummy_idx_0 = rtb_DataTypeConversion8_idx_1;
      } else {
        dummy_idx_0 = URControlParams.rate_maxMoments[1];
      }

      if ((dummy_idx_0 > -URControlParams.rate_maxMoments[1]) || rtIsNaN
          (-URControlParams.rate_maxMoments[1])) {
        uv_des_idx_1 = dummy_idx_0;
      } else {
        uv_des_idx_1 = -URControlParams.rate_maxMoments[1];
      }

      if ((maxval < URControlParams.rate_maxMoments[2]) || rtIsNaN
          (URControlParams.rate_maxMoments[2])) {
        dummy_idx_0 = maxval;
      } else {
        dummy_idx_0 = URControlParams.rate_maxMoments[2];
      }

      if ((!(dummy_idx_0 > -URControlParams.rate_maxMoments[2])) && (!rtIsNaN
           (-URControlParams.rate_maxMoments[2]))) {
        dummy_idx_0 = -URControlParams.rate_maxMoments[2];
      }

      /* 'URControl_alloc:40' refStruct.MuRef = M_uvr(1); */
      /* 'URControl_alloc:40' refStruct.MvRef = M_uvr(2); */
      /* 'URControl_alloc:40' refStruct.MzRef = M_uvr(3); */
      /* 'URControl_alloc:40' refStruct.FtotRef = Ftot_ref; */
      /* 'URControl_alloc:41' gains = struct(); */
      /* 'URControl_alloc:41' gains.MuGain = URpar.rate_MuGain; */
      /* 'URControl_alloc:41' gains.MvGain = URpar.rate_MvGain; */
      /* 'URControl_alloc:42' gains.FtotGain = URpar.rate_FtotGain; */
      /* 'URControl_alloc:42' gains.FGain = URpar.rate_FGain; */
      /* 'URControl_alloc:42' gains.MzGain = MzGain; */
      /* 'URControl_alloc:45' y_state_initial = y_state_prev; */
      /* 'URControl_alloc:47' [x,y_state,iter,optimal] = controlAllocQPQuick(refStruct, state.FMax, state.FMin, gains, y_state_initial, par, URpar); */
      URControl_controlAllocQPQuick(dummy_idx_1, uv_des_idx_1, dummy_idx_0,
        MuPrec, URControl_DW.State.FMax, URControl_DW.State.FMin,
        URControlParams.rate_MuGain, URControlParams.rate_MvGain,
        URControlParams.rate_FtotGain, URControlParams.rate_FGain, psi,
        URControl_DW.y_state_prev, &URControl_ConstP.pooled1,
        URControlParams.rate_maxIter, FMin, &URControl_DW.DAQ.iter, &maxval);

      /* 'URControl_alloc:48' y_state_prev = y_state; */
      /* 'URControl_alloc:49' if optimal */
      if (maxval != 0.0) {
        /* 'URControl_alloc:50' Fset = x; */
        /* 'URControl_alloc:51' Fset_prev = Fset; */
        Fset[0] = FMin[0];
        URControl_DW.Fset_prev[0] = FMin[0];
        Fset[1] = FMin[1];
        URControl_DW.Fset_prev[1] = FMin[1];
        Fset[2] = FMin[2];
        URControl_DW.Fset_prev[2] = FMin[2];
        Fset[3] = FMin[3];
        URControl_DW.Fset_prev[3] = FMin[3];
      } else {
        /* 'URControl_alloc:52' else */
        /* 'URControl_alloc:53' Fset = Fset_prev*0.99; */
        Fset[0] = URControl_DW.Fset_prev[0] * 0.99;
        Fset[1] = URControl_DW.Fset_prev[1] * 0.99;
        Fset[2] = URControl_DW.Fset_prev[2] * 0.99;
        Fset[3] = URControl_DW.Fset_prev[3] * 0.99;
      }

      /* 'URControl_alloc:56' wRotorSet = sqrt(max(Fset,0)/URpar.k0); */
      if (Fset[0] > 0.0) {
        uDot_max = Fset[0];
      } else {
        uDot_max = 0.0;
      }

      Iv = std::sqrt(uDot_max / URControlParams.k0);
      if (Fset[1] > 0.0) {
        uDot_max = Fset[1];
      } else {
        uDot_max = 0.0;
      }

      errorVel_idx_0 = std::sqrt(uDot_max / URControlParams.k0);
      if (Fset[2] > 0.0) {
        uDot_max = Fset[2];
      } else {
        uDot_max = 0.0;
      }

      errorVel_idx_1 = std::sqrt(uDot_max / URControlParams.k0);
      if (Fset[3] > 0.0) {
        uDot_max = Fset[3];
      } else {
        uDot_max = 0.0;
      }

      wRotorSet_data_idx_3 = std::sqrt(uDot_max / URControlParams.k0);

      /* 'URControl_alloc:59' M_uvr_set(1) = (x(4) - x(2))*URpar.s; */
      URControl_DW.M_uvr_set[0] = (FMin[3] - FMin[1]) * URControlParams.s;

      /* 'URControl_alloc:60' M_uvr_set(2) = (x(1) - x(3))*URpar.s; */
      URControl_DW.M_uvr_set[1] = (FMin[0] - FMin[2]) * URControlParams.s;

      /* 'URControl_alloc:61' M_uvr_set(3) = (x(1) - x(2) + x(3) - x(4))*URpar.t0/URpar.k0; */
      URControl_DW.M_uvr_set[2] = (((FMin[0] - FMin[1]) + FMin[2]) - FMin[3]) *
        URControlParams.t0 / URControlParams.k0;

      /* 'URControl_alloc:62' Ftot_set = sum(x); */
      /* 'URControl_alloc:65' daq.iter = iter; */
      /* 'URControl_alloc:66' daq.optimal = optimal; */
      URControl_DW.DAQ.optimal = maxval;

      /* 'URControl_alloc:67' daq.M_uvr_des = M_uvr; */
      /* 'URControl_alloc:68' daq.M_uvr_set = M_uvr_set; */
      URControl_DW.DAQ.M_uvr_des[0] = dummy_idx_1;
      URControl_DW.DAQ.M_uvr_set[0] = URControl_DW.M_uvr_set[0];
      URControl_DW.DAQ.M_uvr_des[1] = uv_des_idx_1;
      URControl_DW.DAQ.M_uvr_set[1] = URControl_DW.M_uvr_set[1];
      URControl_DW.DAQ.M_uvr_des[2] = dummy_idx_0;
      URControl_DW.DAQ.M_uvr_set[2] = URControl_DW.M_uvr_set[2];

      /* 'URControl_alloc:69' daq.Ftot_set = Ftot_set; */
      URControl_DW.DAQ.Ftot_set = ((FMin[0] + FMin[1]) + FMin[2]) + FMin[3];
    }
  }

  /* 'URControl_alloc:73' wRotorSet = max(min(wRotorSet, w_max), w_min); */
  if ((Iv < w_max_idx_0) || rtIsNaN(w_max_idx_0)) {
    w_max_idx_0 = Iv;
  }

  if (w_max_idx_0 > 0.0) {
    URControl_DW.DAQ.wRotorSet[0] = w_max_idx_0;
    Fset[0] = w_max_idx_0;
  } else {
    URControl_DW.DAQ.wRotorSet[0] = 0.0;
    Fset[0] = 0.0;
  }

  if (errorVel_idx_0 < 1200.0) {
    w_max_idx_0 = errorVel_idx_0;
  } else {
    w_max_idx_0 = 1200.0;
  }

  tmp_2 = rtIsNaN(FMax[1]);
  if ((w_max_idx_0 > FMax[1]) || tmp_2) {
    URControl_DW.DAQ.wRotorSet[1] = w_max_idx_0;
  } else {
    URControl_DW.DAQ.wRotorSet[1] = FMax[1];
  }

  if ((w_max_idx_0 > FMax[1]) || tmp_2) {
    Fset[1] = w_max_idx_0;
  } else {
    Fset[1] = FMax[1];
  }

  if ((errorVel_idx_1 < Iu) || rtIsNaN(Iu)) {
    w_max_idx_0 = errorVel_idx_1;
  } else {
    w_max_idx_0 = Iu;
  }

  if (w_max_idx_0 > 0.0) {
    URControl_DW.DAQ.wRotorSet[2] = w_max_idx_0;
    Fset[2] = w_max_idx_0;
  } else {
    URControl_DW.DAQ.wRotorSet[2] = 0.0;
    Fset[2] = 0.0;
  }

  if (wRotorSet_data_idx_3 < 1200.0) {
    w_max_idx_0 = wRotorSet_data_idx_3;
  } else {
    w_max_idx_0 = 1200.0;
  }

  tmp_2 = rtIsNaN(FMax[3]);
  if ((w_max_idx_0 > FMax[3]) || tmp_2) {
    Fset[3] = w_max_idx_0;
  } else {
    Fset[3] = FMax[3];
  }

  /* 'URControl_alloc:75' daq.wRotorSet = wRotorSet; */
  if ((w_max_idx_0 > FMax[3]) || tmp_2) {
    URControl_DW.DAQ.wRotorSet[3] = w_max_idx_0;
  } else {
    URControl_DW.DAQ.wRotorSet[3] = FMax[3];
  }

  /* 'URControl_alloc:78' if fail_id_quick~=0 */
  if (URControl_U.fail_flag != 0) {
    /* 'URControl_alloc:79' wRotorSet(fail_id_quick) = par.fail_wRot; */
    Fset[URControl_U.fail_flag - 1] = 300.0;
  }

  /* End of MATLAB Function: '<S6>/control allocator' */

  /* Outport: '<Root>/w_rotors' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion'
   *  MATLAB Function: '<S1>/MATLAB Function'
   */
  /* :  [wRotorSetFinal, DAQ] = UROverrides(state, DAQ, wRotorSet, par, URControlParams); */
  /* 'UROverrides:3' wRotorSetFinal = wRotorSet; */
  /* :  actuator_controls = w_sp_to_px4_actuator_controls(w_sp, par); */
  /* 'w_sp_to_px4_actuator_controls:10' w_min_sq = par.px4.w_min^2; */
  /* 'w_sp_to_px4_actuator_controls:11' w_max_sq = par.px4.w_max^2; */
  /* 'w_sp_to_px4_actuator_controls:13' actuator_controls = -1 + 2*(w_sp.^2 - w_min_sq)./(w_max_sq - w_min_sq); */
  URControl_Y.w_rotors[0] = (real32_T)Fset[0];

  /* Outport: '<Root>/actuators_control' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion11'
   *  MATLAB Function: '<Root>/conversion to px4'
   *  MATLAB Function: '<S1>/MATLAB Function'
   */
  URControl_Y.actuators_control[0] = (real32_T)((Fset[0] * Fset[0] -
    98696.044010893587) * 2.0 / 1.5335171993870398E+6 + -1.0);

  /* Outport: '<Root>/w_rotors' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion'
   *  MATLAB Function: '<S1>/MATLAB Function'
   */
  URControl_Y.w_rotors[1] = (real32_T)Fset[1];

  /* Outport: '<Root>/actuators_control' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion11'
   *  MATLAB Function: '<Root>/conversion to px4'
   *  MATLAB Function: '<S1>/MATLAB Function'
   */
  URControl_Y.actuators_control[1] = (real32_T)((Fset[1] * Fset[1] -
    98696.044010893587) * 2.0 / 1.5335171993870398E+6 + -1.0);

  /* Outport: '<Root>/w_rotors' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion'
   *  MATLAB Function: '<S1>/MATLAB Function'
   */
  URControl_Y.w_rotors[2] = (real32_T)Fset[2];

  /* Outport: '<Root>/actuators_control' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion11'
   *  MATLAB Function: '<Root>/conversion to px4'
   *  MATLAB Function: '<S1>/MATLAB Function'
   */
  URControl_Y.actuators_control[2] = (real32_T)((Fset[2] * Fset[2] -
    98696.044010893587) * 2.0 / 1.5335171993870398E+6 + -1.0);

  /* Outport: '<Root>/w_rotors' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion'
   *  MATLAB Function: '<S1>/MATLAB Function'
   */
  URControl_Y.w_rotors[3] = (real32_T)Fset[3];

  /* Outport: '<Root>/actuators_control' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion11'
   *  MATLAB Function: '<Root>/conversion to px4'
   *  MATLAB Function: '<S1>/MATLAB Function'
   */
  URControl_Y.actuators_control[3] = (real32_T)((Fset[3] * Fset[3] -
    98696.044010893587) * 2.0 / 1.5335171993870398E+6 + -1.0);

  /* SignalConversion: '<S15>/ConcatBufferAtVector Concatenate1In1' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion5'
   *  Inport: '<Root>/rates'
   */
  rtb_VectorConcatenate1[0] = URControl_U.rates[0];
  rtb_VectorConcatenate1[1] = URControl_U.rates[1];
  rtb_VectorConcatenate1[2] = URControl_U.rates[2];

  /* DiscreteStateSpace: '<S15>/Discrete State-Space' */
  {
    rtb_VectorConcatenate1[3] = (1.0)*URControl_DW.DiscreteStateSpace_DSTATE_a[0];
    rtb_VectorConcatenate1[4] = (1.0)*URControl_DW.DiscreteStateSpace_DSTATE_a[1];
    rtb_VectorConcatenate1[5] = (1.0)*URControl_DW.DiscreteStateSpace_DSTATE_a[2];
  }

  /* Outputs for Atomic SubSystem: '<S18>/Predict' */
  /* MATLAB Function: '<S23>/Predict' incorporates:
   *  DataStoreRead: '<S23>/Data Store ReadP'
   *  DataStoreRead: '<S23>/Data Store ReadX'
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
  /* 'EKF_att_pos_state_Jacobian:4' dt = 0.002; */
  /* 'EKF_att_pos_state_Jacobian:8' vx = x(4); */
  /* 'EKF_att_pos_state_Jacobian:9' vy = x(5); */
  /* 'EKF_att_pos_state_Jacobian:10' vz = x(6); */
  /* 'EKF_att_pos_state_Jacobian:11' phi = x(7); */
  /* 'EKF_att_pos_state_Jacobian:12' theta = x(8); */
  /* 'EKF_att_pos_state_Jacobian:13' psi = x(9); */
  /* 'EKF_att_pos_state_Jacobian:15' p = u(1); */
  /* 'EKF_att_pos_state_Jacobian:16' q = u(2); */
  /* 'EKF_att_pos_state_Jacobian:17' r = u(3); */
  /* 'EKF_att_pos_state_Jacobian:18' ax = u(4); */
  /* 'EKF_att_pos_state_Jacobian:19' ay = u(5); */
  /* 'EKF_att_pos_state_Jacobian:20' az = u(6); */
  /* 'EKF_att_pos_state_Jacobian:22' dax = -0.0; */
  /* 'EKF_att_pos_state_Jacobian:23' day = 0; */
  /* 'EKF_att_pos_state_Jacobian:24' daz = -0.10; */
  /* 'EKF_att_pos_state_Jacobian:55' A =  ... */
  /* 'EKF_att_pos_state_Jacobian:56' [ 1, 0, 0, dt,  0,  0,                                                                                                                                   0,                                                                                                                       0,                                                                                                                                                                    0; */
  /* 'EKF_att_pos_state_Jacobian:57'   0, 1, 0,  0, dt,  0,                                                                                                                                   0,                                                                                                                       0,                                                                                                                                                                    0; */
  /* 'EKF_att_pos_state_Jacobian:58'   0, 0, 1,  0,  0, dt,                                                                                                                                   0,                                                                                                                       0,                                                                                                                                                                    0; */
  /* 'EKF_att_pos_state_Jacobian:59'   0, 0, 0,  1,  0,  0,  dt*((sin(phi)*sin(psi) + cos(phi)*cos(psi)*sin(theta))*(ay - day) + (cos(phi)*sin(psi) - cos(psi)*sin(phi)*sin(theta))*(az - daz)), dt*(cos(phi)*cos(psi)*cos(theta)*(az - daz) - cos(psi)*sin(theta)*(ax - dax) + cos(psi)*cos(theta)*sin(phi)*(ay - day)), -dt*((cos(phi)*cos(psi) + sin(phi)*sin(psi)*sin(theta))*(ay - day) - (cos(psi)*sin(phi) - cos(phi)*sin(psi)*sin(theta))*(az - daz) + cos(theta)*sin(psi)*(ax - dax)); */
  /* 'EKF_att_pos_state_Jacobian:60'   0, 0, 0,  0,  1,  0, -dt*((cos(psi)*sin(phi) - cos(phi)*sin(psi)*sin(theta))*(ay - day) + (cos(phi)*cos(psi) + sin(phi)*sin(psi)*sin(theta))*(az - daz)), dt*(cos(phi)*cos(theta)*sin(psi)*(az - daz) - sin(psi)*sin(theta)*(ax - dax) + cos(theta)*sin(phi)*sin(psi)*(ay - day)),  dt*((sin(phi)*sin(psi) + cos(phi)*cos(psi)*sin(theta))*(az - daz) - (cos(phi)*sin(psi) - cos(psi)*sin(phi)*sin(theta))*(ay - day) + cos(psi)*cos(theta)*(ax - dax)); */
  /* 'EKF_att_pos_state_Jacobian:61'   0, 0, 0,  0,  0,  1,                                                                dt*(cos(phi)*cos(theta)*(ay - day) - cos(theta)*sin(phi)*(az - daz)),                           -dt*(cos(theta)*(ax - dax) + cos(phi)*sin(theta)*(az - daz) + sin(phi)*sin(theta)*(ay - day)),                                                                                                                                                                    0; */
  /* 'EKF_att_pos_state_Jacobian:62'   0, 0, 0,  0,  0,  0,                                                                                                        1 - dt*r*sin(phi)*tan(theta),                                           dt*((tan(theta)^2 + 1)*(r*cos(phi) + q*sin(theta)) + q*cos(theta)*tan(theta)),                                                                                                                                                                    0; */
  /* 'EKF_att_pos_state_Jacobian:63'   0, 0, 0,  0,  0,  0,                                                                                                       -dt*(r*cos(phi) + q*sin(phi)),                                                                                                                       1,                                                                                                                                                                    0; */
  /* 'EKF_att_pos_state_Jacobian:64'   0, 0, 0,  0,  0,  0,                                                                                           (dt*(q*cos(phi) - r*sin(phi)))/cos(theta),                                                                  (dt*sin(theta)*(r*cos(phi) + q*sin(phi)))/cos(theta)^2,                                                                                                                                                                    1]; */
  w_max_idx_0 = std::tan(URControl_DW.x[7]);
  maxval = std::cos(URControl_DW.x[7]);
  for (r1 = 0; r1 < 9; r1++) {
    Jacobian[9 * r1] = b_1[r1];
    Jacobian[1 + 9 * r1] = c_0[r1];
    Jacobian[2 + 9 * r1] = d_0[r1];
  }

  Jacobian[3] = 0.0;
  Jacobian[12] = 0.0;
  Jacobian[21] = 0.0;
  Jacobian[30] = 1.0;
  Jacobian[39] = 0.0;
  Jacobian[48] = 0.0;
  MuPrec = std::cos(URControl_DW.x[6]);
  psi = std::sin(URControl_DW.x[8]);
  Iu = std::cos(URControl_DW.x[8]);
  dummy_idx_0 = std::sin(URControl_DW.x[6]);
  dummy_idx_1 = std::sin(URControl_DW.x[7]);
  uv_des_idx_1 = MuPrec * Iu;
  uDot_max = dummy_idx_0 * psi;
  rtb_DataTypeConversion8_idx_1 = MuPrec * psi;
  Iv = Iu * dummy_idx_0;
  errorVel_idx_0 = uv_des_idx_1 * dummy_idx_1 + uDot_max;
  errorVel_idx_1 = rtb_DataTypeConversion8_idx_1 - Iv * dummy_idx_1;
  Jacobian[57] = (errorVel_idx_0 * rtb_VectorConcatenate1[4] + errorVel_idx_1 *
                  (rtb_VectorConcatenate1[5] - -0.1)) * 0.002;
  wRotorSet_data_idx_3 = Iu * maxval;
  Jacobian_tmp = Iu * dummy_idx_1;
  Jacobian[66] = ((uv_des_idx_1 * maxval * (rtb_VectorConcatenate1[5] - -0.1) -
                   Jacobian_tmp * rtb_VectorConcatenate1[3]) +
                  wRotorSet_data_idx_3 * dummy_idx_0 * rtb_VectorConcatenate1[4])
    * 0.002;
  rtb_DataTypeConversion8_idx_1 = Iv - rtb_DataTypeConversion8_idx_1 *
    dummy_idx_1;
  uv_des_idx_1 += uDot_max * dummy_idx_1;
  Jacobian[75] = ((uv_des_idx_1 * rtb_VectorConcatenate1[4] -
                   rtb_DataTypeConversion8_idx_1 * (rtb_VectorConcatenate1[5] -
    -0.1)) + maxval * psi * rtb_VectorConcatenate1[3]) * -0.002;
  Jacobian[4] = 0.0;
  Jacobian[13] = 0.0;
  Jacobian[22] = 0.0;
  Jacobian[31] = 0.0;
  Jacobian[40] = 1.0;
  Jacobian[49] = 0.0;
  Jacobian[58] = (rtb_DataTypeConversion8_idx_1 * rtb_VectorConcatenate1[4] +
                  uv_des_idx_1 * (rtb_VectorConcatenate1[5] - -0.1)) * -0.002;
  uv_des_idx_1 = MuPrec * maxval;
  uDot_max = maxval * dummy_idx_0;
  rtb_DataTypeConversion8_idx_1 = psi * dummy_idx_1;
  Jacobian[67] = ((uv_des_idx_1 * psi * (rtb_VectorConcatenate1[5] - -0.1) -
                   rtb_DataTypeConversion8_idx_1 * rtb_VectorConcatenate1[3]) +
                  uDot_max * psi * rtb_VectorConcatenate1[4]) * 0.002;
  Jacobian[76] = ((errorVel_idx_0 * (rtb_VectorConcatenate1[5] - -0.1) -
                   errorVel_idx_1 * rtb_VectorConcatenate1[4]) +
                  wRotorSet_data_idx_3 * rtb_VectorConcatenate1[3]) * 0.002;
  Jacobian[5] = 0.0;
  Jacobian[14] = 0.0;
  Jacobian[23] = 0.0;
  Jacobian[32] = 0.0;
  Jacobian[41] = 0.0;
  Jacobian[50] = 1.0;
  Jacobian[59] = (uv_des_idx_1 * rtb_VectorConcatenate1[4] - uDot_max *
                  (rtb_VectorConcatenate1[5] - -0.1)) * 0.002;
  Jacobian[68] = ((MuPrec * dummy_idx_1 * (rtb_VectorConcatenate1[5] - -0.1) +
                   maxval * rtb_VectorConcatenate1[3]) + dummy_idx_0 *
                  dummy_idx_1 * rtb_VectorConcatenate1[4]) * -0.002;
  Jacobian[77] = 0.0;
  Jacobian[6] = 0.0;
  Jacobian[15] = 0.0;
  Jacobian[24] = 0.0;
  Jacobian[33] = 0.0;
  Jacobian[42] = 0.0;
  Jacobian[51] = 0.0;
  Jacobian[60] = 1.0 - 0.002 * rtb_VectorConcatenate1[2] * dummy_idx_0 *
    w_max_idx_0;
  uv_des_idx_1 = rtb_VectorConcatenate1[2] * MuPrec;
  errorVel_idx_0 = rtb_VectorConcatenate1[1] * dummy_idx_1;
  Jacobian[69] = ((w_max_idx_0 * w_max_idx_0 + 1.0) * (uv_des_idx_1 +
    errorVel_idx_0) + rtb_VectorConcatenate1[1] * maxval * w_max_idx_0) * 0.002;
  Jacobian[78] = 0.0;
  Jacobian[7] = 0.0;
  Jacobian[16] = 0.0;
  Jacobian[25] = 0.0;
  Jacobian[34] = 0.0;
  Jacobian[43] = 0.0;
  Jacobian[52] = 0.0;
  Jacobian_tmp_tmp = rtb_VectorConcatenate1[1] * dummy_idx_0;
  errorVel_idx_1 = uv_des_idx_1 + Jacobian_tmp_tmp;
  Jacobian[61] = errorVel_idx_1 * -0.002;
  Jacobian[70] = 1.0;
  Jacobian[79] = 0.0;
  Jacobian[8] = 0.0;
  Jacobian[17] = 0.0;
  Jacobian[26] = 0.0;
  Jacobian[35] = 0.0;
  Jacobian[44] = 0.0;
  Jacobian[53] = 0.0;
  Jacobian_tmp_0 = (rtb_VectorConcatenate1[1] * MuPrec - rtb_VectorConcatenate1
                    [2] * dummy_idx_0) * 0.002;
  Jacobian[62] = Jacobian_tmp_0 / maxval;
  Jacobian[71] = errorVel_idx_1 * (0.002 * dummy_idx_1) / (maxval * maxval);
  Jacobian[80] = 1.0;

  /* 'EKF_att_pos_state:3' dt = 0.002; */
  /* 'EKF_att_pos_state:8' vx = x(4); */
  /* 'EKF_att_pos_state:9' vy = x(5); */
  /* 'EKF_att_pos_state:10' vz = x(6); */
  /* 'EKF_att_pos_state:11' phi = x(7); */
  /* 'EKF_att_pos_state:12' theta = x(8); */
  /* 'EKF_att_pos_state:13' psi = x(9); */
  /* 'EKF_att_pos_state:15' p = u(1); */
  /* 'EKF_att_pos_state:16' q = u(2); */
  /* 'EKF_att_pos_state:17' r = u(3); */
  /* 'EKF_att_pos_state:18' ax = u(4); */
  /* 'EKF_att_pos_state:19' ay = u(5); */
  /* 'EKF_att_pos_state:20' az = u(6); */
  /* 'EKF_att_pos_state:22' dax = -0.0; */
  /* 'EKF_att_pos_state:23' day = 0; */
  /* 'EKF_att_pos_state:24' daz = -0.10; */
  /* 'EKF_att_pos_state:26' R_IB = [cos(psi)*cos(theta) , cos(psi)*sin(theta)*sin(phi)-sin(psi)*cos(phi), cos(psi)*sin(theta)*cos(phi)+sin(psi)*sin(phi); */
  /* 'EKF_att_pos_state:27'         sin(psi)*cos(theta) ,sin(psi)*sin(theta)*sin(phi)+cos(psi)*cos(phi), sin(psi)*sin(theta)*cos(phi)-cos(psi)*sin(phi); */
  /* 'EKF_att_pos_state:28'         -sin(theta)          , cos(theta)*sin(phi)                          , cos(theta)*cos(phi)                          ]; */
  /* 'EKF_att_pos_state:30' dPos = [vx;vy;vz]; */
  /* 'EKF_att_pos_state:31' dVel = R_IB*[ax-dax;ay-day;az-daz] + [0;0;9.8124]; */
  tmp_0[0] = wRotorSet_data_idx_3;
  tmp_0[3] = Jacobian_tmp * dummy_idx_0 - psi * MuPrec;
  tmp_0[6] = Jacobian_tmp * MuPrec + psi * dummy_idx_0;
  tmp_0[1] = psi * maxval;
  tmp_0[4] = rtb_DataTypeConversion8_idx_1 * dummy_idx_0 + Iu * MuPrec;
  tmp_0[7] = rtb_DataTypeConversion8_idx_1 * MuPrec - Iv;
  tmp_0[2] = -dummy_idx_1;
  tmp_0[5] = uDot_max;
  tmp_0[8] = maxval * MuPrec;
  for (r1 = 0; r1 < 3; r1++) {
    rtb_omega[r1] = ((tmp_0[r1 + 3] * rtb_VectorConcatenate1[4] + tmp_0[r1] *
                      rtb_VectorConcatenate1[3]) + tmp_0[r1 + 6] *
                     (rtb_VectorConcatenate1[5] - -0.1)) + e[r1];
  }

  /* 'EKF_att_pos_state:32' dphi = (p + tan(theta)*(q*sin(theta)+r*cos(phi))); */
  /* 'EKF_att_pos_state:33' dtheta = (q*cos(phi)-r*sin(phi)); */
  /* 'EKF_att_pos_state:34' dpsi = ((q*sin(phi)+r*cos(phi))/cos(theta)); */
  /* 'EKF_att_pos_state:36' x(1) = x(1) + dPos(1)*dt; */
  rtb_xNew[0] = URControl_DW.x[3] * 0.002 + URControl_DW.x[0];

  /* 'EKF_att_pos_state:37' x(2) = x(2) + dPos(2)*dt; */
  rtb_xNew[1] = URControl_DW.x[4] * 0.002 + URControl_DW.x[1];

  /* 'EKF_att_pos_state:38' x(3) = x(3) + dPos(3)*dt; */
  rtb_xNew[2] = URControl_DW.x[5] * 0.002 + URControl_DW.x[2];

  /* 'EKF_att_pos_state:39' x(4) = x(4) + dVel(1)*dt; */
  rtb_xNew[3] = rtb_omega[0] * 0.002 + URControl_DW.x[3];

  /* 'EKF_att_pos_state:40' x(5) = x(5) + dVel(2)*dt; */
  rtb_xNew[4] = rtb_omega[1] * 0.002 + URControl_DW.x[4];

  /* 'EKF_att_pos_state:41' x(6) = x(6) + dVel(3)*dt; */
  rtb_xNew[5] = rtb_omega[2] * 0.002 + URControl_DW.x[5];

  /* 'EKF_att_pos_state:42' x(7) = x(7) + dphi*dt; */
  rtb_xNew[6] = ((errorVel_idx_0 + uv_des_idx_1) * w_max_idx_0 +
                 rtb_VectorConcatenate1[0]) * 0.002 + URControl_DW.x[6];

  /* 'EKF_att_pos_state:43' x(8) = x(8) + dtheta*dt; */
  rtb_xNew[7] = Jacobian_tmp_0 + URControl_DW.x[7];

  /* 'EKF_att_pos_state:44' x(9) = x(9) + dpsi*dt; */
  rtb_xNew[8] = (Jacobian_tmp_tmp + uv_des_idx_1) / maxval * 0.002 +
    URControl_DW.x[8];
  for (r1 = 0; r1 < 9; r1++) {
    for (r2 = 0; r2 < 9; r2++) {
      rtemp = r2 + 9 * r1;
      gain_0[rtemp] = 0.0;
      for (r3 = 0; r3 < 9; r3++) {
        gain_0[rtemp] = Jacobian[9 * r3 + r2] * URControl_DW.P[9 * r1 + r3] +
          gain_0[9 * r1 + r2];
      }
    }
  }

  for (r3 = 0; r3 < 9; r3++) {
    /* DataStoreWrite: '<S23>/Data Store WriteP' incorporates:
     *  Constant: '<S18>/Q'
     *  MATLAB Function: '<S23>/Predict'
     */
    for (r1 = 0; r1 < 9; r1++) {
      uv_des_idx_1 = 0.0;
      for (r2 = 0; r2 < 9; r2++) {
        uv_des_idx_1 += gain_0[9 * r2 + r3] * Jacobian[9 * r2 + r1];
      }

      URControl_DW.P[r3 + 9 * r1] = URControl_ConstP.Q_Value[9 * r1 + r3] +
        uv_des_idx_1;
    }

    /* End of DataStoreWrite: '<S23>/Data Store WriteP' */

    /* DataStoreWrite: '<S23>/Data Store WriteX' */
    URControl_DW.x[r3] = rtb_xNew[r3];
  }

  /* End of Outputs for SubSystem: '<S18>/Predict' */

  /* Outport: '<Root>/daq' incorporates:
   *  DataStoreRead: '<Root>/Data Store Read'
   */
  URControl_Y.daq = URControl_DW.DAQ;

  /* Update for UnitDelay: '<S17>/UD' */
  URControl_DW.UD_DSTATE = rtb_att_out_idx_2;

  /* Update for DiscreteStateSpace: '<S3>/Discrete State-Space' */
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

  /* Update for DiscreteStateSpace: '<S15>/Discrete State-Space' */
  {
    real_T xnew[3];
    xnew[0] = (0.9)*URControl_DW.DiscreteStateSpace_DSTATE_a[0];
    xnew[0] += (0.1)*rtb_acc[0];
    xnew[1] = (0.9)*URControl_DW.DiscreteStateSpace_DSTATE_a[1];
    xnew[1] += (0.1)*rtb_acc[1];
    xnew[2] = (0.9)*URControl_DW.DiscreteStateSpace_DSTATE_a[2];
    xnew[2] += (0.1)*rtb_acc[2];
    (void) memcpy(&URControl_DW.DiscreteStateSpace_DSTATE_a[0], xnew,
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

  /* states (dwork) */
  (void) memset((void *)&URControl_DW, 0,
                sizeof(DW_URControl_T));

  /* external inputs */
  (void)memset(&URControl_U, 0, sizeof(ExtU_URControl_T));

  /* external outputs */
  (void) memset((void *)&URControl_Y, 0,
                sizeof(ExtY_URControl_T));

  /* Start for DataStoreMemory: '<S18>/DataStoreMemory - P' */
  memcpy(&URControl_DW.P[0], &URControl_ConstP.DataStoreMemoryP_InitialValue[0],
         81U * sizeof(real_T));

  /* Start for DataStoreMemory: '<S18>/DataStoreMemory - x' */
  memset(&URControl_DW.x[0], 0, 9U * sizeof(real_T));

  /* Start for DataStoreMemory: '<Root>/Data Store Memory' */
  URControl_DW.DAQ = URControl_rtZdaqBus;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory1' */
  URControl_DW.State = URControl_rtZstateBus;

  /* InitializeConditions for UnitDelay: '<S17>/UD' */
  URControl_DW.UD_DSTATE = 0.0;

  /* InitializeConditions for DiscreteStateSpace: '<S3>/Discrete State-Space' */
  URControl_DW.DiscreteStateSpace_DSTATE[0] = (0.0);
  URControl_DW.DiscreteStateSpace_DSTATE[1] = (0.0);
  URControl_DW.DiscreteStateSpace_DSTATE[2] = (-1.0);

  /* InitializeConditions for DiscreteStateSpace: '<S15>/Discrete State-Space' */
  URControl_DW.DiscreteStateSpace_DSTATE_a[0] = (0.0);
  URControl_DW.DiscreteStateSpace_DSTATE_a[1] = (0.0);
  URControl_DW.DiscreteStateSpace_DSTATE_a[2] = (0.0);

  /* SystemInitialize for MATLAB Function: '<S15>/unwrap2pi' */
  URControl_DW.psi_last_not_empty = false;

  /* :  N = 0; */
  URControl_DW.N = 0.0;

  /* SystemInitialize for MATLAB Function: '<S15>/MATLAB Function' */
  /* :  psi_last = 0; */
  URControl_DW.psi_last_b = 0.0;

  /* SystemInitialize for MATLAB Function: '<S5>/basic estimators' */
  URControl_DW.omegaFilter_not_empty = false;
  URControl_DW.posFilter_not_empty = false;
  URControl_DW.velFilter_not_empty = false;

  /* SystemInitialize for MATLAB Function: '<S2>/position control' */
  /* 'URpositionControl:3' errorInt = [0,0,0]; */
  URControl_DW.errorInt_p[0] = 0.0;
  URControl_DW.errorInt_p[1] = 0.0;
  URControl_DW.errorInt_p[2] = 0.0;

  /* SystemInitialize for MATLAB Function: '<S2>/altitude control' */
  /* 'URAltitudeControl:3' errorInt = 0; */
  URControl_DW.errorInt_b = 0.0;

  /* SystemInitialize for MATLAB Function: '<S6>/control allocator' */
  URControl_DW.omegaDot_not_empty = false;
  URControl_DW.accZFilt_not_empty = false;
  URControl_DW.errorD_not_empty = false;
  URControl_DW.uvrDer_not_empty = false;
  URControl_DW.omegaDot_not_empty_l = false;

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

  /* 'PIDMomentGen:4' error_prev = [0,0,0]; */
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
