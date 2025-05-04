class ACE_Medical_Treatment_Actions 
{
    class CWMP;

    class CanGummies: CWMP {
        displayName = "Cannabis Gummies";
        items[] = {"kap_CanGummies"};
        callbackSuccess = "kap_pharma\functions\fnc_treatmentAdvanced_CanGummies.sqf";
    };
};
