#include "..\script_component.hpp"

params ["_patient"];

if (!local _patient) exitWith {};
_timeInBody = ["kap_pharma_meth_time_in_body"] call CBA_settings_fnc_get;
_currentPain = _patient getVariable "ACE_medical_pain";
_startTime = CBA_missionTime;

diag_log format ["Meth Local effect function called for %1 seconds startime was %2 and missiontime was %3", _timeInBody, _startTime, CBA_missionTime];

_pfhMeth = [
    {
        params ["_args", "_handle"];
        _args params ["_patient", "_startTime", "_timeInBody", "_currentPain"];

        

        _actualPain = _patient getVariable "ACE_medical_pain";

        if (_actualPain >= 0) then {
            diag_log format ["Removing pain %1", _actualPain];
            [_patient, -1] call ace_medical_fnc_adjustPainLevel;
        };

        if (CBA_missionTime - _startTime >= _timeInBody) then {
            diag_log format ["Meth effect ended after %1 seconds startime was %2 and missiontime was %3", _timeInBody, _startTime, CBA_missionTime];
            _handle call CBA_fnc_removePerFrameHandler;
        };

        [{
        params ["_patient", "_currentPain"];
        [_patient, _currentPain / 2] call ace_medical_fnc_adjustPainLevel;
        }, [_patient, _currentPain], 0] call CBA_fnc_waitAndExecute;

        [{
            params ["_patient", "_currentPain"];
            [_patient, _currentPain] call ace_medical_fnc_adjustPainLevel;
        }, [_patient, _currentPain], 10] call CBA_fnc_waitAndExecute;

    },
    0,
    [_patient, _startTime, _timeInBody, _currentPain]
] call CBA_fnc_addPerFrameHandler; 
