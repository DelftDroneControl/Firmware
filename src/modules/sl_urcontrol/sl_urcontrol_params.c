/**
 * @file simulink_wrapper_params.c
 * Parameters for simulink wrapper attitutde control.
 *
 * @author
 * 
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
PARAM_DEFINE_FLOAT(SL_X_POS_SP, 0.f);

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
PARAM_DEFINE_FLOAT(SL_Y_POS_SP, 0.f);

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
PARAM_DEFINE_FLOAT(SL_Z_POS_SP, 0.f);

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
PARAM_DEFINE_FLOAT(SL_YAW_SP, 0.f);

/**
 * Fail flag pseudo parameter
 *
 * @value 0 norminal case
 * @value 1 single rotor failure 
 * @value 2 double rotor failure
 * @group Multicopter Attitude Control
 */
PARAM_DEFINE_INT32(SL_FAIL_FLAG_POS, 0);

// Params

// Position
PARAM_DEFINE_INT32(SL_POS_ENABLE, 0);

// YRC
PARAM_DEFINE_INT32(SL_YRC_ENABLE, 0);

// Rate control
PARAM_DEFINE_FLOAT(SL_RATEDOT_KPU, 0.f);
PARAM_DEFINE_FLOAT(SL_RATEDOT_KPV, 0.f);
PARAM_DEFINE_FLOAT(SL_RATEDOT_KPR, 0.f);

PARAM_DEFINE_FLOAT(SL_RATEDOT_KIU, 0.f);
PARAM_DEFINE_FLOAT(SL_RATEDOT_KIV, 0.f);
PARAM_DEFINE_FLOAT(SL_RATEDOT_KIR, 0.f);

PARAM_DEFINE_FLOAT(SL_RATEDOT_KDU, 0.f);
PARAM_DEFINE_FLOAT(SL_RATEDOT_KDV, 0.f);
PARAM_DEFINE_FLOAT(SL_RATEDOT_KDR, 0.f);
