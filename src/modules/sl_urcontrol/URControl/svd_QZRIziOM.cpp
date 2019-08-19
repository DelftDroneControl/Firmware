/*
 * /home/bramsvs/src/monorepo/simulink_model/.codeGenCache/slprj/grt/_sharedutils/svd_QZRIziOM.cpp
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "RateControl".
 *
 * Model version              : 1.1014
 * Simulink Coder version : 9.1 (R2019a) 23-Nov-2018
 * C++ source code generated on : Thu Aug 15 10:38:46 2019
 * Created for block: RateControl
 */

#include "rtwtypes.h"
#include <cmath>
#include "rt_nonfinite.h"
#include "xaxpy_RhCe5hl7.h"
#include "xaxpy_Zy4s0LfN.h"
#include "xaxpy_f8p2mqid.h"
#include "xdotc_13D4rq3A.h"
#include "xnrm2_crNqvcfL.h"
#include "xnrm2_sp89q2iI.h"
#include "xrot_LwW9aiKR.h"
#include "xrotg_w5ZKw2NN.h"
#include "xscal_Abpc9f1Z.h"
#include "xswap_XNI9nwQz.h"
#include "svd_QZRIziOM.h"

/* Function for MATLAB Function: '<Root>/INDI_allocator' */
void svd_QZRIziOM(const real32_T A[16], real32_T U[16], real32_T s[4], real32_T
                  V[16])
{
  real32_T b_A[16];
  real32_T b_s[4];
  real32_T e[4];
  real32_T work[4];
  real32_T Vf[16];
  int32_T qq;
  boolean_T apply_transform;
  real32_T nrm;
  int32_T qjj;
  int32_T m;
  int32_T qp1q;
  real32_T rt;
  real32_T ztest0;
  real32_T smm1;
  real32_T emm1;
  real32_T sqds;
  real32_T shift;
  int32_T c_q;
  int32_T d_jj;
  boolean_T exitg1;
  e[0] = 0.0F;
  work[0] = 0.0F;
  e[1] = 0.0F;
  work[1] = 0.0F;
  e[2] = 0.0F;
  work[2] = 0.0F;
  e[3] = 0.0F;
  work[3] = 0.0F;
  for (m = 0; m < 16; m++) {
    b_A[m] = A[m];
    U[m] = 0.0F;
    Vf[m] = 0.0F;
  }

  apply_transform = false;
  nrm = xnrm2_sp89q2iI(4, b_A, 1);
  if (nrm > 0.0F) {
    apply_transform = true;
    if (b_A[0] < 0.0F) {
      b_s[0] = -nrm;
    } else {
      b_s[0] = nrm;
    }

    if (std::abs(b_s[0]) >= 9.86076132E-32F) {
      nrm = 1.0F / b_s[0];
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
    b_s[0] = 0.0F;
  }

  for (m = 1; m + 1 < 5; m++) {
    qjj = m << 2;
    if (apply_transform) {
      xaxpy_RhCe5hl7(4, -(xdotc_13D4rq3A(4, b_A, 1, b_A, qjj + 1) / b_A[0]), 1,
                     b_A, qjj + 1);
    }

    e[m] = b_A[qjj];
  }

  for (m = 0; m + 1 < 5; m++) {
    U[m] = b_A[m];
  }

  nrm = xnrm2_crNqvcfL(3, e, 2);
  if (nrm == 0.0F) {
    e[0] = 0.0F;
  } else {
    if (e[1] < 0.0F) {
      e[0] = -nrm;
    } else {
      e[0] = nrm;
    }

    nrm = e[0];
    if (std::abs(e[0]) >= 9.86076132E-32F) {
      nrm = 1.0F / e[0];
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
      work[m] = 0.0F;
    }

    for (m = 1; m + 1 < 5; m++) {
      xaxpy_f8p2mqid(3, e[m], b_A, (m << 2) + 2, work, 2);
    }

    for (m = 1; m + 1 < 5; m++) {
      xaxpy_Zy4s0LfN(3, -e[m] / e[1], work, 2, b_A, (m << 2) + 2);
    }
  }

  for (m = 1; m + 1 < 5; m++) {
    Vf[m] = e[m];
  }

  apply_transform = false;
  nrm = xnrm2_sp89q2iI(3, b_A, 6);
  if (nrm > 0.0F) {
    apply_transform = true;
    if (b_A[5] < 0.0F) {
      b_s[1] = -nrm;
    } else {
      b_s[1] = nrm;
    }

    if (std::abs(b_s[1]) >= 9.86076132E-32F) {
      nrm = 1.0F / b_s[1];
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
    b_s[1] = 0.0F;
  }

  for (m = 2; m + 1 < 5; m++) {
    qjj = (m << 2) + 1;
    if (apply_transform) {
      xaxpy_RhCe5hl7(3, -(xdotc_13D4rq3A(3, b_A, 6, b_A, qjj + 1) / b_A[5]), 6,
                     b_A, qjj + 1);
    }

    e[m] = b_A[qjj];
  }

  for (m = 1; m + 1 < 5; m++) {
    U[m + 4] = b_A[m + 4];
  }

  nrm = xnrm2_crNqvcfL(2, e, 3);
  if (nrm == 0.0F) {
    e[1] = 0.0F;
  } else {
    if (e[2] < 0.0F) {
      e[1] = -nrm;
    } else {
      e[1] = nrm;
    }

    nrm = e[1];
    if (std::abs(e[1]) >= 9.86076132E-32F) {
      nrm = 1.0F / e[1];
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
      work[m] = 0.0F;
    }

    for (m = 2; m + 1 < 5; m++) {
      xaxpy_f8p2mqid(2, e[m], b_A, (m << 2) + 3, work, 3);
    }

    for (m = 2; m + 1 < 5; m++) {
      xaxpy_Zy4s0LfN(2, -e[m] / e[2], work, 3, b_A, (m << 2) + 3);
    }
  }

  for (m = 2; m + 1 < 5; m++) {
    Vf[m + 4] = e[m];
  }

  apply_transform = false;
  nrm = xnrm2_sp89q2iI(2, b_A, 11);
  if (nrm > 0.0F) {
    apply_transform = true;
    if (b_A[10] < 0.0F) {
      b_s[2] = -nrm;
    } else {
      b_s[2] = nrm;
    }

    if (std::abs(b_s[2]) >= 9.86076132E-32F) {
      nrm = 1.0F / b_s[2];
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
    b_s[2] = 0.0F;
  }

  for (m = 3; m + 1 < 5; m++) {
    qjj = (m << 2) + 2;
    if (apply_transform) {
      xaxpy_RhCe5hl7(2, -(xdotc_13D4rq3A(2, b_A, 11, b_A, qjj + 1) / b_A[10]),
                     11, b_A, qjj + 1);
    }

    e[m] = b_A[qjj];
  }

  for (m = 2; m + 1 < 5; m++) {
    U[m + 8] = b_A[m + 8];
  }

  m = 2;
  b_s[3] = b_A[15];
  e[2] = b_A[14];
  e[3] = 0.0F;
  U[12] = 0.0F;
  U[13] = 0.0F;
  U[14] = 0.0F;
  U[15] = 1.0F;
  for (c_q = 2; c_q >= 0; c_q--) {
    qp1q = c_q << 2;
    qq = qp1q + c_q;
    if (b_s[c_q] != 0.0F) {
      for (d_jj = c_q + 1; d_jj + 1 < 5; d_jj++) {
        qjj = ((d_jj << 2) + c_q) + 1;
        xaxpy_RhCe5hl7(4 - c_q, -(xdotc_13D4rq3A(4 - c_q, U, qq + 1, U, qjj) /
          U[qq]), qq + 1, U, qjj);
      }

      for (qjj = c_q; qjj + 1 < 5; qjj++) {
        d_jj = qp1q + qjj;
        U[d_jj] = -U[d_jj];
      }

      U[qq]++;
      for (qq = 0; qq < c_q; qq++) {
        U[qq + qp1q] = 0.0F;
      }
    } else {
      U[qp1q] = 0.0F;
      U[1 + qp1q] = 0.0F;
      U[2 + qp1q] = 0.0F;
      U[3 + qp1q] = 0.0F;
      U[qq] = 1.0F;
    }
  }

  for (c_q = 3; c_q >= 0; c_q--) {
    if ((c_q + 1 <= 2) && (e[c_q] != 0.0F)) {
      qp1q = ((c_q << 2) + c_q) + 2;
      for (qq = c_q + 1; qq + 1 < 5; qq++) {
        qjj = ((qq << 2) + c_q) + 2;
        xaxpy_RhCe5hl7(3 - c_q, -(xdotc_13D4rq3A(3 - c_q, Vf, qp1q, Vf, qjj) /
          Vf[qp1q - 1]), qp1q, Vf, qjj);
      }
    }

    qp1q = c_q << 2;
    Vf[qp1q] = 0.0F;
    Vf[1 + qp1q] = 0.0F;
    Vf[2 + qp1q] = 0.0F;
    Vf[3 + qp1q] = 0.0F;
    Vf[c_q + (c_q << 2)] = 1.0F;
  }

  ztest0 = e[0];
  if (b_s[0] != 0.0F) {
    rt = std::abs(b_s[0]);
    nrm = b_s[0] / rt;
    b_s[0] = rt;
    ztest0 = e[0] / nrm;
    xscal_Abpc9f1Z(nrm, U, 1);
  }

  if (ztest0 != 0.0F) {
    rt = std::abs(ztest0);
    nrm = rt / ztest0;
    ztest0 = rt;
    b_s[1] *= nrm;
    xscal_Abpc9f1Z(nrm, Vf, 5);
  }

  e[0] = ztest0;
  ztest0 = e[1];
  if (b_s[1] != 0.0F) {
    rt = std::abs(b_s[1]);
    nrm = b_s[1] / rt;
    b_s[1] = rt;
    ztest0 = e[1] / nrm;
    xscal_Abpc9f1Z(nrm, U, 5);
  }

  if (ztest0 != 0.0F) {
    rt = std::abs(ztest0);
    nrm = rt / ztest0;
    ztest0 = rt;
    b_s[2] *= nrm;
    xscal_Abpc9f1Z(nrm, Vf, 9);
  }

  e[1] = ztest0;
  ztest0 = b_A[14];
  if (b_s[2] != 0.0F) {
    rt = std::abs(b_s[2]);
    nrm = b_s[2] / rt;
    b_s[2] = rt;
    ztest0 = b_A[14] / nrm;
    xscal_Abpc9f1Z(nrm, U, 9);
  }

  if (ztest0 != 0.0F) {
    rt = std::abs(ztest0);
    nrm = rt / ztest0;
    ztest0 = rt;
    b_s[3] = b_A[15] * nrm;
    xscal_Abpc9f1Z(nrm, Vf, 13);
  }

  e[2] = ztest0;
  if (b_s[3] != 0.0F) {
    rt = std::abs(b_s[3]);
    nrm = b_s[3] / rt;
    b_s[3] = rt;
    xscal_Abpc9f1Z(nrm, U, 13);
  }

  e[3] = 0.0F;
  qp1q = 0;
  if ((b_s[0] > e[0]) || rtIsNaNF(e[0])) {
    nrm = b_s[0];
  } else {
    nrm = e[0];
  }

  if ((b_s[1] > e[1]) || rtIsNaNF(e[1])) {
    rt = b_s[1];
  } else {
    rt = e[1];
  }

  if ((!(nrm > rt)) && (!rtIsNaNF(rt))) {
    nrm = rt;
  }

  if ((b_s[2] > ztest0) || rtIsNaNF(ztest0)) {
    ztest0 = b_s[2];
  }

  if ((!(nrm > ztest0)) && (!rtIsNaNF(ztest0))) {
    nrm = ztest0;
  }

  if (b_s[3] > 0.0F) {
    rt = b_s[3];
  } else {
    rt = 0.0F;
  }

  if ((!(nrm > rt)) && (!rtIsNaNF(rt))) {
    nrm = rt;
  }

  while ((m + 2 > 0) && (qp1q < 75)) {
    c_q = m + 1;
    exitg1 = false;
    while (!(exitg1 || (c_q == 0))) {
      ztest0 = std::abs(e[c_q - 1]);
      if ((ztest0 <= (std::abs(b_s[c_q - 1]) + std::abs(b_s[c_q])) *
           1.1920929E-7F) || ((ztest0 <= 9.86076132E-32F) || ((qp1q > 20) &&
            (ztest0 <= 1.1920929E-7F * nrm)))) {
        e[c_q - 1] = 0.0F;
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
          ztest0 = 0.0F;
          if (qjj < m + 2) {
            ztest0 = std::abs(e[qjj - 1]);
          }

          if (qjj > c_q + 1) {
            ztest0 += std::abs(e[qjj - 2]);
          }

          rt = std::abs(b_s[qjj - 1]);
          if ((rt <= 1.1920929E-7F * ztest0) || (rt <= 9.86076132E-32F)) {
            b_s[qjj - 1] = 0.0F;
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
      e[m] = 0.0F;
      for (qq = m; qq + 1 >= c_q + 1; qq--) {
        xrotg_w5ZKw2NN(&b_s[qq], &ztest0, &rt, &sqds);
        if (qq + 1 > c_q + 1) {
          smm1 = e[qq - 1];
          ztest0 = smm1 * -sqds;
          e[qq - 1] = smm1 * rt;
        }

        xrot_LwW9aiKR(Vf, 1 + (qq << 2), 1 + ((m + 1) << 2), rt, sqds);
      }
      break;

     case 2:
      ztest0 = e[c_q - 1];
      e[c_q - 1] = 0.0F;
      for (qq = c_q; qq < m + 2; qq++) {
        xrotg_w5ZKw2NN(&b_s[qq], &ztest0, &rt, &sqds);
        ztest0 = -sqds * e[qq];
        e[qq] *= rt;
        xrot_LwW9aiKR(U, 1 + (qq << 2), 1 + ((c_q - 1) << 2), rt, sqds);
      }
      break;

     case 3:
      rt = std::abs(b_s[m + 1]);
      ztest0 = std::abs(b_s[m]);
      if ((rt > ztest0) || rtIsNaNF(ztest0)) {
        ztest0 = rt;
      }

      rt = std::abs(e[m]);
      if ((ztest0 > rt) || rtIsNaNF(rt)) {
        rt = ztest0;
      }

      ztest0 = std::abs(b_s[c_q]);
      if ((rt > ztest0) || rtIsNaNF(ztest0)) {
        ztest0 = rt;
      }

      rt = std::abs(e[c_q]);
      if ((ztest0 > rt) || rtIsNaNF(rt)) {
        rt = ztest0;
      }

      ztest0 = b_s[m + 1] / rt;
      smm1 = b_s[m] / rt;
      emm1 = e[m] / rt;
      sqds = b_s[c_q] / rt;
      smm1 = ((smm1 + ztest0) * (smm1 - ztest0) + emm1 * emm1) / 2.0F;
      emm1 *= ztest0;
      emm1 *= emm1;
      if ((smm1 != 0.0F) || (emm1 != 0.0F)) {
        shift = std::sqrt(smm1 * smm1 + emm1);
        if (smm1 < 0.0F) {
          shift = -shift;
        }

        shift = emm1 / (smm1 + shift);
      } else {
        shift = 0.0F;
      }

      ztest0 = (sqds + ztest0) * (sqds - ztest0) + shift;
      smm1 = e[c_q] / rt * sqds;
      for (qq = c_q + 1; qq <= m + 1; qq++) {
        xrotg_w5ZKw2NN(&ztest0, &smm1, &rt, &sqds);
        if (qq > c_q + 1) {
          e[qq - 2] = ztest0;
        }

        smm1 = e[qq - 1];
        emm1 = b_s[qq - 1];
        ztest0 = emm1 * rt + smm1 * sqds;
        e[qq - 1] = smm1 * rt - emm1 * sqds;
        smm1 = sqds * b_s[qq];
        b_s[qq] *= rt;
        xrot_LwW9aiKR(Vf, 1 + ((qq - 1) << 2), 1 + (qq << 2), rt, sqds);
        xrotg_w5ZKw2NN(&ztest0, &smm1, &rt, &sqds);
        b_s[qq - 1] = ztest0;
        smm1 = e[qq - 1];
        ztest0 = smm1 * rt + sqds * b_s[qq];
        b_s[qq] = smm1 * -sqds + rt * b_s[qq];
        smm1 = sqds * e[qq];
        e[qq] *= rt;
        xrot_LwW9aiKR(U, 1 + ((qq - 1) << 2), 1 + (qq << 2), rt, sqds);
      }

      e[m] = ztest0;
      qp1q++;
      break;

     default:
      if (b_s[c_q] < 0.0F) {
        b_s[c_q] = -b_s[c_q];
        xscal_Abpc9f1Z(-1.0F, Vf, 1 + (c_q << 2));
      }

      qp1q = c_q + 1;
      while ((c_q + 1 < 4) && (b_s[c_q] < b_s[qp1q])) {
        rt = b_s[c_q];
        b_s[c_q] = b_s[qp1q];
        b_s[qp1q] = rt;
        xswap_XNI9nwQz(Vf, 1 + (c_q << 2), 1 + ((c_q + 1) << 2));
        xswap_XNI9nwQz(U, 1 + (c_q << 2), 1 + ((c_q + 1) << 2));
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
    V[1 + (m << 2)] = Vf[c_q + 1];
    V[2 + (m << 2)] = Vf[c_q + 2];
    V[3 + (m << 2)] = Vf[c_q + 3];
  }
}
