/**
 * @file simulink_wrapper_params.c
 * Parameters for simulink wrapper attitutde control.
 *
 * @author
 * 
 * TODO: set min/max/increments, descriptions, remove setpoints
 */

/**
 *
 * @unit
 * @min 0
 * @max 2000
 * @decimal 0
 * @increment 1
 * @group Multicopter Attitude Control
 */
PARAM_DEFINE_FLOAT(SL_POS_CTRL_RATE, 500);

/**
 *
 * @unit
 * @min -1
 * @max 1
 * @decimal 0
 * @increment 1
 * @group Multicopter Attitude Control
 */
PARAM_DEFINE_FLOAT(SL_ROT_DIRECTION, 1);


/**
 *
 * @unit
 * @min 0
 * @max 100
 * @decimal 0
 * @increment .1
 * @group Multicopter Attitude Control
 */
PARAM_DEFINE_FLOAT(SL_THRUST_COEFF, 1.9035e-6);

/**
 *
 * @unit
 * @min 0
 * @max 100
 * @decimal 0
 * @increment .1
 * @group Multicopter Attitude Control
 */
PARAM_DEFINE_FLOAT(SL_GEOM_L, 0.0875);

/**
 *
 * @unit
 * @min 0
 * @max 100
 * @decimal 0
 * @increment .1
 * @group Multicopter Attitude Control
 */
PARAM_DEFINE_FLOAT(SL_GEOM_B, 0.1150);

/**
 *
 * @unit
 * @min 0
 * @max 100
 * @decimal 0
 * @increment .1
 * @group Multicopter Attitude Control
 */
PARAM_DEFINE_FLOAT(SL_MASS, 0.3740);

/**
 *
 * @unit
 * @min 0
 * @max 100
 * @decimal 0
 * @increment .1
 * @group Multicopter Attitude Control
 */
PARAM_DEFINE_FLOAT(SL_INERTIA_X, 0.0014);

/**
 *
 * @unit
 * @min 0
 * @max 100
 * @decimal 0
 * @increment .1
 * @group Multicopter Attitude Control
 */
PARAM_DEFINE_FLOAT(SL_INERTIA_Y, 0.0013);

/**
 *
 * @unit
 * @min 0
 * @max 100
 * @decimal 0
 * @increment .1
 * @group Multicopter Attitude Control
 */
PARAM_DEFINE_FLOAT(SL_INERTIA_Z, 0.0025);

/**
 * INDI control actuator roll control gain.
 *
 * @unit
 * @min 0
 * @max 100
 * @decimal 0
 * @increment .1
 * @group Multicopter Attitude Control
 */
PARAM_DEFINE_FLOAT(SL_INERTIA_PROP, 8.00e-6);

/**
 *
 * @unit
 * @min 0
 * @max 100
 * @decimal 0
 * @increment .1
 * @group Multicopter Attitude Control
 */
PARAM_DEFINE_FLOAT(SL_TORQUE_COEFF, 1.9203e-8);


/**
 * Position control gain
 *
 * @unit
 * @min 0
 * @max 100
 * @decimal 0
 * @increment .1
 * @group Multicopter Attitude Control
 */
PARAM_DEFINE_FLOAT(SL_POS_P_GAIN, 1.0);

// /**
//  *
//  * @unit
//  * @min 0
//  * @max 100
//  * @decimal 0
//  * @increment .1
//  * @group Multicopter Attitude Control
//  */
// PARAM_DEFINE_FLOAT(SL_POS_Y_P_GAIN, 1.5);

/**
 * Altitude P gain.
 *
 * @unit
 * @min 0
 * @max 100
 * @decimal 0
 * @increment .1
 * @group Multicopter Attitude Control
 */
PARAM_DEFINE_FLOAT(SL_ALT_P_GAIN, 1.0);

/**
 * Velocity control gain.
 *
 * @unit
 * @min 0
 * @max 100
 * @decimal 0
 * @increment .1
 * @group Multicopter Attitude Control
 */
PARAM_DEFINE_FLOAT(SL_POS_D_GAIN, 1.0);

/**
 * Position control integration gain.
 *
 * @unit
 * @min 0
 * @max 100
 * @decimal 0
 * @increment .1
 * @group Multicopter Attitude Control
 */
PARAM_DEFINE_FLOAT(SL_POS_I_GAIN, 0.1);

// /**
//  *
//  * @unit
//  * @min 0
//  * @max 100
//  * @decimal 0
//  * @increment .1
//  * @group Multicopter Attitude Control
//  */
// PARAM_DEFINE_FLOAT(SL_POS_Y_D_GAIN, 1.5);

/**
 * Altitude D gain
 *
 * @unit
 * @min 0
 * @max 100
 * @decimal 0
 * @increment .1
 * @group Multicopter Attitude Control
 */
PARAM_DEFINE_FLOAT(SL_ALT_D_GAIN, 3.0);

/**
 * INDI control actuator roll control gain.
 *
 * @unit
 * @min 0
 * @max 100
 * @decimal 0
 * @increment .1
 * @group Multicopter Attitude Control
 */
PARAM_DEFINE_FLOAT(SL_ATT_P_GAIN, 30);

/**
 * INDI control actuator roll control gain.
 *
 * @unit
 * @min 0
 * @max 100
 * @decimal 0
 * @increment .1
 * @group Multicopter Attitude Control
 */
PARAM_DEFINE_FLOAT(SL_ATT_D_GAIN, 20);

/**
 * INDI control actuator roll control gain.
 *
 * @unit
 * @min 0
 * @max 100
 * @decimal 0
 * @increment .1
 * @group Multicopter Attitude Control
 */
PARAM_DEFINE_FLOAT(SL_YAW_P_GAIN, 5.0);

/**
 * INDI control actuator roll control gain.
 *
 * @unit
 * @min 0
 * @max 100
 * @decimal 0
 * @increment .1
 * @group Multicopter Attitude Control
 */
PARAM_DEFINE_FLOAT(SL_YAW_D_GAIN, 2.0);

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
 * parameter defining the output y2 (chi)
 *
 * @unit
 * @min 0
 * @max 200
 * @decimal 0
 * @increment .1
 * @group Multicopter Attitude Control
 */
PARAM_DEFINE_FLOAT(SL_CHI, 90.f);

/**
 * INDI filter time constant
 *
 * @unit
 * @min 0
 * @max 1
 * @decimal 0
 * @increment .01
 * @group Multicopter Attitude Control
 */
PARAM_DEFINE_FLOAT(SL_INDI_FILTER_T,0.04);

/**
 * Fail flag pseudo parameter
 *
 * @value 0 norminal case
 * @value 1 single rotor failure 
 * @value 2 double rotor failure
 * @group Multicopter Attitude Control
 */
PARAM_DEFINE_INT32(SL_FAIL_FLAG_POS, 0);

/**
 * RPM Feedback Flag
 *
 * @value 0 No RPM feedback
 * @value 1 RPM feedback
 * @group Multicopter Attitude Control
 */
PARAM_DEFINE_INT32(SL_RPM_FEEDBACK, 0);