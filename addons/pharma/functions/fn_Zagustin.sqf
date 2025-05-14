#include "..\script_component.hpp"

params ["_medic", "_patient", "_bodyPart", "_classname", "", "_usedItem"];

[_patient, _bodyPart, "Zagustin"] call pharma_fnc_applyMedication;

[_patient, _classname] call ACEFUNC(medical_treatment,addToTriageCard);
[_patient, "activity", ACELSTRING(medical_treatment,Activity_usedItem), [[_medic] call ACEFUNC(common,getName), _classname]] call ACEFUNC(medical_treatment,addToLog);
