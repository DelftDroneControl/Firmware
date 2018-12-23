/**
 * @file simulink_wrapper_params.c
 * Parameters for simulink wrapper attitutde control.
 *
 * @author
 */

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
 * INDI control actuator roll control gain.
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
 * INDI control actuator roll control gain.
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
 * INDI control actuator roll control gain.
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
 * INDI control actuator roll control gain.
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
 * INDI control actuator roll control gain.
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
 * INDI control actuator roll control gain.
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
 * INDI control actuator roll control gain.
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
 * INDI control actuator roll control gain.
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
 * INDI control actuator roll control gain.
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
 * INDI control actuator roll control gain.
 *
 * @unit
 * @min 0
 * @max 100
 * @decimal 0
 * @increment .1
 * @group Multicopter Attitude Control
 */
PARAM_DEFINE_FLOAT(SL_Z_POS_SP, 0.f);
