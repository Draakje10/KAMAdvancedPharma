class CfgFunctions
{
    class pharma
    {
        class effects {
            file = "kap_pharma\functions";
            class applyMedication {};
            class CanGummies {};
        };
        class init {
            file = "kap_pharma\functions";
            class medicationInit { postInit = 1; };
        };
    };
    
};