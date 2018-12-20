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
PARAM_DEFINE_FLOAT(MC_ATT_RATE_MAX, 500.0f);

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
PARAM_DEFINE_FLOAT(MC_ATT_ROLL_GAIN, 16.0f);

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
PARAM_DEFINE_FLOAT(MC_ATT_PITCH_GN, 16.0f);

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
PARAM_DEFINE_FLOAT(MC_ATT_YAW_GAIN, 1f);

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
PARAM_DEFINE_FLOAT(MC_ATT_ROLL_EFF, 300.0f);

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
PARAM_DEFINE_FLOAT(MC_ATT_PITCH_EFF, 170.0f);


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
PARAM_DEFINE_FLOAT(MC_ATT_YAW_EFF, 30f);

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
PARAM_DEFINE_FLOAT(MC_ATT_YAW_D_EFF, 1.5f);

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
PARAM_DEFINE_FLOAT(MC_ATT_AZ_EFF, 16.0f);

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
PARAM_DEFINE_FLOAT(MC_ATT_T_ACT, 0.025f);
