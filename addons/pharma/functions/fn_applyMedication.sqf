#include "..\script_component.hpp"

params ["_patient", "_bodyPart", "_className"];
diag_log format ["applyMedication called for %1 on %2 with %3", _patient, _bodyPart, _className];


if (!alive _patient) exitWith {};

private _defaultConfig = configFile >> QUOTE(ACE_ADDON(Medical_Treatment)) >> "Medication";
private _cfg = _defaultConfig >> _classname;

private _painReduce       = getNumber (_cfg >> "painReduce");
private _timeInSystem     = getNumber (_cfg >> "timeInSystem");
private _timeTillMax      = getNumber (_cfg >> "timeTillMaxEffect");
private _viscosityChange  = getNumber (_cfg >> "viscosityChange");
private _hrLow            = getArray (_cfg >> "hrIncreaseLow");
private _hrNormal         = getArray (_cfg >> "hrIncreaseNormal");
private _hrHigh           = getArray (_cfg >> "hrIncreaseHigh");
private _dose             = getNumber (_cfg >> "dose");
private _maxDose          = getNumber (_cfg >> "maxDose");
private _maxDev           = getNumber (_cfg >> "maxDoseDeviation");
private _alphaFactor      = getNumber (_cfg >> "alphaFactor");
private _maxRelief        = getNumber (_cfg >> "maxRelief");
private _opioidRelief     = getNumber (_cfg >> "opioidRelief");
private _opioidEffect     = getNumber (_cfg >> "opioidEffect");
private _overdoseFunc     = getText (_cfg >> "onOverDose");


private _heartRate = _patient getVariable [VAR_HEART_RATE, 80];
diag_log format ["applyMedication: heart rate %1", _heartRate];
private _hrIncrease = [_hrLow, _hrNormal, _hrHigh] select (floor ((0 max _heartRate min 110) / 55));
_hrIncrease params ["_minIncrease", "_maxIncrease"];
diag_log format ["applyMedication: heart rate increase %1", _hrIncrease];
private _heartRateChange = _minIncrease + random (_maxIncrease - _minIncrease);
diag_log format ["applyMedication: heart rate change %1", _heartRateChange];

private _presentPain = _patient getVariable [VAR_PAIN, 0];
private _presentReduce = 0;
if (_maxRelief > 0) then {
    if (_presentPain > _maxRelief) then {
        _painReduce = _painReduce / 4;
    };
};

diag_log format ["applyMedication: + %1 + %2 + %3 + %4 + %5 + %6 + %7", _className, _timeInSystem, _timeTillMax, _viscosityChange, _heartRateChange, _painReduce, _dose];

if (_timeTillMax <= 0) exitWith { WARNING_1("bad value for _maxTimeInSystem - %1",_this); };
_timeTillMax = _timeTillMax max 1;

private _adjustments = _patient getVariable [VAR_MEDICATIONS, []];

_adjustments pushBack [_className, CBA_missionTime, _timeTillMax, _timeInSystem, _heartRateChange, _painReduce, _viscosityChange, _dose, _alphaFactor, _opioidRelief, _opioidEffect];

_patient setVariable [VAR_MEDICATIONS, _adjustments, true];
