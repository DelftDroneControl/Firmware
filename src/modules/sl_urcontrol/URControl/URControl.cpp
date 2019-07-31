/*
 * URControl.cpp
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
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "URControl.h"
#include "URControl_private.h"
#include "URTrajCalc_RjTVAO9s.h"
#include "ekf_state_jacob_WRvyoYwd.h"
#include "eps_HLXrD8YB.h"
#include "mrdivide_helper_D6MymrEr.h"
#include "norm_UkJeSx98.h"
#include "norm_wXO8gvHp.h"
#include "pinv_sd18IsCR.h"
#include "rt_atan2d_snf.h"
#include "rt_hypotd_snf.h"
#include "rt_powd_snf.h"
#include "sqrt_t6kvbcYg.h"
#include "sum_WaUbR9ig.h"

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
  300.0,
  -1.0,

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
  1.0,
  1.0,
  1200.0,
  300.0,

  { 2.74104, 2.74104, 2.74104, 2.74104 },

  { 0.171315, 0.171315, 0.171315, 0.171315 },
  0.05,
  5.0,
  3.0,
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
  4.0
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
LPFilter_1_URControl_T *URControlModelClass::URControl_LPFilter_LPFilter_j
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
void URControlModelClass::URControl_xswap(int32_T n, real_T x_data[], int32_T
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
real_T URControlModelClass::URControl_xnrm2(int32_T n, const real_T x_data[],
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

  *tau_size = static_cast<int8_T>(mn);
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
    c_idx_0 = static_cast<int8_T>(A_size[1]);
    if (0 <= c_idx_0 - 1) {
      memset(&work_data[0], 0, c_idx_0 * sizeof(real_T));
    }

    b_n = 1;
    for (yk = 0; yk < n; yk++) {
      vn1_data[yk] = URControl_xnrm2(m, A_data, b_n);
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
        URControl_xswap(m, A_data, 1 + m * ix, 1 + m * b_n);
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
          s = URControl_xnrm2(yk - 1, A_data, i_i + 2);
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

              s = rt_hypotd_snf(smax, URControl_xnrm2(yk - 1, A_data, i_i + 2));
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
              vn1_data[i_i] = URControl_xnrm2(yk - 1, A_data, nmi + 2);
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
  if (A_size[1] < 1) {
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
               <= 2.2204460492503131E-15 * static_cast<real_T>(maxmn) * std::abs
               (b_A_data[0])))) {
        rankR++;
      }
    }

    b_idx_0 = static_cast<int8_T>(b_A_size[1]);
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
  int32_T f_size_idx_1;
  int32_T result_size_idx_1;
  int8_T l2_idx_0;
  int8_T l1_idx_1;
  int32_T H_tmp_tmp;
  int32_T H_tmp_tmp_tmp;
  int32_T H_tmp_tmp_0;
  boolean_T tmp;
  boolean_T guard1 = false;
  boolean_T exitg1;
  boolean_T exitg2;

  /* 'QPINDI:13' x = [0;0;0;0]; */
  /* 'QPINDI:14' y = [0;0;0;0]; */
  /* 'QPINDI:16' H = 2*(G'*K*G + K2); */
  for (i = 0; i < 4; i++) {
    x[i] = 0.0;
    for (xy_size = 0; xy_size < 4; xy_size++) {
      H_tmp_tmp_tmp = xy_size << 2;
      H_tmp_tmp = i + H_tmp_tmp_tmp;
      H_tmp[H_tmp_tmp] = 0.0;
      H_tmp_tmp_0 = i << 2;
      H_tmp[H_tmp_tmp] += G[H_tmp_tmp_0] * K[H_tmp_tmp_tmp];
      H_tmp[H_tmp_tmp] += G[H_tmp_tmp_0 + 1] * K[H_tmp_tmp_tmp + 1];
      H_tmp[H_tmp_tmp] += G[H_tmp_tmp_0 + 2] * K[H_tmp_tmp_tmp + 2];
      H_tmp[H_tmp_tmp] += G[H_tmp_tmp_0 + 3] * K[H_tmp_tmp_tmp + 3];
    }

    for (xy_size = 0; xy_size < 4; xy_size++) {
      H_tmp_tmp = xy_size << 2;
      H_tmp_tmp_0 = H_tmp_tmp + i;
      H_tmp_0[H_tmp_tmp_0] = (((G[H_tmp_tmp + 1] * H_tmp[i + 4] + G[H_tmp_tmp] *
        H_tmp[i]) + G[H_tmp_tmp + 2] * H_tmp[i + 8]) + G[H_tmp_tmp + 3] *
        H_tmp[i + 12]) + K2[H_tmp_tmp_0];
    }
  }

  for (xy_size = 0; xy_size < 16; xy_size++) {
    H[xy_size] = 2.0 * H_tmp_0[xy_size];
  }

  /* 'QPINDI:17' c = -(G'*K*inp + (inp'*K*G)'); */
  for (xy_size = 0; xy_size < 4; xy_size++) {
    H_tmp_tmp_tmp = xy_size << 2;
    count = K[H_tmp_tmp_tmp + 3] * inp[3] + (K[H_tmp_tmp_tmp + 2] * inp[2] +
      (K[H_tmp_tmp_tmp + 1] * inp[1] + K[H_tmp_tmp_tmp] * inp[0]));
    inp_0[xy_size] = count;
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
    H_tmp_tmp_tmp = i << 2;
    count = G[H_tmp_tmp_tmp + 3] * inp_0[3] + (G[H_tmp_tmp_tmp + 2] * inp_0[2] +
      (G[H_tmp_tmp_tmp + 1] * inp_0[1] + G[H_tmp_tmp_tmp] * inp_0[0]));
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
  H_tmp_tmp_tmp = 0;
  exitg1 = false;
  while ((!exitg1) && (H_tmp_tmp_tmp < 10)) {
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
    idx = 0;
    for (xy_size = 0; xy_size < 8; xy_size++) {
      if (indices[xy_size]) {
        idx++;
      }
    }

    f_size_idx_1 = idx;
    idx = 0;
    for (xy_size = 0; xy_size < 8; xy_size++) {
      if (indices[xy_size]) {
        f_data[idx] = static_cast<int8_T>((xy_size + 1));
        idx++;
      }
    }

    for (xy_size = 0; xy_size < f_size_idx_1; xy_size++) {
      A_eq_data[xy_size] = A[f_data[xy_size] - 1];
    }

    for (xy_size = 0; xy_size < f_size_idx_1; xy_size++) {
      A_eq_data[xy_size + f_size_idx_1] = A[f_data[xy_size] + 7];
    }

    for (xy_size = 0; xy_size < f_size_idx_1; xy_size++) {
      A_eq_data[xy_size + (f_size_idx_1 << 1)] = A[f_data[xy_size] + 15];
    }

    for (xy_size = 0; xy_size < f_size_idx_1; xy_size++) {
      A_eq_data[xy_size + f_size_idx_1 * 3] = A[f_data[xy_size] + 23];
    }

    /* 'QPINDI:50' AT_eq = transpose(A_eq); */
    for (xy_size = 0; xy_size < f_size_idx_1; xy_size++) {
      H_tmp_tmp = xy_size << 2;
      AT_eq_data[H_tmp_tmp] = A_eq_data[xy_size];
      AT_eq_data[1 + H_tmp_tmp] = A_eq_data[xy_size + f_size_idx_1];
      AT_eq_data[2 + H_tmp_tmp] = A_eq_data[(f_size_idx_1 << 1) + xy_size];
      AT_eq_data[3 + H_tmp_tmp] = A_eq_data[f_size_idx_1 * 3 + xy_size];
    }

    /* 'QPINDI:52' if isempty(A_eq) */
    if (f_size_idx_1 == 0) {
      /* 'QPINDI:53' l1=[0,0]; */
      /* 'QPINDI:54' l2=[0,0]; */
      l2_idx_0 = 0;
      l1_idx_1 = 0;
    } else {
      /* 'QPINDI:55' else */
      /* 'QPINDI:56' l1=size(AT_eq); */
      l1_idx_1 = static_cast<int8_T>(f_size_idx_1);

      /* 'QPINDI:57' l2=size(A_eq); */
      l2_idx_0 = static_cast<int8_T>(f_size_idx_1);
    }

    /* 'QPINDI:61' D = [H,AT_eq;A_eq,zeros(l2(1),l1(2))]; */
    if (f_size_idx_1 != 0) {
      idx = f_size_idx_1;
    } else if ((l2_idx_0 != 0) && (l1_idx_1 != 0)) {
      idx = l2_idx_0;
    } else {
      idx = 0;
      if (l2_idx_0 > 0) {
        idx = l2_idx_0;
      }
    }

    empty_non_axis_sizes = (idx == 0);
    if (empty_non_axis_sizes || (f_size_idx_1 != 0)) {
      xy_size = 4;
    } else {
      xy_size = 0;
    }

    if (empty_non_axis_sizes || ((l2_idx_0 != 0) && (l1_idx_1 != 0))) {
      H_tmp_tmp_0 = l1_idx_1;
    } else {
      H_tmp_tmp_0 = 0;
    }

    H_tmp_tmp = idx;
    result_size_idx_1 = xy_size + H_tmp_tmp_0;
    loop_ub = idx * xy_size;
    xy_size = idx * H_tmp_tmp_0 - 1;
    if (0 <= loop_ub - 1) {
      memcpy(&result_data[0], &A_eq_data[0], loop_ub * sizeof(int8_T));
    }

    if (0 <= xy_size) {
      memset(&result_data[loop_ub], 0, (((xy_size + loop_ub) - loop_ub) + 1) *
             sizeof(int8_T));
    }

    H_tmp_tmp_0 = 4 + f_size_idx_1;
    loop_ub = (f_size_idx_1 << 2) - 1;
    memcpy(&varargin_1_data[0], &H[0], sizeof(real_T) << 4U);
    for (xy_size = 0; xy_size <= loop_ub; xy_size++) {
      varargin_1_data[xy_size + 16] = AT_eq_data[xy_size];
    }

    /* 'QPINDI:62' d = [-c;b_eq]; */
    idx = 0;
    for (xy_size = 0; xy_size < 8; xy_size++) {
      if (indices[xy_size]) {
        idx++;
      }
    }

    f_size_idx_1 = idx;
    idx = 0;
    for (xy_size = 0; xy_size < 8; xy_size++) {
      if (indices[xy_size]) {
        g_data[idx] = static_cast<int8_T>((xy_size + 1));
        idx++;
      }
    }

    /* 'QPINDI:63' xy = D\d; */
    if ((H_tmp_tmp == 0) || (result_size_idx_1 == 0)) {
      H_tmp_tmp = 0;
    }

    varargin_1_size[0] = 4 + H_tmp_tmp;
    varargin_1_size[1] = H_tmp_tmp_0;
    for (xy_size = 0; xy_size < H_tmp_tmp_0; xy_size++) {
      idx = xy_size << 2;
      result_size_idx_1 = varargin_1_size[0] * xy_size;
      varargin_1_data_0[result_size_idx_1] = varargin_1_data[idx];
      varargin_1_data_0[1 + result_size_idx_1] = varargin_1_data[idx + 1];
      varargin_1_data_0[2 + result_size_idx_1] = varargin_1_data[idx + 2];
      varargin_1_data_0[3 + result_size_idx_1] = varargin_1_data[idx + 3];
    }

    for (xy_size = 0; xy_size < H_tmp_tmp_0; xy_size++) {
      for (idx = 0; idx < H_tmp_tmp; idx++) {
        varargin_1_data_0[(idx + varargin_1_size[0] * xy_size) + 4] =
          result_data[H_tmp_tmp * xy_size + idx];
      }
    }

    H_tmp_tmp = 4 + f_size_idx_1;
    c_data[0] = -c[0];
    c_data[1] = -c[1];
    c_data[2] = -c[2];
    c_data[3] = -c[3];
    for (xy_size = 0; xy_size < f_size_idx_1; xy_size++) {
      c_data[xy_size + 4] = b[g_data[xy_size] - 1];
    }

    URControl_mldivide(varargin_1_data_0, varargin_1_size, c_data, &H_tmp_tmp,
                       xy_data, &xy_size);

    /* 'QPINDI:64' x = xy(1:4); */
    x[0] = xy_data[0];
    x[1] = xy_data[1];
    x[2] = xy_data[2];
    x[3] = xy_data[3];

    /* 'QPINDI:65' y = xy(5:length(xy)); */
    if (5 > xy_size) {
      idx = 0;
      xy_size = 0;
    } else {
      idx = 4;
    }

    H_tmp_tmp = xy_size - idx;
    for (xy_size = 0; xy_size < H_tmp_tmp; xy_size++) {
      c_data[xy_size] = xy_data[idx + xy_size];
    }

    if (0 <= H_tmp_tmp - 1) {
      memcpy(&xy_data[0], &c_data[0], H_tmp_tmp * sizeof(real_T));
    }

    /* 'QPINDI:68' constraintError = A*x - b; */
    for (xy_size = 0; xy_size < 8; xy_size++) {
      constraintError[xy_size] = (((static_cast<real_T>(A[xy_size + 8]) * x[1] +
        static_cast<real_T>(A[xy_size]) * x[0]) + static_cast<real_T>(A[xy_size
        + 16]) * x[2]) + static_cast<real_T>(A[xy_size + 24]) * x[3]) -
        b[xy_size];
    }

    /* 'QPINDI:70' constraintOK = (max(constraintError) <= 0.001); */
    tmp = rtIsNaN(constraintError[0]);
    if (!tmp) {
      idx = 1;
    } else {
      idx = 0;
      xy_size = 2;
      exitg2 = false;
      while ((!exitg2) && (xy_size < 9)) {
        if (!rtIsNaN(constraintError[xy_size - 1])) {
          idx = xy_size;
          exitg2 = true;
        } else {
          xy_size++;
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
    if (H_tmp_tmp == 0) {
      empty_non_axis_sizes = true;
    } else {
      if (H_tmp_tmp <= 2) {
        if (H_tmp_tmp == 1) {
          b_ex = xy_data[0];
        } else if ((xy_data[0] > xy_data[1]) || (rtIsNaN(xy_data[0]) &&
                    (!rtIsNaN(xy_data[1])))) {
          b_ex = xy_data[1];
        } else {
          b_ex = xy_data[0];
        }
      } else {
        if (!rtIsNaN(xy_data[0])) {
          idx = 1;
        } else {
          idx = 0;
          xy_size = 2;
          exitg2 = false;
          while ((!exitg2) && (xy_size <= H_tmp_tmp)) {
            if (!rtIsNaN(xy_data[xy_size - 1])) {
              idx = xy_size;
              exitg2 = true;
            } else {
              xy_size++;
            }
          }
        }

        if (idx == 0) {
          b_ex = xy_data[0];
        } else {
          b_ex = xy_data[idx - 1];
          while (idx + 1 <= H_tmp_tmp) {
            if (b_ex > xy_data[idx]) {
              b_ex = xy_data[idx];
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
      if (H_tmp_tmp == 0) {
        guard1 = true;
      } else {
        if (H_tmp_tmp <= 2) {
          if (H_tmp_tmp == 1) {
            count = xy_data[0];
          } else if ((xy_data[0] > xy_data[1]) || (rtIsNaN(xy_data[0]) &&
                      (!rtIsNaN(xy_data[1])))) {
            count = xy_data[1];
          } else {
            count = xy_data[0];
          }
        } else {
          if (!rtIsNaN(xy_data[0])) {
            idx = 1;
          } else {
            idx = 0;
            xy_size = 2;
            exitg2 = false;
            while ((!exitg2) && (xy_size <= H_tmp_tmp)) {
              if (!rtIsNaN(xy_data[xy_size - 1])) {
                idx = xy_size;
                exitg2 = true;
              } else {
                xy_size++;
              }
            }
          }

          if (idx == 0) {
            count = xy_data[0];
          } else {
            count = xy_data[idx - 1];
            while (idx + 1 <= H_tmp_tmp) {
              if (count > xy_data[idx]) {
                count = xy_data[idx];
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
          if (H_tmp_tmp <= 2) {
            if (H_tmp_tmp == 1) {
              idx = 1;
            } else if ((xy_data[0] > xy_data[1]) || (rtIsNaN(xy_data[0]) &&
                        (!rtIsNaN(xy_data[1])))) {
              idx = 2;
            } else {
              idx = 1;
            }
          } else {
            if (!rtIsNaN(xy_data[0])) {
              idx = 1;
            } else {
              idx = 0;
              xy_size = 2;
              exitg2 = false;
              while ((!exitg2) && (xy_size <= H_tmp_tmp)) {
                if (!rtIsNaN(xy_data[xy_size - 1])) {
                  idx = xy_size;
                  exitg2 = true;
                } else {
                  xy_size++;
                }
              }
            }

            if (idx == 0) {
              idx = 1;
            } else {
              count = xy_data[idx - 1];
              for (xy_size = idx; xy_size < H_tmp_tmp; xy_size++) {
                if (count > xy_data[xy_size]) {
                  count = xy_data[xy_size];
                  idx = xy_size + 1;
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
        if (!tmp) {
          idx = 1;
        } else {
          idx = 0;
          xy_size = 2;
          exitg2 = false;
          while ((!exitg2) && (xy_size < 9)) {
            if (!rtIsNaN(constraintError[xy_size - 1])) {
              idx = xy_size;
              exitg2 = true;
            } else {
              xy_size++;
            }
          }
        }

        if (idx == 0) {
          idx = 1;
        } else {
          count = constraintError[idx - 1];
          for (xy_size = idx; xy_size + 1 < 9; xy_size++) {
            if (count < constraintError[xy_size]) {
              count = constraintError[xy_size];
              idx = xy_size + 1;
            }
          }
        }

        /* 'QPINDI:79' ~ */
        /* 'QPINDI:80' if index < 5 */
        if (idx < 5) {
          /* 'QPINDI:81' y_state(index) = 1; */
          y_state_init[idx - 1] = 1.0;
        } else {
          /* 'QPINDI:82' else */
          /* 'QPINDI:83' y_state(index-4) = -1; */
          y_state_init[idx - 5] = -1.0;
        }
      }

      H_tmp_tmp_tmp++;
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
  const struct_dgMNxGftVPGZGI2uTXhtAF *b_par, real_T M_uvr[3])
{
  real_T z1;
  real_T Fset_idx_1;
  real_T Fset_idx_0;
  real_T Fset_idx_2;

  /* 'INDIMomentGen:3' if isempty(omegaDot) */
  if (!URControl_DW.omegaDot_not_empty_e) {
    /* 'INDIMomentGen:3' omegaDot = SimpleDerivative(URpar.rate_MINDI_derFilterT, [0,0,0], 300, -300); */
    /* 'SimpleDerivative:12' obj.filterHandle = LPFilter(filterT, initValue, maxLim, minLim); */
    /* 'LPFilter:14' obj.filterT = filterT; */
    URControl_DW.omegaDot_h.filterHandle.filterT = URpar_rate_MINDI_derFilterT;

    /* 'LPFilter:15' obj.value = initValue; */
    /* 'LPFilter:16' obj.maxLim = maxLim; */
    URControl_DW.omegaDot_h.filterHandle.maxLim = 300.0;

    /* 'LPFilter:17' obj.minLim = minLim; */
    URControl_DW.omegaDot_h.filterHandle.minLim = -300.0;

    /* 'SimpleDerivative:13' obj.prevValue = initValue; */
    URControl_DW.omegaDot_h.filterHandle.value[0] = 0.0;
    URControl_DW.omegaDot_h.prevValue[0] = 0.0;
    URControl_DW.omegaDot_h.filterHandle.value[1] = 0.0;
    URControl_DW.omegaDot_h.prevValue[1] = 0.0;
    URControl_DW.omegaDot_h.filterHandle.value[2] = 0.0;
    URControl_DW.omegaDot_h.prevValue[2] = 0.0;
    URControl_DW.omegaDot_not_empty_e = true;
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
  /* 'INDIMomentGen:9' Fset = wRotorFilter.value.^2*URpar.k0; */
  URControl_DW.wRotorFilter.value[0] = (1.0 - URControl_DW.wRotorFilter.filterT)
    * state_wRotor[0] + URControl_DW.wRotorFilter.value[0] *
    URControl_DW.wRotorFilter.filterT;
  if ((URControl_DW.wRotorFilter.value[0] < URControl_DW.wRotorFilter.maxLim) ||
      rtIsNaN(URControl_DW.wRotorFilter.maxLim)) {
    z1 = URControl_DW.wRotorFilter.value[0];
  } else {
    z1 = URControl_DW.wRotorFilter.maxLim;
  }

  if ((z1 > URControl_DW.wRotorFilter.minLim) || rtIsNaN
      (URControl_DW.wRotorFilter.minLim)) {
    URControl_DW.wRotorFilter.value[0] = z1;
  } else {
    URControl_DW.wRotorFilter.value[0] = URControl_DW.wRotorFilter.minLim;
  }

  Fset_idx_0 = URControl_DW.wRotorFilter.value[0] *
    URControl_DW.wRotorFilter.value[0] * URpar_k0;
  URControl_DW.wRotorFilter.value[1] = (1.0 - URControl_DW.wRotorFilter.filterT)
    * state_wRotor[1] + URControl_DW.wRotorFilter.value[1] *
    URControl_DW.wRotorFilter.filterT;
  if ((URControl_DW.wRotorFilter.value[1] < URControl_DW.wRotorFilter.maxLim) ||
      rtIsNaN(URControl_DW.wRotorFilter.maxLim)) {
    z1 = URControl_DW.wRotorFilter.value[1];
  } else {
    z1 = URControl_DW.wRotorFilter.maxLim;
  }

  if ((z1 > URControl_DW.wRotorFilter.minLim) || rtIsNaN
      (URControl_DW.wRotorFilter.minLim)) {
    URControl_DW.wRotorFilter.value[1] = z1;
  } else {
    URControl_DW.wRotorFilter.value[1] = URControl_DW.wRotorFilter.minLim;
  }

  Fset_idx_1 = URControl_DW.wRotorFilter.value[1] *
    URControl_DW.wRotorFilter.value[1] * URpar_k0;
  URControl_DW.wRotorFilter.value[2] = (1.0 - URControl_DW.wRotorFilter.filterT)
    * state_wRotor[2] + URControl_DW.wRotorFilter.value[2] *
    URControl_DW.wRotorFilter.filterT;
  if ((URControl_DW.wRotorFilter.value[2] < URControl_DW.wRotorFilter.maxLim) ||
      rtIsNaN(URControl_DW.wRotorFilter.maxLim)) {
    z1 = URControl_DW.wRotorFilter.value[2];
  } else {
    z1 = URControl_DW.wRotorFilter.maxLim;
  }

  if ((z1 > URControl_DW.wRotorFilter.minLim) || rtIsNaN
      (URControl_DW.wRotorFilter.minLim)) {
    URControl_DW.wRotorFilter.value[2] = z1;
  } else {
    URControl_DW.wRotorFilter.value[2] = URControl_DW.wRotorFilter.minLim;
  }

  Fset_idx_2 = URControl_DW.wRotorFilter.value[2] *
    URControl_DW.wRotorFilter.value[2] * URpar_k0;
  URControl_DW.wRotorFilter.value[3] = (1.0 - URControl_DW.wRotorFilter.filterT)
    * state_wRotor[3] + URControl_DW.wRotorFilter.value[3] *
    URControl_DW.wRotorFilter.filterT;
  if ((URControl_DW.wRotorFilter.value[3] < URControl_DW.wRotorFilter.maxLim) ||
      rtIsNaN(URControl_DW.wRotorFilter.maxLim)) {
    z1 = URControl_DW.wRotorFilter.value[3];
  } else {
    z1 = URControl_DW.wRotorFilter.maxLim;
  }

  if ((z1 > URControl_DW.wRotorFilter.minLim) || rtIsNaN
      (URControl_DW.wRotorFilter.minLim)) {
    URControl_DW.wRotorFilter.value[3] = z1;
  } else {
    URControl_DW.wRotorFilter.value[3] = URControl_DW.wRotorFilter.minLim;
  }

  z1 = URControl_DW.wRotorFilter.value[3] * URControl_DW.wRotorFilter.value[3] *
    URpar_k0;

  /* 'INDIMomentGen:11' M_uvr_prev = zeros(3,1); */
  /* 'INDIMomentGen:12' M_uvr_prev(1) = (Fset(4) - Fset(2))*URpar.s; */
  M_uvr[0] = (z1 - Fset_idx_1) * URpar_s;

  /* 'INDIMomentGen:13' M_uvr_prev(2) = (Fset(1) - Fset(3))*URpar.s; */
  M_uvr[1] = (Fset_idx_0 - Fset_idx_2) * URpar_s;

  /* 'INDIMomentGen:14' M_uvr_prev(3) = (Fset(1) - Fset(2) + Fset(3) - Fset(4))*URpar.t0/URpar.k0; */
  M_uvr[2] = (((Fset_idx_0 - Fset_idx_1) + Fset_idx_2) - z1) * URpar_t0 /
    URpar_k0;

  /* 'INDIMomentGen:17' error1 = uvr_des' - state.omegafUV; */
  /* 'INDIMomentGen:19' uvrDot_des = error1.*URpar.rate_MINDI_rateDotKp; */
  Fset_idx_0 = (uvr_des[0] - state_omegafUV[0]) * URpar_rate_MINDI_rateDotKp[0];
  Fset_idx_1 = (uvr_des[1] - state_omegafUV[1]) * URpar_rate_MINDI_rateDotKp[1];
  Fset_idx_2 = (uvr_des[2] - state_omegafUV[2]) * URpar_rate_MINDI_rateDotKp[2];

  /* 'INDIMomentGen:22' omegaDot.updateFilterT(URpar.rate_MINDI_derFilterT); */
  /* 'SimpleDerivative:23' obj.filterHandle.updateFilterT(filterT); */
  /* 'LPFilter:26' obj.filterT = filterT; */
  URControl_DW.omegaDot_h.filterHandle.filterT = URpar_rate_MINDI_derFilterT;

  /* 'INDIMomentGen:23' omegaDot.update(state.omegaUV, 1/par.freq); */
  URContr_SimpleDerivative_update(&URControl_DW.omegaDot_h, state_omegaUV, 1.0 /
    b_par->freq);

  /* 'INDIMomentGen:25' error2 = uvrDot_des - omegaDot.derValue; */
  /* 'INDIMomentGen:27' dM = error2.*URpar.rate_MINDI_MKp*1e-4; */
  /* 'INDIMomentGen:29' M_uvr = M_uvr_prev + dM'; */
  /* 'INDIMomentGen:31' daq.uvrDot_des = uvrDot_des; */
  /* 'INDIMomentGen:32' daq.omegaDot = omegaDot.derValue; */
  /* 'INDIMomentGen:33' daq.dM = dM; */
  z1 = (Fset_idx_0 - URControl_DW.omegaDot_h.derValue[0]) *
    URpar_rate_MINDI_MKp[0] * 0.0001;
  daq->uvrDot_des[0] = Fset_idx_0;
  daq->omegaDot[0] = URControl_DW.omegaDot_h.derValue[0];
  daq->dM[0] = z1;
  M_uvr[0] += z1;
  z1 = (Fset_idx_1 - URControl_DW.omegaDot_h.derValue[1]) *
    URpar_rate_MINDI_MKp[1] * 0.0001;
  daq->uvrDot_des[1] = Fset_idx_1;
  daq->omegaDot[1] = URControl_DW.omegaDot_h.derValue[1];
  daq->dM[1] = z1;
  M_uvr[1] += z1;
  z1 = (Fset_idx_2 - URControl_DW.omegaDot_h.derValue[2]) *
    URpar_rate_MINDI_MKp[2] * 0.0001;
  daq->uvrDot_des[2] = Fset_idx_2;
  daq->omegaDot[2] = URControl_DW.omegaDot_h.derValue[2];
  daq->dM[2] = z1;
  M_uvr[2] += z1;
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
  URpar_rate_MPID_precGain, const struct_dgMNxGftVPGZGI2uTXhtAF *b_par, real_T
  M_uvr[3])
{
  real_T intLim;
  real_T uvr_des_0[3];
  real_T errorf;
  real_T uvr_des_dot;
  real_T errorf_idx_0;
  real_T errorf_idx_1;
  boolean_T tmp;
  boolean_T tmp_0;

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
  /* 'PIDMomentGen:16' errorD.filterHandle.filterT = URpar.rate_MPID_derFilterT; */
  URControl_DW.errorD.filterHandle.filterT = URpar_rate_MPID_derFilterT;

  /* 'PIDMomentGen:17' errorD.update(error,1/par.freq) */
  errorf = uvr_des[0] - state_omegafUV[0];
  URControl_DW.errorInt[0] += errorf / b_par->freq;
  tmp = rtIsNaN(intLim);
  if ((URControl_DW.errorInt[0] < intLim) || tmp) {
    uvr_des_dot = URControl_DW.errorInt[0];
  } else {
    uvr_des_dot = intLim;
  }

  tmp_0 = rtIsNaN(-intLim);
  if ((uvr_des_dot > -intLim) || tmp_0) {
    URControl_DW.errorInt[0] = uvr_des_dot;
  } else {
    URControl_DW.errorInt[0] = -intLim;
  }

  uvr_des_0[0] = uvr_des[0] - state_omegaUV[0];
  errorf_idx_0 = errorf;
  errorf = uvr_des[1] - state_omegafUV[1];
  URControl_DW.errorInt[1] += errorf / b_par->freq;
  if ((URControl_DW.errorInt[1] < intLim) || tmp) {
    uvr_des_dot = URControl_DW.errorInt[1];
  } else {
    uvr_des_dot = intLim;
  }

  if ((uvr_des_dot > -intLim) || tmp_0) {
    URControl_DW.errorInt[1] = uvr_des_dot;
  } else {
    URControl_DW.errorInt[1] = -intLim;
  }

  uvr_des_0[1] = uvr_des[1] - state_omegaUV[1];
  errorf_idx_1 = errorf;
  errorf = uvr_des[2] - state_omegafUV[2];
  URControl_DW.errorInt[2] += errorf / b_par->freq;
  if ((URControl_DW.errorInt[2] < intLim) || tmp) {
    uvr_des_dot = URControl_DW.errorInt[2];
  } else {
    uvr_des_dot = intLim;
  }

  if ((uvr_des_dot > -intLim) || tmp_0) {
    URControl_DW.errorInt[2] = uvr_des_dot;
  } else {
    URControl_DW.errorInt[2] = -intLim;
  }

  uvr_des_0[2] = uvr_des[2] - state_omegaUV[2];
  URContr_SimpleDerivative_update(&URControl_DW.errorD, uvr_des_0, 1.0 /
    b_par->freq);

  /* 'PIDMomentGen:19' uvrDer.filterHandle.filterT = URpar.rate_MPID_uvrdesderFilterT; */
  URControl_DW.uvrDer.filterHandle.filterT = URpar_rate_MPID_uvrdesderFilter;

  /* 'PIDMomentGen:20' uvrDer.update(uvr_des', 1/par.freq); */
  URContr_SimpleDerivative_update(&URControl_DW.uvrDer, uvr_des, 1.0 /
    b_par->freq);

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
  gainStruct_MzGain, real_T y_state_init[4], const struct_dgMNxGftVPGZGI2uTXhtAF
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
  int8_T result_data[96];
  boolean_T empty_non_axis_sizes;
  int32_T d_result;
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
  c_idx_2 = c_idx_1 * gainStruct_MvGain;
  H[0] = (((c_idx_2 + c_idx_0 * c_idx_0 * gainStruct_MzGain) +
           gainStruct_FtotGain) + gainStruct_FGain / count) * 2.0;

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
  H[10] = (((c_idx_2 + c_idx_0 * c_idx_0 * gainStruct_MzGain) +
            gainStruct_FtotGain) + gainStruct_FGain / z1_idx_2) * 2.0;

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
  while ((!exitg1) && (iter <= static_cast<int32_T>(URpar_rate_maxIter) - 1)) {
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
    idx = 0;
    for (xy_size = 0; xy_size < 8; xy_size++) {
      if (indices[xy_size]) {
        idx++;
      }
    }

    f_size_idx_1 = idx;
    idx = 0;
    for (xy_size = 0; xy_size < 8; xy_size++) {
      if (indices[xy_size]) {
        f_data[idx] = static_cast<int8_T>((xy_size + 1));
        idx++;
      }
    }

    for (xy_size = 0; xy_size < f_size_idx_1; xy_size++) {
      A_eq_data[xy_size] = A[f_data[xy_size] - 1];
    }

    for (xy_size = 0; xy_size < f_size_idx_1; xy_size++) {
      A_eq_data[xy_size + f_size_idx_1] = A[f_data[xy_size] + 7];
    }

    for (xy_size = 0; xy_size < f_size_idx_1; xy_size++) {
      A_eq_data[xy_size + (f_size_idx_1 << 1)] = A[f_data[xy_size] + 15];
    }

    for (xy_size = 0; xy_size < f_size_idx_1; xy_size++) {
      A_eq_data[xy_size + f_size_idx_1 * 3] = A[f_data[xy_size] + 23];
    }

    /* 'controlAllocQPQuick:85' AT_eq = transpose(A_eq); */
    for (xy_size = 0; xy_size < f_size_idx_1; xy_size++) {
      AT_eq_data_tmp = xy_size << 2;
      AT_eq_data[AT_eq_data_tmp] = A_eq_data[xy_size];
      AT_eq_data[1 + AT_eq_data_tmp] = A_eq_data[xy_size + f_size_idx_1];
      AT_eq_data[2 + AT_eq_data_tmp] = A_eq_data[(f_size_idx_1 << 1) + xy_size];
      AT_eq_data[3 + AT_eq_data_tmp] = A_eq_data[f_size_idx_1 * 3 + xy_size];
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
      l1_idx_1 = static_cast<int8_T>(f_size_idx_1);

      /* 'controlAllocQPQuick:92' l2=size(A_eq); */
      l2_idx_0 = static_cast<int8_T>(f_size_idx_1);
    }

    /* 'controlAllocQPQuick:96' D = [H,AT_eq;A_eq,zeros(l2(1),l1(2))]; */
    if (f_size_idx_1 != 0) {
      idx = f_size_idx_1;
    } else if ((l2_idx_0 != 0) && (l1_idx_1 != 0)) {
      idx = l2_idx_0;
    } else {
      idx = 0;
      if (l2_idx_0 > 0) {
        idx = l2_idx_0;
      }
    }

    empty_non_axis_sizes = (idx == 0);
    if (empty_non_axis_sizes || (f_size_idx_1 != 0)) {
      xy_size = 4;
    } else {
      xy_size = 0;
    }

    if (empty_non_axis_sizes || ((l2_idx_0 != 0) && (l1_idx_1 != 0))) {
      d_result = l1_idx_1;
    } else {
      d_result = 0;
    }

    AT_eq_data_tmp = idx;
    result_size_idx_1 = xy_size + d_result;
    loop_ub = idx * xy_size;
    xy_size = idx * d_result - 1;
    if (0 <= loop_ub - 1) {
      memcpy(&result_data[0], &A_eq_data[0], loop_ub * sizeof(int8_T));
    }

    if (0 <= xy_size) {
      memset(&result_data[loop_ub], 0, (((xy_size + loop_ub) - loop_ub) + 1) *
             sizeof(int8_T));
    }

    d_result = 4 + f_size_idx_1;
    loop_ub = (f_size_idx_1 << 2) - 1;
    memcpy(&varargin_1_data[0], &H[0], sizeof(real_T) << 4U);
    for (xy_size = 0; xy_size <= loop_ub; xy_size++) {
      varargin_1_data[xy_size + 16] = AT_eq_data[xy_size];
    }

    /* 'controlAllocQPQuick:97' d = [-c;b_eq]; */
    idx = 0;
    for (xy_size = 0; xy_size < 8; xy_size++) {
      if (indices[xy_size]) {
        idx++;
      }
    }

    f_size_idx_1 = idx;
    idx = 0;
    for (xy_size = 0; xy_size < 8; xy_size++) {
      if (indices[xy_size]) {
        g_data[idx] = static_cast<int8_T>((xy_size + 1));
        idx++;
      }
    }

    /* 'controlAllocQPQuick:98' xy = D\d; */
    if ((AT_eq_data_tmp == 0) || (result_size_idx_1 == 0)) {
      AT_eq_data_tmp = 0;
    }

    varargin_1_size[0] = 4 + AT_eq_data_tmp;
    varargin_1_size[1] = d_result;
    for (xy_size = 0; xy_size < d_result; xy_size++) {
      idx = xy_size << 2;
      result_size_idx_1 = varargin_1_size[0] * xy_size;
      varargin_1_data_0[result_size_idx_1] = varargin_1_data[idx];
      varargin_1_data_0[1 + result_size_idx_1] = varargin_1_data[idx + 1];
      varargin_1_data_0[2 + result_size_idx_1] = varargin_1_data[idx + 2];
      varargin_1_data_0[3 + result_size_idx_1] = varargin_1_data[idx + 3];
    }

    for (xy_size = 0; xy_size < d_result; xy_size++) {
      for (idx = 0; idx < AT_eq_data_tmp; idx++) {
        varargin_1_data_0[(idx + varargin_1_size[0] * xy_size) + 4] =
          result_data[AT_eq_data_tmp * xy_size + idx];
      }
    }

    idx = 4 + f_size_idx_1;
    c_data[0] = -c_idx_0;
    c_data[1] = -c_idx_1;
    c_data[2] = -c_idx_2;
    c_data[3] = -c_idx_3;
    for (xy_size = 0; xy_size < f_size_idx_1; xy_size++) {
      c_data[xy_size + 4] = b[g_data[xy_size] - 1];
    }

    URControl_mldivide(varargin_1_data_0, varargin_1_size, c_data, &idx, xy_data,
                       &xy_size);

    /* 'controlAllocQPQuick:99' x = xy(1:4); */
    x[0] = xy_data[0];
    x[1] = xy_data[1];
    x[2] = xy_data[2];
    x[3] = xy_data[3];

    /* 'controlAllocQPQuick:100' y = xy(5:length(xy)); */
    if (5 > xy_size) {
      idx = 0;
      xy_size = 0;
    } else {
      idx = 4;
    }

    AT_eq_data_tmp = xy_size - idx;
    for (xy_size = 0; xy_size < AT_eq_data_tmp; xy_size++) {
      c_data[xy_size] = xy_data[idx + xy_size];
    }

    if (0 <= AT_eq_data_tmp - 1) {
      memcpy(&xy_data[0], &c_data[0], AT_eq_data_tmp * sizeof(real_T));
    }

    /* 'controlAllocQPQuick:103' constraintError = A*x - b; */
    for (xy_size = 0; xy_size < 8; xy_size++) {
      constraintError[xy_size] = (((static_cast<real_T>(A[xy_size + 8]) * x[1] +
        static_cast<real_T>(A[xy_size]) * x[0]) + static_cast<real_T>(A[xy_size
        + 16]) * x[2]) + static_cast<real_T>(A[xy_size + 24]) * x[3]) -
        b[xy_size];
    }

    /* 'controlAllocQPQuick:105' constraintOK = (max(constraintError) <= 0.001); */
    tmp = rtIsNaN(constraintError[0]);
    if (!tmp) {
      idx = 1;
    } else {
      idx = 0;
      xy_size = 2;
      exitg2 = false;
      while ((!exitg2) && (xy_size < 9)) {
        if (!rtIsNaN(constraintError[xy_size - 1])) {
          idx = xy_size;
          exitg2 = true;
        } else {
          xy_size++;
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
    if (AT_eq_data_tmp == 0) {
      empty_non_axis_sizes = true;
    } else {
      if (AT_eq_data_tmp <= 2) {
        if (AT_eq_data_tmp == 1) {
          z1_idx_1 = xy_data[0];
        } else if ((xy_data[0] > xy_data[1]) || (rtIsNaN(xy_data[0]) &&
                    (!rtIsNaN(xy_data[1])))) {
          z1_idx_1 = xy_data[1];
        } else {
          z1_idx_1 = xy_data[0];
        }
      } else {
        if (!rtIsNaN(xy_data[0])) {
          idx = 1;
        } else {
          idx = 0;
          xy_size = 2;
          exitg2 = false;
          while ((!exitg2) && (xy_size <= AT_eq_data_tmp)) {
            if (!rtIsNaN(xy_data[xy_size - 1])) {
              idx = xy_size;
              exitg2 = true;
            } else {
              xy_size++;
            }
          }
        }

        if (idx == 0) {
          z1_idx_1 = xy_data[0];
        } else {
          z1_idx_1 = xy_data[idx - 1];
          while (idx + 1 <= AT_eq_data_tmp) {
            if (z1_idx_1 > xy_data[idx]) {
              z1_idx_1 = xy_data[idx];
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
      if (AT_eq_data_tmp == 0) {
        guard1 = true;
      } else {
        if (AT_eq_data_tmp <= 2) {
          if (AT_eq_data_tmp == 1) {
            count = xy_data[0];
          } else if ((xy_data[0] > xy_data[1]) || (rtIsNaN(xy_data[0]) &&
                      (!rtIsNaN(xy_data[1])))) {
            count = xy_data[1];
          } else {
            count = xy_data[0];
          }
        } else {
          if (!rtIsNaN(xy_data[0])) {
            idx = 1;
          } else {
            idx = 0;
            xy_size = 2;
            exitg2 = false;
            while ((!exitg2) && (xy_size <= AT_eq_data_tmp)) {
              if (!rtIsNaN(xy_data[xy_size - 1])) {
                idx = xy_size;
                exitg2 = true;
              } else {
                xy_size++;
              }
            }
          }

          if (idx == 0) {
            count = xy_data[0];
          } else {
            count = xy_data[idx - 1];
            while (idx + 1 <= AT_eq_data_tmp) {
              if (count > xy_data[idx]) {
                count = xy_data[idx];
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
          if (AT_eq_data_tmp <= 2) {
            if (AT_eq_data_tmp == 1) {
              idx = 1;
            } else if ((xy_data[0] > xy_data[1]) || (rtIsNaN(xy_data[0]) &&
                        (!rtIsNaN(xy_data[1])))) {
              idx = 2;
            } else {
              idx = 1;
            }
          } else {
            if (!rtIsNaN(xy_data[0])) {
              idx = 1;
            } else {
              idx = 0;
              xy_size = 2;
              exitg2 = false;
              while ((!exitg2) && (xy_size <= AT_eq_data_tmp)) {
                if (!rtIsNaN(xy_data[xy_size - 1])) {
                  idx = xy_size;
                  exitg2 = true;
                } else {
                  xy_size++;
                }
              }
            }

            if (idx == 0) {
              idx = 1;
            } else {
              count = xy_data[idx - 1];
              for (xy_size = idx; xy_size < AT_eq_data_tmp; xy_size++) {
                if (count > xy_data[xy_size]) {
                  count = xy_data[xy_size];
                  idx = xy_size + 1;
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
          idx = 1;
        } else {
          idx = 0;
          xy_size = 2;
          exitg2 = false;
          while ((!exitg2) && (xy_size < 9)) {
            if (!rtIsNaN(constraintError[xy_size - 1])) {
              idx = xy_size;
              exitg2 = true;
            } else {
              xy_size++;
            }
          }
        }

        if (idx == 0) {
          idx = 1;
        } else {
          count = constraintError[idx - 1];
          for (xy_size = idx; xy_size + 1 < 9; xy_size++) {
            if (count < constraintError[xy_size]) {
              count = constraintError[xy_size];
              idx = xy_size + 1;
            }
          }
        }

        /* 'controlAllocQPQuick:114' ~ */
        /* 'controlAllocQPQuick:115' if index < 5 */
        if (idx < 5) {
          /* 'controlAllocQPQuick:116' y_state(index) = 1; */
          y_state_init[idx - 1] = 1.0;
        } else {
          /* 'controlAllocQPQuick:117' else */
          /* 'controlAllocQPQuick:118' y_state(index-4) = -1; */
          y_state_init[idx - 5] = -1.0;
        }
      }

      iter++;
    }
  }

  /* 'controlAllocQPQuick:136' optimal = solution; */
  *optimal = solution;
}

/*
 * Function for MATLAB Function: '<S8>/control allocator'
 * function [w_cmd]  = URINDI_allocator(act_fail_id, Omega_f_dot, accel_z_f, v, G, G_kal, w_f, par)
 */
void URControlModelClass::URControl_URINDI_allocator(real_T act_fail_id, const
  real_T Omega_f_dot[3], real_T accel_z_f, const real_T v[4], real_T G[32],
  const real_T w_f[4], const struct_dgMNxGftVPGZGI2uTXhtAF *b_par, real_T w_cmd
  [4])
{
  real_T G1[16];
  boolean_T fail_flag;
  real32_T fail_id_vec_data[2];
  real_T G_pinv[16];
  real_T du[4];
  int8_T i_up_data[4];
  boolean_T tf;
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
  int32_T G_tmp;
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
    G1[1 + (b_ii << 2)] = G[idx + 1];
    G1[2 + (b_ii << 2)] = G[idx + 2];
    G1[3 + (b_ii << 2)] = G[idx + 3];
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
      if (std::abs(static_cast<real_T>(idx) - act_fail_id) < eps_HLXrD8YB
          (static_cast<real_T>(idx) / 2.0)) {
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
      fail_id_vec_data[0] = static_cast<real32_T>(act_fail_id);
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
      idx = (static_cast<int32_T>(fail_id_vec_data[b_ii]) - 1) << 2;
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
    pinv_sd18IsCR(G1, G_pinv);

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
      G_tmp = idx + 1;
      G1[G_tmp] = G[fail_id_vec_size_idx_1 + 1] + G[G_tmp];
      G_tmp = idx + 2;
      G1[G_tmp] = G[fail_id_vec_size_idx_1 + 2] + G[G_tmp];
      idx += 3;
      G1[idx] = G[fail_id_vec_size_idx_1 + 3] + G[idx];
    }

    pinv_sd18IsCR(G1, G_pinv);

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
      ii_data[idx - 1] = static_cast<int8_T>((b_ii + 1));
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
      ii_data[idx - 1] = static_cast<int8_T>((b_ii + 1));
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
    G_tmp = i_up_data[b_ii] - 1;
    du[G_tmp] = b_par->w_max - w_f[G_tmp];
  }

  /* 'URINDI_allocator:76' du(i_down) =  w_min - w_f(i_down); */
  for (b_ii = 0; b_ii < idx; b_ii++) {
    G_tmp = ii_data[b_ii] - 1;
    du[G_tmp] = b_par->w_min - w_f[G_tmp];
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
  real_T rtb_accs_filter[3];
  real_T rtb_n_des[3];
  real_T rtb_DiscreteStateSpace[3];
  real_T errorSum;
  real_T R_IB[9];
  real_T FMin[4];
  boolean_T rEQ0;
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

  real_T velTarget[3];
  real_T b_z1[2];
  real_T wMax[4];
  real_T K[16];
  real_T y[7];
  real_T dHdx[70];
  real_T qconj[4];
  real_T gain[70];
  static const int8_T b_0[10] = { 0, 0, 0, 0, 0, 0, 1, 0, 0, 0 };

  static const int8_T c[10] = { 0, 0, 0, 0, 0, 0, 0, 1, 0, 0 };

  static const int8_T d[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 };

  static const int8_T e[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 };

  real_T Jacobian[100];
  real_T rtb_att[3];
  real_T rtb_TmpSignalConversionAtSFun_h[4];
  int32_T i;
  real_T rtb_u2[3];
  real_T rtb_enableMeas;
  real_T rtb_DataStoreRead_k[10];
  real_T rtb_Product2;
  real_T rtb_Product1;
  real_T rtb_fcn5;
  boolean_T rtb_Compare_j;
  real_T rtb_xNew[10];
  real_T rtb_TmpSignalConversionAtSFunct[6];
  real_T wRotorSet[4];
  real_T tmp[16];
  real_T tmp_0[32];
  real_T rtb_sincos_o1_0[3];
  real_T dHdx_0[49];
  real_T rtb_TmpSignalConversionAtSFun_j[4];
  real_T rtb_TmpSignalConversionAtSFun_0[4];
  real_T rtb_pos_0[7];
  real_T dHdx_1[70];
  int16_T tmp_1[16];
  real_T Jacobian_0[100];
  uint32_T tmp_2;
  real_T dummy_idx_1;
  real_T dummy_idx_0;
  real_T rtb_sincos_o1_idx_1;
  real_T rtb_sincos_o1_idx_0;
  boolean_T tmp_3;
  real_T rtb_Product1_tmp;
  boolean_T tmp_4;
  boolean_T tmp_5;
  boolean_T tmp_6;

  /* DataTypeConversion: '<Root>/Data Type Conversion1' incorporates:
   *  Inport: '<Root>/accs'
   */
  rtb_acc[0] = URControl_U.accs[0];

  /* DataTypeConversion: '<Root>/Data Type Conversion5' incorporates:
   *  Inport: '<Root>/rates'
   */
  velTarget[0] = URControl_U.rates[0];

  /* DataTypeConversion: '<Root>/Data Type Conversion1' incorporates:
   *  Inport: '<Root>/accs'
   */
  rtb_acc[1] = URControl_U.accs[1];

  /* DataTypeConversion: '<Root>/Data Type Conversion5' incorporates:
   *  Inport: '<Root>/rates'
   */
  velTarget[1] = URControl_U.rates[1];

  /* DataTypeConversion: '<Root>/Data Type Conversion1' incorporates:
   *  Inport: '<Root>/accs'
   */
  rtb_acc[2] = URControl_U.accs[2];

  /* DataTypeConversion: '<Root>/Data Type Conversion5' incorporates:
   *  Inport: '<Root>/rates'
   */
  velTarget[2] = URControl_U.rates[2];

  /* Gain: '<S30>/1//2' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion6'
   *  Inport: '<Root>/att'
   */
  rtb_enableMeas = 0.5 * URControl_U.att[2];

  /* Trigonometry: '<S30>/sincos' */
  rtb_DiscreteStateSpace[0] = std::cos(rtb_enableMeas);

  /* Fcn: '<S30>/q0' incorporates:
   *  Trigonometry: '<S30>/sincos'
   */
  rtb_sincos_o1_idx_0 = std::sin(rtb_enableMeas);

  /* Gain: '<S30>/1//2' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion6'
   *  Inport: '<Root>/att'
   */
  rtb_enableMeas = 0.5 * URControl_U.att[1];

  /* Trigonometry: '<S30>/sincos' */
  rtb_DiscreteStateSpace[1] = std::cos(rtb_enableMeas);

  /* Fcn: '<S30>/q0' incorporates:
   *  Trigonometry: '<S30>/sincos'
   */
  rtb_sincos_o1_idx_1 = std::sin(rtb_enableMeas);

  /* Gain: '<S30>/1//2' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion6'
   *  Inport: '<Root>/att'
   */
  rtb_enableMeas = 0.5 * URControl_U.att[0];

  /* Trigonometry: '<S30>/sincos' */
  rtb_Product1 = std::sin(rtb_enableMeas);
  rtb_DiscreteStateSpace[2] = std::cos(rtb_enableMeas);

  /* Fcn: '<S30>/q0' incorporates:
   *  Fcn: '<S30>/q1'
   */
  rtb_enableMeas = rtb_DiscreteStateSpace[0] * rtb_DiscreteStateSpace[1];

  /* SignalConversion: '<S28>/TmpSignal ConversionAt SFunction Inport1' incorporates:
   *  Fcn: '<S30>/q0'
   *  Fcn: '<S30>/q1'
   *  MATLAB Function: '<S25>/MATLAB Function'
   */
  rtb_TmpSignalConversionAtSFun_h[0] = rtb_enableMeas * rtb_DiscreteStateSpace[2]
    + rtb_sincos_o1_idx_0 * rtb_sincos_o1_idx_1 * rtb_Product1;
  rtb_TmpSignalConversionAtSFun_h[1] = rtb_enableMeas * rtb_Product1 -
    rtb_sincos_o1_idx_0 * rtb_sincos_o1_idx_1 * rtb_DiscreteStateSpace[2];

  /* Fcn: '<S30>/q2' incorporates:
   *  Fcn: '<S30>/q1'
   *  Fcn: '<S30>/q3'
   */
  rtb_enableMeas = rtb_sincos_o1_idx_0 * rtb_DiscreteStateSpace[1];
  errorSum = rtb_DiscreteStateSpace[0] * rtb_sincos_o1_idx_1;

  /* SignalConversion: '<S28>/TmpSignal ConversionAt SFunction Inport1' incorporates:
   *  Fcn: '<S30>/q2'
   *  Fcn: '<S30>/q3'
   *  MATLAB Function: '<S25>/MATLAB Function'
   */
  rtb_TmpSignalConversionAtSFun_h[2] = errorSum * rtb_DiscreteStateSpace[2] +
    rtb_enableMeas * rtb_Product1;
  rtb_TmpSignalConversionAtSFun_h[3] = rtb_enableMeas * rtb_DiscreteStateSpace[2]
    - errorSum * rtb_Product1;

  /* MATLAB Function: '<S25>/MATLAB Function' incorporates:
   *  Memory: '<S25>/Memory'
   */
  /* :  error1 = norm(qMeas - qState); */
  /* :  error2 = norm(-qMeas - qState); */
  /* :  if error1 > error2 */
  rtb_TmpSignalConversionAtSFun_j[0] = rtb_TmpSignalConversionAtSFun_h[0] -
    URControl_DW.Memory_PreviousInput[0];
  rtb_TmpSignalConversionAtSFun_0[0] = -rtb_TmpSignalConversionAtSFun_h[0] -
    URControl_DW.Memory_PreviousInput[0];
  rtb_TmpSignalConversionAtSFun_j[1] = rtb_TmpSignalConversionAtSFun_h[1] -
    URControl_DW.Memory_PreviousInput[1];
  rtb_TmpSignalConversionAtSFun_0[1] = -rtb_TmpSignalConversionAtSFun_h[1] -
    URControl_DW.Memory_PreviousInput[1];
  rtb_TmpSignalConversionAtSFun_j[2] = rtb_TmpSignalConversionAtSFun_h[2] -
    URControl_DW.Memory_PreviousInput[2];
  rtb_TmpSignalConversionAtSFun_0[2] = -rtb_TmpSignalConversionAtSFun_h[2] -
    URControl_DW.Memory_PreviousInput[2];
  rtb_TmpSignalConversionAtSFun_j[3] = rtb_TmpSignalConversionAtSFun_h[3] -
    URControl_DW.Memory_PreviousInput[3];
  rtb_TmpSignalConversionAtSFun_0[3] = -rtb_TmpSignalConversionAtSFun_h[3] -
    URControl_DW.Memory_PreviousInput[3];
  if (norm_wXO8gvHp(rtb_TmpSignalConversionAtSFun_j) > norm_wXO8gvHp
      (rtb_TmpSignalConversionAtSFun_0)) {
    /* :  q = -qMeas; */
    rtb_TmpSignalConversionAtSFun_h[0] = -rtb_TmpSignalConversionAtSFun_h[0];
    rtb_TmpSignalConversionAtSFun_h[1] = -rtb_TmpSignalConversionAtSFun_h[1];
    rtb_TmpSignalConversionAtSFun_h[2] = -rtb_TmpSignalConversionAtSFun_h[2];
    rtb_TmpSignalConversionAtSFun_h[3] = -rtb_TmpSignalConversionAtSFun_h[3];
  } else {
    /* :  else */
    /* :  q = qMeas; */
  }

  /* MATLAB Function: '<S25>/enableMeas' incorporates:
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

  /* End of MATLAB Function: '<S25>/enableMeas' */

  /* Outputs for Enabled SubSystem: '<S27>/Correct1' incorporates:
   *  EnablePort: '<S32>/Enable'
   */
  /* DataTypeConversion: '<S27>/DataTypeConversion_Enable1' */
  if (rtb_enableMeas != 0.0) {
    /* MATLAB Function: '<S32>/Correct' incorporates:
     *  DataStoreRead: '<S32>/Data Store ReadX'
     */
    /* :  if pM.IsSimulinkFcn */
    /* :  else */
    /* :  MeasurementFcnH = str2func(pM.FcnName); */
    /* :  if pM.HasJacobian */
    /* :  MeasurementJacobianFcnH = str2func(pM.JacobianFcnName); */
    /* :  switch pM.NumberOfExtraArgumentInports */
    /* :  case 1 */
    /* :  extraArgs = {uMeas}; */
    /* :  if pM.HasAdditiveNoise */
    /* :  ekfCorrector = matlabshared.tracking.internal.EKFCorrectorAdditive(); */
    /* :  xNew = zeros(size(x),'like',x); */
    /* :  [xNew,P] = ekfCorrector.correct(... */
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
    errorSum = (0.0 * URControl_DW.x[7] + 0.0 * URControl_DW.x[8]) + 0.0 *
      URControl_DW.x[9];
    dHdx[49] = errorSum;
    rtb_fcn5 = (0.0 * URControl_DW.x[7] - 0.0 * URControl_DW.x[8]) + 0.0 *
      URControl_DW.x[6];
    dHdx[56] = rtb_fcn5;
    dHdx[63] = (0.0 * URControl_DW.x[7] - 0.0 * URControl_DW.x[6]) - 0.0 *
      URControl_DW.x[9];
    dHdx[1] = 0.0;
    dHdx[8] = 1.0;
    dHdx[15] = 0.0;
    dHdx[22] = 0.0;
    dHdx[29] = 0.0;
    dHdx[36] = 0.0;
    rtb_Product1 = (0.0 * URControl_DW.x[9] + 0.0 * URControl_DW.x[6]) - 0.0 *
      URControl_DW.x[7];
    dHdx[43] = rtb_Product1;
    dHdx[50] = (0.0 * URControl_DW.x[8] - 0.0 * URControl_DW.x[7]) - 0.0 *
      URControl_DW.x[6];
    dHdx[57] = errorSum;
    dHdx[64] = rtb_enableMeas;
    dHdx[2] = 0.0;
    dHdx[9] = 0.0;
    dHdx[16] = 1.0;
    dHdx[23] = 0.0;
    dHdx[30] = 0.0;
    dHdx[37] = 0.0;
    dHdx[44] = rtb_fcn5;
    dHdx[51] = rtb_Product1;
    dHdx[58] = (0.0 * URControl_DW.x[9] - 0.0 * URControl_DW.x[6]) - 0.0 *
      URControl_DW.x[8];
    dHdx[65] = errorSum;
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
    y[0] = ((FMin[0] * -URControl_DW.x[7] + URControl_DW.x[6] * FMin[1]) +
            (FMin[2] * -URControl_DW.x[9] - FMin[3] * -URControl_DW.x[8])) +
      URControl_DW.x[0];

    /* 'ekf_meas_func:18' y(2) = posy + dPos(2); */
    y[1] = ((FMin[0] * -URControl_DW.x[8] + URControl_DW.x[6] * FMin[2]) +
            (FMin[3] * -URControl_DW.x[7] - FMin[1] * -URControl_DW.x[9])) +
      URControl_DW.x[1];

    /* 'ekf_meas_func:19' y(3) = posz + dPos(3); */
    y[2] = ((FMin[0] * -URControl_DW.x[9] + URControl_DW.x[6] * FMin[3]) +
            (FMin[1] * -URControl_DW.x[8] - FMin[2] * -URControl_DW.x[7])) +
      URControl_DW.x[2];

    /* 'ekf_meas_func:21' y(4:7) = q; */
    y[3] = URControl_DW.x[6];
    y[4] = URControl_DW.x[7];
    y[5] = URControl_DW.x[8];
    y[6] = URControl_DW.x[9];

    /* SignalConversion: '<S35>/TmpSignal ConversionAt SFunction Inport3' incorporates:
     *  DataTypeConversion: '<Root>/Data Type Conversion4'
     *  Inport: '<Root>/pos'
     *  MATLAB Function: '<S32>/Correct'
     */
    rtb_pos_0[0] = URControl_U.pos[0];
    rtb_pos_0[1] = URControl_U.pos[1];
    rtb_pos_0[2] = URControl_U.pos[2];
    rtb_pos_0[3] = rtb_TmpSignalConversionAtSFun_h[0];
    rtb_pos_0[4] = rtb_TmpSignalConversionAtSFun_h[1];
    rtb_pos_0[5] = rtb_TmpSignalConversionAtSFun_h[2];
    rtb_pos_0[6] = rtb_TmpSignalConversionAtSFun_h[3];

    /* MATLAB Function: '<S32>/Correct' incorporates:
     *  Constant: '<S27>/R1'
     *  DataStoreRead: '<S32>/Data Store ReadP'
     *  SignalConversion: '<S35>/TmpSignal ConversionAt SFunction Inport3'
     */
    for (r2 = 0; r2 < 7; r2++) {
      y[r2] = rtb_pos_0[r2] - y[r2];
    }

    for (r2 = 0; r2 < 10; r2++) {
      for (r3 = 0; r3 < 7; r3++) {
        rtemp = r2 + 10 * r3;
        gain[rtemp] = 0.0;
        for (i = 0; i < 10; i++) {
          gain[rtemp] += URControl_DW.P[10 * i + r2] * dHdx[7 * i + r3];
        }
      }
    }

    for (r2 = 0; r2 < 7; r2++) {
      for (r3 = 0; r3 < 10; r3++) {
        rtemp = r2 + 7 * r3;
        dHdx_1[rtemp] = 0.0;
        for (i = 0; i < 10; i++) {
          dHdx_1[rtemp] += dHdx[7 * i + r2] * URControl_DW.P[10 * r3 + i];
        }
      }

      for (r3 = 0; r3 < 7; r3++) {
        rtb_sincos_o1_idx_0 = 0.0;
        for (i = 0; i < 10; i++) {
          rtb_sincos_o1_idx_0 += dHdx_1[7 * i + r2] * dHdx[7 * i + r3];
        }

        rtemp = 7 * r3 + r2;
        dHdx_0[rtemp] = rtCP_R1_Value[rtemp] + rtb_sincos_o1_idx_0;
      }
    }

    mrdivide_helper_D6MymrEr(gain, dHdx_0);
    for (r2 = 0; r2 < 10; r2++) {
      for (r3 = 0; r3 < 10; r3++) {
        rtemp = r2 + 10 * r3;
        Jacobian[rtemp] = 0.0;
        for (i = 0; i < 7; i++) {
          Jacobian[rtemp] += gain[10 * i + r2] * dHdx[7 * r3 + i];
        }
      }

      for (r3 = 0; r3 < 10; r3++) {
        rtb_sincos_o1_idx_0 = 0.0;
        for (i = 0; i < 10; i++) {
          rtb_sincos_o1_idx_0 += Jacobian[10 * i + r2] * URControl_DW.P[10 * r3
            + i];
        }

        i = 10 * r3 + r2;
        Jacobian_0[i] = URControl_DW.P[i] - rtb_sincos_o1_idx_0;
      }
    }

    /* DataStoreWrite: '<S32>/Data Store WriteP' */
    memcpy(&URControl_DW.P[0], &Jacobian_0[0], 100U * sizeof(real_T));

    /* DataStoreWrite: '<S32>/Data Store WriteX' incorporates:
     *  DataStoreRead: '<S32>/Data Store ReadX'
     *  MATLAB Function: '<S32>/Correct'
     */
    for (r2 = 0; r2 < 10; r2++) {
      rtb_sincos_o1_idx_0 = 0.0;
      for (r3 = 0; r3 < 7; r3++) {
        rtb_sincos_o1_idx_0 += gain[10 * r3 + r2] * y[r3];
      }

      URControl_DW.x[r2] += rtb_sincos_o1_idx_0;
    }

    /* End of DataStoreWrite: '<S32>/Data Store WriteX' */
  }

  /* End of DataTypeConversion: '<S27>/DataTypeConversion_Enable1' */
  /* End of Outputs for SubSystem: '<S27>/Correct1' */

  /* Outputs for Atomic SubSystem: '<S27>/Output' */
  /* DataStoreRead: '<S33>/Data Store Read' */
  memcpy(&rtb_DataStoreRead_k[0], &URControl_DW.x[0], 10U * sizeof(real_T));

  /* Sqrt: '<S43>/sqrt' incorporates:
   *  DataStoreRead: '<S33>/Data Store Read'
   *  Product: '<S44>/Product'
   *  Product: '<S44>/Product1'
   *  Product: '<S44>/Product2'
   *  Product: '<S44>/Product3'
   *  Sum: '<S44>/Sum'
   */
  errorSum = std::sqrt(((URControl_DW.x[6] * URControl_DW.x[6] + URControl_DW.x
    [7] * URControl_DW.x[7]) + URControl_DW.x[8] * URControl_DW.x[8]) +
                       URControl_DW.x[9] * URControl_DW.x[9]);

  /* Product: '<S38>/Product' incorporates:
   *  DataStoreRead: '<S33>/Data Store Read'
   */
  rtb_fcn5 = URControl_DW.x[6] / errorSum;

  /* Product: '<S38>/Product1' incorporates:
   *  DataStoreRead: '<S33>/Data Store Read'
   */
  rtb_Product1 = URControl_DW.x[7] / errorSum;

  /* Product: '<S38>/Product2' incorporates:
   *  DataStoreRead: '<S33>/Data Store Read'
   */
  rtb_Product2 = URControl_DW.x[8] / errorSum;

  /* Product: '<S38>/Product3' incorporates:
   *  DataStoreRead: '<S33>/Data Store Read'
   */
  errorSum = URControl_DW.x[9] / errorSum;

  /* End of Outputs for SubSystem: '<S27>/Output' */

  /* Fcn: '<S29>/fcn2' incorporates:
   *  Fcn: '<S29>/fcn5'
   */
  dummy_idx_0 = rtb_fcn5 * rtb_fcn5;
  dummy_idx_1 = rtb_Product1 * rtb_Product1;
  Mv_min = rtb_Product2 * rtb_Product2;
  rtb_sincos_o1_idx_0 = errorSum * errorSum;

  /* Trigonometry: '<S37>/Trigonometric Function1' incorporates:
   *  Fcn: '<S29>/fcn1'
   *  Fcn: '<S29>/fcn2'
   */
  rtb_DiscreteStateSpace[0] = rt_atan2d_snf((rtb_Product1 * rtb_Product2 +
    rtb_fcn5 * errorSum) * 2.0, ((dummy_idx_0 + dummy_idx_1) - Mv_min) -
    rtb_sincos_o1_idx_0);

  /* Fcn: '<S29>/fcn3' */
  rtb_enableMeas = (rtb_Product1 * errorSum - rtb_fcn5 * rtb_Product2) * -2.0;

  /* If: '<S39>/If' incorporates:
   *  Constant: '<S40>/Constant'
   *  Constant: '<S41>/Constant'
   */
  if (rtb_enableMeas > 1.0) {
    /* Outputs for IfAction SubSystem: '<S39>/If Action Subsystem' incorporates:
     *  ActionPort: '<S40>/Action Port'
     */
    rtb_enableMeas = 1.0;

    /* End of Outputs for SubSystem: '<S39>/If Action Subsystem' */
  } else {
    if (rtb_enableMeas < -1.0) {
      /* Outputs for IfAction SubSystem: '<S39>/If Action Subsystem1' incorporates:
       *  ActionPort: '<S41>/Action Port'
       */
      rtb_enableMeas = 1.0;

      /* End of Outputs for SubSystem: '<S39>/If Action Subsystem1' */
    }
  }

  /* End of If: '<S39>/If' */

  /* Trigonometry: '<S37>/trigFcn' */
  rtb_DiscreteStateSpace[1] = std::asin(rtb_enableMeas);

  /* Trigonometry: '<S37>/Trigonometric Function3' incorporates:
   *  Fcn: '<S29>/fcn4'
   *  Fcn: '<S29>/fcn5'
   */
  rtb_DiscreteStateSpace[2] = rt_atan2d_snf((rtb_Product2 * errorSum + rtb_fcn5 *
    rtb_Product1) * 2.0, ((dummy_idx_0 - dummy_idx_1) - Mv_min) +
    rtb_sincos_o1_idx_0);

  /* DSPFlip: '<S25>/Flip1' */
  URControl_B.att_ekfquat[0] = rtb_DiscreteStateSpace[2];
  URControl_B.att_ekfquat[2] = rtb_DiscreteStateSpace[0];
  URControl_B.att_ekfquat[1] = rtb_DiscreteStateSpace[1];
  URControl_B.att_ekfquat[1] = rtb_DiscreteStateSpace[1];

  /* Delay: '<Root>/Delay' incorporates:
   *  Constant: '<Root>/delay'
   *  DataTypeConversion: '<Root>/Data Type Conversion10'
   *  Inport: '<Root>/fail_flag'
   */
  rtb_sincos_o1_idx_0 = std::floor(URControlParams.fail_delay * 500.0);
  if ((rtb_sincos_o1_idx_0 < 1.0) || rtIsNaN(rtb_sincos_o1_idx_0)) {
    rtb_enableMeas = URControl_U.fail_flag;
  } else {
    if (rtb_sincos_o1_idx_0 > 1000.0) {
      tmp_2 = 1000U;
    } else {
      if (rtIsNaN(rtb_sincos_o1_idx_0) || rtIsInf(rtb_sincos_o1_idx_0)) {
        rtb_sincos_o1_idx_0 = 0.0;
      } else {
        rtb_sincos_o1_idx_0 = std::fmod(rtb_sincos_o1_idx_0, 4.294967296E+9);
      }

      tmp_2 = rtb_sincos_o1_idx_0 < 0.0 ? static_cast<uint32_T>(-static_cast<
        int32_T>(static_cast<uint32_T>(-rtb_sincos_o1_idx_0))) : static_cast<
        uint32_T>(rtb_sincos_o1_idx_0);
    }

    rtb_enableMeas = URControl_DW.Delay_DSTATE[1000U - tmp_2];
  }

  /* End of Delay: '<Root>/Delay' */

  /* MATLAB Function: '<S7>/basic estimators' incorporates:
   *  BusCreator: '<S7>/BusConversion_InsertedFor_basic estimators_at_inport_0'
   *  DataStoreRead: '<S33>/Data Store Read'
   *  DataTypeConversion: '<Root>/Data Type Conversion2'
   *  DataTypeConversion: '<Root>/Data Type Conversion4'
   *  DataTypeConversion: '<Root>/Data Type Conversion5'
   *  DataTypeConversion: '<Root>/Data Type Conversion6'
   *  DataTypeConversion: '<Root>/Data Type Conversion7'
   *  Inport: '<Root>/att'
   *  Inport: '<Root>/esc_rpm'
   *  Inport: '<Root>/pos'
   *  Inport: '<Root>/rates'
   *  Inport: '<Root>/vel'
   *  MATLAB Function: '<S5>/Precession'
   */
  /* :  [State, DAQ] = UREstimators(sensors, State, DAQ, pos_ekf, vel_ekf, att_ekf, fail_id, par, URControlParams); */
  /* 'UREstimators:3' if isempty(omegaFilter) */
  if (!URControl_DW.omegaFilter_not_empty) {
    /* 'UREstimators:3' omegaFilter = LPFilter(URpar.est_omegaFilterT, [0,0,0], 40, -40); */
    rtb_sincos_o1_0[0] = 0.0;
    rtb_sincos_o1_0[1] = 0.0;
    rtb_sincos_o1_0[2] = 0.0;
    URControl_LPFilter_LPFilter(&URControl_DW.omegaFilter,
      URControlParams.est_omegaFilterT, rtb_sincos_o1_0, 40.0, -40.0);
    URControl_DW.omegaFilter_not_empty = true;
  }

  /* 'UREstimators:4' if isempty(posFilter) */
  if (!URControl_DW.posFilter_not_empty) {
    /* 'UREstimators:4' posFilter = LPFilter(URpar.est_posFilterT, [0,0,0], inf, -inf); */
    rtb_sincos_o1_0[0] = 0.0;
    rtb_sincos_o1_0[1] = 0.0;
    rtb_sincos_o1_0[2] = 0.0;
    URControl_LPFilter_LPFilter(&URControl_DW.posFilter,
      URControlParams.est_posFilterT, rtb_sincos_o1_0, (rtInf), (rtMinusInf));
    URControl_DW.posFilter_not_empty = true;
  }

  /* 'UREstimators:5' if isempty(velFilter) */
  if (!URControl_DW.velFilter_not_empty) {
    /* 'UREstimators:5' velFilter = LPFilter(URpar.est_velFilterT, [0,0,0], 20, -20); */
    rtb_sincos_o1_0[0] = 0.0;
    rtb_sincos_o1_0[1] = 0.0;
    rtb_sincos_o1_0[2] = 0.0;
    URControl_LPFilter_LPFilter(&URControl_DW.velFilter,
      URControlParams.est_velFilterT, rtb_sincos_o1_0, 20.0, -20.0);
    URControl_DW.velFilter_not_empty = true;
  }

  /* 'UREstimators:6' if isempty(accFilter) */
  if (!URControl_DW.accFilter_not_empty) {
    /* 'UREstimators:6' accFilter = LPFilter(URpar.est_accFilterT, [0,0,0], 40, -40); */
    rtb_sincos_o1_0[0] = 0.0;
    rtb_sincos_o1_0[1] = 0.0;
    rtb_sincos_o1_0[2] = 0.0;
    URControl_LPFilter_LPFilter(&URControl_DW.accFilter,
      URControlParams.est_accFilterT, rtb_sincos_o1_0, 40.0, -40.0);
    URControl_DW.accFilter_not_empty = true;
  }

  /* 'UREstimators:8' state.acc = sensors.acc; */
  URControl_DW.State.acc[0] = rtb_acc[0];
  URControl_DW.State.acc[1] = rtb_acc[1];
  URControl_DW.State.acc[2] = rtb_acc[2];

  /* 'UREstimators:9' if URpar.est_useEKF == 1 */
  if (URControlParams.est_useEKF == 1.0) {
    /* Outputs for Atomic SubSystem: '<S27>/Output' */
    /* 'UREstimators:10' state.vel = vel_est'; */
    /* 'UREstimators:11' state.pos = pos_est'; */
    /* 'UREstimators:12' state.att = (mod(att_est + pi, 2*pi) - pi)'; */
    URControl_DW.State.vel[0] = URControl_DW.x[3];
    URControl_DW.State.pos[0] = URControl_DW.x[0];

    /* End of Outputs for SubSystem: '<S27>/Output' */
    if (rtIsNaN(URControl_B.att_ekfquat[0] + 3.1415926535897931) || rtIsInf
        (URControl_B.att_ekfquat[0] + 3.1415926535897931)) {
      errorSum = (rtNaN);
    } else if (URControl_B.att_ekfquat[0] + 3.1415926535897931 == 0.0) {
      errorSum = 0.0;
    } else {
      errorSum = std::fmod(URControl_B.att_ekfquat[0] + 3.1415926535897931,
                           6.2831853071795862);
      rEQ0 = (errorSum == 0.0);
      if (!rEQ0) {
        rtb_fcn5 = std::abs((URControl_B.att_ekfquat[0] + 3.1415926535897931) /
                            6.2831853071795862);
        rEQ0 = (std::abs(rtb_fcn5 - std::floor(rtb_fcn5 + 0.5)) <=
                2.2204460492503131E-16 * rtb_fcn5);
      }

      if (rEQ0) {
        errorSum = 0.0;
      } else {
        if (URControl_B.att_ekfquat[0] + 3.1415926535897931 < 0.0) {
          errorSum += 6.2831853071795862;
        }
      }
    }

    URControl_DW.State.att[0] = errorSum - 3.1415926535897931;

    /* Outputs for Atomic SubSystem: '<S27>/Output' */
    URControl_DW.State.vel[1] = URControl_DW.x[4];
    URControl_DW.State.pos[1] = URControl_DW.x[1];

    /* End of Outputs for SubSystem: '<S27>/Output' */
    if (rtIsNaN(URControl_B.att_ekfquat[1] + 3.1415926535897931) || rtIsInf
        (URControl_B.att_ekfquat[1] + 3.1415926535897931)) {
      errorSum = (rtNaN);
    } else if (URControl_B.att_ekfquat[1] + 3.1415926535897931 == 0.0) {
      errorSum = 0.0;
    } else {
      errorSum = std::fmod(URControl_B.att_ekfquat[1] + 3.1415926535897931,
                           6.2831853071795862);
      rEQ0 = (errorSum == 0.0);
      if (!rEQ0) {
        rtb_fcn5 = std::abs((URControl_B.att_ekfquat[1] + 3.1415926535897931) /
                            6.2831853071795862);
        rEQ0 = (std::abs(rtb_fcn5 - std::floor(rtb_fcn5 + 0.5)) <=
                2.2204460492503131E-16 * rtb_fcn5);
      }

      if (rEQ0) {
        errorSum = 0.0;
      } else {
        if (URControl_B.att_ekfquat[1] + 3.1415926535897931 < 0.0) {
          errorSum += 6.2831853071795862;
        }
      }
    }

    URControl_DW.State.att[1] = errorSum - 3.1415926535897931;

    /* Outputs for Atomic SubSystem: '<S27>/Output' */
    URControl_DW.State.vel[2] = URControl_DW.x[5];
    URControl_DW.State.pos[2] = URControl_DW.x[2];

    /* End of Outputs for SubSystem: '<S27>/Output' */
    if (rtIsNaN(URControl_B.att_ekfquat[2] + 3.1415926535897931) || rtIsInf
        (URControl_B.att_ekfquat[2] + 3.1415926535897931)) {
      errorSum = (rtNaN);
    } else if (URControl_B.att_ekfquat[2] + 3.1415926535897931 == 0.0) {
      errorSum = 0.0;
    } else {
      errorSum = std::fmod(URControl_B.att_ekfquat[2] + 3.1415926535897931,
                           6.2831853071795862);
      rEQ0 = (errorSum == 0.0);
      if (!rEQ0) {
        rtb_fcn5 = std::abs((URControl_B.att_ekfquat[2] + 3.1415926535897931) /
                            6.2831853071795862);
        rEQ0 = (std::abs(rtb_fcn5 - std::floor(rtb_fcn5 + 0.5)) <=
                2.2204460492503131E-16 * rtb_fcn5);
      }

      if (rEQ0) {
        errorSum = 0.0;
      } else {
        if (URControl_B.att_ekfquat[2] + 3.1415926535897931 < 0.0) {
          errorSum += 6.2831853071795862;
        }
      }
    }

    URControl_DW.State.att[2] = errorSum - 3.1415926535897931;
  } else {
    /* 'UREstimators:13' else */
    /* 'UREstimators:14' state.vel = sensors.vel; */
    /* 'UREstimators:15' state.pos = sensors.pos; */
    /* 'UREstimators:16' state.att = sensors.att; */
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

  /* 'UREstimators:19' state.omega = sensors.omega; */
  URControl_DW.State.omega[0] = URControl_U.rates[0];
  URControl_DW.State.omega[1] = URControl_U.rates[1];
  URControl_DW.State.omega[2] = URControl_U.rates[2];

  /* 'UREstimators:21' omegaFilter.updateFilterT(URpar.est_omegaFilterT); */
  /* 'LPFilter:26' obj.filterT = filterT; */
  URControl_DW.omegaFilter.filterT = URControlParams.est_omegaFilterT;

  /* 'UREstimators:22' omegaFilter.update(sensors.omega); */
  URControl_LPFilter_update(&URControl_DW.omegaFilter, velTarget);

  /* 'UREstimators:23' state.omegaf = omegaFilter.value; */
  URControl_DW.State.omegaf[0] = URControl_DW.omegaFilter.value[0];
  URControl_DW.State.omegaf[1] = URControl_DW.omegaFilter.value[1];
  URControl_DW.State.omegaf[2] = URControl_DW.omegaFilter.value[2];

  /* 'UREstimators:25' posFilter.updateFilterT(URpar.est_posFilterT); */
  /* 'LPFilter:26' obj.filterT = filterT; */
  URControl_DW.posFilter.filterT = URControlParams.est_posFilterT;

  /* 'UREstimators:26' posFilter.update(state.pos); */
  URControl_LPFilter_update(&URControl_DW.posFilter, URControl_DW.State.pos);

  /* 'UREstimators:27' state.posf = posFilter.value; */
  URControl_DW.State.posf[0] = URControl_DW.posFilter.value[0];
  URControl_DW.State.posf[1] = URControl_DW.posFilter.value[1];
  URControl_DW.State.posf[2] = URControl_DW.posFilter.value[2];

  /* 'UREstimators:29' velFilter.updateFilterT(URpar.est_velFilterT); */
  /* 'LPFilter:26' obj.filterT = filterT; */
  URControl_DW.velFilter.filterT = URControlParams.est_velFilterT;

  /* 'UREstimators:30' velFilter.update(state.vel); */
  URControl_LPFilter_update(&URControl_DW.velFilter, URControl_DW.State.vel);

  /* 'UREstimators:31' state.velf = velFilter.value; */
  URControl_DW.State.velf[0] = URControl_DW.velFilter.value[0];
  URControl_DW.State.velf[1] = URControl_DW.velFilter.value[1];
  URControl_DW.State.velf[2] = URControl_DW.velFilter.value[2];

  /* 'UREstimators:33' accFilter.updateFilterT(URpar.est_accFilterT); */
  /* 'LPFilter:26' obj.filterT = filterT; */
  URControl_DW.accFilter.filterT = URControlParams.est_accFilterT;

  /* 'UREstimators:34' accFilter.update(state.acc); */
  URControl_LPFilter_update(&URControl_DW.accFilter, rtb_acc);

  /* 'UREstimators:35' state.accf = accFilter.value; */
  URControl_DW.State.accf[0] = URControl_DW.accFilter.value[0];
  URControl_DW.State.accf[1] = URControl_DW.accFilter.value[1];
  URControl_DW.State.accf[2] = URControl_DW.accFilter.value[2];

  /* 'UREstimators:37' state.wRotor = sensors.wRotor/30*pi; */
  URControl_DW.State.wRotor[0] = static_cast<real_T>(URControl_U.esc_rpm[0]) /
    30.0 * 3.1415926535897931;
  URControl_DW.State.wRotor[1] = static_cast<real_T>(URControl_U.esc_rpm[1]) /
    30.0 * 3.1415926535897931;
  URControl_DW.State.wRotor[2] = static_cast<real_T>(URControl_U.esc_rpm[2]) /
    30.0 * 3.1415926535897931;
  URControl_DW.State.wRotor[3] = static_cast<real_T>(URControl_U.esc_rpm[3]) /
    30.0 * 3.1415926535897931;

  /* 'UREstimators:39' phi = state.att(1); */
  /* 'UREstimators:40' theta = state.att(2); */
  /* 'UREstimators:41' psi = state.att(3); */
  /* 'UREstimators:44' R_IB = [cos(theta)*cos(psi)                             , cos(theta)*sin(psi)                               , -sin(theta); */
  /* 'UREstimators:45'         sin(phi)*sin(theta)*cos(psi)-cos(phi)*sin(psi)  , sin(phi)*sin(theta)*sin(psi)+cos(phi)*cos(psi)    , sin(phi)*cos(theta); */
  /* 'UREstimators:46'         cos(phi)*sin(theta)*cos(psi)+sin(phi)*sin(psi)  , cos(phi)*sin(theta)*sin(psi)-sin(phi)*cos(psi)    , cos(phi)*cos(theta)]; */
  errorSum = std::cos(URControl_DW.State.att[1]);
  rtb_fcn5 = std::cos(URControl_DW.State.att[2]);
  R_IB[0] = errorSum * rtb_fcn5;
  rtb_Product1 = std::sin(URControl_DW.State.att[2]);
  R_IB[3] = errorSum * rtb_Product1;
  dummy_idx_0 = std::sin(URControl_DW.State.att[1]);
  R_IB[6] = -dummy_idx_0;
  dummy_idx_1 = std::sin(URControl_DW.State.att[0]);
  rtb_Product2 = dummy_idx_1 * dummy_idx_0;
  Mv_min = std::cos(URControl_DW.State.att[0]);
  R_IB[1] = rtb_Product2 * rtb_fcn5 - Mv_min * rtb_Product1;
  R_IB[4] = rtb_Product2 * rtb_Product1 + Mv_min * rtb_fcn5;
  R_IB[7] = dummy_idx_1 * errorSum;
  dummy_idx_0 *= Mv_min;
  R_IB[2] = dummy_idx_0 * rtb_fcn5 + dummy_idx_1 * rtb_Product1;
  R_IB[5] = dummy_idx_0 * rtb_Product1 - dummy_idx_1 * rtb_fcn5;
  R_IB[8] = Mv_min * errorSum;

  /* 'UREstimators:48' state.n = (R_IB\[0;0;-1])'; */
  i = 0;
  r2 = 1;
  r3 = 2;
  rtb_Product1 = std::abs(R_IB[0]);
  rtb_fcn5 = std::abs(R_IB[1]);
  if (rtb_fcn5 > rtb_Product1) {
    rtb_Product1 = rtb_fcn5;
    i = 1;
    r2 = 0;
  }

  if (std::abs(R_IB[2]) > rtb_Product1) {
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
  velTarget[1] = static_cast<real_T>(b[r2]) - static_cast<real_T>(b[i]) *
    R_IB[r2];
  velTarget[2] = (static_cast<real_T>(b[r3]) - static_cast<real_T>(b[i]) *
                  R_IB[r3]) - R_IB[3 + r3] * velTarget[1];
  velTarget[2] /= R_IB[6 + r3];
  velTarget[0] = static_cast<real_T>(b[i]) - R_IB[6 + i] * velTarget[2];
  velTarget[1] -= R_IB[6 + r2] * velTarget[2];
  velTarget[1] /= R_IB[3 + r2];
  velTarget[0] -= R_IB[3 + i] * velTarget[1];
  velTarget[0] /= R_IB[i];
  URControl_DW.State.n[0] = velTarget[0];
  URControl_DW.State.n[1] = velTarget[1];
  URControl_DW.State.n[2] = velTarget[2];

  /* 'UREstimators:53' dummy = par.URC.R_xy_uv*[state.omega(1); state.omega(2)]; */
  /* 'UREstimators:54' uRot = dummy(1); */
  /* 'UREstimators:54' vRot = dummy(2); */
  /* 'UREstimators:55' state.omegaUV = [uRot,vRot,state.omega(3)]; */
  URControl_DW.State.omegaUV[0] =
    URControl_ConstP.basicestimators_par.URC.R_xy_uv[0] * URControl_U.rates[0] +
    URControl_ConstP.basicestimators_par.URC.R_xy_uv[2] * URControl_U.rates[1];
  URControl_DW.State.omegaUV[1] =
    URControl_ConstP.basicestimators_par.URC.R_xy_uv[1] * URControl_U.rates[0] +
    URControl_ConstP.basicestimators_par.URC.R_xy_uv[3] * URControl_U.rates[1];
  URControl_DW.State.omegaUV[2] = URControl_U.rates[2];

  /* 'UREstimators:57' dummy = par.URC.R_xy_uv*[state.omegaf(1); state.omegaf(2)]; */
  /* 'UREstimators:58' uRot = dummy(1); */
  /* 'UREstimators:58' vRot = dummy(2); */
  /* 'UREstimators:59' state.omegafUV = [uRot,vRot,state.omegaf(3)]; */
  URControl_DW.State.omegafUV[0] =
    URControl_ConstP.basicestimators_par.URC.R_xy_uv[0] *
    URControl_DW.State.omegaf[0] +
    URControl_ConstP.basicestimators_par.URC.R_xy_uv[2] *
    URControl_DW.State.omegaf[1];
  URControl_DW.State.omegafUV[1] =
    URControl_ConstP.basicestimators_par.URC.R_xy_uv[1] *
    URControl_DW.State.omegaf[0] +
    URControl_ConstP.basicestimators_par.URC.R_xy_uv[3] *
    URControl_DW.State.omegaf[1];
  URControl_DW.State.omegafUV[2] = URControl_DW.State.omegaf[2];

  /* 'UREstimators:62' FMax = URpar.envp_FMax; */
  /* 'UREstimators:63' FMin = URpar.envp_FMin; */
  qconj[0] = URControlParams.envp_FMax[0];
  FMin[0] = URControlParams.envp_FMin[0];
  qconj[1] = URControlParams.envp_FMax[1];
  FMin[1] = URControlParams.envp_FMin[1];
  qconj[2] = URControlParams.envp_FMax[2];
  FMin[2] = URControlParams.envp_FMin[2];
  qconj[3] = URControlParams.envp_FMax[3];
  FMin[3] = URControlParams.envp_FMin[3];

  /* 'UREstimators:64' if fail_id > 0 */
  if (rtb_enableMeas > 0.0) {
    /* 'UREstimators:65' FMax(fail_id) = URpar.fail_wRot^2*URpar.k0; */
    errorSum = URControlParams.fail_wRot * URControlParams.fail_wRot *
      URControlParams.k0;
    r2 = static_cast<int32_T>(rtb_enableMeas) - 1;
    qconj[r2] = errorSum;

    /* 'UREstimators:66' FMin(fail_id) = URpar.fail_wRot^2*URpar.k0; */
    FMin[r2] = errorSum;
  }

  /* 'UREstimators:68' state.FMax = FMax; */
  /* 'UREstimators:69' state.FMin = FMin; */
  URControl_DW.State.FMax[0] = qconj[0];
  URControl_DW.State.FMin[0] = FMin[0];
  URControl_DW.State.FMax[1] = qconj[1];
  URControl_DW.State.FMin[1] = FMin[1];
  URControl_DW.State.FMax[2] = qconj[2];
  URControl_DW.State.FMin[2] = FMin[2];
  URControl_DW.State.FMax[3] = qconj[3];
  URControl_DW.State.FMin[3] = FMin[3];

  /* 'UREstimators:71' state.fail_id = fail_id; */
  URControl_DW.State.fail_id = rtb_enableMeas;

  /* 'UREstimators:74' [uvDot_max, uvDot_min, uv_max, uv_min] = UREnvelopCalc(state, URpar); */
  /* 'UREnvelopCalc:3' s = sqrt(URpar.l^2 + URpar.b^2); */
  dummy_idx_0 = std::sqrt(URControlParams.l * URControlParams.l +
    URControlParams.b * URControlParams.b);

  /* 'UREnvelopCalc:4' r = state.omega(3); */
  /* 'UREnvelopCalc:7' Mu_max = (-state.FMin(2) + state.FMax(4))*s; */
  Mu_max = (-FMin[1] + qconj[3]) * dummy_idx_0;

  /* 'UREnvelopCalc:8' Mu_min = (-state.FMax(2) + state.FMin(4))*s; */
  Mu_min = (-qconj[1] + FMin[3]) * dummy_idx_0;

  /* 'UREnvelopCalc:9' Mv_max = (state.FMax(1) - state.FMin(3))*s; */
  Mv_max = (qconj[0] - FMin[2]) * dummy_idx_0;

  /* 'UREnvelopCalc:10' Mv_min = (state.FMin(1) - state.FMax(3))*s; */
  Mv_min = (FMin[0] - qconj[2]) * dummy_idx_0;

  /* 'UREnvelopCalc:13' Iu = sqrt(URpar.Ix^2 + URpar.Iy^2); */
  dummy_idx_1 = std::sqrt(URControlParams.Ix * URControlParams.Ix +
    URControlParams.Iy * URControlParams.Iy);

  /* 'UREnvelopCalc:14' Iv = sqrt(URpar.Ix^2 + URpar.Iy^2); */
  /* 'UREnvelopCalc:17' MuPrec = state.omegafUV(2)*r*(Iv - URpar.Iz); */
  errorSum = URControl_DW.State.omegafUV[1] * URControl_U.rates[2] *
    (dummy_idx_1 - URControlParams.Iz);

  /* 'UREnvelopCalc:18' MvPrec = state.omegafUV(1)*r*(URpar.Iz - Iu); */
  rtb_Product1_tmp = URControlParams.Iz - dummy_idx_1;
  rtb_Product1 = URControl_DW.State.omegafUV[0] * URControl_U.rates[2] *
    rtb_Product1_tmp;

  /* 'UREnvelopCalc:21' uDot_max = (MuPrec + Mu_max)/Iu; */
  rtb_enableMeas = (errorSum + Mu_max) / dummy_idx_1;

  /* 'UREnvelopCalc:22' uDot_min = (MuPrec + Mu_min)/Iu; */
  errorSum = (errorSum + Mu_min) / dummy_idx_1;

  /* 'UREnvelopCalc:24' vDot_max = (MvPrec + Mv_max)/Iv; */
  rtb_fcn5 = (rtb_Product1 + Mv_max) / dummy_idx_1;

  /* 'UREnvelopCalc:25' vDot_min = (MvPrec + Mv_min)/Iv; */
  rtb_Product1 = (rtb_Product1 + Mv_min) / dummy_idx_1;

  /* 'UREnvelopCalc:28' dt = URpar.envp_timeHorz; */
  /* 'UREnvelopCalc:30' if URpar.envp_mode == 1 */
  if (URControlParams.envp_mode == 1.0) {
    /* 'UREnvelopCalc:33' u_max = state.omegafUV(1) + max(uDot_max,URpar.envp_minDeviation)*dt; */
    tmp_4 = rtIsNaN(URControlParams.envp_minDeviation);
    if ((rtb_enableMeas > URControlParams.envp_minDeviation) || tmp_4) {
      rtb_Product2 = rtb_enableMeas;
    } else {
      rtb_Product2 = URControlParams.envp_minDeviation;
    }

    u_max = rtb_Product2 * URControlParams.envp_timeHorz +
      URControl_DW.State.omegafUV[0];

    /* 'UREnvelopCalc:34' u_min = state.omegafUV(1) + min(uDot_min,-URpar.envp_minDeviation)*dt; */
    tmp_3 = rtIsNaN(-URControlParams.envp_minDeviation);
    if ((errorSum < -URControlParams.envp_minDeviation) || tmp_3) {
      rtb_Product2 = errorSum;
    } else {
      rtb_Product2 = -URControlParams.envp_minDeviation;
    }

    Mv_min = rtb_Product2 * URControlParams.envp_timeHorz +
      URControl_DW.State.omegafUV[0];

    /* 'UREnvelopCalc:36' v_max = state.omegafUV(2) + max(vDot_max,URpar.envp_minDeviation)*dt; */
    if ((rtb_fcn5 > URControlParams.envp_minDeviation) || tmp_4) {
      rtb_Product2 = rtb_fcn5;
    } else {
      rtb_Product2 = URControlParams.envp_minDeviation;
    }

    v_max = rtb_Product2 * URControlParams.envp_timeHorz +
      URControl_DW.State.omegafUV[1];

    /* 'UREnvelopCalc:37' v_min = state.omegafUV(2) + min(vDot_min,-URpar.envp_minDeviation)*dt; */
    if ((rtb_Product1 < -URControlParams.envp_minDeviation) || tmp_3) {
      rtb_Product2 = rtb_Product1;
    } else {
      rtb_Product2 = -URControlParams.envp_minDeviation;
    }

    rtb_Product2 = rtb_Product2 * URControlParams.envp_timeHorz +
      URControl_DW.State.omegafUV[1];
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
    if ((errorSum < -URControlParams.envp_minDeviation) || rtIsNaN
        (-URControlParams.envp_minDeviation)) {
      uDot2_min = errorSum;
    } else {
      uDot2_min = -URControlParams.envp_minDeviation;
    }

    /* 'UREnvelopCalc:45' u_max = max(state.omegafUV(1) + min(uDot2_max, -uDot2_min)*dt,0); */
    if ((v_max < -uDot2_min) || rtIsNaN(-uDot2_min)) {
      rtb_sincos_o1_idx_0 = v_max;
    } else {
      rtb_sincos_o1_idx_0 = -uDot2_min;
    }

    u_max = rtb_sincos_o1_idx_0 * URControlParams.envp_timeHorz +
      URControl_DW.State.omegafUV[0];
    if (!(u_max > 0.0)) {
      u_max = 0.0;
    }

    /* 'UREnvelopCalc:46' u_min = min(state.omegafUV(1) + max(uDot2_min, -uDot2_max)*dt,0); */
    if ((!(uDot2_min > -v_max)) && (!rtIsNaN(-v_max))) {
      uDot2_min = -v_max;
    }

    Mv_min = uDot2_min * URControlParams.envp_timeHorz +
      URControl_DW.State.omegafUV[0];
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
    if ((rtb_Product1 < -URControlParams.envp_minDeviation) || rtIsNaN
        (-URControlParams.envp_minDeviation)) {
      vDot2_min = rtb_Product1;
    } else {
      vDot2_min = -URControlParams.envp_minDeviation;
    }

    /* 'UREnvelopCalc:51' v_max = max(state.omegafUV(2) + min(vDot2_max, -vDot2_min)*dt,0); */
    if ((rtb_Product2 < -vDot2_min) || rtIsNaN(-vDot2_min)) {
      rtb_sincos_o1_idx_0 = rtb_Product2;
    } else {
      rtb_sincos_o1_idx_0 = -vDot2_min;
    }

    v_max = rtb_sincos_o1_idx_0 * URControlParams.envp_timeHorz +
      URControl_DW.State.omegafUV[1];
    if (!(v_max > 0.0)) {
      v_max = 0.0;
    }

    /* 'UREnvelopCalc:52' v_min = min(state.omegafUV(2) + max(vDot2_min, -vDot2_max)*dt,0); */
    if ((!(vDot2_min > -rtb_Product2)) && (!rtIsNaN(-rtb_Product2))) {
      vDot2_min = -rtb_Product2;
    }

    rtb_Product2 = vDot2_min * URControlParams.envp_timeHorz +
      URControl_DW.State.omegafUV[1];
    if (!(rtb_Product2 < 0.0)) {
      rtb_Product2 = 0.0;
    }
  } else if (URControlParams.envp_mode == 3.0) {
    /* 'UREnvelopCalc:54' elseif URpar.envp_mode == 3 */
    /* 'UREnvelopCalc:57' uDot2_max = max(uDot_max,URpar.envp_minDeviation); */
    if ((rtb_enableMeas > URControlParams.envp_minDeviation) || rtIsNaN
        (URControlParams.envp_minDeviation)) {
      v_max = rtb_enableMeas;
    } else {
      v_max = URControlParams.envp_minDeviation;
    }

    /* 'UREnvelopCalc:58' uDot2_min = min(uDot_min,-URpar.envp_minDeviation); */
    if ((errorSum < -URControlParams.envp_minDeviation) || rtIsNaN
        (-URControlParams.envp_minDeviation)) {
      uDot2_min = errorSum;
    } else {
      uDot2_min = -URControlParams.envp_minDeviation;
    }

    /* 'UREnvelopCalc:60' u_max = max(state.omegafUV(1) + min(uDot2_max, -uDot2_min)*dt,0); */
    /* 'UREnvelopCalc:61' u_min = min(state.omegafUV(1) + max(uDot2_min, -uDot2_max)*dt,0); */
    /* 'UREnvelopCalc:63' vDot2_max = max(vDot_max,URpar.envp_minDeviation); */
    if ((rtb_fcn5 > URControlParams.envp_minDeviation) || rtIsNaN
        (URControlParams.envp_minDeviation)) {
      rtb_Product2 = rtb_fcn5;
    } else {
      rtb_Product2 = URControlParams.envp_minDeviation;
    }

    /* 'UREnvelopCalc:64' vDot2_min = min(vDot_min,-URpar.envp_minDeviation); */
    if ((rtb_Product1 < -URControlParams.envp_minDeviation) || rtIsNaN
        (-URControlParams.envp_minDeviation)) {
      vDot2_min = rtb_Product1;
    } else {
      vDot2_min = -URControlParams.envp_minDeviation;
    }

    /* 'UREnvelopCalc:66' v_max = max(state.omegafUV(2) + min(vDot2_max, -vDot2_min)*dt,0); */
    /* 'UREnvelopCalc:67' v_min = min(state.omegafUV(2) + max(vDot2_min, -vDot2_max)*dt,0); */
    /* 'UREnvelopCalc:70' if abs(r) < 1e-3 */
    rtb_sincos_o1_idx_1 = std::abs((real_T)URControl_U.rates[2]);
    if (rtb_sincos_o1_idx_1 < 0.001) {
      /* 'UREnvelopCalc:71' rTemp = URpar.attitude_yawThreshold; */
      u_max = URControlParams.attitude_yawThreshold;
    } else {
      /* 'UREnvelopCalc:72' else */
      /* 'UREnvelopCalc:73' rTemp = sign(r)*max(abs(r), URpar.attitude_yawThreshold); */
      if (URControl_U.rates[2] < 0.0F) {
        rtb_sincos_o1_idx_0 = -1.0;
      } else if (URControl_U.rates[2] > 0.0F) {
        rtb_sincos_o1_idx_0 = 1.0;
      } else if (URControl_U.rates[2] == 0.0F) {
        rtb_sincos_o1_idx_0 = 0.0;
      } else {
        rtb_sincos_o1_idx_0 = (rtNaN);
      }

      if ((!(rtb_sincos_o1_idx_1 > URControlParams.attitude_yawThreshold)) &&
          (!rtIsNaN(URControlParams.attitude_yawThreshold))) {
        rtb_sincos_o1_idx_1 = URControlParams.attitude_yawThreshold;
      }

      u_max = rtb_sincos_o1_idx_0 * rtb_sincos_o1_idx_1;
    }

    /* 'UREnvelopCalc:76' u_prec_lim1 = -max(Mv_max,0)/(rTemp*(URpar.Iz - Iu)); */
    if (!(Mv_max > 0.0)) {
      Mv_max = 0.0;
    }

    rtb_sincos_o1_idx_0 = rtb_Product1_tmp * u_max;
    Mv_max = -Mv_max / rtb_sincos_o1_idx_0;

    /* 'UREnvelopCalc:77' u_prec_lim2 = -min(Mv_min,0)/(rTemp*(URpar.Iz - Iu)); */
    if (!(Mv_min < 0.0)) {
      Mv_min = 0.0;
    }

    Mv_min = -Mv_min / rtb_sincos_o1_idx_0;

    /* 'UREnvelopCalc:79' v_prec_lim1 = -max(Mu_max,0)/(rTemp*(Iv - URpar.Iz)); */
    if (!(Mu_max > 0.0)) {
      Mu_max = 0.0;
    }

    rtb_sincos_o1_idx_0 = (dummy_idx_1 - URControlParams.Iz) * u_max;
    Mu_max = -Mu_max / rtb_sincos_o1_idx_0;

    /* 'UREnvelopCalc:80' v_prec_lim2 = -min(Mu_min,0)/(rTemp*(Iv - URpar.Iz)); */
    if (!(Mu_min < 0.0)) {
      Mu_min = 0.0;
    }

    Mu_min = -Mu_min / rtb_sincos_o1_idx_0;

    /* 'UREnvelopCalc:82' u_max = min(u_max, max(u_prec_lim1, u_prec_lim2)); */
    if ((v_max < -uDot2_min) || rtIsNaN(-uDot2_min)) {
      rtb_sincos_o1_idx_0 = v_max;
    } else {
      rtb_sincos_o1_idx_0 = -uDot2_min;
    }

    rtb_sincos_o1_idx_1 = rtb_sincos_o1_idx_0 * URControlParams.envp_timeHorz +
      URControl_DW.State.omegafUV[0];
    if (!(rtb_sincos_o1_idx_1 > 0.0)) {
      rtb_sincos_o1_idx_1 = 0.0;
    }

    tmp_4 = rtIsNaN(Mv_min);
    if ((Mv_max > Mv_min) || tmp_4) {
      u_max = Mv_max;
    } else {
      u_max = Mv_min;
    }

    if ((rtb_sincos_o1_idx_1 < u_max) || rtIsNaN(u_max)) {
      u_max = rtb_sincos_o1_idx_1;
    }

    /* 'UREnvelopCalc:83' u_min = max(u_min, min(u_prec_lim1, u_prec_lim2)); */
    if ((!(uDot2_min > -v_max)) && (!rtIsNaN(-v_max))) {
      uDot2_min = -v_max;
    }

    rtb_sincos_o1_idx_1 = uDot2_min * URControlParams.envp_timeHorz +
      URControl_DW.State.omegafUV[0];
    if (!(rtb_sincos_o1_idx_1 < 0.0)) {
      rtb_sincos_o1_idx_1 = 0.0;
    }

    if ((Mv_max < Mv_min) || tmp_4) {
      Mv_min = Mv_max;
    }

    if ((rtb_sincos_o1_idx_1 > Mv_min) || rtIsNaN(Mv_min)) {
      Mv_min = rtb_sincos_o1_idx_1;
    }

    /* 'UREnvelopCalc:85' v_max = min(v_max, max(v_prec_lim1, v_prec_lim2)); */
    if ((rtb_Product2 < -vDot2_min) || rtIsNaN(-vDot2_min)) {
      rtb_sincos_o1_idx_0 = rtb_Product2;
    } else {
      rtb_sincos_o1_idx_0 = -vDot2_min;
    }

    rtb_sincos_o1_idx_1 = rtb_sincos_o1_idx_0 * URControlParams.envp_timeHorz +
      URControl_DW.State.omegafUV[1];
    if (!(rtb_sincos_o1_idx_1 > 0.0)) {
      rtb_sincos_o1_idx_1 = 0.0;
    }

    tmp_4 = rtIsNaN(Mu_min);
    if ((Mu_max > Mu_min) || tmp_4) {
      v_max = Mu_max;
    } else {
      v_max = Mu_min;
    }

    if ((rtb_sincos_o1_idx_1 < v_max) || rtIsNaN(v_max)) {
      v_max = rtb_sincos_o1_idx_1;
    }

    /* 'UREnvelopCalc:86' v_min = max(v_min, min(v_prec_lim1, v_prec_lim2)); */
    if ((!(vDot2_min > -rtb_Product2)) && (!rtIsNaN(-rtb_Product2))) {
      vDot2_min = -rtb_Product2;
    }

    rtb_Product2 = vDot2_min * URControlParams.envp_timeHorz +
      URControl_DW.State.omegafUV[1];
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
  /* 'UREstimators:75' state.uvDot_max = uvDot_max; */
  URControl_DW.State.uvDot_max[0] = rtb_enableMeas;
  URControl_DW.State.uvDot_max[1] = rtb_fcn5;

  /* 'UREstimators:76' state.uvDot_min = uvDot_min; */
  URControl_DW.State.uvDot_min[0] = errorSum;
  URControl_DW.State.uvDot_min[1] = rtb_Product1;

  /* 'UREstimators:77' state.uv_max = uv_max; */
  URControl_DW.State.uv_max[0] = u_max;
  URControl_DW.State.uv_max[1] = v_max;

  /* 'UREstimators:78' state.uv_min = uv_min; */
  URControl_DW.State.uv_min[0] = Mv_min;
  URControl_DW.State.uv_min[1] = rtb_Product2;

  /* 'UREstimators:81' daq.pos = state.pos; */
  /* 'UREstimators:82' daq.vel = state.vel; */
  /* 'UREstimators:83' daq.acc = state.att; */
  /* 'UREstimators:84' daq.n = state.n; */
  /* 'UREstimators:86' daq.omegaUV = state.omegaUV; */
  /* 'UREstimators:87' daq.omegafUV = state.omegafUV; */
  URControl_DW.DAQ.pos[0] = URControl_DW.State.pos[0];
  URControl_DW.DAQ.vel[0] = URControl_DW.State.vel[0];
  URControl_DW.DAQ.acc[0] = URControl_DW.State.att[0];
  URControl_DW.DAQ.n[0] = velTarget[0];
  URControl_DW.DAQ.omegaUV[0] = URControl_DW.State.omegaUV[0];
  URControl_DW.DAQ.omegafUV[0] = URControl_DW.State.omegafUV[0];
  URControl_DW.DAQ.pos[1] = URControl_DW.State.pos[1];
  URControl_DW.DAQ.vel[1] = URControl_DW.State.vel[1];
  URControl_DW.DAQ.acc[1] = URControl_DW.State.att[1];
  URControl_DW.DAQ.n[1] = velTarget[1];
  URControl_DW.DAQ.omegaUV[1] = URControl_DW.State.omegaUV[1];
  URControl_DW.DAQ.omegafUV[1] = URControl_DW.State.omegafUV[1];
  URControl_DW.DAQ.pos[2] = URControl_DW.State.pos[2];
  URControl_DW.DAQ.vel[2] = URControl_DW.State.vel[2];
  URControl_DW.DAQ.acc[2] = URControl_DW.State.att[2];
  URControl_DW.DAQ.n[2] = velTarget[2];
  URControl_DW.DAQ.omegaUV[2] = URControl_DW.State.omegaUV[2];
  URControl_DW.DAQ.omegafUV[2] = URControl_DW.State.omegafUV[2];

  /* 'UREstimators:88' daq.FMax = state.FMax; */
  /* 'UREstimators:89' daq.FMin = state.FMin; */
  URControl_DW.DAQ.FMax[0] = qconj[0];
  URControl_DW.DAQ.FMin[0] = FMin[0];
  URControl_DW.DAQ.FMax[1] = qconj[1];
  URControl_DW.DAQ.FMin[1] = FMin[1];
  URControl_DW.DAQ.FMax[2] = qconj[2];
  URControl_DW.DAQ.FMin[2] = FMin[2];
  URControl_DW.DAQ.FMax[3] = qconj[3];
  URControl_DW.DAQ.FMin[3] = FMin[3];

  /* 'UREstimators:90' daq.uvDot_max = state.uvDot_max; */
  URControl_DW.DAQ.uvDot_max[0] = rtb_enableMeas;
  URControl_DW.DAQ.uvDot_max[1] = rtb_fcn5;

  /* 'UREstimators:91' daq.uvDot_min = state.uvDot_min; */
  URControl_DW.DAQ.uvDot_min[0] = errorSum;
  URControl_DW.DAQ.uvDot_min[1] = rtb_Product1;

  /* 'UREstimators:92' daq.uv_max = state.uv_max; */
  URControl_DW.DAQ.uv_max[0] = u_max;
  URControl_DW.DAQ.uv_max[1] = v_max;

  /* 'UREstimators:93' daq.uv_min = state.uv_min; */
  URControl_DW.DAQ.uv_min[0] = Mv_min;
  URControl_DW.DAQ.uv_min[1] = rtb_Product2;

  /* MATLAB Function: '<S5>/Precession' incorporates:
   *  MATLAB Function: '<S7>/basic estimators'
   */
  /* :  stateOut = State; */
  /* :  [uv_prec, precAngle, DAQ] = URGenPrecession(state, DAQ, par, URControlParams); */
  /* 'URGenPrecession:3' s = sqrt(URpar.l^2 + URpar.b^2); */
  /* 'URGenPrecession:4' r = state.omegaf(3); */
  /* 'URGenPrecession:7' Mu_max = (-state.FMin(2) + state.FMax(4))*s; */
  Mu_max = (-URControl_DW.State.FMin[1] + URControl_DW.State.FMax[3]) *
    dummy_idx_0;

  /* 'URGenPrecession:8' Mu_min = (-state.FMax(2) + state.FMin(4))*s; */
  Mu_min = (-URControl_DW.State.FMax[1] + URControl_DW.State.FMin[3]) *
    dummy_idx_0;

  /* 'URGenPrecession:9' Mv_max = (state.FMax(1) - state.FMin(3))*s; */
  Mv_max = (URControl_DW.State.FMax[0] - URControl_DW.State.FMin[2]) *
    dummy_idx_0;

  /* 'URGenPrecession:10' Mv_min = (state.FMin(1) - state.FMax(3))*s; */
  Mv_min = (URControl_DW.State.FMin[0] - URControl_DW.State.FMax[2]) *
    dummy_idx_0;

  /* 'URGenPrecession:12' MMargin = URpar.attitude_MMargin; */
  /* 'URGenPrecession:15' if Mu_max < MMargin */
  if (Mu_max < URControlParams.attitude_MMargin) {
    /* 'URGenPrecession:16' MuPrec = MMargin - Mu_max; */
    errorSum = URControlParams.attitude_MMargin - Mu_max;
  } else if (Mu_min > -URControlParams.attitude_MMargin) {
    /* 'URGenPrecession:17' elseif Mu_min > -MMargin */
    /* 'URGenPrecession:18' MuPrec = -MMargin - Mu_min; */
    errorSum = -URControlParams.attitude_MMargin - Mu_min;
  } else {
    /* 'URGenPrecession:19' else */
    /* 'URGenPrecession:20' MuPrec = 0; */
    errorSum = 0.0;
  }

  /* 'URGenPrecession:24' if Mv_max < MMargin */
  if (Mv_max < URControlParams.attitude_MMargin) {
    /* 'URGenPrecession:25' MvPrec = MMargin - Mv_max; */
    rtb_Product1 = URControlParams.attitude_MMargin - Mv_max;
  } else if (Mv_min > -URControlParams.attitude_MMargin) {
    /* 'URGenPrecession:26' elseif Mv_min > -MMargin */
    /* 'URGenPrecession:27' MvPrec = -MMargin - Mv_min; */
    rtb_Product1 = -URControlParams.attitude_MMargin - Mv_min;
  } else {
    /* 'URGenPrecession:28' else */
    /* 'URGenPrecession:29' MvPrec = 0; */
    rtb_Product1 = 0.0;
  }

  /* 'URGenPrecession:32' Iu = sqrt(URpar.Ix^2 + URpar.Iy^2); */
  /* 'URGenPrecession:33' Iv = sqrt(URpar.Ix^2 + URpar.Iy^2); */
  /* 'URGenPrecession:38' if abs(r) < URpar.attitude_yawThreshold */
  rtb_sincos_o1_idx_0 = std::abs(URControl_DW.State.omegaf[2]);
  if (rtb_sincos_o1_idx_0 < URControlParams.attitude_yawThreshold) {
    /* 'URGenPrecession:39' rTemp = sign(r)*URpar.attitude_yawThreshold; */
    if (URControl_DW.State.omegaf[2] < 0.0) {
      Mv_min = -1.0;
    } else if (URControl_DW.State.omegaf[2] > 0.0) {
      Mv_min = 1.0;
    } else if (URControl_DW.State.omegaf[2] == 0.0) {
      Mv_min = 0.0;
    } else {
      Mv_min = (rtNaN);
    }

    u_max = Mv_min * URControlParams.attitude_yawThreshold;

    /* 'URGenPrecession:40' gain = 1 - (URpar.attitude_yawThreshold - abs(r))/URpar.attitude_yawThreshold; */
    /* 'URGenPrecession:41' gain = max(min(gain,1),0); */
    rtb_fcn5 = 1.0 - (URControlParams.attitude_yawThreshold -
                      rtb_sincos_o1_idx_0) /
      URControlParams.attitude_yawThreshold;
    if (!(rtb_fcn5 < 1.0)) {
      rtb_fcn5 = 1.0;
    }

    if (!(rtb_fcn5 > 0.0)) {
      rtb_fcn5 = 0.0;
    }

    /* 'URGenPrecession:42' u_prec = (MvPrec/(rTemp*(URpar.Iz - Iu)))*gain; */
    rtb_enableMeas = rtb_Product1 / ((URControlParams.Iz - std::sqrt
      (URControlParams.Ix * URControlParams.Ix + URControlParams.Iy *
       URControlParams.Iy)) * u_max) * rtb_fcn5;

    /* 'URGenPrecession:43' v_prec = (MuPrec/(rTemp*(Iv - URpar.Iz)))*gain; */
    errorSum = errorSum / ((std::sqrt(URControlParams.Ix * URControlParams.Ix +
      URControlParams.Iy * URControlParams.Iy) - URControlParams.Iz) * u_max) *
      rtb_fcn5;
  } else {
    /* 'URGenPrecession:44' else */
    /* 'URGenPrecession:45' u_prec = MvPrec/(r*(URpar.Iz - Iu)); */
    rtb_enableMeas = rtb_Product1 / ((URControlParams.Iz - std::sqrt
      (URControlParams.Ix * URControlParams.Ix + URControlParams.Iy *
       URControlParams.Iy)) * URControl_DW.State.omegaf[2]);

    /* 'URGenPrecession:46' v_prec = MuPrec/(r*(Iv - URpar.Iz)); */
    errorSum /= (dummy_idx_1 - URControlParams.Iz) * URControl_DW.State.omegaf[2];
  }

  /* 'URGenPrecession:49' u_prec = max(min(u_prec,URpar.attitude_maxPrecSpeed),-URpar.attitude_maxPrecSpeed); */
  tmp_4 = rtIsNaN(URControlParams.attitude_maxPrecSpeed);
  if ((!(rtb_enableMeas < URControlParams.attitude_maxPrecSpeed)) && (!tmp_4)) {
    rtb_enableMeas = URControlParams.attitude_maxPrecSpeed;
  }

  tmp_3 = rtIsNaN(-URControlParams.attitude_maxPrecSpeed);
  if ((!(rtb_enableMeas > -URControlParams.attitude_maxPrecSpeed)) && (!tmp_3))
  {
    rtb_enableMeas = -URControlParams.attitude_maxPrecSpeed;
  }

  /* 'URGenPrecession:50' v_prec = max(min(v_prec,URpar.attitude_maxPrecSpeed),-URpar.attitude_maxPrecSpeed); */
  if ((!(errorSum < URControlParams.attitude_maxPrecSpeed)) && (!tmp_4)) {
    errorSum = URControlParams.attitude_maxPrecSpeed;
  }

  if ((!(errorSum > -URControlParams.attitude_maxPrecSpeed)) && (!tmp_3)) {
    errorSum = -URControlParams.attitude_maxPrecSpeed;
  }

  /* 'URGenPrecession:52' u_precAngle = 0; */
  rtb_fcn5 = 0.0;

  /* 'URGenPrecession:52' v_precAngle = 0; */
  rtb_Product1 = 0.0;

  /* 'URGenPrecession:54' if URpar.attitude_precMode == 2 */
  if (URControlParams.attitude_precMode == 2.0) {
    /* 'URGenPrecession:56' u_precAngle = sign(v_prec)*URpar.attitude_precAngle/180*pi; */
    if (errorSum < 0.0) {
      rtb_Product2 = -1.0;
    } else if (errorSum > 0.0) {
      rtb_Product2 = 1.0;
    } else if (errorSum == 0.0) {
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

    rtb_Product1 = rtb_Product2 * URControlParams.attitude_precAngle / 180.0 *
      3.1415926535897931;
  }

  /* 'URGenPrecession:60' if URpar.attitude_precMode == 0 */
  if (URControlParams.attitude_precMode == 0.0) {
    /* 'URGenPrecession:62' u_prec = 0; */
    rtb_enableMeas = 0.0;

    /* 'URGenPrecession:62' v_prec = 0; */
    errorSum = 0.0;

    /* 'URGenPrecession:63' u_precAngle = 0; */
    rtb_fcn5 = 0.0;

    /* 'URGenPrecession:63' v_precAngle = 0; */
    rtb_Product1 = 0.0;
  }

  /* 'URGenPrecession:66' uv_prec = [u_prec; v_prec]; */
  dummy_idx_0 = rtb_enableMeas;
  dummy_idx_1 = errorSum;

  /* 'URGenPrecession:68' precAngle = [u_precAngle; v_precAngle]; */
  Mv_min = rtb_fcn5;
  u_max = rtb_Product1;

  /* 'URGenPrecession:71' daq.uv_prec = uv_prec; */
  /* 'URGenPrecession:72' daq.precAngle = precAngle; */
  URControl_DW.DAQ.uv_prec[0] = rtb_enableMeas;
  URControl_DW.DAQ.precAngle[0] = rtb_fcn5;
  URControl_DW.DAQ.uv_prec[1] = errorSum;
  URControl_DW.DAQ.precAngle[1] = rtb_Product1;

  /* MATLAB Function: '<S5>/yawRateControl' incorporates:
   *  MATLAB Function: '<S7>/basic estimators'
   */
  /* :  [w_min, w_max, MzGain, DAQ] = URFailureYawRateControl(state, DAQ, par, URControlParams); */
  /* 'URFailureYawRateControl:4' w_max = ones(4,1)*par.wRotorMax; */
  /* 'URFailureYawRateControl:5' w_min = ones(4,1)*par.wRotorMin; */
  qconj[0] = 1200.0;
  FMin[1] = 0.0;
  qconj[2] = 1200.0;
  FMin[3] = 0.0;

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
    rtb_sincos_o1_idx_1 = (URControl_DW.State.n[2] -
      URControlParams.YRCFail_nLim2) / (URControlParams.YRCFail_nLim1 -
      URControlParams.YRCFail_nLim2);
    if (!(rtb_sincos_o1_idx_1 < 1.0)) {
      rtb_sincos_o1_idx_1 = 1.0;
    }

    if (!(rtb_sincos_o1_idx_1 > 0.0)) {
      rtb_sincos_o1_idx_1 = 0.0;
    }

    errorSum = (URControl_DW.State.omegaf[2] * rt_powd_snf(-1.0,
      URControl_DW.State.fail_id) - URControlParams.YRCFail_yawRateTarget) *
      rtb_sincos_o1_idx_1;

    /* 'URFailureYawRateControl:18' if URpar.YRCFail_mode == 1 */
    if (URControlParams.YRCFail_mode == 1.0) {
      /* 'URFailureYawRateControl:19' dw = -error*URpar.YRCFail_Kp_dw; */
      /* 'URFailureYawRateControl:21' lim = par.wRotorMax - par.wRotorMin; */
      /* 'URFailureYawRateControl:22' dw = max(min(dw, lim), 0); */
      errorSum = -errorSum * URControlParams.YRCFail_Kp_dw;
      if (!(errorSum < 1200.0)) {
        errorSum = 1200.0;
      }

      if (!(errorSum > 0.0)) {
        errorSum = 0.0;
      }

      /* 'URFailureYawRateControl:25' w_max = w_max - [dw; 0; dw; 0]; */
      qconj[0] = 1200.0 - errorSum;
      qconj[2] = 1200.0 - errorSum;

      /* 'URFailureYawRateControl:26' w_min = w_min + [0; dw; 0; dw]; */
      FMin[1] = errorSum;
      FMin[3] = errorSum;
    } else {
      if (URControlParams.YRCFail_mode == 2.0) {
        /* 'URFailureYawRateControl:28' elseif URpar.YRCFail_mode == 2 */
        /* 'URFailureYawRateControl:29' dMzGain = -error*URpar.YRCFail_Kp_dMzGain; */
        /* 'URFailureYawRateControl:30' dMzGain = max(dMzGain,0); */
        rtb_enableMeas = -errorSum * URControlParams.YRCFail_Kp_dMzGain;
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
  rEQ0 = (0.05 - URControl_B.Probe[0] <= 0.0);

  /* DiscreteIntegrator: '<S12>/Integrator' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion8'
   *  Inport: '<Root>/pos_sp'
   */
  if (URControl_DW.Integrator_IC_LOADING != 0) {
    URControl_DW.Integrator_DSTATE[0] = URControl_U.pos_sp[0];
    URControl_DW.Integrator_DSTATE[1] = URControl_U.pos_sp[1];
    URControl_DW.Integrator_DSTATE[2] = URControl_U.pos_sp[2];
  }

  if (rEQ0 || (URControl_DW.Integrator_PrevResetState != 0)) {
    URControl_DW.Integrator_DSTATE[0] = URControl_U.pos_sp[0];
    URControl_DW.Integrator_DSTATE[1] = URControl_U.pos_sp[1];
    URControl_DW.Integrator_DSTATE[2] = URControl_U.pos_sp[2];
  }

  /* RelationalOperator: '<S15>/Compare' incorporates:
   *  Constant: '<S13>/Time constant'
   *  Constant: '<S15>/Constant'
   *  Sum: '<S13>/Sum1'
   */
  rtb_Compare_j = (0.05 - URControl_B.Probe_d[0] <= 0.0);

  /* DiscreteIntegrator: '<S16>/Integrator' incorporates:
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
   *  DiscreteIntegrator: '<S12>/Integrator'
   *  MATLAB Function: '<S7>/basic estimators'
   */
  /* :  [n_des, DAQ] = URpositionControl(inputs, state, DAQ, par, URControlParams); */
  /* 'URpositionControl:3' if isempty(errorInt) */
  /* 'URpositionControl:6' if state.fail_id > 0 */
  if (URControl_DW.State.fail_id > 0.0) {
    /* 'URpositionControl:8' maxAngle = URpar.position_maxAngleFailure; */
    rtb_fcn5 = URControlParams.position_maxAngleFailure;

    /* 'URpositionControl:9' overallGain = URpar.position_failGain; */
    errorSum = URControlParams.position_failGain;
  } else {
    /* 'URpositionControl:10' else */
    /* 'URpositionControl:11' maxAngle = URpar.position_maxAngle; */
    rtb_fcn5 = URControlParams.position_maxAngle;

    /* 'URpositionControl:12' overallGain = 1; */
    errorSum = 1.0;
  }

  /* 'URpositionControl:16' errorPos = [inputs.xTarget, inputs.yTarget, inputs.zTarget]  - state.posf; */
  /* 'URpositionControl:17' velTarget = URpar.position_Kp_pos.*errorPos*overallGain; */
  /* 'URpositionControl:18' maxVel = URpar.position_maxVel; */
  /* 'URpositionControl:19' velTarget = max(min(velTarget,maxVel),-maxVel); */
  /* 'URpositionControl:22' errorVel = velTarget - state.velf; */
  /* 'URpositionControl:23' errorInt = errorInt + errorVel/par.freq; */
  /* 'URpositionControl:24' intLim = URpar.position_intLim; */
  /* 'URpositionControl:25' errorInt = max(min(errorInt,intLim),-intLim); */
  /* 'URpositionControl:28' a_ref = URpar.position_Kp_vel.*errorVel*overallGain + URpar.position_Ki_vel.*errorInt*overallGain; */
  Mu_max = (URControl_DW.Integrator_DSTATE[0] - URControl_DW.State.posf[0]) *
    URControlParams.position_Kp_pos[0] * errorSum;
  tmp_4 = rtIsNaN(URControlParams.position_maxVel);
  if ((Mu_max < URControlParams.position_maxVel) || tmp_4) {
    rtb_Product2 = Mu_max;
  } else {
    rtb_Product2 = URControlParams.position_maxVel;
  }

  tmp_3 = rtIsNaN(-URControlParams.position_maxVel);
  if ((rtb_Product2 > -URControlParams.position_maxVel) || tmp_3) {
    Mu_max = rtb_Product2;
  } else {
    Mu_max = -URControlParams.position_maxVel;
  }

  rtb_Product1 = Mu_max - URControl_DW.State.velf[0];
  URControl_DW.errorInt_o[0] += rtb_Product1 / 500.0;
  tmp_5 = rtIsNaN(URControlParams.position_intLim);
  if ((URControl_DW.errorInt_o[0] < URControlParams.position_intLim) || tmp_5) {
    rtb_Product2 = URControl_DW.errorInt_o[0];
  } else {
    rtb_Product2 = URControlParams.position_intLim;
  }

  tmp_6 = rtIsNaN(-URControlParams.position_intLim);
  if ((rtb_Product2 > -URControlParams.position_intLim) || tmp_6) {
    URControl_DW.errorInt_o[0] = rtb_Product2;
  } else {
    URControl_DW.errorInt_o[0] = -URControlParams.position_intLim;
  }

  rtb_sincos_o1_idx_0 = URControlParams.position_Kp_vel[0] * rtb_Product1 *
    errorSum + URControlParams.position_Ki_vel[0] * URControl_DW.errorInt_o[0] *
    errorSum;
  velTarget[0] = Mu_max;
  Mu_max = (URControl_DW.Integrator_DSTATE[1] - URControl_DW.State.posf[1]) *
    URControlParams.position_Kp_pos[1] * errorSum;
  if ((Mu_max < URControlParams.position_maxVel) || tmp_4) {
    rtb_Product2 = Mu_max;
  } else {
    rtb_Product2 = URControlParams.position_maxVel;
  }

  if ((rtb_Product2 > -URControlParams.position_maxVel) || tmp_3) {
    Mu_max = rtb_Product2;
  } else {
    Mu_max = -URControlParams.position_maxVel;
  }

  rtb_Product1 = Mu_max - URControl_DW.State.velf[1];
  URControl_DW.errorInt_o[1] += rtb_Product1 / 500.0;
  if ((URControl_DW.errorInt_o[1] < URControlParams.position_intLim) || tmp_5) {
    rtb_Product2 = URControl_DW.errorInt_o[1];
  } else {
    rtb_Product2 = URControlParams.position_intLim;
  }

  if ((rtb_Product2 > -URControlParams.position_intLim) || tmp_6) {
    URControl_DW.errorInt_o[1] = rtb_Product2;
  } else {
    URControl_DW.errorInt_o[1] = -URControlParams.position_intLim;
  }

  rtb_sincos_o1_idx_1 = URControlParams.position_Kp_vel[1] * rtb_Product1 *
    errorSum + URControlParams.position_Ki_vel[1] * URControl_DW.errorInt_o[1] *
    errorSum;
  velTarget[1] = Mu_max;
  Mu_max = (URControl_DW.Integrator_DSTATE[2] - URControl_DW.State.posf[2]) *
    URControlParams.position_Kp_pos[2] * errorSum;
  if ((Mu_max < URControlParams.position_maxVel) || tmp_4) {
    rtb_Product2 = Mu_max;
  } else {
    rtb_Product2 = URControlParams.position_maxVel;
  }

  if ((rtb_Product2 > -URControlParams.position_maxVel) || tmp_3) {
    Mu_max = rtb_Product2;
  } else {
    Mu_max = -URControlParams.position_maxVel;
  }

  rtb_Product1 = Mu_max - URControl_DW.State.velf[2];
  URControl_DW.errorInt_o[2] += rtb_Product1 / 500.0;
  if ((URControl_DW.errorInt_o[2] < URControlParams.position_intLim) || tmp_5) {
    rtb_Product2 = URControl_DW.errorInt_o[2];
  } else {
    rtb_Product2 = URControlParams.position_intLim;
  }

  if ((rtb_Product2 > -URControlParams.position_intLim) || tmp_6) {
    URControl_DW.errorInt_o[2] = rtb_Product2;
  } else {
    URControl_DW.errorInt_o[2] = -URControlParams.position_intLim;
  }

  rtb_Product1 = URControlParams.position_Kp_vel[2] * rtb_Product1 * errorSum +
    URControlParams.position_Ki_vel[2] * URControl_DW.errorInt_o[2] * errorSum;

  /* 'URpositionControl:30' a_ref(3) = a_ref(3) - par.g; */
  /* 'URpositionControl:31' a_ref(3) = min(a_ref(3), par.URC.position_maxAref); */
  if (rtb_Product1 - 9.81 < -2.0) {
    Mu_min = rtb_Product1 - 9.81;
  } else {
    Mu_min = -2.0;
  }

  /* 'URpositionControl:34' maxLateral = abs(par.g*tan(maxAngle)); */
  /* 'URpositionControl:35' latRatio = sqrt(a_ref(1)^2 + a_ref(2)^2)/maxLateral; */
  errorSum = std::sqrt(rtb_sincos_o1_idx_0 * rtb_sincos_o1_idx_0 +
                       rtb_sincos_o1_idx_1 * rtb_sincos_o1_idx_1) / std::abs
    (9.81 * std::tan(rtb_fcn5));

  /* 'URpositionControl:36' a_ref(1) = a_ref(1)/(max(latRatio,1)); */
  if (errorSum > 1.0) {
    rtb_Product2 = errorSum;
  } else {
    rtb_Product2 = 1.0;
    errorSum = 1.0;
  }

  rtb_sincos_o1_idx_0 /= rtb_Product2;

  /* 'URpositionControl:37' a_ref(2) = a_ref(2)/(max(latRatio,1)); */
  rtb_sincos_o1_idx_1 /= errorSum;

  /* 'URpositionControl:43' n_des = a_ref/norm(a_ref); */
  errorSum = 3.3121686421112381E-170;
  rtb_Product1 = std::abs(rtb_sincos_o1_idx_0);
  if (rtb_Product1 > 3.3121686421112381E-170) {
    rtb_fcn5 = 1.0;
    errorSum = rtb_Product1;
  } else {
    rtb_Product2 = rtb_Product1 / 3.3121686421112381E-170;
    rtb_fcn5 = rtb_Product2 * rtb_Product2;
  }

  rtb_Product1 = std::abs(rtb_sincos_o1_idx_1);
  if (rtb_Product1 > errorSum) {
    rtb_Product2 = errorSum / rtb_Product1;
    rtb_fcn5 = rtb_fcn5 * rtb_Product2 * rtb_Product2 + 1.0;
    errorSum = rtb_Product1;
  } else {
    rtb_Product2 = rtb_Product1 / errorSum;
    rtb_fcn5 += rtb_Product2 * rtb_Product2;
  }

  rtb_Product1 = std::abs(Mu_min);
  if (rtb_Product1 > errorSum) {
    rtb_Product2 = errorSum / rtb_Product1;
    rtb_fcn5 = rtb_fcn5 * rtb_Product2 * rtb_Product2 + 1.0;
    errorSum = rtb_Product1;
  } else {
    rtb_Product2 = rtb_Product1 / errorSum;
    rtb_fcn5 += rtb_Product2 * rtb_Product2;
  }

  rtb_fcn5 = errorSum * std::sqrt(rtb_fcn5);
  rtb_n_des[0] = rtb_sincos_o1_idx_0 / rtb_fcn5;
  rtb_n_des[1] = rtb_sincos_o1_idx_1 / rtb_fcn5;
  rtb_n_des[2] = Mu_min / rtb_fcn5;

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
  URControl_DW.DAQ.velTarget[0] = velTarget[0];
  URControl_DW.DAQ.a_ref[0] = rtb_sincos_o1_idx_0;
  URControl_DW.DAQ.n_des[0] = rtb_n_des[0];
  URControl_DW.DAQ.velTarget[1] = velTarget[1];
  URControl_DW.DAQ.a_ref[1] = rtb_sincos_o1_idx_1;
  URControl_DW.DAQ.n_des[1] = rtb_n_des[1];
  URControl_DW.DAQ.velTarget[2] = Mu_max;
  URControl_DW.DAQ.a_ref[2] = Mu_min;
  URControl_DW.DAQ.n_des[2] = rtb_n_des[2];

  /* End of MATLAB Function: '<S4>/position control' */

  /* DiscreteStateSpace: '<S5>/Discrete State-Space' */
  {
    rtb_DiscreteStateSpace[0] = (1.0)*URControl_DW.DiscreteStateSpace_DSTATE[0];
    rtb_DiscreteStateSpace[1] = (1.0)*URControl_DW.DiscreteStateSpace_DSTATE[1];
    rtb_DiscreteStateSpace[2] = (1.0)*URControl_DW.DiscreteStateSpace_DSTATE[2];
  }

  /* MATLAB Function: '<S4>/yaw rate control' incorporates:
   *  DiscreteIntegrator: '<S16>/Integrator'
   *  MATLAB Function: '<S5>/attitude controller'
   *  MATLAB Function: '<S7>/basic estimators'
   */
  /* :  [r_cmd, DAQ] = URYawControl(inputs, state, DAQ, par, URControlParams); */
  /* 'URYawControl:3' psiError = inputs.yawTarget - state.att(3); */
  /* 'URYawControl:4' psi_dot_cmd = psiError*URpar.YRC_Kp_psi; */
  /* 'URYawControl:6' r_cmd = psi_dot_cmd*cos(state.att(1))*cos(state.att(2))-sin(state.att(1))*state.omegaf(2); */
  rtb_fcn5 = std::cos(URControl_DW.State.att[1]);
  rtb_Product1 = std::sin(URControl_DW.State.att[0]);
  rtb_Product2 = std::cos(URControl_DW.State.att[0]);
  errorSum = (URControl_DW.Integrator_DSTATE_i - URControl_DW.State.att[2]) *
    URControlParams.YRC_Kp_psi * rtb_Product2 * rtb_fcn5 - rtb_Product1 *
    URControl_DW.State.omegaf[1];

  /* 'URYawControl:8' if URpar.YRC_mode == 2 */
  if (URControlParams.YRC_mode == 2.0) {
    /* 'URYawControl:9' r_cmd = URpar.YRC_rateCmd; */
    errorSum = URControlParams.YRC_rateCmd;
  }

  /* 'URYawControl:13' if state.fail_id > 0 */
  if (URControl_DW.State.fail_id > 0.0) {
    /* 'URYawControl:14' yawDirection = (-1)^(state.fail_id); */
    /* 'URYawControl:15' r_cmd = yawDirection*URpar.YRC_r_cmd_fail; */
    errorSum = rt_powd_snf(-1.0, URControl_DW.State.fail_id) *
      URControlParams.YRC_r_cmd_fail;
  }

  /* 'URYawControl:19' if URpar.YRC_enable == 0 */
  if (URControlParams.YRC_enable == 0.0) {
    /* 'URYawControl:20' r_cmd = 0; */
    errorSum = 0.0;
  }

  /* 'URYawControl:25' daq.r_cmd = r_cmd; */
  URControl_DW.DAQ.r_cmd = errorSum;

  /* MATLAB Function: '<S5>/attitude controller' incorporates:
   *  MATLAB Function: '<S4>/yaw rate control'
   *  MATLAB Function: '<S5>/yawRateControl'
   *  MATLAB Function: '<S7>/basic estimators'
   */
  /* :  [pqr_des, uvr_des, w_max, w_min, MzGain, DAQ] = URAttitudeController(state, DAQ, uv_prec, precAngle, w_min, w_max, MzGain, nd_i,ndi_dot,r_cmd,par,URControlParams); */
  /* 'URAttitudeController:7' primAxis = [-sin(precAngle(2)), sin(precAngle(1)), -1*cos(precAngle(1))*cos(precAngle(2))]; */
  rtb_att[0] = -std::sin(u_max);
  rtb_att[1] = std::sin(Mv_min);
  rtb_att[2] = -std::cos(Mv_min) * std::cos(u_max);

  /* 'URAttitudeController:9' [uv_attCtrl, rotVec, daq] = URAngleControl(daq, nd_i, primAxis, state, par, URpar); */
  /* 'URAngleControl:3' phi = state.att(1); */
  /* 'URAngleControl:4' theta = state.att(2); */
  /* 'URAngleControl:5' psi = state.att(3); */
  /* 'URAngleControl:8' R_BI = [cos(theta)*cos(psi) cos(theta)*sin(psi) -sin(theta); */
  /* 'URAngleControl:9'         sin(phi)*sin(theta)*cos(psi)-cos(phi)*sin(psi) sin(phi)*sin(theta)*sin(psi)+cos(phi)*cos(psi) sin(phi)*cos(theta); */
  /* 'URAngleControl:10'         cos(phi)*sin(theta)*cos(psi)+sin(phi)*sin(psi) cos(phi)*sin(theta)*sin(psi)-sin(phi)*cos(psi) cos(phi)*cos(theta)]; */
  /* 'URAngleControl:13' h = R_BI*nd_i; */
  rtb_sincos_o1_idx_0 = std::cos(URControl_DW.State.att[2]);
  R_IB[0] = rtb_fcn5 * rtb_sincos_o1_idx_0;
  Mv_min = std::sin(URControl_DW.State.att[2]);
  R_IB[3] = rtb_fcn5 * Mv_min;
  u_max = std::sin(URControl_DW.State.att[1]);
  R_IB[6] = -u_max;
  rtb_sincos_o1_idx_1 = rtb_Product1 * u_max;
  R_IB[1] = rtb_sincos_o1_idx_1 * rtb_sincos_o1_idx_0 - rtb_Product2 * Mv_min;
  R_IB[4] = rtb_sincos_o1_idx_1 * Mv_min + rtb_Product2 * rtb_sincos_o1_idx_0;
  R_IB[7] = rtb_Product1 * rtb_fcn5;
  u_max *= rtb_Product2;
  R_IB[2] = u_max * rtb_sincos_o1_idx_0 + rtb_Product1 * Mv_min;
  R_IB[5] = u_max * Mv_min - rtb_Product1 * rtb_sincos_o1_idx_0;
  R_IB[8] = rtb_Product2 * rtb_fcn5;
  for (r2 = 0; r2 < 3; r2++) {
    velTarget[r2] = R_IB[r2 + 6] * rtb_n_des[2] + (R_IB[r2 + 3] * rtb_n_des[1] +
      R_IB[r2] * rtb_n_des[0]);
  }

  /* 'URAngleControl:15' h_uv = [par.URC.R_xy_uv*h(1:2); h(3)]; */
  rtb_sincos_o1_idx_0 = URControl_ConstP.attitudecontroller_par.URC.R_xy_uv[0] *
    velTarget[0] + URControl_ConstP.attitudecontroller_par.URC.R_xy_uv[2] *
    velTarget[1];
  rtb_sincos_o1_idx_1 = URControl_ConstP.attitudecontroller_par.URC.R_xy_uv[1] *
    velTarget[0] + URControl_ConstP.attitudecontroller_par.URC.R_xy_uv[3] *
    velTarget[1];

  /* 'URAngleControl:17' n = primAxis; */
  /* 'URAngleControl:20' currRotVec = [state.omegaUV(1); state.omegaUV(2); 0]; */
  /* 'URAngleControl:23' totAngle = atan2(norm(cross(h_uv,n)),dot(h_uv,n)); */
  Mv_min = rtb_sincos_o1_idx_1 * rtb_att[2] - velTarget[2] * rtb_att[1];
  rtb_sincos_o1_0[0] = Mv_min;
  u_max = velTarget[2] * rtb_att[0] - rtb_sincos_o1_idx_0 * rtb_att[2];
  rtb_sincos_o1_0[1] = u_max;
  rtb_Product2 = rtb_sincos_o1_idx_0 * rtb_att[1] - rtb_sincos_o1_idx_1 *
    rtb_att[0];
  rtb_sincos_o1_0[2] = rtb_Product2;
  rtb_fcn5 = rt_atan2d_snf(norm_UkJeSx98(rtb_sincos_o1_0), (rtb_sincos_o1_idx_0 *
    rtb_att[0] + rtb_sincos_o1_idx_1 * rtb_att[1]) + velTarget[2] * rtb_att[2]);

  /* 'URAngleControl:26' rotVec3 = cross(h_uv,n); */
  rtb_u2[0] = Mv_min;
  rtb_u2[1] = u_max;
  rtb_u2[2] = rtb_Product2;

  /* 'URAngleControl:27' rotVec3 = rotVec3/max(abs(norm(rotVec3)),0.001); */
  rtb_Product1 = std::abs(norm_UkJeSx98(rtb_u2));
  if (!(rtb_Product1 > 0.001)) {
    rtb_Product1 = 0.001;
  }

  rtb_u2[0] = Mv_min / rtb_Product1;
  rtb_u2[1] = u_max / rtb_Product1;

  /* 'URAngleControl:28' rotVec = rotVec3(1:2); */
  Mv_min = rtb_u2[0];
  u_max = rtb_u2[1];

  /* 'URAngleControl:30' speedAroundVec = dot(currRotVec, rotVec3); */
  rtb_Product2 = (URControl_DW.State.omegaUV[0] * rtb_u2[0] +
                  URControl_DW.State.omegaUV[1] * rtb_u2[1]) + rtb_Product2 /
    rtb_Product1 * 0.0;

  /* 'URAngleControl:32' if par.URC.attitude_enableTraj == 1 && totAngle > par.URC.attitude_trajThreshold */
  if (rtb_fcn5 > 1.2217304763960306) {
    /* 'URAngleControl:33' tNormal = URTrajCalc(totAngle, -speedAroundVec, URpar.attitude_rotSpeedComp); */
    rtb_Product1 = URTrajCalc_RjTVAO9s(rtb_fcn5, -rtb_Product2,
      URControlParams.attitude_rotSpeedComp);

    /* 'URAngleControl:34' tReverse = URTrajCalc(2*pi - totAngle, speedAroundVec, URpar.attitude_rotSpeedComp); */
    rtb_Product2 = URTrajCalc_RjTVAO9s(6.2831853071795862 - rtb_fcn5,
      rtb_Product2, URControlParams.attitude_rotSpeedComp);

    /* 'URAngleControl:36' if tNormal > 0 && tReverse > 0 */
    if ((rtb_Product1 > 0.0) && (rtb_Product2 > 0.0) && (rtb_Product1 >
         rtb_Product2)) {
      /* 'URAngleControl:37' if tNormal > tReverse */
      /* 'URAngleControl:38' rotVec = -rotVec; */
      Mv_min = -rtb_u2[0];
      u_max = -rtb_u2[1];
    }
  }

  /* 'URAngleControl:43' rotAction = abs(totAngle)*URpar.attitude_rotKp; */
  rtb_fcn5 = std::abs(rtb_fcn5) * URControlParams.attitude_rotKp;

  /* 'URAngleControl:45' uv_attCtrl = [rotVec(1); rotVec(2)]*rotAction; */
  /* 'URAngleControl:50' uv_yrcComp = -[h_uv(1); h_uv(2)]*state.omegaUV(3)*URpar.attitude_yrcComp; */
  /* 'URAngleControl:52' uv_attCtrl = uv_attCtrl + uv_yrcComp; */
  /* 'URAttitudeController:12' uv_des_raw = (uv_prec + uv_attCtrl); */
  rtb_Product2 = -rtb_sincos_o1_idx_0 * URControl_DW.State.omegaUV[2] *
    URControlParams.attitude_yrcComp + Mv_min * rtb_fcn5;
  URControl_DW.DAQ.uv_attCtrl[0] = rtb_Product2;
  dummy_idx_0 += rtb_Product2;
  rtb_Product2 = -rtb_sincos_o1_idx_1 * URControl_DW.State.omegaUV[2] *
    URControlParams.attitude_yrcComp + u_max * rtb_fcn5;
  rtb_Product1 = dummy_idx_1 + rtb_Product2;

  /* 'URAttitudeController:19' if URpar.envp_enable == 1 */
  if (URControlParams.envp_enable == 1.0) {
    /* 'URAttitudeController:20' uv_des = min(max(uv_des_raw, state.uv_min), state.uv_max); */
    if ((dummy_idx_0 > URControl_DW.State.uv_min[0]) || rtIsNaN
        (URControl_DW.State.uv_min[0])) {
      u_max = dummy_idx_0;
    } else {
      u_max = URControl_DW.State.uv_min[0];
    }

    if ((u_max < URControl_DW.State.uv_max[0]) || rtIsNaN
        (URControl_DW.State.uv_max[0])) {
      Mv_min = u_max;
    } else {
      Mv_min = URControl_DW.State.uv_max[0];
    }

    if ((rtb_Product1 > URControl_DW.State.uv_min[1]) || rtIsNaN
        (URControl_DW.State.uv_min[1])) {
      u_max = rtb_Product1;
    } else {
      u_max = URControl_DW.State.uv_min[1];
    }

    if ((!(u_max < URControl_DW.State.uv_max[1])) && (!rtIsNaN
         (URControl_DW.State.uv_max[1]))) {
      u_max = URControl_DW.State.uv_max[1];
    }
  } else {
    /* 'URAttitudeController:21' else */
    /* 'URAttitudeController:22' uv_des = uv_des_raw; */
    Mv_min = dummy_idx_0;
    u_max = rtb_Product1;
  }

  /* 'URAttitudeController:26' uv_des = max(min(uv_des,URpar.attitude_maxuv_des),-URpar.attitude_maxuv_des); */
  tmp_4 = rtIsNaN(URControlParams.attitude_maxuv_des);
  if ((!(Mv_min < URControlParams.attitude_maxuv_des)) && (!tmp_4)) {
    Mv_min = URControlParams.attitude_maxuv_des;
  }

  tmp_3 = rtIsNaN(-URControlParams.attitude_maxuv_des);
  if ((Mv_min > -URControlParams.attitude_maxuv_des) || tmp_3) {
    dummy_idx_1 = Mv_min;
    b_z1[0] = Mv_min;
  } else {
    dummy_idx_1 = -URControlParams.attitude_maxuv_des;
    b_z1[0] = -URControlParams.attitude_maxuv_des;
  }

  if ((u_max < URControlParams.attitude_maxuv_des) || tmp_4) {
    Mv_min = u_max;
  } else {
    Mv_min = URControlParams.attitude_maxuv_des;
  }

  if ((Mv_min > -URControlParams.attitude_maxuv_des) || tmp_3) {
    b_z1[1] = Mv_min;
  } else {
    Mv_min = -URControlParams.attitude_maxuv_des;
    b_z1[1] = -URControlParams.attitude_maxuv_des;
  }

  /* 'URAttitudeController:29' pq_des = par.URC.R_xy_uv\uv_des; */
  if (std::abs(URControl_ConstP.attitudecontroller_par.URC.R_xy_uv[1]) > std::
      abs(URControl_ConstP.attitudecontroller_par.URC.R_xy_uv[0])) {
    i = 1;
    r2 = 0;
  } else {
    i = 0;
    r2 = 1;
  }

  rtb_fcn5 = URControl_ConstP.attitudecontroller_par.URC.R_xy_uv[r2] /
    URControl_ConstP.attitudecontroller_par.URC.R_xy_uv[i];
  rtb_sincos_o1_idx_0 = URControl_ConstP.attitudecontroller_par.URC.R_xy_uv[2 +
    i];
  u_max = (b_z1[r2] - b_z1[i] * rtb_fcn5) /
    (URControl_ConstP.attitudecontroller_par.URC.R_xy_uv[2 + r2] -
     rtb_sincos_o1_idx_0 * rtb_fcn5);

  /* 'URAttitudeController:31' pqr_des = [pq_des; r_cmd]; */
  rtb_att[2] = errorSum;

  /* 'URAttitudeController:32' uvr_des = [uv_des; r_cmd]; */
  velTarget[0] = dummy_idx_1;
  velTarget[1] = Mv_min;
  velTarget[2] = errorSum;

  /* 'URAttitudeController:35' daq.pqr_des = pqr_des; */
  /* 'URAttitudeController:36' daq.uvr_des = uvr_des; */
  rtb_sincos_o1_idx_0 = (b_z1[i] - rtb_sincos_o1_idx_0 * u_max) /
    URControl_ConstP.attitudecontroller_par.URC.R_xy_uv[i];
  URControl_DW.DAQ.pqr_des[0] = rtb_sincos_o1_idx_0;
  URControl_DW.DAQ.uvr_des[0] = b_z1[0];
  URControl_DW.DAQ.pqr_des[1] = u_max;
  URControl_DW.DAQ.uvr_des[1] = b_z1[1];
  URControl_DW.DAQ.pqr_des[2] = errorSum;
  URControl_DW.DAQ.uvr_des[2] = errorSum;

  /* 'URAttitudeController:37' daq.uv_des_raw = uv_des_raw; */
  /* 'URAttitudeController:38' daq.uv_des = uv_des; */
  /* 'URAttitudeController:39' daq.uv_attCtrl = uv_attCtrl; */
  URControl_DW.DAQ.uv_des_raw[0] = dummy_idx_0;
  URControl_DW.DAQ.uv_des[0] = dummy_idx_1;
  URControl_DW.DAQ.uv_des_raw[1] = rtb_Product1;
  URControl_DW.DAQ.uv_des[1] = Mv_min;
  URControl_DW.DAQ.uv_attCtrl[1] = rtb_Product2;

  /* 'URAttitudeController:40' daq.w_max = w_max; */
  /* 'URAttitudeController:41' daq.w_min = w_min; */
  URControl_DW.DAQ.w_max[0] = qconj[0];
  URControl_DW.DAQ.w_min[0] = 0.0;
  URControl_DW.DAQ.w_max[1] = 1200.0;
  URControl_DW.DAQ.w_min[1] = FMin[1];
  URControl_DW.DAQ.w_max[2] = qconj[2];
  URControl_DW.DAQ.w_min[2] = 0.0;
  URControl_DW.DAQ.w_max[3] = 1200.0;
  URControl_DW.DAQ.w_min[3] = FMin[3];

  /* 'URAttitudeController:42' daq.MzGain = MzGain; */
  URControl_DW.DAQ.MzGain = rtb_enableMeas;

  /* MATLAB Function: '<S4>/altitude control' incorporates:
   *  DiscreteIntegrator: '<S12>/Integrator'
   *  MATLAB Function: '<S7>/basic estimators'
   */
  /* :  [Ftot_ref, DAQ] = URAltitudeControl(inputs, state, DAQ, par, URControlParams); */
  /* 'URAltitudeControl:3' if isempty(errorInt) */
  /* 'URAltitudeControl:6' errorPos = inputs.zTarget  - state.pos(3); */
  /* 'URAltitudeControl:7' velTarget = URpar.altitude_Kp_pos.*errorPos; */
  /* 'URAltitudeControl:8' if state.fail_id > 0 */
  if (URControl_DW.State.fail_id > 0.0) {
    /* 'URAltitudeControl:9' maxVel = URpar.altitude_maxVelFail; */
    errorSum = URControlParams.altitude_maxVelFail;
  } else {
    /* 'URAltitudeControl:10' else */
    /* 'URAltitudeControl:11' maxVel = URpar.altitude_maxVel; */
    errorSum = URControlParams.altitude_maxVel;
  }

  /* 'URAltitudeControl:13' velTarget = max(min(velTarget,maxVel),-maxVel); */
  /* 'URAltitudeControl:17' errorVel = velTarget - state.vel(3); */
  rtb_sincos_o1_idx_1 = (URControl_DW.Integrator_DSTATE[2] -
    URControl_DW.State.pos[2]) * URControlParams.altitude_Kp_pos;
  if ((!(rtb_sincos_o1_idx_1 < errorSum)) && (!rtIsNaN(errorSum))) {
    rtb_sincos_o1_idx_1 = errorSum;
  }

  if ((!(rtb_sincos_o1_idx_1 > -errorSum)) && (!rtIsNaN(-errorSum))) {
    rtb_sincos_o1_idx_1 = -errorSum;
  }

  errorSum = rtb_sincos_o1_idx_1 - URControl_DW.State.vel[2];

  /* 'URAltitudeControl:18' errorInt = errorInt + errorVel/par.freq; */
  URControl_DW.errorInt_g += errorSum / 500.0;

  /* 'URAltitudeControl:19' intLim = URpar.altitude_intLim; */
  /* 'URAltitudeControl:20' errorInt = max(min(errorInt,intLim),-intLim); */
  if ((URControl_DW.errorInt_g < URControlParams.altitude_intLim) || rtIsNaN
      (URControlParams.altitude_intLim)) {
    rtb_sincos_o1_idx_1 = URControl_DW.errorInt_g;
  } else {
    rtb_sincos_o1_idx_1 = URControlParams.altitude_intLim;
  }

  if ((rtb_sincos_o1_idx_1 > -URControlParams.altitude_intLim) || rtIsNaN
      (-URControlParams.altitude_intLim)) {
    URControl_DW.errorInt_g = rtb_sincos_o1_idx_1;
  } else {
    URControl_DW.errorInt_g = -URControlParams.altitude_intLim;
  }

  /* 'URAltitudeControl:23' az_ref = URpar.altitude_Kp_vel.*errorVel + URpar.altitude_Ki_vel.*errorInt; */
  /* 'URAltitudeControl:24' peakAngle = URpar.altitude_peakAngle; */
  /* 'URAltitudeControl:28' multiFactor = 1/(cos(max(min(state.att(1),peakAngle),-peakAngle))*cos(max(min(state.att(2),peakAngle),-peakAngle))); */
  /* 'URAltitudeControl:29' Ftot_ref = -(az_ref - par.g)*par.mass*multiFactor; */
  /* 'URAltitudeControl:30' Ftot_ref = max(Ftot_ref,0); */
  tmp_4 = rtIsNaN(URControlParams.altitude_peakAngle);
  if ((URControl_DW.State.att[1] < URControlParams.altitude_peakAngle) || tmp_4)
  {
    rtb_sincos_o1_idx_1 = URControl_DW.State.att[1];
  } else {
    rtb_sincos_o1_idx_1 = URControlParams.altitude_peakAngle;
  }

  if ((URControl_DW.State.att[0] < URControlParams.altitude_peakAngle) || tmp_4)
  {
    rtb_fcn5 = URControl_DW.State.att[0];
  } else {
    rtb_fcn5 = URControlParams.altitude_peakAngle;
  }

  tmp_4 = rtIsNaN(-URControlParams.altitude_peakAngle);
  if ((!(rtb_fcn5 > -URControlParams.altitude_peakAngle)) && (!tmp_4)) {
    rtb_fcn5 = -URControlParams.altitude_peakAngle;
  }

  if ((!(rtb_sincos_o1_idx_1 > -URControlParams.altitude_peakAngle)) && (!tmp_4))
  {
    rtb_sincos_o1_idx_1 = -URControlParams.altitude_peakAngle;
  }

  errorSum = -((URControlParams.altitude_Kp_vel * errorSum +
                URControlParams.altitude_Ki_vel * URControl_DW.errorInt_g) -
               9.81) * 0.374 * (1.0 / (std::cos(rtb_fcn5) * std::cos
    (rtb_sincos_o1_idx_1)));
  if (!(errorSum > 0.0)) {
    errorSum = 0.0;
  }

  /* 'URAltitudeControl:31' maxAngle = max(abs(state.att(1)),abs(state.att(2))); */
  rtb_sincos_o1_idx_1 = std::abs(URControl_DW.State.att[0]);
  rtb_fcn5 = std::abs(URControl_DW.State.att[1]);
  if ((rtb_sincos_o1_idx_1 > rtb_fcn5) || rtIsNaN(rtb_fcn5)) {
    rtb_fcn5 = rtb_sincos_o1_idx_1;
  }

  /* 'URAltitudeControl:32' if maxAngle > URpar.altitude_peakAngle */
  if (rtb_fcn5 > URControlParams.altitude_peakAngle) {
    /* 'URAltitudeControl:34' redFactor = 1 - (maxAngle - URpar.altitude_peakAngle)/(URpar.altitude_LOCAngle - URpar.altitude_peakAngle); */
    /* 'URAltitudeControl:35' redFactor = max(min(redFactor,1),0); */
    /* 'URAltitudeControl:36' Ftot_ref = Ftot_ref*redFactor; */
    rtb_sincos_o1_idx_1 = 1.0 - (rtb_fcn5 - URControlParams.altitude_peakAngle) /
      (URControlParams.altitude_LOCAngle - URControlParams.altitude_peakAngle);
    if (!(rtb_sincos_o1_idx_1 < 1.0)) {
      rtb_sincos_o1_idx_1 = 1.0;
    }

    if (!(rtb_sincos_o1_idx_1 > 0.0)) {
      rtb_sincos_o1_idx_1 = 0.0;
    }

    errorSum *= rtb_sincos_o1_idx_1;
  }

  /* 'URAltitudeControl:42' maxFtot = sum(state.FMax)*URpar.altitude_maxFPerc; */
  /* 'URAltitudeControl:43' Ftot_ref = min(Ftot_ref,maxFtot); */
  rtb_fcn5 = (((URControl_DW.State.FMax[0] + URControl_DW.State.FMax[1]) +
               URControl_DW.State.FMax[2]) + URControl_DW.State.FMax[3]) *
    URControlParams.altitude_maxFPerc;
  if ((!(errorSum < rtb_fcn5)) && (!rtIsNaN(rtb_fcn5))) {
    errorSum = rtb_fcn5;
  }

  /* 'URAltitudeControl:45' if URpar.altitude_enable == 0 */
  if (URControlParams.altitude_enable == 0.0) {
    /* 'URAltitudeControl:46' Ftot_ref = par.g*par.mass; */
    errorSum = 3.66894;
  }

  /* 'URAltitudeControl:50' daq.Ftot_ref = Ftot_ref; */
  URControl_DW.DAQ.Ftot_ref = errorSum;

  /* MATLAB Function: '<S8>/control allocator' incorporates:
   *  Inport: '<Root>/fail_flag'
   *  MATLAB Function: '<S4>/altitude control'
   *  MATLAB Function: '<S5>/attitude controller'
   *  MATLAB Function: '<S5>/yawRateControl'
   *  MATLAB Function: '<S7>/basic estimators'
   */
  /* :  [wRotorSet, DAQ] = URControl_alloc(state, DAQ, pqr_des, uvr_des, w_max, w_min, MzGain, Ftot_ref, fail_id_quick, par, URControlParams); */
  /* 'URControl_alloc:3' if isempty(y_state_prev) */
  /* 'URControl_alloc:4' if isempty(Fset_prev) */
  /* 'URControl_alloc:5' if isempty(M_uvr_set) */
  /* 'URControl_alloc:6' if isempty(omegaDot) */
  if (!URControl_DW.omegaDot_not_empty) {
    /* 'URControl_alloc:6' omegaDot = SimpleDerivative(URpar.rate_INDI_omegaDotFilterT, [0,0,0], 300, -300); */
    rtb_sincos_o1_0[0] = 0.0;
    rtb_sincos_o1_0[1] = 0.0;
    rtb_sincos_o1_0[2] = 0.0;
    SimpleDerivative_SimpleDerivati(&URControl_DW.omegaDot,
      URControlParams.rate_INDI_omegaDotFilterT, rtb_sincos_o1_0, 300.0, -300.0);
    URControl_DW.omegaDot_not_empty = true;
  }

  /* 'URControl_alloc:7' if isempty(accZFilt) */
  if (!URControl_DW.accZFilt_not_empty) {
    /* 'URControl_alloc:7' accZFilt = LPFilter(URpar.rate_INDI_accZFilterT, 0, 30, -30); */
    URControl_LPFilter_LPFilter_j(&URControl_DW.accZFilt,
      URControlParams.rate_INDI_accZFilterT);
    URControl_DW.accZFilt_not_empty = true;
  }

  /* 'URControl_alloc:9' wRotorSet = [0;0;0;0]; */
  wRotorSet[0] = 0.0;
  wRotorSet[1] = 0.0;
  wRotorSet[2] = 0.0;
  wRotorSet[3] = 0.0;

  /* 'URControl_alloc:11' if URpar.rate_mode == 1 */
  if (URControlParams.rate_mode == 1.0) {
    /* 'URControl_alloc:13' error = pqr_des - state.omegaf'; */
    /* 'URControl_alloc:14' pqr_des_dot = error.*URpar.rate_INDI_rateDotKp'; */
    rtb_att[0] = (rtb_sincos_o1_idx_0 - URControl_DW.State.omegaf[0]) *
      URControlParams.rate_INDI_rateDotKp[0];
    rtb_att[1] = (u_max - URControl_DW.State.omegaf[1]) *
      URControlParams.rate_INDI_rateDotKp[1];
    rtb_Product2 = (rtb_att[2] - URControl_DW.State.omegaf[2]) *
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
    rtb_Product1 = URControl_DW.accZFilt.minLim;
    if ((rtb_enableMeas < rtb_fcn5) || rtIsNaN(rtb_fcn5)) {
      rtb_fcn5 = rtb_enableMeas;
    }

    if ((rtb_fcn5 > rtb_Product1) || rtIsNaN(rtb_Product1)) {
      URControl_DW.accZFilt.value = rtb_fcn5;
    } else {
      URControl_DW.accZFilt.value = rtb_Product1;
    }

    /* 'URControl_alloc:23' [w_cmd]  = URINDI_allocator(state.fail_id, omegaDot.derValue', accZFilt.value, v, URpar.rate_INDI_G, [], state.wRotor', par); */
    rtb_sincos_o1_0[0] = URControl_DW.omegaDot.derValue[0];
    rtb_sincos_o1_0[1] = URControl_DW.omegaDot.derValue[1];
    rtb_sincos_o1_0[2] = URControl_DW.omegaDot.derValue[2];
    rtb_TmpSignalConversionAtSFun_j[0] = rtb_att[0];
    rtb_TmpSignalConversionAtSFun_j[1] = rtb_att[1];
    rtb_TmpSignalConversionAtSFun_j[2] = rtb_Product2;
    rtb_TmpSignalConversionAtSFun_j[3] = -errorSum / URControlParams.mass;
    memcpy(&tmp_0[0], &URControlParams.rate_INDI_G[0], sizeof(real_T) << 5U);
    URControl_URINDI_allocator(URControl_DW.State.fail_id, rtb_sincos_o1_0,
      URControl_DW.accZFilt.value, rtb_TmpSignalConversionAtSFun_j, tmp_0,
      URControl_DW.State.wRotor, &URControl_ConstP.controlallocator_par,
      wRotorSet);

    /* 'URControl_alloc:25' wRotorSet = w_cmd; */
    /* 'URControl_alloc:27' daq.pqr_des_dot = pqr_des_dot; */
    URControl_DW.DAQ.pqr_des_dot[0] = rtb_att[0];
    URControl_DW.DAQ.pqr_des_dot[1] = rtb_att[1];
    URControl_DW.DAQ.pqr_des_dot[2] = rtb_Product2;

    /* 'URControl_alloc:28' daq.omegaDot = omegaDot.derValue; */
    URControl_DW.DAQ.omegaDot[0] = URControl_DW.omegaDot.derValue[0];
    URControl_DW.DAQ.omegaDot[1] = URControl_DW.omegaDot.derValue[1];
    URControl_DW.DAQ.omegaDot[2] = URControl_DW.omegaDot.derValue[2];
  } else if (URControlParams.rate_mode == 2.0) {
    /* 'URControl_alloc:30' elseif URpar.rate_mode == 2 */
    /* 'URControl_alloc:32' M_uvr = zeros(3,1); */
    rtb_att[0] = 0.0;
    rtb_att[1] = 0.0;
    rtb_att[2] = 0.0;

    /* 'URControl_alloc:33' if URpar.rate_momentMode == 1 */
    if (URControlParams.rate_momentMode == 1.0) {
      /* 'URControl_alloc:34' [M_uvr, daq] = PIDMomentGen(state, daq, uvr_des, URpar, par); */
      URControl_PIDMomentGen(URControl_DW.State.omegaUV,
        URControl_DW.State.omegafUV, &URControl_DW.DAQ, velTarget,
        URControlParams.Iz, URControlParams.Iu, URControlParams.Iv,
        URControlParams.rate_MPID_rateDotKp, URControlParams.rate_MPID_rateDotKi,
        URControlParams.rate_MPID_rateDotKd,
        URControlParams.rate_MPID_derFilterT,
        URControlParams.rate_MPID_uvrdesderFilterT,
        URControlParams.rate_MPID_maxInt, URControlParams.rate_MPID_precGain,
        &URControl_ConstP.controlallocator_par, rtb_att);
    } else {
      if (URControlParams.rate_momentMode == 2.0) {
        /* 'URControl_alloc:35' elseif URpar.rate_momentMode == 2 */
        /* 'URControl_alloc:36' [M_uvr, daq] = INDIMomentGen(state, daq, uvr_des, M_uvr_set, URpar, par); */
        URControl_INDIMomentGen(URControl_DW.State.wRotor,
          URControl_DW.State.omegaUV, URControl_DW.State.omegafUV,
          &URControl_DW.DAQ, velTarget, URControlParams.k0, URControlParams.t0,
          URControlParams.s, URControlParams.est_omegaFilterT,
          URControlParams.rate_MINDI_rateDotKp,
          URControlParams.rate_MINDI_derFilterT, URControlParams.rate_MINDI_MKp,
          &URControl_ConstP.controlallocator_par, rtb_att);
      }
    }

    /* 'URControl_alloc:39' M_uvr = max(min(M_uvr, URpar.rate_maxMoments'), -URpar.rate_maxMoments'); */
    if ((rtb_att[0] < URControlParams.rate_maxMoments[0]) || rtIsNaN
        (URControlParams.rate_maxMoments[0])) {
      Mu_max = rtb_att[0];
    } else {
      Mu_max = URControlParams.rate_maxMoments[0];
    }

    if ((Mu_max > -URControlParams.rate_maxMoments[0]) || rtIsNaN
        (-URControlParams.rate_maxMoments[0])) {
      rtb_att[0] = Mu_max;
    } else {
      rtb_att[0] = -URControlParams.rate_maxMoments[0];
    }

    if ((rtb_att[1] < URControlParams.rate_maxMoments[1]) || rtIsNaN
        (URControlParams.rate_maxMoments[1])) {
      Mu_max = rtb_att[1];
    } else {
      Mu_max = URControlParams.rate_maxMoments[1];
    }

    if ((Mu_max > -URControlParams.rate_maxMoments[1]) || rtIsNaN
        (-URControlParams.rate_maxMoments[1])) {
      rtb_att[1] = Mu_max;
    } else {
      rtb_att[1] = -URControlParams.rate_maxMoments[1];
    }

    if ((rtb_att[2] < URControlParams.rate_maxMoments[2]) || rtIsNaN
        (URControlParams.rate_maxMoments[2])) {
      Mu_max = rtb_att[2];
    } else {
      Mu_max = URControlParams.rate_maxMoments[2];
    }

    if ((!(Mu_max > -URControlParams.rate_maxMoments[2])) && (!rtIsNaN
         (-URControlParams.rate_maxMoments[2]))) {
      Mu_max = -URControlParams.rate_maxMoments[2];
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
    URControl_controlAllocQPQuick(rtb_att[0], rtb_att[1], Mu_max, errorSum,
      URControl_DW.State.FMax, URControl_DW.State.FMin,
      URControlParams.rate_MuGain, URControlParams.rate_MvGain,
      URControlParams.rate_FtotGain, URControlParams.rate_FGain, rtb_enableMeas,
      URControl_DW.y_state_prev, &URControl_ConstP.controlallocator_par,
      URControlParams.rate_maxIter, wMax, &URControl_DW.DAQ.iter, &rtb_fcn5);

    /* 'URControl_alloc:50' y_state_prev = y_state; */
    /* 'URControl_alloc:51' if optimal */
    if (rtb_fcn5 != 0.0) {
      /* 'URControl_alloc:52' Fset = x; */
      URControl_DW.Fset_prev[0] = wMax[0];
      URControl_DW.Fset_prev[1] = wMax[1];
      URControl_DW.Fset_prev[2] = wMax[2];
      URControl_DW.Fset_prev[3] = wMax[3];

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
      rtb_sincos_o1_idx_0 = URControl_DW.Fset_prev[0];
    } else {
      rtb_sincos_o1_idx_0 = 0.0;
    }

    wRotorSet[0] = rtb_sincos_o1_idx_0 / URControlParams.k0;
    if (URControl_DW.Fset_prev[1] > 0.0) {
      rtb_sincos_o1_idx_0 = URControl_DW.Fset_prev[1];
    } else {
      rtb_sincos_o1_idx_0 = 0.0;
    }

    wRotorSet[1] = rtb_sincos_o1_idx_0 / URControlParams.k0;
    if (URControl_DW.Fset_prev[2] > 0.0) {
      rtb_sincos_o1_idx_0 = URControl_DW.Fset_prev[2];
    } else {
      rtb_sincos_o1_idx_0 = 0.0;
    }

    wRotorSet[2] = rtb_sincos_o1_idx_0 / URControlParams.k0;
    if (URControl_DW.Fset_prev[3] > 0.0) {
      rtb_sincos_o1_idx_0 = URControl_DW.Fset_prev[3];
    } else {
      rtb_sincos_o1_idx_0 = 0.0;
    }

    wRotorSet[3] = rtb_sincos_o1_idx_0 / URControlParams.k0;
    sqrt_t6kvbcYg(wRotorSet);

    /* 'URControl_alloc:62' M_uvr_set(1) = (x(4) - x(2))*URpar.s; */
    URControl_DW.M_uvr_set[0] = (wMax[3] - wMax[1]) * URControlParams.s;

    /* 'URControl_alloc:63' M_uvr_set(2) = (x(1) - x(3))*URpar.s; */
    URControl_DW.M_uvr_set[1] = (wMax[0] - wMax[2]) * URControlParams.s;

    /* 'URControl_alloc:64' M_uvr_set(3) = (x(1) - x(2) + x(3) - x(4))*URpar.t0/URpar.k0; */
    URControl_DW.M_uvr_set[2] = (((wMax[0] - wMax[1]) + wMax[2]) - wMax[3]) *
      URControlParams.t0 / URControlParams.k0;

    /* 'URControl_alloc:65' Ftot_set = sum(x); */
    /* 'URControl_alloc:68' daq.iter = iter; */
    /* 'URControl_alloc:69' daq.optimal = optimal; */
    URControl_DW.DAQ.optimal = rtb_fcn5;

    /* 'URControl_alloc:70' daq.M_uvr_des = M_uvr; */
    /* 'URControl_alloc:71' daq.M_uvr_set = M_uvr_set; */
    URControl_DW.DAQ.M_uvr_des[0] = rtb_att[0];
    URControl_DW.DAQ.M_uvr_set[0] = URControl_DW.M_uvr_set[0];
    URControl_DW.DAQ.M_uvr_des[1] = rtb_att[1];
    URControl_DW.DAQ.M_uvr_set[1] = URControl_DW.M_uvr_set[1];
    URControl_DW.DAQ.M_uvr_des[2] = Mu_max;
    URControl_DW.DAQ.M_uvr_set[2] = URControl_DW.M_uvr_set[2];

    /* 'URControl_alloc:72' daq.Ftot_set = Ftot_set; */
    URControl_DW.DAQ.Ftot_set = sum_WaUbR9ig(wMax);
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
      rtb_Product1 = URControl_DW.accZFilt.maxLim;
      rtb_Product2 = URControl_DW.accZFilt.minLim;
      if ((rtb_fcn5 < rtb_Product1) || rtIsNaN(rtb_Product1)) {
        rtb_Product1 = rtb_fcn5;
      }

      if ((rtb_Product1 > rtb_Product2) || rtIsNaN(rtb_Product2)) {
        URControl_DW.accZFilt.value = rtb_Product1;
      } else {
        URControl_DW.accZFilt.value = rtb_Product2;
      }

      /* 'URControl_alloc:90' inp = -[omegaDot.derValue'; accZFilt.value] + [uvrDot_des';  acc_z_des]; */
      rtb_sincos_o1_idx_1 = -URControl_DW.omegaDot.derValue[0];
      Mu_max = -URControl_DW.omegaDot.derValue[1];
      u_max = -URControl_DW.omegaDot.derValue[2];
      rtb_Product1 = -URControl_DW.accZFilt.value;

      /* 'URControl_alloc:91' inp = max(min(inp, par.URC.rate_QPINDI_maxInp), -par.URC.rate_QPINDI_maxInp); */
      /* 'URControl_alloc:93' inp_gain = max(min(abs(inp)./URpar.rate_QPINDI_cutoff, 1),URpar.rate_QPINDI_minGain); */
      /* 'URControl_alloc:94' inp = inp_gain.*inp; */
      /* 'URControl_alloc:97' wMax = min(w_max, par.w_max); */
      /* 'URControl_alloc:98' wMin = max(w_min, par.w_min); */
      /* 'URControl_alloc:100' wMax = min(wMax, state.wRotor' + URpar.rate_QPINDI_dwMax); */
      /* 'URControl_alloc:101' wMin = max(wMin, state.wRotor' - URpar.rate_QPINDI_dwMax); */
      rtb_Product2 = (dummy_idx_1 - URControl_DW.State.omegafUV[0]) *
        URControlParams.rate_INDI_rateDotKp[0] + rtb_sincos_o1_idx_1;
      if (!(rtb_Product2 < 100.0)) {
        rtb_Product2 = 100.0;
      }

      if (rtb_Product2 > -100.0) {
        rtb_fcn5 = rtb_Product2;
      } else {
        rtb_fcn5 = -100.0;
      }

      rtb_sincos_o1_idx_0 = std::abs(rtb_fcn5) /
        URControlParams.rate_QPINDI_cutoff[0];
      if (rtb_sincos_o1_idx_0 < 1.0) {
        rtb_Product2 = rtb_sincos_o1_idx_0;
      } else {
        rtb_Product2 = 1.0;
      }

      rtb_sincos_o1_idx_0 = URControl_DW.State.wRotor[0] +
        URControlParams.rate_QPINDI_dwMax;
      if ((qconj[0] < rtb_sincos_o1_idx_0) || rtIsNaN(rtb_sincos_o1_idx_0)) {
        wMax[0] = qconj[0];
      } else {
        wMax[0] = rtb_sincos_o1_idx_0;
      }

      rtb_sincos_o1_idx_0 = URControl_DW.State.wRotor[0] -
        URControlParams.rate_QPINDI_dwMax;
      tmp_4 = rtIsNaN(URControlParams.rate_QPINDI_minGain);
      if ((!(rtb_Product2 > URControlParams.rate_QPINDI_minGain)) && (!tmp_4)) {
        rtb_Product2 = URControlParams.rate_QPINDI_minGain;
      }

      rtb_TmpSignalConversionAtSFun_h[0] = rtb_Product2 * rtb_fcn5;
      if ((300.0 > rtb_sincos_o1_idx_0) || rtIsNaN(rtb_sincos_o1_idx_0)) {
        dummy_idx_0 = 300.0;
      } else {
        dummy_idx_0 = rtb_sincos_o1_idx_0;
      }

      rtb_Product2 = (Mv_min - URControl_DW.State.omegafUV[1]) *
        URControlParams.rate_INDI_rateDotKp[1] + Mu_max;
      if (!(rtb_Product2 < 100.0)) {
        rtb_Product2 = 100.0;
      }

      if (rtb_Product2 > -100.0) {
        rtb_fcn5 = rtb_Product2;
      } else {
        rtb_fcn5 = -100.0;
      }

      rtb_sincos_o1_idx_0 = std::abs(rtb_fcn5) /
        URControlParams.rate_QPINDI_cutoff[1];
      if (rtb_sincos_o1_idx_0 < 1.0) {
        rtb_Product2 = rtb_sincos_o1_idx_0;
      } else {
        rtb_Product2 = 1.0;
      }

      if ((!(rtb_Product2 > URControlParams.rate_QPINDI_minGain)) && (!tmp_4)) {
        rtb_Product2 = URControlParams.rate_QPINDI_minGain;
      }

      rtb_TmpSignalConversionAtSFun_h[1] = rtb_Product2 * rtb_fcn5;
      if (FMin[1] > 300.0) {
        rtb_fcn5 = FMin[1];
      } else {
        rtb_fcn5 = 300.0;
      }

      rtb_sincos_o1_idx_0 = URControl_DW.State.wRotor[1] +
        URControlParams.rate_QPINDI_dwMax;
      if ((1200.0 < rtb_sincos_o1_idx_0) || rtIsNaN(rtb_sincos_o1_idx_0)) {
        wMax[1] = 1200.0;
      } else {
        wMax[1] = rtb_sincos_o1_idx_0;
      }

      rtb_sincos_o1_idx_0 = URControl_DW.State.wRotor[1] -
        URControlParams.rate_QPINDI_dwMax;
      if ((rtb_fcn5 > rtb_sincos_o1_idx_0) || rtIsNaN(rtb_sincos_o1_idx_0)) {
        dummy_idx_1 = rtb_fcn5;
      } else {
        dummy_idx_1 = rtb_sincos_o1_idx_0;
      }

      rtb_Product2 = (velTarget[2] - URControl_DW.State.omegafUV[2]) *
        URControlParams.rate_INDI_rateDotKp[2] + u_max;
      if (!(rtb_Product2 < 20.0)) {
        rtb_Product2 = 20.0;
      }

      if (rtb_Product2 > -20.0) {
        rtb_fcn5 = rtb_Product2;
      } else {
        rtb_fcn5 = -20.0;
      }

      rtb_sincos_o1_idx_0 = std::abs(rtb_fcn5) /
        URControlParams.rate_QPINDI_cutoff[2];
      if (rtb_sincos_o1_idx_0 < 1.0) {
        rtb_Product2 = rtb_sincos_o1_idx_0;
      } else {
        rtb_Product2 = 1.0;
      }

      rtb_sincos_o1_idx_0 = URControl_DW.State.wRotor[2] +
        URControlParams.rate_QPINDI_dwMax;
      if ((qconj[2] < rtb_sincos_o1_idx_0) || rtIsNaN(rtb_sincos_o1_idx_0)) {
        wMax[2] = qconj[2];
      } else {
        wMax[2] = rtb_sincos_o1_idx_0;
      }

      rtb_sincos_o1_idx_0 = URControl_DW.State.wRotor[2] -
        URControlParams.rate_QPINDI_dwMax;
      if ((!(rtb_Product2 > URControlParams.rate_QPINDI_minGain)) && (!tmp_4)) {
        rtb_Product2 = URControlParams.rate_QPINDI_minGain;
      }

      rtb_TmpSignalConversionAtSFun_h[2] = rtb_Product2 * rtb_fcn5;
      if ((300.0 > rtb_sincos_o1_idx_0) || rtIsNaN(rtb_sincos_o1_idx_0)) {
        Mv_min = 300.0;
      } else {
        Mv_min = rtb_sincos_o1_idx_0;
      }

      rtb_Product2 = -errorSum / URControlParams.mass + rtb_Product1;
      if (!(rtb_Product2 < 20.0)) {
        rtb_Product2 = 20.0;
      }

      if (rtb_Product2 > -20.0) {
        rtb_fcn5 = rtb_Product2;
      } else {
        rtb_fcn5 = -20.0;
      }

      rtb_sincos_o1_idx_0 = std::abs(rtb_fcn5) /
        URControlParams.rate_QPINDI_cutoff[3];
      if (rtb_sincos_o1_idx_0 < 1.0) {
        rtb_Product2 = rtb_sincos_o1_idx_0;
      } else {
        rtb_Product2 = 1.0;
      }

      if ((!(rtb_Product2 > URControlParams.rate_QPINDI_minGain)) && (!tmp_4)) {
        rtb_Product2 = URControlParams.rate_QPINDI_minGain;
      }

      rtb_Product2 *= rtb_fcn5;
      if (FMin[3] > 300.0) {
        rtb_fcn5 = FMin[3];
      } else {
        rtb_fcn5 = 300.0;
      }

      rtb_sincos_o1_idx_0 = URControl_DW.State.wRotor[3] +
        URControlParams.rate_QPINDI_dwMax;
      if ((1200.0 < rtb_sincos_o1_idx_0) || rtIsNaN(rtb_sincos_o1_idx_0)) {
        wMax[3] = 1200.0;
      } else {
        wMax[3] = rtb_sincos_o1_idx_0;
      }

      rtb_sincos_o1_idx_0 = URControl_DW.State.wRotor[3] -
        URControlParams.rate_QPINDI_dwMax;
      rtb_TmpSignalConversionAtSFun_h[3] = rtb_Product2;

      /* 'URControl_alloc:103' if state.fail_id~=0 */
      if (URControl_DW.State.fail_id != 0.0) {
        /* 'URControl_alloc:104' wMax(state.fail_id) = par.w_min; */
        wMax[static_cast<int32_T>(URControl_DW.State.fail_id) - 1] = 300.0;
      }

      /* 'URControl_alloc:107' dw_lin_max = (wMax/100).^2 - (state.wRotor/100)'.^2; */
      /* 'URControl_alloc:108' dw_lin_min = (wMin/100).^2 - (state.wRotor/100)'.^2; */
      errorSum = wMax[0] / 100.0;
      wRotorSet[0] = errorSum * errorSum;
      u_max = URControl_DW.State.wRotor[0] / 100.0;
      rtb_sincos_o1_idx_1 = u_max * u_max;
      rtb_Product1 = dummy_idx_0 / 100.0;
      wMax[0] = rtb_Product1 * rtb_Product1;
      dummy_idx_0 = u_max;
      errorSum = wMax[1] / 100.0;
      wRotorSet[1] = errorSum * errorSum;
      u_max = URControl_DW.State.wRotor[1] / 100.0;
      Mu_max = u_max * u_max;
      rtb_Product1 = dummy_idx_1 / 100.0;
      wMax[1] = rtb_Product1 * rtb_Product1;
      dummy_idx_1 = u_max;
      errorSum = wMax[2] / 100.0;
      wRotorSet[2] = errorSum * errorSum;
      u_max = URControl_DW.State.wRotor[2] / 100.0;
      Mu_min = u_max * u_max;
      rtb_Product1 = Mv_min / 100.0;
      wMax[2] = rtb_Product1 * rtb_Product1;
      Mv_min = u_max;
      errorSum = wMax[3] / 100.0;
      u_max = URControl_DW.State.wRotor[3] / 100.0;
      if ((rtb_fcn5 > rtb_sincos_o1_idx_0) || rtIsNaN(rtb_sincos_o1_idx_0)) {
        rtb_sincos_o1_idx_0 = rtb_fcn5;
      }

      rtb_Product1 = rtb_sincos_o1_idx_0 / 100.0;

      /* 'URControl_alloc:110' y_state_initial = y_state_prev; */
      /* 'URControl_alloc:111' G = par.URC.rate_G1_unit.*[par.URC.rate_roll_eff*ones(1,4); par.URC.rate_pitch_eff*ones(1,4); par.URC.rate_yaw_eff*ones(1,4); par.URC.rate_az_eff*ones(1,4)].*1e-2; */
      /* 'URControl_alloc:112' K = URpar.rate_QPINDI_K; */
      memcpy(&K[0], &URControlParams.rate_QPINDI_K[0], sizeof(real_T) << 4U);

      /* 'URControl_alloc:113' K(3,3) = MzGain/100; */
      K[10] = rtb_enableMeas / 100.0;

      /* 'URControl_alloc:114' [dw_lin,y_state,iter,optimal] = QPINDI(inp, G, K, URpar.rate_QPINDI_K2, dw_lin_min, dw_lin_max, y_state_initial, par, URpar); */
      tmp_1[0] = 150;
      tmp_1[1] = 150;
      tmp_1[2] = -50;
      tmp_1[3] = 5;
      tmp_1[4] = 150;
      tmp_1[5] = 150;
      tmp_1[6] = -50;
      tmp_1[7] = 5;
      tmp_1[8] = 150;
      tmp_1[9] = 150;
      tmp_1[10] = -50;
      tmp_1[11] = 5;
      tmp_1[12] = 150;
      tmp_1[13] = 150;
      tmp_1[14] = -50;
      tmp_1[15] = 5;
      for (r2 = 0; r2 < 16; r2++) {
        tmp[r2] = URControl_ConstP.controlallocator_par.URC.rate_G1_unit[r2] *
          static_cast<real_T>(tmp_1[r2]) * 0.01;
      }

      rtb_TmpSignalConversionAtSFun_j[0] = wMax[0] - rtb_sincos_o1_idx_1;
      rtb_TmpSignalConversionAtSFun_0[0] = wRotorSet[0] - rtb_sincos_o1_idx_1;
      rtb_TmpSignalConversionAtSFun_j[1] = wMax[1] - Mu_max;
      rtb_TmpSignalConversionAtSFun_0[1] = wRotorSet[1] - Mu_max;
      rtb_TmpSignalConversionAtSFun_j[2] = wMax[2] - Mu_min;
      rtb_TmpSignalConversionAtSFun_0[2] = wRotorSet[2] - Mu_min;
      rtb_fcn5 = u_max * u_max;
      rtb_TmpSignalConversionAtSFun_j[3] = rtb_Product1 * rtb_Product1 -
        rtb_fcn5;
      rtb_TmpSignalConversionAtSFun_0[3] = errorSum * errorSum - rtb_fcn5;
      URControl_QPINDI(rtb_TmpSignalConversionAtSFun_h, tmp, K,
                       URControlParams.rate_QPINDI_K2,
                       rtb_TmpSignalConversionAtSFun_j,
                       rtb_TmpSignalConversionAtSFun_0,
                       URControl_DW.y_state_prev, wMax, &URControl_DW.DAQ.iter,
                       &rtb_enableMeas);

      /* 'URControl_alloc:115' y_state_prev = y_state; */
      /* 'URControl_alloc:117' if optimal */
      if (rtb_enableMeas != 0.0) {
        /* 'URControl_alloc:118' wRotorSet = 100*sqrt(max((state.wRotor/100)'.^2 + dw_lin,0)); */
        rtb_Product1 = dummy_idx_0 * dummy_idx_0 + wMax[0];
        if (!(rtb_Product1 > 0.0)) {
          rtb_Product1 = 0.0;
        }

        wRotorSet[0] = 100.0 * std::sqrt(rtb_Product1);
        rtb_Product1 = dummy_idx_1 * dummy_idx_1 + wMax[1];
        if (!(rtb_Product1 > 0.0)) {
          rtb_Product1 = 0.0;
        }

        wRotorSet[1] = 100.0 * std::sqrt(rtb_Product1);
        rtb_Product1 = Mv_min * Mv_min + wMax[2];
        if (!(rtb_Product1 > 0.0)) {
          rtb_Product1 = 0.0;
        }

        wRotorSet[2] = 100.0 * std::sqrt(rtb_Product1);
        rtb_Product1 = rtb_fcn5 + wMax[3];
        if (!(rtb_Product1 > 0.0)) {
          rtb_Product1 = 0.0;
        }

        wRotorSet[3] = 100.0 * std::sqrt(rtb_Product1);
      } else {
        /* 'URControl_alloc:119' else */
        /* 'URControl_alloc:120' wRotorSet = state.wRotor'*0.99; */
        wRotorSet[0] = URControl_DW.State.wRotor[0] * 0.99;
        wRotorSet[1] = URControl_DW.State.wRotor[1] * 0.99;
        wRotorSet[2] = URControl_DW.State.wRotor[2] * 0.99;
        wRotorSet[3] = URControl_DW.State.wRotor[3] * 0.99;
      }

      /* 'URControl_alloc:125' daq.iter = iter; */
      /* 'URControl_alloc:126' daq.optimal = optimal; */
      URControl_DW.DAQ.optimal = rtb_enableMeas;

      /* 'URControl_alloc:127' daq.inp = inp; */
      /* 'URControl_alloc:128' daq.dw_lin = dw_lin; */
      URControl_DW.DAQ.inp[0] = rtb_TmpSignalConversionAtSFun_h[0];
      URControl_DW.DAQ.dw_lin[0] = wMax[0];
      URControl_DW.DAQ.inp[1] = rtb_TmpSignalConversionAtSFun_h[1];
      URControl_DW.DAQ.dw_lin[1] = wMax[1];
      URControl_DW.DAQ.inp[2] = rtb_TmpSignalConversionAtSFun_h[2];
      URControl_DW.DAQ.dw_lin[2] = wMax[2];
      URControl_DW.DAQ.inp[3] = rtb_Product2;
      URControl_DW.DAQ.dw_lin[3] = wMax[3];
    }
  }

  /* 'URControl_alloc:136' wRotorSet = max(min(wRotorSet, w_max), w_min); */
  if ((wRotorSet[0] < qconj[0]) || rtIsNaN(qconj[0])) {
    rtb_Product1 = wRotorSet[0];
  } else {
    rtb_Product1 = qconj[0];
  }

  if (rtb_Product1 > 0.0) {
    wRotorSet[0] = rtb_Product1;
  } else {
    wRotorSet[0] = 0.0;
  }

  if (wRotorSet[1] < 1200.0) {
    rtb_Product1 = wRotorSet[1];
  } else {
    rtb_Product1 = 1200.0;
  }

  if ((rtb_Product1 > FMin[1]) || rtIsNaN(FMin[1])) {
    wRotorSet[1] = rtb_Product1;
  } else {
    wRotorSet[1] = FMin[1];
  }

  if ((wRotorSet[2] < qconj[2]) || rtIsNaN(qconj[2])) {
    rtb_Product1 = wRotorSet[2];
  } else {
    rtb_Product1 = qconj[2];
  }

  if (rtb_Product1 > 0.0) {
    wRotorSet[2] = rtb_Product1;
  } else {
    wRotorSet[2] = 0.0;
  }

  if (wRotorSet[3] < 1200.0) {
    rtb_Product1 = wRotorSet[3];
  } else {
    rtb_Product1 = 1200.0;
  }

  tmp_4 = rtIsNaN(FMin[3]);
  if ((rtb_Product1 > FMin[3]) || tmp_4) {
    wRotorSet[3] = rtb_Product1;
  } else {
    wRotorSet[3] = FMin[3];
  }

  /* 'URControl_alloc:138' daq.wRotorSet = wRotorSet; */
  URControl_DW.DAQ.wRotorSet[0] = wRotorSet[0];
  URControl_DW.DAQ.wRotorSet[1] = wRotorSet[1];
  URControl_DW.DAQ.wRotorSet[2] = wRotorSet[2];
  if ((rtb_Product1 > FMin[3]) || tmp_4) {
    URControl_DW.DAQ.wRotorSet[3] = rtb_Product1;
  } else {
    URControl_DW.DAQ.wRotorSet[3] = FMin[3];
  }

  /* 'URControl_alloc:141' if fail_id_quick~=0 */
  if (URControl_U.fail_flag != 0) {
    /* 'URControl_alloc:142' wRotorSet(fail_id_quick) = URpar.fail_wRot; */
    wRotorSet[URControl_U.fail_flag - 1] = URControlParams.fail_wRot;
  }

  /* End of MATLAB Function: '<S8>/control allocator' */

  /* MATLAB Function: '<S3>/MATLAB Function' incorporates:
   *  MATLAB Function: '<S7>/basic estimators'
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
      qconj[0] = 300.0;
      qconj[1] = 300.0;
      qconj[2] = 300.0;
      qconj[3] = 300.0;
    } else {
      /* 'UROverrides:26' else */
      /* 'UROverrides:27' wRotorSetFinal = wRotorSet; */
      qconj[0] = wRotorSet[0];
      qconj[1] = wRotorSet[1];
      qconj[2] = wRotorSet[2];
      qconj[3] = wRotorSet[3];
    }
  } else {
    /* 'UROverrides:30' else */
    /* 'UROverrides:31' fallCount = 0; */
    URControl_DW.fallCount = 0.0;

    /* 'UROverrides:32' thrown = 0; */
    URControl_DW.thrown = 0.0;

    /* 'UROverrides:33' wRotorSetFinal = wRotorSet; */
    qconj[0] = wRotorSet[0];
    qconj[1] = wRotorSet[1];
    qconj[2] = wRotorSet[2];
    qconj[3] = wRotorSet[3];
  }

  /* 'UROverrides:37' if ~(URpar.throw_mode == 1 && thrown == 0) */
  if ((!(URControlParams.throw_mode == 1.0)) || (!(URControl_DW.thrown == 0.0)))
  {
    /* 'UROverrides:38' if URpar.flip_mode == 0 */
    if (URControlParams.flip_mode == 0.0) {
      /* 'UROverrides:39' flipTime = 0; */
      URControl_DW.flipTime = 0.0;

      /* 'UROverrides:40' wRotorSetFinal = wRotorSet; */
      qconj[0] = wRotorSet[0];
      qconj[1] = wRotorSet[1];
      qconj[2] = wRotorSet[2];
      qconj[3] = wRotorSet[3];
    } else {
      if (URControlParams.flip_mode == 1.0) {
        /* 'UROverrides:42' elseif URpar.flip_mode == 1 */
        /* 'UROverrides:44' flipTime = flipTime + 1/par.freq; */
        URControl_DW.flipTime += 0.002;

        /* 'UROverrides:45' if flipTime > URpar.flip_time + URpar.flip_upTime */
        if (URControl_DW.flipTime > URControlParams.flip_time +
            URControlParams.flip_upTime) {
          /* 'UROverrides:46' wRotorSetFinal = wRotorSet; */
          qconj[0] = wRotorSet[0];
          qconj[1] = wRotorSet[1];
          qconj[2] = wRotorSet[2];
          qconj[3] = wRotorSet[3];
        } else {
          /* 'UROverrides:47' else */
          /* 'UROverrides:48' if flipTime < URpar.flip_upTime */
          if (URControl_DW.flipTime < URControlParams.flip_upTime) {
            /* 'UROverrides:49' wRotorSetFinal = ones(4,1).*1000; */
            qconj[0] = 1000.0;
            qconj[1] = 1000.0;
            qconj[2] = 1000.0;
            qconj[3] = 1000.0;
          } else {
            /* 'UROverrides:50' else */
            /* 'UROverrides:51' wRotorSetFinal = ones(4,1).*700 + [1;-1;-1;1]*URpar.flip_intensityX + [1;1;-1;-1]*URpar.flip_intensityY; */
            qconj[0] = (700.0 + URControlParams.flip_intensityX) +
              URControlParams.flip_intensityY;
            qconj[1] = (700.0 + -URControlParams.flip_intensityX) +
              URControlParams.flip_intensityY;
            qconj[2] = (700.0 + -URControlParams.flip_intensityX) +
              -URControlParams.flip_intensityY;
            qconj[3] = (700.0 + URControlParams.flip_intensityX) +
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
  URControl_Y.w_rotors[0] = static_cast<real32_T>(qconj[0]);

  /* Outport: '<Root>/actuators_control' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion'
   *  DataTypeConversion: '<Root>/Data Type Conversion11'
   *  MATLAB Function: '<Root>/conversion to px4'
   */
  URControl_Y.actuators_control[0] = static_cast<real32_T>(((qconj[0] * qconj[0]
    - 98696.044010893587) * 2.0 / 1.5335171993870398E+6 + -1.0));

  /* Outport: '<Root>/w_rotors' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion'
   */
  URControl_Y.w_rotors[1] = static_cast<real32_T>(qconj[1]);

  /* Outport: '<Root>/actuators_control' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion'
   *  DataTypeConversion: '<Root>/Data Type Conversion11'
   *  MATLAB Function: '<Root>/conversion to px4'
   */
  URControl_Y.actuators_control[1] = static_cast<real32_T>(((qconj[1] * qconj[1]
    - 98696.044010893587) * 2.0 / 1.5335171993870398E+6 + -1.0));

  /* Outport: '<Root>/w_rotors' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion'
   */
  URControl_Y.w_rotors[2] = static_cast<real32_T>(qconj[2]);

  /* Outport: '<Root>/actuators_control' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion'
   *  DataTypeConversion: '<Root>/Data Type Conversion11'
   *  MATLAB Function: '<Root>/conversion to px4'
   */
  URControl_Y.actuators_control[2] = static_cast<real32_T>(((qconj[2] * qconj[2]
    - 98696.044010893587) * 2.0 / 1.5335171993870398E+6 + -1.0));

  /* Outport: '<Root>/w_rotors' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion'
   */
  URControl_Y.w_rotors[3] = static_cast<real32_T>(qconj[3]);

  /* Outport: '<Root>/actuators_control' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion'
   *  DataTypeConversion: '<Root>/Data Type Conversion11'
   *  MATLAB Function: '<Root>/conversion to px4'
   */
  URControl_Y.actuators_control[3] = static_cast<real32_T>(((qconj[3] * qconj[3]
    - 98696.044010893587) * 2.0 / 1.5335171993870398E+6 + -1.0));

  /* DiscreteStateSpace: '<S25>/Discrete State-Space' */
  {
    rtb_accs_filter[0] = (1.0)*URControl_DW.DiscreteStateSpace_DSTATE_i[0];
    rtb_accs_filter[1] = (1.0)*URControl_DW.DiscreteStateSpace_DSTATE_i[1];
    rtb_accs_filter[2] = (1.0)*URControl_DW.DiscreteStateSpace_DSTATE_i[2];
  }

  /* Outputs for Atomic SubSystem: '<S27>/Predict' */
  /* SignalConversion: '<S36>/TmpSignal ConversionAt SFunction Inport4' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion5'
   *  Inport: '<Root>/rates'
   *  MATLAB Function: '<S34>/Predict'
   */
  rtb_TmpSignalConversionAtSFunct[0] = rtb_accs_filter[0];
  rtb_TmpSignalConversionAtSFunct[3] = URControl_U.rates[0];
  rtb_TmpSignalConversionAtSFunct[1] = rtb_accs_filter[1];
  rtb_TmpSignalConversionAtSFunct[4] = URControl_U.rates[1];
  rtb_TmpSignalConversionAtSFunct[2] = rtb_accs_filter[2];
  rtb_TmpSignalConversionAtSFunct[5] = URControl_U.rates[2];

  /* MATLAB Function: '<S34>/Predict' incorporates:
   *  DataStoreRead: '<S34>/Data Store ReadP'
   *  DataStoreRead: '<S34>/Data Store ReadX'
   *  DataTypeConversion: '<Root>/Data Type Conversion5'
   *  Inport: '<Root>/rates'
   *  SignalConversion: '<S36>/TmpSignal ConversionAt SFunction Inport4'
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
  ekf_state_jacob_WRvyoYwd(URControl_DW.x, rtb_TmpSignalConversionAtSFunct,
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
  rtb_TmpSignalConversionAtSFun_h[0] = ((URControl_DW.x[7] * URControl_U.rates[0]
    + URControl_DW.x[8] * URControl_U.rates[1]) + URControl_DW.x[9] *
    URControl_U.rates[2]) * -0.5 * 0.002 + URControl_DW.x[6];
  rtb_TmpSignalConversionAtSFun_h[1] = ((URControl_DW.x[8] * URControl_U.rates[2]
    - URControl_DW.x[9] * URControl_U.rates[1]) + URControl_U.rates[0] *
    URControl_DW.x[6]) * 0.5 * 0.002 + URControl_DW.x[7];
  rtb_TmpSignalConversionAtSFun_h[2] = ((URControl_DW.x[9] * URControl_U.rates[0]
    - URControl_DW.x[7] * URControl_U.rates[2]) + URControl_U.rates[1] *
    URControl_DW.x[6]) * 0.5 * 0.002 + URControl_DW.x[8];
  rtb_Product2 = ((URControl_DW.x[7] * URControl_U.rates[1] - URControl_DW.x[8] *
                   URControl_U.rates[0]) + URControl_U.rates[2] *
                  URControl_DW.x[6]) * 0.5 * 0.002 + URControl_DW.x[9];

  /* 'ekf_state_func:54' qnorm = sqrt(q(1)^2 + q(2)^2 + q(3)^2 + q(4)^2); */
  rtb_fcn5 = std::sqrt(((rtb_TmpSignalConversionAtSFun_h[0] *
    rtb_TmpSignalConversionAtSFun_h[0] + rtb_TmpSignalConversionAtSFun_h[1] *
    rtb_TmpSignalConversionAtSFun_h[1]) + rtb_TmpSignalConversionAtSFun_h[2] *
                        rtb_TmpSignalConversionAtSFun_h[2]) + rtb_Product2 *
                       rtb_Product2);

  /* 'ekf_state_func:55' q = q/qnorm; */
  /* 'ekf_state_func:57' for i = 1:4 */
  /* 'ekf_state_func:58' x(i+6) = q(i); */
  rtb_xNew[6] = rtb_TmpSignalConversionAtSFun_h[0] / rtb_fcn5;

  /* 'ekf_state_func:58' x(i+6) = q(i); */
  rtb_xNew[7] = rtb_TmpSignalConversionAtSFun_h[1] / rtb_fcn5;

  /* 'ekf_state_func:58' x(i+6) = q(i); */
  rtb_xNew[8] = rtb_TmpSignalConversionAtSFun_h[2] / rtb_fcn5;

  /* 'ekf_state_func:58' x(i+6) = q(i); */
  rtb_xNew[9] = rtb_Product2 / rtb_fcn5;
  for (r2 = 0; r2 < 10; r2++) {
    for (r3 = 0; r3 < 10; r3++) {
      rtemp = r3 + 10 * r2;
      Jacobian_0[rtemp] = 0.0;
      for (i = 0; i < 10; i++) {
        Jacobian_0[rtemp] += Jacobian[10 * i + r3] * URControl_DW.P[10 * r2 + i];
      }
    }
  }

  for (i = 0; i < 10; i++) {
    /* DataStoreWrite: '<S34>/Data Store WriteP' incorporates:
     *  Constant: '<S27>/Q'
     *  MATLAB Function: '<S34>/Predict'
     */
    for (r2 = 0; r2 < 10; r2++) {
      rtb_sincos_o1_idx_0 = 0.0;
      for (r3 = 0; r3 < 10; r3++) {
        rtb_sincos_o1_idx_0 += Jacobian_0[10 * r3 + i] * Jacobian[10 * r3 + r2];
      }

      /* MATLAB Function: '<S34>/Predict' incorporates:
       *  Constant: '<S27>/Q'
       */
      r3 = 10 * r2 + i;
      URControl_DW.P[r3] = rtCP_Q_Value[r3] + rtb_sincos_o1_idx_0;
    }

    /* End of DataStoreWrite: '<S34>/Data Store WriteP' */

    /* DataStoreWrite: '<S34>/Data Store WriteX' */
    URControl_DW.x[i] = rtb_xNew[i];
  }

  /* End of Outputs for SubSystem: '<S27>/Predict' */

  /* Outport: '<Root>/daq' incorporates:
   *  DataStoreRead: '<Root>/Data Store Read'
   */
  URControl_Y.daq = URControl_DW.DAQ;

  /* Update for Memory: '<S25>/Memory' */
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

  /* Update for DiscreteIntegrator: '<S12>/Integrator' */
  URControl_DW.Integrator_IC_LOADING = 0U;

  /* MinMax: '<S9>/Max' */
  if (URControl_B.Probe[0] > 0.05) {
    rtb_sincos_o1_idx_0 = URControl_B.Probe[0];
  } else {
    rtb_sincos_o1_idx_0 = 0.05;
  }

  /* End of MinMax: '<S9>/Max' */

  /* Product: '<S1>/1//T' */
  rtb_sincos_o1_idx_0 = 1.0 / rtb_sincos_o1_idx_0;

  /* Update for DiscreteIntegrator: '<S12>/Integrator' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion8'
   *  Inport: '<Root>/pos_sp'
   *  Product: '<S1>/1//T'
   *  Sum: '<S1>/Sum1'
   */
  URControl_DW.Integrator_DSTATE[0] += (URControl_U.pos_sp[0] -
    URControl_DW.Integrator_DSTATE[0]) * rtb_sincos_o1_idx_0 * 0.002;
  URControl_DW.Integrator_DSTATE[1] += (URControl_U.pos_sp[1] -
    URControl_DW.Integrator_DSTATE[1]) * rtb_sincos_o1_idx_0 * 0.002;
  URControl_DW.Integrator_DSTATE[2] += (URControl_U.pos_sp[2] -
    URControl_DW.Integrator_DSTATE[2]) * rtb_sincos_o1_idx_0 * 0.002;
  URControl_DW.Integrator_PrevResetState = static_cast<int8_T>(rEQ0);

  /* Update for DiscreteIntegrator: '<S16>/Integrator' */
  URControl_DW.Integrator_IC_LOADING_a = 0U;

  /* MinMax: '<S13>/Max' */
  if (URControl_B.Probe_d[0] > 0.05) {
    rtb_sincos_o1_idx_0 = URControl_B.Probe_d[0];
  } else {
    rtb_sincos_o1_idx_0 = 0.05;
  }

  /* End of MinMax: '<S13>/Max' */

  /* Update for DiscreteIntegrator: '<S16>/Integrator' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion9'
   *  Inport: '<Root>/yaw_sp'
   *  Product: '<S2>/1//T'
   *  Sum: '<S2>/Sum1'
   */
  URControl_DW.Integrator_DSTATE_i += 1.0 / rtb_sincos_o1_idx_0 *
    (URControl_U.yaw_sp - URControl_DW.Integrator_DSTATE_i) * 0.002;
  URControl_DW.Integrator_PrevResetState_i = static_cast<int8_T>(rtb_Compare_j);

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

  /* Update for DiscreteStateSpace: '<S25>/Discrete State-Space' */
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
  rtmSetErrorStatus((&URControl_M), (NULL));

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

  /* Start for Probe: '<S13>/Probe' */
  URControl_B.Probe_d[0] = 0.002;
  URControl_B.Probe_d[1] = 0.0;

  /* Start for DataStoreMemory: '<S27>/DataStoreMemory - P' */
  memcpy(&URControl_DW.P[0], &rtCP_DataStoreMemoryP_InitialVa[0], 100U * sizeof
         (real_T));

  /* Start for DataStoreMemory: '<S27>/DataStoreMemory - x' */
  memcpy(&URControl_DW.x[0], &rtCP_DataStoreMemoryx_InitialVa[0], 10U * sizeof
         (real_T));

  /* Start for DataStoreMemory: '<Root>/Data Store Memory' */
  URControl_DW.DAQ = URControl_rtZdaqBus;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory1' */
  URControl_DW.State = URControl_rtZstateBus;

  /* InitializeConditions for Memory: '<S25>/Memory' */
  URControl_DW.Memory_PreviousInput[0] = 0.0;
  URControl_DW.Memory_PreviousInput[1] = 0.0;
  URControl_DW.Memory_PreviousInput[2] = 0.0;
  URControl_DW.Memory_PreviousInput[3] = 0.0;

  /* InitializeConditions for Delay: '<Root>/Delay' */
  memset(&URControl_DW.Delay_DSTATE[0], 0, 1000U * sizeof(real_T));

  /* InitializeConditions for DiscreteIntegrator: '<S12>/Integrator' */
  URControl_DW.Integrator_IC_LOADING = 1U;
  URControl_DW.Integrator_PrevResetState = 0;

  /* InitializeConditions for DiscreteIntegrator: '<S16>/Integrator' */
  URControl_DW.Integrator_IC_LOADING_a = 1U;
  URControl_DW.Integrator_PrevResetState_i = 0;

  /* InitializeConditions for DiscreteStateSpace: '<S5>/Discrete State-Space' */
  URControl_DW.DiscreteStateSpace_DSTATE[0] = (0.0);
  URControl_DW.DiscreteStateSpace_DSTATE[1] = (0.0);
  URControl_DW.DiscreteStateSpace_DSTATE[2] = (-1.0);

  /* InitializeConditions for DiscreteStateSpace: '<S25>/Discrete State-Space' */
  URControl_DW.DiscreteStateSpace_DSTATE_i[0] = (0.0);
  URControl_DW.DiscreteStateSpace_DSTATE_i[1] = (0.0);
  URControl_DW.DiscreteStateSpace_DSTATE_i[2] = (0.0);

  /* SystemInitialize for MATLAB Function: '<S7>/basic estimators' */
  /* :  attPrev = [0;0;0]; */
  URControl_DW.omegaFilter_not_empty = false;
  URControl_DW.posFilter_not_empty = false;
  URControl_DW.velFilter_not_empty = false;
  URControl_DW.accFilter_not_empty = false;

  /* SystemInitialize for MATLAB Function: '<S25>/enableMeas' */
  /* 'URpositionControl:3' errorInt = [0,0,0]; */
  URControl_DW.attPrev[0] = 0.0;

  /* SystemInitialize for MATLAB Function: '<S4>/position control' */
  URControl_DW.errorInt_o[0] = 0.0;

  /* SystemInitialize for MATLAB Function: '<S25>/enableMeas' */
  URControl_DW.attPrev[1] = 0.0;

  /* SystemInitialize for MATLAB Function: '<S4>/position control' */
  URControl_DW.errorInt_o[1] = 0.0;

  /* SystemInitialize for MATLAB Function: '<S25>/enableMeas' */
  URControl_DW.attPrev[2] = 0.0;

  /* SystemInitialize for MATLAB Function: '<S4>/position control' */
  URControl_DW.errorInt_o[2] = 0.0;

  /* SystemInitialize for MATLAB Function: '<S4>/altitude control' */
  /* 'URAltitudeControl:3' errorInt = 0; */
  URControl_DW.errorInt_g = 0.0;

  /* SystemInitialize for MATLAB Function: '<S8>/control allocator' */
  URControl_DW.omegaDot_not_empty = false;
  URControl_DW.accZFilt_not_empty = false;
  URControl_DW.errorD_not_empty = false;
  URControl_DW.uvrDer_not_empty = false;
  URControl_DW.omegaDot_not_empty_e = false;
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
