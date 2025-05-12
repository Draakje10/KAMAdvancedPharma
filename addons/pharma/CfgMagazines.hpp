class CfgMagazines
{
    class CA_Magazine;
    

    class kap_CanGummies: CA_Magazine
    {
        author = "Draakje10";
        scope = 2;

        displayName = "Cannabis Gummies";
        descriptionShort = "";
        model = "\A3\Structures_F_EPA\Items\Medical\Painkillers_F.p3d";
        picture = "\kap_pharma\models\icons\cangummies.paa";
        ammo = "";
        count = 6;
        initSpeed = 0;
        mass = 0.6;
        ACE_isMedicalItem = 1;
        ace_asItem = 1;	
    };

    class kap_Cyanide: CA_Magazine
    {
        author = "Draakje10";
        scope = 2;
        displayName = "Cyanide";
        descriptionShort = "";
        model = "\A3\Structures_F_EPA\Items\Medical\Painkillers_F.p3d";
        picture = "\kap_pharma\models\icons\cyanide.paa";
        ammo = "";
        count = 1;
        initSpeed = 0;
        mass = 0.1;
        ACE_isMedicalItem = 1;
        ace_asItem = 1;
    };
};