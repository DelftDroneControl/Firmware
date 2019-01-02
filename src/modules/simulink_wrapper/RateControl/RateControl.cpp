/*
 * RateControl.cpp
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "RateControl".
 *
 * Model version              : 1.576
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C++ source code generated on : Wed Jan  2 14:25:39 2019
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "RateControl.h"
#include "RateControl_private.h"

/* Exported block parameters */
RateControlParamsType RateControlParams = {
  { 1.0, 1.0, -1.0, -1.0, 0.0, 0.0, -1.0, 0.0, -1.0, 1.0, 1.0, -1.0, 0.0, 0.0,
    1.0, 0.0, -1.0, -1.0, -1.0, -1.0, 0.0, 0.0, -1.0, 0.0, 1.0, -1.0, 1.0, -1.0,
    0.0, 0.0, 1.0, 0.0 },
  16.0,
  16.0,
  8.0,
  170.0,
  170.0,
  -150.0,
  0.3,
  8.0,
  0.025
} ;                                    /* Variable: RateControlParams
                                        * Referenced by:
                                        *   '<Root>/controlEffMatrix'
                                        *   '<Root>/ActuatorDynamics'
                                        *   '<S86>/Proportional Gain'
                                        *   '<S182>/Proportional Gain'
                                        *   '<S278>/Proportional Gain'
                                        */

/* Function for MATLAB Function: '<Root>/INDI_allocator' */
real_T RateControlModelClass::RateControl_xnrm2(int32_T n, const real_T x[16],
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

/* Function for MATLAB Function: '<Root>/INDI_allocator' */
real_T RateControlModelClass::RateControl_xnrm2_n(int32_T n, const real_T x[4],
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

/* Function for MATLAB Function: '<Root>/INDI_allocator' */
void RateControlModelClass::RateControl_xaxpy_fy(int32_T n, real_T a, const
  real_T x[4], int32_T ix0, real_T y[16], int32_T iy0)
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

/* Function for MATLAB Function: '<Root>/INDI_allocator' */
void RateControlModelClass::RateControl_xaxpy_f(int32_T n, real_T a, const
  real_T x[16], int32_T ix0, real_T y[4], int32_T iy0)
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

/* Function for MATLAB Function: '<Root>/INDI_allocator' */
real_T RateControlModelClass::RateControl_xdotc(int32_T n, const real_T x[16],
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

/* Function for MATLAB Function: '<Root>/INDI_allocator' */
void RateControlModelClass::RateControl_xaxpy(int32_T n, real_T a, int32_T ix0,
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

/* Function for MATLAB Function: '<Root>/INDI_allocator' */
void RateControlModelClass::RateControl_xscal(real_T a, real_T x[16], int32_T
  ix0)
{
  int32_T k;
  for (k = ix0; k <= ix0 + 3; k++) {
    x[k - 1] *= a;
  }
}

/* Function for MATLAB Function: '<Root>/INDI_allocator' */
void RateControlModelClass::RateControl_xswap(real_T x[16], int32_T ix0, int32_T
  iy0)
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

/* Function for MATLAB Function: '<Root>/INDI_allocator' */
void RateControlModelClass::RateControl_xrotg(real_T *a, real_T *b, real_T *c,
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
    scale = 0.0;
    *b = 0.0;
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
      *b = *s;
    } else if (*c != 0.0) {
      *b = 1.0 / *c;
    } else {
      *b = 1.0;
    }
  }

  *a = scale;
}

/* Function for MATLAB Function: '<Root>/INDI_allocator' */
void RateControlModelClass::RateControl_xrot(real_T x[16], int32_T ix0, int32_T
  iy0, real_T c, real_T s)
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

/* Function for MATLAB Function: '<Root>/INDI_allocator' */
void RateControlModelClass::RateControl_svd(const real_T A[16], real_T U[16],
  real_T s[4], real_T V[16])
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
  int32_T m;
  int32_T qp1q;
  real_T rt;
  real_T ztest0;
  real_T smm1;
  real_T emm1;
  real_T sqds;
  real_T shift;
  int32_T c_q;
  int32_T d_jj;
  boolean_T exitg1;
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

  apply_transform = false;
  nrm = RateControl_xnrm2(4, b_A, 1);
  if (nrm > 0.0) {
    apply_transform = true;
    if (b_A[0] < 0.0) {
      b_s[0] = -nrm;
    } else {
      b_s[0] = nrm;
    }

    if (std::abs(b_s[0]) >= 1.0020841800044864E-292) {
      nrm = 1.0 / b_s[0];
      for (m = 0; m < 4; m++) {
        b_A[m] *= nrm;
      }
    } else {
      for (m = 0; m < 4; m++) {
        b_A[m] /= b_s[0];
      }
    }

    b_A[0]++;
    b_s[0] = -b_s[0];
  } else {
    b_s[0] = 0.0;
  }

  for (m = 1; m + 1 < 5; m++) {
    qjj = m << 2;
    if (apply_transform) {
      RateControl_xaxpy(4, -(RateControl_xdotc(4, b_A, 1, b_A, qjj + 1) / b_A[0]),
                        1, b_A, qjj + 1);
    }

    e[m] = b_A[qjj];
  }

  for (m = 0; m + 1 < 5; m++) {
    U[m] = b_A[m];
  }

  nrm = RateControl_xnrm2_n(3, e, 2);
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
      for (m = 1; m < 4; m++) {
        e[m] *= nrm;
      }
    } else {
      for (m = 1; m < 4; m++) {
        e[m] /= nrm;
      }
    }

    e[1]++;
    e[0] = -e[0];
    for (m = 1; m + 1 < 5; m++) {
      work[m] = 0.0;
    }

    for (m = 1; m + 1 < 5; m++) {
      RateControl_xaxpy_f(3, e[m], b_A, (m << 2) + 2, work, 2);
    }

    for (m = 1; m + 1 < 5; m++) {
      RateControl_xaxpy_fy(3, -e[m] / e[1], work, 2, b_A, (m << 2) + 2);
    }
  }

  for (m = 1; m + 1 < 5; m++) {
    Vf[m] = e[m];
  }

  apply_transform = false;
  nrm = RateControl_xnrm2(3, b_A, 6);
  if (nrm > 0.0) {
    apply_transform = true;
    if (b_A[5] < 0.0) {
      b_s[1] = -nrm;
    } else {
      b_s[1] = nrm;
    }

    if (std::abs(b_s[1]) >= 1.0020841800044864E-292) {
      nrm = 1.0 / b_s[1];
      for (m = 5; m < 8; m++) {
        b_A[m] *= nrm;
      }
    } else {
      for (m = 5; m < 8; m++) {
        b_A[m] /= b_s[1];
      }
    }

    b_A[5]++;
    b_s[1] = -b_s[1];
  } else {
    b_s[1] = 0.0;
  }

  for (m = 2; m + 1 < 5; m++) {
    qjj = (m << 2) + 1;
    if (apply_transform) {
      RateControl_xaxpy(3, -(RateControl_xdotc(3, b_A, 6, b_A, qjj + 1) / b_A[5]),
                        6, b_A, qjj + 1);
    }

    e[m] = b_A[qjj];
  }

  for (m = 1; m + 1 < 5; m++) {
    U[m + 4] = b_A[m + 4];
  }

  nrm = RateControl_xnrm2_n(2, e, 3);
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
      for (m = 2; m < 4; m++) {
        e[m] *= nrm;
      }
    } else {
      for (m = 2; m < 4; m++) {
        e[m] /= nrm;
      }
    }

    e[2]++;
    e[1] = -e[1];
    for (m = 2; m + 1 < 5; m++) {
      work[m] = 0.0;
    }

    for (m = 2; m + 1 < 5; m++) {
      RateControl_xaxpy_f(2, e[m], b_A, (m << 2) + 3, work, 3);
    }

    for (m = 2; m + 1 < 5; m++) {
      RateControl_xaxpy_fy(2, -e[m] / e[2], work, 3, b_A, (m << 2) + 3);
    }
  }

  for (m = 2; m + 1 < 5; m++) {
    Vf[m + 4] = e[m];
  }

  apply_transform = false;
  nrm = RateControl_xnrm2(2, b_A, 11);
  if (nrm > 0.0) {
    apply_transform = true;
    if (b_A[10] < 0.0) {
      b_s[2] = -nrm;
    } else {
      b_s[2] = nrm;
    }

    if (std::abs(b_s[2]) >= 1.0020841800044864E-292) {
      nrm = 1.0 / b_s[2];
      for (m = 10; m < 12; m++) {
        b_A[m] *= nrm;
      }
    } else {
      for (m = 10; m < 12; m++) {
        b_A[m] /= b_s[2];
      }
    }

    b_A[10]++;
    b_s[2] = -b_s[2];
  } else {
    b_s[2] = 0.0;
  }

  for (m = 3; m + 1 < 5; m++) {
    qjj = (m << 2) + 2;
    if (apply_transform) {
      RateControl_xaxpy(2, -(RateControl_xdotc(2, b_A, 11, b_A, qjj + 1) / b_A
        [10]), 11, b_A, qjj + 1);
    }

    e[m] = b_A[qjj];
  }

  for (m = 2; m + 1 < 5; m++) {
    U[m + 8] = b_A[m + 8];
  }

  m = 2;
  b_s[3] = b_A[15];
  e[2] = b_A[14];
  e[3] = 0.0;
  U[12] = 0.0;
  U[13] = 0.0;
  U[14] = 0.0;
  U[15] = 1.0;
  for (c_q = 2; c_q >= 0; c_q--) {
    qp1q = c_q << 2;
    qq = qp1q + c_q;
    if (b_s[c_q] != 0.0) {
      for (d_jj = c_q + 1; d_jj + 1 < 5; d_jj++) {
        qjj = ((d_jj << 2) + c_q) + 1;
        RateControl_xaxpy(4 - c_q, -(RateControl_xdotc(4 - c_q, U, qq + 1, U,
          qjj) / U[qq]), qq + 1, U, qjj);
      }

      for (qjj = c_q; qjj + 1 < 5; qjj++) {
        U[qjj + qp1q] = -U[qp1q + qjj];
      }

      U[qq]++;
      for (qq = 0; qq < c_q; qq++) {
        U[qq + qp1q] = 0.0;
      }
    } else {
      U[qp1q] = 0.0;
      U[1 + qp1q] = 0.0;
      U[2 + qp1q] = 0.0;
      U[3 + qp1q] = 0.0;
      U[qq] = 1.0;
    }
  }

  for (c_q = 3; c_q >= 0; c_q--) {
    if ((c_q + 1 <= 2) && (e[c_q] != 0.0)) {
      qp1q = ((c_q << 2) + c_q) + 2;
      for (qq = c_q + 1; qq + 1 < 5; qq++) {
        qjj = ((qq << 2) + c_q) + 2;
        RateControl_xaxpy(3 - c_q, -(RateControl_xdotc(3 - c_q, Vf, qp1q, Vf,
          qjj) / Vf[qp1q - 1]), qp1q, Vf, qjj);
      }
    }

    Vf[c_q << 2] = 0.0;
    Vf[1 + (c_q << 2)] = 0.0;
    Vf[2 + (c_q << 2)] = 0.0;
    Vf[3 + (c_q << 2)] = 0.0;
    Vf[c_q + (c_q << 2)] = 1.0;
  }

  ztest0 = e[0];
  if (b_s[0] != 0.0) {
    rt = std::abs(b_s[0]);
    nrm = b_s[0] / rt;
    b_s[0] = rt;
    ztest0 = e[0] / nrm;
    RateControl_xscal(nrm, U, 1);
  }

  if (ztest0 != 0.0) {
    rt = std::abs(ztest0);
    nrm = rt / ztest0;
    ztest0 = rt;
    b_s[1] *= nrm;
    RateControl_xscal(nrm, Vf, 5);
  }

  e[0] = ztest0;
  ztest0 = e[1];
  if (b_s[1] != 0.0) {
    rt = std::abs(b_s[1]);
    nrm = b_s[1] / rt;
    b_s[1] = rt;
    ztest0 = e[1] / nrm;
    RateControl_xscal(nrm, U, 5);
  }

  if (ztest0 != 0.0) {
    rt = std::abs(ztest0);
    nrm = rt / ztest0;
    ztest0 = rt;
    b_s[2] *= nrm;
    RateControl_xscal(nrm, Vf, 9);
  }

  e[1] = ztest0;
  ztest0 = b_A[14];
  if (b_s[2] != 0.0) {
    rt = std::abs(b_s[2]);
    nrm = b_s[2] / rt;
    b_s[2] = rt;
    ztest0 = b_A[14] / nrm;
    RateControl_xscal(nrm, U, 9);
  }

  if (ztest0 != 0.0) {
    rt = std::abs(ztest0);
    nrm = rt / ztest0;
    ztest0 = rt;
    b_s[3] = b_A[15] * nrm;
    RateControl_xscal(nrm, Vf, 13);
  }

  e[2] = ztest0;
  if (b_s[3] != 0.0) {
    rt = std::abs(b_s[3]);
    nrm = b_s[3] / rt;
    b_s[3] = rt;
    RateControl_xscal(nrm, U, 13);
  }

  e[3] = 0.0;
  qp1q = 0;
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

  if ((b_s[2] > ztest0) || rtIsNaN(ztest0)) {
    ztest0 = b_s[2];
  }

  if ((!(nrm > ztest0)) && (!rtIsNaN(ztest0))) {
    nrm = ztest0;
  }

  if (b_s[3] > 0.0) {
    rt = b_s[3];
  } else {
    rt = 0.0;
  }

  if ((!(nrm > rt)) && (!rtIsNaN(rt))) {
    nrm = rt;
  }

  while ((m + 2 > 0) && (qp1q < 75)) {
    c_q = m + 1;
    exitg1 = false;
    while (!(exitg1 || (c_q == 0))) {
      ztest0 = std::abs(e[c_q - 1]);
      if ((ztest0 <= (std::abs(b_s[c_q - 1]) + std::abs(b_s[c_q])) *
           2.2204460492503131E-16) || ((ztest0 <= 1.0020841800044864E-292) ||
           ((qp1q > 20) && (ztest0 <= 2.2204460492503131E-16 * nrm)))) {
        e[c_q - 1] = 0.0;
        exitg1 = true;
      } else {
        c_q--;
      }
    }

    if (m + 1 == c_q) {
      qjj = 4;
    } else {
      qq = m + 2;
      qjj = m + 2;
      exitg1 = false;
      while ((!exitg1) && (qjj >= c_q)) {
        qq = qjj;
        if (qjj == c_q) {
          exitg1 = true;
        } else {
          ztest0 = 0.0;
          if (qjj < m + 2) {
            ztest0 = std::abs(e[qjj - 1]);
          }

          if (qjj > c_q + 1) {
            ztest0 += std::abs(e[qjj - 2]);
          }

          rt = std::abs(b_s[qjj - 1]);
          if ((rt <= 2.2204460492503131E-16 * ztest0) || (rt <=
               1.0020841800044864E-292)) {
            b_s[qjj - 1] = 0.0;
            exitg1 = true;
          } else {
            qjj--;
          }
        }
      }

      if (qq == c_q) {
        qjj = 3;
      } else if (m + 2 == qq) {
        qjj = 1;
      } else {
        qjj = 2;
        c_q = qq;
      }
    }

    switch (qjj) {
     case 1:
      ztest0 = e[m];
      e[m] = 0.0;
      for (qq = m; qq + 1 >= c_q + 1; qq--) {
        RateControl_xrotg(&b_s[qq], &ztest0, &rt, &sqds);
        if (qq + 1 > c_q + 1) {
          smm1 = e[qq - 1];
          ztest0 = smm1 * -sqds;
          e[qq - 1] = smm1 * rt;
        }

        RateControl_xrot(Vf, 1 + (qq << 2), 1 + ((m + 1) << 2), rt, sqds);
      }
      break;

     case 2:
      ztest0 = e[c_q - 1];
      e[c_q - 1] = 0.0;
      for (qq = c_q; qq < m + 2; qq++) {
        RateControl_xrotg(&b_s[qq], &ztest0, &rt, &sqds);
        ztest0 = -sqds * e[qq];
        e[qq] *= rt;
        RateControl_xrot(U, 1 + (qq << 2), 1 + ((c_q - 1) << 2), rt, sqds);
      }
      break;

     case 3:
      ztest0 = b_s[m + 1];
      rt = std::abs(ztest0);
      sqds = std::abs(b_s[m]);
      if ((rt > sqds) || rtIsNaN(sqds)) {
        sqds = rt;
      }

      rt = std::abs(e[m]);
      if ((sqds > rt) || rtIsNaN(rt)) {
        rt = sqds;
      }

      sqds = std::abs(b_s[c_q]);
      if ((rt > sqds) || rtIsNaN(sqds)) {
        sqds = rt;
      }

      rt = std::abs(e[c_q]);
      if ((sqds > rt) || rtIsNaN(rt)) {
        rt = sqds;
      }

      ztest0 /= rt;
      smm1 = b_s[m] / rt;
      emm1 = e[m] / rt;
      sqds = b_s[c_q] / rt;
      smm1 = ((smm1 + ztest0) * (smm1 - ztest0) + emm1 * emm1) / 2.0;
      emm1 *= ztest0;
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

      ztest0 = (sqds + ztest0) * (sqds - ztest0) + shift;
      smm1 = e[c_q] / rt * sqds;
      for (qq = c_q + 1; qq <= m + 1; qq++) {
        RateControl_xrotg(&ztest0, &smm1, &rt, &sqds);
        if (qq > c_q + 1) {
          e[qq - 2] = ztest0;
        }

        smm1 = e[qq - 1];
        emm1 = b_s[qq - 1];
        ztest0 = emm1 * rt + smm1 * sqds;
        e[qq - 1] = smm1 * rt - emm1 * sqds;
        smm1 = sqds * b_s[qq];
        b_s[qq] *= rt;
        RateControl_xrot(Vf, 1 + ((qq - 1) << 2), 1 + (qq << 2), rt, sqds);
        RateControl_xrotg(&ztest0, &smm1, &rt, &sqds);
        b_s[qq - 1] = ztest0;
        smm1 = e[qq - 1];
        ztest0 = smm1 * rt + sqds * b_s[qq];
        b_s[qq] = smm1 * -sqds + rt * b_s[qq];
        smm1 = sqds * e[qq];
        e[qq] *= rt;
        RateControl_xrot(U, 1 + ((qq - 1) << 2), 1 + (qq << 2), rt, sqds);
      }

      e[m] = ztest0;
      qp1q++;
      break;

     default:
      if (b_s[c_q] < 0.0) {
        b_s[c_q] = -b_s[c_q];
        RateControl_xscal(-1.0, Vf, 1 + (c_q << 2));
      }

      qp1q = c_q + 1;
      while ((c_q + 1 < 4) && (b_s[c_q] < b_s[qp1q])) {
        rt = b_s[c_q];
        b_s[c_q] = b_s[qp1q];
        b_s[qp1q] = rt;
        RateControl_xswap(Vf, 1 + (c_q << 2), 1 + ((c_q + 1) << 2));
        RateControl_xswap(U, 1 + (c_q << 2), 1 + ((c_q + 1) << 2));
        c_q = qp1q;
        qp1q++;
      }

      qp1q = 0;
      m--;
      break;
    }
  }

  for (m = 0; m < 4; m++) {
    s[m] = b_s[m];
    c_q = m << 2;
    V[c_q] = Vf[c_q];
    V[1 + c_q] = Vf[c_q + 1];
    V[2 + c_q] = Vf[c_q + 2];
    V[3 + c_q] = Vf[c_q + 3];
  }
}

/* Function for MATLAB Function: '<Root>/INDI_allocator' */
void RateControlModelClass::RateControl_pinv(const real_T A[16], real_T X[16])
{
  real_T V[16];
  int32_T r;
  int32_T vcol;
  real_T U[16];
  real_T s[4];
  int32_T j;
  boolean_T b_p;
  real_T absxk;
  int32_T ia;
  int32_T ib;
  int32_T b_ic;
  b_p = true;
  for (r = 0; r < 16; r++) {
    X[r] = 0.0;
    if (b_p && ((!rtIsInf(A[r])) && (!rtIsNaN(A[r])))) {
      b_p = true;
    } else {
      b_p = false;
    }
  }

  if (!b_p) {
    for (r = 0; r < 16; r++) {
      X[r] = (rtNaN);
    }
  } else {
    RateControl_svd(A, U, s, V);
    absxk = std::abs(s[0]);
    if ((!rtIsInf(absxk)) && (!rtIsNaN(absxk))) {
      if (absxk <= 2.2250738585072014E-308) {
        absxk = 4.94065645841247E-324;
      } else {
        frexp(absxk, &vcol);
        absxk = std::ldexp(1.0, vcol - 53);
      }
    } else {
      absxk = (rtNaN);
    }

    absxk *= 4.0;
    r = -1;
    vcol = 0;
    while ((vcol < 4) && (s[vcol] > absxk)) {
      r++;
      vcol++;
    }

    if (r + 1 > 0) {
      vcol = 0;
      for (j = 0; j <= r; j++) {
        absxk = 1.0 / s[j];
        for (ib = vcol; ib < vcol + 4; ib++) {
          V[ib] *= absxk;
        }

        vcol += 4;
      }

      for (vcol = 0; vcol < 4; vcol++) {
        X[vcol] = 0.0;
      }

      for (vcol = 4; vcol < 8; vcol++) {
        X[vcol] = 0.0;
      }

      for (vcol = 8; vcol < 12; vcol++) {
        X[vcol] = 0.0;
      }

      for (vcol = 12; vcol < 16; vcol++) {
        X[vcol] = 0.0;
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

/* Model step function */
void RateControlModelClass::step()
{
  /* local block i/o variables */
  real_T rtb_accel_z_f;
  real_T rtb_virtual_control_input_filte[4];
  real_T rtb_w_filtered[4];
  real_T rtb_w[4];
  real_T rtb_w_l[4];
  real_T rtb_CastToDouble2[3];
  real_T rtb_Sum;
  real_T rtb_Sum_g;
  real_T rtb_Sum_e;
  real_T rtb_CastToDouble4;
  real_T rtb_accel_z_sp;
  real_T rtb_TmpSignalConversionAtSFunct[4];
  real_T rtb_Integrator;
  real_T rtb_Minus[3];
  real_T rows_multiplier[64];
  real_T control_eff_matrix[32];
  real_T v[8];
  int32_T j;
  real_T G[32];
  real_T G1[16];
  real_T G_pinv[16];
  boolean_T x[4];
  int8_T ii_data[4];
  int32_T idx;
  int8_T c_ii_data[4];
  int32_T b_idx;
  static const real32_T b[16] = { 1.0E-8F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0E-8F, 0.0F,
    0.0F, 0.0F, 0.0F, 3.0E-10F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0E-8F };

  static const real_T b_b[64] = { 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.002, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.002, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.002, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.002 };

  real_T xnew[4];
  real_T rtb_TSamp_p2;
  real_T rtb_TSamp_j;
  real_T rtb_IntegralGain;
  real_T rtb_TSamp_a1;
  real_T rtb_IntegralGain_i;
  real_T rtb_TSamp_g;
  real_T rtb_IntegralGain_p;
  real_T rtb_TSamp_tmp[4];
  real32_T tmp[8];
  real32_T tmp_0[4];
  real32_T b_0[4];
  real_T rtb_TSamp_l;
  real_T rtb_TSamp_o;
  real_T rtb_TSamp_oo_0;
  real_T rtb_TSamp_tmp_idx_0;
  real_T rtb_TSamp_tmp_idx_1;
  real_T rtb_TSamp_tmp_idx_2;
  real_T rtb_TSamp_b_idx_0;
  real_T rtb_TSamp_o_idx_0;
  real_T rtb_TSamp_b_idx_1;
  real_T rtb_TSamp_o_idx_1;
  real_T rtb_TSamp_b_idx_2;
  real_T rtb_TSamp_o_idx_2;
  real_T rtb_TSamp_c_idx_0;
  real_T rtb_TSamp_oo_idx_0;
  real_T rtb_TSamp_c_idx_1;
  real_T rtb_TSamp_oo_idx_1;
  real_T rtb_TSamp_c_idx_2;
  real32_T b_1;
  int32_T control_eff_matrix_tmp;
  int32_T G_tmp;
  boolean_T exitg1;

  /* MATLAB Function: '<Root>/controlEffMatrix' */
  /* :  matrix = control_eff_matrix(RateControlParams); */
  /* 'control_eff_matrix:6' roll = RateControlParams.roll_eff; */
  /* 'control_eff_matrix:7' pitch = RateControlParams.pitch_eff; */
  /* 'control_eff_matrix:8' yaw = RateControlParams.yaw_eff; */
  /* 'control_eff_matrix:9' yaw_w_dot = RateControlParams.yaw_d_eff; */
  /* 'control_eff_matrix:10' az = RateControlParams.az_eff; */
  /* 'control_eff_matrix:12' unit_matrix = RateControlParams.unit_matrix; */
  /* 'control_eff_matrix:14' rows_multiplier = diag([roll pitch yaw az 0 0 yaw_w_dot 0]); */
  v[0] = RateControlParams.roll_eff;
  v[1] = RateControlParams.pitch_eff;
  v[2] = RateControlParams.yaw_eff;
  v[3] = RateControlParams.az_eff;
  v[4] = 0.0;
  v[5] = 0.0;
  v[6] = RateControlParams.yaw_d_eff;
  v[7] = 0.0;
  memset(&rows_multiplier[0], 0, sizeof(real_T) << 6U);
  for (j = 0; j < 8; j++) {
    rows_multiplier[j + (j << 3)] = v[j];
  }

  /* 'control_eff_matrix:16' control_eff_matrix = rows_multiplier*unit_matrix; */
  for (j = 0; j < 4; j++) {
    for (idx = 0; idx < 8; idx++) {
      b_idx = j << 3;
      control_eff_matrix_tmp = idx + b_idx;
      control_eff_matrix[control_eff_matrix_tmp] = 0.0;
      for (G_tmp = 0; G_tmp < 8; G_tmp++) {
        control_eff_matrix[control_eff_matrix_tmp] = rows_multiplier[(G_tmp << 3)
          + idx] * RateControlParams.unit_matrix[b_idx + G_tmp] +
          control_eff_matrix[b_idx + idx];
      }
    }
  }

  /* DiscreteStateSpace: '<Root>/H_rates' */
  /* 'control_eff_matrix:18' control_eff_matrix = [ */
  /* 'control_eff_matrix:19'     control_eff_matrix(1:4, :) control_eff_matrix(5:8, :) % [G1 G2] */
  /* 'control_eff_matrix:20'     ]; */
  {
    rtb_Minus[0] = (0.038540899779240162)*RateControl_DW.H_rates_DSTATE[0] +
      (0.037152995666791561)*RateControl_DW.H_rates_DSTATE[1];
    rtb_Minus[1] = (0.038540899779240162)*RateControl_DW.H_rates_DSTATE[2] +
      (0.037152995666791561)*RateControl_DW.H_rates_DSTATE[3];
    rtb_Minus[2] = (0.038540899779240162)*RateControl_DW.H_rates_DSTATE[4] +
      (0.037152995666791561)*RateControl_DW.H_rates_DSTATE[5];
  }

  /* SampleTimeMath: '<S1>/TSamp'
   *
   * About '<S1>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp_tmp_idx_0 = rtb_Minus[0] * 500.0;
  rtb_TSamp_tmp_idx_1 = rtb_Minus[1] * 500.0;
  rtb_TSamp_tmp_idx_2 = rtb_Minus[2] * 500.0;

  /* DiscreteStateSpace: '<Root>/H_accel' */
  {
    rtb_accel_z_f = (0.038540899779240162)*RateControl_DW.H_accel_DSTATE[0] +
      (0.037152995666791561)*RateControl_DW.H_accel_DSTATE[1];
  }

  /* DiscreteStateSpace: '<Root>/H_virtual_control_input' */
  {
    rtb_virtual_control_input_filte[0] = (0.13711666757328289)*
      RateControl_DW.H_virtual_control_input_DSTATE[0]
      + (0.1183435266054762)*RateControl_DW.H_virtual_control_input_DSTATE[1];
    rtb_virtual_control_input_filte[1] = (0.13711666757328289)*
      RateControl_DW.H_virtual_control_input_DSTATE[2]
      + (0.1183435266054762)*RateControl_DW.H_virtual_control_input_DSTATE[3];
    rtb_virtual_control_input_filte[2] = (0.13711666757328289)*
      RateControl_DW.H_virtual_control_input_DSTATE[4]
      + (0.1183435266054762)*RateControl_DW.H_virtual_control_input_DSTATE[5];
    rtb_virtual_control_input_filte[3] = (0.13711666757328289)*
      RateControl_DW.H_virtual_control_input_DSTATE[6]
      + (0.1183435266054762)*RateControl_DW.H_virtual_control_input_DSTATE[7];
  }

  /* DiscreteStateSpace: '<Root>/H_actuators' */
  {
    rtb_w_filtered[0] = (0.038540899779240162)*
      RateControl_DW.H_actuators_DSTATE[0] + (0.037152995666791561)*
      RateControl_DW.H_actuators_DSTATE[1];
    rtb_w_filtered[1] = (0.038540899779240162)*
      RateControl_DW.H_actuators_DSTATE[2] + (0.037152995666791561)*
      RateControl_DW.H_actuators_DSTATE[3];
    rtb_w_filtered[2] = (0.038540899779240162)*
      RateControl_DW.H_actuators_DSTATE[4] + (0.037152995666791561)*
      RateControl_DW.H_actuators_DSTATE[5];
    rtb_w_filtered[3] = (0.038540899779240162)*
      RateControl_DW.H_actuators_DSTATE[6] + (0.037152995666791561)*
      RateControl_DW.H_actuators_DSTATE[7];
  }

  /* MATLAB Function: '<Root>/INDI_allocator' incorporates:
   *  Inport: '<Root>/fail_id'
   *  MATLAB Function: '<Root>/controlEffMatrix'
   *  Outport: '<Root>/w_cmd'
   *  SampleTimeMath: '<S1>/TSamp'
   *  Sum: '<S1>/Diff'
   *  UnitDelay: '<S1>/UD'
   *
   * About '<S1>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  /* :  [actuator_controls, w_cmd] = INDI_allocator(fail_id, Omega_f_dot, accel_z_f, v, G, w_f, par); */
  /* 'INDI_allocator:2:23' if isempty(du_last) */
  /* 'INDI_allocator:2:28' G = G*1e-3; */
  /* 'INDI_allocator:2:31' G1 = G(:, 1:4); */
  for (j = 0; j < 4; j++) {
    /* MATLAB Function: '<Root>/controlEffMatrix' */
    b_idx = j << 3;
    idx = j << 2;
    G[idx] = control_eff_matrix[b_idx] * 0.001;
    control_eff_matrix_tmp = (j + 4) << 2;
    G[control_eff_matrix_tmp] = control_eff_matrix[b_idx + 4] * 0.001;
    G1[idx] = G[idx];
    G_tmp = 1 + idx;
    G[G_tmp] = control_eff_matrix[b_idx + 1] * 0.001;
    G[1 + control_eff_matrix_tmp] = control_eff_matrix[b_idx + 5] * 0.001;
    G1[G_tmp] = G[idx + 1];
    G_tmp = 2 + idx;
    G[G_tmp] = control_eff_matrix[b_idx + 2] * 0.001;
    G[2 + control_eff_matrix_tmp] = control_eff_matrix[b_idx + 6] * 0.001;
    G1[G_tmp] = G[idx + 2];
    G_tmp = 3 + idx;
    G[G_tmp] = control_eff_matrix[b_idx + 3] * 0.001;
    G[3 + control_eff_matrix_tmp] = control_eff_matrix[b_idx + 7] * 0.001;
    G1[G_tmp] = G[idx + 3];
  }

  /* 'INDI_allocator:2:32' G2 = G(:, 5:8); */
  /* 'INDI_allocator:2:34' dv = v - [Omega_f_dot; accel_z_f]; */
  /* 'INDI_allocator:2:36' if fail_id~=0 */
  if (RateControl_U.fail_id != 0.0) {
    /* 'INDI_allocator:2:37' G1_shrink = G1; */
    /* 'INDI_allocator:2:38' G1_shrink(:,fail_id) = 0; */
    j = ((int32_T)RateControl_U.fail_id - 1) << 2;
    G1[j] = 0.0;
    G1[1 + j] = 0.0;
    G1[2 + j] = 0.0;
    G1[3 + j] = 0.0;

    /* 'INDI_allocator:2:39' G1_shrink(3,:) = 0; */
    G1[2] = 0.0;
    G1[6] = 0.0;
    G1[10] = 0.0;
    G1[14] = 0.0;

    /* 'INDI_allocator:2:40' G_pinv = pinv(G1_shrink); */
    RateControl_pinv(G1, G_pinv);

    /* 'INDI_allocator:2:41' du = G_pinv*(dv); */
    rtb_TSamp_j = rtb_virtual_control_input_filte[0] - (rtb_TSamp_tmp_idx_0 -
      RateControl_DW.UD_DSTATE[0]);
    rtb_IntegralGain = rtb_virtual_control_input_filte[1] - (rtb_TSamp_tmp_idx_1
      - RateControl_DW.UD_DSTATE[1]);
    rtb_TSamp_a1 = rtb_virtual_control_input_filte[2] - (rtb_TSamp_tmp_idx_2 -
      RateControl_DW.UD_DSTATE[2]);
    rtb_IntegralGain_i = rtb_virtual_control_input_filte[3] - rtb_accel_z_f;
    for (j = 0; j < 4; j++) {
      RateControl_Y.w_cmd[j] = 0.0;
      RateControl_Y.w_cmd[j] += G_pinv[j] * rtb_TSamp_j;
      RateControl_Y.w_cmd[j] += G_pinv[j + 4] * rtb_IntegralGain;
      RateControl_Y.w_cmd[j] += G_pinv[j + 8] * rtb_TSamp_a1;
      RateControl_Y.w_cmd[j] += G_pinv[j + 12] * rtb_IntegralGain_i;
    }
  } else {
    /* 'INDI_allocator:2:42' else */
    /* 'INDI_allocator:2:45' G_pinv = pinv(G1 + G2); */
    for (j = 0; j < 4; j++) {
      b_idx = j << 2;
      idx = (4 + j) << 2;
      G1[b_idx] = G[idx] + G[b_idx];
      G1[1 + b_idx] = G[idx + 1] + G[b_idx + 1];
      G1[2 + b_idx] = G[idx + 2] + G[b_idx + 2];
      G1[3 + b_idx] = G[idx + 3] + G[b_idx + 3];
    }

    RateControl_pinv(G1, G_pinv);

    /* 'INDI_allocator:2:46' du = G_pinv*(dv + G2*du_last); */
    rtb_TSamp_tmp[0] = rtb_TSamp_tmp_idx_0 - RateControl_DW.UD_DSTATE[0];
    rtb_TSamp_tmp[1] = rtb_TSamp_tmp_idx_1 - RateControl_DW.UD_DSTATE[1];
    rtb_TSamp_tmp[2] = rtb_TSamp_tmp_idx_2 - RateControl_DW.UD_DSTATE[2];
    rtb_TSamp_tmp[3] = rtb_accel_z_f;
    for (j = 0; j < 4; j++) {
      xnew[j] = (((G[j + 16] * RateControl_DW.du_last[0] + G[j + 20] *
                   RateControl_DW.du_last[1]) + G[j + 24] *
                  RateControl_DW.du_last[2]) + G[j + 28] *
                 RateControl_DW.du_last[3]) + (rtb_virtual_control_input_filte[j]
        - rtb_TSamp_tmp[j]);
    }

    for (j = 0; j < 4; j++) {
      RateControl_Y.w_cmd[j] = 0.0;
      RateControl_Y.w_cmd[j] += G_pinv[j] * xnew[0];
      RateControl_Y.w_cmd[j] += G_pinv[j + 4] * xnew[1];
      RateControl_Y.w_cmd[j] += G_pinv[j + 8] * xnew[2];
      RateControl_Y.w_cmd[j] += G_pinv[j + 12] * xnew[3];
    }
  }

  /* 'INDI_allocator:2:49' du_last = du; */
  /* 'INDI_allocator:2:51' w_cmd = w_f + du; */
  /* 'INDI_allocator:2:53' w_max = par.w_max; */
  /* 'INDI_allocator:2:54' w_min = par.w_min; */
  /* 'INDI_allocator:2:56' i_up = find(w_cmd>=w_max); */
  RateControl_DW.du_last[0] = RateControl_Y.w_cmd[0];

  /* Outport: '<Root>/w_cmd' incorporates:
   *  MATLAB Function: '<Root>/INDI_allocator'
   */
  RateControl_Y.w_cmd[0] += rtb_w_filtered[0];

  /* MATLAB Function: '<Root>/INDI_allocator' incorporates:
   *  Outport: '<Root>/w_cmd'
   */
  x[0] = (RateControl_Y.w_cmd[0] >= 1256.0);
  RateControl_DW.du_last[1] = RateControl_Y.w_cmd[1];

  /* Outport: '<Root>/w_cmd' incorporates:
   *  MATLAB Function: '<Root>/INDI_allocator'
   */
  RateControl_Y.w_cmd[1] += rtb_w_filtered[1];

  /* MATLAB Function: '<Root>/INDI_allocator' incorporates:
   *  Outport: '<Root>/w_cmd'
   */
  x[1] = (RateControl_Y.w_cmd[1] >= 1256.0);
  RateControl_DW.du_last[2] = RateControl_Y.w_cmd[2];

  /* Outport: '<Root>/w_cmd' incorporates:
   *  MATLAB Function: '<Root>/INDI_allocator'
   */
  RateControl_Y.w_cmd[2] += rtb_w_filtered[2];

  /* MATLAB Function: '<Root>/INDI_allocator' incorporates:
   *  Outport: '<Root>/w_cmd'
   */
  x[2] = (RateControl_Y.w_cmd[2] >= 1256.0);
  RateControl_DW.du_last[3] = RateControl_Y.w_cmd[3];

  /* Outport: '<Root>/w_cmd' incorporates:
   *  MATLAB Function: '<Root>/INDI_allocator'
   */
  RateControl_Y.w_cmd[3] += rtb_w_filtered[3];

  /* MATLAB Function: '<Root>/INDI_allocator' incorporates:
   *  Inport: '<Root>/fail_id'
   *  Outport: '<Root>/w_cmd'
   */
  x[3] = (RateControl_Y.w_cmd[3] >= 1256.0);
  idx = 0;
  j = 0;
  exitg1 = false;
  while ((!exitg1) && (j < 4)) {
    if (x[j]) {
      idx++;
      ii_data[idx - 1] = (int8_T)(j + 1);
      if (idx >= 4) {
        exitg1 = true;
      } else {
        j++;
      }
    } else {
      j++;
    }
  }

  if (1 > idx) {
    idx = 0;
  }

  /* 'INDI_allocator:2:57' i_down = find(w_cmd<w_min); */
  x[0] = (RateControl_Y.w_cmd[0] < 300.0);
  x[1] = (RateControl_Y.w_cmd[1] < 300.0);
  x[2] = (RateControl_Y.w_cmd[2] < 300.0);
  x[3] = (RateControl_Y.w_cmd[3] < 300.0);
  b_idx = 0;
  j = 0;
  exitg1 = false;
  while ((!exitg1) && (j < 4)) {
    if (x[j]) {
      b_idx++;
      c_ii_data[b_idx - 1] = (int8_T)(j + 1);
      if (b_idx >= 4) {
        exitg1 = true;
      } else {
        j++;
      }
    } else {
      j++;
    }
  }

  if (1 > b_idx) {
    b_idx = 0;
  }

  /* 'INDI_allocator:2:59' du(i_up) = w_max - w_f(i_up); */
  /* 'INDI_allocator:2:60' du(i_down) =  w_min - w_f(i_down); */
  /* 'INDI_allocator:2:62' w_cmd(i_up) = w_max; */
  for (j = 0; j < idx; j++) {
    RateControl_Y.w_cmd[ii_data[j] - 1] = 1256.0;
  }

  /* 'INDI_allocator:2:63' w_cmd(i_down) = w_min; */
  for (j = 0; j < b_idx; j++) {
    RateControl_Y.w_cmd[c_ii_data[j] - 1] = 300.0;
  }

  /* 'INDI_allocator:2:66' if fail_id~=0 */
  if (RateControl_U.fail_id != 0.0) {
    /* 'INDI_allocator:2:67' w_cmd(fail_id) = 0.0; */
    RateControl_Y.w_cmd[(int32_T)RateControl_U.fail_id - 1] = 0.0;
  }

  /* Outport: '<Root>/actuators_control' incorporates:
   *  DataTypeConversion: '<Root>/Cast To Single'
   *  MATLAB Function: '<Root>/INDI_allocator'
   *  Outport: '<Root>/w_cmd'
   */
  /* 'INDI_allocator:2:71' actuator_controls = w_sp_to_px4_actuator_controls(w_cmd, par); */
  /* 'w_sp_to_px4_actuator_controls:4' w_min = par.w_min; */
  /* 'w_sp_to_px4_actuator_controls:5' w_max = par.w_max; */
  /* 'w_sp_to_px4_actuator_controls:8' actuator_controls = -1 + 2*(w_sp - w_min)./(w_max - w_min); */
  RateControl_Y.actuators_control[0] = (real32_T)((RateControl_Y.w_cmd[0] -
    300.0) * 2.0 / 956.0 + -1.0);
  RateControl_Y.actuators_control[1] = (real32_T)((RateControl_Y.w_cmd[1] -
    300.0) * 2.0 / 956.0 + -1.0);
  RateControl_Y.actuators_control[2] = (real32_T)((RateControl_Y.w_cmd[2] -
    300.0) * 2.0 / 956.0 + -1.0);
  RateControl_Y.actuators_control[3] = (real32_T)((RateControl_Y.w_cmd[3] -
    300.0) * 2.0 / 956.0 + -1.0);

  /* DiscreteStateSpace: '<Root>/H_est_actuators' */
  {
    rtb_TmpSignalConversionAtSFunct[0] = (0.012706224409800739)*
      RateControl_DW.H_est_actuators_DSTATE[0]
      + (0.012613385351727553)*RateControl_DW.H_est_actuators_DSTATE[1];
    rtb_TmpSignalConversionAtSFunct[1] = (0.012706224409800739)*
      RateControl_DW.H_est_actuators_DSTATE[2]
      + (0.012613385351727553)*RateControl_DW.H_est_actuators_DSTATE[3];
    rtb_TmpSignalConversionAtSFunct[2] = (0.012706224409800739)*
      RateControl_DW.H_est_actuators_DSTATE[4]
      + (0.012613385351727553)*RateControl_DW.H_est_actuators_DSTATE[5];
    rtb_TmpSignalConversionAtSFunct[3] = (0.012706224409800739)*
      RateControl_DW.H_est_actuators_DSTATE[6]
      + (0.012613385351727553)*RateControl_DW.H_est_actuators_DSTATE[7];
  }

  /* SampleTimeMath: '<S3>/TSamp'
   *
   * About '<S3>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp_l = rtb_TmpSignalConversionAtSFunct[0] * 500.0;

  /* Sum: '<S3>/Diff' incorporates:
   *  UnitDelay: '<S3>/UD'
   */
  RateControl_DW.UD_DSTATE_p[0] = rtb_TSamp_l - RateControl_DW.UD_DSTATE_p[0];

  /* SampleTimeMath: '<S5>/TSamp'
   *
   * About '<S5>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp_o = RateControl_DW.UD_DSTATE_p[0] * 500.0;

  /* Sum: '<S5>/Diff' incorporates:
   *  UnitDelay: '<S5>/UD'
   */
  RateControl_DW.UD_DSTATE_e[0] = rtb_TSamp_o - RateControl_DW.UD_DSTATE_e[0];

  /* SampleTimeMath: '<S3>/TSamp'
   *
   * About '<S3>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp_b_idx_0 = rtb_TSamp_l;

  /* SampleTimeMath: '<S5>/TSamp'
   *
   * About '<S5>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp_o_idx_0 = rtb_TSamp_o;

  /* SampleTimeMath: '<S3>/TSamp'
   *
   * About '<S3>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp_l = rtb_TmpSignalConversionAtSFunct[1] * 500.0;

  /* Sum: '<S3>/Diff' incorporates:
   *  UnitDelay: '<S3>/UD'
   */
  RateControl_DW.UD_DSTATE_p[1] = rtb_TSamp_l - RateControl_DW.UD_DSTATE_p[1];

  /* SampleTimeMath: '<S5>/TSamp'
   *
   * About '<S5>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp_o = RateControl_DW.UD_DSTATE_p[1] * 500.0;

  /* Sum: '<S5>/Diff' incorporates:
   *  UnitDelay: '<S5>/UD'
   */
  RateControl_DW.UD_DSTATE_e[1] = rtb_TSamp_o - RateControl_DW.UD_DSTATE_e[1];

  /* SampleTimeMath: '<S3>/TSamp'
   *
   * About '<S3>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp_b_idx_1 = rtb_TSamp_l;

  /* SampleTimeMath: '<S5>/TSamp'
   *
   * About '<S5>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp_o_idx_1 = rtb_TSamp_o;

  /* SampleTimeMath: '<S3>/TSamp'
   *
   * About '<S3>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp_l = rtb_TmpSignalConversionAtSFunct[2] * 500.0;

  /* Sum: '<S3>/Diff' incorporates:
   *  UnitDelay: '<S3>/UD'
   */
  RateControl_DW.UD_DSTATE_p[2] = rtb_TSamp_l - RateControl_DW.UD_DSTATE_p[2];

  /* SampleTimeMath: '<S5>/TSamp'
   *
   * About '<S5>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp_o = RateControl_DW.UD_DSTATE_p[2] * 500.0;

  /* Sum: '<S5>/Diff' incorporates:
   *  UnitDelay: '<S5>/UD'
   */
  RateControl_DW.UD_DSTATE_e[2] = rtb_TSamp_o - RateControl_DW.UD_DSTATE_e[2];

  /* SampleTimeMath: '<S3>/TSamp'
   *
   * About '<S3>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp_b_idx_2 = rtb_TSamp_l;

  /* SampleTimeMath: '<S5>/TSamp'
   *
   * About '<S5>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp_o_idx_2 = rtb_TSamp_o;

  /* SampleTimeMath: '<S3>/TSamp'
   *
   * About '<S3>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp_l = rtb_TmpSignalConversionAtSFunct[3] * 500.0;

  /* Sum: '<S3>/Diff' incorporates:
   *  UnitDelay: '<S3>/UD'
   */
  RateControl_DW.UD_DSTATE_p[3] = rtb_TSamp_l - RateControl_DW.UD_DSTATE_p[3];

  /* SampleTimeMath: '<S5>/TSamp'
   *
   * About '<S5>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp_o = RateControl_DW.UD_DSTATE_p[3] * 500.0;

  /* Sum: '<S5>/Diff' incorporates:
   *  UnitDelay: '<S5>/UD'
   */
  RateControl_DW.UD_DSTATE_e[3] = rtb_TSamp_o - RateControl_DW.UD_DSTATE_e[3];

  /* DiscreteStateSpace: '<Root>/H_est_rates' */
  {
    rtb_Minus[0] = (0.012706224409800739)*RateControl_DW.H_est_rates_DSTATE[0] +
      (0.012613385351727553)*RateControl_DW.H_est_rates_DSTATE[1];
    rtb_Minus[1] = (0.012706224409800739)*RateControl_DW.H_est_rates_DSTATE[2] +
      (0.012613385351727553)*RateControl_DW.H_est_rates_DSTATE[3];
    rtb_Minus[2] = (0.012706224409800739)*RateControl_DW.H_est_rates_DSTATE[4] +
      (0.012613385351727553)*RateControl_DW.H_est_rates_DSTATE[5];
  }

  /* SampleTimeMath: '<S4>/TSamp'
   *
   * About '<S4>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp_oo_0 = rtb_Minus[0] * 500.0;

  /* Sum: '<S4>/Diff' incorporates:
   *  UnitDelay: '<S4>/UD'
   */
  rtb_Minus[0] = rtb_TSamp_oo_0 - RateControl_DW.UD_DSTATE_d[0];

  /* SampleTimeMath: '<S2>/TSamp'
   *
   * About '<S2>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp_c_idx_0 = rtb_Minus[0] * 500.0;

  /* SampleTimeMath: '<S4>/TSamp'
   *
   * About '<S4>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp_oo_idx_0 = rtb_TSamp_oo_0;
  rtb_TSamp_oo_0 = rtb_Minus[1] * 500.0;

  /* Sum: '<S4>/Diff' incorporates:
   *  UnitDelay: '<S4>/UD'
   */
  rtb_Minus[1] = rtb_TSamp_oo_0 - RateControl_DW.UD_DSTATE_d[1];

  /* SampleTimeMath: '<S2>/TSamp'
   *
   * About '<S2>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp_c_idx_1 = rtb_Minus[1] * 500.0;

  /* SampleTimeMath: '<S4>/TSamp'
   *
   * About '<S4>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp_oo_idx_1 = rtb_TSamp_oo_0;
  rtb_TSamp_oo_0 = rtb_Minus[2] * 500.0;

  /* Sum: '<S4>/Diff' incorporates:
   *  UnitDelay: '<S4>/UD'
   */
  rtb_Minus[2] = rtb_TSamp_oo_0 - RateControl_DW.UD_DSTATE_d[2];

  /* SampleTimeMath: '<S2>/TSamp'
   *
   * About '<S2>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp_c_idx_2 = rtb_Minus[2] * 500.0;

  /* DiscreteStateSpace: '<Root>/H_est_accel' */
  {
    rtb_Integrator = (0.012706224409800739)*RateControl_DW.H_est_accel_DSTATE[0]
      + (0.012613385351727553)*RateControl_DW.H_est_accel_DSTATE[1];
  }

  /* SampleTimeMath: '<S6>/TSamp'
   *
   * About '<S6>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp_p2 = rtb_Integrator * 500.0;

  /* SignalConversion: '<S14>/TmpSignal ConversionAt SFunction Inport4' incorporates:
   *  MATLAB Function: '<Root>/lms'
   *  Sum: '<S2>/Diff'
   *  Sum: '<S6>/Diff'
   *  UnitDelay: '<S2>/UD'
   *  UnitDelay: '<S6>/UD'
   */
  rtb_TmpSignalConversionAtSFunct[0] = rtb_TSamp_c_idx_0 -
    RateControl_DW.UD_DSTATE_g[0];
  rtb_TmpSignalConversionAtSFunct[1] = rtb_TSamp_c_idx_1 -
    RateControl_DW.UD_DSTATE_g[1];
  rtb_TmpSignalConversionAtSFunct[2] = rtb_TSamp_c_idx_2 -
    RateControl_DW.UD_DSTATE_g[2];
  rtb_TmpSignalConversionAtSFunct[3] = rtb_TSamp_p2 - RateControl_DW.UD_DSTATE_j;

  /* MATLAB Function: '<Root>/lms' incorporates:
   *  Memory: '<Root>/Memory3'
   */
  /* :  G1 = lms_control_eff_est(G0, du_f, du_f_dot, Omega_ddot_f_Vz); */
  /* 'lms_control_eff_est:5' G_limit = 1; */
  /* 'lms_control_eff_est:6' G0 = G0/1000; */
  for (j = 0; j < 32; j++) {
    RateControl_DW.Memory3_PreviousInput[j] /= 1000.0F;
  }

  /* 'lms_control_eff_est:10' mu_1 = diag([1 1 1 1 ones(1, 4)*0.002]); */
  /* 'lms_control_eff_est:14' mu_2 = diag([10 10 0.3 10])*1e-9; */
  /* 'lms_control_eff_est:16' Omega_ddot_prediction = G0*[du_f; du_f_dot]; */
  /* 'lms_control_eff_est:17' Omega_ddot_measurement = Omega_ddot_f_Vz; */
  /* 'lms_control_eff_est:19' adaptation_per_input = [du_f; du_f_dot]'*mu_1; */
  /* 'lms_control_eff_est:21' G1 = G0 - mu_2*( Omega_ddot_prediction - Omega_ddot_measurement)*adaptation_per_input; */
  tmp[0] = (real32_T)RateControl_DW.UD_DSTATE_p[0];
  tmp[4] = (real32_T)RateControl_DW.UD_DSTATE_e[0];
  tmp[1] = (real32_T)RateControl_DW.UD_DSTATE_p[1];
  tmp[5] = (real32_T)RateControl_DW.UD_DSTATE_e[1];
  tmp[2] = (real32_T)RateControl_DW.UD_DSTATE_p[2];
  tmp[6] = (real32_T)RateControl_DW.UD_DSTATE_e[2];
  tmp[3] = (real32_T)RateControl_DW.UD_DSTATE_p[3];
  tmp[7] = (real32_T)RateControl_DW.UD_DSTATE_e[3];
  for (j = 0; j < 4; j++) {
    b_1 = 0.0F;
    for (idx = 0; idx < 8; idx++) {
      b_1 += RateControl_DW.Memory3_PreviousInput[(idx << 2) + j] * tmp[idx];
    }

    tmp_0[j] = b_1 - (real32_T)rtb_TmpSignalConversionAtSFunct[j];
    v[j] = RateControl_DW.UD_DSTATE_p[j];
    v[j + 4] = RateControl_DW.UD_DSTATE_e[j];
  }

  for (j = 0; j < 4; j++) {
    b_1 = b[j + 12] * tmp_0[3] + (b[j + 8] * tmp_0[2] + (b[j + 4] * tmp_0[1] +
      b[j] * tmp_0[0]));
    b_0[j] = b_1;
  }

  for (j = 0; j < 8; j++) {
    rtb_TSamp_j = 0.0;
    for (idx = 0; idx < 8; idx++) {
      rtb_TSamp_j += b_b[(j << 3) + idx] * v[idx];
    }

    tmp[j] = (real32_T)rtb_TSamp_j;
  }

  for (j = 0; j < 4; j++) {
    for (idx = 0; idx < 8; idx++) {
      b_idx = idx << 2;
      RateControl_Y.G[j + b_idx] = RateControl_DW.Memory3_PreviousInput[b_idx +
        j] - b_0[j] * tmp[idx];
    }
  }

  /* 'lms_control_eff_est:23' G1(G1>G_limit) = G_limit; */
  /* 'lms_control_eff_est:24' G1(G1<-G_limit) = -G_limit; */
  /* 'lms_control_eff_est:26' G1 = G1*1000; */
  for (j = 0; j < 32; j++) {
    if (RateControl_Y.G[j] > 1.0F) {
      RateControl_Y.G[j] = 1.0F;
    }

    if (RateControl_Y.G[j] < -1.0F) {
      RateControl_Y.G[j] = -1.0F;
    }

    RateControl_Y.G[j] *= 1000.0F;
  }

  /* :  mu = [1 1 1e-2 1e-1]; */
  /* :  sum = mu*abs(G); */
  for (j = 0; j < 4; j++) {
    /* Delay: '<Root>/Delay' */
    rtb_w[j] = RateControl_DW.Delay_DSTATE[j];

    /* DiscreteStateSpace: '<Root>/ActuatorDynamics' */
    rtb_w_l[j] = 0.0;
    rtb_w_l[j] += RateControl_ConstP.ActuatorDynamics_C[j] *
      RateControl_DW.ActuatorDynamics_DSTATE[0];
    rtb_w_l[j] += RateControl_ConstP.ActuatorDynamics_C[j + 4] *
      RateControl_DW.ActuatorDynamics_DSTATE[1];
    rtb_w_l[j] += RateControl_ConstP.ActuatorDynamics_C[j + 8] *
      RateControl_DW.ActuatorDynamics_DSTATE[2];
    rtb_w_l[j] += RateControl_ConstP.ActuatorDynamics_C[j + 12] *
      RateControl_DW.ActuatorDynamics_DSTATE[3];
  }

  /* DataTypeConversion: '<Root>/Cast To Double' incorporates:
   *  Inport: '<Root>/rates_sp'
   */
  rtb_Minus[0] = RateControl_U.rates_sp[0];

  /* DataTypeConversion: '<Root>/Cast To Double2' incorporates:
   *  Inport: '<Root>/rates'
   */
  rtb_CastToDouble2[0] = RateControl_U.rates[0];

  /* Sum: '<Root>/Minus' */
  rtb_Minus[0] -= rtb_CastToDouble2[0];

  /* DataTypeConversion: '<Root>/Cast To Double' incorporates:
   *  Inport: '<Root>/rates_sp'
   */
  rtb_Minus[1] = RateControl_U.rates_sp[1];

  /* DataTypeConversion: '<Root>/Cast To Double2' incorporates:
   *  Inport: '<Root>/rates'
   */
  rtb_CastToDouble2[1] = RateControl_U.rates[1];

  /* Sum: '<Root>/Minus' */
  rtb_Minus[1] -= rtb_CastToDouble2[1];

  /* DataTypeConversion: '<Root>/Cast To Double' incorporates:
   *  Inport: '<Root>/rates_sp'
   */
  rtb_Minus[2] = RateControl_U.rates_sp[2];

  /* DataTypeConversion: '<Root>/Cast To Double2' incorporates:
   *  Inport: '<Root>/rates'
   */
  rtb_CastToDouble2[2] = RateControl_U.rates[2];

  /* Sum: '<Root>/Minus' */
  rtb_Minus[2] -= rtb_CastToDouble2[2];

  /* Gain: '<S46>/Derivative Gain' */
  rtb_Integrator = 0.0 * rtb_Minus[1];

  /* SampleTimeMath: '<S48>/TSamp'
   *
   * About '<S48>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp_j = rtb_Integrator * 500.0;

  /* DiscreteIntegrator: '<S69>/Integrator' */
  rtb_Integrator = RateControl_DW.Integrator_DSTATE;

  /* Sum: '<S99>/Sum' incorporates:
   *  Delay: '<S48>/UD'
   *  Gain: '<S86>/Proportional Gain'
   *  Sum: '<S48>/Diff'
   */
  rtb_Sum = (RateControlParams.pitch_gain * rtb_Minus[1] + rtb_Integrator) +
    (rtb_TSamp_j - RateControl_DW.UD_DSTATE_l);

  /* Gain: '<S59>/Integral Gain' */
  rtb_IntegralGain = 0.0 * rtb_Minus[1];

  /* SampleTimeMath: '<S144>/TSamp' incorporates:
   *  Gain: '<S142>/Derivative Gain'
   *
   * About '<S144>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp_a1 = 0.0 * rtb_Minus[0] * 500.0;

  /* Sum: '<S195>/Sum' incorporates:
   *  Delay: '<S144>/UD'
   *  DiscreteIntegrator: '<S165>/Integrator'
   *  Gain: '<S182>/Proportional Gain'
   *  Sum: '<S144>/Diff'
   */
  rtb_Sum_g = (RateControlParams.roll_gain * rtb_Minus[0] +
               RateControl_DW.Integrator_DSTATE_k) + (rtb_TSamp_a1 -
    RateControl_DW.UD_DSTATE_b);

  /* Gain: '<S155>/Integral Gain' */
  rtb_IntegralGain_i = 0.0 * rtb_Minus[0];

  /* SampleTimeMath: '<S240>/TSamp' incorporates:
   *  Gain: '<S238>/Derivative Gain'
   *
   * About '<S240>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp_g = 0.0 * rtb_Minus[2] * 500.0;

  /* Sum: '<S291>/Sum' incorporates:
   *  Delay: '<S240>/UD'
   *  DiscreteIntegrator: '<S261>/Integrator'
   *  Gain: '<S278>/Proportional Gain'
   *  Sum: '<S240>/Diff'
   */
  rtb_Sum_e = (RateControlParams.yaw_gain * rtb_Minus[2] +
               RateControl_DW.Integrator_DSTATE_b) + (rtb_TSamp_g -
    RateControl_DW.UD_DSTATE_bg);

  /* Gain: '<S251>/Integral Gain' */
  rtb_IntegralGain_p = 0.0 * rtb_Minus[2];

  /* MATLAB Function: '<Root>/MATLAB Function' incorporates:
   *  DataTypeConversion: '<Root>/Cast To Double1'
   *  Inport: '<Root>/thrust_sp'
   */
  /* :  g = 9.81; */
  /* :  accel_z_sp = -2*g*thrust_sp; */
  rtb_accel_z_sp = -19.62 * RateControl_U.thrust_sp;

  /* DataTypeConversion: '<Root>/Cast To Double4' incorporates:
   *  Inport: '<Root>/accel_z'
   */
  rtb_CastToDouble4 = RateControl_U.accel_z;

  /* Update for DiscreteStateSpace: '<Root>/H_rates' */
  {
    real_T xnew[6];
    xnew[0] = (1.8863723983657743)*RateControl_DW.H_rates_DSTATE[0] +
      (-0.89583413529652833)*RateControl_DW.H_rates_DSTATE[1];
    xnew[0] += (0.125)*rtb_CastToDouble2[0];
    xnew[1] = (1.0)*RateControl_DW.H_rates_DSTATE[0];
    xnew[2] = (1.8863723983657743)*RateControl_DW.H_rates_DSTATE[2] +
      (-0.89583413529652833)*RateControl_DW.H_rates_DSTATE[3];
    xnew[2] += (0.125)*rtb_CastToDouble2[1];
    xnew[3] = (1.0)*RateControl_DW.H_rates_DSTATE[2];
    xnew[4] = (1.8863723983657743)*RateControl_DW.H_rates_DSTATE[4] +
      (-0.89583413529652833)*RateControl_DW.H_rates_DSTATE[5];
    xnew[4] += (0.125)*rtb_CastToDouble2[2];
    xnew[5] = (1.0)*RateControl_DW.H_rates_DSTATE[4];
    (void) memcpy(&RateControl_DW.H_rates_DSTATE[0], xnew,
                  sizeof(real_T)*6);
  }

  /* Update for UnitDelay: '<S1>/UD' incorporates:
   *  SampleTimeMath: '<S1>/TSamp'
   *
   * About '<S1>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  RateControl_DW.UD_DSTATE[0] = rtb_TSamp_tmp_idx_0;
  RateControl_DW.UD_DSTATE[1] = rtb_TSamp_tmp_idx_1;
  RateControl_DW.UD_DSTATE[2] = rtb_TSamp_tmp_idx_2;

  /* Update for DiscreteStateSpace: '<Root>/H_accel' */
  {
    real_T xnew[2];
    xnew[0] = (1.8863723983657743)*RateControl_DW.H_accel_DSTATE[0] +
      (-0.89583413529652833)*RateControl_DW.H_accel_DSTATE[1];
    xnew[0] += 0.125*rtb_CastToDouble4;
    xnew[1] = (1.0)*RateControl_DW.H_accel_DSTATE[0];
    (void) memcpy(&RateControl_DW.H_accel_DSTATE[0], xnew,
                  sizeof(real_T)*2);
  }

  /* Update for DiscreteStateSpace: '<Root>/H_virtual_control_input' */
  {
    real_T xnew[8];
    xnew[0] = (1.5163063239937618)*
      RateControl_DW.H_virtual_control_input_DSTATE[0]
      + (-0.6440364210831413)*RateControl_DW.H_virtual_control_input_DSTATE[1];
    xnew[0] += (0.5)*rtb_Sum_g;
    xnew[1] = (1.0)*RateControl_DW.H_virtual_control_input_DSTATE[0];
    xnew[2] = (1.5163063239937618)*
      RateControl_DW.H_virtual_control_input_DSTATE[2]
      + (-0.6440364210831413)*RateControl_DW.H_virtual_control_input_DSTATE[3];
    xnew[2] += (0.5)*rtb_Sum;
    xnew[3] = (1.0)*RateControl_DW.H_virtual_control_input_DSTATE[2];
    xnew[4] = (1.5163063239937618)*
      RateControl_DW.H_virtual_control_input_DSTATE[4]
      + (-0.6440364210831413)*RateControl_DW.H_virtual_control_input_DSTATE[5];
    xnew[4] += (0.5)*rtb_Sum_e;
    xnew[5] = (1.0)*RateControl_DW.H_virtual_control_input_DSTATE[4];
    xnew[6] = (1.5163063239937618)*
      RateControl_DW.H_virtual_control_input_DSTATE[6]
      + (-0.6440364210831413)*RateControl_DW.H_virtual_control_input_DSTATE[7];
    xnew[6] += (0.5)*rtb_accel_z_sp;
    xnew[7] = (1.0)*RateControl_DW.H_virtual_control_input_DSTATE[6];
    (void) memcpy(&RateControl_DW.H_virtual_control_input_DSTATE[0], xnew,
                  sizeof(real_T)*8);
  }

  /* Update for DiscreteStateSpace: '<Root>/H_actuators' */
  {
    real_T xnew[8];
    xnew[0] = (1.8863723983657743)*RateControl_DW.H_actuators_DSTATE[0] +
      (-0.89583413529652833)*RateControl_DW.H_actuators_DSTATE[1];
    xnew[0] += (0.125)*rtb_w[0];
    xnew[1] = (1.0)*RateControl_DW.H_actuators_DSTATE[0];
    xnew[2] = (1.8863723983657743)*RateControl_DW.H_actuators_DSTATE[2] +
      (-0.89583413529652833)*RateControl_DW.H_actuators_DSTATE[3];
    xnew[2] += (0.125)*rtb_w[1];
    xnew[3] = (1.0)*RateControl_DW.H_actuators_DSTATE[2];
    xnew[4] = (1.8863723983657743)*RateControl_DW.H_actuators_DSTATE[4] +
      (-0.89583413529652833)*RateControl_DW.H_actuators_DSTATE[5];
    xnew[4] += (0.125)*rtb_w[2];
    xnew[5] = (1.0)*RateControl_DW.H_actuators_DSTATE[4];
    xnew[6] = (1.8863723983657743)*RateControl_DW.H_actuators_DSTATE[6] +
      (-0.89583413529652833)*RateControl_DW.H_actuators_DSTATE[7];
    xnew[6] += (0.125)*rtb_w[3];
    xnew[7] = (1.0)*RateControl_DW.H_actuators_DSTATE[6];
    (void) memcpy(&RateControl_DW.H_actuators_DSTATE[0], xnew,
                  sizeof(real_T)*8);
  }

  /* Update for Memory: '<Root>/Memory3' */
  memcpy(&RateControl_DW.Memory3_PreviousInput[0], &RateControl_Y.G[0], sizeof
         (real32_T) << 5U);

  /* Update for DiscreteStateSpace: '<Root>/H_est_actuators' */
  {
    real_T xnew[8];
    xnew[0] = (1.9778446161486858)*RateControl_DW.H_est_actuators_DSTATE[0]
      + (-0.97824023505120972)*RateControl_DW.H_est_actuators_DSTATE[1];
    xnew[0] += (0.015625)*rtb_w_l[0];
    xnew[1] = (1.0)*RateControl_DW.H_est_actuators_DSTATE[0];
    xnew[2] = (1.9778446161486858)*RateControl_DW.H_est_actuators_DSTATE[2]
      + (-0.97824023505120972)*RateControl_DW.H_est_actuators_DSTATE[3];
    xnew[2] += (0.015625)*rtb_w_l[1];
    xnew[3] = (1.0)*RateControl_DW.H_est_actuators_DSTATE[2];
    xnew[4] = (1.9778446161486858)*RateControl_DW.H_est_actuators_DSTATE[4]
      + (-0.97824023505120972)*RateControl_DW.H_est_actuators_DSTATE[5];
    xnew[4] += (0.015625)*rtb_w_l[2];
    xnew[5] = (1.0)*RateControl_DW.H_est_actuators_DSTATE[4];
    xnew[6] = (1.9778446161486858)*RateControl_DW.H_est_actuators_DSTATE[6]
      + (-0.97824023505120972)*RateControl_DW.H_est_actuators_DSTATE[7];
    xnew[6] += (0.015625)*rtb_w_l[3];
    xnew[7] = (1.0)*RateControl_DW.H_est_actuators_DSTATE[6];
    (void) memcpy(&RateControl_DW.H_est_actuators_DSTATE[0], xnew,
                  sizeof(real_T)*8);
  }

  /* Update for UnitDelay: '<S3>/UD' */
  RateControl_DW.UD_DSTATE_p[0] = rtb_TSamp_b_idx_0;

  /* Update for UnitDelay: '<S5>/UD' */
  RateControl_DW.UD_DSTATE_e[0] = rtb_TSamp_o_idx_0;

  /* Update for UnitDelay: '<S3>/UD' */
  RateControl_DW.UD_DSTATE_p[1] = rtb_TSamp_b_idx_1;

  /* Update for UnitDelay: '<S5>/UD' */
  RateControl_DW.UD_DSTATE_e[1] = rtb_TSamp_o_idx_1;

  /* Update for UnitDelay: '<S3>/UD' */
  RateControl_DW.UD_DSTATE_p[2] = rtb_TSamp_b_idx_2;

  /* Update for UnitDelay: '<S5>/UD' */
  RateControl_DW.UD_DSTATE_e[2] = rtb_TSamp_o_idx_2;

  /* Update for UnitDelay: '<S3>/UD' */
  RateControl_DW.UD_DSTATE_p[3] = rtb_TSamp_l;

  /* Update for UnitDelay: '<S5>/UD' */
  RateControl_DW.UD_DSTATE_e[3] = rtb_TSamp_o;

  /* Update for DiscreteStateSpace: '<Root>/H_est_rates' */
  {
    real_T xnew[6];
    xnew[0] = (1.9778446161486858)*RateControl_DW.H_est_rates_DSTATE[0] +
      (-0.97824023505120972)*RateControl_DW.H_est_rates_DSTATE[1];
    xnew[0] += (0.015625)*rtb_CastToDouble2[0];
    xnew[1] = (1.0)*RateControl_DW.H_est_rates_DSTATE[0];
    xnew[2] = (1.9778446161486858)*RateControl_DW.H_est_rates_DSTATE[2] +
      (-0.97824023505120972)*RateControl_DW.H_est_rates_DSTATE[3];
    xnew[2] += (0.015625)*rtb_CastToDouble2[1];
    xnew[3] = (1.0)*RateControl_DW.H_est_rates_DSTATE[2];
    xnew[4] = (1.9778446161486858)*RateControl_DW.H_est_rates_DSTATE[4] +
      (-0.97824023505120972)*RateControl_DW.H_est_rates_DSTATE[5];
    xnew[4] += (0.015625)*rtb_CastToDouble2[2];
    xnew[5] = (1.0)*RateControl_DW.H_est_rates_DSTATE[4];
    (void) memcpy(&RateControl_DW.H_est_rates_DSTATE[0], xnew,
                  sizeof(real_T)*6);
  }

  /* Update for UnitDelay: '<S4>/UD' incorporates:
   *  SampleTimeMath: '<S4>/TSamp'
   *
   * About '<S4>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  RateControl_DW.UD_DSTATE_d[0] = rtb_TSamp_oo_idx_0;

  /* Update for UnitDelay: '<S2>/UD' */
  RateControl_DW.UD_DSTATE_g[0] = rtb_TSamp_c_idx_0;

  /* Update for UnitDelay: '<S4>/UD' incorporates:
   *  SampleTimeMath: '<S4>/TSamp'
   *
   * About '<S4>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  RateControl_DW.UD_DSTATE_d[1] = rtb_TSamp_oo_idx_1;

  /* Update for UnitDelay: '<S2>/UD' */
  RateControl_DW.UD_DSTATE_g[1] = rtb_TSamp_c_idx_1;

  /* Update for UnitDelay: '<S4>/UD' */
  RateControl_DW.UD_DSTATE_d[2] = rtb_TSamp_oo_0;

  /* Update for UnitDelay: '<S2>/UD' */
  RateControl_DW.UD_DSTATE_g[2] = rtb_TSamp_c_idx_2;

  /* Update for DiscreteStateSpace: '<Root>/H_est_accel' */
  {
    real_T xnew[2];
    xnew[0] = (1.9778446161486858)*RateControl_DW.H_est_accel_DSTATE[0] +
      (-0.97824023505120972)*RateControl_DW.H_est_accel_DSTATE[1];
    xnew[0] += 0.015625*rtb_CastToDouble4;
    xnew[1] = (1.0)*RateControl_DW.H_est_accel_DSTATE[0];
    (void) memcpy(&RateControl_DW.H_est_accel_DSTATE[0], xnew,
                  sizeof(real_T)*2);
  }

  /* Update for UnitDelay: '<S6>/UD' */
  RateControl_DW.UD_DSTATE_j = rtb_TSamp_p2;

  /* Update for Delay: '<Root>/Delay' incorporates:
   *  DiscreteStateSpace: '<Root>/ActuatorDynamics'
   *  Outport: '<Root>/w_cmd'
   */
  RateControl_DW.Delay_DSTATE[0] = RateControl_DW.Delay_DSTATE[4];
  RateControl_DW.Delay_DSTATE[1] = RateControl_DW.Delay_DSTATE[5];
  RateControl_DW.Delay_DSTATE[2] = RateControl_DW.Delay_DSTATE[6];
  RateControl_DW.Delay_DSTATE[3] = RateControl_DW.Delay_DSTATE[7];
  for (j = 0; j < 4; j++) {
    RateControl_DW.Delay_DSTATE[j + 4] = rtb_w_l[j];

    /* Update for DiscreteStateSpace: '<Root>/ActuatorDynamics' */
    rtb_TSamp_tmp_idx_0 = 1.0 / RateControlParams.t_act / 500.0;
    rtb_TSamp_tmp_idx_1 = RateControl_ConstP.pooled1[j + 4];
    rtb_TSamp_tmp_idx_2 = RateControl_ConstP.pooled1[j + 8];
    rtb_TSamp_l = RateControl_ConstP.pooled1[j + 12];
    rtb_TSamp_o = (1.0 - rtb_TSamp_tmp_idx_0) * rtb_TSamp_l *
      RateControl_DW.ActuatorDynamics_DSTATE[3] + ((1.0 - rtb_TSamp_tmp_idx_0) *
      rtb_TSamp_tmp_idx_2 * RateControl_DW.ActuatorDynamics_DSTATE[2] + ((1.0 -
      rtb_TSamp_tmp_idx_0) * rtb_TSamp_tmp_idx_1 *
      RateControl_DW.ActuatorDynamics_DSTATE[1] + (1.0 - rtb_TSamp_tmp_idx_0) *
      RateControl_ConstP.pooled1[j] * RateControl_DW.ActuatorDynamics_DSTATE[0]));
    rtb_TSamp_o += rtb_TSamp_tmp_idx_0 * RateControl_ConstP.pooled1[j] *
      RateControl_Y.w_cmd[0];
    rtb_TSamp_o += rtb_TSamp_tmp_idx_0 * rtb_TSamp_tmp_idx_1 *
      RateControl_Y.w_cmd[1];
    rtb_TSamp_o += rtb_TSamp_tmp_idx_0 * rtb_TSamp_tmp_idx_2 *
      RateControl_Y.w_cmd[2];
    rtb_TSamp_o += rtb_TSamp_tmp_idx_0 * rtb_TSamp_l * RateControl_Y.w_cmd[3];
    xnew[j] = rtb_TSamp_o;
  }

  /* End of Update for Delay: '<Root>/Delay' */

  /* Update for DiscreteStateSpace: '<Root>/ActuatorDynamics' */
  RateControl_DW.ActuatorDynamics_DSTATE[0] = xnew[0];
  RateControl_DW.ActuatorDynamics_DSTATE[1] = xnew[1];
  RateControl_DW.ActuatorDynamics_DSTATE[2] = xnew[2];
  RateControl_DW.ActuatorDynamics_DSTATE[3] = xnew[3];

  /* Update for Delay: '<S48>/UD' */
  RateControl_DW.UD_DSTATE_l = rtb_TSamp_j;

  /* Update for DiscreteIntegrator: '<S69>/Integrator' */
  RateControl_DW.Integrator_DSTATE += 0.002 * rtb_IntegralGain;

  /* Update for Delay: '<S144>/UD' */
  RateControl_DW.UD_DSTATE_b = rtb_TSamp_a1;

  /* Update for DiscreteIntegrator: '<S165>/Integrator' */
  RateControl_DW.Integrator_DSTATE_k += 0.002 * rtb_IntegralGain_i;

  /* Update for Delay: '<S240>/UD' */
  RateControl_DW.UD_DSTATE_bg = rtb_TSamp_g;

  /* Update for DiscreteIntegrator: '<S261>/Integrator' */
  RateControl_DW.Integrator_DSTATE_b += 0.002 * rtb_IntegralGain_p;
}

/* Model initialize function */
void RateControlModelClass::initialize()
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize error status */
  rtmSetErrorStatus(getRTM(), (NULL));

  /* states (dwork) */
  (void) memset((void *)&RateControl_DW, 0,
                sizeof(DW_RateControl_T));

  /* external inputs */
  (void)memset(&RateControl_U, 0, sizeof(ExtU_RateControl_T));

  /* external outputs */
  (void) memset((void *)&RateControl_Y, 0,
                sizeof(ExtY_RateControl_T));

  /* InitializeConditions for DiscreteStateSpace: '<Root>/H_rates' */
  {
    int_T i1;
    real_T *dw_DSTATE = &RateControl_DW.H_rates_DSTATE[0];
    for (i1=0; i1 < 6; i1++) {
      dw_DSTATE[i1] = 0.0;
    }
  }

  /* InitializeConditions for UnitDelay: '<S1>/UD' */
  RateControl_DW.UD_DSTATE[0] = 0.0;
  RateControl_DW.UD_DSTATE[1] = 0.0;
  RateControl_DW.UD_DSTATE[2] = 0.0;

  /* InitializeConditions for DiscreteStateSpace: '<Root>/H_accel' */
  RateControl_DW.H_accel_DSTATE[0] = 0.0;
  RateControl_DW.H_accel_DSTATE[1] = 0.0;

  /* InitializeConditions for DiscreteStateSpace: '<Root>/H_virtual_control_input' */
  {
    int_T i1;
    real_T *dw_DSTATE = &RateControl_DW.H_virtual_control_input_DSTATE[0];
    for (i1=0; i1 < 8; i1++) {
      dw_DSTATE[i1] = 0.0;
    }
  }

  /* InitializeConditions for DiscreteStateSpace: '<Root>/H_actuators' */
  {
    int_T i1;
    real_T *dw_DSTATE = &RateControl_DW.H_actuators_DSTATE[0];
    for (i1=0; i1 < 8; i1++) {
      dw_DSTATE[i1] = 0.0;
    }
  }

  /* InitializeConditions for Memory: '<Root>/Memory3' */
  memcpy(&RateControl_DW.Memory3_PreviousInput[0],
         &RateControl_ConstP.Memory3_InitialCondition[0], sizeof(real32_T) << 5U);

  /* InitializeConditions for DiscreteStateSpace: '<Root>/H_est_actuators' */
  {
    int_T i1;
    real_T *dw_DSTATE = &RateControl_DW.H_est_actuators_DSTATE[0];
    for (i1=0; i1 < 8; i1++) {
      dw_DSTATE[i1] = 0.0;
    }
  }

  /* InitializeConditions for UnitDelay: '<S3>/UD' */
  RateControl_DW.UD_DSTATE_p[0] = 0.0;

  /* InitializeConditions for UnitDelay: '<S5>/UD' */
  RateControl_DW.UD_DSTATE_e[0] = 0.0;

  /* InitializeConditions for UnitDelay: '<S3>/UD' */
  RateControl_DW.UD_DSTATE_p[1] = 0.0;

  /* InitializeConditions for UnitDelay: '<S5>/UD' */
  RateControl_DW.UD_DSTATE_e[1] = 0.0;

  /* InitializeConditions for UnitDelay: '<S3>/UD' */
  RateControl_DW.UD_DSTATE_p[2] = 0.0;

  /* InitializeConditions for UnitDelay: '<S5>/UD' */
  RateControl_DW.UD_DSTATE_e[2] = 0.0;

  /* InitializeConditions for UnitDelay: '<S3>/UD' */
  RateControl_DW.UD_DSTATE_p[3] = 0.0;

  /* InitializeConditions for UnitDelay: '<S5>/UD' */
  RateControl_DW.UD_DSTATE_e[3] = 0.0;

  /* InitializeConditions for DiscreteStateSpace: '<Root>/H_est_rates' */
  {
    int_T i1;
    real_T *dw_DSTATE = &RateControl_DW.H_est_rates_DSTATE[0];
    for (i1=0; i1 < 6; i1++) {
      dw_DSTATE[i1] = 0.0;
    }
  }

  /* InitializeConditions for UnitDelay: '<S4>/UD' */
  RateControl_DW.UD_DSTATE_d[0] = 0.0;

  /* InitializeConditions for UnitDelay: '<S2>/UD' */
  RateControl_DW.UD_DSTATE_g[0] = 0.0;

  /* InitializeConditions for UnitDelay: '<S4>/UD' */
  RateControl_DW.UD_DSTATE_d[1] = 0.0;

  /* InitializeConditions for UnitDelay: '<S2>/UD' */
  RateControl_DW.UD_DSTATE_g[1] = 0.0;

  /* InitializeConditions for UnitDelay: '<S4>/UD' */
  RateControl_DW.UD_DSTATE_d[2] = 0.0;

  /* InitializeConditions for UnitDelay: '<S2>/UD' */
  RateControl_DW.UD_DSTATE_g[2] = 0.0;

  /* InitializeConditions for DiscreteStateSpace: '<Root>/H_est_accel' */
  RateControl_DW.H_est_accel_DSTATE[0] = 0.0;
  RateControl_DW.H_est_accel_DSTATE[1] = 0.0;

  /* InitializeConditions for UnitDelay: '<S6>/UD' */
  RateControl_DW.UD_DSTATE_j = 0.0;

  /* InitializeConditions for Delay: '<Root>/Delay' */
  memset(&RateControl_DW.Delay_DSTATE[0], 0, sizeof(real_T) << 3U);

  /* InitializeConditions for Delay: '<S48>/UD' */
  RateControl_DW.UD_DSTATE_l = 0.0;

  /* InitializeConditions for DiscreteIntegrator: '<S69>/Integrator' */
  RateControl_DW.Integrator_DSTATE = 0.0;

  /* InitializeConditions for Delay: '<S144>/UD' */
  RateControl_DW.UD_DSTATE_b = 0.0;

  /* InitializeConditions for DiscreteIntegrator: '<S165>/Integrator' */
  RateControl_DW.Integrator_DSTATE_k = 0.0;

  /* InitializeConditions for Delay: '<S240>/UD' */
  RateControl_DW.UD_DSTATE_bg = 0.0;

  /* InitializeConditions for DiscreteIntegrator: '<S261>/Integrator' */
  RateControl_DW.Integrator_DSTATE_b = 0.0;

  /* InitializeConditions for DiscreteStateSpace: '<Root>/ActuatorDynamics' */
  /* 'INDI_allocator:2:24' du_last = [0 0 0 0]'; */
  RateControl_DW.ActuatorDynamics_DSTATE[0] = 0.0;

  /* SystemInitialize for MATLAB Function: '<Root>/INDI_allocator' */
  RateControl_DW.du_last[0] = 0.0;

  /* InitializeConditions for DiscreteStateSpace: '<Root>/ActuatorDynamics' */
  RateControl_DW.ActuatorDynamics_DSTATE[1] = 0.0;

  /* SystemInitialize for MATLAB Function: '<Root>/INDI_allocator' */
  RateControl_DW.du_last[1] = 0.0;

  /* InitializeConditions for DiscreteStateSpace: '<Root>/ActuatorDynamics' */
  RateControl_DW.ActuatorDynamics_DSTATE[2] = 0.0;

  /* SystemInitialize for MATLAB Function: '<Root>/INDI_allocator' */
  RateControl_DW.du_last[2] = 0.0;

  /* InitializeConditions for DiscreteStateSpace: '<Root>/ActuatorDynamics' */
  RateControl_DW.ActuatorDynamics_DSTATE[3] = 0.0;

  /* SystemInitialize for MATLAB Function: '<Root>/INDI_allocator' */
  RateControl_DW.du_last[3] = 0.0;
}

/* Model terminate function */
void RateControlModelClass::terminate()
{
  /* (no terminate code required) */
}

/* Constructor */
RateControlModelClass::RateControlModelClass()
{
  /* Currently there is no constructor body generated.*/
}

/* Destructor */
RateControlModelClass::~RateControlModelClass()
{
  /* Currently there is no destructor body generated.*/
}

/* Real-Time Model get method */
RT_MODEL_RateControl_T * RateControlModelClass::getRTM()
{
  return (&RateControl_M);
}
