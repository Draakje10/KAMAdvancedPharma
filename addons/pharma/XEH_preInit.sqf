
// Add settings for Cannabis Gummies
[
    "kap_pharma_enable_cannabis_gummies",
    "CHECKBOX",
    ["Enable Cannabis Gummies",
    "Turns of usage of Cannabis Gummies."],
    ["KAP - Pharma", "Cannabis Gummies"],
    [true, false],
    1,
    {}
] call CBA_fnc_addSetting;

[
    "kap_pharma_treatment_time_cannabis_gummies",
    "SLIDER",
    ["Cannabis Gummies Treatment Time", 
    "Set the treatment time for using Cannabis Gummies (in seconds)."],
    ["KAP - Pharma", "Cannabis Gummies"],
    [0.1, 10, 2, 1],
    1,
    {}
] call CBA_fnc_addSetting;


[
    "kap_pharma_treatment_level_cannabis_gummies",
    "LIST",
    ["Cannabis Gummies Treatment Level",
    "Set the treatment level for using Cannabis Gummies."],
    ["KAP - Pharma", "Cannabis Gummies"],
    [[0, 1, 2], ["Anyone", "Medic", "Doctor"], 0],
    1,
    {}
] call CBA_fnc_addSetting;

// Add settings for Cyanide
[
    "kap_pharma_enable_Cyanide",
    "CHECKBOX",
    ["Enable Cyanide",
    "Turns of usage of Cyanide."],
    ["KAP - Pharma", "Cyanide"],
    [false, true],
    1,
    {}
] call CBA_fnc_addSetting;

[
    "kap_pharma_treatment_time_Cyanide",
    "SLIDER",
    ["Cyanide Treatment Time", 
    "Set the treatment time for using Cyanide (in seconds)."],
    ["KAP - Pharma", "Cyanide"],
    [0.1, 10, 5, 1],
    1,
    {}
] call CBA_fnc_addSetting;

[
    "kap_pharma_treatment_level_Cyanide",
    "LIST",
    ["Cyanide Treatment Level",
    "Set the treatment level for using Cyanide."],
    ["KAP - Pharma", "Cyanide"],
    [[0, 1, 2], ["Anyone", "Medic", "Doctor"], 2],
    1,
    {}
] call CBA_fnc_addSetting;

[
    "kap_pharma_kill_time_Cyanide",
    "SLIDER",
    ["Cyanide Kill Time", 
    "Set the kill time for using Cyanide (in seconds)."],
    ["KAP - Pharma", "Cyanide"],
    [1, 600, 120, 0],
    1,
    {}
] call CBA_fnc_addSetting;

[
    "kap_pharma_enable_zagustin",
    "CHECKBOX",
    ["Enable Zagustin",
    "Turns of usage of Zagustin."],
    ["KAP - Pharma", "Zagustin"],
    [true, false],
    1,
    {}
] call CBA_fnc_addSetting;

[
    "kap_pharma_treatment_time_zagustin",
    "SLIDER",
    ["Zagustin Treatment Time", 
    "Set the treatment time for using Zagustin (in seconds)."],
    ["KAP - Pharma", "Zagustin"],
    [0.1, 10, 5, 1],
    1,
    {}
] call CBA_fnc_addSetting;

[
    "kap_pharma_treatment_level_zagustin",
    "LIST",
    ["Zagustin Treatment Level",
    "Set the treatment level for using Zagustin."],
    ["KAP - Pharma", "Zagustin"],
    [[0, 1, 2], ["Anyone", "Medic", "Doctor"], 2],
    1,
    {}
] call CBA_fnc_addSetting;

[
    "kap_pharma_enable_meth",
    "CHECKBOX",
    ["Enable Meth",
    "Turns of usage of Meth."],
    ["KAP - Pharma", "Meth"],
    [true, false],
    1,
    {}
] call CBA_fnc_addSetting;

[
    "kap_pharma_treatment_time_meth",
    "SLIDER",
    ["Meth Treatment Time", 
    "Set the treatment time for using Meth (in seconds)."],
    ["KAP - Pharma", "Meth"],
    [0.1, 10, 5, 1],
    1,
    {}
] call CBA_fnc_addSetting;

[
    "kap_pharma_treatment_level_meth",
    "LIST",
    ["Zagustin Treatment Level",
    "Set the treatment level for using Zagustin."],
    ["KAP - Pharma", "Meth"],
    [[0, 1, 2], ["Anyone", "Medic", "Doctor"], 2],
    1,
    {}
] call CBA_fnc_addSetting;

[
    "kap_pharma_meth_time_in_body",
    "SLIDER",
    ["Meth time in body",
    "Set time in body after using Meth (in seconds)."],
    ["KAP - Pharma", "Meth"],
    [1, 2400, 600, 0],
    1,
    {}
] call CBA_fnc_addSetting;
