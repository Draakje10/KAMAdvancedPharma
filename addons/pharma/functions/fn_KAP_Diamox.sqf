#include "..\script_component.hpp"

params ["_medic", "_patient", "_bodyPart", "_classname", "", "_usedItem"];

[_patient, getText (configFile >> "CfgMagazines" >> _usedItem >> "displayName")] call ACEFUNC(medical_treatment,addToTriageCard);
[_patient, "activity", ACELSTRING(medical_treatment,Activity_usedItem), [[_medic] call ACEFUNC(common,getName), getText (configFile >> "CfgMagazines" >> _usedItem >> "displayName")]] call ACEFUNC(medical_treatment,addToLog);

["ace_medical_treatment_medicationLocal", [_patient, _bodyPart, _classname], _patient] call CBA_fnc_targetEvent;

[_patient] spawn {
    params ["_patient"];
    _BloodGas = _patient getVariable "kat_circulation_BloodGas";
    _SPO2 = _BloodGas select 2;
    _SPO2 = _SPO2 + 10;
    _BloodGas set [2, _SPO2];
    _patient setVariable ["kat_circulation_BloodGas", _BloodGas, true];
};
