#include "script_component.hpp"


class ACE_Medical_Treatment_Actions 
{
    class BasicBandage;

    class applyXStat: BasicBandage {
        displayName = "XStat";
        displayNameProgress = "Push XStat into wound";
        condition = "[_patient,_bodyPart] call ace_medical_treatment_hasTourniquetAppliedTo";
        items[] = {"kap_XStat"};
        icon = QPATHTOEF(medical_gui,ui\tourniquet.paa);
        allowedSelections[] = {"LeftLeg", "RightLeg"};
        callbackSuccess = "pharma_fnc_KAP_XStat";
        treatmentTime = "kap_pharma_treatment_time_xstat";
        medicRequired = "kap_pharma_treatment_level_xstat";
        litter[] = {};
        allowedUnderwater = 1;
    }
    
};
