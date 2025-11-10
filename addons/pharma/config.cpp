#include "script_component.hpp"

class CfgPatches {
    class Pharma {
        name = "Pharma";
        author = "Draakje10";
        weapons[] = {};
        units[] = {};
        requiredAddons[] = {
            "cba_settings",
            "kat_main",
            "kat_pharma",
            "kat_vitals",
            "ace_medical",
            "ace_medical_ai",
            "ace_medical_blood",
            "ace_medical_damage",
            "ace_medical_engine",
            "ace_medical_feedback",
            "ace_medical_gui",
            "ace_medical_statemachine",
            "ace_medical_status",
            "ace_medical_treatment",
            "ace_medical_vitals",
            "ace_dogtags"
        };
        requiredVersion = 1.62;
    };
};

class Extended_PreInit_EventHandlers {
    class Pharma_preInit {
        init = "call compile preprocessFileLineNumbers '\kap_pharma\XEH_preInit.sqf'";
    };
};

#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"
#include "CfgFunctions.hpp"
#include "ACE_Medical_Treatment.hpp"
#include "ACE_Medical_Treatment_Actions.hpp"
