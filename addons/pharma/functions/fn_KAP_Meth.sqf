#include "..\script_component.hpp"

params ["_medic", "_patient", "_bodyPart", "_classname", "", "_usedItem"];



[_patient, getText (configFile >> "CfgWeapons" >> _usedItem >> "displayName")] call ACEFUNC(medical_treatment,addToTriageCard);
[_patient, "activity", ACELSTRING(medical_treatment,Activity_usedItem), [[_medic] call ACEFUNC(common,getName), getText (configFile >> "CfgWeapons" >> _usedItem >> "displayName")]] call ACEFUNC(medical_treatment,addToLog);

_startTime = CBA_missionTime;

["ace_medical_treatment_medicationLocal", [_patient, _bodyPart, _classname], _patient] call CBA_fnc_targetEvent;
["kap_pharma_MethLocal", [_patient], _patient] call CBA_fnc_targetEvent;
