/*
 * /home/bramsvs/src/monorepo/simulink_model/.codeGenCache/slprj/grt/_sharedutils/erfc_XTzCAQjC.cpp
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
#include <math.h>
#include "rt_nonfinite.h"
#include "rt_powd_snf.h"
#include "erfc_XTzCAQjC.h"

/* Function for MATLAB Function: '<Root>/MATLAB Function5' */
real32_T erfc_XTzCAQjC(real32_T x)
{
  real_T absx;
  real_T z;
  real_T s;
  real_T R;
  int32_T e;

  /* ========================== COPYRIGHT NOTICE ============================ */
  /*  The algorithms for calculating ERF(X) and ERFC(X) are derived           */
  /*  from FDLIBM, which has the following notice:                            */
  /*                                                                          */
  /*  Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.       */
  /*                                                                          */
  /*  Developed at SunSoft, a Sun Microsystems, Inc. business.                */
  /*  Permission to use, copy, modify, and distribute this                    */
  /*  software is freely granted, provided that this notice                   */
  /*  is preserved.                                                           */
  /* =============================    END    ================================ */
  absx = std::abs((real_T)x);
  if (rtIsNaN((real_T)x)) {
    absx = x;
  } else if (rtIsInf((real_T)x)) {
    if (x < 0.0F) {
      absx = 2.0;
    } else {
      absx = 0.0;
    }
  } else if (absx < 0.84375) {
    if (absx < 1.3877787807814457E-17) {
      absx = 1.0 - x;
    } else {
      z = static_cast<real_T>(x) * x;
      if (x < 0.25F) {
        absx = 1.0 - (x * (((((z * -2.3763016656650163E-5 +
          -0.0057702702964894416) * z + -0.02848174957559851) * z +
                             -0.3250421072470015) * z + 0.12837916709551256) /
                           (((((z * -3.9602282787753681E-6 +
          0.00013249473800432164) * z + 0.0050813062818757656) * z +
                              0.0650222499887673) * z + 0.39791722395915535) * z
                            + 1.0)) + x);
      } else {
        absx = 0.5 - (x * (((((z * -2.3763016656650163E-5 +
          -0.0057702702964894416) * z + -0.02848174957559851) * z +
                             -0.3250421072470015) * z + 0.12837916709551256) /
                           (((((z * -3.9602282787753681E-6 +
          0.00013249473800432164) * z + 0.0050813062818757656) * z +
                              0.0650222499887673) * z + 0.39791722395915535) * z
                            + 1.0)) + (x - 0.5));
      }
    }
  } else if (absx < 1.25) {
    if (x >= 0.0F) {
      absx = 0.15493708848953247 - (((((((absx - 1.0) * -0.0021663755948687908 +
        0.035478304325618236) * (absx - 1.0) + -0.11089469428239668) * (absx -
        1.0) + 0.31834661990116175) * (absx - 1.0) + -0.37220787603570132) *
        (absx - 1.0) + 0.41485611868374833) * (absx - 1.0) +
        -0.0023621185607526594) / (((((((absx - 1.0) * 0.011984499846799107 +
        0.013637083912029051) * (absx - 1.0) + 0.12617121980876164) * (absx -
        1.0) + 0.071828654414196266) * (absx - 1.0) + 0.540397917702171) * (absx
        - 1.0) + 0.10642088040084423) * (absx - 1.0) + 1.0);
    } else {
      absx = ((((((((absx - 1.0) * -0.0021663755948687908 + 0.035478304325618236)
                   * (absx - 1.0) + -0.11089469428239668) * (absx - 1.0) +
                  0.31834661990116175) * (absx - 1.0) + -0.37220787603570132) *
                (absx - 1.0) + 0.41485611868374833) * (absx - 1.0) +
               -0.0023621185607526594) / (((((((absx - 1.0) *
        0.011984499846799107 + 0.013637083912029051) * (absx - 1.0) +
        0.12617121980876164) * (absx - 1.0) + 0.071828654414196266) * (absx -
                  1.0) + 0.540397917702171) * (absx - 1.0) + 0.10642088040084423)
               * (absx - 1.0) + 1.0) + 0.84506291151046753) + 1.0;
    }
  } else if (x < -6.0F) {
    absx = 2.0;
  } else if (x >= 28.0F) {
    absx = 0.0;
  } else {
    s = 1.0 / (absx * absx);
    if (absx < 2.8571414947509766) {
      R = ((((((s * -9.8143293441691455 + -81.2874355063066) * s +
               -184.60509290671104) * s + -162.39666946257347) * s +
             -62.375332450326006) * s + -10.558626225323291) * s +
           -0.69385857270718176) * s + -0.0098649440348471482;
      s = (((((((s * -0.0604244152148581 + 6.5702497703192817) * s +
                108.63500554177944) * s + 429.00814002756783) * s +
              645.38727173326788) * s + 434.56587747522923) * s +
            137.65775414351904) * s + 19.651271667439257) * s + 1.0;
    } else {
      R = (((((s * -483.5191916086514 + -1025.0951316110772) * s +
              -637.56644336838963) * s + -160.63638485582192) * s +
            -17.757954917754752) * s + -0.799283237680523) * s +
        -0.0098649429247001;
      s = ((((((s * -22.440952446585818 + 474.52854120695537) * s +
               2553.0504064331644) * s + 3199.8582195085955) * s +
             1536.729586084437) * s + 325.79251299657392) * s +
           30.338060743482458) * s + 1.0;
    }

    if ((!rtIsInf(absx)) && (!rtIsNaN(absx))) {
      z = frexp(absx, &e);
    } else {
      z = absx;
      e = 0;
    }

    z = std::floor(z * 2.097152E+6) / 2.097152E+6 * rt_powd_snf(2.0, static_cast<
      real_T>(e));
    absx = std::exp((z - absx) * (z + absx) + R / s) * std::exp(-z * z - 0.5625)
      / absx;
    if (x < 0.0F) {
      absx = 2.0 - absx;
    }
  }

  return static_cast<real32_T>(absx);
}
