class CfgWeapons {
    class ACE_ItemCore;
    class CBA_MiscItem_ItemInfo;

    class kap_LUCASDevice: ACE_ItemCore {
        scope = 2;
        displayName = "LUCAS Device";
        picture = "\kap_pharma\models\icons\lucas_device.paa";
        model = "\A3\Structures_F_EPA\Items\Medical\Painkillers_F.p3d";
        descriptionShort = "Automatic Chest Compression Device";
        ACE_isMedicalItem = 1;
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 20;
        };
    };
};
