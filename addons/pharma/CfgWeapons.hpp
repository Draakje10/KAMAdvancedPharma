class CfgWeapons {
    class ACE_ItemCore;
    class CBA_MiscItem_ItemInfo;

    class kap_Cyanide: ACE_ItemCore {
        scope = 2;
        displayName = "Cyanide";
        picture = "\kap_pharma\models\icons\cyanide.paa";
        model = "\A3\Structures_F_EPA\Items\Medical\Painkillers_F.p3d";
        descriptionShort = "The easy way out";
        ACE_isMedicalItem = 1;
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.1;
        };
    };

    class kap_Zagustin: ACE_ItemCore {
        scope = 2;
        displayName = "Zagustin";
        picture = "\kap_pharma\models\icons\zagustin.paa";
        model = "\A3\Structures_F_EPA\Items\Medical\Painkillers_F.p3d";
        descriptionShort = "Synthesized in my basement";
        ACE_isMedicalItem = 1;
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.1;
        };
    };

    class kap_Meth: ACE_ItemCore {
        scope = 2;
        displayName = "Meth";
        picture = "\kap_pharma\models\icons\meth.paa";
        model = "\A3\Structures_F_EPA\Items\Medical\Painkillers_F.p3d";
        descriptionShort = "96.2% pure";
        ACE_isMedicalItem = 1;
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.1;
        };
    };
};
