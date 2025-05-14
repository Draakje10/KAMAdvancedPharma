class ACE_Medical_Treatment {
    class Medication  {

        class CanGummies
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
        };

        class Cyanide
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

        class Zagustin
        {
            painReduce = 0.0;
            hrIncreaseLow[] = {-25, -30};
            hrIncreaseNormal[] = {-15, -20};
            hrIncreaseHigh[] = {-40, -55};
            timeInSystem = 300;
            timeTillMaxEffect = 15;
            incompatibleMedication[] = {};
            viscosityChange = 100;
            maxRelief = 0.5;
            maxDose = 4;
            maxDoseDeviation = 1;
            dose = 1;
            onOverDose = "";
        };
    };
};