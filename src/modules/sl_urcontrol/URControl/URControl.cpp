/*
 * URControl.cpp
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "URControl".
 *
 * Model version              : 1.1516
 * Simulink Coder version : 9.1 (R2019a) 23-Nov-2018
 * C++ source code generated on : Thu Oct 24 16:18:01 2019
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "URControl.h"
#include "URControl_private.h"
#include "ekf_state_jacob_WRvyoYwd.h"
#include "mrdivide_helper_D6MymrEr.h"
#include "norm_2e9Xj4lM.h"
#include "norm_wXO8gvHp.h"
#include "rt_atan2d_snf.h"
#include "rt_powd_snf.h"

const daqBus URControl_rtZdaqBus = {
  {
    0.0, 0.0, 0.0 }
  ,                                    /* pos */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* posRaw */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* vel */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* att */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* attRaw */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* acc */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* accRaw */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* n */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* omega */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* omegaf */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* omegaUV */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* omegafUV */

  {
    0.0, 0.0, 0.0, 0.0 }
  ,                                    /* wRotor */

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
  ,                                    /* posTarget */

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
  ,                                    /* dw_lin */

  {
    0.0, 0.0, 0.0, 0.0 }
  /* inpActual */
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
  ,                                    /* uv_min */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* vel_ref */

  {
    0.0, 0.0, 0.0 }
  /* pos_ref */
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
  8.0e-6,
  500.0,
  9.81,
  0.0,
  300.0,
  1200.0,
  300.0,
  -1.0,
  30.0,

  { 0.70710678118654768, 0.70710678118654768, -0.53801602916367752,
    0.53801602916367752 },
  1.0,
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
  0.7,
  -2.0,
  1.0,
  2.0,
  4.0,
  0.8,
  15.0,
  15.0,
  0.5,
  0.52631578947368418,
  1.2280701754385965,
  1.0,
  5.0,
  2.0,
  20.0,
  0.0,
  0.0,
  50.0,
  -0.5,
  -0.1,
  0.0,

  { 0.0, 0.0, -1.0 },
  0.0,
  -10.0,
  15.0,
  200.0,
  1.2217304763960306,
  0.2,
  4.0,
  0.01,
  10.0,
  2.0,
  -3.0,
  2.0,
  1.0,

  { 15.0, 15.0, 3.0 },

  { 0.0, 0.0, 0.0 },

  { 0.3, 0.3, 0.01 },
  0.8,
  0.8,
  0.5,
  1.0,

  { 0.4, 0.4, 0.045 },
  10000.0,
  10000.0,
  100.0,
  4.0,
  0.0,
  100000.0,
  10.0,
  1.0,
  0.1,
  10.0,
  0.0,
  0.13,
  0.0,
  300.0,
  0.0,
  0.0,
  0.3,
  4.0,
  2.0,
  0.0,
  -1.0,
  1.0,
  1.0,
  1.0,

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  { 0.75, 0.0, 0.0, 0.75 },

  { 0.09591020137530519, -1.3744684282718478e-17, -4.4647173648414029e-17,
    0.095910201375305149, -3.4316787639704989e-16, 1.1547005383792535,
    -1.1547005383792517, -6.1329133878097858e-17, 1.0848931838390774,
    -5.3620503503766022e-16, -1.594454111206573e-16, 1.0848931838390756 },

  { 0.069560172112979129, 0.0061181250868588624, -0.0061181250868588347,
    0.069560172112979338, -1.1185940944686172, 0.28649709449358723,
    -0.2864970944935879, -1.1185940944686221, 0.85129608911209242,
    5.3422614851144778e-16, 2.68080490917748e-16, 0.85129608911209687 },

  { 0.069560172112979074, -0.0061181250868587375, 0.0061181250868591608,
    0.069560172112979241, 1.1185940944686186, 0.28649709449358729,
    -0.28649709449358551, 1.1185940944686219, 0.85129608911209365,
    5.1223096699074972e-16, 1.1095480561315021e-15, 0.85129608911209664 },

  { 0.069560172112979129, 0.0061181250868588624, -0.0061181250868588347,
    0.069560172112979338, -1.1185940944686172, 0.28649709449358723,
    -0.2864970944935879, -1.1185940944686221, 0.85129608911209242,
    5.3422614851144778e-16, 2.68080490917748e-16, 0.85129608911209687 },

  { 0.069560172112979074, -0.0061181250868587375, 0.0061181250868591608,
    0.069560172112979241, 1.1185940944686186, 0.28649709449358729,
    -0.28649709449358551, 1.1185940944686219, 0.85129608911209365,
    5.1223096699074972e-16, 1.1095480561315021e-15, 0.85129608911209664 },

  { 0.073475121897948553, -2.2540482931797978e-17, 0.049865045254938824,
    -2.5257487274438837e-17, -1.1714059531811278, 3.9849852177085166e-16,
    -1.137749866850529, 3.199041517432141e-16, 0.88783185191581182,
    -3.4787683774059466e-16, -4.2395693499611852e-17, -1.3832324857233816e-30 },

  { -0.0, 0.049865045254936957, 0.0, 0.07347512189794872, 0.0,
    1.1377498668505073, 0.0, 1.1714059531811298, 0.0, -2.1704557136786416e-16,
    0.0, 0.88783185191581093 },
  80.0,
  30.0,
  20.0,
  50.0,
  40.0,
  0.01,
  0.0,
  1.0,
  0.19,
  0.0,
  0.53,
  0.0,
  0.0,

  { 3.0, 0.0, 0.0, 0.0, 3.0, 0.0, 0.0, 0.0, 0.0 },

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 10.0 },
  0.0,

  { 0.1, 0.1, 0.5 },
  1.0,

  { 150.0, 150.0, 100.0, -8.0, -150.0, 150.0, -100.0, -8.0, -150.0, -150.0,
    100.0, -8.0, 150.0, -150.0, -100.0, -8.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, -1.0,
    0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, -1.0, 0.0 },

  { 30.0, 30.0, 3.0 },
  0.98,
  0.9,
  600.0,

  { 40.0, 40.0, 2.0 },
  0.9,

  { 20.0, 20.0, 1.0 },
  150.0,
  150.0,
  -100.0,
  5.0,

  { 0.0, 1.0, -1.0, -1.0, -1.0, 0.0, 1.0, -1.0, 0.0, -1.0, -1.0, -1.0, 1.0, 0.0,
    1.0, -1.0 },

  { 10000.0, 0.0, 0.0, 0.0, 0.0, 10000.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 100.0 },

  { 0.0001, 0.0, 0.0, 0.0, 0.0, 0.0001, 0.0, 0.0, 0.0, 0.0, 0.0001, 0.0, 0.0,
    0.0, 0.0, 0.0001 },
  200.0,

  { 100.0, 100.0, 50.0, 20.0 },

  { 30.0, 30.0, 10.0, 2.0 },
  0.2
} ;                                    /* Variable: URControlParams
                                        * Referenced by:
                                        *   '<Root>/delay'
                                        *   '<S3>/MATLAB Function'
                                        *   '<S4>/altitude control'
                                        *   '<S4>/position control'
                                        *   '<S4>/yaw rate control'
                                        *   '<S5>/URControl_att'
                                        *   '<S7>/basic estimators'
                                        *   '<S21>/MATLAB Function'
                                        *   '<S21>/MATLAB Function11'
                                        *   '<S21>/Gain2'
                                        *   '<S23>/MATLAB Function'
                                        */

/* Exported block states */
boolean_T _URControl_SharedDataInit_ = false;/* synthesized block */

/* data stores shared across model instances */
SharedDSM_URControl_T URControlModelClass::URControl_SharedDSM;

/*
 * Output and update for action system:
 *    '<S36>/If Action Subsystem2'
 *    '<S106>/If Action Subsystem2'
 *    '<S114>/If Action Subsystem2'
 */
void URControl_IfActionSubsystem2(real_T rtu_In, real_T *rty_OutOrig)
{
  /* Inport: '<S39>/In' */
  *rty_OutOrig = rtu_In;
}

/*
 * System initialize for atomic system:
 *    '<S21>/MATLAB Function'
 *    '<S23>/MATLAB Function'
 */
void URControl_MATLABFunction_Init(DW_MATLABFunction_URControl_T *localDW)
{
  /* :  psi_last = 0; */
  localDW->psi_last = 0.0;
}

/*
 * Output and update for atomic system:
 *    '<S21>/MATLAB Function'
 *    '<S23>/MATLAB Function'
 */
void URControl_MATLABFunction(const real_T rtu_mag[3], const real_T rtu_att[3],
  B_MATLABFunction_URControl_T *localB, DW_MATLABFunction_URControl_T *localDW)
{
  real_T x;
  real_T y;
  real_T psi0;
  real_T y_tmp;

  /* :  if isempty(psi_last) */
  /* :  x = mag(1); */
  /* :  y = mag(2); */
  /* :  h = sqrt(x^2+y^2); */
  /* :  if URControlParams.mag_est_type == 0 */
  if (URControlParams.mag_est_type == 0.0) {
    /* :  psi0 = acos(abs(x)/h); */
    psi0 = std::acos(std::abs(rtu_mag[0]) / std::sqrt(rtu_mag[0] * rtu_mag[0] +
      rtu_mag[1] * rtu_mag[1]));

    /* :  if x>0 */
    if (rtu_mag[0] > 0.0) {
      /* :  if y>0 */
      if (rtu_mag[1] > 0.0) {
        /* :  psi = - psi0; */
        localB->psi = -psi0;
      } else {
        /* :  else */
        /* :  psi = psi0; */
        localB->psi = psi0;
      }
    } else {
      /* :  else */
      /* :  if y>0 */
      if (rtu_mag[1] > 0.0) {
        /* :  psi= -pi + psi0; */
        localB->psi = -3.1415926535897931 + psi0;
      } else {
        /* :  else */
        /* :  psi = pi - psi0; */
        localB->psi = 3.1415926535897931 - psi0;
      }
    }
  } else {
    /* :  else */
    /* :  phi = att(1); */
    /* :  theta = att(2); */
    /* :  alpha = URControlParams.magxI; */
    /* :  beta = URControlParams.magzI; */
    /* :  if isnan(psi_last) */
    if (rtIsNaN(localDW->psi_last)) {
      /* :  psi_last = 0; */
      localDW->psi_last = 0.0;
    }

    /* :  x = (mag(1) + beta*sin(theta))/alpha/cos(theta); */
    y = std::cos(rtu_att[1]);
    psi0 = std::sin(rtu_att[1]);
    x = (URControlParams.magzI * psi0 + rtu_mag[0]) / URControlParams.magxI / y;

    /* :  y = (mag(2) - beta*cos(theta)*sin(phi) - alpha*sin(theta)*sin(phi)*cos(psi_last))/alpha/cos(phi); */
    y_tmp = std::sin(rtu_att[0]);
    y = ((rtu_mag[1] - URControlParams.magzI * y * y_tmp) -
         URControlParams.magxI * psi0 * y_tmp * std::cos(localDW->psi_last)) /
      URControlParams.magxI / std::cos(rtu_att[0]);

    /* :  psi0 = acos(abs(x)/sqrt(x^2+y^2)); */
    psi0 = std::acos(std::abs(x) / std::sqrt(x * x + y * y));

    /* :  if x>0 */
    if (x > 0.0) {
      /* :  if y>0 */
      if (y > 0.0) {
        /* :  psi = - psi0; */
        localB->psi = -psi0;
      } else {
        /* :  else */
        /* :  psi = psi0; */
        localB->psi = psi0;
      }
    } else {
      /* :  else */
      /* :  if y>0 */
      if (y > 0.0) {
        /* :  psi= -pi + psi0; */
        localB->psi = -3.1415926535897931 + psi0;
      } else {
        /* :  else */
        /* :  psi = pi - psi0; */
        localB->psi = 3.1415926535897931 - psi0;
      }
    }
  }

  /* :  psi = psi - URControlParams.mag_psi_shift; */
  localB->psi -= URControlParams.mag_psi_shift;

  /* :  if psi > pi */
  if (localB->psi > 3.1415926535897931) {
    /* :  psi  = -pi + (psi-pi); */
    localB->psi = (localB->psi - 3.1415926535897931) + -3.1415926535897931;
  } else {
    if (localB->psi < -3.1415926535897931) {
      /* :  elseif psi < -pi */
      /* :  psi = pi - (-pi-psi); */
      localB->psi = 3.1415926535897931 - (-3.1415926535897931 - localB->psi);
    }
  }

  /* :  psi_last = psi; */
  localDW->psi_last = localB->psi;
}

/*
 * Output and update for atomic system:
 *    '<S21>/MATLAB Function2'
 *    '<S23>/MATLAB Function1'
 */
void URControl_MATLABFunction2(B_MATLABFunction2_URControl_T *localB)
{
  real_T psi_data;
  boolean_T positiveInput_data;
  boolean_T b_data;
  boolean_T d;
  boolean_T e;
  int32_T trueCount;
  real_T x_data;
  real_T r;
  boolean_T rEQ0;
  real_T q;

  /* :  q = (lambda < -pi) | (pi < lambda); */
  d = (localB->lambda < -3.1415926535897931);
  e = (3.1415926535897931 < localB->lambda);

  /* :  psi = lambda(q) + pi; */
  trueCount = 0;
  if (d || e) {
    trueCount = 1;
  }

  if (0 <= trueCount - 1) {
    psi_data = localB->lambda + 3.1415926535897931;
    positiveInput_data = (psi_data > 0.0);
  }

  /* :  positiveInput = (psi > 0); */
  /* :  psi = mod(psi, 2*pi); */
  if (0 <= trueCount - 1) {
    x_data = psi_data;
  }

  if (0 <= static_cast<int8_T>(trueCount) - 1) {
    r = psi_data;
  }

  if (0 <= static_cast<int8_T>(trueCount) - 1) {
    if (rtIsNaN(x_data) || rtIsInf(x_data)) {
      r = (rtNaN);
    } else if (x_data == 0.0) {
      r = 0.0;
    } else {
      r = std::fmod(x_data, 6.2831853071795862);
      rEQ0 = (r == 0.0);
      if (!rEQ0) {
        q = std::abs(x_data / 6.2831853071795862);
        rEQ0 = (std::abs(q - std::floor(q + 0.5)) <= 2.2204460492503131E-16 * q);
      }

      if (rEQ0) {
        r = 0.0;
      } else {
        if (x_data < 0.0) {
          r += 6.2831853071795862;
        }
      }
    }
  }

  if (0 <= static_cast<int8_T>(trueCount) - 1) {
    psi_data = r;
    b_data = (r == 0.0);
  }

  /* :  psi((psi == 0) & positiveInput) = 2*pi; */
  if ((0 <= static_cast<int8_T>(trueCount) - 1) && (b_data && positiveInput_data))
  {
    psi_data = 6.2831853071795862;
  }

  /* :  lambda(q) = psi - pi; */
  if (d || e) {
    localB->lambda = psi_data - 3.1415926535897931;
  }
}

/*
 * Output and update for atomic system:
 *    '<S21>/MATLAB Function3'
 *    '<S21>/MATLAB Function4'
 *    '<S23>/MATLAB Function3'
 *    '<S23>/MATLAB Function4'
 */
void URControl_MATLABFunction3(real_T rtu_u, B_MATLABFunction3_URControl_T
  *localB)
{
  /* :  if isnan(u) */
  if (rtIsNaN(rtu_u)) {
    /* :  y = 0; */
    localB->y = 0.0;
  } else {
    /* :  else */
    /* :  y = u; */
    localB->y = rtu_u;
  }
}

/*
 * System initialize for atomic system:
 *    '<S21>/unwrap2pi'
 *    '<S23>/unwrap2pi'
 */
void URControl_unwrap2pi_Init(DW_unwrap2pi_URControl_T *localDW)
{
  localDW->psi_last_not_empty = false;

  /* :  N = 0; */
  localDW->N = 0.0;
}

/*
 * Output and update for atomic system:
 *    '<S21>/unwrap2pi'
 *    '<S23>/unwrap2pi'
 */
void URControl_unwrap2pi(real_T rtu_psi0, B_unwrap2pi_URControl_T *localB,
  DW_unwrap2pi_URControl_T *localDW)
{
  real_T tmp;

  /* :  if isempty(psi_last) */
  if (!localDW->psi_last_not_empty) {
    /* :  psi_last = psi0; */
    localDW->psi_last = rtu_psi0;
    localDW->psi_last_not_empty = true;
  }

  /* :  if isempty(N) */
  /* :  if (psi0-psi_last)>1.0*pi */
  tmp = rtu_psi0 - localDW->psi_last;
  if (tmp > 3.1415926535897931) {
    /* :  N = N-1; */
    localDW->N--;
  } else {
    if (tmp < -3.1415926535897931) {
      /* :  elseif (psi0-psi_last)< -1.0*pi */
      /* :  N = N+1; */
      localDW->N++;
    }
  }

  /* :  psi = psi0 + 2*N*pi; */
  localB->psi = 2.0 * localDW->N * 3.1415926535897931 + rtu_psi0;

  /* :  psi_last = psi0; */
  localDW->psi_last = rtu_psi0;
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

/* Model step function */
void URControlModelClass::step()
{
  /* local block i/o variables */
  stateBus rtb_stateOut;
  real_T rtb_acc[3];
  real_T rtb_accs_filter[3];
  real_T rtb_r_cmd;
  real_T rtb_n_des[3];
  real_T mI[3];
  real_T R_E[9];
  real_T R_O[9];
  real_T Rc[9];
  int32_T r2;
  int32_T r3;
  int32_T rtemp;
  real_T FMin[4];
  boolean_T rEQ0;
  real_T y[7];
  real_T dHdx[70];
  real_T qconj[4];
  real_T gain[70];
  static const int8_T b[10] = { 0, 0, 0, 0, 0, 0, 1, 0, 0, 0 };

  static const int8_T c[10] = { 0, 0, 0, 0, 0, 0, 0, 1, 0, 0 };

  static const int8_T d[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 };

  static const int8_T e[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 };

  real_T Jacobian[100];
  real_T rtb_pos[3];
  real_T rtb_omega[3];
  real_T rtb_att[3];
  real_T rtb_mag[3];
  int32_T i;
  real_T rtb_u2[3];
  real_T rtb_enableMeas;
  real_T rtb_DataStoreRead_k[10];
  real_T rtb_Merge;
  real_T rtb_Product3_a;
  real_T rtb_fcn3;
  real_T rtb_psi_mag_filter0;
  real_T rtb_fcn5;
  real_T rtb_fcn3_d;
  boolean_T rtb_Compare_j;
  real_T rtb_Integrator_o;
  real_T rtb_alpha[3];
  real_T rtb_Delay1[3];
  real_T rtb_Delay_g;
  real_T rtb_xNew[10];
  real_T rtb_TmpSignalConversionAtSFunct[6];
  real_T dHdx_0[49];
  real_T rtb_q_dot_0[4];
  real_T rtb_q_dot_1[4];
  real_T rtb_pos_0[7];
  real_T dHdx_1[70];
  real_T Jacobian_0[100];
  real_T rtb_b_g;
  uint32_T tmp;
  real_T rtb_vel_idx_2;
  real_T rtb_vel_idx_1;
  real_T rtb_vel_idx_0;
  real_T rtb_b_l_idx_1;
  real_T rtb_b_l_idx_0;
  real_T rtb_q_dot_idx_3;
  real_T rtb_q_dot_idx_2;
  real_T rtb_q_dot_idx_1;
  real_T rtb_q_dot_idx_0;
  boolean_T b_b_idx_1;
  boolean_T b_b_idx_0;
  real_T R_E_tmp;
  real_T R_E_tmp_0;
  boolean_T tmp_0;
  boolean_T tmp_1;

  /* DataTypeConversion: '<Root>/Data Type Conversion1' incorporates:
   *  Inport: '<Root>/accs'
   */
  rtb_acc[0] = URControl_U.accs[0];

  /* DataTypeConversion: '<Root>/Data Type Conversion4' incorporates:
   *  Inport: '<Root>/pos'
   */
  rtb_pos[0] = URControl_U.pos[0];

  /* DataTypeConversion: '<Root>/Data Type Conversion5' incorporates:
   *  Inport: '<Root>/rates'
   */
  rtb_omega[0] = URControl_U.rates[0];

  /* DataTypeConversion: '<Root>/Data Type Conversion6' incorporates:
   *  Inport: '<Root>/att'
   */
  rtb_att[0] = URControl_U.att[0];

  /* DataTypeConversion: '<Root>/Data Type Conversion3' incorporates:
   *  Inport: '<Root>/mag'
   */
  rtb_mag[0] = URControl_U.mag[0];

  /* DataTypeConversion: '<Root>/Data Type Conversion1' incorporates:
   *  Inport: '<Root>/accs'
   */
  rtb_acc[1] = URControl_U.accs[1];

  /* DataTypeConversion: '<Root>/Data Type Conversion4' incorporates:
   *  Inport: '<Root>/pos'
   */
  rtb_pos[1] = URControl_U.pos[1];

  /* DataTypeConversion: '<Root>/Data Type Conversion5' incorporates:
   *  Inport: '<Root>/rates'
   */
  rtb_omega[1] = URControl_U.rates[1];

  /* DataTypeConversion: '<Root>/Data Type Conversion6' incorporates:
   *  Inport: '<Root>/att'
   */
  rtb_att[1] = URControl_U.att[1];

  /* DataTypeConversion: '<Root>/Data Type Conversion3' incorporates:
   *  Inport: '<Root>/mag'
   */
  rtb_mag[1] = URControl_U.mag[1];

  /* DataTypeConversion: '<Root>/Data Type Conversion1' incorporates:
   *  Inport: '<Root>/accs'
   */
  rtb_acc[2] = URControl_U.accs[2];

  /* DataTypeConversion: '<Root>/Data Type Conversion4' incorporates:
   *  Inport: '<Root>/pos'
   */
  rtb_pos[2] = URControl_U.pos[2];

  /* DataTypeConversion: '<Root>/Data Type Conversion5' incorporates:
   *  Inport: '<Root>/rates'
   */
  rtb_omega[2] = URControl_U.rates[2];

  /* DataTypeConversion: '<Root>/Data Type Conversion6' incorporates:
   *  Inport: '<Root>/att'
   */
  rtb_att[2] = URControl_U.att[2];

  /* DataTypeConversion: '<Root>/Data Type Conversion3' incorporates:
   *  Inport: '<Root>/mag'
   */
  rtb_mag[2] = URControl_U.mag[2];

  /* Gain: '<S27>/1//2' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion6'
   *  Inport: '<Root>/att'
   */
  rtb_q_dot_idx_0 = 0.5 * URControl_U.att[2];

  /* Fcn: '<S27>/q0' incorporates:
   *  Trigonometry: '<S27>/sincos'
   */
  rtb_b_l_idx_0 = std::cos(rtb_q_dot_idx_0);
  rtb_enableMeas = std::sin(rtb_q_dot_idx_0);

  /* Gain: '<S27>/1//2' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion6'
   *  Inport: '<Root>/att'
   */
  rtb_q_dot_idx_0 = 0.5 * URControl_U.att[1];

  /* Fcn: '<S27>/q0' incorporates:
   *  Trigonometry: '<S27>/sincos'
   */
  rtb_b_l_idx_1 = std::cos(rtb_q_dot_idx_0);
  rtb_fcn3_d = std::sin(rtb_q_dot_idx_0);

  /* Gain: '<S27>/1//2' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion6'
   *  Inport: '<Root>/att'
   */
  rtb_q_dot_idx_0 = 0.5 * URControl_U.att[0];

  /* Trigonometry: '<S27>/sincos' */
  rtb_psi_mag_filter0 = std::sin(rtb_q_dot_idx_0);
  rtb_b_g = std::cos(rtb_q_dot_idx_0);

  /* SignalConversion: '<S25>/TmpSignal ConversionAt SFunction Inport1' incorporates:
   *  Fcn: '<S27>/q0'
   *  Fcn: '<S27>/q1'
   *  MATLAB Function: '<S20>/MATLAB Function'
   */
  rtb_q_dot_idx_0 = rtb_b_l_idx_0 * rtb_b_l_idx_1 * rtb_b_g + rtb_enableMeas *
    rtb_fcn3_d * rtb_psi_mag_filter0;
  rtb_q_dot_idx_1 = rtb_b_l_idx_0 * rtb_b_l_idx_1 * rtb_psi_mag_filter0 -
    rtb_enableMeas * rtb_fcn3_d * rtb_b_g;

  /* Fcn: '<S27>/q2' incorporates:
   *  Fcn: '<S27>/q1'
   *  Fcn: '<S27>/q3'
   */
  rtb_b_l_idx_1 *= rtb_enableMeas;
  rtb_b_l_idx_0 *= rtb_fcn3_d;

  /* SignalConversion: '<S25>/TmpSignal ConversionAt SFunction Inport1' incorporates:
   *  Fcn: '<S27>/q2'
   *  Fcn: '<S27>/q3'
   *  MATLAB Function: '<S20>/MATLAB Function'
   */
  rtb_q_dot_idx_2 = rtb_b_l_idx_0 * rtb_b_g + rtb_b_l_idx_1 *
    rtb_psi_mag_filter0;
  rtb_q_dot_idx_3 = rtb_b_l_idx_1 * rtb_b_g - rtb_b_l_idx_0 *
    rtb_psi_mag_filter0;

  /* MATLAB Function: '<S20>/MATLAB Function' incorporates:
   *  Memory: '<S20>/Memory'
   */
  /* :  error1 = norm(qMeas - qState); */
  /* :  error2 = norm(-qMeas - qState); */
  /* :  if error1 > error2 */
  rtb_q_dot_0[0] = rtb_q_dot_idx_0 - URControl_DW.Memory_PreviousInput[0];
  rtb_q_dot_1[0] = -rtb_q_dot_idx_0 - URControl_DW.Memory_PreviousInput[0];
  rtb_q_dot_0[1] = rtb_q_dot_idx_1 - URControl_DW.Memory_PreviousInput[1];
  rtb_q_dot_1[1] = -rtb_q_dot_idx_1 - URControl_DW.Memory_PreviousInput[1];
  rtb_q_dot_0[2] = rtb_q_dot_idx_2 - URControl_DW.Memory_PreviousInput[2];
  rtb_q_dot_1[2] = -rtb_q_dot_idx_2 - URControl_DW.Memory_PreviousInput[2];
  rtb_q_dot_0[3] = rtb_q_dot_idx_3 - URControl_DW.Memory_PreviousInput[3];
  rtb_q_dot_1[3] = -rtb_q_dot_idx_3 - URControl_DW.Memory_PreviousInput[3];
  if (norm_wXO8gvHp(rtb_q_dot_0) > norm_wXO8gvHp(rtb_q_dot_1)) {
    /* :  q = -qMeas; */
    rtb_q_dot_idx_0 = -rtb_q_dot_idx_0;
    rtb_q_dot_idx_1 = -rtb_q_dot_idx_1;
    rtb_q_dot_idx_2 = -rtb_q_dot_idx_2;
    rtb_q_dot_idx_3 = -rtb_q_dot_idx_3;
  } else {
    /* :  else */
    /* :  q = qMeas; */
  }

  /* MATLAB Function: '<S20>/enableMeas' incorporates:
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

  /* End of MATLAB Function: '<S20>/enableMeas' */

  /* Outputs for Enabled SubSystem: '<S24>/Correct1' incorporates:
   *  EnablePort: '<S29>/Enable'
   */
  /* DataTypeConversion: '<S24>/DataTypeConversion_Enable1' */
  if (rtb_enableMeas != 0.0) {
    /* MATLAB Function: '<S29>/Correct' incorporates:
     *  DataStoreRead: '<S29>/Data Store ReadX'
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
    rtb_b_l_idx_1 = (0.0 * URControl_DW.x[6] - 0.0 * URControl_DW.x[9]) + 0.0 *
      URControl_DW.x[8];
    dHdx[42] = rtb_b_l_idx_1;
    rtb_b_g = (0.0 * URControl_DW.x[7] + 0.0 * URControl_DW.x[8]) + 0.0 *
      URControl_DW.x[9];
    dHdx[49] = rtb_b_g;
    rtb_b_l_idx_0 = (0.0 * URControl_DW.x[7] - 0.0 * URControl_DW.x[8]) + 0.0 *
      URControl_DW.x[6];
    dHdx[56] = rtb_b_l_idx_0;
    dHdx[63] = (0.0 * URControl_DW.x[7] - 0.0 * URControl_DW.x[6]) - 0.0 *
      URControl_DW.x[9];
    dHdx[1] = 0.0;
    dHdx[8] = 1.0;
    dHdx[15] = 0.0;
    dHdx[22] = 0.0;
    dHdx[29] = 0.0;
    dHdx[36] = 0.0;
    rtb_psi_mag_filter0 = (0.0 * URControl_DW.x[9] + 0.0 * URControl_DW.x[6]) -
      0.0 * URControl_DW.x[7];
    dHdx[43] = rtb_psi_mag_filter0;
    dHdx[50] = (0.0 * URControl_DW.x[8] - 0.0 * URControl_DW.x[7]) - 0.0 *
      URControl_DW.x[6];
    dHdx[57] = rtb_b_g;
    dHdx[64] = rtb_b_l_idx_1;
    dHdx[2] = 0.0;
    dHdx[9] = 0.0;
    dHdx[16] = 1.0;
    dHdx[23] = 0.0;
    dHdx[30] = 0.0;
    dHdx[37] = 0.0;
    dHdx[44] = rtb_b_l_idx_0;
    dHdx[51] = rtb_psi_mag_filter0;
    dHdx[58] = (0.0 * URControl_DW.x[9] - 0.0 * URControl_DW.x[6]) - 0.0 *
      URControl_DW.x[8];
    dHdx[65] = rtb_b_g;
    for (r2 = 0; r2 < 10; r2++) {
      dHdx[3 + 7 * r2] = b[r2];
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

    /* SignalConversion: '<S32>/TmpSignal ConversionAt SFunction Inport3' incorporates:
     *  DataTypeConversion: '<Root>/Data Type Conversion4'
     *  Inport: '<Root>/pos'
     *  MATLAB Function: '<S29>/Correct'
     */
    rtb_pos_0[0] = URControl_U.pos[0];
    rtb_pos_0[1] = URControl_U.pos[1];
    rtb_pos_0[2] = URControl_U.pos[2];
    rtb_pos_0[3] = rtb_q_dot_idx_0;
    rtb_pos_0[4] = rtb_q_dot_idx_1;
    rtb_pos_0[5] = rtb_q_dot_idx_2;
    rtb_pos_0[6] = rtb_q_dot_idx_3;

    /* MATLAB Function: '<S29>/Correct' incorporates:
     *  Constant: '<S24>/R1'
     *  DataStoreRead: '<S29>/Data Store ReadP'
     *  SignalConversion: '<S32>/TmpSignal ConversionAt SFunction Inport3'
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
        rtb_Merge = 0.0;
        for (i = 0; i < 10; i++) {
          rtb_Merge += dHdx_1[7 * i + r2] * dHdx[7 * i + r3];
        }

        rtemp = 7 * r3 + r2;
        dHdx_0[rtemp] = rtCP_R1_Value[rtemp] + rtb_Merge;
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
        rtb_Merge = 0.0;
        for (i = 0; i < 10; i++) {
          rtb_Merge += Jacobian[10 * i + r2] * URControl_DW.P[10 * r3 + i];
        }

        i = 10 * r3 + r2;
        Jacobian_0[i] = URControl_DW.P[i] - rtb_Merge;
      }
    }

    /* DataStoreWrite: '<S29>/Data Store WriteP' */
    memcpy(&URControl_DW.P[0], &Jacobian_0[0], 100U * sizeof(real_T));

    /* DataStoreWrite: '<S29>/Data Store WriteX' incorporates:
     *  DataStoreRead: '<S29>/Data Store ReadX'
     *  MATLAB Function: '<S29>/Correct'
     */
    for (r2 = 0; r2 < 10; r2++) {
      rtb_Merge = 0.0;
      for (r3 = 0; r3 < 7; r3++) {
        rtb_Merge += gain[10 * r3 + r2] * y[r3];
      }

      URControl_DW.x[r2] += rtb_Merge;
    }

    /* End of DataStoreWrite: '<S29>/Data Store WriteX' */
  }

  /* End of DataTypeConversion: '<S24>/DataTypeConversion_Enable1' */
  /* End of Outputs for SubSystem: '<S24>/Correct1' */

  /* Outputs for Atomic SubSystem: '<S24>/Output' */
  /* DataStoreRead: '<S30>/Data Store Read' */
  memcpy(&rtb_DataStoreRead_k[0], &URControl_DW.x[0], 10U * sizeof(real_T));

  /* Sqrt: '<S40>/sqrt' incorporates:
   *  DataStoreRead: '<S30>/Data Store Read'
   *  Product: '<S41>/Product'
   *  Product: '<S41>/Product1'
   *  Product: '<S41>/Product2'
   *  Product: '<S41>/Product3'
   *  Sum: '<S41>/Sum'
   */
  rtb_Merge = std::sqrt(((URControl_DW.x[6] * URControl_DW.x[6] +
    URControl_DW.x[7] * URControl_DW.x[7]) + URControl_DW.x[8] * URControl_DW.x
    [8]) + URControl_DW.x[9] * URControl_DW.x[9]);

  /* Product: '<S35>/Product' incorporates:
   *  DataStoreRead: '<S30>/Data Store Read'
   */
  rtb_enableMeas = URControl_DW.x[6] / rtb_Merge;

  /* Product: '<S35>/Product1' incorporates:
   *  DataStoreRead: '<S30>/Data Store Read'
   */
  rtb_q_dot_idx_3 = URControl_DW.x[7] / rtb_Merge;

  /* Product: '<S35>/Product2' incorporates:
   *  DataStoreRead: '<S30>/Data Store Read'
   */
  rtb_q_dot_idx_0 = URControl_DW.x[8] / rtb_Merge;

  /* Product: '<S35>/Product3' incorporates:
   *  DataStoreRead: '<S30>/Data Store Read'
   */
  rtb_Merge = URControl_DW.x[9] / rtb_Merge;

  /* End of Outputs for SubSystem: '<S24>/Output' */

  /* Fcn: '<S26>/fcn2' incorporates:
   *  Fcn: '<S26>/fcn5'
   */
  rtb_b_g = rtb_enableMeas * rtb_enableMeas;
  rtb_b_l_idx_0 = rtb_q_dot_idx_3 * rtb_q_dot_idx_3;
  rtb_psi_mag_filter0 = rtb_q_dot_idx_0 * rtb_q_dot_idx_0;
  rtb_fcn3_d = rtb_Merge * rtb_Merge;
  rtb_Product3_a = ((rtb_b_g + rtb_b_l_idx_0) - rtb_psi_mag_filter0) -
    rtb_fcn3_d;

  /* DSPFlip: '<S20>/Flip1' incorporates:
   *  Fcn: '<S26>/fcn1'
   *  Trigonometry: '<S34>/Trigonometric Function1'
   */
  URControl_B.att_ekfquat[2] = rt_atan2d_snf((rtb_q_dot_idx_3 * rtb_q_dot_idx_0
    + rtb_enableMeas * rtb_Merge) * 2.0, rtb_Product3_a);

  /* Fcn: '<S26>/fcn3' */
  rtb_fcn3 = (rtb_q_dot_idx_3 * rtb_Merge - rtb_enableMeas * rtb_q_dot_idx_0) *
    -2.0;

  /* If: '<S36>/If' incorporates:
   *  Constant: '<S37>/Constant'
   *  Constant: '<S38>/Constant'
   */
  if (rtb_fcn3 > 1.0) {
    /* Outputs for IfAction SubSystem: '<S36>/If Action Subsystem' incorporates:
     *  ActionPort: '<S37>/Action Port'
     */
    rtb_Product3_a = 1.0;

    /* End of Outputs for SubSystem: '<S36>/If Action Subsystem' */
  } else if (rtb_fcn3 < -1.0) {
    /* Outputs for IfAction SubSystem: '<S36>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S38>/Action Port'
     */
    rtb_Product3_a = 1.0;

    /* End of Outputs for SubSystem: '<S36>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S36>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S39>/Action Port'
     */
    URControl_IfActionSubsystem2(rtb_fcn3, &rtb_Product3_a);

    /* End of Outputs for SubSystem: '<S36>/If Action Subsystem2' */
  }

  /* End of If: '<S36>/If' */

  /* Trigonometry: '<S34>/trigFcn' */
  if (rtb_Product3_a > 1.0) {
    rtb_Product3_a = 1.0;
  } else {
    if (rtb_Product3_a < -1.0) {
      rtb_Product3_a = -1.0;
    }
  }

  rtb_b_l_idx_1 = std::asin(rtb_Product3_a);

  /* End of Trigonometry: '<S34>/trigFcn' */

  /* DSPFlip: '<S20>/Flip1' incorporates:
   *  Fcn: '<S26>/fcn4'
   *  Fcn: '<S26>/fcn5'
   *  Trigonometry: '<S34>/Trigonometric Function3'
   */
  URControl_B.att_ekfquat[0] = rt_atan2d_snf((rtb_q_dot_idx_0 * rtb_Merge +
    rtb_enableMeas * rtb_q_dot_idx_3) * 2.0, ((rtb_b_g - rtb_b_l_idx_0) -
    rtb_psi_mag_filter0) + rtb_fcn3_d);
  URControl_B.att_ekfquat[1] = rtb_b_l_idx_1;
  URControl_B.att_ekfquat[1] = rtb_b_l_idx_1;

  /* DiscreteIntegrator: '<S21>/Discrete-Time Integrator' */
  rtb_psi_mag_filter0 = URControl_DW.DiscreteTimeIntegrator_DSTATE;

  /* MATLAB Function: '<S21>/MATLAB Function2' incorporates:
   *  DiscreteIntegrator: '<S21>/Discrete-Time Integrator'
   */
  URControl_B.sf_MATLABFunction2.lambda =
    URControl_DW.DiscreteTimeIntegrator_DSTATE;
  URControl_MATLABFunction2(&URControl_B.sf_MATLABFunction2);

  /* SampleTimeMath: '<S43>/TSamp' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion2'
   *  Inport: '<Root>/vel'
   *
   * About '<S43>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_b_g = URControl_U.vel[0] * 500.0;

  /* Sum: '<S43>/Diff' incorporates:
   *  UnitDelay: '<S43>/UD'
   */
  rtb_u2[0] = rtb_b_g - URControl_DW.UD_DSTATE[0];

  /* Delay: '<S21>/Delay1' */
  rtb_Delay1[0] = URControl_DW.Delay1_DSTATE[0];

  /* SampleTimeMath: '<S43>/TSamp' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion2'
   *  Inport: '<Root>/vel'
   *
   * About '<S43>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_b_l_idx_0 = rtb_b_g;
  rtb_b_g = URControl_U.vel[1] * 500.0;

  /* Sum: '<S43>/Diff' incorporates:
   *  UnitDelay: '<S43>/UD'
   */
  rtb_u2[1] = rtb_b_g - URControl_DW.UD_DSTATE[1];

  /* Delay: '<S21>/Delay1' */
  rtb_Delay1[1] = URControl_DW.Delay1_DSTATE[1];

  /* SampleTimeMath: '<S43>/TSamp' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion2'
   *  Inport: '<Root>/vel'
   *
   * About '<S43>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_b_l_idx_1 = rtb_b_g;
  rtb_b_g = URControl_U.vel[2] * 500.0;

  /* Sum: '<S43>/Diff' incorporates:
   *  UnitDelay: '<S43>/UD'
   */
  rtb_u2[2] = rtb_b_g - URControl_DW.UD_DSTATE[2];

  /* MATLAB Function: '<S21>/MATLAB Function11' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion3'
   *  DataTypeConversion: '<Root>/Data Type Conversion6'
   *  Delay: '<S21>/Delay1'
   *  Inport: '<Root>/att'
   *  Inport: '<Root>/mag'
   */
  /* :  mag = sensor.mag; */
  /* :  acc_norm = norm(acc); */
  /* :  g = URControlParams.g; */
  /* :  mI = [URControlParams.magxI, 0, URControlParams.magzI]'; */
  mI[0] = URControlParams.magxI;
  mI[1] = 0.0;
  mI[2] = URControlParams.magzI;

  /* :  ka = URControlParams.ka; */
  /* :  km = URControlParams.km; */
  /* :  phiE = att_est(1); */
  /* :  thetaE = att_est(2); */
  /* :  psiE = att_est(3)  + URControlParams.mag_psi_shift; */
  rtb_enableMeas = URControl_DW.Delay1_DSTATE[2] + URControlParams.mag_psi_shift;

  /* :  R_E = [cos(thetaE)*cos(psiE)                             , cos(thetaE)*sin(psiE)                                      , -sin(thetaE); */
  /* :          sin(phiE)*sin(thetaE)*cos(psiE)-cos(phiE)*sin(psiE)  , sin(phiE)*sin(thetaE)*sin(psiE)+cos(phiE)*cos(psiE)    , sin(phiE)*cos(thetaE); */
  /* :          cos(phiE)*sin(thetaE)*cos(psiE)+sin(phiE)*sin(psiE)  , cos(phiE)*sin(thetaE)*sin(psiE)-sin(phiE)*cos(psiE)    , cos(phiE)*cos(thetaE)]; */
  /* :  R_E = R_E'; */
  rtb_q_dot_idx_0 = std::cos(rtb_Delay1[1]);
  rtb_q_dot_idx_1 = std::cos(rtb_enableMeas);
  R_E[0] = rtb_q_dot_idx_0 * rtb_q_dot_idx_1;
  rtb_q_dot_idx_2 = std::sin(rtb_enableMeas);
  R_E[1] = rtb_q_dot_idx_0 * rtb_q_dot_idx_2;
  rtb_Merge = std::sin(rtb_Delay1[1]);
  R_E[2] = -rtb_Merge;
  rtb_fcn5 = std::sin(rtb_Delay1[0]);
  R_E_tmp = rtb_fcn5 * rtb_Merge;
  R_E_tmp_0 = std::cos(rtb_Delay1[0]);
  R_E[3] = R_E_tmp * rtb_q_dot_idx_1 - R_E_tmp_0 * rtb_q_dot_idx_2;
  R_E[4] = R_E_tmp * rtb_q_dot_idx_2 + R_E_tmp_0 * rtb_q_dot_idx_1;
  R_E[5] = rtb_fcn5 * rtb_q_dot_idx_0;
  rtb_Merge *= R_E_tmp_0;
  R_E[6] = rtb_Merge * rtb_q_dot_idx_1 + rtb_fcn5 * rtb_q_dot_idx_2;
  R_E[7] = rtb_Merge * rtb_q_dot_idx_2 - rtb_fcn5 * rtb_q_dot_idx_1;
  R_E[8] = R_E_tmp_0 * rtb_q_dot_idx_0;

  /* :  phiO    = sensor.att(1); */
  /* :  thetaO  = sensor.att(2); */
  /* :  psiO    = sensor.att(3); */
  /* :  R_O = [cos(thetaO)*cos(psiO)                             , cos(thetaO)*sin(psiO)                                      , -sin(thetaO); */
  /* :          sin(phiO)*sin(thetaO)*cos(psiO)-cos(phiO)*sin(psiO)  , sin(phiO)*sin(thetaO)*sin(psiO)+cos(phiO)*cos(psiO)    , sin(phiO)*cos(thetaO); */
  /* :          cos(phiO)*sin(thetaO)*cos(psiO)+sin(phiO)*sin(psiO)  , cos(phiO)*sin(thetaO)*sin(psiO)-sin(phiO)*cos(psiO)    , cos(phiO)*cos(thetaO)]; */
  /* :  R_O = R_O'; */
  rtb_enableMeas = std::cos((real_T)URControl_U.att[1]);
  rtb_q_dot_idx_3 = std::cos((real_T)URControl_U.att[2]);
  R_O[0] = rtb_enableMeas * rtb_q_dot_idx_3;
  rtb_Product3_a = std::sin((real_T)URControl_U.att[2]);
  R_O[1] = rtb_enableMeas * rtb_Product3_a;
  rtb_fcn3 = std::sin((real_T)URControl_U.att[1]);
  R_O[2] = -rtb_fcn3;
  rtb_fcn3_d = std::sin((real_T)URControl_U.att[0]);
  rtb_Delay_g = rtb_fcn3_d * rtb_fcn3;
  rtb_Integrator_o = std::cos((real_T)URControl_U.att[0]);
  R_O[3] = rtb_Delay_g * rtb_q_dot_idx_3 - rtb_Integrator_o * rtb_Product3_a;
  R_O[4] = rtb_Delay_g * rtb_Product3_a + rtb_Integrator_o * rtb_q_dot_idx_3;
  R_O[5] = rtb_fcn3_d * rtb_enableMeas;
  rtb_fcn3 *= rtb_Integrator_o;
  R_O[6] = rtb_fcn3 * rtb_q_dot_idx_3 + rtb_fcn3_d * rtb_Product3_a;
  R_O[7] = rtb_fcn3 * rtb_Product3_a - rtb_fcn3_d * rtb_q_dot_idx_3;
  R_O[8] = rtb_Integrator_o * rtb_enableMeas;

  /* :  Rc = R_E*R_O'; */
  for (r2 = 0; r2 < 3; r2++) {
    for (r3 = 0; r3 < 3; r3++) {
      i = r2 + 3 * r3;
      Rc[i] = 0.0;
      Rc[i] += R_E[r2] * R_O[r3];
      Rc[i] += R_E[r2 + 3] * R_O[r3 + 3];
      Rc[i] += R_E[r2 + 6] * R_O[r3 + 6];
    }
  }

  /* :  vel_dot_B = R_O \ vel_dot * 1; */
  i = 0;
  r2 = 1;
  r3 = 2;
  rtb_enableMeas = std::abs(R_O[0]);
  rtb_q_dot_idx_3 = std::abs(R_O[1]);
  if (rtb_q_dot_idx_3 > rtb_enableMeas) {
    rtb_enableMeas = rtb_q_dot_idx_3;
    i = 1;
    r2 = 0;
  }

  if (std::abs(-std::sin((real_T)URControl_U.att[1])) > rtb_enableMeas) {
    i = 2;
    r2 = 1;
    r3 = 0;
  }

  R_O[r2] /= R_O[i];
  R_O[r3] /= R_O[i];
  R_O[3 + r2] -= R_O[3 + i] * R_O[r2];
  R_O[3 + r3] -= R_O[3 + i] * R_O[r3];
  R_O[6 + r2] -= R_O[6 + i] * R_O[r2];
  R_O[6 + r3] -= R_O[6 + i] * R_O[r3];
  if (std::abs(R_O[3 + r3]) > std::abs(R_O[3 + r2])) {
    rtemp = r2;
    r2 = r3;
    r3 = rtemp;
  }

  R_O[3 + r3] /= R_O[3 + r2];
  R_O[6 + r3] -= R_O[3 + r3] * R_O[6 + r2];
  rtb_alpha[1] = rtb_u2[r2] - rtb_u2[i] * R_O[r2];
  rtb_alpha[2] = (rtb_u2[r3] - rtb_u2[i] * R_O[r3]) - R_O[3 + r3] * rtb_alpha[1];
  rtb_alpha[2] /= R_O[6 + r3];
  rtb_alpha[0] = rtb_u2[i] - R_O[6 + i] * rtb_alpha[2];
  rtb_alpha[1] -= R_O[6 + r2] * rtb_alpha[2];
  rtb_alpha[1] /= R_O[3 + r2];
  rtb_alpha[0] -= R_O[3 + i] * rtb_alpha[1];
  rtb_alpha[0] /= R_O[i];

  /* :  a = ka / g *  cross(R_E' * [0 0 -1]', acc-vel_dot_B')' + ... */
  /* :      km / norm(mI)^2 * cross(R_E' * mI, mag)'; */
  for (r2 = 0; r2 < 3; r2++) {
    R_O[3 * r2] = R_E[r2];
    R_O[1 + 3 * r2] = R_E[r2 + 3];
    R_O[2 + 3 * r2] = R_E[r2 + 6];
  }

  rtb_q_dot_idx_1 = norm_2e9Xj4lM(mI);
  rtb_Merge = rtb_q_dot_idx_1 * rtb_q_dot_idx_1;
  for (r2 = 0; r2 < 3; r2++) {
    rtb_enableMeas = R_O[r2 + 3];
    rtb_q_dot_idx_0 = rtb_enableMeas * 0.0 + R_O[r2] * 0.0;
    R_E_tmp = rtb_enableMeas * 0.0 + R_O[r2] * mI[0];
    rtb_enableMeas = R_O[r2 + 6];
    rtb_q_dot_idx_0 += -rtb_enableMeas;
    R_E_tmp += rtb_enableMeas * mI[2];
    rtb_u2[r2] = rtb_q_dot_idx_0;
    rtb_Delay1[r2] = R_E_tmp;
    rtb_alpha[r2] = rtb_acc[r2] - rtb_alpha[r2];
  }

  rtb_enableMeas = rtb_u2[1] * rtb_alpha[2] - rtb_u2[2] * rtb_alpha[1];
  rtb_q_dot_idx_3 = rtb_u2[2] * rtb_alpha[0] - rtb_u2[0] * rtb_alpha[2];
  rtb_Product3_a = rtb_u2[0] * rtb_alpha[1] - rtb_u2[1] * rtb_alpha[0];
  for (r2 = 0; r2 < 9; r2++) {
    R_O[r2] = URControlParams.ka[r2] / URControlParams.g;
    R_E[r2] = URControlParams.km[r2] / rtb_Merge;
  }

  rtb_fcn3 = rtb_Delay1[1] * URControl_U.mag[2] - rtb_Delay1[2] *
    URControl_U.mag[1];
  rtb_fcn3_d = rtb_Delay1[2] * URControl_U.mag[0] - rtb_Delay1[0] *
    URControl_U.mag[2];
  rtb_Delay_g = rtb_Delay1[0] * URControl_U.mag[1] - rtb_Delay1[1] *
    URControl_U.mag[0];
  for (r2 = 0; r2 < 3; r2++) {
    mI[r2] = (R_O[r2 + 6] * rtb_Product3_a + (R_O[r2 + 3] * rtb_q_dot_idx_3 +
               R_O[r2] * rtb_enableMeas)) + (R_E[r2 + 6] * rtb_Delay_g + (R_E[r2
      + 3] * rtb_fcn3_d + R_E[r2] * rtb_fcn3));
  }

  /* :  b = URControlParams.km / norm(mI)^2 * cross(R_E' * mI, mag)'; */
  /* :  A = [0      -a(3)       a(2); */
  /* :       a(3)    0         -a(1); */
  /* :      -a(2)    a(1)       0]; */
  /* :  alphaC = A + URControlParams.ke * (Rc-Rc')/2; */
  R_O[0] = 0.0;
  R_O[3] = -mI[2];
  R_O[6] = mI[1];
  R_O[1] = mI[2];
  R_O[4] = 0.0;
  R_O[7] = -mI[0];
  R_O[2] = -mI[1];
  R_O[5] = mI[0];
  R_O[8] = 0.0;
  for (r2 = 0; r2 < 3; r2++) {
    R_E[3 * r2] = (Rc[3 * r2] - Rc[r2]) * URControlParams.ke / 2.0 + R_O[3 * r2];
    r3 = 3 * r2 + 1;
    R_E[r3] = (Rc[r3] - Rc[r2 + 3]) * URControlParams.ke / 2.0 + R_O[r3];
    r3 = 3 * r2 + 2;
    R_E[r3] = (Rc[r3] - Rc[r2 + 6]) * URControlParams.ke / 2.0 + R_O[r3];
  }

  /* :  alpha = [alphaC(3,2), alphaC(1,3), alphaC(2,1)]'; */
  rtb_alpha[0] = R_E[5];
  rtb_alpha[1] = R_E[6];
  rtb_alpha[2] = R_E[1];

  /* MATLAB Function: '<S21>/MATLAB Function13' incorporates:
   *  Delay: '<S21>/Delay'
   */
  /* :  if sum(isnan(u)) */
  if (((static_cast<real_T>(rtIsNaN(URControl_DW.Delay_DSTATE[0])) + static_cast<
        real_T>(rtIsNaN(URControl_DW.Delay_DSTATE[1]))) + static_cast<real_T>
       (rtIsNaN(URControl_DW.Delay_DSTATE[2]))) + static_cast<real_T>(rtIsNaN
       (URControl_DW.Delay_DSTATE[3])) != 0.0) {
    /* :  y = 0*ones(size(u)); */
    qconj[0] = 0.0;
    qconj[1] = 0.0;
    qconj[2] = 0.0;
    qconj[3] = 0.0;
  } else {
    /* :  else */
    /* :  y = u; */
    qconj[0] = URControl_DW.Delay_DSTATE[0];
    qconj[1] = URControl_DW.Delay_DSTATE[1];
    qconj[2] = URControl_DW.Delay_DSTATE[2];
    qconj[3] = URControl_DW.Delay_DSTATE[3];
  }

  /* End of MATLAB Function: '<S21>/MATLAB Function13' */

  /* MATLAB Function: '<S21>/MATLAB Function1' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion5'
   *  DiscreteIntegrator: '<S21>/Discrete-Time Integrator3'
   *  Inport: '<Root>/rates'
   *  MATLAB Function: '<S21>/MATLAB Function11'
   *  Sum: '<S21>/Add2'
   */
  /* :  q_dot = 1/2*quatmultiply(q,[0, omegac' - alpha']); */
  FMin[1] = (URControl_U.rates[0] - URControl_DW.DiscreteTimeIntegrator3_DSTATE
             [0]) - R_E[5];
  FMin[2] = (URControl_U.rates[1] - URControl_DW.DiscreteTimeIntegrator3_DSTATE
             [1]) - R_E[6];
  FMin[3] = (URControl_U.rates[2] - URControl_DW.DiscreteTimeIntegrator3_DSTATE
             [2]) - R_E[1];

  /* :  if sum(isnan(u)) */
  rtb_q_dot_idx_3 = (((qconj[0] * 0.0 - qconj[1] * FMin[1]) - qconj[2] * FMin[2])
                     - qconj[3] * FMin[3]) * 0.5;

  /* MATLAB Function: '<S21>/MATLAB Function8' */
  b_b_idx_0 = rtIsNaN(rtb_q_dot_idx_3);

  /* MATLAB Function: '<S21>/MATLAB Function1' */
  rtb_q_dot_idx_0 = rtb_q_dot_idx_3;
  rtb_q_dot_idx_3 = ((qconj[0] * FMin[1] + 0.0 * qconj[1]) + (qconj[2] * FMin[3]
    - qconj[3] * FMin[2])) * 0.5;

  /* MATLAB Function: '<S21>/MATLAB Function8' */
  b_b_idx_1 = rtIsNaN(rtb_q_dot_idx_3);

  /* MATLAB Function: '<S21>/MATLAB Function1' */
  rtb_q_dot_idx_1 = rtb_q_dot_idx_3;
  rtb_q_dot_idx_3 = ((qconj[0] * FMin[2] + 0.0 * qconj[2]) + (qconj[3] * FMin[1]
    - qconj[1] * FMin[3])) * 0.5;

  /* MATLAB Function: '<S21>/MATLAB Function8' */
  rEQ0 = rtIsNaN(rtb_q_dot_idx_3);

  /* MATLAB Function: '<S21>/MATLAB Function1' */
  rtb_q_dot_idx_2 = rtb_q_dot_idx_3;
  rtb_q_dot_idx_3 = ((qconj[0] * FMin[3] + 0.0 * qconj[3]) + (qconj[1] * FMin[2]
    - qconj[2] * FMin[1])) * 0.5;

  /* MATLAB Function: '<S21>/MATLAB Function8' */
  if (((static_cast<real_T>(b_b_idx_0) + static_cast<real_T>(b_b_idx_1)) +
       static_cast<real_T>(rEQ0)) + static_cast<real_T>(rtIsNaN(rtb_q_dot_idx_3))
      != 0.0) {
    /* :  y = 0*ones(size(u)); */
    rtb_q_dot_idx_0 = 0.0;
    rtb_q_dot_idx_1 = 0.0;
    rtb_q_dot_idx_2 = 0.0;
    rtb_q_dot_idx_3 = 0.0;
  } else {
    /* :  else */
    /* :  y = u; */
  }

  /* Sum: '<S21>/Add3' incorporates:
   *  Delay: '<S21>/Delay'
   *  Gain: '<S21>/Gain3'
   */
  rtb_q_dot_idx_0 = 0.002 * rtb_q_dot_idx_0 + URControl_DW.Delay_DSTATE[0];
  rtb_q_dot_idx_1 = 0.002 * rtb_q_dot_idx_1 + URControl_DW.Delay_DSTATE[1];
  rtb_q_dot_idx_2 = 0.002 * rtb_q_dot_idx_2 + URControl_DW.Delay_DSTATE[2];
  rtb_fcn5 = 0.002 * rtb_q_dot_idx_3 + URControl_DW.Delay_DSTATE[3];

  /* Sqrt: '<S102>/sqrt' incorporates:
   *  Product: '<S103>/Product'
   *  Product: '<S103>/Product1'
   *  Product: '<S103>/Product2'
   *  Product: '<S103>/Product3'
   *  Sum: '<S103>/Sum'
   */
  rtb_Product3_a = std::sqrt(((rtb_q_dot_idx_0 * rtb_q_dot_idx_0 +
    rtb_q_dot_idx_1 * rtb_q_dot_idx_1) + rtb_q_dot_idx_2 * rtb_q_dot_idx_2) +
    rtb_fcn5 * rtb_fcn5);

  /* Product: '<S55>/Product' */
  rtb_fcn3 = rtb_q_dot_idx_0 / rtb_Product3_a;

  /* Product: '<S55>/Product1' */
  rtb_enableMeas = rtb_q_dot_idx_1 / rtb_Product3_a;

  /* Product: '<S55>/Product2' */
  rtb_q_dot_idx_3 = rtb_q_dot_idx_2 / rtb_Product3_a;

  /* Product: '<S55>/Product3' */
  rtb_Product3_a = rtb_fcn5 / rtb_Product3_a;

  /* Sum: '<S98>/Sum' incorporates:
   *  Product: '<S98>/Product'
   *  Product: '<S98>/Product1'
   *  Product: '<S98>/Product2'
   *  Product: '<S98>/Product3'
   */
  rtb_q_dot_idx_0 = ((URControl_ConstB.q0 * rtb_fcn3 - URControl_ConstB.q1 *
                      rtb_enableMeas) - URControl_ConstB.q2 * rtb_q_dot_idx_3) -
    URControl_ConstB.q3 * rtb_Product3_a;

  /* Sum: '<S99>/Sum' incorporates:
   *  Product: '<S99>/Product'
   *  Product: '<S99>/Product1'
   *  Product: '<S99>/Product2'
   *  Product: '<S99>/Product3'
   */
  rtb_Merge = ((URControl_ConstB.q0 * rtb_enableMeas + URControl_ConstB.q1 *
                rtb_fcn3) + URControl_ConstB.q2 * rtb_Product3_a) -
    URControl_ConstB.q3 * rtb_q_dot_idx_3;

  /* Sum: '<S100>/Sum' incorporates:
   *  Product: '<S100>/Product'
   *  Product: '<S100>/Product1'
   *  Product: '<S100>/Product2'
   *  Product: '<S100>/Product3'
   */
  rtb_q_dot_idx_2 = ((URControl_ConstB.q0 * rtb_q_dot_idx_3 -
                      URControl_ConstB.q1 * rtb_Product3_a) +
                     URControl_ConstB.q2 * rtb_fcn3) + URControl_ConstB.q3 *
    rtb_enableMeas;

  /* Sum: '<S101>/Sum' incorporates:
   *  Product: '<S101>/Product'
   *  Product: '<S101>/Product1'
   *  Product: '<S101>/Product2'
   *  Product: '<S101>/Product3'
   */
  rtb_fcn5 = ((URControl_ConstB.q0 * rtb_Product3_a + URControl_ConstB.q1 *
               rtb_q_dot_idx_3) - URControl_ConstB.q2 * rtb_enableMeas) +
    URControl_ConstB.q3 * rtb_fcn3;

  /* Sqrt: '<S118>/sqrt' incorporates:
   *  Product: '<S119>/Product'
   *  Product: '<S119>/Product1'
   *  Product: '<S119>/Product2'
   *  Product: '<S119>/Product3'
   *  Sum: '<S119>/Sum'
   */
  rtb_q_dot_idx_1 = std::sqrt(((rtb_q_dot_idx_0 * rtb_q_dot_idx_0 + rtb_Merge *
    rtb_Merge) + rtb_q_dot_idx_2 * rtb_q_dot_idx_2) + rtb_fcn5 * rtb_fcn5);

  /* Product: '<S113>/Product' */
  rtb_q_dot_idx_0 /= rtb_q_dot_idx_1;

  /* Product: '<S113>/Product1' */
  rtb_Merge /= rtb_q_dot_idx_1;

  /* Product: '<S113>/Product2' */
  rtb_q_dot_idx_2 /= rtb_q_dot_idx_1;

  /* Product: '<S113>/Product3' */
  rtb_fcn5 /= rtb_q_dot_idx_1;

  /* Fcn: '<S57>/fcn2' incorporates:
   *  Fcn: '<S57>/fcn5'
   */
  rtb_Delay_g = rtb_q_dot_idx_0 * rtb_q_dot_idx_0;
  rtb_Integrator_o = rtb_Merge * rtb_Merge;
  rtb_vel_idx_0 = rtb_q_dot_idx_2 * rtb_q_dot_idx_2;
  rtb_vel_idx_1 = rtb_fcn5 * rtb_fcn5;
  rtb_q_dot_idx_1 = ((rtb_Delay_g + rtb_Integrator_o) - rtb_vel_idx_0) -
    rtb_vel_idx_1;

  /* DSPFlip: '<S21>/Flip' incorporates:
   *  Fcn: '<S57>/fcn1'
   *  Trigonometry: '<S112>/Trigonometric Function1'
   */
  URControl_B.Euler_flip[2] = rt_atan2d_snf((rtb_Merge * rtb_q_dot_idx_2 +
    rtb_q_dot_idx_0 * rtb_fcn5) * 2.0, rtb_q_dot_idx_1);

  /* Fcn: '<S57>/fcn3' */
  rtb_fcn3_d = (rtb_Merge * rtb_fcn5 - rtb_q_dot_idx_0 * rtb_q_dot_idx_2) * -2.0;

  /* If: '<S114>/If' incorporates:
   *  Constant: '<S115>/Constant'
   *  Constant: '<S116>/Constant'
   */
  if (rtb_fcn3_d > 1.0) {
    /* Outputs for IfAction SubSystem: '<S114>/If Action Subsystem' incorporates:
     *  ActionPort: '<S115>/Action Port'
     */
    rtb_q_dot_idx_1 = 1.0;

    /* End of Outputs for SubSystem: '<S114>/If Action Subsystem' */
  } else if (rtb_fcn3_d < -1.0) {
    /* Outputs for IfAction SubSystem: '<S114>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S116>/Action Port'
     */
    rtb_q_dot_idx_1 = 1.0;

    /* End of Outputs for SubSystem: '<S114>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S114>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S117>/Action Port'
     */
    URControl_IfActionSubsystem2(rtb_fcn3_d, &rtb_q_dot_idx_1);

    /* End of Outputs for SubSystem: '<S114>/If Action Subsystem2' */
  }

  /* End of If: '<S114>/If' */

  /* Trigonometry: '<S112>/trigFcn' */
  if (rtb_q_dot_idx_1 > 1.0) {
    rtb_q_dot_idx_1 = 1.0;
  } else {
    if (rtb_q_dot_idx_1 < -1.0) {
      rtb_q_dot_idx_1 = -1.0;
    }
  }

  rtb_fcn3_d = std::asin(rtb_q_dot_idx_1);

  /* End of Trigonometry: '<S112>/trigFcn' */

  /* DSPFlip: '<S21>/Flip' incorporates:
   *  Fcn: '<S57>/fcn4'
   *  Fcn: '<S57>/fcn5'
   *  Trigonometry: '<S112>/Trigonometric Function3'
   */
  URControl_B.Euler_flip[0] = rt_atan2d_snf((rtb_q_dot_idx_2 * rtb_fcn5 +
    rtb_q_dot_idx_0 * rtb_Merge) * 2.0, ((rtb_Delay_g - rtb_Integrator_o) -
    rtb_vel_idx_0) + rtb_vel_idx_1);
  URControl_B.Euler_flip[1] = rtb_fcn3_d;
  URControl_B.Euler_flip[1] = rtb_fcn3_d;

  /* DataTypeConversion: '<Root>/Data Type Conversion10' incorporates:
   *  Inport: '<Root>/fail_flag'
   */
  rtb_fcn3_d = URControl_U.fail_flag;

  /* Delay: '<Root>/Delay' incorporates:
   *  Constant: '<Root>/delay'
   *  DataTypeConversion: '<Root>/Data Type Conversion10'
   *  Inport: '<Root>/fail_flag'
   */
  rtb_Merge = std::floor(URControlParams.fail_delay * 500.0);
  if ((rtb_Merge < 1.0) || rtIsNaN(rtb_Merge)) {
    rtb_Delay_g = URControl_U.fail_flag;
  } else {
    if (rtb_Merge > 1000.0) {
      tmp = 1000U;
    } else {
      if (rtIsNaN(rtb_Merge) || rtIsInf(rtb_Merge)) {
        rtb_Merge = 0.0;
      } else {
        rtb_Merge = std::fmod(rtb_Merge, 4.294967296E+9);
      }

      tmp = rtb_Merge < 0.0 ? static_cast<uint32_T>(-static_cast<int32_T>
        (static_cast<uint32_T>(-rtb_Merge))) : static_cast<uint32_T>(rtb_Merge);
    }

    rtb_Delay_g = URControl_DW.Delay_DSTATE_j[1000U - tmp];
  }

  /* End of Delay: '<Root>/Delay' */

  /* MATLAB Function: '<S7>/basic estimators' incorporates:
   *  BusCreator: '<S7>/BusConversion_InsertedFor_basic estimators_at_inport_0'
   *  DataStoreRead: '<S30>/Data Store Read'
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
   */
  /* :  [State, DAQ] = UREstimators(sensors, State, DAQ, pos_ekf, vel_ekf, att_ekf, psi_mag_filter,att_CF, fail_id_slow, fail_id_quick, par, URControlParams); */
  rtb_Integrator_o = URControl_U.fail_flag;

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
  URControl_DW.State.acc[0] = rtb_acc[0];
  URControl_DW.State.acc[1] = rtb_acc[1];
  URControl_DW.State.acc[2] = rtb_acc[2];

  /* 'UREstimators:10' if URpar.est_useEKF == 1 */
  if (URControlParams.est_useEKF == 1.0) {
    /* Outputs for Atomic SubSystem: '<S24>/Output' */
    /* 'UREstimators:11' state.vel = vel_est'; */
    /* 'UREstimators:12' state.pos = pos_est'; */
    /* 'UREstimators:13' state.att = (mod(att_est + pi, 2*pi) - pi)'; */
    URControl_DW.State.vel[0] = URControl_DW.x[3];
    URControl_DW.State.pos[0] = URControl_DW.x[0];

    /* End of Outputs for SubSystem: '<S24>/Output' */
    if (rtIsNaN(URControl_B.att_ekfquat[0] + 3.1415926535897931) || rtIsInf
        (URControl_B.att_ekfquat[0] + 3.1415926535897931)) {
      rtb_q_dot_idx_1 = (rtNaN);
    } else if (URControl_B.att_ekfquat[0] + 3.1415926535897931 == 0.0) {
      rtb_q_dot_idx_1 = 0.0;
    } else {
      rtb_q_dot_idx_1 = std::fmod(URControl_B.att_ekfquat[0] +
        3.1415926535897931, 6.2831853071795862);
      rEQ0 = (rtb_q_dot_idx_1 == 0.0);
      if (!rEQ0) {
        rtb_q_dot_idx_2 = std::abs((URControl_B.att_ekfquat[0] +
          3.1415926535897931) / 6.2831853071795862);
        rEQ0 = (std::abs(rtb_q_dot_idx_2 - std::floor(rtb_q_dot_idx_2 + 0.5)) <=
                2.2204460492503131E-16 * rtb_q_dot_idx_2);
      }

      if (rEQ0) {
        rtb_q_dot_idx_1 = 0.0;
      } else {
        if (URControl_B.att_ekfquat[0] + 3.1415926535897931 < 0.0) {
          rtb_q_dot_idx_1 += 6.2831853071795862;
        }
      }
    }

    URControl_DW.State.att[0] = rtb_q_dot_idx_1 - 3.1415926535897931;

    /* Outputs for Atomic SubSystem: '<S24>/Output' */
    URControl_DW.State.vel[1] = URControl_DW.x[4];
    URControl_DW.State.pos[1] = URControl_DW.x[1];

    /* End of Outputs for SubSystem: '<S24>/Output' */
    if (rtIsNaN(URControl_B.att_ekfquat[1] + 3.1415926535897931) || rtIsInf
        (URControl_B.att_ekfquat[1] + 3.1415926535897931)) {
      rtb_q_dot_idx_1 = (rtNaN);
    } else if (URControl_B.att_ekfquat[1] + 3.1415926535897931 == 0.0) {
      rtb_q_dot_idx_1 = 0.0;
    } else {
      rtb_q_dot_idx_1 = std::fmod(URControl_B.att_ekfquat[1] +
        3.1415926535897931, 6.2831853071795862);
      rEQ0 = (rtb_q_dot_idx_1 == 0.0);
      if (!rEQ0) {
        rtb_q_dot_idx_2 = std::abs((URControl_B.att_ekfquat[1] +
          3.1415926535897931) / 6.2831853071795862);
        rEQ0 = (std::abs(rtb_q_dot_idx_2 - std::floor(rtb_q_dot_idx_2 + 0.5)) <=
                2.2204460492503131E-16 * rtb_q_dot_idx_2);
      }

      if (rEQ0) {
        rtb_q_dot_idx_1 = 0.0;
      } else {
        if (URControl_B.att_ekfquat[1] + 3.1415926535897931 < 0.0) {
          rtb_q_dot_idx_1 += 6.2831853071795862;
        }
      }
    }

    URControl_DW.State.att[1] = rtb_q_dot_idx_1 - 3.1415926535897931;

    /* Outputs for Atomic SubSystem: '<S24>/Output' */
    URControl_DW.State.vel[2] = URControl_DW.x[5];
    URControl_DW.State.pos[2] = URControl_DW.x[2];

    /* End of Outputs for SubSystem: '<S24>/Output' */
    if (rtIsNaN(URControl_B.att_ekfquat[2] + 3.1415926535897931) || rtIsInf
        (URControl_B.att_ekfquat[2] + 3.1415926535897931)) {
      rtb_q_dot_idx_1 = (rtNaN);
    } else if (URControl_B.att_ekfquat[2] + 3.1415926535897931 == 0.0) {
      rtb_q_dot_idx_1 = 0.0;
    } else {
      rtb_q_dot_idx_1 = std::fmod(URControl_B.att_ekfquat[2] +
        3.1415926535897931, 6.2831853071795862);
      rEQ0 = (rtb_q_dot_idx_1 == 0.0);
      if (!rEQ0) {
        rtb_q_dot_idx_2 = std::abs((URControl_B.att_ekfquat[2] +
          3.1415926535897931) / 6.2831853071795862);
        rEQ0 = (std::abs(rtb_q_dot_idx_2 - std::floor(rtb_q_dot_idx_2 + 0.5)) <=
                2.2204460492503131E-16 * rtb_q_dot_idx_2);
      }

      if (rEQ0) {
        rtb_q_dot_idx_1 = 0.0;
      } else {
        if (URControl_B.att_ekfquat[2] + 3.1415926535897931 < 0.0) {
          rtb_q_dot_idx_1 += 6.2831853071795862;
        }
      }
    }

    URControl_DW.State.att[2] = rtb_q_dot_idx_1 - 3.1415926535897931;
  } else {
    /* 'UREstimators:14' else */
    /* 'UREstimators:15' state.vel = sensors.vel; */
    /* 'UREstimators:16' state.pos = sensors.pos; */
    /* 'UREstimators:17' state.att = sensors.att; */
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

  /* 'UREstimators:20' if URpar.est_useCF == 1 */
  if (URControlParams.est_useCF == 1.0) {
    /* 'UREstimators:21' state.att(1:2) = att_CF(1:2)'; */
    URControl_DW.State.att[0] = URControl_B.Euler_flip[0];
    URControl_DW.State.att[1] = URControl_B.Euler_flip[1];
  }

  /* 'UREstimators:24' if URpar.est_useMag == 1 */
  if (URControlParams.est_useMag == 1.0) {
    /* 'UREstimators:25' state.att(3) = psi_mag_filter; */
    URControl_DW.State.att[2] = URControl_B.sf_MATLABFunction2.lambda;
  }

  /* 'UREstimators:28' state.omega = sensors.omega; */
  URControl_DW.State.omega[0] = URControl_U.rates[0];
  URControl_DW.State.omega[1] = URControl_U.rates[1];
  URControl_DW.State.omega[2] = URControl_U.rates[2];

  /* 'UREstimators:30' omegaFilter.updateFilterT(URpar.est_omegaFilterT); */
  /* 'LPFilter:26' obj.filterT = filterT; */
  URControl_DW.omegaFilter.filterT = URControlParams.est_omegaFilterT;

  /* 'UREstimators:31' omegaFilter.update(sensors.omega); */
  URControl_LPFilter_update(&URControl_DW.omegaFilter, rtb_omega);

  /* 'UREstimators:32' state.omegaf = omegaFilter.value; */
  URControl_DW.State.omegaf[0] = URControl_DW.omegaFilter.value[0];
  URControl_DW.State.omegaf[1] = URControl_DW.omegaFilter.value[1];
  URControl_DW.State.omegaf[2] = URControl_DW.omegaFilter.value[2];

  /* 'UREstimators:34' posFilter.updateFilterT(URpar.est_posFilterT); */
  /* 'LPFilter:26' obj.filterT = filterT; */
  URControl_DW.posFilter.filterT = URControlParams.est_posFilterT;

  /* 'UREstimators:35' posFilter.update(state.pos); */
  URControl_LPFilter_update(&URControl_DW.posFilter, URControl_DW.State.pos);

  /* 'UREstimators:36' state.posf = posFilter.value; */
  URControl_DW.State.posf[0] = URControl_DW.posFilter.value[0];
  URControl_DW.State.posf[1] = URControl_DW.posFilter.value[1];
  URControl_DW.State.posf[2] = URControl_DW.posFilter.value[2];

  /* 'UREstimators:38' velFilter.updateFilterT(URpar.est_velFilterT); */
  /* 'LPFilter:26' obj.filterT = filterT; */
  URControl_DW.velFilter.filterT = URControlParams.est_velFilterT;

  /* 'UREstimators:39' velFilter.update(state.vel); */
  URControl_LPFilter_update(&URControl_DW.velFilter, URControl_DW.State.vel);

  /* 'UREstimators:40' state.velf = velFilter.value; */
  URControl_DW.State.velf[0] = URControl_DW.velFilter.value[0];
  URControl_DW.State.velf[1] = URControl_DW.velFilter.value[1];
  URControl_DW.State.velf[2] = URControl_DW.velFilter.value[2];

  /* 'UREstimators:42' accFilter.updateFilterT(URpar.est_accFilterT); */
  /* 'LPFilter:26' obj.filterT = filterT; */
  URControl_DW.accFilter.filterT = URControlParams.est_accFilterT;

  /* 'UREstimators:43' accFilter.update(state.acc); */
  URControl_LPFilter_update(&URControl_DW.accFilter, URControl_DW.State.acc);

  /* 'UREstimators:44' state.accf = accFilter.value; */
  URControl_DW.State.accf[0] = URControl_DW.accFilter.value[0];
  URControl_DW.State.accf[1] = URControl_DW.accFilter.value[1];
  URControl_DW.State.accf[2] = URControl_DW.accFilter.value[2];

  /* 'UREstimators:46' state.wRotor = sensors.wRotor/30*pi; */
  URControl_DW.State.wRotor[0] = static_cast<real_T>(URControl_U.esc_rpm[0]) /
    30.0 * 3.1415926535897931;
  URControl_DW.State.wRotor[1] = static_cast<real_T>(URControl_U.esc_rpm[1]) /
    30.0 * 3.1415926535897931;
  URControl_DW.State.wRotor[2] = static_cast<real_T>(URControl_U.esc_rpm[2]) /
    30.0 * 3.1415926535897931;
  URControl_DW.State.wRotor[3] = static_cast<real_T>(URControl_U.esc_rpm[3]) /
    30.0 * 3.1415926535897931;

  /* 'UREstimators:48' phi = state.att(1); */
  /* 'UREstimators:49' theta = state.att(2); */
  /* 'UREstimators:50' psi = state.att(3); */
  /* 'UREstimators:53' R_IB = [cos(theta)*cos(psi)                             , cos(theta)*sin(psi)                               , -sin(theta); */
  /* 'UREstimators:54'         sin(phi)*sin(theta)*cos(psi)-cos(phi)*sin(psi)  , sin(phi)*sin(theta)*sin(psi)+cos(phi)*cos(psi)    , sin(phi)*cos(theta); */
  /* 'UREstimators:55'         cos(phi)*sin(theta)*cos(psi)+sin(phi)*sin(psi)  , cos(phi)*sin(theta)*sin(psi)-sin(phi)*cos(psi)    , cos(phi)*cos(theta)]; */
  /* 'UREstimators:57' state.n = (R_IB'*[0;0;-1])'; */
  rtb_q_dot_idx_0 = std::cos(URControl_DW.State.att[1]);
  rtb_q_dot_idx_1 = std::cos(URControl_DW.State.att[2]);
  R_E[0] = rtb_q_dot_idx_0 * rtb_q_dot_idx_1;
  rtb_q_dot_idx_2 = std::sin(URControl_DW.State.att[2]);
  R_E[1] = rtb_q_dot_idx_0 * rtb_q_dot_idx_2;
  rtb_Merge = std::sin(URControl_DW.State.att[1]);
  R_E[2] = -rtb_Merge;
  rtb_fcn5 = std::sin(URControl_DW.State.att[0]);
  R_E_tmp = rtb_fcn5 * rtb_Merge;
  R_E_tmp_0 = std::cos(URControl_DW.State.att[0]);
  R_E[3] = R_E_tmp * rtb_q_dot_idx_1 - R_E_tmp_0 * rtb_q_dot_idx_2;
  R_E[4] = R_E_tmp * rtb_q_dot_idx_2 + R_E_tmp_0 * rtb_q_dot_idx_1;
  R_E[5] = rtb_fcn5 * rtb_q_dot_idx_0;
  rtb_Merge *= R_E_tmp_0;
  R_E[6] = rtb_Merge * rtb_q_dot_idx_1 + rtb_fcn5 * rtb_q_dot_idx_2;
  R_E[7] = rtb_Merge * rtb_q_dot_idx_2 - rtb_fcn5 * rtb_q_dot_idx_1;
  R_E[8] = R_E_tmp_0 * rtb_q_dot_idx_0;
  for (r2 = 0; r2 < 3; r2++) {
    URControl_DW.State.n[r2] = 0.0;
    URControl_DW.State.n[r2] += R_E[r2] * 0.0;
    URControl_DW.State.n[r2] += R_E[r2 + 3] * 0.0;
    URControl_DW.State.n[r2] += -R_E[r2 + 6];
  }

  /* 'UREstimators:62' dummy = par.URC.R_xy_uv*[state.omega(1); state.omega(2)]; */
  /* 'UREstimators:63' uRot = dummy(1); */
  /* 'UREstimators:63' vRot = dummy(2); */
  /* 'UREstimators:64' state.omegaUV = [uRot,vRot,state.omega(3)]; */
  URControl_DW.State.omegaUV[0] =
    URControl_ConstP.basicestimators_par.URC.R_xy_uv[0] *
    URControl_DW.State.omega[0] +
    URControl_ConstP.basicestimators_par.URC.R_xy_uv[2] *
    URControl_DW.State.omega[1];
  URControl_DW.State.omegaUV[1] =
    URControl_ConstP.basicestimators_par.URC.R_xy_uv[1] *
    URControl_DW.State.omega[0] +
    URControl_ConstP.basicestimators_par.URC.R_xy_uv[3] *
    URControl_DW.State.omega[1];
  URControl_DW.State.omegaUV[2] = URControl_DW.State.omega[2];

  /* 'UREstimators:66' dummy = par.URC.R_xy_uv*[state.omegaf(1); state.omegaf(2)]; */
  /* 'UREstimators:67' uRot = dummy(1); */
  /* 'UREstimators:67' vRot = dummy(2); */
  /* 'UREstimators:68' state.omegafUV = [uRot,vRot,state.omegaf(3)]; */
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

  /* 'UREstimators:71' if URpar.fail_altProt && state.pos(3) > URpar.fail_altThresh && fail_id_slow > 0 && sum(state.wRotor) > 400*4 */
  if ((URControlParams.fail_altProt != 0.0) && (URControl_DW.State.pos[2] >
       URControlParams.fail_altThresh) && (rtb_Delay_g > 0.0) &&
      (((URControl_DW.State.wRotor[0] + URControl_DW.State.wRotor[1]) +
        URControl_DW.State.wRotor[2]) + URControl_DW.State.wRotor[3] > 1600.0))
  {
    /* 'UREstimators:72' failProt = 1; */
    URControl_DW.failProt = 1.0;
  }

  /* 'UREstimators:75' if ~(fail_id_slow > 0) */
  if (!(rtb_Delay_g > 0.0)) {
    /* 'UREstimators:76' failProt = 0; */
    URControl_DW.failProt = 0.0;
  }

  /* 'UREstimators:79' if failProt */
  if (URControl_DW.failProt != 0.0) {
    /* 'UREstimators:80' fail_id_slow = 0; */
    rtb_Delay_g = 0.0;

    /* 'UREstimators:81' fail_id_quick = 0; */
    rtb_Integrator_o = 0.0;
  }

  /* 'UREstimators:84' FMax = URpar.wMax^2*URpar.k0*ones(1,4); */
  rtb_q_dot_idx_1 = URControlParams.wMax * URControlParams.wMax *
    URControlParams.k0;
  qconj[0] = rtb_q_dot_idx_1;
  qconj[1] = rtb_q_dot_idx_1;
  qconj[2] = rtb_q_dot_idx_1;
  qconj[3] = rtb_q_dot_idx_1;

  /* 'UREstimators:85' FMin = URpar.wMin^2*URpar.k0*ones(1,4); */
  rtb_q_dot_idx_1 = URControlParams.wMin * URControlParams.wMin *
    URControlParams.k0;
  FMin[0] = rtb_q_dot_idx_1;
  FMin[1] = rtb_q_dot_idx_1;
  FMin[2] = rtb_q_dot_idx_1;
  FMin[3] = rtb_q_dot_idx_1;

  /* 'UREstimators:87' if fail_id_slow > 0 */
  if (rtb_Delay_g > 0.0) {
    /* 'UREstimators:88' FMax(fail_id_slow) = URpar.fail_wRot^2*URpar.k0; */
    rtb_Merge = URControlParams.fail_wRot * URControlParams.fail_wRot *
      URControlParams.k0;
    r2 = static_cast<int32_T>(rtb_Delay_g) - 1;
    qconj[r2] = rtb_Merge;

    /* 'UREstimators:89' FMin(fail_id_slow) = URpar.fail_wRot^2*URpar.k0; */
    FMin[r2] = rtb_Merge;
  }

  /* 'UREstimators:91' state.FMax = FMax; */
  /* 'UREstimators:92' state.FMin = FMin; */
  URControl_DW.State.FMax[0] = qconj[0];
  URControl_DW.State.FMin[0] = FMin[0];
  URControl_DW.State.FMax[1] = qconj[1];
  URControl_DW.State.FMin[1] = FMin[1];
  URControl_DW.State.FMax[2] = qconj[2];
  URControl_DW.State.FMin[2] = FMin[2];
  URControl_DW.State.FMax[3] = qconj[3];
  URControl_DW.State.FMin[3] = FMin[3];

  /* 'UREstimators:94' state.fail_id = fail_id_slow; */
  URControl_DW.State.fail_id = rtb_Delay_g;

  /* 'UREstimators:95' state.fail_id_quick = fail_id_quick; */
  URControl_DW.State.fail_id_quick = rtb_Integrator_o;

  /* 'UREstimators:98' daq.pos = state.pos; */
  /* 'UREstimators:99' daq.posRaw = sensors.pos; */
  /* 'UREstimators:100' daq.vel = state.vel; */
  /* 'UREstimators:101' daq.att = state.att; */
  /* 'UREstimators:102' daq.attRaw = sensors.att; */
  /* 'UREstimators:103' daq.acc = state.accf; */
  /* 'UREstimators:104' daq.accRaw = sensors.acc; */
  /* 'UREstimators:105' daq.n = state.n; */
  /* 'UREstimators:106' daq.omega = state.omega; */
  /* 'UREstimators:107' daq.omegaf = state.omegaf; */
  /* 'UREstimators:108' daq.omegaUV = state.omegaUV; */
  /* 'UREstimators:109' daq.omegafUV = state.omegafUV; */
  for (i = 0; i < 3; i++) {
    URControl_SharedDSM.DAQ.pos[i] = URControl_DW.State.pos[i];
    URControl_SharedDSM.DAQ.posRaw[i] = rtb_pos[i];
    URControl_SharedDSM.DAQ.vel[i] = URControl_DW.State.vel[i];
    URControl_SharedDSM.DAQ.att[i] = URControl_DW.State.att[i];
    URControl_SharedDSM.DAQ.attRaw[i] = rtb_att[i];
    URControl_SharedDSM.DAQ.acc[i] = URControl_DW.State.accf[i];
    URControl_SharedDSM.DAQ.accRaw[i] = rtb_acc[i];
    URControl_SharedDSM.DAQ.n[i] = 0.0;
    URControl_SharedDSM.DAQ.n[i] += R_E[i] * 0.0;
    URControl_SharedDSM.DAQ.n[i] += R_E[i + 3] * 0.0;
    URControl_SharedDSM.DAQ.n[i] += -R_E[i + 6];
    URControl_SharedDSM.DAQ.omega[i] = URControl_DW.State.omega[i];
    URControl_SharedDSM.DAQ.omegaf[i] = URControl_DW.State.omegaf[i];
    URControl_SharedDSM.DAQ.omegaUV[i] = URControl_DW.State.omegaUV[i];
    URControl_SharedDSM.DAQ.omegafUV[i] = URControl_DW.State.omegafUV[i];
  }

  /* 'UREstimators:110' daq.wRotor = state.wRotor; */
  /* 'UREstimators:111' daq.FMax = state.FMax; */
  /* 'UREstimators:112' daq.FMin = state.FMin; */
  URControl_SharedDSM.DAQ.wRotor[0] = URControl_DW.State.wRotor[0];
  URControl_SharedDSM.DAQ.FMax[0] = qconj[0];
  URControl_SharedDSM.DAQ.FMin[0] = FMin[0];
  URControl_SharedDSM.DAQ.wRotor[1] = URControl_DW.State.wRotor[1];
  URControl_SharedDSM.DAQ.FMax[1] = qconj[1];
  URControl_SharedDSM.DAQ.FMin[1] = FMin[1];
  URControl_SharedDSM.DAQ.wRotor[2] = URControl_DW.State.wRotor[2];
  URControl_SharedDSM.DAQ.FMax[2] = qconj[2];
  URControl_SharedDSM.DAQ.FMin[2] = FMin[2];
  URControl_SharedDSM.DAQ.wRotor[3] = URControl_DW.State.wRotor[3];
  URControl_SharedDSM.DAQ.FMax[3] = qconj[3];
  URControl_SharedDSM.DAQ.FMin[3] = FMin[3];

  /* 'UREstimators:113' daq.uvDot_max = state.uvDot_max; */
  /* 'UREstimators:114' daq.uvDot_min = state.uvDot_min; */
  /* 'UREstimators:115' daq.uv_max = state.uv_max; */
  /* 'UREstimators:116' daq.uv_min = state.uv_min; */
  URControl_SharedDSM.DAQ.uvDot_max[0] = URControl_DW.State.uvDot_max[0];
  URControl_SharedDSM.DAQ.uvDot_min[0] = URControl_DW.State.uvDot_min[0];
  URControl_SharedDSM.DAQ.uv_max[0] = URControl_DW.State.uv_max[0];
  URControl_SharedDSM.DAQ.uv_min[0] = URControl_DW.State.uv_min[0];
  URControl_SharedDSM.DAQ.uvDot_max[1] = URControl_DW.State.uvDot_max[1];
  URControl_SharedDSM.DAQ.uvDot_min[1] = URControl_DW.State.uvDot_min[1];
  URControl_SharedDSM.DAQ.uv_max[1] = URControl_DW.State.uv_max[1];
  URControl_SharedDSM.DAQ.uv_min[1] = URControl_DW.State.uv_min[1];

  /* :  stateOut = State; */
  rtb_stateOut = URControl_DW.State;

  /* End of MATLAB Function: '<S7>/basic estimators' */

  /* RelationalOperator: '<S10>/Compare' incorporates:
   *  Constant: '<S10>/Constant'
   *  Constant: '<S8>/Time constant'
   *  Sum: '<S8>/Sum1'
   */
  rEQ0 = (0.05 - URControl_B.Probe[0] <= 0.0);

  /* DataTypeConversion: '<Root>/Data Type Conversion8' incorporates:
   *  Inport: '<Root>/pos_sp'
   */
  rtb_pos[0] = URControl_U.pos_sp[0];
  rtb_pos[1] = URControl_U.pos_sp[1];
  rtb_pos[2] = URControl_U.pos_sp[2];

  /* DiscreteIntegrator: '<S11>/Integrator' incorporates:
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

  rtb_vel_idx_0 = URControl_DW.Integrator_DSTATE[0];
  rtb_vel_idx_1 = URControl_DW.Integrator_DSTATE[1];
  rtb_vel_idx_2 = URControl_DW.Integrator_DSTATE[2];

  /* RelationalOperator: '<S14>/Compare' incorporates:
   *  Constant: '<S12>/Time constant'
   *  Constant: '<S14>/Constant'
   *  Sum: '<S12>/Sum1'
   */
  rtb_Compare_j = (0.05 - URControl_B.Probe_d[0] <= 0.0);

  /* DataTypeConversion: '<Root>/Data Type Conversion9' incorporates:
   *  Inport: '<Root>/yaw_sp'
   */
  rtb_Delay_g = URControl_U.yaw_sp;

  /* DiscreteIntegrator: '<S15>/Integrator' incorporates:
   *  Inport: '<Root>/yaw_sp'
   */
  if (URControl_DW.Integrator_IC_LOADING_a != 0) {
    URControl_DW.Integrator_DSTATE_i = URControl_U.yaw_sp;
  }

  if (rtb_Compare_j || (URControl_DW.Integrator_PrevResetState_i != 0)) {
    URControl_DW.Integrator_DSTATE_i = URControl_U.yaw_sp;
  }

  rtb_Integrator_o = URControl_DW.Integrator_DSTATE_i;

  /* MATLAB Function: '<S4>/position control' incorporates:
   *  BusCreator: '<S4>/BusConversion_InsertedFor_position control_at_inport_0'
   *  DataTypeConversion: '<Root>/Data Type Conversion12'
   *  DiscreteIntegrator: '<S11>/Integrator'
   *  Inport: '<Root>/manual'
   */
  /* :  [n_des, DAQ] = URpositionControl(inputs, state, DAQ, par, URControlParams); */
  /* 'URpositionControl:3' if isempty(errorInt) */
  /* 'URpositionControl:6' if state.fail_id > 0 */
  if (rtb_stateOut.fail_id > 0.0) {
    /* 'URpositionControl:8' maxAngle = URpar.position_maxAngleFailure; */
    rtb_q_dot_idx_1 = URControlParams.position_maxAngleFailure;

    /* 'URpositionControl:9' overallGain = URpar.position_failGain; */
    rtb_q_dot_idx_2 = URControlParams.position_failGain;
  } else {
    /* 'URpositionControl:10' else */
    /* 'URpositionControl:11' maxAngle = URpar.position_maxAngle; */
    rtb_q_dot_idx_1 = URControlParams.position_maxAngle;

    /* 'URpositionControl:12' overallGain = 1; */
    rtb_q_dot_idx_2 = 1.0;
  }

  /* 'URpositionControl:16' errorPos = [inputs.xTarget, inputs.yTarget, inputs.zTarget]  - state.posf; */
  mI[2] = URControl_DW.Integrator_DSTATE[2] - rtb_stateOut.posf[2];

  /* 'URpositionControl:17' if URpar.manual_enable == 1 */
  if (URControlParams.manual_enable == 1.0) {
    /* 'URpositionControl:18' errorPos(3) =  (-inputs.manual(3) * URpar.manual_h_gain) - state.posf(3); */
    mI[2] = -static_cast<real_T>(URControl_U.manual[2]) *
      URControlParams.manual_h_gain - rtb_stateOut.posf[2];
  }

  /* 'URpositionControl:21' velTarget = URpar.position_Kp_pos.*errorPos*overallGain; */
  /* 'URpositionControl:22' maxVel = URpar.position_maxVel; */
  /* 'URpositionControl:23' velTarget = max(min(velTarget,maxVel),-maxVel); */
  /* 'URpositionControl:24' state.vel_ref(1:2) = velTarget(1:2); */
  /* 'URpositionControl:25' state.pos_ref = [inputs.xTarget, inputs.yTarget, inputs.zTarget]'; */
  /* 'URpositionControl:29' errorVel = velTarget - state.velf; */
  /* 'URpositionControl:30' errorInt = errorInt + errorVel/par.freq; */
  /* 'URpositionControl:31' intLim = URpar.position_intLim; */
  /* 'URpositionControl:32' errorInt = max(min(errorInt,intLim),-intLim); */
  /* 'URpositionControl:35' a_ref = URpar.position_Kp_vel.*errorVel*overallGain + URpar.position_Ki_vel.*errorInt*overallGain; */
  rtb_fcn5 = (URControl_DW.Integrator_DSTATE[0] - rtb_stateOut.posf[0]) *
    URControlParams.position_Kp_pos[0] * rtb_q_dot_idx_2;
  b_b_idx_0 = rtIsNaN(URControlParams.position_maxVel);
  if ((rtb_fcn5 < URControlParams.position_maxVel) || b_b_idx_0) {
    rtb_q_dot_idx_0 = rtb_fcn5;
  } else {
    rtb_q_dot_idx_0 = URControlParams.position_maxVel;
  }

  b_b_idx_1 = rtIsNaN(-URControlParams.position_maxVel);
  if ((rtb_q_dot_idx_0 > -URControlParams.position_maxVel) || b_b_idx_1) {
    rtb_fcn5 = rtb_q_dot_idx_0;
  } else {
    rtb_fcn5 = -URControlParams.position_maxVel;
  }

  R_E_tmp = rtb_fcn5 - rtb_stateOut.velf[0];
  URControl_DW.errorInt[0] += R_E_tmp / 500.0;
  tmp_0 = rtIsNaN(URControlParams.position_intLim);
  if ((URControl_DW.errorInt[0] < URControlParams.position_intLim) || tmp_0) {
    rtb_q_dot_idx_0 = URControl_DW.errorInt[0];
  } else {
    rtb_q_dot_idx_0 = URControlParams.position_intLim;
  }

  tmp_1 = rtIsNaN(-URControlParams.position_intLim);
  if ((rtb_q_dot_idx_0 > -URControlParams.position_intLim) || tmp_1) {
    URControl_DW.errorInt[0] = rtb_q_dot_idx_0;
  } else {
    URControl_DW.errorInt[0] = -URControlParams.position_intLim;
  }

  rtb_Delay1[0] = URControlParams.position_Kp_vel[0] * R_E_tmp * rtb_q_dot_idx_2
    + URControlParams.position_Ki_vel[0] * URControl_DW.errorInt[0] *
    rtb_q_dot_idx_2;
  mI[0] = rtb_fcn5;
  rtb_fcn5 = (URControl_DW.Integrator_DSTATE[1] - rtb_stateOut.posf[1]) *
    URControlParams.position_Kp_pos[1] * rtb_q_dot_idx_2;
  if ((rtb_fcn5 < URControlParams.position_maxVel) || b_b_idx_0) {
    rtb_q_dot_idx_0 = rtb_fcn5;
  } else {
    rtb_q_dot_idx_0 = URControlParams.position_maxVel;
  }

  if ((rtb_q_dot_idx_0 > -URControlParams.position_maxVel) || b_b_idx_1) {
    rtb_fcn5 = rtb_q_dot_idx_0;
  } else {
    rtb_fcn5 = -URControlParams.position_maxVel;
  }

  R_E_tmp = rtb_fcn5 - rtb_stateOut.velf[1];
  URControl_DW.errorInt[1] += R_E_tmp / 500.0;
  if ((URControl_DW.errorInt[1] < URControlParams.position_intLim) || tmp_0) {
    rtb_q_dot_idx_0 = URControl_DW.errorInt[1];
  } else {
    rtb_q_dot_idx_0 = URControlParams.position_intLim;
  }

  if ((rtb_q_dot_idx_0 > -URControlParams.position_intLim) || tmp_1) {
    URControl_DW.errorInt[1] = rtb_q_dot_idx_0;
  } else {
    URControl_DW.errorInt[1] = -URControlParams.position_intLim;
  }

  rtb_Delay1[1] = URControlParams.position_Kp_vel[1] * R_E_tmp * rtb_q_dot_idx_2
    + URControlParams.position_Ki_vel[1] * URControl_DW.errorInt[1] *
    rtb_q_dot_idx_2;
  mI[1] = rtb_fcn5;
  rtb_fcn5 = URControlParams.position_Kp_pos[2] * mI[2] * rtb_q_dot_idx_2;
  if ((rtb_fcn5 < URControlParams.position_maxVel) || b_b_idx_0) {
    rtb_q_dot_idx_0 = rtb_fcn5;
  } else {
    rtb_q_dot_idx_0 = URControlParams.position_maxVel;
  }

  if ((rtb_q_dot_idx_0 > -URControlParams.position_maxVel) || b_b_idx_1) {
    rtb_fcn5 = rtb_q_dot_idx_0;
  } else {
    rtb_fcn5 = -URControlParams.position_maxVel;
  }

  R_E_tmp = rtb_fcn5 - rtb_stateOut.velf[2];
  URControl_DW.errorInt[2] += R_E_tmp / 500.0;
  if ((URControl_DW.errorInt[2] < URControlParams.position_intLim) || tmp_0) {
    rtb_q_dot_idx_0 = URControl_DW.errorInt[2];
  } else {
    rtb_q_dot_idx_0 = URControlParams.position_intLim;
  }

  if ((rtb_q_dot_idx_0 > -URControlParams.position_intLim) || tmp_1) {
    URControl_DW.errorInt[2] = rtb_q_dot_idx_0;
  } else {
    URControl_DW.errorInt[2] = -URControlParams.position_intLim;
  }

  R_E_tmp = URControlParams.position_Kp_vel[2] * R_E_tmp * rtb_q_dot_idx_2 +
    URControlParams.position_Ki_vel[2] * URControl_DW.errorInt[2] *
    rtb_q_dot_idx_2;

  /* 'URpositionControl:37' a_ref(3) = a_ref(3) - par.g; */
  /* 'URpositionControl:38' a_ref(3) = min(a_ref(3), par.URC.position_maxAref); */
  if (R_E_tmp - 9.81 < -2.0) {
    R_E_tmp -= 9.81;
  } else {
    R_E_tmp = -2.0;
  }

  /* 'URpositionControl:40' if URpar.manual_enable == 1 */
  if (URControlParams.manual_enable == 1.0) {
    /* 'URpositionControl:41' a_ref(1) = inputs.manual(1) * URpar.manual_acc_gain; */
    rtb_Delay1[0] = URControl_U.manual[0] * URControlParams.manual_acc_gain;

    /* 'URpositionControl:42' a_ref(2) = inputs.manual(2) * URpar.manual_acc_gain; */
    rtb_Delay1[1] = URControl_U.manual[1] * URControlParams.manual_acc_gain;
  }

  /* 'URpositionControl:45' maxLateral = abs(par.g*tan(maxAngle)); */
  /* 'URpositionControl:46' latRatio = sqrt(a_ref(1)^2 + a_ref(2)^2)/maxLateral; */
  rtb_q_dot_idx_1 = std::sqrt(rtb_Delay1[0] * rtb_Delay1[0] + rtb_Delay1[1] *
    rtb_Delay1[1]) / std::abs(9.81 * std::tan(rtb_q_dot_idx_1));

  /* 'URpositionControl:47' a_ref(1) = a_ref(1)/(max(latRatio,1)); */
  if (rtb_q_dot_idx_1 > 1.0) {
    rtb_Merge = rtb_q_dot_idx_1;
  } else {
    rtb_Merge = 1.0;
    rtb_q_dot_idx_1 = 1.0;
  }

  rtb_Delay1[0] /= rtb_Merge;

  /* 'URpositionControl:48' a_ref(2) = a_ref(2)/(max(latRatio,1)); */
  rtb_Delay1[1] /= rtb_q_dot_idx_1;

  /* 'URpositionControl:54' n_des = a_ref/norm(a_ref); */
  rtb_q_dot_idx_2 = 3.3121686421112381E-170;
  rtb_Merge = std::abs(rtb_Delay1[0]);
  if (rtb_Merge > 3.3121686421112381E-170) {
    rtb_q_dot_idx_1 = 1.0;
    rtb_q_dot_idx_2 = rtb_Merge;
  } else {
    rtb_q_dot_idx_0 = rtb_Merge / 3.3121686421112381E-170;
    rtb_q_dot_idx_1 = rtb_q_dot_idx_0 * rtb_q_dot_idx_0;
  }

  rtb_Merge = std::abs(rtb_Delay1[1]);
  if (rtb_Merge > rtb_q_dot_idx_2) {
    rtb_q_dot_idx_0 = rtb_q_dot_idx_2 / rtb_Merge;
    rtb_q_dot_idx_1 = rtb_q_dot_idx_1 * rtb_q_dot_idx_0 * rtb_q_dot_idx_0 + 1.0;
    rtb_q_dot_idx_2 = rtb_Merge;
  } else {
    rtb_q_dot_idx_0 = rtb_Merge / rtb_q_dot_idx_2;
    rtb_q_dot_idx_1 += rtb_q_dot_idx_0 * rtb_q_dot_idx_0;
  }

  rtb_Merge = std::abs(R_E_tmp);
  if (rtb_Merge > rtb_q_dot_idx_2) {
    rtb_q_dot_idx_0 = rtb_q_dot_idx_2 / rtb_Merge;
    rtb_q_dot_idx_1 = rtb_q_dot_idx_1 * rtb_q_dot_idx_0 * rtb_q_dot_idx_0 + 1.0;
    rtb_q_dot_idx_2 = rtb_Merge;
  } else {
    rtb_q_dot_idx_0 = rtb_Merge / rtb_q_dot_idx_2;
    rtb_q_dot_idx_1 += rtb_q_dot_idx_0 * rtb_q_dot_idx_0;
  }

  rtb_q_dot_idx_1 = rtb_q_dot_idx_2 * std::sqrt(rtb_q_dot_idx_1);
  rtb_n_des[0] = rtb_Delay1[0] / rtb_q_dot_idx_1;
  rtb_n_des[1] = rtb_Delay1[1] / rtb_q_dot_idx_1;
  rtb_n_des[2] = R_E_tmp / rtb_q_dot_idx_1;

  /* 'URpositionControl:56' if URpar.position_enable == 0 */
  if (URControlParams.position_enable == 0.0) {
    /* 'URpositionControl:57' n_des = [0, 0, -1]; */
    rtb_n_des[0] = 0.0;
    rtb_n_des[1] = 0.0;
    rtb_n_des[2] = -1.0;
  }

  /* 'URpositionControl:61' daq.posTarget = [inputs.xTarget, inputs.yTarget, inputs.zTarget]; */
  URControl_SharedDSM.DAQ.posTarget[0] = URControl_DW.Integrator_DSTATE[0];
  URControl_SharedDSM.DAQ.posTarget[1] = URControl_DW.Integrator_DSTATE[1];
  URControl_SharedDSM.DAQ.posTarget[2] = URControl_DW.Integrator_DSTATE[2];

  /* 'URpositionControl:62' daq.velTarget = velTarget; */
  /* 'URpositionControl:63' daq.a_ref = a_ref; */
  /* 'URpositionControl:64' daq.n_des = n_des; */
  URControl_SharedDSM.DAQ.velTarget[0] = mI[0];
  URControl_SharedDSM.DAQ.a_ref[0] = rtb_Delay1[0];
  URControl_SharedDSM.DAQ.n_des[0] = rtb_n_des[0];
  URControl_SharedDSM.DAQ.velTarget[1] = mI[1];
  URControl_SharedDSM.DAQ.a_ref[1] = rtb_Delay1[1];
  URControl_SharedDSM.DAQ.n_des[1] = rtb_n_des[1];
  URControl_SharedDSM.DAQ.velTarget[2] = rtb_fcn5;
  URControl_SharedDSM.DAQ.a_ref[2] = R_E_tmp;
  URControl_SharedDSM.DAQ.n_des[2] = rtb_n_des[2];

  /* End of MATLAB Function: '<S4>/position control' */

  /* MATLAB Function: '<S4>/yaw rate control' incorporates:
   *  DiscreteIntegrator: '<S15>/Integrator'
   */
  /* :  [r_cmd, DAQ] = URYawControl(inputs, state, DAQ, par, URControlParams); */
  /* 'URYawControl:3' psiError = inputs.yawTarget - state.att(3); */
  /* 'URYawControl:4' psi_dot_cmd = psiError*URpar.YRC_Kp_psi; */
  /* 'URYawControl:6' r_cmd = psi_dot_cmd*cos(state.att(1))*cos(state.att(2))-sin(state.att(1))*state.omegaf(2); */
  rtb_q_dot_idx_1 = (URControl_DW.Integrator_DSTATE_i - rtb_stateOut.att[2]) *
    URControlParams.YRC_Kp_psi * std::cos(rtb_stateOut.att[0]) * std::cos
    (rtb_stateOut.att[1]) - std::sin(rtb_stateOut.att[0]) * rtb_stateOut.omegaf
    [1];

  /* 'URYawControl:9' if state.fail_id > 0 */
  if (rtb_stateOut.fail_id > 0.0) {
    /* 'URYawControl:10' yawDirection = (-1)^(state.fail_id); */
    /* 'URYawControl:11' r_cmd = yawDirection*URpar.YRC_r_cmd_fail; */
    rtb_q_dot_idx_1 = rt_powd_snf(-1.0, rtb_stateOut.fail_id) *
      URControlParams.YRC_r_cmd_fail;
  }

  /* 'URYawControl:14' if URpar.YRC_enable == 0 */
  if (URControlParams.YRC_enable == 0.0) {
    /* 'URYawControl:16' r_cmd = URpar.YRC_rateCmd; */
    rtb_q_dot_idx_1 = URControlParams.YRC_rateCmd;
  }

  /* 'URYawControl:20' daq.r_cmd = r_cmd; */
  URControl_SharedDSM.DAQ.r_cmd = rtb_q_dot_idx_1;
  rtb_r_cmd = rtb_q_dot_idx_1;

  /* End of MATLAB Function: '<S4>/yaw rate control' */

  /* MATLAB Function: '<S4>/altitude control' incorporates:
   *  DiscreteIntegrator: '<S11>/Integrator'
   */
  /* :  [Ftot_ref, DAQ] = URAltitudeControl(inputs, state, DAQ, par, URControlParams); */
  /* 'URAltitudeControl:3' if isempty(errorInt) */
  /* 'URAltitudeControl:6' errorPos = inputs.zTarget  - state.pos(3); */
  /* 'URAltitudeControl:7' velTarget = URpar.altitude_Kp_pos.*errorPos; */
  /* 'URAltitudeControl:8' if state.fail_id > 0 */
  if (rtb_stateOut.fail_id > 0.0) {
    /* 'URAltitudeControl:9' maxVel = URpar.altitude_maxVelFail; */
    rtb_q_dot_idx_1 = URControlParams.altitude_maxVelFail;
  } else {
    /* 'URAltitudeControl:10' else */
    /* 'URAltitudeControl:11' maxVel = URpar.altitude_maxVel; */
    rtb_q_dot_idx_1 = URControlParams.altitude_maxVel;
  }

  /* 'URAltitudeControl:15' velTarget = min(velTarget,maxVel); */
  /* 'URAltitudeControl:16' state.vel_ref(3) = velTarget; */
  /* 'URAltitudeControl:19' errorVel = velTarget - state.vel(3); */
  rtb_Merge = (URControl_DW.Integrator_DSTATE[2] - rtb_stateOut.pos[2]) *
    URControlParams.altitude_Kp_pos;
  if ((rtb_Merge < rtb_q_dot_idx_1) || rtIsNaN(rtb_q_dot_idx_1)) {
    rtb_q_dot_idx_1 = rtb_Merge;
  }

  rtb_q_dot_idx_1 -= rtb_stateOut.vel[2];

  /* 'URAltitudeControl:20' errorInt = errorInt + errorVel/par.freq; */
  URControl_DW.errorInt_g += rtb_q_dot_idx_1 / 500.0;

  /* 'URAltitudeControl:21' intLim = URpar.altitude_intLim; */
  /* 'URAltitudeControl:22' errorInt = max(min(errorInt,intLim),-intLim); */
  if ((URControl_DW.errorInt_g < URControlParams.altitude_intLim) || rtIsNaN
      (URControlParams.altitude_intLim)) {
    rtb_Merge = URControl_DW.errorInt_g;
  } else {
    rtb_Merge = URControlParams.altitude_intLim;
  }

  if ((rtb_Merge > -URControlParams.altitude_intLim) || rtIsNaN
      (-URControlParams.altitude_intLim)) {
    URControl_DW.errorInt_g = rtb_Merge;
  } else {
    URControl_DW.errorInt_g = -URControlParams.altitude_intLim;
  }

  /* 'URAltitudeControl:25' az_ref = URpar.altitude_Kp_vel.*errorVel + URpar.altitude_Ki_vel.*errorInt; */
  /* 'URAltitudeControl:26' peakAngle = URpar.altitude_peakAngle; */
  /* 'URAltitudeControl:30' multiFactor = 1/(cos(max(min(state.att(1),peakAngle),-peakAngle))*cos(max(min(state.att(2),peakAngle),-peakAngle))); */
  /* 'URAltitudeControl:31' Ftot_ref = -(az_ref - par.g)*par.mass*multiFactor; */
  /* 'URAltitudeControl:32' Ftot_ref = max(Ftot_ref,0); */
  b_b_idx_0 = rtIsNaN(URControlParams.altitude_peakAngle);
  if ((rtb_stateOut.att[1] < URControlParams.altitude_peakAngle) || b_b_idx_0) {
    rtb_Merge = rtb_stateOut.att[1];
  } else {
    rtb_Merge = URControlParams.altitude_peakAngle;
  }

  if ((rtb_stateOut.att[0] < URControlParams.altitude_peakAngle) || b_b_idx_0) {
    rtb_q_dot_idx_0 = rtb_stateOut.att[0];
  } else {
    rtb_q_dot_idx_0 = URControlParams.altitude_peakAngle;
  }

  b_b_idx_0 = rtIsNaN(-URControlParams.altitude_peakAngle);
  if ((!(rtb_q_dot_idx_0 > -URControlParams.altitude_peakAngle)) && (!b_b_idx_0))
  {
    rtb_q_dot_idx_0 = -URControlParams.altitude_peakAngle;
  }

  if ((!(rtb_Merge > -URControlParams.altitude_peakAngle)) && (!b_b_idx_0)) {
    rtb_Merge = -URControlParams.altitude_peakAngle;
  }

  rtb_q_dot_idx_2 = -((URControlParams.altitude_Kp_vel * rtb_q_dot_idx_1 +
                       URControlParams.altitude_Ki_vel * URControl_DW.errorInt_g)
                      - 9.81) * 0.374 * (1.0 / (std::cos(rtb_q_dot_idx_0) * std::
    cos(rtb_Merge)));
  if (!(rtb_q_dot_idx_2 > 0.0)) {
    rtb_q_dot_idx_2 = 0.0;
  }

  /* 'URAltitudeControl:33' maxAngle = max(abs(state.att(1)),abs(state.att(2))); */
  rtb_Merge = std::abs(rtb_stateOut.att[0]);
  rtb_q_dot_idx_1 = std::abs(rtb_stateOut.att[1]);
  if ((rtb_Merge > rtb_q_dot_idx_1) || rtIsNaN(rtb_q_dot_idx_1)) {
    rtb_q_dot_idx_1 = rtb_Merge;
  }

  /* 'URAltitudeControl:34' if maxAngle > URpar.altitude_peakAngle */
  if (rtb_q_dot_idx_1 > URControlParams.altitude_peakAngle) {
    /* 'URAltitudeControl:36' redFactor = 1 - (maxAngle - URpar.altitude_peakAngle)/(URpar.altitude_LOCAngle - URpar.altitude_peakAngle); */
    /* 'URAltitudeControl:37' redFactor = max(min(redFactor,1),0); */
    /* 'URAltitudeControl:38' Ftot_ref = Ftot_ref*redFactor; */
    rtb_Merge = 1.0 - (rtb_q_dot_idx_1 - URControlParams.altitude_peakAngle) /
      (URControlParams.altitude_LOCAngle - URControlParams.altitude_peakAngle);
    if (!(rtb_Merge < 1.0)) {
      rtb_Merge = 1.0;
    }

    if (!(rtb_Merge > 0.0)) {
      rtb_Merge = 0.0;
    }

    rtb_q_dot_idx_2 *= rtb_Merge;
  }

  /* 'URAltitudeControl:44' maxFtot = sum(state.FMax); */
  rtb_q_dot_idx_1 = ((rtb_stateOut.FMax[0] + rtb_stateOut.FMax[1]) +
                     rtb_stateOut.FMax[2]) + rtb_stateOut.FMax[3];

  /* 'URAltitudeControl:45' Ftot_ref = min(Ftot_ref,maxFtot); */
  if ((!(rtb_q_dot_idx_2 < rtb_q_dot_idx_1)) && (!rtIsNaN(rtb_q_dot_idx_1))) {
    rtb_q_dot_idx_2 = rtb_q_dot_idx_1;
  }

  /* 'URAltitudeControl:47' if URpar.altitude_enable == 0 */
  if (URControlParams.altitude_enable == 0.0) {
    /* 'URAltitudeControl:48' Ftot_ref = par.g*par.mass; */
    rtb_q_dot_idx_2 = 3.66894;
  }

  /* 'URAltitudeControl:52' daq.Ftot_ref = Ftot_ref; */
  URControl_SharedDSM.DAQ.Ftot_ref = rtb_q_dot_idx_2;
  URControl_B.Ftot_ref = rtb_q_dot_idx_2;

  /* End of MATLAB Function: '<S4>/altitude control' */

  /* ModelReference: '<S5>/URControl_att' */
  URControl_attMDLOBJ1.step(&rtb_stateOut.acc[0], &rtb_stateOut.accf[0],
    &rtb_stateOut.vel[0], &rtb_stateOut.velf[0], &rtb_stateOut.velB[0],
    &rtb_stateOut.pos[0], &rtb_stateOut.posf[0], &rtb_stateOut.omega[0],
    &rtb_stateOut.omegaf[0], &rtb_stateOut.att[0], &rtb_stateOut.n[0],
    &rtb_stateOut.wRotor[0], &rtb_stateOut.omegaUV[0], &rtb_stateOut.omegafUV[0],
    &rtb_stateOut.FMax[0], &rtb_stateOut.FMin[0], &rtb_stateOut.fail_id,
    &rtb_stateOut.fail_id_quick, &rtb_stateOut.uvDot_max[0],
    &rtb_stateOut.uvDot_min[0], &rtb_stateOut.uv_max[0], &rtb_stateOut.uv_min[0],
    &rtb_stateOut.vel_ref[0], &rtb_stateOut.pos_ref[0], &rtb_n_des[0],
    &rtb_r_cmd, &URControl_B.Ftot_ref, &URControl_B.wRotorSet[0]);

  /* MATLAB Function: '<S3>/MATLAB Function' */
  /* :  [wRotorSetFinal, DAQ] = UROverrides(state, DAQ, wRotorSet, par, URControlParams, flip_input); */
  /* 'UROverrides:3' if isempty(fallCount) */
  /* 'UROverrides:4' if isempty(thrown) */
  /* 'UROverrides:6' if isempty(flipTime) */
  /* 'UROverrides:8' wRotorSetFinal = wRotorSet; */
  /* 'UROverrides:11' if URpar.throw_mode == 1 */
  if (URControlParams.throw_mode == 1.0) {
    /* 'UROverrides:14' if rms(state.accf) < URpar.throw_threshold */
    if (std::sqrt(((rtb_stateOut.accf[0] * rtb_stateOut.accf[0] +
                    rtb_stateOut.accf[1] * rtb_stateOut.accf[1]) +
                   rtb_stateOut.accf[2] * rtb_stateOut.accf[2]) / 3.0) <
        URControlParams.throw_threshold) {
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
      qconj[0] = URControl_B.wRotorSet[0];
      qconj[1] = URControl_B.wRotorSet[1];
      qconj[2] = URControl_B.wRotorSet[2];
      qconj[3] = URControl_B.wRotorSet[3];
    }
  } else if (URControlParams.throw_mode == 2.0) {
    /* 'UROverrides:29' elseif URpar.throw_mode == 2 */
    /* 'UROverrides:31' if state.posf(3) <= -URpar.throw_alt_threshold */
    if (rtb_stateOut.posf[2] <= -URControlParams.throw_alt_threshold) {
      /* 'UROverrides:32' thrown = 1; */
      URControl_DW.thrown = 1.0;
    }

    /* 'UROverrides:34' if thrown == 0 */
    if (URControl_DW.thrown == 0.0) {
      /* 'UROverrides:35' wRotorSetFinal = ones(4,1).*par.w_min; */
      qconj[0] = 300.0;
      qconj[1] = 300.0;
      qconj[2] = 300.0;
      qconj[3] = 300.0;
    } else {
      /* 'UROverrides:36' else */
      /* 'UROverrides:37' wRotorSetFinal = wRotorSet; */
      qconj[0] = URControl_B.wRotorSet[0];
      qconj[1] = URControl_B.wRotorSet[1];
      qconj[2] = URControl_B.wRotorSet[2];
      qconj[3] = URControl_B.wRotorSet[3];
    }
  } else {
    /* 'UROverrides:39' else */
    /* 'UROverrides:40' fallCount = 0; */
    URControl_DW.fallCount = 0.0;

    /* 'UROverrides:41' thrown = 0; */
    URControl_DW.thrown = 0.0;

    /* 'UROverrides:42' wRotorSetFinal = wRotorSet; */
    qconj[0] = URControl_B.wRotorSet[0];
    qconj[1] = URControl_B.wRotorSet[1];
    qconj[2] = URControl_B.wRotorSet[2];
    qconj[3] = URControl_B.wRotorSet[3];
  }

  /* 'UROverrides:46' if ~(URpar.throw_mode == 1 && thrown == 0) */
  if ((!(URControlParams.throw_mode == 1.0)) || (!(URControl_DW.thrown == 0.0)))
  {
    /* 'UROverrides:47' if URpar.flip_mode == 0 */
    if (URControlParams.flip_mode == 0.0) {
      /* 'UROverrides:49' flipTime = 0; */
      URControl_DW.flipTime = 0.0;

      /* 'UROverrides:50' wRotorSetFinal = wRotorSet; */
      qconj[0] = URControl_B.wRotorSet[0];
      qconj[1] = URControl_B.wRotorSet[1];
      qconj[2] = URControl_B.wRotorSet[2];
      qconj[3] = URControl_B.wRotorSet[3];
    } else {
      if (URControlParams.flip_mode == 1.0) {
        /* 'UROverrides:52' elseif URpar.flip_mode == 1 */
        /* 'UROverrides:54' flipTime = flipTime + 1/par.freq; */
        URControl_DW.flipTime += 0.002;

        /* 'UROverrides:55' if flipTime > URpar.flip_time + URpar.flip_upTime */
        if (URControl_DW.flipTime > URControlParams.flip_time +
            URControlParams.flip_upTime) {
          /* 'UROverrides:56' wRotorSetFinal = wRotorSet; */
          qconj[0] = URControl_B.wRotorSet[0];
          qconj[1] = URControl_B.wRotorSet[1];
          qconj[2] = URControl_B.wRotorSet[2];
          qconj[3] = URControl_B.wRotorSet[3];
        } else {
          /* 'UROverrides:57' else */
          /* 'UROverrides:58' if flipTime < URpar.flip_upTime */
          if (URControl_DW.flipTime < URControlParams.flip_upTime) {
            /* 'UROverrides:59' wRotorSetFinal = ones(4,1).*1000; */
            qconj[0] = 1000.0;
            qconj[1] = 1000.0;
            qconj[2] = 1000.0;
            qconj[3] = 1000.0;
          } else {
            /* 'UROverrides:60' else */
            /* 'UROverrides:61' wRotorSetFinal = ones(4,1).*700 + [1;-1;-1;1]*URpar.flip_intensityX + [1;1;-1;-1]*URpar.flip_intensityY; */
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

  /* DiscreteStateSpace: '<S20>/Discrete State-Space' */
  {
    rtb_accs_filter[0] = (1.0)*URControl_DW.DiscreteStateSpace_DSTATE[0];
    rtb_accs_filter[1] = (1.0)*URControl_DW.DiscreteStateSpace_DSTATE[1];
    rtb_accs_filter[2] = (1.0)*URControl_DW.DiscreteStateSpace_DSTATE[2];
  }

  /* Outputs for Atomic SubSystem: '<S24>/Predict' */
  /* SignalConversion: '<S33>/TmpSignal ConversionAt SFunction Inport4' incorporates:
   *  MATLAB Function: '<S31>/Predict'
   */
  rtb_TmpSignalConversionAtSFunct[0] = rtb_accs_filter[0];
  rtb_TmpSignalConversionAtSFunct[3] = rtb_omega[0];
  rtb_TmpSignalConversionAtSFunct[1] = rtb_accs_filter[1];
  rtb_TmpSignalConversionAtSFunct[4] = rtb_omega[1];
  rtb_TmpSignalConversionAtSFunct[2] = rtb_accs_filter[2];
  rtb_TmpSignalConversionAtSFunct[5] = rtb_omega[2];

  /* MATLAB Function: '<S31>/Predict' incorporates:
   *  DataStoreRead: '<S31>/Data Store ReadP'
   *  DataStoreRead: '<S31>/Data Store ReadX'
   *  SignalConversion: '<S33>/TmpSignal ConversionAt SFunction Inport4'
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
  rtb_q_dot_idx_0 = ((URControl_DW.x[7] * rtb_omega[0] + URControl_DW.x[8] *
                      rtb_omega[1]) + URControl_DW.x[9] * rtb_omega[2]) * -0.5 *
    0.002 + URControl_DW.x[6];
  rtb_q_dot_idx_1 = ((URControl_DW.x[8] * rtb_omega[2] - URControl_DW.x[9] *
                      rtb_omega[1]) + rtb_omega[0] * URControl_DW.x[6]) * 0.5 *
    0.002 + URControl_DW.x[7];
  rtb_q_dot_idx_2 = ((URControl_DW.x[9] * rtb_omega[0] - URControl_DW.x[7] *
                      rtb_omega[2]) + rtb_omega[1] * URControl_DW.x[6]) * 0.5 *
    0.002 + URControl_DW.x[8];
  rtb_fcn5 = ((URControl_DW.x[7] * rtb_omega[1] - URControl_DW.x[8] * rtb_omega
               [0]) + rtb_omega[2] * URControl_DW.x[6]) * 0.5 * 0.002 +
    URControl_DW.x[9];

  /* 'ekf_state_func:54' qnorm = sqrt(q(1)^2 + q(2)^2 + q(3)^2 + q(4)^2); */
  rtb_Merge = std::sqrt(((rtb_q_dot_idx_0 * rtb_q_dot_idx_0 + rtb_q_dot_idx_1 *
    rtb_q_dot_idx_1) + rtb_q_dot_idx_2 * rtb_q_dot_idx_2) + rtb_fcn5 * rtb_fcn5);

  /* 'ekf_state_func:55' q = q/qnorm; */
  /* 'ekf_state_func:57' for i = 1:4 */
  /* 'ekf_state_func:58' x(i+6) = q(i); */
  rtb_xNew[6] = rtb_q_dot_idx_0 / rtb_Merge;

  /* 'ekf_state_func:58' x(i+6) = q(i); */
  rtb_xNew[7] = rtb_q_dot_idx_1 / rtb_Merge;

  /* 'ekf_state_func:58' x(i+6) = q(i); */
  rtb_xNew[8] = rtb_q_dot_idx_2 / rtb_Merge;

  /* 'ekf_state_func:58' x(i+6) = q(i); */
  rtb_xNew[9] = rtb_fcn5 / rtb_Merge;
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
    /* DataStoreWrite: '<S31>/Data Store WriteP' incorporates:
     *  Constant: '<S24>/Q'
     *  MATLAB Function: '<S31>/Predict'
     */
    for (r2 = 0; r2 < 10; r2++) {
      rtb_Merge = 0.0;
      for (r3 = 0; r3 < 10; r3++) {
        rtb_Merge += Jacobian_0[10 * r3 + i] * Jacobian[10 * r3 + r2];
      }

      /* MATLAB Function: '<S31>/Predict' incorporates:
       *  Constant: '<S24>/Q'
       */
      r3 = 10 * r2 + i;
      URControl_DW.P[r3] = rtCP_Q_Value[r3] + rtb_Merge;
    }

    /* End of DataStoreWrite: '<S31>/Data Store WriteP' */

    /* DataStoreWrite: '<S31>/Data Store WriteX' */
    URControl_DW.x[i] = rtb_xNew[i];
  }

  /* End of Outputs for SubSystem: '<S24>/Predict' */

  /* MATLAB Function: '<S21>/MATLAB Function' */
  URControl_MATLABFunction(rtb_mag, URControl_B.Euler_flip,
    &URControl_B.sf_MATLABFunction_i, &URControl_DW.sf_MATLABFunction_i);

  /* MATLAB Function: '<S21>/unwrap2pi' */
  URControl_unwrap2pi(URControl_B.sf_MATLABFunction_i.psi,
                      &URControl_B.sf_unwrap2pi, &URControl_DW.sf_unwrap2pi);

  /* Sum: '<S21>/Add' */
  rtb_psi_mag_filter0 = URControl_B.sf_unwrap2pi.psi - rtb_psi_mag_filter0;

  /* MATLAB Function: '<S21>/MATLAB Function6' incorporates:
   *  BusCreator: '<S21>/BusConversion_InsertedFor_MATLAB Function6_at_inport_0'
   */
  /* :  phi     = sensor.att(1); */
  /* :  theta   = sensor.att(2); */
  /* :  psi     = sensor.att(3); */
  /* :  R_BI = [cos(theta)*cos(psi)                             , cos(theta)*sin(psi)                               , -sin(theta); */
  /* :          sin(phi)*sin(theta)*cos(psi)-cos(phi)*sin(psi)  , sin(phi)*sin(theta)*sin(psi)+cos(phi)*cos(psi)    , sin(phi)*cos(theta); */
  /* :          cos(phi)*sin(theta)*cos(psi)+sin(phi)*sin(psi)  , cos(phi)*sin(theta)*sin(psi)-sin(phi)*cos(psi)    , cos(phi)*cos(theta)]; */
  /* :  R_IB = R_BI'; */
  rtb_q_dot_idx_0 = std::cos(rtb_att[1]);
  rtb_q_dot_idx_1 = std::cos(rtb_att[2]);

  /* Math: '<S21>/Transpose' incorporates:
   *  MATLAB Function: '<S21>/MATLAB Function6'
   */
  R_E[0] = rtb_q_dot_idx_0 * rtb_q_dot_idx_1;

  /* MATLAB Function: '<S21>/MATLAB Function6' incorporates:
   *  BusCreator: '<S21>/BusConversion_InsertedFor_MATLAB Function6_at_inport_0'
   */
  rtb_q_dot_idx_2 = std::sin(rtb_att[2]);

  /* Math: '<S21>/Transpose' incorporates:
   *  MATLAB Function: '<S21>/MATLAB Function6'
   */
  R_E[3] = rtb_q_dot_idx_0 * rtb_q_dot_idx_2;

  /* MATLAB Function: '<S21>/MATLAB Function6' incorporates:
   *  BusCreator: '<S21>/BusConversion_InsertedFor_MATLAB Function6_at_inport_0'
   */
  rtb_Merge = std::sin(rtb_att[1]);
  rtb_fcn5 = std::sin(rtb_att[0]);
  R_E_tmp = rtb_fcn5 * rtb_Merge;
  R_E_tmp_0 = std::cos(rtb_att[0]);

  /* Math: '<S21>/Transpose' incorporates:
   *  MATLAB Function: '<S21>/MATLAB Function6'
   */
  R_E[1] = R_E_tmp * rtb_q_dot_idx_1 - R_E_tmp_0 * rtb_q_dot_idx_2;
  R_E[4] = R_E_tmp * rtb_q_dot_idx_2 + R_E_tmp_0 * rtb_q_dot_idx_1;
  R_E[7] = rtb_fcn5 * rtb_q_dot_idx_0;

  /* MATLAB Function: '<S21>/MATLAB Function6' */
  R_E_tmp = R_E_tmp_0 * rtb_Merge;

  /* Math: '<S21>/Transpose' incorporates:
   *  MATLAB Function: '<S21>/MATLAB Function6'
   */
  R_E[2] = R_E_tmp * rtb_q_dot_idx_1 + rtb_fcn5 * rtb_q_dot_idx_2;
  R_E[5] = R_E_tmp * rtb_q_dot_idx_2 - rtb_fcn5 * rtb_q_dot_idx_1;
  R_E[8] = R_E_tmp_0 * rtb_q_dot_idx_0;

  /* Sum: '<S63>/Add' */
  rtb_q_dot_idx_0 = (R_E[0] + R_E[4]) + R_E[8];

  /* If: '<S42>/If' incorporates:
   *  If: '<S60>/Find Maximum Diagonal Value'
   */
  if (rtb_q_dot_idx_0 > 0.0) {
    /* Outputs for IfAction SubSystem: '<S42>/Positive Trace' incorporates:
     *  ActionPort: '<S61>/Action Port'
     */
    /* Sqrt: '<S61>/sqrt' incorporates:
     *  Constant: '<S61>/Constant'
     *  Sum: '<S61>/Sum'
     */
    rtb_q_dot_idx_0 = std::sqrt(rtb_q_dot_idx_0 + 1.0);

    /* Gain: '<S61>/Gain' */
    URControl_B.Merge[0] = 0.5 * rtb_q_dot_idx_0;

    /* Gain: '<S61>/Gain1' */
    rtb_q_dot_idx_0 *= 2.0;

    /* Product: '<S61>/Product' incorporates:
     *  BusCreator: '<S21>/BusConversion_InsertedFor_MATLAB Function6_at_inport_0'
     *  MATLAB Function: '<S21>/MATLAB Function6'
     *  Sum: '<S83>/Add'
     *  Sum: '<S84>/Add'
     *  Sum: '<S85>/Add'
     */
    URControl_B.Merge[1] = (R_E[7] - R_E[5]) / rtb_q_dot_idx_0;
    URControl_B.Merge[2] = (R_E[2] - (-std::sin(rtb_att[1]))) / rtb_q_dot_idx_0;
    URControl_B.Merge[3] = (R_E[3] - R_E[1]) / rtb_q_dot_idx_0;

    /* End of Outputs for SubSystem: '<S42>/Positive Trace' */
  } else {
    /* Outputs for IfAction SubSystem: '<S42>/Negative Trace' incorporates:
     *  ActionPort: '<S60>/Action Port'
     */
    if ((R_E[4] > R_E[0]) && (R_E[4] > R_E[8])) {
      /* Outputs for IfAction SubSystem: '<S60>/Maximum Value at DCM(2,2)' incorporates:
       *  ActionPort: '<S65>/Action Port'
       */
      /* If: '<S60>/Find Maximum Diagonal Value' incorporates:
       *  Constant: '<S76>/Constant1'
       *  Constant: '<S77>/Constant'
       *  Gain: '<S65>/Gain'
       *  Gain: '<S65>/Gain1'
       *  Gain: '<S65>/Gain3'
       *  Gain: '<S65>/Gain4'
       *  MATLAB Function: '<S21>/MATLAB Function6'
       *  Product: '<S65>/Product'
       *  Product: '<S76>/Product'
       *  Sqrt: '<S65>/sqrt'
       *  Sum: '<S73>/Add'
       *  Sum: '<S74>/Add'
       *  Sum: '<S75>/Add'
       *  Sum: '<S77>/Add'
       *  Switch: '<S76>/Switch'
       */
      rtb_q_dot_idx_0 = std::sqrt(((R_E[4] - R_E[0]) - R_E[8]) + 1.0);
      URControl_B.Merge[2] = 0.5 * rtb_q_dot_idx_0;
      if (rtb_q_dot_idx_0 != 0.0) {
        rtb_q_dot_idx_1 = 0.5;
      } else {
        rtb_q_dot_idx_1 = 0.0;
        rtb_q_dot_idx_0 = 1.0;
      }

      rtb_q_dot_idx_0 = rtb_q_dot_idx_1 / rtb_q_dot_idx_0;
      URControl_B.Merge[1] = (R_E[1] + R_E[3]) * rtb_q_dot_idx_0;
      URControl_B.Merge[3] = (R_E[5] + R_E[7]) * rtb_q_dot_idx_0;
      URControl_B.Merge[0] = (R_E[2] - (-rtb_Merge)) * rtb_q_dot_idx_0;

      /* End of Outputs for SubSystem: '<S60>/Maximum Value at DCM(2,2)' */
    } else if (R_E[8] > R_E[0]) {
      /* Outputs for IfAction SubSystem: '<S60>/Maximum Value at DCM(3,3)' incorporates:
       *  ActionPort: '<S66>/Action Port'
       */
      /* If: '<S60>/Find Maximum Diagonal Value' incorporates:
       *  Constant: '<S81>/Constant1'
       *  Constant: '<S82>/Constant'
       *  Gain: '<S66>/Gain'
       *  Gain: '<S66>/Gain1'
       *  Gain: '<S66>/Gain2'
       *  Gain: '<S66>/Gain3'
       *  MATLAB Function: '<S21>/MATLAB Function6'
       *  Product: '<S66>/Product'
       *  Product: '<S81>/Product'
       *  Sqrt: '<S66>/sqrt'
       *  Sum: '<S78>/Add'
       *  Sum: '<S79>/Add'
       *  Sum: '<S80>/Add'
       *  Sum: '<S82>/Add'
       *  Switch: '<S81>/Switch'
       */
      rtb_q_dot_idx_0 = std::sqrt(((R_E[8] - R_E[0]) - R_E[4]) + 1.0);
      URControl_B.Merge[3] = 0.5 * rtb_q_dot_idx_0;
      if (rtb_q_dot_idx_0 != 0.0) {
        rtb_q_dot_idx_1 = 0.5;
      } else {
        rtb_q_dot_idx_1 = 0.0;
        rtb_q_dot_idx_0 = 1.0;
      }

      rtb_q_dot_idx_0 = rtb_q_dot_idx_1 / rtb_q_dot_idx_0;
      URControl_B.Merge[1] = (R_E[2] + -rtb_Merge) * rtb_q_dot_idx_0;
      URControl_B.Merge[2] = (R_E[5] + R_E[7]) * rtb_q_dot_idx_0;
      URControl_B.Merge[0] = (R_E[3] - R_E[1]) * rtb_q_dot_idx_0;

      /* End of Outputs for SubSystem: '<S60>/Maximum Value at DCM(3,3)' */
    } else {
      /* Outputs for IfAction SubSystem: '<S60>/Maximum Value at DCM(1,1)' incorporates:
       *  ActionPort: '<S64>/Action Port'
       */
      /* If: '<S60>/Find Maximum Diagonal Value' incorporates:
       *  Constant: '<S71>/Constant1'
       *  Constant: '<S72>/Constant'
       *  Gain: '<S64>/Gain'
       *  Gain: '<S64>/Gain1'
       *  Gain: '<S64>/Gain2'
       *  Gain: '<S64>/Gain3'
       *  MATLAB Function: '<S21>/MATLAB Function6'
       *  Product: '<S64>/Product'
       *  Product: '<S71>/Product'
       *  Sqrt: '<S64>/sqrt'
       *  Sum: '<S68>/Add'
       *  Sum: '<S69>/Add'
       *  Sum: '<S70>/Add'
       *  Sum: '<S72>/Add'
       *  Switch: '<S71>/Switch'
       */
      rtb_q_dot_idx_0 = std::sqrt(((R_E[0] - R_E[4]) - R_E[8]) + 1.0);
      URControl_B.Merge[1] = 0.5 * rtb_q_dot_idx_0;
      if (rtb_q_dot_idx_0 != 0.0) {
        rtb_q_dot_idx_1 = 0.5;
      } else {
        rtb_q_dot_idx_1 = 0.0;
        rtb_q_dot_idx_0 = 1.0;
      }

      rtb_q_dot_idx_0 = rtb_q_dot_idx_1 / rtb_q_dot_idx_0;
      URControl_B.Merge[2] = (R_E[1] + R_E[3]) * rtb_q_dot_idx_0;
      URControl_B.Merge[3] = (R_E[2] + -rtb_Merge) * rtb_q_dot_idx_0;
      URControl_B.Merge[0] = (R_E[7] - R_E[5]) * rtb_q_dot_idx_0;

      /* End of Outputs for SubSystem: '<S60>/Maximum Value at DCM(1,1)' */
    }

    /* End of Outputs for SubSystem: '<S42>/Negative Trace' */
  }

  /* End of If: '<S42>/If' */

  /* Gain: '<S21>/Gain2' */
  /* :  if sum(isnan(u)) */
  rtb_Merge = URControlParams.kb[0] * rtb_alpha[0];

  /* MATLAB Function: '<S21>/MATLAB Function12' */
  b_b_idx_0 = rtIsNaN(rtb_Merge);

  /* Gain: '<S21>/Gain2' */
  rtb_alpha[0] = rtb_Merge;
  rtb_Merge = URControlParams.kb[1] * rtb_alpha[1];

  /* MATLAB Function: '<S21>/MATLAB Function12' */
  b_b_idx_1 = rtIsNaN(rtb_Merge);

  /* Gain: '<S21>/Gain2' */
  rtb_alpha[1] = rtb_Merge;
  rtb_Merge = URControlParams.kb[2] * rtb_alpha[2];
  rtb_alpha[2] = rtb_Merge;

  /* MATLAB Function: '<S21>/MATLAB Function12' */
  rtb_Merge = (static_cast<real_T>(b_b_idx_0) + static_cast<real_T>(b_b_idx_1))
    + static_cast<real_T>(rtIsNaN(rtb_Merge));
  if (rtb_Merge != 0.0) {
    /* :  y = 0*ones(size(u)); */
    rtb_alpha[0] = 0.0;
    rtb_alpha[1] = 0.0;
    rtb_alpha[2] = 0.0;
  } else {
    /* :  else */
    /* :  y = u; */
  }

  /* MATLAB Function: '<S21>/MATLAB Function3' */
  URControl_MATLABFunction3(rtb_psi_mag_filter0, &URControl_B.sf_MATLABFunction3);

  /* MATLAB Function: '<S21>/MATLAB Function4' incorporates:
   *  DiscreteIntegrator: '<S21>/Discrete-Time Integrator1'
   *  Gain: '<S21>/Gain'
   *  Sum: '<S21>/Add1'
   *  Sum: '<S21>/Add4'
   */
  URControl_MATLABFunction3((10.0 * rtb_psi_mag_filter0 +
    URControl_DW.DiscreteTimeIntegrator1_DSTATE) + rtb_omega[2],
    &URControl_B.sf_MATLABFunction4);

  /* Sqrt: '<S110>/sqrt' incorporates:
   *  Product: '<S111>/Product'
   *  Product: '<S111>/Product1'
   *  Product: '<S111>/Product2'
   *  Product: '<S111>/Product3'
   *  Sum: '<S111>/Sum'
   */
  rtb_q_dot_idx_1 = std::sqrt(((URControl_B.Merge[0] * URControl_B.Merge[0] +
    URControl_B.Merge[1] * URControl_B.Merge[1]) + URControl_B.Merge[2] *
    URControl_B.Merge[2]) + URControl_B.Merge[3] * URControl_B.Merge[3]);

  /* Product: '<S105>/Product' */
  rtb_fcn5 = URControl_B.Merge[0] / rtb_q_dot_idx_1;

  /* Product: '<S105>/Product1' */
  rtb_q_dot_idx_2 = URControl_B.Merge[1] / rtb_q_dot_idx_1;

  /* Product: '<S105>/Product2' */
  rtb_q_dot_idx_0 = URControl_B.Merge[2] / rtb_q_dot_idx_1;

  /* Product: '<S105>/Product3' */
  rtb_q_dot_idx_1 = URControl_B.Merge[3] / rtb_q_dot_idx_1;

  /* Fcn: '<S56>/fcn3' */
  rtb_q_dot_idx_0 = (rtb_q_dot_idx_2 * rtb_q_dot_idx_1 - rtb_fcn5 *
                     rtb_q_dot_idx_0) * -2.0;

  /* If: '<S106>/If' */
  if ((!(rtb_q_dot_idx_0 > 1.0)) && (!(rtb_q_dot_idx_0 < -1.0))) {
    /* Outputs for IfAction SubSystem: '<S106>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S109>/Action Port'
     */
    URControl_IfActionSubsystem2(rtb_q_dot_idx_0, &rtb_Merge);

    /* End of Outputs for SubSystem: '<S106>/If Action Subsystem2' */
  }

  /* End of If: '<S106>/If' */

  /* MATLAB Function: '<S23>/MATLAB Function' */
  URControl_MATLABFunction(rtb_mag, URControl_B.att_ekfquat,
    &URControl_B.sf_MATLABFunction_m, &URControl_DW.sf_MATLABFunction_m);

  /* MATLAB Function: '<S23>/unwrap2pi' */
  URControl_unwrap2pi(URControl_B.sf_MATLABFunction_m.psi,
                      &URControl_B.sf_unwrap2pi_m, &URControl_DW.sf_unwrap2pi_m);

  /* Sum: '<S23>/Add' incorporates:
   *  DiscreteIntegrator: '<S23>/Discrete-Time Integrator'
   */
  rtb_q_dot_idx_0 = URControl_B.sf_unwrap2pi_m.psi -
    URControl_DW.DiscreteTimeIntegrator_DSTATE_d;

  /* MATLAB Function: '<S23>/MATLAB Function1' incorporates:
   *  DiscreteIntegrator: '<S23>/Discrete-Time Integrator'
   */
  URControl_B.sf_MATLABFunction1_k.lambda =
    URControl_DW.DiscreteTimeIntegrator_DSTATE_d;
  URControl_MATLABFunction2(&URControl_B.sf_MATLABFunction1_k);

  /* MATLAB Function: '<S23>/MATLAB Function3' */
  URControl_MATLABFunction3(rtb_q_dot_idx_0, &URControl_B.sf_MATLABFunction3_g);

  /* MATLAB Function: '<S23>/MATLAB Function4' incorporates:
   *  DiscreteIntegrator: '<S23>/Discrete-Time Integrator1'
   *  Gain: '<S23>/Gain'
   *  Sum: '<S23>/Add1'
   *  Sum: '<S23>/Add2'
   */
  URControl_MATLABFunction3((30.0 * rtb_q_dot_idx_0 +
    URControl_DW.DiscreteTimeIntegrator1_DSTAT_h) + rtb_omega[2],
    &URControl_B.sf_MATLABFunction4_k);

  /* Outport: '<Root>/daq' incorporates:
   *  DataStoreRead: '<Root>/Data Store Read'
   */
  URControl_Y.daq = URControl_SharedDSM.DAQ;

  /* Update for Memory: '<S20>/Memory' */
  URControl_DW.Memory_PreviousInput[0] = rtb_DataStoreRead_k[6];
  URControl_DW.Memory_PreviousInput[1] = rtb_DataStoreRead_k[7];
  URControl_DW.Memory_PreviousInput[2] = rtb_DataStoreRead_k[8];
  URControl_DW.Memory_PreviousInput[3] = rtb_DataStoreRead_k[9];

  /* Update for DiscreteIntegrator: '<S21>/Discrete-Time Integrator' */
  URControl_DW.DiscreteTimeIntegrator_DSTATE += 0.002 *
    URControl_B.sf_MATLABFunction4.y;

  /* Update for DiscreteIntegrator: '<S21>/Discrete-Time Integrator3' */
  URControl_DW.DiscreteTimeIntegrator3_DSTATE[0] += 0.002 * rtb_alpha[0];

  /* Update for UnitDelay: '<S43>/UD' */
  URControl_DW.UD_DSTATE[0] = rtb_b_l_idx_0;

  /* Update for Delay: '<S21>/Delay1' */
  URControl_DW.Delay1_DSTATE[0] = URControl_B.Euler_flip[0];

  /* Update for DiscreteIntegrator: '<S21>/Discrete-Time Integrator3' */
  URControl_DW.DiscreteTimeIntegrator3_DSTATE[1] += 0.002 * rtb_alpha[1];

  /* Update for UnitDelay: '<S43>/UD' */
  URControl_DW.UD_DSTATE[1] = rtb_b_l_idx_1;

  /* Update for Delay: '<S21>/Delay1' */
  URControl_DW.Delay1_DSTATE[1] = URControl_B.Euler_flip[1];

  /* Update for DiscreteIntegrator: '<S21>/Discrete-Time Integrator3' */
  URControl_DW.DiscreteTimeIntegrator3_DSTATE[2] += 0.002 * rtb_alpha[2];

  /* Update for UnitDelay: '<S43>/UD' */
  URControl_DW.UD_DSTATE[2] = rtb_b_g;

  /* Update for Delay: '<S21>/Delay1' */
  URControl_DW.Delay1_DSTATE[2] = URControl_B.Euler_flip[2];

  /* Update for Delay: '<S21>/Delay' incorporates:
   *  SignalConversion: '<S21>/TmpSignal ConversionAtDelayInport1'
   */
  URControl_DW.Delay_DSTATE[0] = rtb_fcn3;
  URControl_DW.Delay_DSTATE[1] = rtb_enableMeas;
  URControl_DW.Delay_DSTATE[2] = rtb_q_dot_idx_3;
  URControl_DW.Delay_DSTATE[3] = rtb_Product3_a;

  /* Update for Delay: '<Root>/Delay' */
  for (i = 0; i < 999; i++) {
    URControl_DW.Delay_DSTATE_j[i] = URControl_DW.Delay_DSTATE_j[i + 1];
  }

  URControl_DW.Delay_DSTATE_j[999] = rtb_fcn3_d;

  /* End of Update for Delay: '<Root>/Delay' */

  /* Update for DiscreteIntegrator: '<S11>/Integrator' */
  URControl_DW.Integrator_IC_LOADING = 0U;

  /* MinMax: '<S8>/Max' */
  if (URControl_B.Probe[0] > 0.05) {
    rtb_Merge = URControl_B.Probe[0];
  } else {
    rtb_Merge = 0.05;
  }

  /* End of MinMax: '<S8>/Max' */

  /* Product: '<S1>/1//T' */
  rtb_Merge = 1.0 / rtb_Merge;

  /* Update for DiscreteIntegrator: '<S11>/Integrator' incorporates:
   *  Product: '<S1>/1//T'
   *  Sum: '<S1>/Sum1'
   */
  URControl_DW.Integrator_DSTATE[0] += (rtb_pos[0] - rtb_vel_idx_0) * rtb_Merge *
    0.002;
  URControl_DW.Integrator_DSTATE[1] += (rtb_pos[1] - rtb_vel_idx_1) * rtb_Merge *
    0.002;
  URControl_DW.Integrator_DSTATE[2] += (rtb_pos[2] - rtb_vel_idx_2) * rtb_Merge *
    0.002;
  URControl_DW.Integrator_PrevResetState = static_cast<int8_T>(rEQ0);

  /* Update for DiscreteIntegrator: '<S15>/Integrator' */
  URControl_DW.Integrator_IC_LOADING_a = 0U;

  /* MinMax: '<S12>/Max' */
  if (URControl_B.Probe_d[0] > 0.05) {
    rtb_Merge = URControl_B.Probe_d[0];
  } else {
    rtb_Merge = 0.05;
  }

  /* End of MinMax: '<S12>/Max' */

  /* Update for DiscreteIntegrator: '<S15>/Integrator' incorporates:
   *  Product: '<S2>/1//T'
   *  Sum: '<S2>/Sum1'
   */
  URControl_DW.Integrator_DSTATE_i += 1.0 / rtb_Merge * (rtb_Delay_g -
    rtb_Integrator_o) * 0.002;
  URControl_DW.Integrator_PrevResetState_i = static_cast<int8_T>(rtb_Compare_j);

  /* Update for DiscreteStateSpace: '<S20>/Discrete State-Space' */
  {
    real_T xnew[3];
    xnew[0] = (0.9)*URControl_DW.DiscreteStateSpace_DSTATE[0];
    xnew[0] += (0.1)*rtb_acc[0];
    xnew[1] = (0.9)*URControl_DW.DiscreteStateSpace_DSTATE[1];
    xnew[1] += (0.1)*rtb_acc[1];
    xnew[2] = (0.9)*URControl_DW.DiscreteStateSpace_DSTATE[2];
    xnew[2] += (0.1)*rtb_acc[2];
    (void) memcpy(&URControl_DW.DiscreteStateSpace_DSTATE[0], xnew,
                  sizeof(real_T)*3);
  }

  /* Update for DiscreteIntegrator: '<S21>/Discrete-Time Integrator1' */
  URControl_DW.DiscreteTimeIntegrator1_DSTATE += 0.01 *
    URControl_B.sf_MATLABFunction3.y;

  /* Update for DiscreteIntegrator: '<S23>/Discrete-Time Integrator' */
  URControl_DW.DiscreteTimeIntegrator_DSTATE_d += 0.002 *
    URControl_B.sf_MATLABFunction4_k.y;

  /* Update for DiscreteIntegrator: '<S23>/Discrete-Time Integrator1' */
  URControl_DW.DiscreteTimeIntegrator1_DSTAT_h += 0.01 *
    URControl_B.sf_MATLABFunction3_g.y;

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The resolution of this integer timer is 0.002, which is the step size
   * of the task. Size of "clockTick0" ensures timer will not overflow during the
   * application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  (&URControl_M)->Timing.clockTick0++;
  if (!(&URControl_M)->Timing.clockTick0) {
    (&URControl_M)->Timing.clockTickH0++;
  }
}

/* Model initialize function */
void URControlModelClass::initialize()
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)(&URControl_M), 0,
                sizeof(RT_MODEL_URControl_T));

  /* block I/O */
  (void) memset(((void *) &URControl_B), 0,
                sizeof(B_URControl_T));

  /* Initialize data stores shared across model instances */
  if (!_URControl_SharedDataInit_) {
    (void) memset((void *)&URControl_SharedDSM, 0,
                  sizeof(SharedDSM_URControl_T));
  }

  /* states (dwork) */
  (void) memset((void *)&URControl_DW, 0,
                sizeof(DW_URControl_T));

  /* external inputs */
  (void)memset(&URControl_U, 0, sizeof(ExtU_URControl_T));

  /* external outputs */
  (void) memset((void *)&URControl_Y, 0,
                sizeof(ExtY_URControl_T));

  /* Model Initialize function for ModelReference Block: '<S5>/URControl_att' */
  URControl_attMDLOBJ1.initializeRTM();

  /* Set error status pointer for ModelReference Block: '<S5>/URControl_att' */
  URControl_attMDLOBJ1.setErrorStatusPointer(rtmGetErrorStatusPointer
    ((&URControl_M)));
  URControl_attMDLOBJ1.initialize();

  /* Start for Probe: '<S8>/Probe' */
  URControl_B.Probe[0] = 0.002;
  URControl_B.Probe[1] = 0.0;

  /* Start for Probe: '<S12>/Probe' */
  URControl_B.Probe_d[0] = 0.002;
  URControl_B.Probe_d[1] = 0.0;

  /* Start for ModelReference: '<S5>/URControl_att' */
  URControl_attMDLOBJ1.start();

  /* Start for DataStoreMemory: '<S24>/DataStoreMemory - P' */
  memcpy(&URControl_DW.P[0], &rtCP_DataStoreMemoryP_InitialVa[0], 100U * sizeof
         (real_T));

  /* Start for DataStoreMemory: '<S24>/DataStoreMemory - x' */
  memcpy(&URControl_DW.x[0], &rtCP_DataStoreMemoryx_InitialVa[0], 10U * sizeof
         (real_T));

  /* Start for DataStoreMemory: '<Root>/Data Store Memory' */
  if (!_URControl_SharedDataInit_) {
    URControl_SharedDSM.DAQ = URControl_rtZdaqBus;
  }

  /* End of Start for DataStoreMemory: '<Root>/Data Store Memory' */

  /* Start for DataStoreMemory: '<Root>/Data Store Memory1' */
  URControl_DW.State = URControl_rtZstateBus;

  /* InitializeConditions for Memory: '<S20>/Memory' */
  URControl_DW.Memory_PreviousInput[0] = 0.0;
  URControl_DW.Memory_PreviousInput[1] = 0.0;
  URControl_DW.Memory_PreviousInput[2] = 0.0;
  URControl_DW.Memory_PreviousInput[3] = 0.0;

  /* InitializeConditions for DiscreteIntegrator: '<S21>/Discrete-Time Integrator' */
  URControl_DW.DiscreteTimeIntegrator_DSTATE = 0.0;

  /* InitializeConditions for DiscreteIntegrator: '<S21>/Discrete-Time Integrator3' */
  URControl_DW.DiscreteTimeIntegrator3_DSTATE[0] = 0.0;

  /* InitializeConditions for UnitDelay: '<S43>/UD' */
  URControl_DW.UD_DSTATE[0] = 0.0;

  /* InitializeConditions for Delay: '<S21>/Delay1' */
  URControl_DW.Delay1_DSTATE[0] = 0.0;

  /* InitializeConditions for DiscreteIntegrator: '<S21>/Discrete-Time Integrator3' */
  URControl_DW.DiscreteTimeIntegrator3_DSTATE[1] = 0.0;

  /* InitializeConditions for UnitDelay: '<S43>/UD' */
  URControl_DW.UD_DSTATE[1] = 0.0;

  /* InitializeConditions for Delay: '<S21>/Delay1' */
  URControl_DW.Delay1_DSTATE[1] = 0.0;

  /* InitializeConditions for DiscreteIntegrator: '<S21>/Discrete-Time Integrator3' */
  URControl_DW.DiscreteTimeIntegrator3_DSTATE[2] = 0.0;

  /* InitializeConditions for UnitDelay: '<S43>/UD' */
  URControl_DW.UD_DSTATE[2] = 0.0;

  /* InitializeConditions for Delay: '<S21>/Delay1' */
  URControl_DW.Delay1_DSTATE[2] = 0.0;

  /* InitializeConditions for Delay: '<S21>/Delay' */
  URControl_DW.Delay_DSTATE[0] = 1.0;
  URControl_DW.Delay_DSTATE[1] = 0.0;
  URControl_DW.Delay_DSTATE[2] = 0.0;
  URControl_DW.Delay_DSTATE[3] = 0.0;

  /* InitializeConditions for Delay: '<Root>/Delay' */
  memset(&URControl_DW.Delay_DSTATE_j[0], 0, 1000U * sizeof(real_T));

  /* InitializeConditions for DiscreteIntegrator: '<S11>/Integrator' */
  URControl_DW.Integrator_IC_LOADING = 1U;
  URControl_DW.Integrator_PrevResetState = 0;

  /* InitializeConditions for DiscreteIntegrator: '<S15>/Integrator' */
  URControl_DW.Integrator_IC_LOADING_a = 1U;
  URControl_DW.Integrator_PrevResetState_i = 0;

  /* InitializeConditions for DiscreteStateSpace: '<S20>/Discrete State-Space' */
  URControl_DW.DiscreteStateSpace_DSTATE[0] = (0.0);
  URControl_DW.DiscreteStateSpace_DSTATE[1] = (0.0);
  URControl_DW.DiscreteStateSpace_DSTATE[2] = (0.0);

  /* InitializeConditions for DiscreteIntegrator: '<S21>/Discrete-Time Integrator1' */
  URControl_DW.DiscreteTimeIntegrator1_DSTATE = 0.0;

  /* InitializeConditions for DiscreteIntegrator: '<S23>/Discrete-Time Integrator' */
  URControl_DW.DiscreteTimeIntegrator_DSTATE_d = 0.0;

  /* InitializeConditions for DiscreteIntegrator: '<S23>/Discrete-Time Integrator1' */
  URControl_DW.DiscreteTimeIntegrator1_DSTAT_h = 0.0;

  /* SystemInitialize for MATLAB Function: '<S7>/basic estimators' */
  /* :  attPrev = [0;0;0]; */
  URControl_DW.omegaFilter_not_empty = false;
  URControl_DW.posFilter_not_empty = false;
  URControl_DW.velFilter_not_empty = false;
  URControl_DW.accFilter_not_empty = false;

  /* 'UREstimators:7' failProt = 0; */
  URControl_DW.failProt = 0.0;

  /* SystemInitialize for MATLAB Function: '<S20>/enableMeas' */
  /* 'URpositionControl:3' errorInt = [0,0,0]; */
  URControl_DW.attPrev[0] = 0.0;

  /* SystemInitialize for MATLAB Function: '<S4>/position control' */
  URControl_DW.errorInt[0] = 0.0;

  /* SystemInitialize for MATLAB Function: '<S20>/enableMeas' */
  URControl_DW.attPrev[1] = 0.0;

  /* SystemInitialize for MATLAB Function: '<S4>/position control' */
  URControl_DW.errorInt[1] = 0.0;

  /* SystemInitialize for MATLAB Function: '<S20>/enableMeas' */
  URControl_DW.attPrev[2] = 0.0;

  /* SystemInitialize for MATLAB Function: '<S4>/position control' */
  URControl_DW.errorInt[2] = 0.0;

  /* SystemInitialize for MATLAB Function: '<S4>/altitude control' */
  /* 'URAltitudeControl:3' errorInt = 0; */
  URControl_DW.errorInt_g = 0.0;

  /* SystemInitialize for ModelReference: '<S5>/URControl_att' */
  URControl_attMDLOBJ1.init();

  /* SystemInitialize for MATLAB Function: '<S3>/MATLAB Function' */
  /* 'UROverrides:3' fallCount = 0; */
  URControl_DW.fallCount = 0.0;

  /* 'UROverrides:4' thrown = 0; */
  URControl_DW.thrown = 0.0;

  /* 'UROverrides:6' flipTime = 0; */
  URControl_DW.flipTime = 0.0;

  /* SystemInitialize for MATLAB Function: '<S21>/MATLAB Function' */
  URControl_MATLABFunction_Init(&URControl_DW.sf_MATLABFunction_i);

  /* SystemInitialize for MATLAB Function: '<S21>/unwrap2pi' */
  URControl_unwrap2pi_Init(&URControl_DW.sf_unwrap2pi);

  /* SystemInitialize for Merge: '<S42>/Merge' */
  URControl_B.Merge[0] = 1.0;
  URControl_B.Merge[1] = 0.0;
  URControl_B.Merge[2] = 0.0;
  URControl_B.Merge[3] = 0.0;

  /* SystemInitialize for MATLAB Function: '<S23>/MATLAB Function' */
  URControl_MATLABFunction_Init(&URControl_DW.sf_MATLABFunction_m);

  /* SystemInitialize for MATLAB Function: '<S23>/unwrap2pi' */
  URControl_unwrap2pi_Init(&URControl_DW.sf_unwrap2pi_m);

  /* SystemInitialize for DataStoreMemory: '<Root>/DataStoreMemory' */
  if (!_URControl_SharedDataInit_) {
    _URControl_SharedDataInit_ = true;
  }

  /* End of SystemInitialize for DataStoreMemory: '<Root>/DataStoreMemory' */
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
