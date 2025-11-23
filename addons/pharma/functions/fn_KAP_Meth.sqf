#include "..\script_component.hpp"

params ["_medic", "_patient", "_bodyPart", "_classname", "", "_usedItem"];

_currentPain = _patient getVariable "ACE_medical_pain";

[_patient, getText (configFile >> "CfgWeapons" >> _usedItem >> "displayName")] call ACEFUNC(medical_treatment,addToTriageCard);
[_patient, "activity", ACELSTRING(medical_treatment,Activity_usedItem), [[_medic] call ACEFUNC(common,getName), getText (configFile >> "CfgWeapons" >> _usedItem >> "displayName")]] call ACEFUNC(medical_treatment,addToLog);

["ace_medical_treatment_medicationLocal", [_patient, _bodyPart, _classname], _patient] call CBA_fnc_targetEvent;

_timeInBody = ["kap_pharma_meth_time_in_body"] call CBA_settings_fnc_get;
_startTime = CBA_StartTime;

if (!local _patient ) then {
    exit;
} else {
_pfhMeth = [
    {
        params ["_args", "_handle"];
        _args = params ["_patient", "_startTime", "_timeInBody", "_currentPain"];

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

        _actualPain = _patient getVariable "ACE_medical_pain";

        if (_actualPain >= 0) then {
            [_patient, -1] call ace_medical_fnc_adjustPainLevel;
        };

    },
    1,
[_patient, _startTime, _timeInBody, _currentPain]] call CBA_fnc_createPerFrameHandler; 
};
