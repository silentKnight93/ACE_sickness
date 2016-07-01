/*
 * Author: Dorbedo
 * Initializes unit variables.
 *
 * Arguments:
 * 0: The Unit <OBJECT>
 *
 * ReturnValue:
 * nil
 *
 * Public: No
 */
#include "script_component.hpp"

_this params ["_unit"];

_unit setVariable [QGVAR(sickness), [], true];
_unit setVariable [QGVAR(temperature), (35.8 + random (0.6)), true];