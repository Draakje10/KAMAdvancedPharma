class CfgWeapons {
    class ACE_ItemCore;
    class CBA_MiscItem_ItemInfo;

    class kap_XStat: ACE_ItemCore {
        scope = 2;
        displayName = "XStat";
        picture = "\kap_pharma\models\icons\xstat.paa";
        model = "\A3\Structures_F_EPA\Items\Medical\Painkillers_F.p3d";
        descriptionShort = "The easy way out";
        ACE_isMedicalItem = 1;
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.1;
        };
    };
};