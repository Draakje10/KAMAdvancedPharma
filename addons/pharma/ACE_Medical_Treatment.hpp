class ACE_Medical_Treatment {
    class Medication  {

        class CanGummies
        {
            painReduce = 0.3;
            hrIncreaseLow[] = {0, -5};
            hrIncreaseNormal[] = {0, -5};
            hrIncreaseHigh[] = {0, -5};
            timeInSystem = 360;
            timeTillMaxEffect = 45;
            incompatibleMedication[] = {};
            viscosityChange = -5;
            maxRelief = 0.5;
            maxDose = 5;
            maxDoseDeviation = 5;
            dose = 1;
            onOverDose = "";
        };
    };
};