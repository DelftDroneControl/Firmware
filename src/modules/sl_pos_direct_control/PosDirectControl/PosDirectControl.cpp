/*
 * PosDirectControl.cpp
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "PosDirectControl".
 *
 * Model version              : 1.229
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C++ source code generated on : Thu Dec 20 19:34:24 2018
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "PosDirectControl.h"
#include "PosDirectControl_private.h"

/* Function for MATLAB Function: '<Root>/indi' */
real_T PosDirectControlModelClass::PosDirectControl_xnrm2(int32_T n, const
  real_T x[16], int32_T ix0)
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

/* Function for MATLAB Function: '<Root>/indi' */
real_T PosDirectControlModelClass::PosDirectControl_xnrm2_g(int32_T n, const
  real_T x[4], int32_T ix0)
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

/* Function for MATLAB Function: '<Root>/indi' */
void PosDirectControlModelClass::PosDirectControl_xaxpy_lx(int32_T n, real_T a,
  const real_T x[4], int32_T ix0, real_T y[16], int32_T iy0)
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

/* Function for MATLAB Function: '<Root>/indi' */
void PosDirectControlModelClass::PosDirectControl_xaxpy_l(int32_T n, real_T a,
  const real_T x[16], int32_T ix0, real_T y[4], int32_T iy0)
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

/* Function for MATLAB Function: '<Root>/indi' */
real_T PosDirectControlModelClass::PosDirectControl_xdotc(int32_T n, const
  real_T x[16], int32_T ix0, const real_T y[16], int32_T iy0)
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

/* Function for MATLAB Function: '<Root>/indi' */
void PosDirectControlModelClass::PosDirectControl_xaxpy(int32_T n, real_T a,
  int32_T ix0, real_T y[16], int32_T iy0)
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

/* Function for MATLAB Function: '<Root>/indi' */
void PosDirectControlModelClass::PosDirectControl_xscal(real_T a, real_T x[16],
  int32_T ix0)
{
  int32_T k;
  for (k = ix0; k <= ix0 + 3; k++) {
    x[k - 1] *= a;
  }
}

/* Function for MATLAB Function: '<Root>/indi' */
void PosDirectControlModelClass::PosDirectControl_xswap(real_T x[16], int32_T
  ix0, int32_T iy0)
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

/* Function for MATLAB Function: '<Root>/indi' */
void PosDirectControlModelClass::PosDirectControl_xrotg(real_T *a, real_T *b,
  real_T *c, real_T *s)
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

/* Function for MATLAB Function: '<Root>/indi' */
void PosDirectControlModelClass::PosDirectControl_xrot(real_T x[16], int32_T ix0,
  int32_T iy0, real_T c, real_T s)
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

/* Function for MATLAB Function: '<Root>/indi' */
void PosDirectControlModelClass::PosDirectControl_svd(const real_T A[16], real_T
  U[16], real_T s[4], real_T V[16])
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
  nrm = PosDirectControl_xnrm2(4, b_A, 1);
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
      PosDirectControl_xaxpy(4, -(PosDirectControl_xdotc(4, b_A, 1, b_A, qjj + 1)
        / b_A[0]), 1, b_A, qjj + 1);
    }

    e[qp1q] = b_A[qjj];
  }

  while (qq + 1 < 5) {
    U[qq] = b_A[qq];
    qq++;
  }

  nrm = PosDirectControl_xnrm2_g(3, e, 2);
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
      PosDirectControl_xaxpy_l(3, e[qq], b_A, (qq << 2) + 2, work, 2);
    }

    for (qq = 1; qq + 1 < 5; qq++) {
      PosDirectControl_xaxpy_lx(3, -e[qq] / e[1], work, 2, b_A, (qq << 2) + 2);
    }
  }

  for (qq = 1; qq + 1 < 5; qq++) {
    Vf[qq] = e[qq];
  }

  apply_transform = false;
  nrm = PosDirectControl_xnrm2(3, b_A, 6);
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
      PosDirectControl_xaxpy(3, -(PosDirectControl_xdotc(3, b_A, 6, b_A, qjj + 1)
        / b_A[5]), 6, b_A, qjj + 1);
    }

    e[qp1q] = b_A[qjj];
  }

  for (qq = 1; qq + 1 < 5; qq++) {
    U[qq + 4] = b_A[qq + 4];
  }

  nrm = PosDirectControl_xnrm2_g(2, e, 3);
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
      PosDirectControl_xaxpy_l(2, e[qq], b_A, (qq << 2) + 3, work, 3);
    }

    for (qq = 2; qq + 1 < 5; qq++) {
      PosDirectControl_xaxpy_lx(2, -e[qq] / e[2], work, 3, b_A, (qq << 2) + 3);
    }
  }

  for (qq = 2; qq + 1 < 5; qq++) {
    Vf[qq + 4] = e[qq];
  }

  apply_transform = false;
  nrm = PosDirectControl_xnrm2(2, b_A, 11);
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
      PosDirectControl_xaxpy(2, -(PosDirectControl_xdotc(2, b_A, 11, b_A, qjj +
        1) / b_A[10]), 11, b_A, qjj + 1);
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
        PosDirectControl_xaxpy(4 - qp1q, -(PosDirectControl_xdotc(4 - qp1q, U,
          qq + 1, U, qjj) / U[qq]), qq + 1, U, qjj);
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
        PosDirectControl_xaxpy(3 - qq, -(PosDirectControl_xdotc(3 - qq, Vf, qp1q,
          Vf, qp1jj) / Vf[qp1q - 1]), qp1q, Vf, qp1jj);
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
    PosDirectControl_xscal(nrm, U, 1);
  }

  if (ztest != 0.0) {
    rt = std::abs(ztest);
    nrm = rt / ztest;
    ztest = rt;
    b_s[1] *= nrm;
    PosDirectControl_xscal(nrm, Vf, 5);
  }

  e[0] = ztest;
  ztest = e[1];
  if (b_s[1] != 0.0) {
    rt = std::abs(b_s[1]);
    nrm = b_s[1] / rt;
    b_s[1] = rt;
    ztest = e[1] / nrm;
    PosDirectControl_xscal(nrm, U, 5);
  }

  if (ztest != 0.0) {
    rt = std::abs(ztest);
    nrm = rt / ztest;
    ztest = rt;
    b_s[2] *= nrm;
    PosDirectControl_xscal(nrm, Vf, 9);
  }

  e[1] = ztest;
  ztest = b_A[14];
  if (b_s[2] != 0.0) {
    rt = std::abs(b_s[2]);
    nrm = b_s[2] / rt;
    b_s[2] = rt;
    ztest = b_A[14] / nrm;
    PosDirectControl_xscal(nrm, U, 9);
  }

  if (ztest != 0.0) {
    rt = std::abs(ztest);
    nrm = rt / ztest;
    ztest = rt;
    b_s[3] = b_A[15] * nrm;
    PosDirectControl_xscal(nrm, Vf, 13);
  }

  e[2] = ztest;
  if (b_s[3] != 0.0) {
    rt = std::abs(b_s[3]);
    nrm = b_s[3] / rt;
    b_s[3] = rt;
    PosDirectControl_xscal(nrm, U, 13);
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
        PosDirectControl_xrotg(&b_s[qjj], &rt, &ztest, &sqds);
        if (qjj + 1 > qp1q + 1) {
          emm1 = e[qjj - 1];
          rt = emm1 * -sqds;
          e[qjj - 1] = emm1 * ztest;
        }

        PosDirectControl_xrot(Vf, 1 + (qjj << 2), 1 + ((m + 1) << 2), ztest,
                              sqds);
      }
      break;

     case 2:
      rt = e[qp1q - 1];
      e[qp1q - 1] = 0.0;
      for (qjj = qp1q; qjj < m + 2; qjj++) {
        PosDirectControl_xrotg(&b_s[qjj], &rt, &ztest, &sqds);
        rt = -sqds * e[qjj];
        e[qjj] *= ztest;
        PosDirectControl_xrot(U, 1 + (qjj << 2), 1 + ((qp1q - 1) << 2), ztest,
                              sqds);
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
        PosDirectControl_xrotg(&rt, &ztest, &sqds, &smm1);
        if (qjj > qp1q + 1) {
          e[qjj - 2] = rt;
        }

        emm1 = e[qjj - 1];
        ztest = b_s[qjj - 1];
        rt = ztest * sqds + emm1 * smm1;
        e[qjj - 1] = emm1 * sqds - ztest * smm1;
        ztest = smm1 * b_s[qjj];
        b_s[qjj] *= sqds;
        PosDirectControl_xrot(Vf, 1 + ((qjj - 1) << 2), 1 + (qjj << 2), sqds,
                              smm1);
        PosDirectControl_xrotg(&rt, &ztest, &sqds, &smm1);
        b_s[qjj - 1] = rt;
        emm1 = e[qjj - 1];
        rt = emm1 * sqds + smm1 * b_s[qjj];
        b_s[qjj] = emm1 * -smm1 + sqds * b_s[qjj];
        ztest = smm1 * e[qjj];
        e[qjj] *= sqds;
        PosDirectControl_xrot(U, 1 + ((qjj - 1) << 2), 1 + (qjj << 2), sqds,
                              smm1);
      }

      e[m] = rt;
      qq++;
      break;

     default:
      if (b_s[qp1q] < 0.0) {
        b_s[qp1q] = -b_s[qp1q];
        PosDirectControl_xscal(-1.0, Vf, 1 + (qp1q << 2));
      }

      qq = qp1q + 1;
      while ((qp1q + 1 < 4) && (b_s[qp1q] < b_s[qq])) {
        rt = b_s[qp1q];
        b_s[qp1q] = b_s[qq];
        b_s[qq] = rt;
        PosDirectControl_xswap(Vf, 1 + (qp1q << 2), 1 + ((qp1q + 1) << 2));
        PosDirectControl_xswap(U, 1 + (qp1q << 2), 1 + ((qp1q + 1) << 2));
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

/* Model step function */
void PosDirectControlModelClass::step()
{
  /* local block i/o variables */
  real_T rtb_VectorConcatenate[6];
  real_T rtb_DiscreteStateSpace1[6];
  real_T rtb_n_des_filtered[3];
  real_T rtb_CastToDouble[3];
  real_T rtb_DiscreteStateSpace3[4];
  real_T rtb_DiscreteStateSpace4[3];
  real_T rtb_Saturation4[4];
  real_T rtb_w[4];
  real_T rtb_Normalization[3];
  real_T rtb_h[3];
  real_T rtb_U_a[4];
  real_T rtb_Saturation_k;
  real_T R_IB[9];
  real_T G2[16];
  real_T G[16];
  real_T hdd_c[3];
  int32_T r1;
  int32_T r2;
  real_T maxval;
  int32_T rtemp;
  real_T X[16];
  real_T V[16];
  int32_T r;
  real_T U[16];
  boolean_T b_p;
  int32_T b_ic;
  real_T rtb_CastToDouble2[4];
  real_T rtb_TSamp[6];
  real_T rtb_Saturation[3];
  real_T rtb_TSamp_o2[3];
  real_T rtb_TSamp_fy;
  real_T rtb_Saturation2;
  real_T rtb_TSamp_g;
  real_T rtb_Diff[6];
  int32_T i;
  real_T tmp[9];
  real_T tmp_0[9];
  real_T tmp_1[3];
  real_T tmp_2[3];
  real_T rtb_TSamp_a[4];
  real_T tmp_3[4];
  real_T rtb_TSamp_f;
  real_T rtb_att_out_idx_2;
  real_T rtb_att_out_idx_0;
  real_T rtb_att_out_idx_1;
  real_T rtb_CastToDouble4_idx_1;
  real_T rtb_TSamp_n_idx_0;
  real_T rtb_CastToDouble1_idx_1;
  real_T rtb_TSamp_n_idx_1;
  real_T R_IB_tmp;
  real_T R_IB_tmp_0;
  real_T R_IB_tmp_1;
  real_T R_IB_tmp_2;
  real_T R_IB_tmp_3;
  real_T R_IB_tmp_tmp;

  /* MATLAB Function: '<Root>/unwrap2pi' incorporates:
   *  DataTypeConversion: '<Root>/Cast To Double2'
   *  Inport: '<Root>/q'
   */
  /* :  psi0 = att(3); */
  /* :  if isempty(psi_last) */
  if (!PosDirectControl_DW.psi_last_not_empty) {
    /* :  psi_last = psi0; */
    PosDirectControl_DW.psi_last = PosDirectControl_U.q[2];
    PosDirectControl_DW.psi_last_not_empty = true;
  }

  /* :  if isempty(N) */
  /* :  if (psi0-psi_last)>1.9*pi */
  R_IB_tmp_3 = PosDirectControl_U.q[2] - PosDirectControl_DW.psi_last;
  if (R_IB_tmp_3 > 5.9690260418206069) {
    /* :  N = N-1; */
    PosDirectControl_DW.N--;
  } else {
    if (R_IB_tmp_3 < -5.9690260418206069) {
      /* :  elseif (psi0-psi_last)< -1.9*pi */
      /* :  N = N+1; */
      PosDirectControl_DW.N++;
    }
  }

  /* :  psi_last = psi0; */
  PosDirectControl_DW.psi_last = PosDirectControl_U.q[2];

  /* :  att_out = att; */
  /* :  att_out(3) = psi0 + 2*N*pi; */
  rtb_att_out_idx_2 = 2.0 * PosDirectControl_DW.N * 3.1415926535897931 +
    PosDirectControl_U.q[2];

  /* End of MATLAB Function: '<Root>/unwrap2pi' */

  /* SignalConversion: '<Root>/ConcatBufferAtVector ConcatenateIn1' incorporates:
   *  DataTypeConversion: '<Root>/Cast To Double2'
   *  Inport: '<Root>/q'
   */
  rtb_VectorConcatenate[0] = PosDirectControl_U.q[0];

  /* DataTypeConversion: '<Root>/Cast To Double3' incorporates:
   *  Inport: '<Root>/rates'
   */
  rtb_VectorConcatenate[3] = PosDirectControl_U.rates[0];

  /* SignalConversion: '<Root>/ConcatBufferAtVector ConcatenateIn1' incorporates:
   *  DataTypeConversion: '<Root>/Cast To Double2'
   *  Inport: '<Root>/q'
   */
  rtb_VectorConcatenate[1] = PosDirectControl_U.q[1];

  /* DataTypeConversion: '<Root>/Cast To Double3' incorporates:
   *  Inport: '<Root>/rates'
   */
  rtb_VectorConcatenate[4] = PosDirectControl_U.rates[1];

  /* SignalConversion: '<Root>/ConcatBufferAtVector ConcatenateIn1' */
  rtb_VectorConcatenate[2] = rtb_att_out_idx_2;

  /* DataTypeConversion: '<Root>/Cast To Double3' incorporates:
   *  Inport: '<Root>/rates'
   */
  rtb_VectorConcatenate[5] = PosDirectControl_U.rates[2];

  /* DiscreteStateSpace: '<Root>/Discrete State-Space1' */
  {
    rtb_DiscreteStateSpace1[0] = (1.0)*
      PosDirectControl_DW.DiscreteStateSpace1_DSTATE[0];
    rtb_DiscreteStateSpace1[1] = (1.0)*
      PosDirectControl_DW.DiscreteStateSpace1_DSTATE[1];
    rtb_DiscreteStateSpace1[2] = (1.0)*
      PosDirectControl_DW.DiscreteStateSpace1_DSTATE[2];
    rtb_DiscreteStateSpace1[3] = (1.0)*
      PosDirectControl_DW.DiscreteStateSpace1_DSTATE[3];
    rtb_DiscreteStateSpace1[4] = (1.0)*
      PosDirectControl_DW.DiscreteStateSpace1_DSTATE[4];
    rtb_DiscreteStateSpace1[5] = (1.0)*
      PosDirectControl_DW.DiscreteStateSpace1_DSTATE[5];
  }

  for (i = 0; i < 6; i++) {
    /* SampleTimeMath: '<S5>/TSamp'
     *
     * About '<S5>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    rtb_TSamp_f = rtb_DiscreteStateSpace1[i] * 500.0;

    /* Sum: '<S5>/Diff' incorporates:
     *  UnitDelay: '<S5>/UD'
     */
    rtb_Diff[i] = rtb_TSamp_f - PosDirectControl_DW.UD_DSTATE[i];

    /* SampleTimeMath: '<S5>/TSamp'
     *
     * About '<S5>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    rtb_TSamp[i] = rtb_TSamp_f;
  }

  /* DiscreteStateSpace: '<Root>/Discrete State-Space' */
  {
    rtb_n_des_filtered[0] = (1.0)*PosDirectControl_DW.DiscreteStateSpace_DSTATE
      [0];
    rtb_n_des_filtered[1] = (1.0)*PosDirectControl_DW.DiscreteStateSpace_DSTATE
      [1];
    rtb_n_des_filtered[2] = (1.0)*PosDirectControl_DW.DiscreteStateSpace_DSTATE
      [2];
  }

  /* SampleTimeMath: '<S4>/TSamp'
   *
   * About '<S4>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp_f = rtb_n_des_filtered[0] * 500.0;

  /* Sum: '<S4>/Diff' incorporates:
   *  UnitDelay: '<S4>/UD'
   */
  rtb_att_out_idx_1 = rtb_TSamp_f - PosDirectControl_DW.UD_DSTATE_b[0];

  /* Saturate: '<Root>/Saturation' */
  if (rtb_att_out_idx_1 > 0.5) {
    rtb_CastToDouble4_idx_1 = 0.5;
    rtb_Saturation[0] = 0.5;
  } else if (rtb_att_out_idx_1 < -0.5) {
    rtb_CastToDouble4_idx_1 = -0.5;
    rtb_Saturation[0] = -0.5;
  } else {
    rtb_CastToDouble4_idx_1 = rtb_att_out_idx_1;
    rtb_Saturation[0] = rtb_att_out_idx_1;
  }

  /* SampleTimeMath: '<S3>/TSamp'
   *
   * About '<S3>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp_o2[0] = rtb_att_out_idx_1 * 500.0;

  /* DataTypeConversion: '<Root>/Cast To Double' incorporates:
   *  Inport: '<Root>/vel'
   */
  rtb_CastToDouble[0] = PosDirectControl_U.vel[0];

  /* SampleTimeMath: '<S4>/TSamp'
   *
   * About '<S4>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp_n_idx_0 = rtb_TSamp_f;
  rtb_TSamp_f = rtb_n_des_filtered[1] * 500.0;

  /* Sum: '<S4>/Diff' incorporates:
   *  UnitDelay: '<S4>/UD'
   */
  rtb_att_out_idx_1 = rtb_TSamp_f - PosDirectControl_DW.UD_DSTATE_b[1];

  /* Saturate: '<Root>/Saturation' */
  if (rtb_att_out_idx_1 > 0.5) {
    rtb_CastToDouble1_idx_1 = 0.5;
    rtb_Saturation[1] = 0.5;
  } else if (rtb_att_out_idx_1 < -0.5) {
    rtb_CastToDouble1_idx_1 = -0.5;
    rtb_Saturation[1] = -0.5;
  } else {
    rtb_CastToDouble1_idx_1 = rtb_att_out_idx_1;
    rtb_Saturation[1] = rtb_att_out_idx_1;
  }

  /* SampleTimeMath: '<S3>/TSamp'
   *
   * About '<S3>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp_o2[1] = rtb_att_out_idx_1 * 500.0;

  /* DataTypeConversion: '<Root>/Cast To Double' incorporates:
   *  Inport: '<Root>/vel'
   */
  rtb_CastToDouble[1] = PosDirectControl_U.vel[1];

  /* SampleTimeMath: '<S4>/TSamp'
   *
   * About '<S4>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp_n_idx_1 = rtb_TSamp_f;
  rtb_TSamp_f = rtb_n_des_filtered[2] * 500.0;

  /* Sum: '<S4>/Diff' incorporates:
   *  UnitDelay: '<S4>/UD'
   */
  rtb_att_out_idx_1 = rtb_TSamp_f - PosDirectControl_DW.UD_DSTATE_b[2];

  /* Saturate: '<Root>/Saturation' */
  if (rtb_att_out_idx_1 > 0.5) {
    rtb_Saturation[2] = 0.5;
  } else if (rtb_att_out_idx_1 < -0.5) {
    rtb_Saturation[2] = -0.5;
  } else {
    rtb_Saturation[2] = rtb_att_out_idx_1;
  }

  /* SampleTimeMath: '<S3>/TSamp'
   *
   * About '<S3>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp_o2[2] = rtb_att_out_idx_1 * 500.0;

  /* DataTypeConversion: '<Root>/Cast To Double' incorporates:
   *  Inport: '<Root>/vel'
   */
  rtb_CastToDouble[2] = PosDirectControl_U.vel[2];

  /* SampleTimeMath: '<S2>/TSamp' incorporates:
   *  DataTypeConversion: '<Root>/Cast To Double4'
   *  Inport: '<Root>/pos_sp'
   *
   * About '<S2>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp_fy = PosDirectControl_U.pos_sp[2] * 500.0;

  /* Sum: '<S2>/Diff' incorporates:
   *  UnitDelay: '<S2>/UD'
   */
  rtb_Saturation_k = rtb_TSamp_fy - PosDirectControl_DW.UD_DSTATE_g;

  /* Saturate: '<Root>/Saturation2' */
  if (rtb_Saturation_k > 10.0) {
    rtb_Saturation2 = 10.0;
  } else if (rtb_Saturation_k < -10.0) {
    rtb_Saturation2 = -10.0;
  } else {
    rtb_Saturation2 = rtb_Saturation_k;
  }

  /* End of Saturate: '<Root>/Saturation2' */

  /* DiscreteStateSpace: '<Root>/Discrete State-Space2' */
  {
    rtb_Saturation_k = 1.0*PosDirectControl_DW.DiscreteStateSpace2_DSTATE;
  }

  /* SampleTimeMath: '<S1>/TSamp'
   *
   * About '<S1>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp_g = rtb_Saturation_k * 500.0;

  /* DiscreteStateSpace: '<Root>/Discrete State-Space3' */
  {
    rtb_DiscreteStateSpace3[0] = (1.0)*
      PosDirectControl_DW.DiscreteStateSpace3_DSTATE[0];
    rtb_DiscreteStateSpace3[1] = (1.0)*
      PosDirectControl_DW.DiscreteStateSpace3_DSTATE[1];
    rtb_DiscreteStateSpace3[2] = (1.0)*
      PosDirectControl_DW.DiscreteStateSpace3_DSTATE[2];
    rtb_DiscreteStateSpace3[3] = (1.0)*
      PosDirectControl_DW.DiscreteStateSpace3_DSTATE[3];
  }

  /* DiscreteStateSpace: '<Root>/Discrete State-Space4' */
  {
    rtb_DiscreteStateSpace4[0] = (1.0)*
      PosDirectControl_DW.DiscreteStateSpace4_DSTATE[0];
    rtb_DiscreteStateSpace4[1] = (1.0)*
      PosDirectControl_DW.DiscreteStateSpace4_DSTATE[1];
    rtb_DiscreteStateSpace4[2] = (1.0)*
      PosDirectControl_DW.DiscreteStateSpace4_DSTATE[2];
  }

  /* DataTypeConversion: '<Root>/Cast To Double5' incorporates:
   *  Inport: '<Root>/yaw_sp'
   */
  rtb_Saturation_k = PosDirectControl_U.yaw_sp;

  /* Sum: '<Root>/Sum' */
  rtb_Saturation_k -= rtb_att_out_idx_2;

  /* MATLAB Function: '<Root>/indi' incorporates:
   *  DataTypeConversion: '<Root>/Cast To Double1'
   *  DataTypeConversion: '<Root>/Cast To Double4'
   *  Gain: '<Root>/Gain2'
   *  Inport: '<Root>/pos'
   *  Inport: '<Root>/pos_sp'
   *  Memory: '<Root>/Memory'
   *  Saturate: '<Root>/Saturation'
   *  Sum: '<S1>/Diff'
   *  UnitDelay: '<S1>/UD'
   */
  /* :  [U,y, eta1, nu1, ddy0, h, dU0] = control_DRF_indi(X,X0,X0_dot,n_des,nd,ndd,Z_ref,Vz_ref,Z,Vz,ddz0, U0,h0,r_ref,dU0,PosDirectControlParams); */
  /* 'control_DRF_indi:3' k = params.k; */
  /* 'control_DRF_indi:4' l = params.l; */
  /* 'control_DRF_indi:5' b = params.b; */
  /* 'control_DRF_indi:6' m = params.m; */
  /* 'control_DRF_indi:7' Ix = params.Ix; */
  /* 'control_DRF_indi:8' Iy = params.Iy; */
  /* 'control_DRF_indi:9' Iz = params.Iz; */
  /* 'control_DRF_indi:10' Ip = params.Ip; */
  /* 'control_DRF_indi:11' t = params.t; */
  /* 'control_DRF_indi:13' phi = X(1); */
  /* 'control_DRF_indi:14' theta = X(2); */
  /* 'control_DRF_indi:15' psi = X(3); */
  /* 'control_DRF_indi:16' p = X(4); */
  /* 'control_DRF_indi:17' q = X(5); */
  /* 'control_DRF_indi:18' r = X(6); */
  /* 'control_DRF_indi:20' r_dot0 = X0_dot(6); */
  /* 'control_DRF_indi:21' q_dot0 = X0_dot(5); */
  /* 'control_DRF_indi:22' p_dot0 = X0_dot(4); */
  /* 'control_DRF_indi:24' phi0 = X0(1); */
  /* 'control_DRF_indi:24' theta0 = X0(2); */
  /* 'control_DRF_indi:24' psi0 = X0(3); */
  /* 'control_DRF_indi:25' p0 = X0(4); */
  /* 'control_DRF_indi:25' q0 = X0(5); */
  /* 'control_DRF_indi:25' r0 = X0(6); */
  /* 'control_DRF_indi:27' R_IB = [cos(psi)*cos(theta) , cos(psi)*sin(theta)*sin(phi)-sin(psi)*cos(phi), cos(psi)*sin(theta)*cos(phi)+sin(psi)*sin(phi); */
  /* 'control_DRF_indi:28'         sin(psi)*cos(theta) , sin(psi)*sin(theta)*sin(phi)+cos(psi)*cos(phi), sin(psi)*sin(theta)*cos(phi)-cos(psi)*sin(phi); */
  /* 'control_DRF_indi:29'         -sin(theta)          , cos(theta)*sin(phi)                          , cos(theta)*cos(phi)                          ]; */
  maxval = std::cos(rtb_VectorConcatenate[2]);
  R_IB_tmp_3 = std::cos(rtb_VectorConcatenate[1]);
  R_IB[0] = maxval * R_IB_tmp_3;
  R_IB_tmp_tmp = std::sin(rtb_VectorConcatenate[1]);
  R_IB_tmp = maxval * R_IB_tmp_tmp;
  R_IB_tmp_0 = std::cos(rtb_VectorConcatenate[0]);
  R_IB_tmp_1 = std::sin(rtb_VectorConcatenate[2]);
  R_IB_tmp_2 = std::sin(rtb_VectorConcatenate[0]);
  R_IB[3] = R_IB_tmp * R_IB_tmp_2 - R_IB_tmp_1 * R_IB_tmp_0;
  R_IB[6] = R_IB_tmp * R_IB_tmp_0 + R_IB_tmp_1 * R_IB_tmp_2;
  R_IB[1] = R_IB_tmp_1 * R_IB_tmp_3;
  R_IB_tmp = R_IB_tmp_1 * R_IB_tmp_tmp;
  R_IB[4] = R_IB_tmp * R_IB_tmp_2 + maxval * R_IB_tmp_0;
  R_IB[7] = R_IB_tmp * R_IB_tmp_0 - maxval * R_IB_tmp_2;
  R_IB[2] = -R_IB_tmp_tmp;
  R_IB[5] = R_IB_tmp_3 * R_IB_tmp_2;
  R_IB[8] = R_IB_tmp_3 * R_IB_tmp_0;

  /* 'control_DRF_indi:31' h = R_IB\n_des; */
  r1 = 0;
  r2 = 1;
  i = 2;
  maxval = std::abs(R_IB[0]);
  rtb_att_out_idx_2 = std::abs(R_IB[1]);
  if (rtb_att_out_idx_2 > maxval) {
    maxval = rtb_att_out_idx_2;
    r1 = 1;
    r2 = 0;
  }

  if (std::abs(-std::sin(rtb_VectorConcatenate[1])) > maxval) {
    r1 = 2;
    r2 = 1;
    i = 0;
  }

  R_IB[r2] /= R_IB[r1];
  R_IB[i] /= R_IB[r1];
  R_IB[3 + r2] -= R_IB[3 + r1] * R_IB[r2];
  R_IB[3 + i] -= R_IB[3 + r1] * R_IB[i];
  R_IB[6 + r2] -= R_IB[6 + r1] * R_IB[r2];
  R_IB[6 + i] -= R_IB[6 + r1] * R_IB[i];
  if (std::abs(R_IB[3 + i]) > std::abs(R_IB[3 + r2])) {
    rtemp = r2;
    r2 = i;
    i = rtemp;
  }

  R_IB[3 + i] /= R_IB[3 + r2];
  R_IB[6 + i] -= R_IB[3 + i] * R_IB[6 + r2];
  rtb_att_out_idx_1 = rtb_n_des_filtered[r2] - rtb_n_des_filtered[r1] * R_IB[r2];
  rtb_att_out_idx_2 = ((rtb_n_des_filtered[i] - rtb_n_des_filtered[r1] * R_IB[i])
                       - R_IB[3 + i] * rtb_att_out_idx_1) / R_IB[6 + i];
  rtb_att_out_idx_1 -= R_IB[6 + r2] * rtb_att_out_idx_2;
  rtb_att_out_idx_1 /= R_IB[3 + r2];
  rtb_att_out_idx_0 = ((rtb_n_des_filtered[r1] - R_IB[6 + r1] *
                        rtb_att_out_idx_2) - R_IB[3 + r1] * rtb_att_out_idx_1) /
    R_IB[r1];

  /* 'control_DRF_indi:32' h1 = h(1); */
  /* 'control_DRF_indi:32' h2 = h(2); */
  /* 'control_DRF_indi:32' h3 = h(3); */
  /* 'control_DRF_indi:33' nx = 0; */
  /* 'control_DRF_indi:34' ny = 0; */
  /* 'control_DRF_indi:44' alpha = 0; */
  /* 'control_DRF_indi:45' beta = 1; */
  /* 'control_DRF_indi:47' y1 = alpha*(h1-nx)+beta*(h2-ny); */
  /* 'control_DRF_indi:48' dy1 = alpha*(-h3*q+h2*r+nd(1)) + beta*(h3*p-h1*r+nd(2)); */
  /* 'control_DRF_indi:50' y2 = beta*(h1-nx)-alpha*(h2-ny); */
  /* 'control_DRF_indi:51' dy2 = beta*(-h3*q+h2*r+nd(1)) - alpha*(h3*p-h1*r+nd(2)); */
  /* 'control_DRF_indi:53' kp = 30; */
  /* 'control_DRF_indi:53' kd = 20; */
  /* 'control_DRF_indi:54' kpz = 10; */
  /* 'control_DRF_indi:54' kdz = 10; */
  /* 'control_DRF_indi:55' kpr = 5.0; */
  /* 'control_DRF_indi:57' nu1 =  - kdz*(Vz-Vz_ref) - kpz*(Z-Z_ref) ; */
  /* 'control_DRF_indi:58' nu2 = -kp*y1 - kd*dy1; */
  /* 'control_DRF_indi:59' nu3 = -kp*y2 - kp*dy2; */
  /* 'control_DRF_indi:60' nu4 = -kpr*(r-r_ref); */
  /* 'control_DRF_indi:62' nu = [nu1; nu2; nu3; nu4]; */
  /* 'control_DRF_indi:71' Ucons = sqrt(abs(U0)); */
  /* 'control_DRF_indi:72' Ucons(Ucons<500) = 500; */
  /* 'control_DRF_indi:73' G1 = [-cos(theta)*cos(phi)*k/m, -cos(theta)*cos(phi)*k/m, -cos(theta)*cos(phi)*k/m, -cos(theta)*cos(phi)*k/m; */
  /* 'control_DRF_indi:74'      h3*(b*k/Ix + Ip*q0/Ix/Ucons(1)), h3*(-b*k/Ix-Ip*q0/Ix/Ucons(2)), h3*(-b*k/Ix+Ip*q0/Ix/Ucons(3)), h3*(b*k/Ix-Ip*q0/Ix/Ucons(4)); */
  /* 'control_DRF_indi:75'      h3*(-l*k/Iy+ Ip*p0/Iy/Ucons(1)), h3*(-l*k/Iy-Ip*p0/Iy/Ucons(2)), h3*(l*k/Iy+Ip*p0/Iy/Ucons(3)), h3*(l*k/Iy-Ip*p0/Iy/Ucons(4)); */
  /* 'control_DRF_indi:76'      t/Iz, -t/Iz, t/Iz, -t/Iz]; */
  /* 'control_DRF_indi:78' G2 = params.freq*[zeros(3,4); */
  /* 'control_DRF_indi:79'                Ip/2/Ucons(1)/Iz, -Ip/2/Ucons(2)/Iz, Ip/2/Ucons(3)/Iz, -Ip/2/Ucons(4)/Iz]; */
  for (r2 = 0; r2 < 4; r2++) {
    R_IB_tmp_tmp = std::sqrt(std::abs(rtb_DiscreteStateSpace3[r2]));
    if (R_IB_tmp_tmp < 500.0) {
      R_IB_tmp_tmp = 500.0;
    }

    maxval = PosDirectControl_P.PosDirectControlParams.freq * 0.0;
    i = r2 << 2;
    G2[i] = maxval;
    G2[1 + i] = maxval;
    G2[2 + i] = maxval;
    rtb_CastToDouble2[r2] = R_IB_tmp_tmp;
  }

  maxval = PosDirectControl_P.PosDirectControlParams.Ip / 2.0;
  G2[3] = maxval / rtb_CastToDouble2[0] /
    PosDirectControl_P.PosDirectControlParams.Iz *
    PosDirectControl_P.PosDirectControlParams.freq;
  R_IB_tmp_tmp = -PosDirectControl_P.PosDirectControlParams.Ip / 2.0;
  G2[7] = R_IB_tmp_tmp / rtb_CastToDouble2[1] /
    PosDirectControl_P.PosDirectControlParams.Iz *
    PosDirectControl_P.PosDirectControlParams.freq;
  G2[11] = maxval / rtb_CastToDouble2[2] /
    PosDirectControl_P.PosDirectControlParams.Iz *
    PosDirectControl_P.PosDirectControlParams.freq;
  G2[15] = R_IB_tmp_tmp / rtb_CastToDouble2[3] /
    PosDirectControl_P.PosDirectControlParams.Iz *
    PosDirectControl_P.PosDirectControlParams.freq;

  /* 'control_DRF_indi:81' G = (G1+G2); */
  R_IB_tmp_3 = -R_IB_tmp_3 * R_IB_tmp_0 *
    PosDirectControl_P.PosDirectControlParams.k /
    PosDirectControl_P.PosDirectControlParams.m;
  X[0] = R_IB_tmp_3;
  X[4] = R_IB_tmp_3;
  X[8] = R_IB_tmp_3;
  X[12] = R_IB_tmp_3;
  R_IB_tmp_3 = PosDirectControl_P.PosDirectControlParams.Ip *
    rtb_DiscreteStateSpace1[4] / PosDirectControl_P.PosDirectControlParams.Ix;
  R_IB_tmp_0 = PosDirectControl_P.PosDirectControlParams.b *
    PosDirectControl_P.PosDirectControlParams.k /
    PosDirectControl_P.PosDirectControlParams.Ix;
  X[1] = (R_IB_tmp_3 / rtb_CastToDouble2[0] + R_IB_tmp_0) * rtb_att_out_idx_2;
  maxval = -PosDirectControl_P.PosDirectControlParams.b *
    PosDirectControl_P.PosDirectControlParams.k /
    PosDirectControl_P.PosDirectControlParams.Ix;
  X[5] = (maxval - R_IB_tmp_3 / rtb_CastToDouble2[1]) * rtb_att_out_idx_2;
  X[9] = (R_IB_tmp_3 / rtb_CastToDouble2[2] + maxval) * rtb_att_out_idx_2;
  X[13] = (R_IB_tmp_0 - R_IB_tmp_3 / rtb_CastToDouble2[3]) * rtb_att_out_idx_2;
  R_IB_tmp_3 = PosDirectControl_P.PosDirectControlParams.Ip *
    rtb_DiscreteStateSpace1[3] / PosDirectControl_P.PosDirectControlParams.Iy;
  R_IB_tmp_0 = -PosDirectControl_P.PosDirectControlParams.l *
    PosDirectControl_P.PosDirectControlParams.k /
    PosDirectControl_P.PosDirectControlParams.Iy;
  X[2] = (R_IB_tmp_3 / rtb_CastToDouble2[0] + R_IB_tmp_0) * rtb_att_out_idx_2;
  X[6] = (R_IB_tmp_0 - R_IB_tmp_3 / rtb_CastToDouble2[1]) * rtb_att_out_idx_2;
  R_IB_tmp_0 = PosDirectControl_P.PosDirectControlParams.l *
    PosDirectControl_P.PosDirectControlParams.k /
    PosDirectControl_P.PosDirectControlParams.Iy;
  X[10] = (R_IB_tmp_3 / rtb_CastToDouble2[2] + R_IB_tmp_0) * rtb_att_out_idx_2;
  X[14] = (R_IB_tmp_0 - R_IB_tmp_3 / rtb_CastToDouble2[3]) * rtb_att_out_idx_2;
  R_IB_tmp_3 = PosDirectControl_P.PosDirectControlParams.t /
    PosDirectControl_P.PosDirectControlParams.Iz;
  X[3] = R_IB_tmp_3;
  R_IB_tmp_0 = -PosDirectControl_P.PosDirectControlParams.t /
    PosDirectControl_P.PosDirectControlParams.Iz;
  X[7] = R_IB_tmp_0;
  X[11] = R_IB_tmp_3;
  X[15] = R_IB_tmp_0;
  for (i = 0; i < 16; i++) {
    G[i] = X[i] + G2[i];
  }

  /* 'control_DRF_indi:82' eta1 = y2; */
  /* 'control_DRF_indi:86' Omega0 = [0 -r0  q0; */
  /* 'control_DRF_indi:87'          r0  0 -p0; */
  /* 'control_DRF_indi:88'         -q0  p0  0]; */
  /* 'control_DRF_indi:90' R_IB0 = [cos(psi0)*cos(theta0) , cos(psi0)*sin(theta0)*sin(phi0)-sin(psi0)*cos(phi0), cos(psi0)*sin(theta0)*cos(phi0)+sin(psi0)*sin(phi0); */
  /* 'control_DRF_indi:91'     sin(psi0)*cos(theta0) , sin(psi0)*sin(theta0)*sin(phi0)+cos(psi0)*cos(phi0), sin(psi0)*sin(theta0)*cos(phi0)-cos(psi0)*sin(phi0); */
  /* 'control_DRF_indi:92'     -sin(theta0)          , cos(theta0)*sin(phi0)                          , cos(theta0)*cos(phi0)                          ]; */
  /* 'control_DRF_indi:95' ddy01 = -beta*h0(2)*p0^2 - alpha*h0(1)*q0^2 - (alpha*h0(1)+beta*h0(2))*r0^2 + (beta*h0(1)+alpha*h0(2))*p0*q0 + alpha*h0(3)*p0*r0 + beta*h0(3)*q0*r0 + ... */
  /* 'control_DRF_indi:96'        beta*h0(3)*p_dot0 - alpha*h0(3)*q_dot0 + (alpha*h0(2)-beta*h0(1))*r_dot0; */
  /* 'control_DRF_indi:97' ddy02 = alpha*h0(2)*p0^2 - beta*h0(1)*q0^2 - (beta*h0(1)-alpha*h0(2))*r0^2 + (-alpha*h0(1)+beta*h0(2))*p0*q0 + beta*h0(3)*p0*r0  -alpha*h0(3)*q0*r0 + ... */
  /* 'control_DRF_indi:98'        -alpha*h0(3)*p_dot0 - beta*h0(3)*q_dot0 + (beta*h0(2)+alpha*h0(1))*r_dot0; */
  /* 'control_DRF_indi:100' hdd_c = -2*Omega0*R_IB0'*nd + R_IB0'*ndd; */
  maxval = std::cos(rtb_DiscreteStateSpace1[2]);
  R_IB_tmp_3 = std::cos(rtb_DiscreteStateSpace1[1]);
  R_IB[0] = maxval * R_IB_tmp_3;
  R_IB_tmp_tmp = std::sin(rtb_DiscreteStateSpace1[1]);
  R_IB_tmp = maxval * R_IB_tmp_tmp;
  R_IB_tmp_0 = std::cos(rtb_DiscreteStateSpace1[0]);
  R_IB_tmp_1 = std::sin(rtb_DiscreteStateSpace1[2]);
  R_IB_tmp_2 = std::sin(rtb_DiscreteStateSpace1[0]);
  R_IB[1] = R_IB_tmp * R_IB_tmp_2 - R_IB_tmp_1 * R_IB_tmp_0;
  R_IB[2] = R_IB_tmp * R_IB_tmp_0 + R_IB_tmp_1 * R_IB_tmp_2;
  R_IB[3] = R_IB_tmp_1 * R_IB_tmp_3;
  R_IB_tmp = R_IB_tmp_1 * R_IB_tmp_tmp;
  R_IB[4] = R_IB_tmp * R_IB_tmp_2 + maxval * R_IB_tmp_0;
  R_IB[5] = R_IB_tmp * R_IB_tmp_0 - maxval * R_IB_tmp_2;
  R_IB[6] = -R_IB_tmp_tmp;
  R_IB[7] = R_IB_tmp_3 * R_IB_tmp_2;
  R_IB[8] = R_IB_tmp_3 * R_IB_tmp_0;
  tmp[0] = -0.0;
  tmp[3] = -2.0 * -rtb_DiscreteStateSpace1[5];
  tmp[6] = -2.0 * rtb_DiscreteStateSpace1[4];
  tmp[1] = -2.0 * rtb_DiscreteStateSpace1[5];
  tmp[4] = -0.0;
  tmp[7] = -2.0 * -rtb_DiscreteStateSpace1[3];
  tmp[2] = -2.0 * -rtb_DiscreteStateSpace1[4];
  tmp[5] = -2.0 * rtb_DiscreteStateSpace1[3];
  tmp[8] = -0.0;
  for (i = 0; i < 3; i++) {
    /* Saturate: '<Root>/Saturation1' incorporates:
     *  Sum: '<S3>/Diff'
     *  UnitDelay: '<S3>/UD'
     */
    R_IB_tmp_3 = rtb_TSamp_o2[i] - PosDirectControl_DW.UD_DSTATE_br[i];
    if (R_IB_tmp_3 > 10.0) {
      tmp_1[i] = 10.0;
    } else if (R_IB_tmp_3 < -10.0) {
      tmp_1[i] = -10.0;
    } else {
      tmp_1[i] = R_IB_tmp_3;
    }

    /* End of Saturate: '<Root>/Saturation1' */
    tmp_2[i] = 0.0;
    for (rtemp = 0; rtemp < 3; rtemp++) {
      r2 = i + 3 * rtemp;
      tmp_0[r2] = 0.0;
      r1 = 3 * rtemp + i;
      tmp_0[r2] = tmp_0[r1] + R_IB[3 * rtemp] * tmp[i];
      tmp_0[r2] = R_IB[3 * rtemp + 1] * tmp[i + 3] + tmp_0[r1];
      tmp_0[r2] = R_IB[3 * rtemp + 2] * tmp[i + 6] + tmp_0[r1];
      tmp_2[i] += tmp_0[r1] * rtb_Saturation[rtemp];
    }
  }

  for (i = 0; i < 3; i++) {
    hdd_c[i] = tmp_2[i] + (R_IB[i + 6] * tmp_1[2] + (R_IB[i + 3] * tmp_1[1] +
      R_IB[i] * tmp_1[0]));
  }

  /* 'control_DRF_indi:101' ddy01 = ddy01 + alpha*hdd_c(1) +  beta*hdd_c(2); */
  /* 'control_DRF_indi:102' ddy02 = ddy02 + beta*hdd_c(1) - alpha*hdd_c(2); */
  /* 'control_DRF_indi:104' ddy0 = [ddz0;ddy01;ddy02;r_dot0]; */
  /* 'control_DRF_indi:126' dU = pinv(G)*(nu-ddy0+G2*dU0); */
  b_p = true;
  for (r1 = 0; r1 < 16; r1++) {
    X[r1] = 0.0;
    if (b_p && ((!rtIsInf(G[r1])) && (!rtIsNaN(G[r1])))) {
    } else {
      b_p = false;
    }
  }

  if (!b_p) {
    for (i = 0; i < 16; i++) {
      X[i] = (rtNaN);
    }
  } else {
    PosDirectControl_svd(G, U, rtb_CastToDouble2, V);
    maxval = std::abs(rtb_CastToDouble2[0]);
    if ((!rtIsInf(maxval)) && (!rtIsNaN(maxval))) {
      if (maxval <= 2.2250738585072014E-308) {
        maxval = 4.94065645841247E-324;
      } else {
        frexp(maxval, &r);
        maxval = std::ldexp(1.0, r - 53);
      }
    } else {
      maxval = (rtNaN);
    }

    maxval *= 4.0;
    r = -1;
    r1 = 0;
    while ((r1 < 4) && (rtb_CastToDouble2[r1] > maxval)) {
      r++;
      r1++;
    }

    if (r + 1 > 0) {
      r2 = 0;
      for (r1 = 0; r1 <= r; r1++) {
        maxval = 1.0 / rtb_CastToDouble2[r1];
        for (i = r2; i < r2 + 4; i++) {
          V[i] *= maxval;
        }

        r2 += 4;
      }

      for (r2 = 0; r2 < 4; r2++) {
        X[r2] = 0.0;
      }

      for (r2 = 4; r2 < 8; r2++) {
        X[r2] = 0.0;
      }

      for (r2 = 8; r2 < 12; r2++) {
        X[r2] = 0.0;
      }

      for (r2 = 12; r2 < 16; r2++) {
        X[r2] = 0.0;
      }

      i = -1;
      r <<= 2;
      rtemp = r + 1;
      for (r2 = 1; r2 <= rtemp; r2 += 4) {
        r1 = i;
        for (b_ic = 0; b_ic < 4; b_ic++) {
          r1++;
          X[b_ic] += U[r2 - 1] * V[r1];
        }

        i += 4;
      }

      i = -1;
      rtemp = r + 2;
      for (r2 = 2; r2 <= rtemp; r2 += 4) {
        r1 = i;
        for (b_ic = 4; b_ic < 8; b_ic++) {
          r1++;
          X[b_ic] += U[r2 - 1] * V[r1];
        }

        i += 4;
      }

      i = -1;
      rtemp = r + 3;
      for (r2 = 3; r2 <= rtemp; r2 += 4) {
        r1 = i;
        for (b_ic = 8; b_ic < 12; b_ic++) {
          r1++;
          X[b_ic] += U[r2 - 1] * V[r1];
        }

        i += 4;
      }

      i = -1;
      rtemp = r + 4;
      for (r2 = 4; r2 <= rtemp; r2 += 4) {
        r1 = i;
        for (b_ic = 12; b_ic < 16; b_ic++) {
          r1++;
          X[b_ic] += U[r2 - 1] * V[r1];
        }

        i += 4;
      }
    }
  }

  rtb_CastToDouble2[0] = (rtb_CastToDouble[2] - rtb_Saturation2) * -10.0 -
    ((real_T)PosDirectControl_U.pos[2] - PosDirectControl_U.pos_sp[2]) * 10.0;
  R_IB_tmp_3 = (rtb_att_out_idx_2 * rtb_VectorConcatenate[3] - rtb_att_out_idx_0
                * rtb_VectorConcatenate[5]) + rtb_CastToDouble1_idx_1;
  R_IB_tmp_0 = (-rtb_att_out_idx_2 * rtb_VectorConcatenate[4] +
                rtb_att_out_idx_1 * rtb_VectorConcatenate[5]) +
    rtb_CastToDouble4_idx_1;
  rtb_CastToDouble2[1] = (0.0 * rtb_att_out_idx_0 + rtb_att_out_idx_1) * -30.0 -
    (R_IB_tmp_0 * 0.0 + R_IB_tmp_3) * 20.0;
  rtb_CastToDouble2[2] = (rtb_att_out_idx_0 - 0.0 * rtb_att_out_idx_1) * -30.0 -
    (R_IB_tmp_0 - R_IB_tmp_3 * 0.0) * 30.0;
  rtb_CastToDouble2[3] = (rtb_VectorConcatenate[5] - 2.0 * rtb_Saturation_k) *
    -5.0;
  rtb_TSamp_a[0] = rtb_TSamp_g - PosDirectControl_DW.UD_DSTATE_o;
  rtb_Saturation2 = rtb_DiscreteStateSpace1[3] * rtb_DiscreteStateSpace1[3];
  rtb_CastToDouble4_idx_1 = rtb_DiscreteStateSpace1[4] *
    rtb_DiscreteStateSpace1[4];
  rtb_CastToDouble1_idx_1 = rtb_DiscreteStateSpace1[5] *
    rtb_DiscreteStateSpace1[5];
  R_IB_tmp_3 = 0.0 * rtb_DiscreteStateSpace4[0] + rtb_DiscreteStateSpace4[1];
  rtb_TSamp_a[1] = (((((((((rtb_Saturation2 * -rtb_DiscreteStateSpace4[1] - 0.0 *
    rtb_DiscreteStateSpace4[0] * rtb_CastToDouble4_idx_1) - R_IB_tmp_3 *
    rtb_CastToDouble1_idx_1) + (0.0 * rtb_DiscreteStateSpace4[1] +
    rtb_DiscreteStateSpace4[0]) * rtb_DiscreteStateSpace1[3] *
    rtb_DiscreteStateSpace1[4]) + 0.0 * rtb_DiscreteStateSpace4[2] *
    rtb_DiscreteStateSpace1[3] * rtb_DiscreteStateSpace1[5]) +
                        rtb_DiscreteStateSpace4[2] * rtb_DiscreteStateSpace1[4] *
                        rtb_DiscreteStateSpace1[5]) + rtb_DiscreteStateSpace4[2]
                       * rtb_Diff[3]) - 0.0 * rtb_DiscreteStateSpace4[2] *
                      rtb_Diff[4]) + (0.0 * rtb_DiscreteStateSpace4[1] -
    rtb_DiscreteStateSpace4[0]) * rtb_Diff[5]) + 0.0 * hdd_c[0]) + hdd_c[1];
  rtb_TSamp_a[2] = (((((((((0.0 * rtb_DiscreteStateSpace4[1] * rtb_Saturation2 -
    rtb_CastToDouble4_idx_1 * rtb_DiscreteStateSpace4[0]) -
    (rtb_DiscreteStateSpace4[0] - 0.0 * rtb_DiscreteStateSpace4[1]) *
    rtb_CastToDouble1_idx_1) + (-0.0 * rtb_DiscreteStateSpace4[0] +
    rtb_DiscreteStateSpace4[1]) * rtb_DiscreteStateSpace1[3] *
    rtb_DiscreteStateSpace1[4]) + rtb_DiscreteStateSpace4[2] *
    rtb_DiscreteStateSpace1[3] * rtb_DiscreteStateSpace1[5]) - 0.0 *
                        rtb_DiscreteStateSpace4[2] * rtb_DiscreteStateSpace1[4] *
                        rtb_DiscreteStateSpace1[5]) + -0.0 *
                       rtb_DiscreteStateSpace4[2] * rtb_Diff[3]) -
                      rtb_DiscreteStateSpace4[2] * rtb_Diff[4]) + R_IB_tmp_3 *
                     rtb_Diff[5]) + hdd_c[0]) - 0.0 * hdd_c[1];
  rtb_TSamp_a[3] = rtb_Diff[5];
  for (i = 0; i < 4; i++) {
    tmp_3[i] = (((G2[i + 4] * PosDirectControl_DW.Memory_PreviousInput[1] + G2[i]
                  * PosDirectControl_DW.Memory_PreviousInput[0]) + G2[i + 8] *
                 PosDirectControl_DW.Memory_PreviousInput[2]) + G2[i + 12] *
                PosDirectControl_DW.Memory_PreviousInput[3]) +
      (rtb_CastToDouble2[i] - rtb_TSamp_a[i]);
  }

  for (i = 0; i < 4; i++) {
    R_IB_tmp_tmp = X[i + 12] * tmp_3[3] + (X[i + 8] * tmp_3[2] + (X[i + 4] *
      tmp_3[1] + X[i] * tmp_3[0]));
    rtb_CastToDouble2[i] = R_IB_tmp_tmp;
  }

  /* 'control_DRF_indi:127' dU01 = dU; */
  /* 'control_DRF_indi:129' U = U0+dU; */
  rtb_h[0] = rtb_att_out_idx_0;
  rtb_h[1] = rtb_att_out_idx_1;
  rtb_h[2] = rtb_att_out_idx_2;
  rtb_Saturation2 = rtb_DiscreteStateSpace3[0] + rtb_CastToDouble2[0];
  rtb_att_out_idx_0 = rtb_DiscreteStateSpace3[1] + rtb_CastToDouble2[1];
  rtb_att_out_idx_1 = rtb_DiscreteStateSpace3[2] + rtb_CastToDouble2[2];
  rtb_att_out_idx_2 = rtb_DiscreteStateSpace3[3] + rtb_CastToDouble2[3];

  /* MATLAB Function: '<Root>/MATLAB Function1' */
  /* :  w = zeros(4,1); */
  /* :  w(1) = sqrt(abs(U(1)))*sign(U(1)); */
  if (rtb_Saturation2 < 0.0) {
    rtb_CastToDouble4_idx_1 = -1.0;
  } else if (rtb_Saturation2 > 0.0) {
    rtb_CastToDouble4_idx_1 = 1.0;
  } else if (rtb_Saturation2 == 0.0) {
    rtb_CastToDouble4_idx_1 = 0.0;
  } else {
    rtb_CastToDouble4_idx_1 = (rtNaN);
  }

  rtb_Saturation2 = std::sqrt(std::abs(rtb_Saturation2)) *
    rtb_CastToDouble4_idx_1;

  /* :  w(2) = sqrt(abs(U(2)))*sign(U(2)); */
  if (rtb_att_out_idx_0 < 0.0) {
    rtb_CastToDouble4_idx_1 = -1.0;
  } else if (rtb_att_out_idx_0 > 0.0) {
    rtb_CastToDouble4_idx_1 = 1.0;
  } else if (rtb_att_out_idx_0 == 0.0) {
    rtb_CastToDouble4_idx_1 = 0.0;
  } else {
    rtb_CastToDouble4_idx_1 = (rtNaN);
  }

  rtb_att_out_idx_0 = std::sqrt(std::abs(rtb_att_out_idx_0)) *
    rtb_CastToDouble4_idx_1;

  /* :  w(3) = sqrt(abs(U(3)))*sign(U(3)); */
  if (rtb_att_out_idx_1 < 0.0) {
    rtb_CastToDouble4_idx_1 = -1.0;
  } else if (rtb_att_out_idx_1 > 0.0) {
    rtb_CastToDouble4_idx_1 = 1.0;
  } else if (rtb_att_out_idx_1 == 0.0) {
    rtb_CastToDouble4_idx_1 = 0.0;
  } else {
    rtb_CastToDouble4_idx_1 = (rtNaN);
  }

  rtb_att_out_idx_1 = std::sqrt(std::abs(rtb_att_out_idx_1)) *
    rtb_CastToDouble4_idx_1;

  /* :  w(4) = sqrt(abs(U(4)))*sign(U(4)); */
  if (rtb_att_out_idx_2 < 0.0) {
    rtb_CastToDouble4_idx_1 = -1.0;
  } else if (rtb_att_out_idx_2 > 0.0) {
    rtb_CastToDouble4_idx_1 = 1.0;
  } else if (rtb_att_out_idx_2 == 0.0) {
    rtb_CastToDouble4_idx_1 = 0.0;
  } else {
    rtb_CastToDouble4_idx_1 = (rtNaN);
  }

  rtb_att_out_idx_2 = std::sqrt(std::abs(rtb_att_out_idx_2)) *
    rtb_CastToDouble4_idx_1;

  /* End of MATLAB Function: '<Root>/MATLAB Function1' */

  /* Saturate: '<Root>/Saturation4' */
  /* :  actuator_controls = w_sp_to_px4_actuator_controls(w_sp, par); */
  /* 'w_sp_to_px4_actuator_controls:4' w_min = par.w_min; */
  /* 'w_sp_to_px4_actuator_controls:5' w_max = par.w_max; */
  /* 'w_sp_to_px4_actuator_controls:8' actuator_controls = -1 + 2*(w_sp - w_min)./(w_max - w_min); */
  if (rtb_Saturation2 > 1256.0) {
    rtb_Saturation4[0] = 1256.0;
  } else if (rtb_Saturation2 < 300.0) {
    rtb_Saturation4[0] = 300.0;
  } else {
    rtb_Saturation4[0] = rtb_Saturation2;
  }

  /* Outport: '<Root>/w_rotors' */
  PosDirectControl_Y.w_rotors[0] = rtb_Saturation4[0];

  /* Outport: '<Root>/actuators_control' incorporates:
   *  DataTypeConversion: '<Root>/Cast To Single'
   *  MATLAB Function: '<Root>/MATLAB Function2'
   */
  PosDirectControl_Y.actuators_control[0] = (real32_T)((rtb_Saturation4[0] -
    300.0) * 2.0 / 956.0 + -1.0);

  /* Saturate: '<Root>/Saturation4' */
  if (rtb_att_out_idx_0 > 1256.0) {
    rtb_Saturation4[1] = 1256.0;
  } else if (rtb_att_out_idx_0 < 300.0) {
    rtb_Saturation4[1] = 300.0;
  } else {
    rtb_Saturation4[1] = rtb_att_out_idx_0;
  }

  /* Outport: '<Root>/w_rotors' */
  PosDirectControl_Y.w_rotors[1] = rtb_Saturation4[1];

  /* Outport: '<Root>/actuators_control' incorporates:
   *  DataTypeConversion: '<Root>/Cast To Single'
   *  MATLAB Function: '<Root>/MATLAB Function2'
   */
  PosDirectControl_Y.actuators_control[1] = (real32_T)((rtb_Saturation4[1] -
    300.0) * 2.0 / 956.0 + -1.0);

  /* Saturate: '<Root>/Saturation4' */
  if (rtb_att_out_idx_1 > 1256.0) {
    rtb_Saturation4[2] = 1256.0;
  } else if (rtb_att_out_idx_1 < 300.0) {
    rtb_Saturation4[2] = 300.0;
  } else {
    rtb_Saturation4[2] = rtb_att_out_idx_1;
  }

  /* Outport: '<Root>/w_rotors' */
  PosDirectControl_Y.w_rotors[2] = rtb_Saturation4[2];

  /* Outport: '<Root>/actuators_control' incorporates:
   *  DataTypeConversion: '<Root>/Cast To Single'
   *  MATLAB Function: '<Root>/MATLAB Function2'
   */
  PosDirectControl_Y.actuators_control[2] = (real32_T)((rtb_Saturation4[2] -
    300.0) * 2.0 / 956.0 + -1.0);

  /* Saturate: '<Root>/Saturation4' */
  if (rtb_att_out_idx_2 > 1256.0) {
    rtb_Saturation4[3] = 1256.0;
  } else if (rtb_att_out_idx_2 < 300.0) {
    rtb_Saturation4[3] = 300.0;
  } else {
    rtb_Saturation4[3] = rtb_att_out_idx_2;
  }

  /* Outport: '<Root>/w_rotors' */
  PosDirectControl_Y.w_rotors[3] = rtb_Saturation4[3];

  /* Outport: '<Root>/actuators_control' incorporates:
   *  DataTypeConversion: '<Root>/Cast To Single'
   *  MATLAB Function: '<Root>/MATLAB Function2'
   */
  PosDirectControl_Y.actuators_control[3] = (real32_T)((rtb_Saturation4[3] -
    300.0) * 2.0 / 956.0 + -1.0);

  /* DiscreteStateSpace: '<Root>/ActuatorDynamics' */
  {
    rtb_w[0] = (1.0)*PosDirectControl_DW.ActuatorDynamics_DSTATE[0];
    rtb_w[1] = (1.0)*PosDirectControl_DW.ActuatorDynamics_DSTATE[1];
    rtb_w[2] = (1.0)*PosDirectControl_DW.ActuatorDynamics_DSTATE[2];
    rtb_w[3] = (1.0)*PosDirectControl_DW.ActuatorDynamics_DSTATE[3];
  }

  /* Sum: '<Root>/Sum5' incorporates:
   *  DataTypeConversion: '<Root>/Cast To Double1'
   *  DataTypeConversion: '<Root>/Cast To Double4'
   *  Inport: '<Root>/pos'
   *  Inport: '<Root>/pos_sp'
   */
  rtb_att_out_idx_1 = (real_T)PosDirectControl_U.pos_sp[0] -
    PosDirectControl_U.pos[0];

  /* Gain: '<S59>/Integral Gain' */
  rtb_Saturation[0] = 0.0 * rtb_att_out_idx_1;

  /* Gain: '<S79>/Filter Coefficient' incorporates:
   *  DiscreteIntegrator: '<S51>/Filter'
   *  Gain: '<S46>/Derivative Gain'
   *  Sum: '<S51>/SumD'
   */
  rtb_att_out_idx_2 = (1.5 * rtb_att_out_idx_1 -
                       PosDirectControl_DW.Filter_DSTATE[0]) * 100.0;

  /* Sum: '<Root>/Sum5' incorporates:
   *  DiscreteIntegrator: '<S69>/Integrator'
   *  Gain: '<S86>/Proportional Gain'
   *  Sum: '<S99>/Sum'
   */
  rtb_Saturation2 = (1.5 * rtb_att_out_idx_1 +
                     PosDirectControl_DW.Integrator_DSTATE[0]) +
    rtb_att_out_idx_2;

  /* Gain: '<S79>/Filter Coefficient' */
  rtb_att_out_idx_0 = rtb_att_out_idx_2;

  /* Sum: '<Root>/Sum5' incorporates:
   *  DataTypeConversion: '<Root>/Cast To Double1'
   *  DataTypeConversion: '<Root>/Cast To Double4'
   *  Inport: '<Root>/pos'
   *  Inport: '<Root>/pos_sp'
   */
  rtb_att_out_idx_1 = (real_T)PosDirectControl_U.pos_sp[1] -
    PosDirectControl_U.pos[1];

  /* Gain: '<S59>/Integral Gain' */
  rtb_Saturation[1] = 0.0 * rtb_att_out_idx_1;

  /* Gain: '<S79>/Filter Coefficient' incorporates:
   *  DiscreteIntegrator: '<S51>/Filter'
   *  Gain: '<S46>/Derivative Gain'
   *  Sum: '<S51>/SumD'
   */
  rtb_att_out_idx_2 = (1.5 * rtb_att_out_idx_1 -
                       PosDirectControl_DW.Filter_DSTATE[1]) * 100.0;

  /* Sum: '<Root>/Sum5' incorporates:
   *  DiscreteIntegrator: '<S69>/Integrator'
   *  Gain: '<S86>/Proportional Gain'
   *  Sum: '<S99>/Sum'
   */
  rtb_CastToDouble4_idx_1 = (1.5 * rtb_att_out_idx_1 +
    PosDirectControl_DW.Integrator_DSTATE[1]) + rtb_att_out_idx_2;

  /* Gain: '<S79>/Filter Coefficient' */
  rtb_CastToDouble1_idx_1 = rtb_att_out_idx_2;

  /* Sum: '<Root>/Sum5' incorporates:
   *  DataTypeConversion: '<Root>/Cast To Double1'
   *  DataTypeConversion: '<Root>/Cast To Double4'
   *  Inport: '<Root>/pos'
   *  Inport: '<Root>/pos_sp'
   */
  rtb_att_out_idx_1 = (real_T)PosDirectControl_U.pos_sp[2] -
    PosDirectControl_U.pos[2];

  /* Gain: '<S59>/Integral Gain' */
  rtb_Saturation[2] = 0.2 * rtb_att_out_idx_1;

  /* Gain: '<S79>/Filter Coefficient' incorporates:
   *  DiscreteIntegrator: '<S51>/Filter'
   *  Gain: '<S46>/Derivative Gain'
   *  Sum: '<S51>/SumD'
   */
  rtb_att_out_idx_2 = (2.0 * rtb_att_out_idx_1 -
                       PosDirectControl_DW.Filter_DSTATE[2]) * 100.0;

  /* Sum: '<S99>/Sum' incorporates:
   *  DiscreteIntegrator: '<S69>/Integrator'
   *  Gain: '<S86>/Proportional Gain'
   */
  rtb_att_out_idx_1 = (10.0 * rtb_att_out_idx_1 +
                       PosDirectControl_DW.Integrator_DSTATE[2]) +
    rtb_att_out_idx_2;

  /* MATLAB Function: '<Root>/MATLAB Function' */
  /* :  U = zeros(4,1); */
  /* :  U(1) = w(1)^2; */
  rtb_U_a[0] = rtb_w[0] * rtb_w[0];

  /* :  U(2) = w(2)^2; */
  rtb_U_a[1] = rtb_w[1] * rtb_w[1];

  /* :  U(3) = w(3)^2; */
  rtb_U_a[2] = rtb_w[2] * rtb_w[2];

  /* :  U(4) = w(4)^2; */
  rtb_U_a[3] = rtb_w[3] * rtb_w[3];

  /* Saturate: '<S13>/Saturation' */
  if (rtb_Saturation2 > 3.0) {
    rtb_Saturation_k = 3.0;
  } else if (rtb_Saturation2 < -3.0) {
    rtb_Saturation_k = -3.0;
  } else {
    rtb_Saturation_k = rtb_Saturation2;
  }

  /* End of Saturate: '<S13>/Saturation' */

  /* Saturate: '<S13>/Saturation1' */
  if (rtb_CastToDouble4_idx_1 > 3.0) {
    rtb_CastToDouble4_idx_1 = 3.0;
  } else {
    if (rtb_CastToDouble4_idx_1 < -3.0) {
      rtb_CastToDouble4_idx_1 = -3.0;
    }
  }

  /* Saturate: '<S13>/Saturation2' */
  if (rtb_att_out_idx_1 > 3.0) {
    rtb_att_out_idx_1 = 3.0;
  } else {
    if (rtb_att_out_idx_1 < -3.0) {
      rtb_att_out_idx_1 = -3.0;
    }
  }

  /* S-Function (sdsp2norm2): '<S13>/Normalization' incorporates:
   *  Saturate: '<S13>/Saturation1'
   *  Saturate: '<S13>/Saturation2'
   *  Sum: '<S13>/Sum'
   */
  rtb_Saturation2 = 1.0 / (std::sqrt((rtb_Saturation_k * rtb_Saturation_k +
    rtb_CastToDouble4_idx_1 * rtb_CastToDouble4_idx_1) + (rtb_att_out_idx_1 -
    9.8124) * (rtb_att_out_idx_1 - 9.8124)) + 1.0E-10);
  rtb_Normalization[0] = rtb_Saturation_k * rtb_Saturation2;
  rtb_Normalization[1] = rtb_CastToDouble4_idx_1 * rtb_Saturation2;
  rtb_Normalization[2] = (rtb_att_out_idx_1 - 9.8124) * rtb_Saturation2;

  /* Update for DiscreteStateSpace: '<Root>/Discrete State-Space1' */
  {
    real_T xnew[6];
    xnew[0] = (0.97142857142857142)*
      PosDirectControl_DW.DiscreteStateSpace1_DSTATE[0];
    xnew[0] += (0.028571428571428571)*rtb_VectorConcatenate[0];
    xnew[1] = (0.97142857142857142)*
      PosDirectControl_DW.DiscreteStateSpace1_DSTATE[1];
    xnew[1] += (0.028571428571428571)*rtb_VectorConcatenate[1];
    xnew[2] = (0.97142857142857142)*
      PosDirectControl_DW.DiscreteStateSpace1_DSTATE[2];
    xnew[2] += (0.028571428571428571)*rtb_VectorConcatenate[2];
    xnew[3] = (0.97142857142857142)*
      PosDirectControl_DW.DiscreteStateSpace1_DSTATE[3];
    xnew[3] += (0.028571428571428571)*rtb_VectorConcatenate[3];
    xnew[4] = (0.97142857142857142)*
      PosDirectControl_DW.DiscreteStateSpace1_DSTATE[4];
    xnew[4] += (0.028571428571428571)*rtb_VectorConcatenate[4];
    xnew[5] = (0.97142857142857142)*
      PosDirectControl_DW.DiscreteStateSpace1_DSTATE[5];
    xnew[5] += (0.028571428571428571)*rtb_VectorConcatenate[5];
    (void) memcpy(&PosDirectControl_DW.DiscreteStateSpace1_DSTATE[0], xnew,
                  sizeof(real_T)*6);
  }

  /* Update for UnitDelay: '<S5>/UD' */
  for (i = 0; i < 6; i++) {
    PosDirectControl_DW.UD_DSTATE[i] = rtb_TSamp[i];
  }

  /* End of Update for UnitDelay: '<S5>/UD' */

  /* Update for DiscreteStateSpace: '<Root>/Discrete State-Space' */
  {
    real_T xnew[3];
    xnew[0] = (0.97142857142857142)*
      PosDirectControl_DW.DiscreteStateSpace_DSTATE[0];
    xnew[0] += (0.028571428571428571)*rtb_Normalization[0];
    xnew[1] = (0.97142857142857142)*
      PosDirectControl_DW.DiscreteStateSpace_DSTATE[1];
    xnew[1] += (0.028571428571428571)*rtb_Normalization[1];
    xnew[2] = (0.97142857142857142)*
      PosDirectControl_DW.DiscreteStateSpace_DSTATE[2];
    xnew[2] += (0.028571428571428571)*rtb_Normalization[2];
    (void) memcpy(&PosDirectControl_DW.DiscreteStateSpace_DSTATE[0], xnew,
                  sizeof(real_T)*3);
  }

  /* Update for UnitDelay: '<S4>/UD' */
  PosDirectControl_DW.UD_DSTATE_b[0] = rtb_TSamp_n_idx_0;

  /* Update for UnitDelay: '<S3>/UD' */
  PosDirectControl_DW.UD_DSTATE_br[0] = rtb_TSamp_o2[0];

  /* Update for UnitDelay: '<S4>/UD' */
  PosDirectControl_DW.UD_DSTATE_b[1] = rtb_TSamp_n_idx_1;

  /* Update for UnitDelay: '<S3>/UD' */
  PosDirectControl_DW.UD_DSTATE_br[1] = rtb_TSamp_o2[1];

  /* Update for UnitDelay: '<S4>/UD' */
  PosDirectControl_DW.UD_DSTATE_b[2] = rtb_TSamp_f;

  /* Update for UnitDelay: '<S3>/UD' */
  PosDirectControl_DW.UD_DSTATE_br[2] = rtb_TSamp_o2[2];

  /* Update for UnitDelay: '<S2>/UD' */
  PosDirectControl_DW.UD_DSTATE_g = rtb_TSamp_fy;

  /* Update for DiscreteStateSpace: '<Root>/Discrete State-Space2' */
  {
    real_T xnew[1];
    xnew[0] = 0.97142857142857142*PosDirectControl_DW.DiscreteStateSpace2_DSTATE;
    xnew[0] += 0.028571428571428571*rtb_CastToDouble[2];
    (void) memcpy(&PosDirectControl_DW.DiscreteStateSpace2_DSTATE, xnew,
                  sizeof(real_T)*1);
  }

  /* Update for UnitDelay: '<S1>/UD' */
  PosDirectControl_DW.UD_DSTATE_o = rtb_TSamp_g;

  /* Update for DiscreteStateSpace: '<Root>/Discrete State-Space3' */
  {
    real_T xnew[4];
    xnew[0] = (0.97142857142857142)*
      PosDirectControl_DW.DiscreteStateSpace3_DSTATE[0];
    xnew[0] += (0.028571428571428571)*rtb_U_a[0];
    xnew[1] = (0.97142857142857142)*
      PosDirectControl_DW.DiscreteStateSpace3_DSTATE[1];
    xnew[1] += (0.028571428571428571)*rtb_U_a[1];
    xnew[2] = (0.97142857142857142)*
      PosDirectControl_DW.DiscreteStateSpace3_DSTATE[2];
    xnew[2] += (0.028571428571428571)*rtb_U_a[2];
    xnew[3] = (0.97142857142857142)*
      PosDirectControl_DW.DiscreteStateSpace3_DSTATE[3];
    xnew[3] += (0.028571428571428571)*rtb_U_a[3];
    (void) memcpy(&PosDirectControl_DW.DiscreteStateSpace3_DSTATE[0], xnew,
                  sizeof(real_T)*4);
  }

  /* Update for DiscreteStateSpace: '<Root>/Discrete State-Space4' */
  {
    real_T xnew[3];
    xnew[0] = (0.97142857142857142)*
      PosDirectControl_DW.DiscreteStateSpace4_DSTATE[0];
    xnew[0] += (0.028571428571428571)*rtb_h[0];
    xnew[1] = (0.97142857142857142)*
      PosDirectControl_DW.DiscreteStateSpace4_DSTATE[1];
    xnew[1] += (0.028571428571428571)*rtb_h[1];
    xnew[2] = (0.97142857142857142)*
      PosDirectControl_DW.DiscreteStateSpace4_DSTATE[2];
    xnew[2] += (0.028571428571428571)*rtb_h[2];
    (void) memcpy(&PosDirectControl_DW.DiscreteStateSpace4_DSTATE[0], xnew,
                  sizeof(real_T)*3);
  }

  /* Update for Memory: '<Root>/Memory' incorporates:
   *  MATLAB Function: '<Root>/indi'
   */
  PosDirectControl_DW.Memory_PreviousInput[0] = rtb_CastToDouble2[0];
  PosDirectControl_DW.Memory_PreviousInput[1] = rtb_CastToDouble2[1];
  PosDirectControl_DW.Memory_PreviousInput[2] = rtb_CastToDouble2[2];
  PosDirectControl_DW.Memory_PreviousInput[3] = rtb_CastToDouble2[3];

  /* Update for DiscreteStateSpace: '<Root>/ActuatorDynamics' */
  {
    real_T xnew[4];
    xnew[0] = (0.92)*PosDirectControl_DW.ActuatorDynamics_DSTATE[0];
    xnew[0] += (0.08)*rtb_Saturation4[0];
    xnew[1] = (0.92)*PosDirectControl_DW.ActuatorDynamics_DSTATE[1];
    xnew[1] += (0.08)*rtb_Saturation4[1];
    xnew[2] = (0.92)*PosDirectControl_DW.ActuatorDynamics_DSTATE[2];
    xnew[2] += (0.08)*rtb_Saturation4[2];
    xnew[3] = (0.92)*PosDirectControl_DW.ActuatorDynamics_DSTATE[3];
    xnew[3] += (0.08)*rtb_Saturation4[3];
    (void) memcpy(&PosDirectControl_DW.ActuatorDynamics_DSTATE[0], xnew,
                  sizeof(real_T)*4);
  }

  /* Update for DiscreteIntegrator: '<S51>/Filter' */
  PosDirectControl_DW.Filter_DSTATE[0] += 0.002 * rtb_att_out_idx_0;

  /* Update for DiscreteIntegrator: '<S69>/Integrator' */
  PosDirectControl_DW.Integrator_DSTATE[0] += 0.002 * rtb_Saturation[0];

  /* Update for DiscreteIntegrator: '<S51>/Filter' */
  PosDirectControl_DW.Filter_DSTATE[1] += 0.002 * rtb_CastToDouble1_idx_1;

  /* Update for DiscreteIntegrator: '<S69>/Integrator' */
  PosDirectControl_DW.Integrator_DSTATE[1] += 0.002 * rtb_Saturation[1];

  /* Update for DiscreteIntegrator: '<S51>/Filter' */
  PosDirectControl_DW.Filter_DSTATE[2] += 0.002 * rtb_att_out_idx_2;

  /* Update for DiscreteIntegrator: '<S69>/Integrator' */
  PosDirectControl_DW.Integrator_DSTATE[2] += 0.002 * rtb_Saturation[2];
}

/* Model initialize function */
void PosDirectControlModelClass::initialize()
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize error status */
  rtmSetErrorStatus(getRTM(), (NULL));

  /* states (dwork) */
  (void) memset((void *)&PosDirectControl_DW, 0,
                sizeof(DW_PosDirectControl_T));

  /* external inputs */
  (void)memset(&PosDirectControl_U, 0, sizeof(ExtU_PosDirectControl_T));

  /* external outputs */
  (void) memset((void *)&PosDirectControl_Y, 0,
                sizeof(ExtY_PosDirectControl_T));

  {
    int32_T i;

    /* InitializeConditions for DiscreteStateSpace: '<Root>/Discrete State-Space1' */
    {
      int_T i1;
      real_T *dw_DSTATE = &PosDirectControl_DW.DiscreteStateSpace1_DSTATE[0];
      for (i1=0; i1 < 6; i1++) {
        dw_DSTATE[i1] = 0.0;
      }
    }

    /* InitializeConditions for UnitDelay: '<S5>/UD' */
    for (i = 0; i < 6; i++) {
      PosDirectControl_DW.UD_DSTATE[i] = 0.0;
    }

    /* End of InitializeConditions for UnitDelay: '<S5>/UD' */

    /* InitializeConditions for DiscreteStateSpace: '<Root>/Discrete State-Space' */
    PosDirectControl_DW.DiscreteStateSpace_DSTATE[0] = (0.0);
    PosDirectControl_DW.DiscreteStateSpace_DSTATE[1] = (0.0);
    PosDirectControl_DW.DiscreteStateSpace_DSTATE[2] = (-1.0);

    /* InitializeConditions for UnitDelay: '<S4>/UD' */
    PosDirectControl_DW.UD_DSTATE_b[0] = 0.0;

    /* InitializeConditions for UnitDelay: '<S3>/UD' */
    PosDirectControl_DW.UD_DSTATE_br[0] = 0.0;

    /* InitializeConditions for UnitDelay: '<S4>/UD' */
    PosDirectControl_DW.UD_DSTATE_b[1] = 0.0;

    /* InitializeConditions for UnitDelay: '<S3>/UD' */
    PosDirectControl_DW.UD_DSTATE_br[1] = 0.0;

    /* InitializeConditions for UnitDelay: '<S4>/UD' */
    PosDirectControl_DW.UD_DSTATE_b[2] = 0.0;

    /* InitializeConditions for UnitDelay: '<S3>/UD' */
    PosDirectControl_DW.UD_DSTATE_br[2] = 0.0;

    /* InitializeConditions for UnitDelay: '<S2>/UD' */
    PosDirectControl_DW.UD_DSTATE_g = 0.0;

    /* InitializeConditions for DiscreteStateSpace: '<Root>/Discrete State-Space2' */
    PosDirectControl_DW.DiscreteStateSpace2_DSTATE = 0.0;

    /* InitializeConditions for UnitDelay: '<S1>/UD' */
    PosDirectControl_DW.UD_DSTATE_o = 0.0;

    /* InitializeConditions for DiscreteStateSpace: '<Root>/Discrete State-Space3' */
    PosDirectControl_DW.DiscreteStateSpace3_DSTATE[0] = 0.0;
    PosDirectControl_DW.DiscreteStateSpace3_DSTATE[1] = 0.0;
    PosDirectControl_DW.DiscreteStateSpace3_DSTATE[2] = 0.0;
    PosDirectControl_DW.DiscreteStateSpace3_DSTATE[3] = 0.0;

    /* InitializeConditions for DiscreteStateSpace: '<Root>/Discrete State-Space4' */
    PosDirectControl_DW.DiscreteStateSpace4_DSTATE[0] = (0.0);
    PosDirectControl_DW.DiscreteStateSpace4_DSTATE[1] = (0.0);
    PosDirectControl_DW.DiscreteStateSpace4_DSTATE[2] = (0.0);

    /* InitializeConditions for Memory: '<Root>/Memory' */
    PosDirectControl_DW.Memory_PreviousInput[0] = 0.0;
    PosDirectControl_DW.Memory_PreviousInput[1] = 0.0;
    PosDirectControl_DW.Memory_PreviousInput[2] = 0.0;
    PosDirectControl_DW.Memory_PreviousInput[3] = 0.0;

    /* InitializeConditions for DiscreteStateSpace: '<Root>/ActuatorDynamics' */
    PosDirectControl_DW.ActuatorDynamics_DSTATE[0] = 0.0;
    PosDirectControl_DW.ActuatorDynamics_DSTATE[1] = 0.0;
    PosDirectControl_DW.ActuatorDynamics_DSTATE[2] = 0.0;
    PosDirectControl_DW.ActuatorDynamics_DSTATE[3] = 0.0;

    /* InitializeConditions for DiscreteIntegrator: '<S51>/Filter' */
    PosDirectControl_DW.Filter_DSTATE[0] = 0.0;

    /* InitializeConditions for DiscreteIntegrator: '<S69>/Integrator' */
    PosDirectControl_DW.Integrator_DSTATE[0] = 0.0;

    /* InitializeConditions for DiscreteIntegrator: '<S51>/Filter' */
    PosDirectControl_DW.Filter_DSTATE[1] = 0.0;

    /* InitializeConditions for DiscreteIntegrator: '<S69>/Integrator' */
    PosDirectControl_DW.Integrator_DSTATE[1] = 0.0;

    /* InitializeConditions for DiscreteIntegrator: '<S51>/Filter' */
    PosDirectControl_DW.Filter_DSTATE[2] = 0.0;

    /* InitializeConditions for DiscreteIntegrator: '<S69>/Integrator' */
    PosDirectControl_DW.Integrator_DSTATE[2] = 0.0;

    /* SystemInitialize for MATLAB Function: '<Root>/unwrap2pi' */
    PosDirectControl_DW.psi_last_not_empty = false;

    /* :  N = 0; */
    PosDirectControl_DW.N = 0.0;
  }
}

/* Model terminate function */
void PosDirectControlModelClass::terminate()
{
  /* (no terminate code required) */
}

/* Constructor */
PosDirectControlModelClass::PosDirectControlModelClass()
{
  static const P_PosDirectControl_T PosDirectControl_P_temp = {
    /* Variable: PosDirectControlParams
     * Referenced by: '<Root>/indi'
     */
    {
      1.9035e-6,
      0.0875,
      0.115,
      0.374,
      0.0014,
      0.0013,
      0.0025,
      8.0e-6,
      1.9203e-8,
      0.025,
      500.0
    }
  };                                   /* Modifiable parameters */

  /* Initialize tunable parameters */
  PosDirectControl_P = PosDirectControl_P_temp;
}

/* Destructor */
PosDirectControlModelClass::~PosDirectControlModelClass()
{
  /* Currently there is no destructor body generated.*/
}

/* Real-Time Model get method */
RT_MODEL_PosDirectControl_T * PosDirectControlModelClass::getRTM()
{
  return (&PosDirectControl_M);
}
