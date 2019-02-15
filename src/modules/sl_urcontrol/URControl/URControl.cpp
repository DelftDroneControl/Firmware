/*
 * URControl.cpp
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "URControl".
 *
 * Model version              : 1.745
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C++ source code generated on : Fri Feb 15 00:52:00 2019
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

  {
    0.0, 0.0, 0.0 }
  ,                                    /* M_uvr_des */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* M_uvr_set */
  0.0,                                 /* Ftot_set */

  {
    0.0, 0.0, 0.0, 0.0 }
  /* wRotorSet */
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
  ,                                    /* velB */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* pos */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* omega */

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
  1.0,
  0.52631578947368418,
  0.35087719298245612,

  { 0.8, 0.8, 0.8 },
  4.0,

  { 2.0, 2.0, 2.0 },

  { 1.0, 1.0, 1.0 },
  1.0,
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
  5.0,
  2.0,
  30.0,
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
  8.0,
  0.03,
  6.0,
  0.0,
  1.0,
  1200.0,
  300.0,

  { 2.74104, 2.74104, 2.74104, 2.74104 },

  { 0.171315, 0.171315, 0.171315, 0.171315 },
  0.05,
  10.0,
  2.0,

  { 50.0, 50.0, 5.0 },

  { 0.0, 0.0, 0.0 },

  { 1.0, 1.0, 0.01 },
  0.5,
  100.0,

  { 0.4, 0.4, 0.045 },
  10000.0,
  10000.0,
  100.0,
  2.0,
  0.0001,
  5.0
} ;                                    /* Variable: URControlParams
                                        * Referenced by:
                                        *   '<S1>/altitude control'
                                        *   '<S1>/position control'
                                        *   '<S1>/yaw rate control'
                                        *   '<S2>/Precession'
                                        *   '<S2>/attitude controller'
                                        *   '<S2>/yawRateControl'
                                        *   '<S4>/basic estimators'
                                        *   '<S5>/control allocator'
                                        */

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

/* Function for MATLAB Function: '<S2>/attitude controller' */
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

/* Function for MATLAB Function: '<S5>/control allocator' */
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

/* Function for MATLAB Function: '<S5>/control allocator' */
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

/* Function for MATLAB Function: '<S5>/control allocator' */
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

/* Function for MATLAB Function: '<S5>/control allocator' */
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

/* Function for MATLAB Function: '<S5>/control allocator' */
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

/* Function for MATLAB Function: '<S5>/control allocator' */
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
 * Function for MATLAB Function: '<S5>/control allocator'
 * function [x,y_state,iter,optimal] = controlAllocQPQuick(refStruct, FMax, FMin, gainStruct, y_state_init, par, URpar)
 */
void URControlModelClass::URControl_controlAllocQPQuick(real_T refStruct_MuRef,
  real_T refStruct_MvRef, real_T refStruct_MzRef, real_T refStruct_FtotRef,
  const real_T FMax[4], const real_T FMin[4], real_T gainStruct_MuGain, real_T
  gainStruct_MvGain, real_T gainStruct_FtotGain, real_T gainStruct_FGain, real_T
  gainStruct_MzGain, real_T y_state_init[4], const struct_mMxZUgiacmSPStEMWH3dnG
  *b_par, const URControlParamsType *URpar, real_T x[4], real_T *iter, boolean_T
  *optimal)
{
  real_T H[16];
  real_T b[8];
  boolean_T indices[8];
  int8_T A_eq_data[32];
  int8_T AT_eq_data[32];
  real_T xy_data[12];
  real_T constraintError[8];
  real_T count;
  int8_T f_data[8];
  int8_T g_data[8];
  int32_T trueCount;
  int32_T k;
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
  /* 'controlAllocQPQuick:69' solution = false; */
  *optimal = false;

  /* 'controlAllocQPQuick:70' iter = 0; */
  /* 'controlAllocQPQuick:71' for iter = 1:URpar.rate_maxIter */
  *iter = 1.0;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= (int32_T)URpar->rate_maxIter - 1)) {
    *iter = 1.0 + (real_T)k;

    /* 'controlAllocQPQuick:81' indices = [(y_state == 1), (y_state == -1)]; */
    indices[0] = (y_state_init[0] == 1.0);
    indices[4] = (y_state_init[0] == -1.0);
    indices[1] = (y_state_init[1] == 1.0);
    indices[5] = (y_state_init[1] == -1.0);
    indices[2] = (y_state_init[2] == 1.0);
    indices[6] = (y_state_init[2] == -1.0);
    indices[3] = (y_state_init[3] == 1.0);
    indices[7] = (y_state_init[3] == -1.0);

    /* 'controlAllocQPQuick:82' b_eq = b(indices); */
    /* 'controlAllocQPQuick:83' A_eq = A(indices,:); */
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

    /* 'controlAllocQPQuick:84' AT_eq = transpose(A_eq); */
    for (loop_ub = 0; loop_ub < f_size_idx_1; loop_ub++) {
      AT_eq_data_tmp = loop_ub << 2;
      AT_eq_data[AT_eq_data_tmp] = A_eq_data[loop_ub];
      AT_eq_data[1 + AT_eq_data_tmp] = A_eq_data[loop_ub + f_size_idx_1];
      AT_eq_data[2 + AT_eq_data_tmp] = A_eq_data[(f_size_idx_1 << 1) + loop_ub];
      AT_eq_data[3 + AT_eq_data_tmp] = A_eq_data[f_size_idx_1 * 3 + loop_ub];
    }

    /* 'controlAllocQPQuick:86' if isempty(A_eq) */
    if (f_size_idx_1 == 0) {
      /* 'controlAllocQPQuick:87' l1=[0,0]; */
      /* 'controlAllocQPQuick:88' l2=[0,0]; */
      l2_idx_0 = 0;
      l1_idx_1 = 0;
    } else {
      /* 'controlAllocQPQuick:89' else */
      /* 'controlAllocQPQuick:90' l1=size(AT_eq); */
      l1_idx_1 = (int8_T)f_size_idx_1;

      /* 'controlAllocQPQuick:91' l2=size(A_eq); */
      l2_idx_0 = (int8_T)f_size_idx_1;
    }

    /* 'controlAllocQPQuick:95' D = [H,AT_eq;A_eq,zeros(l2(1),l1(2))]; */
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

    /* 'controlAllocQPQuick:96' d = [-c;b_eq]; */
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

    /* 'controlAllocQPQuick:97' xy = D\d; */
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

    /* 'controlAllocQPQuick:98' x = xy(1:4); */
    x[0] = xy_data[0];
    x[1] = xy_data[1];
    x[2] = xy_data[2];
    x[3] = xy_data[3];

    /* 'controlAllocQPQuick:99' y = xy(5:length(xy)); */
    if (5 > xy_size) {
      trueCount = 0;
      xy_size = 0;
    } else {
      trueCount = 4;
    }

    /* 'controlAllocQPQuick:102' constraintError = A*x - b; */
    for (loop_ub = 0; loop_ub < 8; loop_ub++) {
      constraintError[loop_ub] = ((((real_T)A[loop_ub + 8] * x[1] + (real_T)
        A[loop_ub] * x[0]) + (real_T)A[loop_ub + 16] * x[2]) + (real_T)A[loop_ub
        + 24] * x[3]) - b[loop_ub];
    }

    /* 'controlAllocQPQuick:104' constraintOK = (max(constraintError) <= 0.001); */
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

    /* 'controlAllocQPQuick:105' yMultipOK = (isempty(y) || min(y) >= 0); */
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

    /* 'controlAllocQPQuick:107' if constraintOK && yMultipOK */
    if ((count <= 0.001) && empty_non_axis_sizes) {
      /* 'controlAllocQPQuick:108' solution = true; */
      *optimal = true;
      exitg1 = true;
    } else {
      /* 'controlAllocQPQuick:110' else */
      /* 'controlAllocQPQuick:111' if isempty(y) || min(y) >= 0.0 */
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
          /* 'controlAllocQPQuick:119' else */
          /* 'controlAllocQPQuick:121' [~,index] = min(y); */
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

          /* 'controlAllocQPQuick:121' ~ */
          /* 'controlAllocQPQuick:122' count = 0; */
          /* 'controlAllocQPQuick:123' for i=1:4 */
          /* 'controlAllocQPQuick:124' count = count + abs(y_state(i)); */
          count = std::abs(y_state_init[0]);

          /* 'controlAllocQPQuick:125' if count == index */
          if (count == idx) {
            /* 'controlAllocQPQuick:126' y_state(i) = 0; */
            y_state_init[0] = 0.0;
          }

          /* 'controlAllocQPQuick:124' count = count + abs(y_state(i)); */
          count += std::abs(y_state_init[1]);

          /* 'controlAllocQPQuick:125' if count == index */
          if (count == idx) {
            /* 'controlAllocQPQuick:126' y_state(i) = 0; */
            y_state_init[1] = 0.0;
          }

          /* 'controlAllocQPQuick:124' count = count + abs(y_state(i)); */
          count += std::abs(y_state_init[2]);

          /* 'controlAllocQPQuick:125' if count == index */
          if (count == idx) {
            /* 'controlAllocQPQuick:126' y_state(i) = 0; */
            y_state_init[2] = 0.0;
          }

          /* 'controlAllocQPQuick:124' count = count + abs(y_state(i)); */
          count += std::abs(y_state_init[3]);

          /* 'controlAllocQPQuick:125' if count == index */
          if (count == idx) {
            /* 'controlAllocQPQuick:126' y_state(i) = 0; */
            y_state_init[3] = 0.0;
          }
        }
      }

      if (guard1) {
        /* 'controlAllocQPQuick:113' [~,index] = max(constraintError); */
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

        /* 'controlAllocQPQuick:113' ~ */
        /* 'controlAllocQPQuick:114' if index < 5 */
        if (trueCount < 5) {
          /* 'controlAllocQPQuick:115' y_state(index) = 1; */
          y_state_init[trueCount - 1] = 1.0;
        } else {
          /* 'controlAllocQPQuick:116' else */
          /* 'controlAllocQPQuick:117' y_state(index-4) = -1; */
          y_state_init[trueCount - 5] = -1.0;
        }
      }

      k++;
    }
  }

  /* 'controlAllocQPQuick:135' optimal = solution; */
}

/* Model step function */
void URControlModelClass::step()
{
  /* local block i/o variables */
  real_T rtb_n_des[3];
  real_T rtb_DiscreteStateSpace[3];
  real_T R_IB[9];
  real_T FMax[4];
  real_T FMin[4];
  int32_T r1;
  int32_T r2;
  int32_T r3;
  real_T maxval;
  real_T a21;
  int32_T rtemp;
  real_T Iu;
  real_T Iv;
  real_T MuPrec;
  real_T uDot_max;
  static const int8_T b[3] = { 0, 0, -1 };

  real_T h[3];
  real_T rotVec3[3];
  real_T x[4];
  boolean_T optimal;
  real_T velTarget[3];
  real_T dummy_idx_0;
  real_T dummy_idx_1;
  real_T uv_des_idx_0;
  real_T errorVel_idx_0;
  real_T errorVel_idx_1;
  real_T wRotorSet_data_idx_2;
  real_T wRotorSet_data_idx_3;
  boolean_T tmp;

  /* DataTypeConversion: '<Root>/Data Type Conversion5' incorporates:
   *  Inport: '<Root>/rates'
   */
  /* :  [State, DAQ] = UREstimators(sensors, State, DAQ, fail_id, par, URControlParams); */
  /* 'UREstimators:3' state.acc = sensors.acc; */
  /* 'UREstimators:4' state.vel = sensors.vel; */
  /* 'UREstimators:5' state.velB = sensors.velB; */
  /* 'UREstimators:6' state.pos = sensors.pos; */
  /* 'UREstimators:7' state.omega = sensors.omega; */
  /* 'UREstimators:8' state.att = sensors.att; */
  rtb_DiscreteStateSpace[0] = URControl_U.rates[0];

  /* MATLAB Function: '<S4>/basic estimators' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion1'
   *  DataTypeConversion: '<Root>/Data Type Conversion2'
   *  DataTypeConversion: '<Root>/Data Type Conversion4'
   *  DataTypeConversion: '<Root>/Data Type Conversion6'
   *  Inport: '<Root>/accs'
   *  Inport: '<Root>/att'
   *  Inport: '<Root>/pos'
   *  Inport: '<Root>/vel'
   *  SignalConversion: '<S4>/BusConversion_InsertedFor_basic estimators_at_inport_0'
   */
  URControl_DW.State.acc[0] = URControl_U.accs[0];
  URControl_DW.State.vel[0] = URControl_U.vel[0];
  URControl_DW.State.velB[0] = 0.0;
  URControl_DW.State.pos[0] = URControl_U.pos[0];
  URControl_DW.State.omega[0] = rtb_DiscreteStateSpace[0];
  URControl_DW.State.att[0] = URControl_U.att[0];

  /* DataTypeConversion: '<Root>/Data Type Conversion5' incorporates:
   *  Inport: '<Root>/rates'
   */
  rtb_DiscreteStateSpace[1] = URControl_U.rates[1];

  /* MATLAB Function: '<S4>/basic estimators' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion1'
   *  DataTypeConversion: '<Root>/Data Type Conversion2'
   *  DataTypeConversion: '<Root>/Data Type Conversion4'
   *  DataTypeConversion: '<Root>/Data Type Conversion6'
   *  Inport: '<Root>/accs'
   *  Inport: '<Root>/att'
   *  Inport: '<Root>/pos'
   *  Inport: '<Root>/vel'
   *  SignalConversion: '<S4>/BusConversion_InsertedFor_basic estimators_at_inport_0'
   */
  URControl_DW.State.acc[1] = URControl_U.accs[1];
  URControl_DW.State.vel[1] = URControl_U.vel[1];
  URControl_DW.State.velB[1] = 0.0;
  URControl_DW.State.pos[1] = URControl_U.pos[1];
  URControl_DW.State.omega[1] = rtb_DiscreteStateSpace[1];
  URControl_DW.State.att[1] = URControl_U.att[1];

  /* DataTypeConversion: '<Root>/Data Type Conversion5' incorporates:
   *  Inport: '<Root>/rates'
   */
  rtb_DiscreteStateSpace[2] = URControl_U.rates[2];

  /* MATLAB Function: '<S4>/basic estimators' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion1'
   *  DataTypeConversion: '<Root>/Data Type Conversion10'
   *  DataTypeConversion: '<Root>/Data Type Conversion2'
   *  DataTypeConversion: '<Root>/Data Type Conversion4'
   *  DataTypeConversion: '<Root>/Data Type Conversion6'
   *  DataTypeConversion: '<Root>/Data Type Conversion7'
   *  Inport: '<Root>/accs'
   *  Inport: '<Root>/att'
   *  Inport: '<Root>/esc_rpm'
   *  Inport: '<Root>/fail_flag'
   *  Inport: '<Root>/pos'
   *  Inport: '<Root>/vel'
   *  MATLAB Function: '<S2>/Precession'
   *  SignalConversion: '<S4>/BusConversion_InsertedFor_basic estimators_at_inport_0'
   */
  URControl_DW.State.acc[2] = URControl_U.accs[2];
  URControl_DW.State.vel[2] = URControl_U.vel[2];
  URControl_DW.State.velB[2] = 0.0;
  URControl_DW.State.pos[2] = URControl_U.pos[2];
  URControl_DW.State.omega[2] = rtb_DiscreteStateSpace[2];
  URControl_DW.State.att[2] = URControl_U.att[2];

  /* 'UREstimators:9' state.wRotor = sensors.wRotor/30*pi; */
  URControl_DW.State.wRotor[0] = (real_T)URControl_U.esc_rpm[0] / 30.0 *
    3.1415926535897931;
  URControl_DW.State.wRotor[1] = (real_T)URControl_U.esc_rpm[1] / 30.0 *
    3.1415926535897931;
  URControl_DW.State.wRotor[2] = (real_T)URControl_U.esc_rpm[2] / 30.0 *
    3.1415926535897931;
  URControl_DW.State.wRotor[3] = (real_T)URControl_U.esc_rpm[3] / 30.0 *
    3.1415926535897931;

  /* 'UREstimators:11' phi = state.att(1); */
  /* 'UREstimators:12' theta = state.att(2); */
  /* 'UREstimators:13' psi = state.att(3); */
  /* 'UREstimators:16' R_IB = [cos(theta)*cos(psi)                             , cos(theta)*sin(psi)                               , -sin(theta); */
  /* 'UREstimators:17'         sin(phi)*sin(theta)*cos(psi)-cos(phi)*sin(psi)  , sin(phi)*sin(theta)*sin(psi)+cos(phi)*cos(psi)    , sin(phi)*cos(theta); */
  /* 'UREstimators:18'         cos(phi)*sin(theta)*cos(psi)+sin(phi)*sin(psi)  , cos(phi)*sin(theta)*sin(psi)-sin(phi)*cos(psi)    , cos(phi)*cos(theta)]; */
  MuPrec = std::cos((real_T)URControl_U.att[1]);
  a21 = std::cos((real_T)URControl_U.att[2]);
  R_IB[0] = MuPrec * a21;
  dummy_idx_0 = std::sin((real_T)URControl_U.att[2]);
  R_IB[3] = MuPrec * dummy_idx_0;
  Iu = std::sin((real_T)URControl_U.att[1]);
  R_IB[6] = -Iu;
  dummy_idx_1 = std::sin((real_T)URControl_U.att[0]);
  maxval = dummy_idx_1 * Iu;
  errorVel_idx_0 = std::cos((real_T)URControl_U.att[0]);
  R_IB[1] = maxval * a21 - errorVel_idx_0 * dummy_idx_0;
  R_IB[4] = maxval * dummy_idx_0 + errorVel_idx_0 * a21;
  R_IB[7] = dummy_idx_1 * MuPrec;
  Iu *= errorVel_idx_0;
  R_IB[2] = Iu * a21 + dummy_idx_1 * dummy_idx_0;
  R_IB[5] = Iu * dummy_idx_0 - dummy_idx_1 * a21;
  R_IB[8] = errorVel_idx_0 * MuPrec;

  /* 'UREstimators:20' state.n = (R_IB\[0;0;-1])'; */
  r1 = 0;
  r2 = 1;
  r3 = 2;
  maxval = std::abs(R_IB[0]);
  a21 = std::abs(R_IB[1]);
  if (a21 > maxval) {
    maxval = a21;
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
  maxval = (real_T)b[r2] - (real_T)b[r1] * R_IB[r2];
  errorVel_idx_0 = (((real_T)b[r3] - (real_T)b[r1] * R_IB[r3]) - R_IB[3 + r3] *
                    maxval) / R_IB[6 + r3];
  maxval -= R_IB[6 + r2] * errorVel_idx_0;
  maxval /= R_IB[3 + r2];
  URControl_DW.State.n[0] = (((real_T)b[r1] - R_IB[6 + r1] * errorVel_idx_0) -
    R_IB[3 + r1] * maxval) / R_IB[r1];
  URControl_DW.State.n[1] = maxval;
  URControl_DW.State.n[2] = errorVel_idx_0;

  /* 'UREstimators:24' rotAngle = 45/180*pi; */
  /* 'UREstimators:25' Rxu = [cos(rotAngle), -sin(rotAngle); ... */
  /* 'UREstimators:26'        sin(rotAngle), cos(rotAngle)]; */
  /* 'UREstimators:29' dummy = Rxu*[state.omega(1); state.omega(2)]; */
  /* 'UREstimators:30' uRot = dummy(1); */
  /* 'UREstimators:30' vRot = dummy(2); */
  /* 'UREstimators:32' state.omegaUV = [uRot,vRot,state.omega(3)]; */
  URControl_DW.State.omegaUV[0] = 0.70710678118654757 * rtb_DiscreteStateSpace[0]
    + -0.70710678118654746 * rtb_DiscreteStateSpace[1];
  URControl_DW.State.omegaUV[1] = 0.70710678118654746 * rtb_DiscreteStateSpace[0]
    + 0.70710678118654757 * rtb_DiscreteStateSpace[1];
  URControl_DW.State.omegaUV[2] = rtb_DiscreteStateSpace[2];

  /* 'UREstimators:35' FMax = URpar.envp_FMax; */
  /* 'UREstimators:36' FMin = URpar.envp_FMin; */
  FMax[0] = URControlParams.envp_FMax[0];
  FMin[0] = URControlParams.envp_FMin[0];
  FMax[1] = URControlParams.envp_FMax[1];
  FMin[1] = URControlParams.envp_FMin[1];
  FMax[2] = URControlParams.envp_FMax[2];
  FMin[2] = URControlParams.envp_FMin[2];
  FMax[3] = URControlParams.envp_FMax[3];
  FMin[3] = URControlParams.envp_FMin[3];

  /* 'UREstimators:37' if fail_id > 0 */
  if (URControl_U.fail_flag > 0) {
    /* 'UREstimators:38' FMax(fail_id) = par.fail_wRot^2*URpar.k0; */
    MuPrec = 0.0 * URControlParams.k0;
    FMax[URControl_U.fail_flag - 1] = MuPrec;

    /* 'UREstimators:39' FMin(fail_id) = par.fail_wRot^2*URpar.k0; */
    FMin[URControl_U.fail_flag - 1] = MuPrec;
  }

  /* 'UREstimators:41' state.FMax = FMax; */
  /* 'UREstimators:42' state.FMin = FMin; */
  URControl_DW.State.FMax[0] = FMax[0];
  URControl_DW.State.FMin[0] = FMin[0];
  URControl_DW.State.FMax[1] = FMax[1];
  URControl_DW.State.FMin[1] = FMin[1];
  URControl_DW.State.FMax[2] = FMax[2];
  URControl_DW.State.FMin[2] = FMin[2];
  URControl_DW.State.FMax[3] = FMax[3];
  URControl_DW.State.FMin[3] = FMin[3];

  /* 'UREstimators:44' state.fail_id = fail_id; */
  URControl_DW.State.fail_id = URControl_U.fail_flag;

  /* 'UREstimators:47' [uvDot_max, uvDot_min, uv_max, uv_min] = UREnvelopCalc(state, URpar); */
  /* 'UREnvelopCalc:3' s = sqrt(URpar.l^2 + URpar.b^2); */
  dummy_idx_0 = std::sqrt(URControlParams.l * URControlParams.l +
    URControlParams.b * URControlParams.b);

  /* 'UREnvelopCalc:4' r = state.omega(3); */
  /* 'UREnvelopCalc:7' Mu_max = (-state.FMin(2) + state.FMax(4))*s; */
  /* 'UREnvelopCalc:8' Mu_min = (-state.FMax(2) + state.FMin(4))*s; */
  /* 'UREnvelopCalc:9' Mv_max = (state.FMax(1) - state.FMin(3))*s; */
  /* 'UREnvelopCalc:10' Mv_min = (state.FMin(1) - state.FMax(3))*s; */
  /* 'UREnvelopCalc:13' Iu = sqrt(URpar.Ix^2 + URpar.Iy^2); */
  a21 = std::sqrt(URControlParams.Ix * URControlParams.Ix + URControlParams.Iy *
                  URControlParams.Iy);

  /* 'UREnvelopCalc:14' Iv = sqrt(URpar.Ix^2 + URpar.Iy^2); */
  /* 'UREnvelopCalc:17' MuPrec = state.omegaUV(2)*r*(Iv - URpar.Iz); */
  MuPrec = URControl_DW.State.omegaUV[1] * rtb_DiscreteStateSpace[2] * (a21 -
    URControlParams.Iz);

  /* 'UREnvelopCalc:18' MvPrec = state.omegaUV(1)*r*(URpar.Iz - Iu); */
  maxval = URControl_DW.State.omegaUV[0] * rtb_DiscreteStateSpace[2] *
    (URControlParams.Iz - a21);

  /* 'UREnvelopCalc:21' uDot_max = (MuPrec + Mu_max)/Iu; */
  uDot_max = ((-FMin[1] + FMax[3]) * dummy_idx_0 + MuPrec) / a21;

  /* 'UREnvelopCalc:22' uDot_min = (MuPrec + Mu_min)/Iu; */
  MuPrec = ((-FMax[1] + FMin[3]) * dummy_idx_0 + MuPrec) / a21;

  /* 'UREnvelopCalc:24' vDot_max = (MvPrec + Mv_max)/Iv; */
  Iu = ((FMax[0] - FMin[2]) * dummy_idx_0 + maxval) / a21;

  /* 'UREnvelopCalc:25' vDot_min = (MvPrec + Mv_min)/Iv; */
  a21 = ((FMin[0] - FMax[2]) * dummy_idx_0 + maxval) / a21;

  /* 'UREnvelopCalc:28' dt = URpar.envp_timeHorz; */
  /* 'UREnvelopCalc:30' u_max = state.omegaUV(1) + max(uDot_max,URpar.envp_minDeviation)*dt; */
  /* 'UREnvelopCalc:31' u_min = state.omegaUV(1) + min(uDot_min,-URpar.envp_minDeviation)*dt; */
  /* 'UREnvelopCalc:33' v_max = state.omegaUV(2) + max(vDot_max,URpar.envp_minDeviation)*dt; */
  /* 'UREnvelopCalc:34' v_min = state.omegaUV(2) + min(vDot_min,-URpar.envp_minDeviation)*dt; */
  /* 'UREnvelopCalc:37' uvDot_max = [uDot_max; vDot_max]; */
  /* 'UREnvelopCalc:38' uvDot_min = [uDot_min; vDot_min]; */
  /* 'UREnvelopCalc:39' uv_min = [u_min; v_min]; */
  /* 'UREnvelopCalc:40' uv_max = [u_max; v_max]; */
  /* 'UREstimators:48' state.uvDot_max = uvDot_max; */
  URControl_DW.State.uvDot_max[0] = uDot_max;
  URControl_DW.State.uvDot_max[1] = Iu;

  /* 'UREstimators:49' state.uvDot_min = uvDot_min; */
  URControl_DW.State.uvDot_min[0] = MuPrec;
  URControl_DW.State.uvDot_min[1] = a21;

  /* 'UREstimators:50' state.uv_max = uv_max; */
  optimal = rtIsNaN(URControlParams.envp_minDeviation);
  if ((uDot_max > URControlParams.envp_minDeviation) || optimal) {
    dummy_idx_1 = uDot_max;
  } else {
    dummy_idx_1 = URControlParams.envp_minDeviation;
  }

  URControl_DW.State.uv_max[0] = dummy_idx_1 * URControlParams.envp_timeHorz +
    URControl_DW.State.omegaUV[0];
  if ((Iu > URControlParams.envp_minDeviation) || optimal) {
    dummy_idx_1 = Iu;
  } else {
    dummy_idx_1 = URControlParams.envp_minDeviation;
  }

  URControl_DW.State.uv_max[1] = dummy_idx_1 * URControlParams.envp_timeHorz +
    URControl_DW.State.omegaUV[1];

  /* 'UREstimators:51' state.uv_min = uv_min; */
  tmp = rtIsNaN(-URControlParams.envp_minDeviation);
  if ((MuPrec < -URControlParams.envp_minDeviation) || tmp) {
    maxval = MuPrec;
  } else {
    maxval = -URControlParams.envp_minDeviation;
  }

  URControl_DW.State.uv_min[0] = maxval * URControlParams.envp_timeHorz +
    URControl_DW.State.omegaUV[0];
  if ((a21 < -URControlParams.envp_minDeviation) || tmp) {
    dummy_idx_1 = a21;
  } else {
    dummy_idx_1 = -URControlParams.envp_minDeviation;
  }

  URControl_DW.State.uv_min[1] = dummy_idx_1 * URControlParams.envp_timeHorz +
    URControl_DW.State.omegaUV[1];

  /* 'UREstimators:54' daq.omegaUV = state.omegaUV; */
  URControl_DW.DAQ.omegaUV[0] = URControl_DW.State.omegaUV[0];
  URControl_DW.DAQ.omegaUV[1] = URControl_DW.State.omegaUV[1];
  URControl_DW.DAQ.omegaUV[2] = URControl_DW.State.omegaUV[2];

  /* 'UREstimators:55' daq.FMax = state.FMax; */
  /* 'UREstimators:56' daq.FMin = state.FMin; */
  URControl_DW.DAQ.FMax[0] = FMax[0];
  URControl_DW.DAQ.FMin[0] = FMin[0];
  URControl_DW.DAQ.FMax[1] = FMax[1];
  URControl_DW.DAQ.FMin[1] = FMin[1];
  URControl_DW.DAQ.FMax[2] = FMax[2];
  URControl_DW.DAQ.FMin[2] = FMin[2];
  URControl_DW.DAQ.FMax[3] = FMax[3];
  URControl_DW.DAQ.FMin[3] = FMin[3];

  /* 'UREstimators:57' daq.uvDot_max = state.uvDot_max; */
  URControl_DW.DAQ.uvDot_max[0] = uDot_max;
  URControl_DW.DAQ.uvDot_max[1] = Iu;

  /* 'UREstimators:58' daq.uvDot_min = state.uvDot_min; */
  URControl_DW.DAQ.uvDot_min[0] = MuPrec;
  URControl_DW.DAQ.uvDot_min[1] = a21;

  /* 'UREstimators:59' daq.uv_max = state.uv_max; */
  if ((!(uDot_max > URControlParams.envp_minDeviation)) && (!optimal)) {
    uDot_max = URControlParams.envp_minDeviation;
  }

  URControl_DW.DAQ.uv_max[0] = uDot_max * URControlParams.envp_timeHorz +
    URControl_DW.State.omegaUV[0];
  if ((!(Iu > URControlParams.envp_minDeviation)) && (!optimal)) {
    Iu = URControlParams.envp_minDeviation;
  }

  URControl_DW.DAQ.uv_max[1] = Iu * URControlParams.envp_timeHorz +
    URControl_DW.State.omegaUV[1];

  /* 'UREstimators:60' daq.uv_min = state.uv_min; */
  if ((!(MuPrec < -URControlParams.envp_minDeviation)) && (!tmp)) {
    MuPrec = -URControlParams.envp_minDeviation;
  }

  URControl_DW.DAQ.uv_min[0] = MuPrec * URControlParams.envp_timeHorz +
    URControl_DW.State.omegaUV[0];
  if ((!(a21 < -URControlParams.envp_minDeviation)) && (!tmp)) {
    a21 = -URControlParams.envp_minDeviation;
  }

  URControl_DW.DAQ.uv_min[1] = a21 * URControlParams.envp_timeHorz +
    URControl_DW.State.omegaUV[1];

  /* MATLAB Function: '<S2>/Precession' incorporates:
   *  MATLAB Function: '<S4>/basic estimators'
   */
  /* :  stateOut = State; */
  /* :  [uv_prec, DAQ] = URGenPrecession(state, DAQ, par, URControlParams); */
  /* 'URGenPrecession:3' s = sqrt(URpar.l^2 + URpar.b^2); */
  /* 'URGenPrecession:4' r = state.omega(3); */
  /* 'URGenPrecession:7' Mu_max = (-state.FMin(2) + state.FMax(4))*s; */
  MuPrec = (-URControl_DW.State.FMin[1] + URControl_DW.State.FMax[3]) *
    dummy_idx_0;

  /* 'URGenPrecession:8' Mu_min = (-state.FMax(2) + state.FMin(4))*s; */
  maxval = (-URControl_DW.State.FMax[1] + URControl_DW.State.FMin[3]) *
    dummy_idx_0;

  /* 'URGenPrecession:9' Mv_max = (state.FMax(1) - state.FMin(3))*s; */
  uDot_max = (URControl_DW.State.FMax[0] - URControl_DW.State.FMin[2]) *
    dummy_idx_0;

  /* 'URGenPrecession:10' Mv_min = (state.FMin(1) - state.FMax(3))*s; */
  /* 'URGenPrecession:12' MMargin = URpar.attitude_MMargin; */
  /* 'URGenPrecession:15' if Mu_max < MMargin */
  if (MuPrec < URControlParams.attitude_MMargin) {
    /* 'URGenPrecession:16' MuPrec = MMargin - Mu_max; */
    MuPrec = URControlParams.attitude_MMargin - MuPrec;
  } else if (maxval > -URControlParams.attitude_MMargin) {
    /* 'URGenPrecession:17' elseif Mu_min > -MMargin */
    /* 'URGenPrecession:18' MuPrec = -MMargin - Mu_min; */
    MuPrec = -URControlParams.attitude_MMargin - maxval;
  } else {
    /* 'URGenPrecession:19' else */
    /* 'URGenPrecession:20' MuPrec = 0; */
    MuPrec = 0.0;
  }

  /* 'URGenPrecession:24' if Mv_max < MMargin */
  if (uDot_max < URControlParams.attitude_MMargin) {
    /* 'URGenPrecession:25' MvPrec = MMargin - Mv_max; */
    maxval = URControlParams.attitude_MMargin - uDot_max;
  } else if (maxval > -URControlParams.attitude_MMargin) {
    /* 'URGenPrecession:26' elseif Mu_min > -MMargin */
    /* 'URGenPrecession:27' MvPrec = -MMargin - Mv_min; */
    maxval = -URControlParams.attitude_MMargin - (URControl_DW.State.FMin[0] -
      URControl_DW.State.FMax[2]) * dummy_idx_0;
  } else {
    /* 'URGenPrecession:28' else */
    /* 'URGenPrecession:29' MvPrec = 0; */
    maxval = 0.0;
  }

  /* 'URGenPrecession:32' Iu = sqrt(URpar.Ix^2 + URpar.Iy^2); */
  /* 'URGenPrecession:33' Iv = sqrt(URpar.Ix^2 + URpar.Iy^2); */
  /* 'URGenPrecession:38' if abs(r) < URpar.attitude_yawThreshold */
  errorVel_idx_0 = std::abs(URControl_DW.State.omega[2]);
  if (errorVel_idx_0 < URControlParams.attitude_yawThreshold) {
    /* 'URGenPrecession:39' rTemp = sign(r)*URpar.attitude_yawThreshold; */
    if (URControl_DW.State.omega[2] < 0.0) {
      uv_des_idx_0 = -1.0;
    } else if (URControl_DW.State.omega[2] > 0.0) {
      uv_des_idx_0 = 1.0;
    } else if (URControl_DW.State.omega[2] == 0.0) {
      uv_des_idx_0 = 0.0;
    } else {
      uv_des_idx_0 = (rtNaN);
    }

    uDot_max = uv_des_idx_0 * URControlParams.attitude_yawThreshold;

    /* 'URGenPrecession:40' gain = 1 - (URpar.attitude_yawThreshold - abs(r))/URpar.attitude_yawThreshold; */
    /* 'URGenPrecession:41' gain = max(min(gain,1),0); */
    Iv = 1.0 - (URControlParams.attitude_yawThreshold - errorVel_idx_0) /
      URControlParams.attitude_yawThreshold;
    if (!(Iv < 1.0)) {
      Iv = 1.0;
    }

    if (!(Iv > 0.0)) {
      Iv = 0.0;
    }

    /* 'URGenPrecession:42' u_prec = (MvPrec/(rTemp*(URpar.Iz - Iu)))*gain; */
    a21 = maxval / ((URControlParams.Iz - std::sqrt(URControlParams.Ix *
      URControlParams.Ix + URControlParams.Iy * URControlParams.Iy)) * uDot_max)
      * Iv;

    /* 'URGenPrecession:43' v_prec = (MuPrec/(rTemp*(Iv - URpar.Iz)))*gain; */
    MuPrec = MuPrec / ((std::sqrt(URControlParams.Ix * URControlParams.Ix +
      URControlParams.Iy * URControlParams.Iy) - URControlParams.Iz) * uDot_max)
      * Iv;
  } else {
    /* 'URGenPrecession:44' else */
    /* 'URGenPrecession:45' u_prec = MvPrec/(r*(URpar.Iz - Iu)); */
    a21 = maxval / ((URControlParams.Iz - std::sqrt(URControlParams.Ix *
      URControlParams.Ix + URControlParams.Iy * URControlParams.Iy)) *
                    URControl_DW.State.omega[2]);

    /* 'URGenPrecession:46' v_prec = MuPrec/(r*(Iv - URpar.Iz)); */
    MuPrec /= (std::sqrt(URControlParams.Ix * URControlParams.Ix +
                         URControlParams.Iy * URControlParams.Iy) -
               URControlParams.Iz) * URControl_DW.State.omega[2];
  }

  /* 'URGenPrecession:49' u_prec = max(min(u_prec,URpar.attitude_maxPrecSpeed),-URpar.attitude_maxPrecSpeed); */
  /* 'URGenPrecession:50' v_prec = max(min(v_prec,URpar.attitude_maxPrecSpeed),-URpar.attitude_maxPrecSpeed); */
  /* 'URGenPrecession:52' uv_prec = [u_prec; v_prec]; */
  optimal = rtIsNaN(URControlParams.attitude_maxPrecSpeed);
  if ((!(a21 < URControlParams.attitude_maxPrecSpeed)) && (!optimal)) {
    a21 = URControlParams.attitude_maxPrecSpeed;
  }

  tmp = rtIsNaN(-URControlParams.attitude_maxPrecSpeed);
  if ((a21 > -URControlParams.attitude_maxPrecSpeed) || tmp) {
    dummy_idx_0 = a21;
  } else {
    dummy_idx_0 = -URControlParams.attitude_maxPrecSpeed;
  }

  if ((!(MuPrec < URControlParams.attitude_maxPrecSpeed)) && (!optimal)) {
    MuPrec = URControlParams.attitude_maxPrecSpeed;
  }

  if ((MuPrec > -URControlParams.attitude_maxPrecSpeed) || tmp) {
    dummy_idx_1 = MuPrec;
  } else {
    dummy_idx_1 = -URControlParams.attitude_maxPrecSpeed;
  }

  /* 'URGenPrecession:55' daq.uv_prec = uv_prec; */
  URControl_DW.DAQ.uv_prec[0] = dummy_idx_0;
  URControl_DW.DAQ.uv_prec[1] = dummy_idx_1;

  /* MATLAB Function: '<S2>/yawRateControl' incorporates:
   *  MATLAB Function: '<S4>/basic estimators'
   */
  /* :  [w_min, w_max, MzGain, DAQ] = URFailureYawRateControl(state, DAQ, par, URControlParams); */
  /* 'URFailureYawRateControl:4' w_max = ones(4,1)*par.wRotorMax; */
  /* 'URFailureYawRateControl:5' w_min = ones(4,1)*par.wRotorMin; */
  FMin[0] = 1200.0;
  FMax[1] = 0.0;
  FMin[2] = 1200.0;
  FMax[3] = 0.0;

  /* 'URFailureYawRateControl:6' MzGain = URpar.rate_MzGain; */
  a21 = URControlParams.rate_MzGain;

  /* 'URFailureYawRateControl:8' if URpar.YRCFail_enable && state.fail_id > 0 */
  if ((URControlParams.YRCFail_enable != 0.0) && (URControl_DW.State.fail_id >
       0.0)) {
    /* 'URFailureYawRateControl:9' r = state.omega(3); */
    /* 'URFailureYawRateControl:11' yawDirection = (-1)^(state.fail_id); */
    /* 'URFailureYawRateControl:13' errorGain = (state.n(3) - URpar.YRCFail_nLim2)/(URpar.YRCFail_nLim1 - URpar.YRCFail_nLim2); */
    /* 'URFailureYawRateControl:14' errorGain = max(min(errorGain,1),0); */
    /* 'URFailureYawRateControl:16' error = (r*yawDirection - URpar.YRCFail_yawRateTarget)*errorGain; */
    Iu = (URControl_DW.State.n[2] - URControlParams.YRCFail_nLim2) /
      (URControlParams.YRCFail_nLim1 - URControlParams.YRCFail_nLim2);
    if (!(Iu < 1.0)) {
      Iu = 1.0;
    }

    if (!(Iu > 0.0)) {
      Iu = 0.0;
    }

    MuPrec = (URControl_DW.State.omega[2] * rt_powd_snf(-1.0,
               URControl_DW.State.fail_id) -
              URControlParams.YRCFail_yawRateTarget) * Iu;

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
      FMin[0] = 1200.0 - MuPrec;
      FMax[1] = MuPrec;
      FMin[2] = 1200.0 - MuPrec;
      FMax[3] = MuPrec;
    } else {
      if (URControlParams.YRCFail_mode == 2.0) {
        /* 'URFailureYawRateControl:28' elseif URpar.YRCFail_mode == 2 */
        /* 'URFailureYawRateControl:29' dMzGain = -error*URpar.YRCFail_Kp_dMzGain; */
        /* 'URFailureYawRateControl:30' dMzGain = max(dMzGain,0); */
        a21 = -MuPrec * URControlParams.YRCFail_Kp_dMzGain;
        if (!(a21 > 0.0)) {
          a21 = 0.0;
        }

        /* 'URFailureYawRateControl:31' MzGain = MzGain + dMzGain^2; */
        a21 = a21 * a21 + URControlParams.rate_MzGain;
      }
    }
  }

  /* MATLAB Function: '<S1>/position control' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion8'
   *  Inport: '<Root>/pos_sp'
   *  MATLAB Function: '<S1>/altitude control'
   *  MATLAB Function: '<S4>/basic estimators'
   */
  /* :  [n_des, DAQ] = URpositionControl(inputs, state, DAQ, par, URControlParams); */
  /* 'URpositionControl:3' if isempty(errorInt) */
  /* 'URpositionControl:6' errorPos = [inputs.xTarget, inputs.yTarget, inputs.zTarget]  - state.pos; */
  /* 'URpositionControl:7' velTarget = URpar.position_Kp_pos.*errorPos; */
  /* 'URpositionControl:8' maxVel = URpar.position_maxVel; */
  /* 'URpositionControl:9' velTarget = max(min(velTarget,maxVel),-maxVel); */
  uv_des_idx_0 = (URControl_U.pos_sp[0] - URControl_DW.State.pos[0]) *
    URControlParams.position_Kp_pos[0];
  optimal = rtIsNaN(URControlParams.position_maxVel);
  if ((uv_des_idx_0 < URControlParams.position_maxVel) || optimal) {
    h[0] = uv_des_idx_0;
  } else {
    h[0] = URControlParams.position_maxVel;
  }

  uv_des_idx_0 = (URControl_U.pos_sp[1] - URControl_DW.State.pos[1]) *
    URControlParams.position_Kp_pos[1];
  if ((uv_des_idx_0 < URControlParams.position_maxVel) || optimal) {
    h[1] = uv_des_idx_0;
  } else {
    h[1] = URControlParams.position_maxVel;
  }

  Iu = URControl_U.pos_sp[2] - URControl_DW.State.pos[2];
  uv_des_idx_0 = Iu * URControlParams.position_Kp_pos[2];
  if ((uv_des_idx_0 < URControlParams.position_maxVel) || optimal) {
    h[2] = uv_des_idx_0;
  } else {
    h[2] = URControlParams.position_maxVel;
  }

  /* 'URpositionControl:12' errorVel = velTarget - state.vel; */
  /* 'URpositionControl:13' errorInt = errorInt + errorVel/par.freq; */
  optimal = rtIsNaN(-URControlParams.position_maxVel);
  if ((h[0] > -URControlParams.position_maxVel) || optimal) {
    uv_des_idx_0 = h[0];
  } else {
    uv_des_idx_0 = -URControlParams.position_maxVel;
  }

  wRotorSet_data_idx_2 = uv_des_idx_0 - URControl_DW.State.vel[0];
  URControl_DW.errorInt_p[0] += wRotorSet_data_idx_2 / 500.0;
  URControl_DW.DAQ.velTarget[0] = uv_des_idx_0;
  errorVel_idx_0 = wRotorSet_data_idx_2;
  if ((h[1] > -URControlParams.position_maxVel) || optimal) {
    uv_des_idx_0 = h[1];
  } else {
    uv_des_idx_0 = -URControlParams.position_maxVel;
  }

  wRotorSet_data_idx_2 = uv_des_idx_0 - URControl_DW.State.vel[1];
  URControl_DW.errorInt_p[1] += wRotorSet_data_idx_2 / 500.0;
  URControl_DW.DAQ.velTarget[1] = uv_des_idx_0;
  errorVel_idx_1 = wRotorSet_data_idx_2;
  if ((h[2] > -URControlParams.position_maxVel) || optimal) {
    uv_des_idx_0 = h[2];
  } else {
    uv_des_idx_0 = -URControlParams.position_maxVel;
  }

  wRotorSet_data_idx_2 = uv_des_idx_0 - URControl_DW.State.vel[2];
  URControl_DW.errorInt_p[2] += wRotorSet_data_idx_2 / 500.0;

  /* 'URpositionControl:14' intLim = URpar.position_intLim; */
  /* 'URpositionControl:15' errorInt = max(min(errorInt,intLim),-intLim); */
  optimal = rtIsNaN(URControlParams.position_intLim);
  if ((URControl_DW.errorInt_p[0] < URControlParams.position_intLim) || optimal)
  {
    maxval = URControl_DW.errorInt_p[0];
  } else {
    maxval = URControlParams.position_intLim;
  }

  if ((URControl_DW.errorInt_p[1] < URControlParams.position_intLim) || optimal)
  {
    uDot_max = URControl_DW.errorInt_p[1];
  } else {
    uDot_max = URControlParams.position_intLim;
  }

  if ((URControl_DW.errorInt_p[2] < URControlParams.position_intLim) || optimal)
  {
    Iv = URControl_DW.errorInt_p[2];
  } else {
    Iv = URControlParams.position_intLim;
  }

  /* 'URpositionControl:18' a_ref = URpar.position_Kp_vel.*errorVel + URpar.position_Ki_vel.*errorInt; */
  optimal = rtIsNaN(-URControlParams.position_intLim);
  if ((maxval > -URControlParams.position_intLim) || optimal) {
    URControl_DW.errorInt_p[0] = maxval;
  } else {
    URControl_DW.errorInt_p[0] = -URControlParams.position_intLim;
  }

  errorVel_idx_0 = URControlParams.position_Kp_vel[0] * errorVel_idx_0 +
    URControlParams.position_Ki_vel[0] * URControl_DW.errorInt_p[0];
  if ((uDot_max > -URControlParams.position_intLim) || optimal) {
    URControl_DW.errorInt_p[1] = uDot_max;
  } else {
    URControl_DW.errorInt_p[1] = -URControlParams.position_intLim;
  }

  errorVel_idx_1 = URControlParams.position_Kp_vel[1] * errorVel_idx_1 +
    URControlParams.position_Ki_vel[1] * URControl_DW.errorInt_p[1];
  if ((Iv > -URControlParams.position_intLim) || optimal) {
    URControl_DW.errorInt_p[2] = Iv;
  } else {
    URControl_DW.errorInt_p[2] = -URControlParams.position_intLim;
  }

  wRotorSet_data_idx_2 = URControlParams.position_Kp_vel[2] *
    wRotorSet_data_idx_2 + URControlParams.position_Ki_vel[2] *
    URControl_DW.errorInt_p[2];

  /* 'URpositionControl:20' a_ref(3) = a_ref(3) - par.g; */
  /* 'URpositionControl:23' if state.fail_id > 0 */
  if (URControl_DW.State.fail_id > 0.0) {
    /* 'URpositionControl:25' maxAngle = URpar.position_maxAngleFailure; */
    maxval = URControlParams.position_maxAngleFailure;
  } else {
    /* 'URpositionControl:26' else */
    /* 'URpositionControl:27' maxAngle = URpar.position_maxAngle; */
    maxval = URControlParams.position_maxAngle;
  }

  /* 'URpositionControl:29' maxLateral = abs(par.g*tan(maxAngle)); */
  /* 'URpositionControl:30' latRatio = sqrt(a_ref(1)^2 + a_ref(2)^2)/maxLateral; */
  MuPrec = std::sqrt(errorVel_idx_0 * errorVel_idx_0 + errorVel_idx_1 *
                     errorVel_idx_1) / std::abs(9.81 * std::tan(maxval));

  /* 'URpositionControl:31' a_ref(1) = a_ref(1)/(max(latRatio,1)); */
  if (MuPrec > 1.0) {
    maxval = MuPrec;
  } else {
    maxval = 1.0;
    MuPrec = 1.0;
  }

  errorVel_idx_0 /= maxval;

  /* 'URpositionControl:32' a_ref(2) = a_ref(2)/(max(latRatio,1)); */
  errorVel_idx_1 /= MuPrec;

  /* 'URpositionControl:38' n_des = a_ref/norm(a_ref); */
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

  uDot_max = std::abs(wRotorSet_data_idx_2 - 9.81);
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
  rtb_n_des[2] = (wRotorSet_data_idx_2 - 9.81) / maxval;

  /* 'URpositionControl:40' if URpar.position_enable == 0 */
  if (URControlParams.position_enable == 0.0) {
    /* 'URpositionControl:41' n_des = [0, 0, -1]; */
    rtb_n_des[0] = 0.0;
    rtb_n_des[1] = 0.0;
    rtb_n_des[2] = -1.0;
  }

  /* 'URpositionControl:45' daq.velTarget = velTarget; */
  /* 'URpositionControl:46' daq.a_ref = a_ref; */
  /* 'URpositionControl:47' daq.n_des = n_des; */
  URControl_DW.DAQ.a_ref[0] = errorVel_idx_0;
  URControl_DW.DAQ.n_des[0] = rtb_n_des[0];
  URControl_DW.DAQ.a_ref[1] = errorVel_idx_1;
  URControl_DW.DAQ.n_des[1] = rtb_n_des[1];
  URControl_DW.DAQ.velTarget[2] = uv_des_idx_0;
  URControl_DW.DAQ.a_ref[2] = wRotorSet_data_idx_2 - 9.81;
  URControl_DW.DAQ.n_des[2] = rtb_n_des[2];

  /* End of MATLAB Function: '<S1>/position control' */

  /* DiscreteStateSpace: '<S2>/Discrete State-Space' */
  {
    rtb_DiscreteStateSpace[0] = (1.0)*URControl_DW.DiscreteStateSpace_DSTATE[0];
    rtb_DiscreteStateSpace[1] = (1.0)*URControl_DW.DiscreteStateSpace_DSTATE[1];
    rtb_DiscreteStateSpace[2] = (1.0)*URControl_DW.DiscreteStateSpace_DSTATE[2];
  }

  /* MATLAB Function: '<S1>/yaw rate control' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion9'
   *  Inport: '<Root>/yaw_sp'
   *  MATLAB Function: '<S2>/attitude controller'
   *  MATLAB Function: '<S4>/basic estimators'
   */
  /* :  [r_cmd, DAQ] = URYawControl(inputs, state, DAQ, par, URControlParams); */
  /* 'URYawControl:3' psiError = inputs.yawTarget - state.att(3); */
  /* 'URYawControl:4' psi_dot_cmd = psiError*URpar.YRC_Kp_psi; */
  /* 'URYawControl:6' r_cmd = psi_dot_cmd*cos(state.att(1))*cos(state.att(2))-sin(state.att(1))*state.omega(2); */
  maxval = std::cos(URControl_DW.State.att[1]);
  uDot_max = std::sin(URControl_DW.State.att[0]);
  errorVel_idx_1 = std::cos(URControl_DW.State.att[0]);
  MuPrec = (URControl_U.yaw_sp - URControl_DW.State.att[2]) *
    URControlParams.YRC_Kp_psi * errorVel_idx_1 * maxval - uDot_max *
    URControl_DW.State.omega[1];

  /* 'URYawControl:9' if state.fail_id > 0 */
  if (URControl_DW.State.fail_id > 0.0) {
    /* 'URYawControl:10' yawDirection = (-1)^(state.fail_id); */
    /* 'URYawControl:11' r_cmd = yawDirection*URpar.YRC_r_cmd_fail; */
    MuPrec = rt_powd_snf(-1.0, URControl_DW.State.fail_id) *
      URControlParams.YRC_r_cmd_fail;
  }

  /* 'URYawControl:14' if URpar.YRC_enable == 0 */
  if (URControlParams.YRC_enable == 0.0) {
    /* 'URYawControl:15' r_cmd = 0; */
    MuPrec = 0.0;
  }

  /* 'URYawControl:19' daq.r_cmd = r_cmd; */
  URControl_DW.DAQ.r_cmd = MuPrec;

  /* MATLAB Function: '<S2>/attitude controller' incorporates:
   *  MATLAB Function: '<S1>/yaw rate control'
   *  MATLAB Function: '<S2>/yawRateControl'
   *  MATLAB Function: '<S4>/basic estimators'
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
  errorVel_idx_0 = std::cos(URControl_DW.State.att[2]);
  R_IB[0] = maxval * errorVel_idx_0;
  uv_des_idx_0 = std::sin(URControl_DW.State.att[2]);
  R_IB[3] = maxval * uv_des_idx_0;
  Iv = std::sin(URControl_DW.State.att[1]);
  R_IB[6] = -Iv;
  wRotorSet_data_idx_2 = uDot_max * Iv;
  R_IB[1] = wRotorSet_data_idx_2 * errorVel_idx_0 - errorVel_idx_1 *
    uv_des_idx_0;
  R_IB[4] = wRotorSet_data_idx_2 * uv_des_idx_0 + errorVel_idx_1 *
    errorVel_idx_0;
  R_IB[7] = uDot_max * maxval;
  Iv *= errorVel_idx_1;
  R_IB[2] = Iv * errorVel_idx_0 + uDot_max * uv_des_idx_0;
  R_IB[5] = Iv * uv_des_idx_0 - uDot_max * errorVel_idx_0;
  R_IB[8] = errorVel_idx_1 * maxval;
  for (r1 = 0; r1 < 3; r1++) {
    h[r1] = R_IB[r1 + 6] * rtb_n_des[2] + (R_IB[r1 + 3] * rtb_n_des[1] + R_IB[r1]
      * rtb_n_des[0]);
  }

  /* 'URAngleControl:19' h_uv = [Rxu*h(1:2); h(3)]; */
  errorVel_idx_1 = 0.70710678118654757 * h[0] + -0.70710678118654746 * h[1];
  uv_des_idx_0 = 0.70710678118654746 * h[0] + 0.70710678118654757 * h[1];

  /* 'URAngleControl:21' n = primAxis; */
  /* 'URAngleControl:24' currRotVec = [state.omegaUV(1); state.omegaUV(2); 0]*URpar.attitude_rotComp; */
  /* 'URAngleControl:27' rotVec3 = cross(h_uv,n); */
  uDot_max = uv_des_idx_0 * URControlParams.attitude_primary_axis[2] - h[2] *
    URControlParams.attitude_primary_axis[1];
  rotVec3[0] = uDot_max;
  Iv = h[2] * URControlParams.attitude_primary_axis[0] - errorVel_idx_1 *
    URControlParams.attitude_primary_axis[2];
  rotVec3[1] = Iv;
  wRotorSet_data_idx_2 = errorVel_idx_1 * URControlParams.attitude_primary_axis
    [1] - uv_des_idx_0 * URControlParams.attitude_primary_axis[0];
  rotVec3[2] = wRotorSet_data_idx_2;

  /* 'URAngleControl:28' rotVec3 = rotVec3/max(abs(norm(rotVec3)),0.001); */
  maxval = std::abs(URControl_norm(rotVec3));
  if (!(maxval > 0.001)) {
    maxval = 0.001;
  }

  rotVec3[0] = uDot_max / maxval;
  rotVec3[1] = Iv / maxval;
  errorVel_idx_0 = wRotorSet_data_idx_2 / maxval;

  /* 'URAngleControl:31' totAngle = atan2(norm(cross(h_uv,n)),dot(h_uv,n)); */
  velTarget[0] = uDot_max;
  velTarget[1] = Iv;
  velTarget[2] = wRotorSet_data_idx_2;
  uDot_max = rt_atan2d_snf(URControl_norm(velTarget), (errorVel_idx_1 *
    URControlParams.attitude_primary_axis[0] + uv_des_idx_0 *
    URControlParams.attitude_primary_axis[1]) + h[2] *
    URControlParams.attitude_primary_axis[2]);

  /* 'URAngleControl:33' speedCompVec = dot(currRotVec, rotVec3*abs(totAngle)/180); */
  maxval = std::abs(uDot_max);
  maxval = (rotVec3[0] * maxval / 180.0 * (URControl_DW.State.omegaUV[0] *
             URControlParams.attitude_rotComp) + rotVec3[1] * maxval / 180.0 *
            (URControl_DW.State.omegaUV[1] * URControlParams.attitude_rotComp))
    + errorVel_idx_0 * maxval / 180.0 * (0.0 * URControlParams.attitude_rotComp);

  /* 'URAngleControl:34' rotVec3 = rotVec3 - speedCompVec*rotVec3; */
  rotVec3[0] -= maxval * rotVec3[0];
  rotVec3[1] -= maxval * rotVec3[1];
  rotVec3[2] = errorVel_idx_0 - maxval * errorVel_idx_0;

  /* 'URAngleControl:35' rotVec3 = rotVec3/max(abs(norm(rotVec3)),0.001); */
  maxval = std::abs(URControl_norm(rotVec3));
  if (!(maxval > 0.001)) {
    maxval = 0.001;
  }

  rotVec3[0] /= maxval;
  errorVel_idx_0 = rotVec3[1] / maxval;

  /* 'URAngleControl:36' rotVec = rotVec3(1:2); */
  /* 'URAngleControl:38' rotAction = totAngle*URpar.attitude_rotKp; */
  maxval = uDot_max * URControlParams.attitude_rotKp;

  /* 'URAngleControl:40' uv_attCtrl = [rotVec(1); rotVec(2)]*rotAction; */
  uDot_max = rotVec3[0] * maxval;
  maxval *= errorVel_idx_0;

  /* 'URAttitudeController:14' uv_des_raw = (uv_prec + uv_attCtrl); */
  dummy_idx_0 += uDot_max;
  wRotorSet_data_idx_2 = dummy_idx_1 + maxval;

  /* 'URAttitudeController:21' if URpar.envp_envelopeProt == 1 */
  if (URControlParams.envp_envelopeProt == 1.0) {
    /* 'URAttitudeController:22' uv_des = min(max(uv_des_raw, state.uv_min), state.uv_max); */
    if ((dummy_idx_0 > URControl_DW.State.uv_min[0]) || rtIsNaN
        (URControl_DW.State.uv_min[0])) {
      errorVel_idx_0 = dummy_idx_0;
    } else {
      errorVel_idx_0 = URControl_DW.State.uv_min[0];
    }

    if ((errorVel_idx_0 < URControl_DW.State.uv_max[0]) || rtIsNaN
        (URControl_DW.State.uv_max[0])) {
      uv_des_idx_0 = errorVel_idx_0;
    } else {
      uv_des_idx_0 = URControl_DW.State.uv_max[0];
    }

    if ((wRotorSet_data_idx_2 > URControl_DW.State.uv_min[1]) || rtIsNaN
        (URControl_DW.State.uv_min[1])) {
      errorVel_idx_0 = wRotorSet_data_idx_2;
    } else {
      errorVel_idx_0 = URControl_DW.State.uv_min[1];
    }

    if ((!(errorVel_idx_0 < URControl_DW.State.uv_max[1])) && (!rtIsNaN
         (URControl_DW.State.uv_max[1]))) {
      errorVel_idx_0 = URControl_DW.State.uv_max[1];
    }
  } else {
    /* 'URAttitudeController:23' else */
    /* 'URAttitudeController:24' uv_des = uv_des_raw; */
    uv_des_idx_0 = dummy_idx_0;
    errorVel_idx_0 = wRotorSet_data_idx_2;
  }

  /* 'URAttitudeController:30' pq_des = Rxu\uv_des; */
  errorVel_idx_1 = (errorVel_idx_0 - uv_des_idx_0 * 0.99999999999999989) /
    1.4142135623730949;
  Iv = (uv_des_idx_0 - errorVel_idx_1 * -0.70710678118654746) /
    0.70710678118654757;

  /* 'URAttitudeController:32' pqr_des = [pq_des; r_cmd]; */
  h[2] = MuPrec;

  /* 'URAttitudeController:33' uvr_des = [uv_des; r_cmd]; */
  dummy_idx_1 = MuPrec;

  /* 'URAttitudeController:36' daq.pqr_des = pqr_des; */
  /* 'URAttitudeController:37' daq.uvr_des = uvr_des; */
  URControl_DW.DAQ.pqr_des[0] = Iv;
  URControl_DW.DAQ.uvr_des[0] = uv_des_idx_0;
  URControl_DW.DAQ.pqr_des[1] = errorVel_idx_1;
  URControl_DW.DAQ.uvr_des[1] = errorVel_idx_0;
  URControl_DW.DAQ.pqr_des[2] = MuPrec;
  URControl_DW.DAQ.uvr_des[2] = MuPrec;

  /* 'URAttitudeController:38' daq.uv_des_raw = uv_des_raw; */
  /* 'URAttitudeController:39' daq.uv_des = uv_des; */
  /* 'URAttitudeController:40' daq.uv_attCtrl = uv_attCtrl; */
  URControl_DW.DAQ.uv_des_raw[0] = dummy_idx_0;
  URControl_DW.DAQ.uv_des[0] = uv_des_idx_0;
  URControl_DW.DAQ.uv_attCtrl[0] = uDot_max;
  URControl_DW.DAQ.uv_des_raw[1] = wRotorSet_data_idx_2;
  URControl_DW.DAQ.uv_des[1] = errorVel_idx_0;
  URControl_DW.DAQ.uv_attCtrl[1] = maxval;

  /* 'URAttitudeController:41' daq.w_max = w_max; */
  /* 'URAttitudeController:42' daq.w_min = w_min; */
  URControl_DW.DAQ.w_max[0] = FMin[0];
  URControl_DW.DAQ.w_min[0] = 0.0;
  URControl_DW.DAQ.w_max[1] = 1200.0;
  URControl_DW.DAQ.w_min[1] = FMax[1];
  URControl_DW.DAQ.w_max[2] = FMin[2];
  URControl_DW.DAQ.w_min[2] = 0.0;
  URControl_DW.DAQ.w_max[3] = 1200.0;
  URControl_DW.DAQ.w_min[3] = FMax[3];

  /* 'URAttitudeController:43' daq.MzGain = MzGain; */
  URControl_DW.DAQ.MzGain = a21;

  /* MATLAB Function: '<S1>/altitude control' incorporates:
   *  MATLAB Function: '<S4>/basic estimators'
   */
  /* :  [Ftot_ref, DAQ] = URAltitudeControl(inputs, state, DAQ, par, URControlParams); */
  /* 'URAltitudeControl:3' if isempty(errorInt) */
  /* 'URAltitudeControl:6' errorPos = inputs.zTarget  - state.pos(3); */
  /* 'URAltitudeControl:7' velTarget = URpar.altitude_Kp_pos.*errorPos; */
  /* 'URAltitudeControl:8' maxVel = URpar.altitude_maxVel; */
  /* 'URAltitudeControl:9' velTarget = max(min(velTarget,maxVel),-maxVel); */
  /* 'URAltitudeControl:13' errorVel = velTarget - state.vel(3); */
  Iu *= URControlParams.altitude_Kp_pos;
  if ((!(Iu < URControlParams.altitude_maxVel)) && (!rtIsNaN
       (URControlParams.altitude_maxVel))) {
    Iu = URControlParams.altitude_maxVel;
  }

  if ((!(Iu > -URControlParams.altitude_maxVel)) && (!rtIsNaN
       (-URControlParams.altitude_maxVel))) {
    Iu = -URControlParams.altitude_maxVel;
  }

  MuPrec = Iu - URControl_DW.State.vel[2];

  /* 'URAltitudeControl:14' errorInt = errorInt + errorVel/par.freq; */
  URControl_DW.errorInt_b += MuPrec / 500.0;

  /* 'URAltitudeControl:15' intLim = URpar.altitude_intLim; */
  /* 'URAltitudeControl:16' errorInt = max(min(errorInt,intLim),-intLim); */
  if ((URControl_DW.errorInt_b < URControlParams.altitude_intLim) || rtIsNaN
      (URControlParams.altitude_intLim)) {
    maxval = URControl_DW.errorInt_b;
  } else {
    maxval = URControlParams.altitude_intLim;
  }

  if ((maxval > -URControlParams.altitude_intLim) || rtIsNaN
      (-URControlParams.altitude_intLim)) {
    URControl_DW.errorInt_b = maxval;
  } else {
    URControl_DW.errorInt_b = -URControlParams.altitude_intLim;
  }

  /* 'URAltitudeControl:19' az_ref = URpar.altitude_Kp_vel.*errorVel + URpar.altitude_Ki_vel.*errorInt; */
  /* 'URAltitudeControl:20' peakAngle = URpar.altitude_peakAngle; */
  /* 'URAltitudeControl:24' multiFactor = 1/(cos(max(min(state.att(1),peakAngle),-peakAngle))*cos(max(min(state.att(2),peakAngle),-peakAngle))); */
  /* 'URAltitudeControl:25' Ftot_ref = -(az_ref - par.g)*par.mass*multiFactor; */
  /* 'URAltitudeControl:26' Ftot_ref = max(Ftot_ref,0); */
  optimal = rtIsNaN(URControlParams.altitude_peakAngle);
  if ((URControl_DW.State.att[0] < URControlParams.altitude_peakAngle) ||
      optimal) {
    maxval = URControl_DW.State.att[0];
  } else {
    maxval = URControlParams.altitude_peakAngle;
  }

  if ((URControl_DW.State.att[1] < URControlParams.altitude_peakAngle) ||
      optimal) {
    uDot_max = URControl_DW.State.att[1];
  } else {
    uDot_max = URControlParams.altitude_peakAngle;
  }

  optimal = rtIsNaN(-URControlParams.altitude_peakAngle);
  if ((!(maxval > -URControlParams.altitude_peakAngle)) && (!optimal)) {
    maxval = -URControlParams.altitude_peakAngle;
  }

  if ((!(uDot_max > -URControlParams.altitude_peakAngle)) && (!optimal)) {
    uDot_max = -URControlParams.altitude_peakAngle;
  }

  MuPrec = -((URControlParams.altitude_Kp_vel * MuPrec +
              URControlParams.altitude_Ki_vel * URControl_DW.errorInt_b) - 9.81)
    * 0.374 * (1.0 / (std::cos(maxval) * std::cos(uDot_max)));
  if (!(MuPrec > 0.0)) {
    MuPrec = 0.0;
  }

  /* 'URAltitudeControl:27' maxAngle = max(abs(state.att(1)),abs(state.att(2))); */
  Iu = std::abs(URControl_DW.State.att[0]);
  maxval = std::abs(URControl_DW.State.att[1]);
  if ((Iu > maxval) || rtIsNaN(maxval)) {
    maxval = Iu;
  }

  /* 'URAltitudeControl:28' if maxAngle > URpar.altitude_peakAngle */
  if (maxval > URControlParams.altitude_peakAngle) {
    /* 'URAltitudeControl:30' redFactor = 1 - (maxAngle - URpar.altitude_peakAngle)/(URpar.altitude_LOCAngle - URpar.altitude_peakAngle); */
    /* 'URAltitudeControl:31' redFactor = max(min(redFactor,1),0); */
    /* 'URAltitudeControl:32' Ftot_ref = Ftot_ref*redFactor; */
    Iu = 1.0 - (maxval - URControlParams.altitude_peakAngle) /
      (URControlParams.altitude_LOCAngle - URControlParams.altitude_peakAngle);
    if (!(Iu < 1.0)) {
      Iu = 1.0;
    }

    if (!(Iu > 0.0)) {
      Iu = 0.0;
    }

    MuPrec *= Iu;
  }

  /* 'URAltitudeControl:38' maxFtot = sum(state.FMax)*URpar.altitude_maxFPerc; */
  /* 'URAltitudeControl:39' Ftot_ref = min(Ftot_ref,maxFtot); */
  dummy_idx_0 = (((URControl_DW.State.FMax[0] + URControl_DW.State.FMax[1]) +
                  URControl_DW.State.FMax[2]) + URControl_DW.State.FMax[3]) *
    URControlParams.altitude_maxFPerc;
  if ((!(MuPrec < dummy_idx_0)) && (!rtIsNaN(dummy_idx_0))) {
    MuPrec = dummy_idx_0;
  }

  /* 'URAltitudeControl:41' if URpar.altitude_enable == 0 */
  if (URControlParams.altitude_enable == 0.0) {
    /* 'URAltitudeControl:42' Ftot_ref = par.g*par.mass; */
    MuPrec = 3.66894;
  }

  /* 'URAltitudeControl:46' daq.Ftot_ref = Ftot_ref; */
  URControl_DW.DAQ.Ftot_ref = MuPrec;

  /* MATLAB Function: '<S5>/control allocator' incorporates:
   *  Inport: '<Root>/fail_flag'
   *  MATLAB Function: '<S1>/altitude control'
   *  MATLAB Function: '<S2>/attitude controller'
   *  MATLAB Function: '<S2>/yawRateControl'
   *  MATLAB Function: '<S4>/basic estimators'
   */
  /* :  [wRotorSet, DAQ] = URControl_alloc(state, DAQ, pqr_des, uvr_des, w_max, w_min, MzGain, Ftot_ref, fail_id_quick, par, URControlParams); */
  /* 'URControl_alloc:3' if isempty(errorInt) */
  /* 'URControl_alloc:4' if isempty(error_prev) */
  /* 'URControl_alloc:5' if isempty(y_state_prev) */
  /* 'URControl_alloc:6' if isempty(Fset_prev) */
  /* 'URControl_alloc:8' wRotorSet = [0,0,0,0]; */
  dummy_idx_0 = 0.0;
  Iu = 0.0;
  wRotorSet_data_idx_2 = 0.0;
  wRotorSet_data_idx_3 = 0.0;

  /* 'URControl_alloc:10' if URpar.rate_mode == 1 */
  if (URControlParams.rate_mode == 1.0) {
    /* 'URControl_alloc:13' error = pqr_des' - state.omega; */
    /* 'URControl_alloc:14' errorInt = errorInt + error/par.freq; */
    uv_des_idx_0 = Iv - URControl_DW.State.omega[0];
    URControl_DW.errorInt[0] += uv_des_idx_0 / 500.0;
    URControl_DW.error_prev[0] = uv_des_idx_0;
    uv_des_idx_0 = errorVel_idx_1 - URControl_DW.State.omega[1];
    URControl_DW.errorInt[1] += uv_des_idx_0 / 500.0;
    URControl_DW.error_prev[1] = uv_des_idx_0;
    uv_des_idx_0 = h[2] - URControl_DW.State.omega[2];
    URControl_DW.errorInt[2] += uv_des_idx_0 / 500.0;

    /* 'URControl_alloc:15' errorInt = max(min(errorInt,URpar.rate_maxInt),-URpar.rate_maxInt); */
    if ((URControl_DW.errorInt[0] < URControlParams.rate_maxInt) || rtIsNaN
        (URControlParams.rate_maxInt)) {
      maxval = URControl_DW.errorInt[0];
    } else {
      maxval = URControlParams.rate_maxInt;
    }

    if ((URControl_DW.errorInt[1] < URControlParams.rate_maxInt) || rtIsNaN
        (URControlParams.rate_maxInt)) {
      uDot_max = URControl_DW.errorInt[1];
    } else {
      uDot_max = URControlParams.rate_maxInt;
    }

    if ((URControl_DW.errorInt[2] < URControlParams.rate_maxInt) || rtIsNaN
        (URControlParams.rate_maxInt)) {
      Iv = URControl_DW.errorInt[2];
    } else {
      Iv = URControlParams.rate_maxInt;
    }

    /* 'URControl_alloc:16' errorD = (error - error_prev)*par.freq; */
    /* 'URControl_alloc:17' error_prev = error; */
    if ((maxval > -URControlParams.rate_maxInt) || rtIsNaN
        (-URControlParams.rate_maxInt)) {
      URControl_DW.errorInt[0] = maxval;
    } else {
      URControl_DW.errorInt[0] = -URControlParams.rate_maxInt;
    }

    if ((uDot_max > -URControlParams.rate_maxInt) || rtIsNaN
        (-URControlParams.rate_maxInt)) {
      URControl_DW.errorInt[1] = uDot_max;
    } else {
      URControl_DW.errorInt[1] = -URControlParams.rate_maxInt;
    }

    if ((Iv > -URControlParams.rate_maxInt) || rtIsNaN
        (-URControlParams.rate_maxInt)) {
      URControl_DW.errorInt[2] = Iv;
    } else {
      URControl_DW.errorInt[2] = -URControlParams.rate_maxInt;
    }

    URControl_DW.error_prev[2] = uv_des_idx_0;

    /* 'URControl_alloc:18' pqrDot_des = error.*URpar.rate_rateDotKp + errorInt.*URpar.rate_rateDotKi + errorD.*URpar.rate_rateDotKd; */
    /* 'URControl_alloc:22' wRotorSet = [0,0,0,0]; */
  } else {
    if (URControlParams.rate_mode == 2.0) {
      /* 'URControl_alloc:24' elseif URpar.rate_mode == 2 */
      /* 'URControl_alloc:27' error = uvr_des' - state.omegaUV; */
      /* 'URControl_alloc:28' errorInt = errorInt + error/par.freq; */
      /* 'URControl_alloc:29' errorInt = max(min(errorInt,URpar.rate_maxInt),-URpar.rate_maxInt); */
      uv_des_idx_0 -= URControl_DW.State.omegaUV[0];
      URControl_DW.errorInt[0] += uv_des_idx_0 / 500.0;
      optimal = rtIsNaN(URControlParams.rate_maxInt);
      if ((URControl_DW.errorInt[0] < URControlParams.rate_maxInt) || optimal) {
        maxval = URControl_DW.errorInt[0];
      } else {
        maxval = URControlParams.rate_maxInt;
      }

      errorVel_idx_1 = uv_des_idx_0;
      uv_des_idx_0 = errorVel_idx_0 - URControl_DW.State.omegaUV[1];
      URControl_DW.errorInt[1] += uv_des_idx_0 / 500.0;
      if ((URControl_DW.errorInt[1] < URControlParams.rate_maxInt) || optimal) {
        uDot_max = URControl_DW.errorInt[1];
      } else {
        uDot_max = URControlParams.rate_maxInt;
      }

      dummy_idx_0 = uv_des_idx_0;
      uv_des_idx_0 = dummy_idx_1 - URControl_DW.State.omegaUV[2];
      URControl_DW.errorInt[2] += uv_des_idx_0 / 500.0;
      if ((URControl_DW.errorInt[2] < URControlParams.rate_maxInt) || optimal) {
        Iv = URControl_DW.errorInt[2];
      } else {
        Iv = URControlParams.rate_maxInt;
      }

      /* 'URControl_alloc:30' errorD = (error - error_prev)*par.freq; */
      optimal = rtIsNaN(-URControlParams.rate_maxInt);
      if ((maxval > -URControlParams.rate_maxInt) || optimal) {
        URControl_DW.errorInt[0] = maxval;
      } else {
        URControl_DW.errorInt[0] = -URControlParams.rate_maxInt;
      }

      URControl_DW.error_prev[0] = (errorVel_idx_1 - URControl_DW.error_prev[0])
        * 500.0;
      if ((uDot_max > -URControlParams.rate_maxInt) || optimal) {
        URControl_DW.errorInt[1] = uDot_max;
      } else {
        URControl_DW.errorInt[1] = -URControlParams.rate_maxInt;
      }

      URControl_DW.error_prev[1] = (dummy_idx_0 - URControl_DW.error_prev[1]) *
        500.0;
      if ((Iv > -URControlParams.rate_maxInt) || optimal) {
        URControl_DW.errorInt[2] = Iv;
      } else {
        URControl_DW.errorInt[2] = -URControlParams.rate_maxInt;
      }

      URControl_DW.error_prev[2] = (uv_des_idx_0 - URControl_DW.error_prev[2]) *
        500.0;

      /* 'URControl_alloc:31' errorD = max(min(errorD,URpar.rate_maxDer),-URpar.rate_maxDer); */
      /* 'URControl_alloc:32' error_prev = error; */
      /* 'URControl_alloc:33' uvrDot_des = error.*URpar.rate_rateDotKp + errorInt.*URpar.rate_rateDotKi + errorD.*URpar.rate_rateDotKd; */
      /* 'URControl_alloc:36' M_uvr = uvrDot_des'.*[URpar.Iu; URpar.Iv; URpar.Iz]; */
      optimal = rtIsNaN(URControlParams.rate_maxDer);
      if ((URControl_DW.error_prev[0] < URControlParams.rate_maxDer) || optimal)
      {
        Iu = URControl_DW.error_prev[0];
      } else {
        Iu = URControlParams.rate_maxDer;
      }

      URControl_DW.error_prev[0] = errorVel_idx_1;
      tmp = rtIsNaN(-URControlParams.rate_maxDer);
      if ((!(Iu > -URControlParams.rate_maxDer)) && (!tmp)) {
        Iu = -URControlParams.rate_maxDer;
      }

      errorVel_idx_0 = ((errorVel_idx_1 * URControlParams.rate_rateDotKp[0] +
                         URControl_DW.errorInt[0] *
                         URControlParams.rate_rateDotKi[0]) + Iu *
                        URControlParams.rate_rateDotKd[0]) * URControlParams.Iu;
      if ((URControl_DW.error_prev[1] < URControlParams.rate_maxDer) || optimal)
      {
        Iu = URControl_DW.error_prev[1];
      } else {
        Iu = URControlParams.rate_maxDer;
      }

      URControl_DW.error_prev[1] = dummy_idx_0;
      if ((!(Iu > -URControlParams.rate_maxDer)) && (!tmp)) {
        Iu = -URControlParams.rate_maxDer;
      }

      errorVel_idx_1 = ((dummy_idx_0 * URControlParams.rate_rateDotKp[1] +
                         URControl_DW.errorInt[1] *
                         URControlParams.rate_rateDotKi[1]) + Iu *
                        URControlParams.rate_rateDotKd[1]) * URControlParams.Iv;
      if ((URControl_DW.error_prev[2] < URControlParams.rate_maxDer) || optimal)
      {
        Iu = URControl_DW.error_prev[2];
      } else {
        Iu = URControlParams.rate_maxDer;
      }

      URControl_DW.error_prev[2] = uv_des_idx_0;
      if ((!(Iu > -URControlParams.rate_maxDer)) && (!tmp)) {
        Iu = -URControlParams.rate_maxDer;
      }

      dummy_idx_0 = ((uv_des_idx_0 * URControlParams.rate_rateDotKp[2] +
                      URControl_DW.errorInt[2] * URControlParams.rate_rateDotKi
                      [2]) + Iu * URControlParams.rate_rateDotKd[2]) *
        URControlParams.Iz;

      /* 'URControl_alloc:37' M_uvr = max(min(M_uvr, URpar.rate_maxMoments'), -URpar.rate_maxMoments'); */
      if ((!(errorVel_idx_0 < URControlParams.rate_maxMoments[0])) && (!rtIsNaN
           (URControlParams.rate_maxMoments[0]))) {
        errorVel_idx_0 = URControlParams.rate_maxMoments[0];
      }

      if ((errorVel_idx_0 > -URControlParams.rate_maxMoments[0]) || rtIsNaN
          (-URControlParams.rate_maxMoments[0])) {
        dummy_idx_1 = errorVel_idx_0;
      } else {
        dummy_idx_1 = -URControlParams.rate_maxMoments[0];
      }

      if ((errorVel_idx_1 < URControlParams.rate_maxMoments[1]) || rtIsNaN
          (URControlParams.rate_maxMoments[1])) {
        errorVel_idx_0 = errorVel_idx_1;
      } else {
        errorVel_idx_0 = URControlParams.rate_maxMoments[1];
      }

      if ((errorVel_idx_0 > -URControlParams.rate_maxMoments[1]) || rtIsNaN
          (-URControlParams.rate_maxMoments[1])) {
        maxval = errorVel_idx_0;
      } else {
        maxval = -URControlParams.rate_maxMoments[1];
      }

      if ((dummy_idx_0 < URControlParams.rate_maxMoments[2]) || rtIsNaN
          (URControlParams.rate_maxMoments[2])) {
        errorVel_idx_0 = dummy_idx_0;
      } else {
        errorVel_idx_0 = URControlParams.rate_maxMoments[2];
      }

      if ((!(errorVel_idx_0 > -URControlParams.rate_maxMoments[2])) && (!rtIsNaN
           (-URControlParams.rate_maxMoments[2]))) {
        errorVel_idx_0 = -URControlParams.rate_maxMoments[2];
      }

      /* 'URControl_alloc:40' refStruct.MuRef = M_uvr(1); */
      /* 'URControl_alloc:41' refStruct.MvRef = M_uvr(2); */
      /* 'URControl_alloc:42' refStruct.MzRef = M_uvr(3); */
      /* 'URControl_alloc:43' refStruct.FtotRef = Ftot_ref; */
      /* 'URControl_alloc:44' gains = struct(); */
      /* 'URControl_alloc:45' gains.MuGain = URpar.rate_MuGain; */
      /* 'URControl_alloc:46' gains.MvGain = URpar.rate_MvGain; */
      /* 'URControl_alloc:47' gains.FtotGain = URpar.rate_FtotGain; */
      /* 'URControl_alloc:48' gains.FGain = URpar.rate_FGain; */
      /* 'URControl_alloc:49' gains.MzGain = MzGain; */
      /* 'URControl_alloc:51' y_state_initial = y_state_prev; */
      /* 'URControl_alloc:57' [x,y_state,iter,optimal] = controlAllocQPQuick(refStruct, state.FMax, state.FMin, gains, y_state_initial, par, URpar); */
      URControl_controlAllocQPQuick(dummy_idx_1, maxval, errorVel_idx_0, MuPrec,
        URControl_DW.State.FMax, URControl_DW.State.FMin,
        URControlParams.rate_MuGain, URControlParams.rate_MvGain,
        URControlParams.rate_FtotGain, URControlParams.rate_FGain, a21,
        URControl_DW.y_state_prev, &URControl_ConstP.pooled1, &URControlParams,
        x, &URControl_DW.DAQ.iter, &optimal);

      /* 'URControl_alloc:58' y_state_prev = y_state; */
      /* 'URControl_alloc:59' if optimal */
      if (optimal) {
        /* 'URControl_alloc:60' Fset = x; */
        /* 'URControl_alloc:61' Fset_prev = Fset; */
        dummy_idx_0 = x[0];
        URControl_DW.Fset_prev[0] = x[0];
        Iu = x[1];
        URControl_DW.Fset_prev[1] = x[1];
        a21 = x[2];
        URControl_DW.Fset_prev[2] = x[2];
        MuPrec = x[3];
        URControl_DW.Fset_prev[3] = x[3];
      } else {
        /* 'URControl_alloc:62' else */
        /* 'URControl_alloc:63' Fset = Fset_prev*0.99; */
        dummy_idx_0 = URControl_DW.Fset_prev[0] * 0.99;
        Iu = URControl_DW.Fset_prev[1] * 0.99;
        a21 = URControl_DW.Fset_prev[2] * 0.99;
        MuPrec = URControl_DW.Fset_prev[3] * 0.99;
      }

      /* 'URControl_alloc:66' wRotorSet = sqrt(max(Fset,0)/URpar.k0); */
      if (!(dummy_idx_0 > 0.0)) {
        dummy_idx_0 = 0.0;
      }

      dummy_idx_0 = std::sqrt(dummy_idx_0 / URControlParams.k0);
      if (!(Iu > 0.0)) {
        Iu = 0.0;
      }

      Iu = std::sqrt(Iu / URControlParams.k0);
      if (!(a21 > 0.0)) {
        a21 = 0.0;
      }

      wRotorSet_data_idx_2 = std::sqrt(a21 / URControlParams.k0);
      if (!(MuPrec > 0.0)) {
        MuPrec = 0.0;
      }

      wRotorSet_data_idx_3 = std::sqrt(MuPrec / URControlParams.k0);

      /* 'URControl_alloc:69' M_uvr_set = zeros(3,1); */
      /* 'URControl_alloc:70' M_uvr_set(1) = (x(4) - x(2))*URpar.s; */
      /* 'URControl_alloc:71' M_uvr_set(2) = (x(1) - x(3))*URpar.s; */
      /* 'URControl_alloc:72' M_uvr_set(3) = (x(1) - x(2) + x(3) - x(4))*URpar.t0/URpar.k0; */
      /* 'URControl_alloc:73' Ftot_set = sum(x); */
      /* 'URControl_alloc:76' daq.iter = iter; */
      /* 'URControl_alloc:77' daq.M_uvr_des = M_uvr; */
      /* 'URControl_alloc:78' daq.M_uvr_set = M_uvr_set; */
      URControl_DW.DAQ.M_uvr_des[0] = dummy_idx_1;
      URControl_DW.DAQ.M_uvr_set[0] = (x[3] - x[1]) * URControlParams.s;
      URControl_DW.DAQ.M_uvr_des[1] = maxval;
      URControl_DW.DAQ.M_uvr_set[1] = (x[0] - x[2]) * URControlParams.s;
      URControl_DW.DAQ.M_uvr_des[2] = errorVel_idx_0;
      URControl_DW.DAQ.M_uvr_set[2] = (((x[0] - x[1]) + x[2]) - x[3]) *
        URControlParams.t0 / URControlParams.k0;

      /* 'URControl_alloc:79' daq.Ftot_set = Ftot_set; */
      URControl_DW.DAQ.Ftot_set = ((x[0] + x[1]) + x[2]) + x[3];
    }
  }

  /* 'URControl_alloc:83' wRotorSet = max(min(wRotorSet, w_max), w_min); */
  if ((!(dummy_idx_0 < FMin[0])) && (!rtIsNaN(FMin[0]))) {
    dummy_idx_0 = FMin[0];
  }

  if (!(Iu < 1200.0)) {
    Iu = 1200.0;
  }

  if ((!(wRotorSet_data_idx_2 < FMin[2])) && (!rtIsNaN(FMin[2]))) {
    wRotorSet_data_idx_2 = FMin[2];
  }

  if (!(wRotorSet_data_idx_3 < 1200.0)) {
    wRotorSet_data_idx_3 = 1200.0;
  }

  if (dummy_idx_0 > 0.0) {
    FMin[0] = dummy_idx_0;
  } else {
    FMin[0] = 0.0;
  }

  optimal = rtIsNaN(FMax[1]);
  if ((Iu > FMax[1]) || optimal) {
    FMin[1] = Iu;
  } else {
    FMin[1] = FMax[1];
  }

  if (wRotorSet_data_idx_2 > 0.0) {
    FMin[2] = wRotorSet_data_idx_2;
  } else {
    FMin[2] = 0.0;
  }

  tmp = rtIsNaN(FMax[3]);
  if ((wRotorSet_data_idx_3 > FMax[3]) || tmp) {
    FMin[3] = wRotorSet_data_idx_3;
  } else {
    FMin[3] = FMax[3];
  }

  /* 'URControl_alloc:85' daq.wRotorSet = wRotorSet; */
  if (dummy_idx_0 > 0.0) {
    URControl_DW.DAQ.wRotorSet[0] = dummy_idx_0;
  } else {
    URControl_DW.DAQ.wRotorSet[0] = 0.0;
  }

  if ((Iu > FMax[1]) || optimal) {
    URControl_DW.DAQ.wRotorSet[1] = Iu;
  } else {
    URControl_DW.DAQ.wRotorSet[1] = FMax[1];
  }

  if (wRotorSet_data_idx_2 > 0.0) {
    URControl_DW.DAQ.wRotorSet[2] = wRotorSet_data_idx_2;
  } else {
    URControl_DW.DAQ.wRotorSet[2] = 0.0;
  }

  if ((wRotorSet_data_idx_3 > FMax[3]) || tmp) {
    URControl_DW.DAQ.wRotorSet[3] = wRotorSet_data_idx_3;
  } else {
    URControl_DW.DAQ.wRotorSet[3] = FMax[3];
  }

  /* 'URControl_alloc:88' if fail_id_quick~=0 */
  if (URControl_U.fail_flag != 0) {
    /* 'URControl_alloc:89' wRotorSet(fail_id_quick) = par.fail_wRot; */
    FMin[URControl_U.fail_flag - 1] = 0.0;
  }

  /* End of MATLAB Function: '<S5>/control allocator' */

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

  /* Outport: '<Root>/daq' incorporates:
   *  DataStoreRead: '<Root>/Data Store Read'
   */
  URControl_Y.daq = URControl_DW.DAQ;

  /* Update for DiscreteStateSpace: '<S2>/Discrete State-Space' */
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

  /* Start for DataStoreMemory: '<Root>/Data Store Memory' */
  URControl_DW.DAQ = URControl_rtZdaqBus;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory1' */
  URControl_DW.State = URControl_rtZstateBus;

  /* InitializeConditions for DiscreteStateSpace: '<S2>/Discrete State-Space' */
  URControl_DW.DiscreteStateSpace_DSTATE[0] = (0.0);
  URControl_DW.DiscreteStateSpace_DSTATE[1] = (0.0);
  URControl_DW.DiscreteStateSpace_DSTATE[2] = (-1.0);

  /* SystemInitialize for MATLAB Function: '<S1>/altitude control' */
  /* 'URpositionControl:3' errorInt = [0,0,0]; */
  /* 'URAltitudeControl:3' errorInt = 0; */
  URControl_DW.errorInt_b = 0.0;

  /* SystemInitialize for MATLAB Function: '<S1>/position control' */
  /* 'URControl_alloc:3' errorInt = [0,0,0]; */
  /* 'URControl_alloc:4' error_prev = [0,0,0]; */
  URControl_DW.errorInt_p[0] = 0.0;

  /* SystemInitialize for MATLAB Function: '<S5>/control allocator' */
  URControl_DW.errorInt[0] = 0.0;
  URControl_DW.error_prev[0] = 0.0;

  /* SystemInitialize for MATLAB Function: '<S1>/position control' */
  URControl_DW.errorInt_p[1] = 0.0;

  /* SystemInitialize for MATLAB Function: '<S5>/control allocator' */
  URControl_DW.errorInt[1] = 0.0;
  URControl_DW.error_prev[1] = 0.0;

  /* SystemInitialize for MATLAB Function: '<S1>/position control' */
  URControl_DW.errorInt_p[2] = 0.0;

  /* SystemInitialize for MATLAB Function: '<S5>/control allocator' */
  URControl_DW.errorInt[2] = 0.0;
  URControl_DW.error_prev[2] = 0.0;

  /* 'URControl_alloc:5' y_state_prev = [0,0,0,0]; */
  /* 'URControl_alloc:6' Fset_prev = [0;0;0;0]; */
  URControl_DW.y_state_prev[0] = 0.0;
  URControl_DW.Fset_prev[0] = 0.0;
  URControl_DW.y_state_prev[1] = 0.0;
  URControl_DW.Fset_prev[1] = 0.0;
  URControl_DW.y_state_prev[2] = 0.0;
  URControl_DW.Fset_prev[2] = 0.0;
  URControl_DW.y_state_prev[3] = 0.0;
  URControl_DW.Fset_prev[3] = 0.0;
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
