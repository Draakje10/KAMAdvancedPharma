#include "script_component.hpp"


class ACE_Medical_Treatment_Actions 
{
    class CWMP;

    class CanGummies: CWMP {
        displayName = "Cannabis Gummies";
        items[] = {"kap_CanGummies"};
        callbackSuccess = "pharma_fnc_CanGummies";
        treatmentTime = "kap_pharma_treatment_time_cannabis_gummies";
        medicRequired = "kap_pharma_treatment_level_cannabis_gummies";
    };
};
