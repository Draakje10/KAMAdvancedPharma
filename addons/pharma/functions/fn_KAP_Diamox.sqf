#include "..\script_component.hpp"

params ["_medic", "_patient", "_bodyPart", "_classname", "", "_usedItem"];

[_patient, getText (configFile >> "CfgWeapons" >> _usedItem >> "displayName")] call ACEFUNC(medical_treatment,addToTriageCard);
[_patient, "activity", ACELSTRING(medical_treatment,Activity_usedItem), [[_medic] call ACEFUNC(common,getName), getText (configFile >> "CfgWeapons" >> _usedItem >> "displayName")]] call ACEFUNC(medical_treatment,addToLog);

["ace_medical_treatment_medicationLocal", [_patient, _bodyPart, _classname], _patient] call CBA_fnc_targetEvent;

[_patient] spawn {
    params ["_patient"];
    _BloodGas = _patient getVariable "kat_circulation_BloodGas";
    _PAO2 = _BloodGas select 1;
    _newPAO2 = _PAO2 + 20;
    _patient setVariable ["kat_circulation_BloodGas", [_BloodGas select 0, _newPAO2, _BloodGas select 2, _BloodGas select 3], true];
};
