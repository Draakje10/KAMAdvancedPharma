#include "script_component.hpp"


class ACE_Medical_Treatment_Actions 
{
    class CWMP;

    class CanGummies: CWMP {
        displayName = "Cannabis Gummies";
        condition = "kap_pharma_enable_cannabis_gummies";
        items[] = {"kap_CanGummies"};
        callbackSuccess = "pharma_fnc_CanGummies";
        treatmentTime = "kap_pharma_treatment_time_cannabis_gummies";
        medicRequired = "kap_pharma_treatment_level_cannabis_gummies";
    };

    class Cyanide: CWMP {
        displayName = "Cyanide";
        condition = "kap_pharma_enable_cyanide";
        items[] = {"kap_Cyanide"};
        callbackSuccess = "pharma_fnc_Cyanide";
        treatmentTime = "kap_pharma_treatment_time_cyanide";
        medicRequired = "kap_pharma_treatment_level_cyanide";
    };

    class Zagustin: Morphine {
        displayName = "Zagustin";
        condition = "kap_pharma_enable_zagustin";
        items[] = {"kap_Zagustin"};
        callbackSuccess = "pharma_fnc_Zagustin";
        treatmentTime = "kap_pharma_treatment_time_zagustin";
        medicRequired = "kap_pharma_treatment_level_zagustin";
    };
    
};
