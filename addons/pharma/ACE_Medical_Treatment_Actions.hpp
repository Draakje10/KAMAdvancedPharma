#include "script_component.hpp"


class ACE_Medical_Treatment_Actions 
{

    class Morphine;
    class CWMP;

    class KAP_CanGummies: CWMP {
        displayName = "take Cannabis Gummies";
        displayNameProgress = "Taking Cannabis Gummies";
        condition = "kap_pharma_enable_cannabis_gummies";
        items[] = {"kap_CanGummies"};
        callbackSuccess = "pharma_fnc_KAP_CanGummies";
        treatmentTime = "kap_pharma_treatment_time_cannabis_gummies";
        medicRequired = "kap_pharma_treatment_level_cannabis_gummies";
    };

    class KAP_Cyanide: CWMP {
        displayName = "take Cyanide";
        displayNameProgress = "Taking Cyanide";
        condition = "kap_pharma_enable_cyanide";
        items[] = {"kap_Cyanide"};
        callbackSuccess = "pharma_fnc_KAP_Cyanide";
        treatmentTime = "kap_pharma_treatment_time_cyanide";
        medicRequired = "kap_pharma_treatment_level_cyanide";
    };

    class KAP_Zagustin: Morphine {
        displayName = "Inject Zagustin";
        displayNameProgress = "Injecting Zagustin";
        condition = "kap_pharma_enable_zagustin";
        items[] = {"kap_Zagustin"};
        callbackSuccess = "pharma_fnc_KAP_Zagustin";
        treatmentTime = "kap_pharma_treatment_time_zagustin";
        medicRequired = "kap_pharma_treatment_level_zagustin";
    };

    class KAP_Meth: CWMP {
        displayName = "snort Meth";
        displayNameProgress = "Snorting Meth";
        condition = "kap_pharma_enable_meth";
        items[] = {"kap_Meth"};
        callbackSuccess = "pharma_fnc_KAP_Meth";
        treatmentTime = "kap_pharma_treatment_time_meth";
        medicRequired = "kap_pharma_treatment_level_meth";
    };

    class KAP_Vicodin: CWMP {
        displayName = "take Vicodin";
        displayNameProgress = "Taking Vicodin";
        condition = "kap_pharma_enable_vicodin";
        items[] = {"kap_Vicodin"};
        callbackSuccess = "pharma_fnc_KAP_Vicodin";
        treatmentTime = "kap_pharma_treatment_time_vicodin";
        medicRequired = "kap_pharma_treatment_level_vicodin";
    };

    class KAP_Paracetamol: CWMP {
        displayName = "take Paracetamol";
        displayNameProgress = "Taking Paracetamol";
        condition = "kap_pharma_enable_paracetamol";
        items[] = {"kap_Paracetamol"};
        callbackSuccess = "pharma_fnc_KAP_Paracetamol";
        treatmentTime = "kap_pharma_treatment_time_paracetamol";
        medicRequired = "kap_pharma_treatment_level_paracetamol";
    };

    class KAP_Diamox: Morphine {
        displayName = "Inject Diamox";
        displayNameProgress = "Injecting Diamox";
        condition = "kap_pharma_enable_diamox";
        items[] = {"kap_Diamox"};
        callbackSuccess = "pharma_fnc_KAP_Diamox";
        treatmentTime = "kap_pharma_treatment_time_diamox";
        medicRequired = "kap_pharma_treatment_level_diamox";
    };
    
};
