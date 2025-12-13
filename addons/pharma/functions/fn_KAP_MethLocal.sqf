#include "..\script_component.hpp"

params ["_patient"];

if (!local _patient) exitWith {};
_timeInBody = ["kap_pharma_meth_time_in_body"] call CBA_settings_fnc_get;
_currentPain = _patient getVariable "ACE_medical_pain";
_startTime = CBA_missionTime;

_pfhMeth = [
    {
        params ["_args", "_handle"];
        _args params ["_patient", "_startTime", "_timeInBody", "_currentPain"];

        

        _actualPain = _patient getVariable "ACE_medical_pain";

        if (_actualPain >= 0) then {
            [_patient, -1] call ace_medical_fnc_adjustPainLevel;
        };

        if (CBA_missionTime - _startTime >= _timeInBody) then {
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
