class ACE_Medical_Treatment {
    class Medication  {

        class KAP_CanGummies
        {
            painReduce = 0.3;
            hrIncreaseLow[] = {0, -5};
            hrIncreaseNormal[] = {0, -5};
            hrIncreaseHigh[] = {0, -5};
            timeInSystem = 600;
            timeTillMaxEffect = 45;
            incompatibleMedication[] = {};
            viscosityChange = -5;
            maxRelief = 0.5;
            maxDose = 5;
            maxDoseDeviation = 5;
            dose = 1;
            onOverDose = "";
            opioidEffect = 0.07;
        };

        class KAP_Cyanide
        {
            painReduce = 0;
            hrIncreaseLow[] = {-80, -180};
            hrIncreaseNormal[] = {-80, -180};
            hrIncreaseHigh[] = {-80, -180};
            timeInSystem = 360;
            timeTillMaxEffect = 10;
            incompatibleMedication[] = {};
            viscosityChange = -100;
            maxRelief = 0.5;
            maxDose = 1;
            maxDoseDeviation = 1;
            dose = 5;
            onOverDose = "";
        };

        class KAP_Zagustin
        {
            painReduce = 0.0;
            hrIncreaseLow[] = {-25, -30};
            hrIncreaseNormal[] = {-15, -20};
            hrIncreaseHigh[] = {-40, -55};
            timeInSystem = 300;
            timeTillMaxEffect = 15;
            viscosityChange = 100;
            maxRelief = 0.5;
            maxDose = 4;
            maxDoseDeviation = 1;
            dose = 1;
            onOverDose = "";
            opioidEffect = 0.17;
        };

        class KAP_Meth
        {
            painReduce = 1;
            hrIncreaseLow[] = {0, 10};
            hrIncreaseNormal[] = {10, 20};
            hrIncreaseHigh[] = {20, 30};
            timeInSystem = "kap_pharma_meth_time_in_body";
            timeTillMaxEffect = 20;
            incompatibleMedication[] = {};
            viscosityChange = 5;
            maxRelief = 1;
            maxDose = 1;
            maxDoseDeviation = 1;
            dose = 1;
            onOverDose = "";
            opioidEffect = 0.17;
        };

        class KAP_Vicodin
        {
            painReduce = 0.4;
            hrIncreaseLow[] = {0, -5};
            hrIncreaseNormal[] = {0, -5};
            hrIncreaseHigh[] = {0, -5};
            timeInSystem = 1200;
            timeTillMaxEffect = 45;
            incompatibleMedication[] = {};
            viscosityChange = -5;
            maxRelief = 0.5;
            maxDose = 5;
            maxDoseDeviation = 5;
            dose = 1;
            onOverDose = "";
        };

        class KAP_Paracetamol
        {
            painReduce = 0.1;
            hrIncreaseLow[] = {0, 0};
            hrIncreaseNormal[] = {0, 0};
            hrIncreaseHigh[] = {0, 0};
            timeInSystem = 30;
            timeTillMaxEffect = 10;
            incompatibleMedication[] = {};
            viscosityChange = 0;
            maxRelief = 0.4;
            maxDose = 20;
            maxDoseDeviation = 5;
            dose = 1;
            onOverDose = "";
        };
    };
};