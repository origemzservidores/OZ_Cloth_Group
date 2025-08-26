class CfgPatches 
{
	class IMP_BallisticShield 
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data", "DZ_Characters", "DZ_Scripts","DZ_Characters_Vests"};
	};
};

class cfgVehicles 
{
	class Clothing_Base;
	class Clothing: Clothing_Base {};
	
	class IMP_BallisticShield_base : Clothing {
		scope = 0;
		repairableWithKits[] = {139, 138};
		repairCosts[] = {100, 100};
		displayName = "$STR_IMP_BallisticS";
		inventorySlot[] = {"Back"};
		descriptionShort = "$STR_IMP_BallisticSD";
		model = "IMPGMOD\Items\Shield\models\IMP_Shield_g.p3d";
		weight = 20000;
		itemSize[] = {7, 10};
		absorbency = 0.1;
		heatIsolation = 0.1;
		physLayer = "item_large";
		hiddenSelections[] = {"camoflage"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Shield\data\Shield_green_co.paa"};
		
		class ClothingTypes {
			male = "IMPGMOD\Items\Shield\models\IMP_Shield.p3d";
			female = "IMPGMOD\Items\Shield\models\IMP_Shield.p3d";
		};
		
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints = 2000;
					healthLevels[] = {{1.0, {"IMPGMOD\Items\Shield\data\Shield.rvmat"}}, {0.7, {"IMPGMOD\Items\Shield\data\Shield.rvmat"}}, {0.5, {"IMPGMOD\Items\Shield\data\Shield_damage.rvmat"}}, {0.3, {"IMPGMOD\Items\Shield\data\Shield_damage.rvmat"}}, {0.0, {"IMPGMOD\Items\Shield\data\Shield_destruct.rvmat"}}};
				};
			};
		};
	};
	class IMP_BallisticShield_Green : IMP_BallisticShield_base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Shield\data\Shield_green_co.paa"};
	};
	class IMP_BallisticShield_Black : IMP_BallisticShield_base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Shield\data\Shield_black_co.paa"};
	};
};
