/*
 * Author: Dorbedo
 * Sets a Illness to a unit
 *
 * Arguments:
 * 0: The unit <OBJECT>
 *
 * ReturnValue:
 * <NIL>
 */

 
_this params ["_unit","_sickness"];

if (!local _unit) exitWith {};

private _all_sickness = _unit getVariable [QGVAR(sickness),[]];

If (1>({(_x select 1) isEqualTo _illness} count _all_sickness)) then {
	_all_sickness pushBack [_sickness,CBA_missionTime,0];
	_unit setVariable [QGVAR(sickness),_all_Illness,true];
};
