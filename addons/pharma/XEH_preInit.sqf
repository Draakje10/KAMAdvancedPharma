[
    "kap_pharma_enable_cannabis_gummies",
    "CHECKBOX",
    ["Enable Cannabis Gummies",
    "Not implemented yet, will be implemented soon."],
    "KAP - Pharma",
    [true, false],
    1,
    {}
] call CBA_fnc_addSetting;

[
    "kap_pharma_treatment_time_cannabis_gummies",
    "SLIDER",
    ["Cannabis Gummies Treatment Time", 
    "Set the treatment time for using Cannabis Gummies (in seconds)."],
    "KAP - Pharma",
    [0.1, 10, 2, 1],
    1,
    {}
] call CBA_fnc_addSetting;


[
    "kap_pharma_treatment_level_cannabis_gummies",
    "LIST",
    ["Cannabis Gummies Treatment Level",
    "Set the treatment level for using Cannabis Gummies."],
    "KAP - Pharma",
    [[0, 1, 2], ["Anyone", "Medic", "Doctor"], 0],
    1,
    {}
] call CBA_fnc_addSetting;
