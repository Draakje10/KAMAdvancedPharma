#include "..\script_component.hpp"

params ["_medic", "_patient", "_bodyPart", "_classname", "", "_usedItem"];

_currentPain = _patient getVariable "ACE_medical_pain";
[_patient, _bodyPart, "Meth"] call pharma_fnc_applyMedication;

[_patient, _classname] call ACEFUNC(medical_treatment,addToTriageCard);
[_patient, "activity", ACELSTRING(medical_treatment,Activity_usedItem), [[_medic] call ACEFUNC(common,getName), _classname]] call ACEFUNC(medical_treatment,addToLog);

_timeInBody = ["kap_pharma_meth_time_in_body"] call CBA_settings_fnc_get;

[_patient, _currentPain, _timeInBody] spawn {
    params ["_patient", "_oldPain", "_timeInBody"];
    

    sleep _timeInBody - (_timeInBody * 0.1);
    _halfPain = _oldPain / 2;
    [_patient, _halfPain] call ace_medical_fnc_adjustPainLevel;
    sleep _timeInBody * 0.1;
    [_patient, _oldPain] call ace_medical_fnc_adjustPainLevel;
};

[_patient, _timeInBody] spawn {
    params ["_patient", "_timeInBody"];

    private _startTime = time;
    while { time - _startTime < _timeInBody } do {
        private _currentPain = _patient getVariable "ACE_medical_pain";
        if (_currentPain > 0) then {
            [_patient, -1] call ace_medical_fnc_adjustPainLevel;
        };
        sleep 1;
    };
};