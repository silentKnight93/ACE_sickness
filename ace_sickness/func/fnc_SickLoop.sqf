/*
 * Author: Dorbedo
 * Sickness loop for a unit.
 *
 * Arguments:
 * 0: The Unit <OBJECT>
 * 1: Time of last computation <NUMBER>
 *
 * ReturnValue:
 * None
 *
 * Public: No
 */

#include "script_component.hpp"

_this params ["_unit", "_lastTime"];

if (!alive _unit) exitWith {};

// If locality changed, broadcast the last medical state and finish the local loop
if (!local _unit) exitWith {
    _unit setVariable [QGVAR(temperature), _unit getVariable [QGVAR(temperature), 35.8 + random (0.6)], true];
};

[_unit, CBA_missionTime - _lastTime] call FUNC(handleUnitSickness);

[DFUNC(SicknessLoop), [_unit, CBA_missionTime], 1] call CBA_fnc_waitAndExecute;
