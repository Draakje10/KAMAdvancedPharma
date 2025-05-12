#include "..\script_component.hpp"

params ["_medic", "_patient", "_bodyPart", "_classname", "", "_usedItem"];

[_patient, _bodyPart, "Cyanide"] call pharma_fnc_applyMedication;

[_patient, _classname] call ACEFUNC(medical_treatment,addToTriageCard);
[_patient, "activity", ACELSTRING(medical_treatment,Activity_usedItem), [[_medic] call ACEFUNC(common,getName), _classname]] call ACEFUNC(medical_treatment,addToLog);

[_patient] spawn {
    params ["_patient"];
    _sleepTime = ["kap_pharma_kill_time_Cyanide"] call CBA_settings_fnc_get;
    sleep _sleepTime;
    if (_patient getVariable ["ACE_isUnconscious", false]) then {
        [_patient, 1] call ace_medical_engine_fnc_setStructuralDamage;
    }
};