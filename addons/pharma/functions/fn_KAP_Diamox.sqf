#include "..\script_component.hpp"

params ["_medic", "_patient", "_bodyPart", "_classname", "", "_usedItem"];

[_patient, getText (configFile >> "CfgMagazines" >> _usedItem >> "displayName")] call ACEFUNC(medical_treatment,addToTriageCard);
[_patient, "activity", ACELSTRING(medical_treatment,Activity_usedItem), [[_medic] call ACEFUNC(common,getName), getText (configFile >> "CfgMagazines" >> _usedItem >> "displayName")]] call ACEFUNC(medical_treatment,addToLog);

["ace_medical_treatment_medicationLocal", [_patient, _bodyPart, _classname], _patient] call CBA_fnc_targetEvent;

[_patient] spawn {
    params ["_patient"];

    _heartrate = _patient getVariable ["ace_medical_vitals_heartRate", 0];
    _anerobicPressure = _patient getVariable
    _bloodGas = GET_BLOOD_GAS(_patient);
    _temperature = 
    _barometricPressure = 
    _opioidDepression = 
    _AceFatigue = 
    _TimeSinceLastUpdate = 
    _Sync = 

    ["kat_vitals_fnc_handleOxygenFunction", [_patient, _heartrate, _anerobicPressure, _bloodGas, _temerature, _barometricPressure, _opioidDepression, _AceFatigue, _TimeSinceLastUpdate, _Sync]] call CBA_fnc_targetEvent;
};