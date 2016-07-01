class CfgWeapons
{	
	/*extern*/ class InventoryItem_Base_F ;
	/*extern*/ class ACE_ItemCore;
	class AWC_antidote_fly: ACE_ItemCore 
	{
		scope = 2;
		displayName = "Gegenmittel (M�ckenstich)";
		author = "Dorbedo, silentKnight";
		picture = "\ace_sickness\ui\x_antidote.paa";
		model = "\ace_sickness\antidote.p3d)";
		descriptionShort = "Schnellinjektor zur Behandlung von, durch M�ckenstiche ausgel�ste, Krankheiten.";
		descriptionUse = "Schnellinjektor zur Behandlung von, durch M�ckenstiche ausgel�ste, Krankheiten.";
        class ItemInfo: InventoryItem_Base_F 
		{
            mass = 1;
        };
	};
	class AWC_antidote_snake: ACE_ItemCore 
	{
		scope = 2;
		displayName = "Gegenmittel (Schlangenbiss)";
		author = "Dorbedo, silentKnight";
		picture = "\ace_sickness\ui\x_antidote.paa";
		model = "\ace_sickness\antidote.p3d)";
		descriptionShort = "Schnellinjektor zur Behandlung von, durch Schlangenbisse ausgel�ste, Krankheiten.";
		descriptionUse = "Schnellinjektor zur Behandlung von, durch Schlangenbisse ausgel�ste, Krankheiten.";
        class ItemInfo: InventoryItem_Base_F 
		{
            mass = 1;
        };
	};
	class AWC_antidote_efeu: ACE_ItemCore 
	{
		scope = 2;
		displayName = "Gegenmittel (Giftefeu)";
		author = "Dorbedo, silentKnight";
		picture = "\ace_sickness\ui\x_antidote.paa";
		model = "\ace_sickness\antidote.p3d)";
		descriptionShort = "Schnellinjektor zur Behandlung von, durch Giftefeu ausgel�ste, Krankheiten.";
		descriptionUse = "Schnellinjektor zur Behandlung von, durch Giftefeu ausgel�ste, Krankheiten.";
        class ItemInfo: InventoryItem_Base_F 
		{
            mass = 1;
        };
	};
	class AWC_antidote_heat: ACE_ItemCore 
	{
		scope = 2;
		displayName = "Gegenmittel (Hitzschlag)";
		author = "Dorbedo, silentKnight";
		picture = "\ace_sickness\ui\x_antidote.paa";
		model = "\ace_sickness\antidote.p3d)";
		descriptionShort = "Schnellinjektor zur Behandlung von, durch einen Hitzschlag ausgel�ste, Krankheiten.";
		descriptionUse = "Schnellinjektor zur Behandlung von, durch einen Hitzschlag ausgel�ste, Krankheiten.";
        class ItemInfo: InventoryItem_Base_F 
		{
            mass = 1;
        };
	};
};