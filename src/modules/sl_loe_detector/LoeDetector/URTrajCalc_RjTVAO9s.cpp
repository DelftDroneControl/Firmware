/*
 * /home/bramsvs/src/monorepo/simulink_model/.codeGenCache/slprj/grt/_sharedutils/URTrajCalc_RjTVAO9s.cpp
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
 * Created for block: URControl
 */

#include "rtwtypes.h"
#include <cmath>
#include "rt_nonfinite.h"
#include "URTrajCalc_RjTVAO9s.h"

/*
 * Function for MATLAB Function: '<S5>/attitude controller'
 * function t = URTrajCalc(theta0, w0, accMax)
 */
real_T URTrajCalc_RjTVAO9s(real_T theta0, real_T w0, real_T accMax)
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
