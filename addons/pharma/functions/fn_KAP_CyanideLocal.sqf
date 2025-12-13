#include "..\script_component.hpp"

params ["_patient"];


_startTime = CBA_missionTime;
_killtime = ["kap_pharma_kill_time_Cyanide"] call CBA_settings_fnc_get;

_pfhCyanide = [
    {
        params ["_args", "_handle"];
        _args params ["_patient", "_killTime", "_startTime"];

        if (CBA_missionTime - _startTime >= _killTime) then {
            if (_patient getVariable ["ACE_isUnconscious", false]) then {
                [_patient, 1] call ace_medical_engine_fnc_setStructuralDamage;
            };
            _handle call CBA_fnc_removePerFrameHandler;
        };
    },
    0,
    [_patient, _killTime, _startTime]
] call CBA_fnc_addPerFrameHandler;
