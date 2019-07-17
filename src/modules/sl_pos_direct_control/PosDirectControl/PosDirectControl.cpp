/*
 * PosDirectControl.cpp
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "PosDirectControl".
 *
 * Model version              : 1.479
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C++ source code generated on : Sat Jan 12 15:20:23 2019
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "PosDirectControl.h"
#include "PosDirectControl_private.h"

/* Exported block parameters */
PosDirectControlParamsType PosDirectControlParams = {
  -1.0,
  0.3,
  5.0,
  1.0,
  3.0,
  30.0,
  20.0,
  5.0,
  5.0,
  1,
  1.9035e-6,
  0.0875,
  0.115,
  0.374,
  0.0014,
  0.0013,
  0.0025,
  8.0e-6,
  1.9203e-8,
  0.033333333333333333,
  500.0,
  9.8124,

  { 44971.632920016484, -44971.632920016484, 49681.100684523823,
    49681.100684523823, 316227.76601683762, 316227.76601683762,
    -316227.76601683773, 316227.76601683773 },

  { 14255.067733331245, -13447.63511985299, 11160.171065924309,
    10174.773713148805, 379407.33359574073, -325271.20107405138,
    259299.44800583596, 288118.92896767677 },

  { 18075.203856889231, 16744.045176404907, 491836.38053471, 397614.10284662707
  }
} ;                                    /* Variable: PosDirectControlParams
                                        * Referenced by:
                                        *   '<S3>/indi'
                                        *   '<S3>/rpm_feedback'
                                        *   '<S3>/Pos_x'
                                        *   '<S3>/Pos_y'
                                        *   '<S3>/Vel_x'
                                        *   '<S3>/Vel_y'
                                        */

static void rate_scheduler(RT_MODEL_PosDirectControl_T *const PosDirectControl_M);

/*
 *   This function updates active task flag for each subrate.
 * The function is called at model base rate, hence the
 * generated code self-manages all its subrates.
 */
static void rate_scheduler(RT_MODEL_PosDirectControl_T *const PosDirectControl_M)
{
  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (PosDirectControl_M->Timing.TaskCounters.TID[1])++;
  if ((PosDirectControl_M->Timing.TaskCounters.TID[1]) > 9) {/* Sample time: [0.02s, 0.0s] */
    PosDirectControl_M->Timing.TaskCounters.TID[1] = 0;
  }
}

/* Function for MATLAB Function: '<S3>/indi' */
void PosDirectControlModelClass::PosDirectControl_mldivide(const real_T A[9],
  const real_T B[3], real_T Y[3])
{
  real_T b_A[9];
  int32_T r1;
  int32_T r2;
  int32_T r3;
  real_T maxval;
  real_T a21;
  int32_T rtemp;
  memcpy(&b_A[0], &A[0], 9U * sizeof(real_T));
  r1 = 0;
  r2 = 1;
  r3 = 2;
  maxval = std::abs(A[0]);
  a21 = std::abs(A[1]);
  if (a21 > maxval) {
    maxval = a21;
    r1 = 1;
    r2 = 0;
  }

  if (std::abs(A[2]) > maxval) {
    r1 = 2;
    r2 = 1;
    r3 = 0;
  }

  b_A[r2] = A[r2] / A[r1];
  b_A[r3] /= b_A[r1];
  b_A[3 + r2] -= b_A[3 + r1] * b_A[r2];
  b_A[3 + r3] -= b_A[3 + r1] * b_A[r3];
  b_A[6 + r2] -= b_A[6 + r1] * b_A[r2];
  b_A[6 + r3] -= b_A[6 + r1] * b_A[r3];
  if (std::abs(b_A[3 + r3]) > std::abs(b_A[3 + r2])) {
    rtemp = r2;
    r2 = r3;
    r3 = rtemp;
  }

  b_A[3 + r3] /= b_A[3 + r2];
  b_A[6 + r3] -= b_A[3 + r3] * b_A[6 + r2];
  Y[1] = B[r2] - B[r1] * b_A[r2];
  Y[2] = (B[r3] - B[r1] * b_A[r3]) - b_A[3 + r3] * Y[1];
  Y[2] /= b_A[6 + r3];
  Y[0] = B[r1] - b_A[6 + r1] * Y[2];
  Y[1] -= b_A[6 + r2] * Y[2];
  Y[1] /= b_A[3 + r2];
  Y[0] -= b_A[3 + r1] * Y[1];
  Y[0] /= b_A[r1];
}

/* Function for MATLAB Function: '<S3>/indi' */
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

/* Function for MATLAB Function: '<S3>/indi' */
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

/* Function for MATLAB Function: '<S3>/indi' */
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

/* Function for MATLAB Function: '<S3>/indi' */
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

/* Function for MATLAB Function: '<S3>/indi' */
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

/* Function for MATLAB Function: '<S3>/indi' */
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

/* Function for MATLAB Function: '<S3>/indi' */
void PosDirectControlModelClass::PosDirectControl_xscal(real_T a, real_T x[16],
  int32_T ix0)
{
  int32_T k;
  for (k = ix0; k <= ix0 + 3; k++) {
    x[k - 1] *= a;
  }
}

/* Function for MATLAB Function: '<S3>/indi' */
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

/* Function for MATLAB Function: '<S3>/indi' */
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

/* Function for MATLAB Function: '<S3>/indi' */
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

/* Function for MATLAB Function: '<S3>/indi' */
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
  real_T rtb_vel[3];
  real_T rtb_DiscreteStateSpace3[4];
  real_T rtb_DiscreteStateSpace4[3];
  real_T rtb_Saturation4[4];
  real_T rtb_Normalization[3];
  real_T rtb_h[3];
  real_T rtb_U_a[4];
  real_T rtb_w_e[4];
  real_T rtb_gain2;
  real_T h[3];
  int32_T beta;
  real_T nu[4];
  real_T Ucons[4];
  real_T G2[16];
  real_T G[16];
  real_T b_ddy0[4];
  real_T X[16];
  real_T V[16];
  int32_T b_r;
  real_T b_U[16];
  boolean_T c_p;
  int32_T br;
  int32_T ia;
  int32_T b_ic;
  real_T rtb_TSamp[6];
  real_T rtb_Saturation[3];
  real_T rtb_TSamp_o2[3];
  real_T rtb_TSamp_fy;
  real_T rtb_Saturation2;
  real_T rtb_TSamp_g;
  real_T rtb_Diff[6];
  real_T hdd_c_tmp[9];
  int32_T i;
  real_T tmp[9];
  real_T tmp_0[9];
  real_T tmp_1[3];
  real_T tmp_2[3];
  real_T nu_0[4];
  real_T rtb_TSamp_f;
  real_T rtb_w_idx_0;
  real_T rtb_w_idx_1;
  real_T rtb_w_idx_2;
  real_T rtb_w_idx_3;
  real_T rtb_CastToDouble2_idx_0;
  real_T rtb_CastToDouble2_idx_1;
  real_T y;
  real_T y_0;
  real_T tmp_3;
  real_T tmp_4;
  real_T tmp_5;
  real_T tmp_6;
  real_T hdd_c_tmp_tmp;
  real_T hdd_c_tmp_tmp_0;
  real_T hdd_c_tmp_tmp_1;
  int32_T tmp_7;

  /* MATLAB Function: '<S3>/unwrap2pi' incorporates:
   *  DataTypeConversion: '<Root>/Cast To Double2'
   *  Inport: '<Root>/att'
   */
  /* :  psi0 = att(3); */
  /* :  if isempty(psi_last) */
  if (!PosDirectControl_DW.psi_last_not_empty) {
    /* :  psi_last = psi0; */
    PosDirectControl_DW.psi_last = PosDirectControl_U.att[2];
    PosDirectControl_DW.psi_last_not_empty = true;
  }

  /* :  if isempty(N) */
  /* :  if (psi0-psi_last)>1.9*pi */
  rtb_w_idx_2 = PosDirectControl_U.att[2] - PosDirectControl_DW.psi_last;
  if (rtb_w_idx_2 > 5.9690260418206069) {
    /* :  N = N-1; */
    PosDirectControl_DW.N--;
  } else {
    if (rtb_w_idx_2 < -5.9690260418206069) {
      /* :  elseif (psi0-psi_last)< -1.9*pi */
      /* :  N = N+1; */
      PosDirectControl_DW.N++;
    }
  }

  /* :  psi_last = psi0; */
  PosDirectControl_DW.psi_last = PosDirectControl_U.att[2];

  /* :  att_out = att; */
  /* :  att_out(3) = psi0 + 2*N*pi; */
  rtb_VectorConcatenate[0] = PosDirectControl_U.att[0];

  /* DataTypeConversion: '<Root>/Cast To Double3' incorporates:
   *  Inport: '<Root>/rates'
   */
  rtb_VectorConcatenate[3] = PosDirectControl_U.rates[0];

  /* MATLAB Function: '<S3>/unwrap2pi' incorporates:
   *  DataTypeConversion: '<Root>/Cast To Double2'
   *  Inport: '<Root>/att'
   */
  rtb_VectorConcatenate[1] = PosDirectControl_U.att[1];

  /* DataTypeConversion: '<Root>/Cast To Double3' incorporates:
   *  Inport: '<Root>/rates'
   */
  rtb_VectorConcatenate[4] = PosDirectControl_U.rates[1];

  /* MATLAB Function: '<S3>/unwrap2pi' incorporates:
   *  DataTypeConversion: '<Root>/Cast To Double2'
   *  Inport: '<Root>/att'
   */
  rtb_VectorConcatenate[2] = PosDirectControl_U.att[2];

  /* DataTypeConversion: '<Root>/Cast To Double3' incorporates:
   *  Inport: '<Root>/rates'
   */
  rtb_VectorConcatenate[5] = PosDirectControl_U.rates[2];

  /* MATLAB Function: '<S3>/unwrap2pi' incorporates:
   *  DataTypeConversion: '<Root>/Cast To Double2'
   *  Inport: '<Root>/att'
   */
  rtb_VectorConcatenate[2] = 2.0 * PosDirectControl_DW.N * 3.1415926535897931 +
    PosDirectControl_U.att[2];

  /* DiscreteStateSpace: '<S3>/Discrete State-Space1' */
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
    /* SampleTimeMath: '<S9>/TSamp'
     *
     * About '<S9>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    rtb_TSamp_f = rtb_DiscreteStateSpace1[i] * 500.0;

    /* Sum: '<S9>/Diff' incorporates:
     *  UnitDelay: '<S9>/UD'
     */
    rtb_Diff[i] = rtb_TSamp_f - PosDirectControl_DW.UD_DSTATE[i];

    /* SampleTimeMath: '<S9>/TSamp'
     *
     * About '<S9>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    rtb_TSamp[i] = rtb_TSamp_f;
  }

  /* DiscreteStateSpace: '<S3>/Discrete State-Space' */
  {
    rtb_n_des_filtered[0] = (1.0)*PosDirectControl_DW.DiscreteStateSpace_DSTATE
      [0];
    rtb_n_des_filtered[1] = (1.0)*PosDirectControl_DW.DiscreteStateSpace_DSTATE
      [1];
    rtb_n_des_filtered[2] = (1.0)*PosDirectControl_DW.DiscreteStateSpace_DSTATE
      [2];
  }

  /* SampleTimeMath: '<S8>/TSamp'
   *
   * About '<S8>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp_f = rtb_n_des_filtered[0] * 500.0;

  /* Sum: '<S8>/Diff' incorporates:
   *  UnitDelay: '<S8>/UD'
   */
  rtb_TSamp_fy = rtb_TSamp_f - PosDirectControl_DW.UD_DSTATE_b[0];

  /* Saturate: '<S3>/Saturation' */
  if (rtb_TSamp_fy > 0.5) {
    y = 0.5;
    rtb_Saturation[0] = 0.5;
  } else if (rtb_TSamp_fy < -0.5) {
    y = -0.5;
    rtb_Saturation[0] = -0.5;
  } else {
    y = rtb_TSamp_fy;
    rtb_Saturation[0] = rtb_TSamp_fy;
  }

  /* SampleTimeMath: '<S7>/TSamp'
   *
   * About '<S7>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp_o2[0] = rtb_TSamp_fy * 500.0;

  /* DataTypeConversion: '<Root>/Cast To Double' incorporates:
   *  Inport: '<Root>/vel'
   */
  rtb_vel[0] = PosDirectControl_U.vel[0];

  /* SampleTimeMath: '<S8>/TSamp'
   *
   * About '<S8>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_CastToDouble2_idx_0 = rtb_TSamp_f;
  rtb_TSamp_f = rtb_n_des_filtered[1] * 500.0;

  /* Sum: '<S8>/Diff' incorporates:
   *  UnitDelay: '<S8>/UD'
   */
  rtb_TSamp_fy = rtb_TSamp_f - PosDirectControl_DW.UD_DSTATE_b[1];

  /* Saturate: '<S3>/Saturation' */
  if (rtb_TSamp_fy > 0.5) {
    y_0 = 0.5;
    rtb_Saturation[1] = 0.5;
  } else if (rtb_TSamp_fy < -0.5) {
    y_0 = -0.5;
    rtb_Saturation[1] = -0.5;
  } else {
    y_0 = rtb_TSamp_fy;
    rtb_Saturation[1] = rtb_TSamp_fy;
  }

  /* SampleTimeMath: '<S7>/TSamp'
   *
   * About '<S7>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp_o2[1] = rtb_TSamp_fy * 500.0;

  /* DataTypeConversion: '<Root>/Cast To Double' incorporates:
   *  Inport: '<Root>/vel'
   */
  rtb_vel[1] = PosDirectControl_U.vel[1];

  /* SampleTimeMath: '<S8>/TSamp'
   *
   * About '<S8>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_CastToDouble2_idx_1 = rtb_TSamp_f;
  rtb_TSamp_f = rtb_n_des_filtered[2] * 500.0;

  /* Sum: '<S8>/Diff' incorporates:
   *  UnitDelay: '<S8>/UD'
   */
  rtb_TSamp_fy = rtb_TSamp_f - PosDirectControl_DW.UD_DSTATE_b[2];

  /* Saturate: '<S3>/Saturation' */
  if (rtb_TSamp_fy > 0.5) {
    rtb_Saturation[2] = 0.5;
  } else if (rtb_TSamp_fy < -0.5) {
    rtb_Saturation[2] = -0.5;
  } else {
    rtb_Saturation[2] = rtb_TSamp_fy;
  }

  /* SampleTimeMath: '<S7>/TSamp'
   *
   * About '<S7>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp_o2[2] = rtb_TSamp_fy * 500.0;

  /* DataTypeConversion: '<Root>/Cast To Double' incorporates:
   *  Inport: '<Root>/vel'
   */
  rtb_vel[2] = PosDirectControl_U.vel[2];

  /* SampleTimeMath: '<S6>/TSamp' incorporates:
   *  DataTypeConversion: '<Root>/Cast To Double4'
   *  Inport: '<Root>/pos_sp'
   *
   * About '<S6>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp_fy = PosDirectControl_U.pos_sp[2] * 500.0;

  /* Sum: '<S6>/Diff' incorporates:
   *  UnitDelay: '<S6>/UD'
   */
  rtb_gain2 = rtb_TSamp_fy - PosDirectControl_DW.UD_DSTATE_g;

  /* Saturate: '<S3>/Saturation2' */
  if (rtb_gain2 > 10.0) {
    rtb_Saturation2 = 10.0;
  } else if (rtb_gain2 < -10.0) {
    rtb_Saturation2 = -10.0;
  } else {
    rtb_Saturation2 = rtb_gain2;
  }

  /* End of Saturate: '<S3>/Saturation2' */

  /* DiscreteStateSpace: '<S3>/Discrete State-Space2' */
  {
    rtb_gain2 = 1.0*PosDirectControl_DW.DiscreteStateSpace2_DSTATE;
  }

  /* SampleTimeMath: '<S5>/TSamp'
   *
   * About '<S5>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp_g = rtb_gain2 * 500.0;

  /* DiscreteStateSpace: '<S3>/Discrete State-Space3' */
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

  /* DiscreteStateSpace: '<S3>/Discrete State-Space4' */
  {
    rtb_DiscreteStateSpace4[0] = (1.0)*
      PosDirectControl_DW.DiscreteStateSpace4_DSTATE[0];
    rtb_DiscreteStateSpace4[1] = (1.0)*
      PosDirectControl_DW.DiscreteStateSpace4_DSTATE[1];
    rtb_DiscreteStateSpace4[2] = (1.0)*
      PosDirectControl_DW.DiscreteStateSpace4_DSTATE[2];
  }

  /* MATLAB Function: '<S3>/indi' incorporates:
   *  DataTypeConversion: '<Root>/Cast To Double1'
   *  DataTypeConversion: '<Root>/Cast To Double4'
   *  DataTypeConversion: '<Root>/Cast To Double5'
   *  Inport: '<Root>/fail_flag'
   *  Inport: '<Root>/pos'
   *  Inport: '<Root>/pos_sp'
   *  Inport: '<Root>/yaw_sp'
   *  Memory: '<S3>/Memory'
   *  Saturate: '<S3>/Saturation'
   *  Sum: '<S5>/Diff'
   *  UnitDelay: '<S5>/UD'
   */
  /* :  [U,y, eta1, nu1, ddy0, h, dU0] = control_DRF_indi(X,X0,X0_dot,n_des,nd,ndd,Z_ref,Vz_ref,Z,Vz,ddz0, U0,h0,r_ref,dU0,fail_flag, PosDirectControlParams); */
  /* 'control_DRF_indi:3' k = params.k; */
  /* 'control_DRF_indi:4' l = params.l; */
  /* 'control_DRF_indi:5' b = params.b; */
  /* 'control_DRF_indi:6' m = params.m; */
  /* 'control_DRF_indi:7' Ix = params.Ix; */
  /* 'control_DRF_indi:8' Iy = params.Iy; */
  /* 'control_DRF_indi:9' Iz = params.Iz; */
  /* 'control_DRF_indi:10' Ip = params.Ip; */
  /* 'control_DRF_indi:11' t = params.t; */
  /* 'control_DRF_indi:12' sr = params.rot_direction; */
  /* 'control_DRF_indi:14' phi = X(1); */
  /* 'control_DRF_indi:15' theta = X(2); */
  /* 'control_DRF_indi:16' psi = X(3); */
  /* 'control_DRF_indi:17' p = X(4); */
  /* 'control_DRF_indi:18' q = X(5); */
  /* 'control_DRF_indi:19' r = X(6); */
  /* 'control_DRF_indi:21' r_dot0 = X0_dot(6); */
  /* 'control_DRF_indi:22' q_dot0 = X0_dot(5); */
  /* 'control_DRF_indi:23' p_dot0 = X0_dot(4); */
  /* 'control_DRF_indi:25' phi0 = X0(1); */
  /* 'control_DRF_indi:25' theta0 = X0(2); */
  /* 'control_DRF_indi:25' psi0 = X0(3); */
  /* 'control_DRF_indi:26' p0 = X0(4); */
  /* 'control_DRF_indi:26' q0 = X0(5); */
  /* 'control_DRF_indi:26' r0 = X0(6); */
  /* 'control_DRF_indi:28' R_IB = [cos(psi)*cos(theta) , cos(psi)*sin(theta)*sin(phi)-sin(psi)*cos(phi), cos(psi)*sin(theta)*cos(phi)+sin(psi)*sin(phi); */
  /* 'control_DRF_indi:29'         sin(psi)*cos(theta) , sin(psi)*sin(theta)*sin(phi)+cos(psi)*cos(phi), sin(psi)*sin(theta)*cos(phi)-cos(psi)*sin(phi); */
  /* 'control_DRF_indi:30'         -sin(theta)          , cos(theta)*sin(phi)                          , cos(theta)*cos(phi)                          ]; */
  /* 'control_DRF_indi:32' h = R_IB\n_des; */
  rtb_w_idx_2 = std::cos(rtb_VectorConcatenate[2]);
  rtb_w_idx_0 = std::cos(rtb_VectorConcatenate[1]);
  tmp[0] = rtb_w_idx_2 * rtb_w_idx_0;
  rtb_w_idx_3 = std::sin(rtb_VectorConcatenate[1]);
  hdd_c_tmp_tmp = rtb_w_idx_2 * rtb_w_idx_3;
  rtb_w_idx_1 = std::cos(rtb_VectorConcatenate[0]);
  hdd_c_tmp_tmp_0 = std::sin(rtb_VectorConcatenate[2]);
  hdd_c_tmp_tmp_1 = std::sin(rtb_VectorConcatenate[0]);
  tmp[3] = hdd_c_tmp_tmp * hdd_c_tmp_tmp_1 - hdd_c_tmp_tmp_0 * rtb_w_idx_1;
  tmp[6] = hdd_c_tmp_tmp * rtb_w_idx_1 + hdd_c_tmp_tmp_0 * hdd_c_tmp_tmp_1;
  tmp[1] = hdd_c_tmp_tmp_0 * rtb_w_idx_0;
  hdd_c_tmp_tmp = hdd_c_tmp_tmp_0 * rtb_w_idx_3;
  tmp[4] = hdd_c_tmp_tmp * hdd_c_tmp_tmp_1 + rtb_w_idx_2 * rtb_w_idx_1;
  tmp[7] = hdd_c_tmp_tmp * rtb_w_idx_1 - rtb_w_idx_2 * hdd_c_tmp_tmp_1;
  tmp[2] = -rtb_w_idx_3;
  tmp[5] = rtb_w_idx_0 * hdd_c_tmp_tmp_1;
  tmp[8] = rtb_w_idx_0 * rtb_w_idx_1;
  PosDirectControl_mldivide(tmp, rtb_n_des_filtered, h);

  /* 'control_DRF_indi:33' h1 = h(1); */
  /* 'control_DRF_indi:33' h2 = h(2); */
  /* 'control_DRF_indi:33' h3 = h(3); */
  /* 'control_DRF_indi:35' nx = 0; */
  /* 'control_DRF_indi:36' ny = 0; */
  /* 'control_DRF_indi:46' if sr > 0 */
  if (PosDirectControlParams.rot_direction > 0.0) {
    /* 'control_DRF_indi:47' alpha = 1; */
    i = 1;

    /* 'control_DRF_indi:48' beta = 0; */
    beta = 0;
  } else {
    /* 'control_DRF_indi:49' else */
    /* 'control_DRF_indi:50' alpha = 0; */
    i = 0;

    /* 'control_DRF_indi:51' beta = 1; */
    beta = 1;
  }

  /* 'control_DRF_indi:54' y1 = alpha*(h1-nx)+beta*(h2-ny); */
  /* 'control_DRF_indi:55' dy1 = alpha*(-h3*q+h2*r+nd(1)) + beta*(h3*p-h1*r+nd(2)); */
  /* 'control_DRF_indi:57' y2 = beta*(h1-nx)-alpha*(h2-ny); */
  /* 'control_DRF_indi:58' dy2 = beta*(-h3*q+h2*r+nd(1)) - alpha*(h3*p-h1*r+nd(2)); */
  /* 'control_DRF_indi:60' kpz = params.pos_z_p_gain; */
  /* 'control_DRF_indi:61' kdz = params.pos_z_d_gain; */
  /* 'control_DRF_indi:63' kp = params.att_p_gain; */
  /* 'control_DRF_indi:64' kd = params.att_d_gain; */
  /* 'control_DRF_indi:66' kpr = params.yaw_d_gain; */
  /* 'control_DRF_indi:68' nu1 =  - kdz*(Vz-Vz_ref) - kpz*(Z-Z_ref) ; */
  /* 'control_DRF_indi:69' nu2 = -kp*y1 - kd*dy1; */
  /* 'control_DRF_indi:70' nu3 = -kp*y2 - kp*dy2; */
  /* 'control_DRF_indi:71' nu4 = -kpr*(r-r_ref); */
  /* 'control_DRF_indi:73' nu = [nu1; nu2; nu3; nu4]; */
  nu[0] = (rtb_vel[2] - rtb_Saturation2) * -PosDirectControlParams.pos_z_d_gain
    - ((real_T)PosDirectControl_U.pos[2] - PosDirectControl_U.pos_sp[2]) *
    PosDirectControlParams.pos_z_p_gain;
  rtb_w_idx_2 = (-h[2] * rtb_VectorConcatenate[4] + h[1] *
                 rtb_VectorConcatenate[5]) + y;
  rtb_w_idx_3 = (h[2] * rtb_VectorConcatenate[3] - h[0] * rtb_VectorConcatenate
                 [5]) + y_0;
  nu[1] = ((real_T)i * h[0] + (real_T)beta * h[1]) *
    -PosDirectControlParams.att_p_gain - (rtb_w_idx_2 * (real_T)i + rtb_w_idx_3 *
    (real_T)beta) * PosDirectControlParams.att_d_gain;
  nu[2] = ((real_T)beta * h[0] - (real_T)i * h[1]) *
    -PosDirectControlParams.att_p_gain - (rtb_w_idx_2 * (real_T)beta -
    rtb_w_idx_3 * (real_T)i) * PosDirectControlParams.att_p_gain;
  nu[3] = (rtb_VectorConcatenate[5] - PosDirectControl_U.yaw_sp) *
    -PosDirectControlParams.yaw_d_gain;

  /* 'control_DRF_indi:83' Ucons = sqrt(abs(U0)); */
  /* 'control_DRF_indi:84' Ucons(Ucons<500) = 500; */
  /* 'control_DRF_indi:85' G1beta = [-cos(theta)*cos(phi)*k/m, -cos(theta)*cos(phi)*k/m, -cos(theta)*cos(phi)*k/m, -cos(theta)*cos(phi)*k/m; */
  /* 'control_DRF_indi:86'      beta*h3*(b*k/Ix - sr*Ip*q0/Ix/Ucons(1)), beta*h3*(-b*k/Ix + sr*Ip*q0/Ix/Ucons(2)), beta*h3*(-b*k/Ix -sr*Ip*q0/Ix/Ucons(3)), beta*h3*(b*k/Ix + sr*Ip*q0/Ix/Ucons(4)); */
  /* 'control_DRF_indi:87'      beta*h3*(-l*k/Iy - sr*Ip*p0/Iy/Ucons(1)), beta*h3*(-l*k/Iy + sr*Ip*p0/Iy/Ucons(2)), beta*h3*(l*k/Iy - sr*Ip*p0/Iy/Ucons(3)), beta*h3*(l*k/Iy + sr*Ip*p0/Iy/Ucons(4)); */
  /* 'control_DRF_indi:88'      -sr*t/Iz, sr*t/Iz, -sr*t/Iz, sr*t/Iz]; */
  /* 'control_DRF_indi:90' G1alpha =  [zeros(1,4); */
  /* 'control_DRF_indi:91'             -alpha*h3*(l*k/Iy + sr*Ip*p0/Iy/Ucons(1)), alpha*h3*(-l*k/Iy + sr*Ip*p0/Iy/Ucons(2)), -alpha*h3*(-l*k/Iy + sr*Ip*p0/Iy/Ucons(3)), alpha*h3*(l*k/Iy + sr*Ip*p0/Iy/Ucons(4)); */
  /* 'control_DRF_indi:92'             alpha*h3*(-b*k/Ix + sr*Ip*q0/Ix/Ucons(1)), -alpha*h3*(-b*k/Ix + sr*Ip*q0/Ix/Ucons(2)), alpha*h3*(b*k/Ix + sr*Ip*q0/Ix/Ucons(3)), -alpha*h3*(b*k/Ix + sr*Ip*q0/Ix/Ucons(4)); */
  /* 'control_DRF_indi:93'             zeros(1,4)]; */
  /* 'control_DRF_indi:95' G1 = G1beta+G1alpha; */
  /* 'control_DRF_indi:97' G2 = params.freq*[zeros(3,4); */
  /* 'control_DRF_indi:98'                -sr*Ip/2/Ucons(1)/Iz, sr*Ip/2/Ucons(2)/Iz, -sr*Ip/2/Ucons(3)/Iz, sr*Ip/2/Ucons(4)/Iz]; */
  for (b_r = 0; b_r < 4; b_r++) {
    rtb_w_idx_3 = std::sqrt(std::abs(rtb_DiscreteStateSpace3[b_r]));
    if (rtb_w_idx_3 < 500.0) {
      rtb_w_idx_3 = 500.0;
    }

    rtb_w_idx_2 = PosDirectControlParams.freq * 0.0;
    ia = b_r << 2;
    G2[ia] = rtb_w_idx_2;
    G2[1 + ia] = rtb_w_idx_2;
    G2[2 + ia] = rtb_w_idx_2;
    Ucons[b_r] = rtb_w_idx_3;
  }

  rtb_w_idx_2 = -PosDirectControlParams.rot_direction *
    PosDirectControlParams.Ip / 2.0;
  G2[3] = rtb_w_idx_2 / Ucons[0] / PosDirectControlParams.Iz *
    PosDirectControlParams.freq;
  y_0 = PosDirectControlParams.rot_direction * PosDirectControlParams.Ip;
  rtb_w_idx_3 = y_0 / 2.0;
  G2[7] = rtb_w_idx_3 / Ucons[1] / PosDirectControlParams.Iz *
    PosDirectControlParams.freq;
  G2[11] = rtb_w_idx_2 / Ucons[2] / PosDirectControlParams.Iz *
    PosDirectControlParams.freq;
  G2[15] = rtb_w_idx_3 / Ucons[3] / PosDirectControlParams.Iz *
    PosDirectControlParams.freq;

  /* 'control_DRF_indi:100' G = (G1+G2); */
  rtb_w_idx_2 = -rtb_w_idx_0 * rtb_w_idx_1 * PosDirectControlParams.k /
    PosDirectControlParams.m;
  X[0] = rtb_w_idx_2;
  X[4] = rtb_w_idx_2;
  X[8] = rtb_w_idx_2;
  X[12] = rtb_w_idx_2;
  rtb_w_idx_2 = y_0 * rtb_DiscreteStateSpace1[4] / PosDirectControlParams.Ix;
  rtb_w_idx_0 = (real_T)beta * h[2];
  rtb_w_idx_3 = PosDirectControlParams.b * PosDirectControlParams.k /
    PosDirectControlParams.Ix;
  hdd_c_tmp_tmp = rtb_w_idx_2 / Ucons[0];
  X[1] = (rtb_w_idx_3 - hdd_c_tmp_tmp) * rtb_w_idx_0;
  rtb_w_idx_1 = -PosDirectControlParams.b * PosDirectControlParams.k /
    PosDirectControlParams.Ix;
  hdd_c_tmp_tmp_0 = rtb_w_idx_2 / Ucons[1] + rtb_w_idx_1;
  X[5] = hdd_c_tmp_tmp_0 * rtb_w_idx_0;
  hdd_c_tmp_tmp_1 = rtb_w_idx_2 / Ucons[2];
  X[9] = (rtb_w_idx_1 - hdd_c_tmp_tmp_1) * rtb_w_idx_0;
  rtb_w_idx_2 = rtb_w_idx_2 / Ucons[3] + rtb_w_idx_3;
  X[13] = rtb_w_idx_2 * rtb_w_idx_0;
  y_0 = y_0 * rtb_DiscreteStateSpace1[3] / PosDirectControlParams.Iy;
  rtb_Saturation2 = -PosDirectControlParams.l * PosDirectControlParams.k /
    PosDirectControlParams.Iy;
  y = y_0 / Ucons[0];
  X[2] = (rtb_Saturation2 - y) * rtb_w_idx_0;
  tmp_5 = y_0 / Ucons[1] + rtb_Saturation2;
  X[6] = tmp_5 * rtb_w_idx_0;
  tmp_3 = PosDirectControlParams.l * PosDirectControlParams.k /
    PosDirectControlParams.Iy;
  tmp_6 = y_0 / Ucons[2];
  X[10] = (tmp_3 - tmp_6) * rtb_w_idx_0;
  y_0 = y_0 / Ucons[3] + tmp_3;
  X[14] = y_0 * rtb_w_idx_0;
  rtb_w_idx_0 = -PosDirectControlParams.rot_direction * PosDirectControlParams.t
    / PosDirectControlParams.Iz;
  X[3] = rtb_w_idx_0;
  tmp_4 = PosDirectControlParams.rot_direction * PosDirectControlParams.t /
    PosDirectControlParams.Iz;
  X[7] = tmp_4;
  X[11] = rtb_w_idx_0;
  X[15] = tmp_4;
  rtb_w_idx_0 = -(real_T)i * h[2];
  b_U[1] = (y + tmp_3) * rtb_w_idx_0;
  y = (real_T)i * h[2];
  b_U[5] = tmp_5 * y;
  b_U[9] = (tmp_6 + rtb_Saturation2) * rtb_w_idx_0;
  b_U[13] = y_0 * y;
  b_U[2] = (hdd_c_tmp_tmp + rtb_w_idx_1) * y;
  b_U[6] = hdd_c_tmp_tmp_0 * rtb_w_idx_0;
  b_U[10] = (hdd_c_tmp_tmp_1 + rtb_w_idx_3) * y;
  b_U[14] = rtb_w_idx_2 * rtb_w_idx_0;
  b_U[0] = 0.0;
  b_U[3] = 0.0;
  b_U[4] = 0.0;
  b_U[7] = 0.0;
  b_U[8] = 0.0;
  b_U[11] = 0.0;
  b_U[12] = 0.0;
  b_U[15] = 0.0;
  for (b_r = 0; b_r < 16; b_r++) {
    G[b_r] = (X[b_r] + b_U[b_r]) + G2[b_r];
  }

  /* 'control_DRF_indi:101' eta1 = y2; */
  /* 'control_DRF_indi:105' Omega0 = [0 -r0  q0; */
  /* 'control_DRF_indi:106'          r0  0 -p0; */
  /* 'control_DRF_indi:107'         -q0  p0  0]; */
  /* 'control_DRF_indi:109' R_IB0 = [cos(psi0)*cos(theta0) , cos(psi0)*sin(theta0)*sin(phi0)-sin(psi0)*cos(phi0), cos(psi0)*sin(theta0)*cos(phi0)+sin(psi0)*sin(phi0); */
  /* 'control_DRF_indi:110'     sin(psi0)*cos(theta0) , sin(psi0)*sin(theta0)*sin(phi0)+cos(psi0)*cos(phi0), sin(psi0)*sin(theta0)*cos(phi0)-cos(psi0)*sin(phi0); */
  /* 'control_DRF_indi:111'     -sin(theta0)          , cos(theta0)*sin(phi0)                          , cos(theta0)*cos(phi0)                          ]; */
  /* 'control_DRF_indi:114' ddy01 = -beta*h0(2)*p0^2 - alpha*h0(1)*q0^2 - (alpha*h0(1)+beta*h0(2))*r0^2 + (beta*h0(1)+alpha*h0(2))*p0*q0 + alpha*h0(3)*p0*r0 + beta*h0(3)*q0*r0 + ... */
  /* 'control_DRF_indi:115'        beta*h0(3)*p_dot0 - alpha*h0(3)*q_dot0 + (alpha*h0(2)-beta*h0(1))*r_dot0; */
  /* 'control_DRF_indi:116' ddy02 = alpha*h0(2)*p0^2 - beta*h0(1)*q0^2 - (beta*h0(1)-alpha*h0(2))*r0^2 + (-alpha*h0(1)+beta*h0(2))*p0*q0 + beta*h0(3)*p0*r0  -alpha*h0(3)*q0*r0 + ... */
  /* 'control_DRF_indi:117'        -alpha*h0(3)*p_dot0 - beta*h0(3)*q_dot0 + (beta*h0(2)+alpha*h0(1))*r_dot0; */
  /* 'control_DRF_indi:119' hdd_c = -2*Omega0*R_IB0'*nd + R_IB0'*ndd; */
  rtb_w_idx_0 = std::cos(rtb_DiscreteStateSpace1[2]);
  rtb_w_idx_1 = std::cos(rtb_DiscreteStateSpace1[1]);
  hdd_c_tmp[0] = rtb_w_idx_0 * rtb_w_idx_1;
  rtb_w_idx_2 = std::sin(rtb_DiscreteStateSpace1[1]);
  rtb_w_idx_3 = rtb_w_idx_0 * rtb_w_idx_2;
  hdd_c_tmp_tmp = std::cos(rtb_DiscreteStateSpace1[0]);
  hdd_c_tmp_tmp_0 = std::sin(rtb_DiscreteStateSpace1[2]);
  hdd_c_tmp_tmp_1 = std::sin(rtb_DiscreteStateSpace1[0]);
  hdd_c_tmp[1] = rtb_w_idx_3 * hdd_c_tmp_tmp_1 - hdd_c_tmp_tmp_0 * hdd_c_tmp_tmp;
  hdd_c_tmp[2] = rtb_w_idx_3 * hdd_c_tmp_tmp + hdd_c_tmp_tmp_0 * hdd_c_tmp_tmp_1;
  hdd_c_tmp[3] = hdd_c_tmp_tmp_0 * rtb_w_idx_1;
  rtb_w_idx_3 = hdd_c_tmp_tmp_0 * rtb_w_idx_2;
  hdd_c_tmp[4] = rtb_w_idx_3 * hdd_c_tmp_tmp_1 + rtb_w_idx_0 * hdd_c_tmp_tmp;
  hdd_c_tmp[5] = rtb_w_idx_3 * hdd_c_tmp_tmp - rtb_w_idx_0 * hdd_c_tmp_tmp_1;
  hdd_c_tmp[6] = -rtb_w_idx_2;
  hdd_c_tmp[7] = rtb_w_idx_1 * hdd_c_tmp_tmp_1;
  hdd_c_tmp[8] = rtb_w_idx_1 * hdd_c_tmp_tmp;
  tmp[0] = -0.0;
  tmp[3] = -2.0 * -rtb_DiscreteStateSpace1[5];
  tmp[6] = -2.0 * rtb_DiscreteStateSpace1[4];
  tmp[1] = -2.0 * rtb_DiscreteStateSpace1[5];
  tmp[4] = -0.0;
  tmp[7] = -2.0 * -rtb_DiscreteStateSpace1[3];
  tmp[2] = -2.0 * -rtb_DiscreteStateSpace1[4];
  tmp[5] = -2.0 * rtb_DiscreteStateSpace1[3];
  tmp[8] = -0.0;
  for (b_r = 0; b_r < 3; b_r++) {
    /* Saturate: '<S3>/Saturation1' incorporates:
     *  Sum: '<S7>/Diff'
     *  UnitDelay: '<S7>/UD'
     */
    rtb_w_idx_0 = rtb_TSamp_o2[b_r] - PosDirectControl_DW.UD_DSTATE_br[b_r];
    if (rtb_w_idx_0 > 10.0) {
      tmp_1[b_r] = 10.0;
    } else if (rtb_w_idx_0 < -10.0) {
      tmp_1[b_r] = -10.0;
    } else {
      tmp_1[b_r] = rtb_w_idx_0;
    }

    /* End of Saturate: '<S3>/Saturation1' */
    tmp_2[b_r] = 0.0;
    for (ia = 0; ia < 3; ia++) {
      b_ic = b_r + 3 * ia;
      tmp_0[b_ic] = 0.0;
      tmp_7 = 3 * ia + b_r;
      tmp_0[b_ic] = tmp_0[tmp_7] + hdd_c_tmp[3 * ia] * tmp[b_r];
      tmp_0[b_ic] = hdd_c_tmp[3 * ia + 1] * tmp[b_r + 3] + tmp_0[tmp_7];
      tmp_0[b_ic] = hdd_c_tmp[3 * ia + 2] * tmp[b_r + 6] + tmp_0[tmp_7];
      tmp_2[b_r] += tmp_0[tmp_7] * rtb_Saturation[ia];
    }
  }

  for (b_r = 0; b_r < 3; b_r++) {
    rtb_Saturation[b_r] = tmp_2[b_r] + (hdd_c_tmp[b_r + 6] * tmp_1[2] +
      (hdd_c_tmp[b_r + 3] * tmp_1[1] + hdd_c_tmp[b_r] * tmp_1[0]));
  }

  /* 'control_DRF_indi:120' ddy01 = ddy01 + alpha*hdd_c(1) +  beta*hdd_c(2); */
  /* 'control_DRF_indi:121' ddy02 = ddy02 + beta*hdd_c(1) - alpha*hdd_c(2); */
  /* 'control_DRF_indi:123' ddy0 = [ddz0;ddy01;ddy02;r_dot0]; */
  b_ddy0[0] = rtb_TSamp_g - PosDirectControl_DW.UD_DSTATE_o;
  rtb_w_idx_0 = (real_T)i * rtb_DiscreteStateSpace4[0];
  rtb_w_idx_1 = (real_T)beta * rtb_DiscreteStateSpace4[2];
  rtb_w_idx_2 = (real_T)i * rtb_DiscreteStateSpace4[2];
  rtb_w_idx_3 = (real_T)i * rtb_DiscreteStateSpace4[1];
  hdd_c_tmp_tmp = (real_T)beta * rtb_DiscreteStateSpace4[0];
  hdd_c_tmp_tmp_0 = rtb_DiscreteStateSpace1[3] * rtb_DiscreteStateSpace1[3];
  hdd_c_tmp_tmp_1 = rtb_DiscreteStateSpace1[4] * rtb_DiscreteStateSpace1[4];
  y_0 = rtb_DiscreteStateSpace1[5] * rtb_DiscreteStateSpace1[5];
  rtb_Saturation2 = (real_T)beta * rtb_DiscreteStateSpace4[1];
  b_ddy0[1] = (((((((((-(real_T)beta * rtb_DiscreteStateSpace4[1] *
                       hdd_c_tmp_tmp_0 - rtb_w_idx_0 * hdd_c_tmp_tmp_1) -
                      (rtb_w_idx_0 + rtb_Saturation2) * y_0) + (hdd_c_tmp_tmp +
    rtb_w_idx_3) * rtb_DiscreteStateSpace1[3] * rtb_DiscreteStateSpace1[4]) +
                    rtb_w_idx_2 * rtb_DiscreteStateSpace1[3] *
                    rtb_DiscreteStateSpace1[5]) + rtb_w_idx_1 *
                   rtb_DiscreteStateSpace1[4] * rtb_DiscreteStateSpace1[5]) +
                  rtb_w_idx_1 * rtb_Diff[3]) - rtb_w_idx_2 * rtb_Diff[4]) +
                (rtb_w_idx_3 - hdd_c_tmp_tmp) * rtb_Diff[5]) + (real_T)i *
               rtb_Saturation[0]) + (real_T)beta * rtb_Saturation[1];
  b_ddy0[2] = (((((((((rtb_w_idx_3 * hdd_c_tmp_tmp_0 - hdd_c_tmp_tmp *
                       hdd_c_tmp_tmp_1) - (hdd_c_tmp_tmp - rtb_w_idx_3) * y_0) +
                     (-(real_T)i * rtb_DiscreteStateSpace4[0] + rtb_Saturation2)
                     * rtb_DiscreteStateSpace1[3] * rtb_DiscreteStateSpace1[4])
                    + rtb_w_idx_1 * rtb_DiscreteStateSpace1[3] *
                    rtb_DiscreteStateSpace1[5]) - rtb_w_idx_2 *
                   rtb_DiscreteStateSpace1[4] * rtb_DiscreteStateSpace1[5]) +
                  -(real_T)i * rtb_DiscreteStateSpace4[2] * rtb_Diff[3]) -
                 rtb_w_idx_1 * rtb_Diff[4]) + (rtb_Saturation2 + rtb_w_idx_0) *
                rtb_Diff[5]) + (real_T)beta * rtb_Saturation[0]) - (real_T)i *
    rtb_Saturation[1];
  b_ddy0[3] = rtb_Diff[5];

  /* 'control_DRF_indi:125' fail_id = [2, 4]; */
  /* 'control_DRF_indi:127' if fail_flag == 2 */
  if (PosDirectControl_U.fail_flag == 2U) {
    /* 'control_DRF_indi:129' G(:,fail_id) = zeros(4,length(fail_id)); */
    /* 'control_DRF_indi:130' ddy0(3:4) = zeros(2,1); */
    for (i = 0; i < 2; i++) {
      beta = (1 + (i << 1)) << 2;
      G[beta] = 0.0;
      G[1 + beta] = 0.0;
      G[2 + beta] = 0.0;
      G[3 + beta] = 0.0;
      b_ddy0[i + 2] = 0.0;
    }

    /* 'control_DRF_indi:131' G(3:4,:) = zeros(size(G(3:4,:))); */
    for (b_r = 0; b_r < 4; b_r++) {
      beta = b_r << 2;
      G[2 + beta] = 0.0;
      G[3 + beta] = 0.0;
    }

    /* 'control_DRF_indi:132' nu(3:4) = zeros(2,1); */
    nu[2] = 0.0;
    nu[3] = 0.0;
  }

  /* 'control_DRF_indi:134' if fail_flag == 1 */
  if (PosDirectControl_U.fail_flag == 1U) {
    /* 'control_DRF_indi:136' G(:,4) = zeros(4,length(4)); */
    G[12] = 0.0;
    G[13] = 0.0;
    G[14] = 0.0;

    /* 'control_DRF_indi:137' ddy0(4) = zeros(1); */
    b_ddy0[3] = 0.0;

    /* 'control_DRF_indi:138' G(4,:) = zeros(size(G(4,:))); */
    G[3] = 0.0;
    G[7] = 0.0;
    G[11] = 0.0;
    G[15] = 0.0;

    /* 'control_DRF_indi:139' nu(4) = zeros(1); */
    nu[3] = 0.0;
  }

  /* 'control_DRF_indi:160' dU = pinv(G)*(nu-ddy0+G2*dU0); */
  c_p = true;
  for (b_r = 0; b_r < 16; b_r++) {
    X[b_r] = 0.0;
    if (c_p && ((!rtIsInf(G[b_r])) && (!rtIsNaN(G[b_r])))) {
    } else {
      c_p = false;
    }
  }

  if (!c_p) {
    for (b_r = 0; b_r < 16; b_r++) {
      X[b_r] = (rtNaN);
    }
  } else {
    PosDirectControl_svd(G, b_U, Ucons, V);
    rtb_Saturation2 = std::abs(Ucons[0]);
    if ((!rtIsInf(rtb_Saturation2)) && (!rtIsNaN(rtb_Saturation2))) {
      if (rtb_Saturation2 <= 2.2250738585072014E-308) {
        rtb_Saturation2 = 4.94065645841247E-324;
      } else {
        frexp(rtb_Saturation2, &br);
        rtb_Saturation2 = std::ldexp(1.0, br - 53);
      }
    } else {
      rtb_Saturation2 = (rtNaN);
    }

    rtb_Saturation2 *= 4.0;
    b_r = -1;
    br = 0;
    while ((br < 4) && (Ucons[br] > rtb_Saturation2)) {
      b_r++;
      br++;
    }

    if (b_r + 1 > 0) {
      i = 0;
      for (br = 0; br <= b_r; br++) {
        rtb_Saturation2 = 1.0 / Ucons[br];
        for (beta = i; beta < i + 4; beta++) {
          V[beta] *= rtb_Saturation2;
        }

        i += 4;
      }

      for (i = 0; i < 4; i++) {
        X[i] = 0.0;
      }

      for (i = 4; i < 8; i++) {
        X[i] = 0.0;
      }

      for (i = 8; i < 12; i++) {
        X[i] = 0.0;
      }

      for (i = 12; i < 16; i++) {
        X[i] = 0.0;
      }

      beta = -1;
      br = b_r << 2;
      i = br + 1;
      for (b_r = 1; b_r <= i; b_r += 4) {
        ia = beta;
        for (b_ic = 0; b_ic < 4; b_ic++) {
          ia++;
          X[b_ic] += b_U[b_r - 1] * V[ia];
        }

        beta += 4;
      }

      beta = -1;
      i = br + 2;
      for (b_r = 2; b_r <= i; b_r += 4) {
        ia = beta;
        for (b_ic = 4; b_ic < 8; b_ic++) {
          ia++;
          X[b_ic] += b_U[b_r - 1] * V[ia];
        }

        beta += 4;
      }

      beta = -1;
      i = br + 3;
      for (b_r = 3; b_r <= i; b_r += 4) {
        ia = beta;
        for (b_ic = 8; b_ic < 12; b_ic++) {
          ia++;
          X[b_ic] += b_U[b_r - 1] * V[ia];
        }

        beta += 4;
      }

      beta = -1;
      i = br + 4;
      for (b_r = 4; b_r <= i; b_r += 4) {
        ia = beta;
        for (b_ic = 12; b_ic < 16; b_ic++) {
          ia++;
          X[b_ic] += b_U[b_r - 1] * V[ia];
        }

        beta += 4;
      }
    }
  }

  for (b_r = 0; b_r < 4; b_r++) {
    nu_0[b_r] = (((G2[b_r + 4] * PosDirectControl_DW.Memory_PreviousInput[1] +
                   G2[b_r] * PosDirectControl_DW.Memory_PreviousInput[0]) +
                  G2[b_r + 8] * PosDirectControl_DW.Memory_PreviousInput[2]) +
                 G2[b_r + 12] * PosDirectControl_DW.Memory_PreviousInput[3]) +
      (nu[b_r] - b_ddy0[b_r]);
  }

  /* 'control_DRF_indi:161' dU01 = dU; */
  /* 'control_DRF_indi:163' U = U0+dU; */
  for (i = 0; i < 4; i++) {
    rtb_w_idx_3 = X[i + 12] * nu_0[3] + (X[i + 8] * nu_0[2] + (X[i + 4] * nu_0[1]
      + X[i] * nu_0[0]));
    nu[i] = rtb_DiscreteStateSpace3[i] + rtb_w_idx_3;
    Ucons[i] = rtb_w_idx_3;
  }

  /* 'control_DRF_indi:164' if fail_flag == 1 */
  if (PosDirectControl_U.fail_flag == 1U) {
    /* 'control_DRF_indi:165' U(4) = 0; */
    nu[3] = 0.0;
  } else {
    if (PosDirectControl_U.fail_flag == 2U) {
      /* 'control_DRF_indi:166' elseif fail_flag == 2 */
      /* 'control_DRF_indi:167' U(fail_id) = 0; */
      nu[1] = 0.0;
      nu[3] = 0.0;
    }
  }

  rtb_h[0] = h[0];
  rtb_h[1] = h[1];
  rtb_h[2] = h[2];

  /* MATLAB Function: '<S3>/MATLAB Function1' incorporates:
   *  MATLAB Function: '<S3>/indi'
   */
  /* :  w = zeros(4,1); */
  /* :  w(1) = sqrt(abs(U(1)))*sign(U(1)); */
  if (nu[0] < 0.0) {
    rtb_w_idx_3 = -1.0;
  } else if (nu[0] > 0.0) {
    rtb_w_idx_3 = 1.0;
  } else if (nu[0] == 0.0) {
    rtb_w_idx_3 = 0.0;
  } else {
    rtb_w_idx_3 = (rtNaN);
  }

  rtb_w_idx_0 = std::sqrt(std::abs(nu[0])) * rtb_w_idx_3;

  /* :  w(2) = sqrt(abs(U(2)))*sign(U(2)); */
  if (nu[1] < 0.0) {
    rtb_w_idx_3 = -1.0;
  } else if (nu[1] > 0.0) {
    rtb_w_idx_3 = 1.0;
  } else if (nu[1] == 0.0) {
    rtb_w_idx_3 = 0.0;
  } else {
    rtb_w_idx_3 = (rtNaN);
  }

  rtb_w_idx_1 = std::sqrt(std::abs(nu[1])) * rtb_w_idx_3;

  /* :  w(3) = sqrt(abs(U(3)))*sign(U(3)); */
  if (nu[2] < 0.0) {
    rtb_w_idx_3 = -1.0;
  } else if (nu[2] > 0.0) {
    rtb_w_idx_3 = 1.0;
  } else if (nu[2] == 0.0) {
    rtb_w_idx_3 = 0.0;
  } else {
    rtb_w_idx_3 = (rtNaN);
  }

  rtb_w_idx_2 = std::sqrt(std::abs(nu[2])) * rtb_w_idx_3;

  /* :  w(4) = sqrt(abs(U(4)))*sign(U(4)); */
  if (nu[3] < 0.0) {
    rtb_w_idx_3 = -1.0;
  } else if (nu[3] > 0.0) {
    rtb_w_idx_3 = 1.0;
  } else if (nu[3] == 0.0) {
    rtb_w_idx_3 = 0.0;
  } else {
    rtb_w_idx_3 = (rtNaN);
  }

  rtb_w_idx_3 *= std::sqrt(std::abs(nu[3]));

  /* End of MATLAB Function: '<S3>/MATLAB Function1' */

  /* Saturate: '<S3>/Saturation4' */
  /* :  actuator_controls = w_sp_to_px4_actuator_controls(w_sp, par); */
  /* 'w_sp_to_px4_actuator_controls:6' w_min = par.w_min; */
  /* 'w_sp_to_px4_actuator_controls:7' w_max = par.w_max; */
  /* 'w_sp_to_px4_actuator_controls:10' actuator_controls = -1 + 2*(w_sp - w_min)./(w_max - w_min); */
  if (rtb_w_idx_0 > 1256.0) {
    rtb_Saturation4[0] = 1256.0;
  } else if (rtb_w_idx_0 < 0.0) {
    rtb_Saturation4[0] = 0.0;
  } else {
    rtb_Saturation4[0] = rtb_w_idx_0;
  }

  /* Outport: '<Root>/w_rotors' */
  PosDirectControl_Y.w_rotors[0] = rtb_Saturation4[0];

  /* Outport: '<Root>/actuators_control' incorporates:
   *  DataTypeConversion: '<Root>/Cast To Single'
   *  MATLAB Function: '<Root>/MATLAB Function2'
   */
  PosDirectControl_Y.actuators_control[0] = (real32_T)(2.0 * rtb_Saturation4[0] /
    1256.0 + -1.0);

  /* Saturate: '<S3>/Saturation4' */
  if (rtb_w_idx_1 > 1256.0) {
    rtb_Saturation4[1] = 1256.0;
  } else if (rtb_w_idx_1 < 0.0) {
    rtb_Saturation4[1] = 0.0;
  } else {
    rtb_Saturation4[1] = rtb_w_idx_1;
  }

  /* Outport: '<Root>/w_rotors' */
  PosDirectControl_Y.w_rotors[1] = rtb_Saturation4[1];

  /* Outport: '<Root>/actuators_control' incorporates:
   *  DataTypeConversion: '<Root>/Cast To Single'
   *  MATLAB Function: '<Root>/MATLAB Function2'
   */
  PosDirectControl_Y.actuators_control[1] = (real32_T)(2.0 * rtb_Saturation4[1] /
    1256.0 + -1.0);

  /* Saturate: '<S3>/Saturation4' */
  if (rtb_w_idx_2 > 1256.0) {
    rtb_Saturation4[2] = 1256.0;
  } else if (rtb_w_idx_2 < 0.0) {
    rtb_Saturation4[2] = 0.0;
  } else {
    rtb_Saturation4[2] = rtb_w_idx_2;
  }

  /* Outport: '<Root>/w_rotors' */
  PosDirectControl_Y.w_rotors[2] = rtb_Saturation4[2];

  /* Outport: '<Root>/actuators_control' incorporates:
   *  DataTypeConversion: '<Root>/Cast To Single'
   *  MATLAB Function: '<Root>/MATLAB Function2'
   */
  PosDirectControl_Y.actuators_control[2] = (real32_T)(2.0 * rtb_Saturation4[2] /
    1256.0 + -1.0);

  /* Saturate: '<S3>/Saturation4' */
  if (rtb_w_idx_3 > 1256.0) {
    rtb_Saturation4[3] = 1256.0;
  } else if (rtb_w_idx_3 < 0.0) {
    rtb_Saturation4[3] = 0.0;
  } else {
    rtb_Saturation4[3] = rtb_w_idx_3;
  }

  /* Outport: '<Root>/w_rotors' */
  PosDirectControl_Y.w_rotors[3] = rtb_Saturation4[3];

  /* Outport: '<Root>/actuators_control' incorporates:
   *  DataTypeConversion: '<Root>/Cast To Single'
   *  MATLAB Function: '<Root>/MATLAB Function2'
   */
  PosDirectControl_Y.actuators_control[3] = (real32_T)(2.0 * rtb_Saturation4[3] /
    1256.0 + -1.0);

  /* DiscreteStateSpace: '<S3>/ActuatorDynamics' */
  {
    rtb_w_e[0] = (1.0)*PosDirectControl_DW.ActuatorDynamics_DSTATE[0];
    rtb_w_e[1] = (1.0)*PosDirectControl_DW.ActuatorDynamics_DSTATE[1];
    rtb_w_e[2] = (1.0)*PosDirectControl_DW.ActuatorDynamics_DSTATE[2];
    rtb_w_e[3] = (1.0)*PosDirectControl_DW.ActuatorDynamics_DSTATE[3];
  }

  /* Switch: '<S3>/Switch' incorporates:
   *  Constant: '<S3>/rpm_feedback'
   *  DataTypeConversion: '<Root>/Cast To Double6'
   *  Gain: '<Root>/rpm2rads'
   *  Inport: '<Root>/esc_rpm'
   */
  if (PosDirectControlParams.rpm_feedback > 0) {
    rtb_w_idx_0 = 0.10471975511965977 * (real_T)PosDirectControl_U.esc_rpm[0];
    rtb_w_idx_1 = 0.10471975511965977 * (real_T)PosDirectControl_U.esc_rpm[1];
    rtb_w_idx_2 = 0.10471975511965977 * (real_T)PosDirectControl_U.esc_rpm[2];
    rtb_w_idx_3 = 0.10471975511965977 * (real_T)PosDirectControl_U.esc_rpm[3];
  } else {
    rtb_w_idx_0 = rtb_w_e[0];
    rtb_w_idx_1 = rtb_w_e[1];
    rtb_w_idx_2 = rtb_w_e[2];
    rtb_w_idx_3 = rtb_w_e[3];
  }

  /* End of Switch: '<S3>/Switch' */

  /* MATLAB Function: '<S3>/MATLAB Function' */
  /* :  U = zeros(4,1); */
  /* :  U(1) = w(1)^2; */
  rtb_U_a[0] = rtb_w_idx_0 * rtb_w_idx_0;

  /* :  U(2) = w(2)^2; */
  rtb_U_a[1] = rtb_w_idx_1 * rtb_w_idx_1;

  /* :  U(3) = w(3)^2; */
  rtb_U_a[2] = rtb_w_idx_2 * rtb_w_idx_2;

  /* :  U(4) = w(4)^2; */
  rtb_U_a[3] = rtb_w_idx_3 * rtb_w_idx_3;

  /* Gain: '<S3>/Pos_x' incorporates:
   *  DataTypeConversion: '<Root>/Cast To Double1'
   *  DataTypeConversion: '<Root>/Cast To Double4'
   *  Inport: '<Root>/pos'
   *  Inport: '<Root>/pos_sp'
   *  Sum: '<S3>/Sum5'
   */
  rtb_gain2 = ((real_T)PosDirectControl_U.pos_sp[0] - PosDirectControl_U.pos[0])
    * PosDirectControlParams.pos_x_p_gain;

  /* Sum: '<S3>/Sum1' */
  rtb_w_idx_0 = rtb_gain2 - rtb_vel[0];

  /* Gain: '<S3>/gain2' incorporates:
   *  DataTypeConversion: '<Root>/Cast To Double1'
   *  DataTypeConversion: '<Root>/Cast To Double4'
   *  Gain: '<S3>/gain1'
   *  Inport: '<Root>/pos'
   *  Inport: '<Root>/pos_sp'
   *  Sum: '<S3>/Sum1'
   *  Sum: '<S3>/Sum5'
   */
  rtb_gain2 = (((real_T)PosDirectControl_U.pos_sp[2] - PosDirectControl_U.pos[2])
               * 0.0 - rtb_vel[2]) * 0.0;

  /* Sum: '<S18>/Sum' incorporates:
   *  DataTypeConversion: '<Root>/Cast To Double1'
   *  DataTypeConversion: '<Root>/Cast To Double4'
   *  Gain: '<S3>/Pos_y'
   *  Gain: '<S3>/Vel_x'
   *  Gain: '<S3>/Vel_y'
   *  Inport: '<Root>/pos'
   *  Inport: '<Root>/pos_sp'
   *  Sum: '<S3>/Sum1'
   *  Sum: '<S3>/Sum5'
   */
  rtb_w_idx_0 *= PosDirectControlParams.pos_x_d_gain;
  rtb_w_idx_1 = (((real_T)PosDirectControl_U.pos_sp[1] - PosDirectControl_U.pos
                  [1]) * PosDirectControlParams.pos_x_p_gain - rtb_vel[1]) *
    PosDirectControlParams.pos_x_d_gain;

  /* S-Function (sdsp2norm2): '<S18>/Normalization' incorporates:
   *  Sum: '<S18>/Sum'
   */
  rtb_Saturation2 = 1.0 / (std::sqrt((rtb_w_idx_0 * rtb_w_idx_0 + rtb_w_idx_1 *
    rtb_w_idx_1) + (rtb_gain2 - 9.8124) * (rtb_gain2 - 9.8124)) + 1.0E-10);
  rtb_Normalization[0] = rtb_w_idx_0 * rtb_Saturation2;
  rtb_Normalization[1] = rtb_w_idx_1 * rtb_Saturation2;
  rtb_Normalization[2] = (rtb_gain2 - 9.8124) * rtb_Saturation2;

  /* Update for DiscreteStateSpace: '<S3>/Discrete State-Space1' */
  {
    real_T xnew[6];
    xnew[0] = (0.95)*PosDirectControl_DW.DiscreteStateSpace1_DSTATE[0];
    xnew[0] += (0.05)*rtb_VectorConcatenate[0];
    xnew[1] = (0.95)*PosDirectControl_DW.DiscreteStateSpace1_DSTATE[1];
    xnew[1] += (0.05)*rtb_VectorConcatenate[1];
    xnew[2] = (0.95)*PosDirectControl_DW.DiscreteStateSpace1_DSTATE[2];
    xnew[2] += (0.05)*rtb_VectorConcatenate[2];
    xnew[3] = (0.95)*PosDirectControl_DW.DiscreteStateSpace1_DSTATE[3];
    xnew[3] += (0.05)*rtb_VectorConcatenate[3];
    xnew[4] = (0.95)*PosDirectControl_DW.DiscreteStateSpace1_DSTATE[4];
    xnew[4] += (0.05)*rtb_VectorConcatenate[4];
    xnew[5] = (0.95)*PosDirectControl_DW.DiscreteStateSpace1_DSTATE[5];
    xnew[5] += (0.05)*rtb_VectorConcatenate[5];
    (void) memcpy(&PosDirectControl_DW.DiscreteStateSpace1_DSTATE[0], xnew,
                  sizeof(real_T)*6);
  }

  /* Update for UnitDelay: '<S9>/UD' */
  for (i = 0; i < 6; i++) {
    PosDirectControl_DW.UD_DSTATE[i] = rtb_TSamp[i];
  }

  /* End of Update for UnitDelay: '<S9>/UD' */

  /* Update for DiscreteStateSpace: '<S3>/Discrete State-Space' */
  {
    real_T xnew[3];
    xnew[0] = (0.95)*PosDirectControl_DW.DiscreteStateSpace_DSTATE[0];
    xnew[0] += (0.05)*rtb_Normalization[0];
    xnew[1] = (0.95)*PosDirectControl_DW.DiscreteStateSpace_DSTATE[1];
    xnew[1] += (0.05)*rtb_Normalization[1];
    xnew[2] = (0.95)*PosDirectControl_DW.DiscreteStateSpace_DSTATE[2];
    xnew[2] += (0.05)*rtb_Normalization[2];
    (void) memcpy(&PosDirectControl_DW.DiscreteStateSpace_DSTATE[0], xnew,
                  sizeof(real_T)*3);
  }

  /* Update for UnitDelay: '<S8>/UD' */
  PosDirectControl_DW.UD_DSTATE_b[0] = rtb_CastToDouble2_idx_0;

  /* Update for UnitDelay: '<S7>/UD' */
  PosDirectControl_DW.UD_DSTATE_br[0] = rtb_TSamp_o2[0];

  /* Update for UnitDelay: '<S8>/UD' */
  PosDirectControl_DW.UD_DSTATE_b[1] = rtb_CastToDouble2_idx_1;

  /* Update for UnitDelay: '<S7>/UD' */
  PosDirectControl_DW.UD_DSTATE_br[1] = rtb_TSamp_o2[1];

  /* Update for UnitDelay: '<S8>/UD' */
  PosDirectControl_DW.UD_DSTATE_b[2] = rtb_TSamp_f;

  /* Update for UnitDelay: '<S7>/UD' */
  PosDirectControl_DW.UD_DSTATE_br[2] = rtb_TSamp_o2[2];

  /* Update for UnitDelay: '<S6>/UD' */
  PosDirectControl_DW.UD_DSTATE_g = rtb_TSamp_fy;

  /* Update for DiscreteStateSpace: '<S3>/Discrete State-Space2' */
  {
    real_T xnew[1];
    xnew[0] = 0.95*PosDirectControl_DW.DiscreteStateSpace2_DSTATE;
    xnew[0] += 0.05*rtb_vel[2];
    (void) memcpy(&PosDirectControl_DW.DiscreteStateSpace2_DSTATE, xnew,
                  sizeof(real_T)*1);
  }

  /* Update for UnitDelay: '<S5>/UD' */
  PosDirectControl_DW.UD_DSTATE_o = rtb_TSamp_g;

  /* Update for DiscreteStateSpace: '<S3>/Discrete State-Space3' */
  {
    real_T xnew[4];
    xnew[0] = (0.95)*PosDirectControl_DW.DiscreteStateSpace3_DSTATE[0];
    xnew[0] += (0.05)*rtb_U_a[0];
    xnew[1] = (0.95)*PosDirectControl_DW.DiscreteStateSpace3_DSTATE[1];
    xnew[1] += (0.05)*rtb_U_a[1];
    xnew[2] = (0.95)*PosDirectControl_DW.DiscreteStateSpace3_DSTATE[2];
    xnew[2] += (0.05)*rtb_U_a[2];
    xnew[3] = (0.95)*PosDirectControl_DW.DiscreteStateSpace3_DSTATE[3];
    xnew[3] += (0.05)*rtb_U_a[3];
    (void) memcpy(&PosDirectControl_DW.DiscreteStateSpace3_DSTATE[0], xnew,
                  sizeof(real_T)*4);
  }

  /* Update for DiscreteStateSpace: '<S3>/Discrete State-Space4' */
  {
    real_T xnew[3];
    xnew[0] = (0.95)*PosDirectControl_DW.DiscreteStateSpace4_DSTATE[0];
    xnew[0] += (0.05)*rtb_h[0];
    xnew[1] = (0.95)*PosDirectControl_DW.DiscreteStateSpace4_DSTATE[1];
    xnew[1] += (0.05)*rtb_h[1];
    xnew[2] = (0.95)*PosDirectControl_DW.DiscreteStateSpace4_DSTATE[2];
    xnew[2] += (0.05)*rtb_h[2];
    (void) memcpy(&PosDirectControl_DW.DiscreteStateSpace4_DSTATE[0], xnew,
                  sizeof(real_T)*3);
  }

  /* Update for Memory: '<S3>/Memory' incorporates:
   *  MATLAB Function: '<S3>/indi'
   */
  PosDirectControl_DW.Memory_PreviousInput[0] = Ucons[0];
  PosDirectControl_DW.Memory_PreviousInput[1] = Ucons[1];
  PosDirectControl_DW.Memory_PreviousInput[2] = Ucons[2];
  PosDirectControl_DW.Memory_PreviousInput[3] = Ucons[3];

  /* Update for DiscreteStateSpace: '<S3>/ActuatorDynamics' */
  {
    real_T xnew[4];
    xnew[0] = (0.94)*PosDirectControl_DW.ActuatorDynamics_DSTATE[0];
    xnew[0] += (0.06)*rtb_Saturation4[0];
    xnew[1] = (0.94)*PosDirectControl_DW.ActuatorDynamics_DSTATE[1];
    xnew[1] += (0.06)*rtb_Saturation4[1];
    xnew[2] = (0.94)*PosDirectControl_DW.ActuatorDynamics_DSTATE[2];
    xnew[2] += (0.06)*rtb_Saturation4[2];
    xnew[3] = (0.94)*PosDirectControl_DW.ActuatorDynamics_DSTATE[3];
    xnew[3] += (0.06)*rtb_Saturation4[3];
    (void) memcpy(&PosDirectControl_DW.ActuatorDynamics_DSTATE[0], xnew,
                  sizeof(real_T)*4);
  }

  rate_scheduler((&PosDirectControl_M));
}

/* Model initialize function */
void PosDirectControlModelClass::initialize()
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)(&PosDirectControl_M), 0,
                sizeof(RT_MODEL_PosDirectControl_T));

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

    /* InitializeConditions for DiscreteStateSpace: '<S3>/Discrete State-Space1' */
    {
      int_T i1;
      real_T *dw_DSTATE = &PosDirectControl_DW.DiscreteStateSpace1_DSTATE[0];
      for (i1=0; i1 < 6; i1++) {
        dw_DSTATE[i1] = 0.0;
      }
    }

    /* InitializeConditions for UnitDelay: '<S9>/UD' */
    for (i = 0; i < 6; i++) {
      PosDirectControl_DW.UD_DSTATE[i] = 0.0;
    }

    /* End of InitializeConditions for UnitDelay: '<S9>/UD' */

    /* InitializeConditions for DiscreteStateSpace: '<S3>/Discrete State-Space' */
    PosDirectControl_DW.DiscreteStateSpace_DSTATE[0] = (0.0);
    PosDirectControl_DW.DiscreteStateSpace_DSTATE[1] = (0.0);
    PosDirectControl_DW.DiscreteStateSpace_DSTATE[2] = (-1.0);

    /* InitializeConditions for UnitDelay: '<S8>/UD' */
    PosDirectControl_DW.UD_DSTATE_b[0] = 0.0;

    /* InitializeConditions for UnitDelay: '<S7>/UD' */
    PosDirectControl_DW.UD_DSTATE_br[0] = 0.0;

    /* InitializeConditions for UnitDelay: '<S8>/UD' */
    PosDirectControl_DW.UD_DSTATE_b[1] = 0.0;

    /* InitializeConditions for UnitDelay: '<S7>/UD' */
    PosDirectControl_DW.UD_DSTATE_br[1] = 0.0;

    /* InitializeConditions for UnitDelay: '<S8>/UD' */
    PosDirectControl_DW.UD_DSTATE_b[2] = 0.0;

    /* InitializeConditions for UnitDelay: '<S7>/UD' */
    PosDirectControl_DW.UD_DSTATE_br[2] = 0.0;

    /* InitializeConditions for UnitDelay: '<S6>/UD' */
    PosDirectControl_DW.UD_DSTATE_g = 0.0;

    /* InitializeConditions for DiscreteStateSpace: '<S3>/Discrete State-Space2' */
    PosDirectControl_DW.DiscreteStateSpace2_DSTATE = 0.0;

    /* InitializeConditions for UnitDelay: '<S5>/UD' */
    PosDirectControl_DW.UD_DSTATE_o = 0.0;

    /* InitializeConditions for DiscreteStateSpace: '<S3>/Discrete State-Space3' */
    PosDirectControl_DW.DiscreteStateSpace3_DSTATE[0] = 0.0;
    PosDirectControl_DW.DiscreteStateSpace3_DSTATE[1] = 0.0;
    PosDirectControl_DW.DiscreteStateSpace3_DSTATE[2] = 0.0;
    PosDirectControl_DW.DiscreteStateSpace3_DSTATE[3] = 0.0;

    /* InitializeConditions for DiscreteStateSpace: '<S3>/Discrete State-Space4' */
    PosDirectControl_DW.DiscreteStateSpace4_DSTATE[0] = (0.0);
    PosDirectControl_DW.DiscreteStateSpace4_DSTATE[1] = (0.0);
    PosDirectControl_DW.DiscreteStateSpace4_DSTATE[2] = (0.0);

    /* InitializeConditions for Memory: '<S3>/Memory' */
    PosDirectControl_DW.Memory_PreviousInput[0] = 0.0;
    PosDirectControl_DW.Memory_PreviousInput[1] = 0.0;
    PosDirectControl_DW.Memory_PreviousInput[2] = 0.0;
    PosDirectControl_DW.Memory_PreviousInput[3] = 0.0;

    /* InitializeConditions for DiscreteStateSpace: '<S3>/ActuatorDynamics' */
    PosDirectControl_DW.ActuatorDynamics_DSTATE[0] = 0.0;
    PosDirectControl_DW.ActuatorDynamics_DSTATE[1] = 0.0;
    PosDirectControl_DW.ActuatorDynamics_DSTATE[2] = 0.0;
    PosDirectControl_DW.ActuatorDynamics_DSTATE[3] = 0.0;

    /* SystemInitialize for MATLAB Function: '<S3>/unwrap2pi' */
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
  /* Currently there is no constructor body generated.*/
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
