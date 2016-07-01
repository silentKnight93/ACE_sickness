#include "script_component.hpp"
class CfgPatches
{
	class ace_sickness
	{
		units[] = {"AWC_antidote_flyItem","AWC_antidote_snakeItem","AWC_antidote_efeuItem","AWC_antidote_heatItem"};
		weapons[] = {"AWC_antidote_fly","AWC_antidote_snake","AWC_antidote_efeu","AWC_antidote_heat"};
		requiredVersion = 1.0;
		requiredAddons[] = {};
		author[] = {"Dorbedo, silentKnight"};
		authorUrl = "";
		version = "3.6.0.0";
		versionStr = "3.6.0.0";
		versionAr[] = {3,6,0,0};
	};
};
#include "CfgEventHandlers.hpp"
#include "sickness.hpp"

class CfgVehicles
{
	/*extern*/ class Item_Base_F;
	class AWC_antidote_flyItem: Item_Base_F 
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Gegenmittel (Mückenstich)";
		author = "Dorbedo, silentKnight";
		vehicleClass = "Items";
		class TransportItems 
		{
			class _xx_AWC_antidote_fly 
			{
				name = "AWC_antidote_fly";
				count = 1;
			};
		};
	};
	class AWC_antidote_snakeItem: Item_Base_F 
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Gegenmittel (Schlangenbiss)";
		author = "Dorbedo, silentKnight";
		vehicleClass = "Items";
		class TransportItems 
		{
			class _xx_AWC_antidote_snake 
			{
				name = "AWC_antidote_snake";
				count = 1;
			};
		};
	};
	class AWC_antidote_efeuItem: Item_Base_F 
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Gegenmittel (Giftefeu)";
		author = "Dorbedo, silentKnight";
		vehicleClass = "Items";
		class TransportItems 
		{
			class _xx_AWC_antidote_efeu 
			{
				name = "AWC_antidote_efeu";
				count = 1;
			};
		};
	};
	class AWC_antidote_heatItem: Item_Base_F 
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Gegenmittel (Hitzschlag)";
		author = "Dorbedo, silentKnight";
		vehicleClass = "Items";
		class TransportItems 
		{
			class _xx_AWC_antidote_heat 
			{
				name = "AWC_antidote_heat";
				count = 1;
			};
		};
	};
};
class CfgWeapons
{	
	/*extern*/ class InventoryItem_Base_F ;
	/*extern*/ class ACE_ItemCore;
	class AWC_antidote_fly: ACE_ItemCore 
	{
		scope = 2;
		displayName = "Gegenmittel (Mückenstich)";
		author = "Dorbedo, silentKnight";
		picture = "\ace_sickness\ui\x_antidote.paa";
		model = "ace_sickness\antidote.p3d";
		descriptionShort = "Schnellinjektor zur Behandlung von, durch Mückenstiche ausgelöste, Krankheiten.";
		descriptionUse = "Schnellinjektor zur Behandlung von, durch Mückenstiche ausgelöste, Krankheiten.";
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
		model = "ace_sickness\antidote.p3d";
		descriptionShort = "Schnellinjektor zur Behandlung von, durch Schlangenbisse ausgelöste, Krankheiten.";
		descriptionUse = "Schnellinjektor zur Behandlung von, durch Schlangenbisse ausgelöste, Krankheiten.";
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
		model = "ace_sickness\antidote.p3d";
		descriptionShort = "Schnellinjektor zur Behandlung von, durch Giftefeu ausgelöste, Krankheiten.";
		descriptionUse = "Schnellinjektor zur Behandlung von, durch Giftefeu ausgelöste, Krankheiten.";
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
		model = "ace_sickness\antidote.p3d";
		descriptionShort = "Schnellinjektor zur Behandlung von, durch einen Hitzschlag ausgelöste, Krankheiten.";
		descriptionUse = "Schnellinjektor zur Behandlung von, durch einen Hitzschlag ausgelöste, Krankheiten.";
        class ItemInfo: InventoryItem_Base_F 
		{
            mass = 1;
        };
	};
};