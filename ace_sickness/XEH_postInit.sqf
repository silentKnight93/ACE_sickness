
#include "script_component.hpp"

If (!hasInterface) exitWith {};

[QGVAR(addSickLoop), DFUNC(addSickLoop)] call CBA_fnc_addEventHandler;


[QGVAR(sick_mosquito),{
	_this params ["_unit"];
	[_unit,"mosquito"] call FUNC(set_sickness);
] call CBA_fnc_addEventHandler;
