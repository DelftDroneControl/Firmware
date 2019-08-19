/**
 * @file simulink_wrapper_params.c
 * Parameters for simulink wrapper attitutde control.
 *
 * @author
 */


/**
 * Rate control maximum sample rate.
 *
 * @unit Hz
 * @min 10
 * @max 1000
 * @decimal 0
 * @increment 1
 * @group Multicopter Attitude Control
 */
PARAM_DEFINE_FLOAT(SL_ATT_RATE_MAX, 500.0f);

/**
 * Fail flag pseudo parameter
 *
 * @value 0 norminal case
 * @value 1 single rotor failure 
 * @value 2 double rotor failure
 * @group Multicopter Attitude Control
 */
PARAM_DEFINE_INT32(SL_ACT_FAIL_ID, 0);

/**
 * Actuator output limiter.
 *
 * @unit rpm
 * @min 3000
 * @max 12200
 * @group Multicopter Attitude Control
 */
PARAM_DEFINE_INT32(SL_ACT_LIM_RPM, 12200);

/**
 * Actuator sawtooth shaker amplitude.
 *
 * @unit rpm
 * @min 0
 * @max 9200
 * @group Multicopter Attitude Control
 */
PARAM_DEFINE_INT32(SL_ACT_SAW_AMP, 1000);

/**
 * Actuator sawtooth shaker frequency.
 *
 * @unit Hz
 * @min 0
 * @max 500
 * @group Multicopter Attitude Control
 */
PARAM_DEFINE_INT32(SL_ACT_SAW_FREQ, 100);

/**
 * Yaw rate set point
 *
 * @unit rad/s
 * @min -25
 * @max 25
 * @decimal 0
 * @increment 1
 * @group Multicopter Attitude Control
 */
PARAM_DEFINE_FLOAT(SL_YAW_RATE_SP, 0.0f);

/**
 * Primary axis X offset.
 *
 * @unit m
 * @min 0
 * @max 10
 * @decimal 0.1
 * @increment 0.1
 * @group Multicopter Attitude Control
 */
PARAM_DEFINE_FLOAT(SL_PRIM_AXIS_X, 0.0f);

/**
 * Primary axis Y offset.
 *
 * @unit m
 * @min 0
 * @max 10
 * @decimal 0.1
 * @increment 0.1
 * @group Multicopter Attitude Control
 */
PARAM_DEFINE_FLOAT(SL_PRIM_AXIS_Y, 0.0f);

/**
 * Primary axis attitude controller XY gain.
 *
 * @unit
 * @min 0
 * @max 10
 * @decimal 0.1
 * @increment 0.1
 * @group Multicopter Attitude Control
 */
PARAM_DEFINE_FLOAT(SL_ATT_XY_GAIN, 5.0f);

/**
 * INDI control actuator roll control gain.
 *
 * @unit
 * @min 1
 * @max 100
 * @decimal 0
 * @increment .1
 * @group Multicopter Attitude Control
 */
PARAM_DEFINE_FLOAT(SL_ATT_ROLL_GAIN, 16.0f);

/**
 * INDI control actuator pitch control gain.
 *
 * @unit
 * @min 1
 * @max 100
 * @decimal 0
 * @increment .1
 * @group Multicopter Attitude Control
 */
PARAM_DEFINE_FLOAT(SL_ATT_PITCH_GN, 16.0f);

/**
 * INDI control actuator yaw control effectiveness.
 *
 * @unit
 * @min .1
 * @max 2
 * @decimal 0
 * @increment .01
 * @group Multicopter Attitude Control
 */
PARAM_DEFINE_FLOAT(SL_ATT_YAW_GAIN, 1f);

/**
 * INDI control actuator roll control effectiveness.
 *
 * @unit 10^3
 * @min 1
 * @max 1000
 * @decimal 0
 * @increment 1
 * @group Multicopter Attitude Control
 */
PARAM_DEFINE_FLOAT(SL_ATT_ROLL_EFF, 300.0f);

/**
 * INDI control actuator pitch control effectiveness.
 *
 * @unit 10^3
 * @min 1
 * @max 1000
 * @decimal 0
 * @increment 1
 * @group Multicopter Attitude Control
 */
PARAM_DEFINE_FLOAT(SL_ATT_PITCH_EFF, 170.0f);


/**
 * INDI control actuator yaw control effectiveness.
 *
 * @unit 10^3
 * @min .1
 * @max 100
 * @decimal 0
 * @increment .01
 * @group Multicopter Attitude Control
 */
PARAM_DEFINE_FLOAT(SL_ATT_YAW_EFF, 30f);

/**
 * INDI control actuator yaw control effectiveness.
 *
 * @unit 10^3
 * @min .01
 * @max 10
 * @decimal 0
 * @increment .01
 * @group Multicopter Attitude Control
 */
PARAM_DEFINE_FLOAT(SL_ATT_YAW_D_EFF, 1.5f);

/**
 * INDI control actuator z-acceleration control effectiveness.
 *
 * @unit 10^3
 * @min 1
 * @max 100
 * @decimal 0
 * @increment .1
 * @group Multicopter Attitude Control
 */
PARAM_DEFINE_FLOAT(SL_ATT_AZ_EFF, 16.0f);

/**
 * Actuator time constant.
 *
 * @unit s
 * @min 0
 * @max 1
 * @decimal 0
 * @increment .01
 * @group Multicopter Attitude Control
 */
PARAM_DEFINE_FLOAT(SL_ATT_T_ACT, 0.025f);


PARAM_DEFINE_FLOAT(SL_FDD_K_THRES, 0.5f);
PARAM_DEFINE_FLOAT(SL_FDD_P_THRES, 0.9f);
PARAM_DEFINE_INT32(SL_FDD_ON, 0f);
PARAM_DEFINE_FLOAT(SL_LOW_DRPM_LIM, -25000.f);

PARAM_DEFINE_FLOAT(SL_POS_XY_P_GAIN, 1.5f);
PARAM_DEFINE_FLOAT(SL_POS_Z_P_GAIN, 2f);
PARAM_DEFINE_FLOAT(SL_VEL_XY_P_GAIN, 1.5f);
PARAM_DEFINE_FLOAT(SL_VEL_Z_P_GAIN, 5f);
