/*
 * Author: Dorbedo
 * Enabled the sickness loop for a unit.
 *
 * Arguments:
 * 0: The Unit <OBJECT>
 *
 * ReturnValue:
 * None
 *
 * Public: Yes
 */

#include "script_component.hpp"

_this params ["_unit", ["_force", false]];

if !(local _unit) exitWith {
    [QGVAR(addSickLoop), [_unit, _force], _unit] call CBA_fnc_targetEvent;
};

if ((_unit getVariable[QGVAR(addedToUnitLoop),false] || !alive _unit) && !_force) exitWith{};

_unit setVariable [QGVAR(addedToUnitLoop), true, true];
[DFUNC(SickLoop), [_unit, CBA_missionTime], 1] call CBA_fnc_waitAndExecute;
