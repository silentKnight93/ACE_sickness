/*
 * Author: Dorbedo
 * Updates the sickness. Is expected to be called every second.
 *
 * Arguments:
 * 0: The Unit <OBJECT>
 *
 * ReturnValue:
 * <NIL>
 *
 * Public: No
 */

#include "script_component.hpp"

_this params ["_unit", "_interval"];

if (_interval == 0) exitWith {};

private _all_sickness = _unit getVariable [QGVAR(sickness),[]];
private _all_symptomes = [];

{
	_x params ["_sickness","_starttime","_level"];
	If (_level == 0) then {_x = locationNull;} else {
		If (_level < 0) then {
			// cure
		
		
		}else{
			// raise
		
		
		
		
		};
	};
	nil;
} count _all_sickness;
_all_sickness = _all_sickness - locationNull;
