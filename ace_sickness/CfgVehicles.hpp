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