#include "script_component.hpp"

_this params ["_unit"];

if (local _unit) then {
    if (!ace_common_settingsInitFinished) exitWith {
        ace_common_runAtSettingsInitialized pushBack [FUNC(init), [_unit]];
    };
    [_unit] call FUNC(init);
};
