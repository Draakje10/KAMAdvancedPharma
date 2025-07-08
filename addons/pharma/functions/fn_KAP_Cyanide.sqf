#include "..\script_component.hpp"

params ["_medic", "_patient", "_bodyPart", "_classname", "", "_usedItem"];

[_patient, _usedItem] call ACEFUNC(medical_treatment,addToTriageCard);
[_patient, "activity", ACELSTRING(medical_treatment,Activity_usedItem), [[_medic] call ACEFUNC(common,getName), getText (configFile >> "CfgWeapons" >> _usedItem >> "displayName")]] call ACEFUNC(medical_treatment,addToLog);

["ace_medical_treatment_medicationLocal", [_patient, _bodyPart, _classname], _patient] call CBA_fnc_targetEvent;

[_patient] spawn {
    params ["_patient"];
    _sleepTime = ["kap_pharma_kill_time_Cyanide"] call CBA_settings_fnc_get;
    sleep _sleepTime;
    if (_patient getVariable ["ACE_isUnconscious", false]) then {
        [_patient, 1] call ace_medical_engine_fnc_setStructuralDamage;
    }
};