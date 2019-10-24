/**
 * @file simulink_wrapper_params.c
 * Parameters for simulink wrapper attitutde control.
 *
 * @author
 * 
 * These parameters must mirror `URControl_init.m`
 * TODO: set min/max/increments, descriptions, remove setpoints
 */

/**
 * Position setpoint psuedo-parameter
 *
 * @unit
 * @min 0
 * @max 100
 * @decimal 0
 * @increment .1
 * @group Multicopter Attitude Control
 */
PARAM_DEFINE_FLOAT(SL_SP_X_POS, 0.f);

/**
 * Position setpoint psuedo-parameter
 *
 * @unit
 * @min 0
 * @max 100
 * @decimal 0
 * @increment .1
 * @group Multicopter Attitude Control
 */
PARAM_DEFINE_FLOAT(SL_SP_Y_POS, 0.f);

/**
 * Position setpoint psuedo-parameter
 *
 * @unit
 * @min 0
 * @max 100
 * @decimal 0
 * @increment .1
 * @group Multicopter Attitude Control
 */
PARAM_DEFINE_FLOAT(SL_SP_Z_POS, 0.f);

/**
 * Yaw setpoint psuedo-parameter
 *
 * @unit
 * @min 0
 * @max 100
 * @decimal 0
 * @increment .1
 * @group Multicopter Attitude Control
 */
PARAM_DEFINE_FLOAT(SL_SP_YAW, 0.f);

/**
 * Fail flag pseudo parameter
 *
 * @value 0 norminal case
 * @value 1 single rotor failure 
 * @value 2 double rotor failure
 * @group Multicopter Attitude Control
 */
PARAM_DEFINE_INT32(SL_FAIL_FLAG_UR, -1);

// Params
PARAM_DEFINE_FLOAT(SL_FAIL_DELAY, 0.0);
PARAM_DEFINE_FLOAT(SL_FAIL_WROT, 300);

// Estimation
PARAM_DEFINE_FLOAT(SL_EST_OPTIDX, 0.0);
PARAM_DEFINE_FLOAT(SL_EST_OPTIDY, 0.0);
PARAM_DEFINE_INT32(SL_EST_USEEKF, 1);
PARAM_DEFINE_FLOAT(SL_EST_OMEGAFILT, 0.5);
PARAM_DEFINE_FLOAT(SL_EST_POSFILT, 0.5);
PARAM_DEFINE_FLOAT(SL_EST_VELFILT, 0.5);

// Position
PARAM_DEFINE_INT32(SL_POS_ENABLE, 1);
PARAM_DEFINE_FLOAT(SL_POS_KP_POSX, 1.5);
PARAM_DEFINE_FLOAT(SL_POS_KP_POSY, 1.5);
PARAM_DEFINE_FLOAT(SL_POS_KP_POSZ, 1.5);
PARAM_DEFINE_FLOAT(SL_POS_KP_VELX, 2.0);
PARAM_DEFINE_FLOAT(SL_POS_KP_VELY, 2.0);
PARAM_DEFINE_FLOAT(SL_POS_KP_VELZ, 2.0);
PARAM_DEFINE_FLOAT(SL_POS_KI_VELX, 1.0);
PARAM_DEFINE_FLOAT(SL_POS_KI_VELY, 1.0);
PARAM_DEFINE_FLOAT(SL_POS_KI_VELZ, 1.0);
PARAM_DEFINE_FLOAT(SL_POS_FAILGAIN, 0.5);
PARAM_DEFINE_FLOAT(SL_POS_INTLIM, 0.2);

// Altitude
PARAM_DEFINE_FLOAT(SL_ALT_KP_POS, 1.5);
PARAM_DEFINE_FLOAT(SL_ALT_KP_VEL, 15);
PARAM_DEFINE_FLOAT(SL_ALT_KI_VEL, 15);

// YRC, see `URYawControl.m`
PARAM_DEFINE_INT32(SL_YRC_ENABLE, 1);
PARAM_DEFINE_INT32(SL_YRC_MODE, 1); /* [1] control psi setpoint [2] control rate via `SL_YRC_RATECMD` parameter */
PARAM_DEFINE_FLOAT(SL_YRC_KP_PSI, 5.0);
PARAM_DEFINE_FLOAT(SL_YRC_RATECMD, 0.0);

// YRC/fail, see `URFailureYawRateControl.m`
PARAM_DEFINE_INT32(SL_YRCFAIL_MODE, 2);
PARAM_DEFINE_FLOAT(SL_YRCFAIL_MZG, 50);

// Attitude
PARAM_DEFINE_INT32(SL_ATT_MODE, 1);
PARAM_DEFINE_FLOAT(SL_ATT_ROTKP, -10.0);
PARAM_DEFINE_INT32(SL_ATT_PRECMODE, 2);
PARAM_DEFINE_FLOAT(SL_ATT_PRECANGLE, -3);
PARAM_DEFINE_FLOAT(SL_ATT_MAXPREC, 2);
PARAM_DEFINE_FLOAT(SL_ATT_MMARGIN, 0.01);
PARAM_DEFINE_INT32(SL_ATT_ENABTRAJ, 1);
PARAM_DEFINE_FLOAT(SL_ATT_ROTSPCOMP, 200);
PARAM_DEFINE_FLOAT(SL_ATT_YRCCOMP, 1);

// Envelope
PARAM_DEFINE_INT32(SL_ENVP_ENAB, 1);
PARAM_DEFINE_INT32(SL_ENVP_MODE, 1);

// Rate control
PARAM_DEFINE_INT32(SL_RDOT_MODE, 2);
PARAM_DEFINE_INT32(SL_RDOT_MMODE, 1);

PARAM_DEFINE_FLOAT(SL_INDI_KPX, 30.0);
PARAM_DEFINE_FLOAT(SL_INDI_KPY, 30.0);
PARAM_DEFINE_FLOAT(SL_INDI_KPZ, 3.0);
PARAM_DEFINE_FLOAT(SL_INDI_OMEDOTF, 0.8);
PARAM_DEFINE_FLOAT(SL_INDI_ACCZF, 0.85);

PARAM_DEFINE_FLOAT(SL_INDI_ROLLEFF, 150);
PARAM_DEFINE_FLOAT(SL_INDI_PITCHEFF, 150);
PARAM_DEFINE_FLOAT(SL_INDI_YAWEFF, -50);
PARAM_DEFINE_FLOAT(SL_INDI_AZEFF, 5);

PARAM_DEFINE_FLOAT(SL_INDI_DWMAX, 200);
PARAM_DEFINE_FLOAT(SL_INDI_MINGAIN, 0.2);

PARAM_DEFINE_FLOAT(SL_RDOT_KPU, 30.0);
PARAM_DEFINE_FLOAT(SL_RDOT_KPV, 30.0);
PARAM_DEFINE_FLOAT(SL_RDOT_KPR, 3.0);

PARAM_DEFINE_FLOAT(SL_RDOT_KIU, 0.f);
PARAM_DEFINE_FLOAT(SL_RDOT_KIV, 0.f);
PARAM_DEFINE_FLOAT(SL_RDOT_KIR, 0.f);

PARAM_DEFINE_FLOAT(SL_RDOT_KDU, 2.0);
PARAM_DEFINE_FLOAT(SL_RDOT_KDV, 2.0);
PARAM_DEFINE_FLOAT(SL_RDOT_KDR, 0.01);

PARAM_DEFINE_FLOAT(SL_RDOT_DFILT, 0.8); // TODO: is weight it gives to previous RDOT-value
PARAM_DEFINE_FLOAT(SL_RDOT_UVDFILT, 0.8);
PARAM_DEFINE_FLOAT(SL_RDOT_MAXINT, 0.5);
PARAM_DEFINE_FLOAT(SL_RDOT_PRECGAIN, 0.0);


PARAM_DEFINE_FLOAT(SL_RDOT_MUGAIN, 10000.0);
PARAM_DEFINE_FLOAT(SL_RDOT_MVGAIN, 10000.0);
PARAM_DEFINE_FLOAT(SL_RDOT_MZGAIN, 100.0);
PARAM_DEFINE_FLOAT(SL_RDOT_FTOT, 4);

// PARAM_DEFINE_FLOAT(SL_MINDI_DFILT, 0.8);
// PARAM_DEFINE_FLOAT(SL_MINDI_MKPU, 40);
// PARAM_DEFINE_FLOAT(SL_MINDI_MKPV, 40);
// PARAM_DEFINE_FLOAT(SL_MINDI_MKPR, 1);

// OVERRIDES
PARAM_DEFINE_INT32(SL_FLIP_MODE, 0);
PARAM_DEFINE_FLOAT(SL_FLIP_TIME, 0.13);
PARAM_DEFINE_FLOAT(SL_FLIP_UPTIME, 0.0);
PARAM_DEFINE_FLOAT(SL_FLIP_INTEX, 300);
PARAM_DEFINE_FLOAT(SL_FLIP_INTEY, 0);

PARAM_DEFINE_INT32(SL_THROW_MODE, 0);
PARAM_DEFINE_FLOAT(SL_THROW_TIME, 0.3);
PARAM_DEFINE_FLOAT(SL_THROW_THRESH, 4);

// Others
PARAM_DEFINE_INT32(SL_FAIL_ALTPROT, 0);
PARAM_DEFINE_FLOAT(SL_FAIL_ALTTHRE, -1.0);
