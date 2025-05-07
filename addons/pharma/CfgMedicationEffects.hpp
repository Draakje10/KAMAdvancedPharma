class CfgMedicationEffects
{
    class baseMedicationEffect
    {
        painReduce = 0; // How much does the pain get reduced?
        timeInSystem = 0; // How long until this medication has disappeared
        timeTillMaxEffect = 0; // How long until the maximum effect is reached
        viscosityChange = 0; // The viscosity of a fluid is a measure of its resistance to gradual deformation by shear stress or tensile stress. For liquids, it corresponds to the informal concept of "thickness". This value will increase/decrease the viscoty of the blood with the percentage given. Where 100 = max. Using the minus will decrease viscosity
        // How much will the heart rate be increased when the HR is low (below 55)? {minIncrease, maxIncrease}
        hrIncreaseLow[] = {0, 0}; // _heartRate < 55
        hrIncreaseNormal[] = {0, 0}; // 55 <= _heartRate <= 110
        hrIncreaseHigh[] = {0, 0}; // 110 < _heartRate
        dose = 1;  // The dose of the medication, to allow for different dose amounts of the same medication
        maxDose = 4;         // The number of doses over maxDose where there is a chance to overdose.
        maxDoseDeviation = 2; // The dose of the medication, to allow for different dose amounts of the same medication
        alphaFactor = 0;  // How much does the medication constrict/dilate the patient's blood vessels?
        maxRelief = 0; // Max amount of pain the medication can remove
        opioidRelief = 0; // Reduction of damage from wounds
        opioidEffect = 0; // How strong should opioid visuals be
        onOverDose = "";   // Function to execute upon overdose. Arguments passed to call back are 0: unit <OBJECT>, 1: medicationClassName <STRING>     
    };


    class CanGummies{
            painReduce = 0.2;
            hrIncreaseLow[] = {0, 5};
            hrIncreaseNormal[] = {5, 10};
            hrIncreaseHigh[] = {5, 10};
            timeInSystem = 360;
            timeTillMaxEffect = 45;
            dose = 1;
            maxDose = 6;
            maxDoseDeviation = 4;
            incompatibleMedication[] = {};
            viscosityChange = -5;
            onOverDose = "";
            maxRelief = 0.5;
    };
};