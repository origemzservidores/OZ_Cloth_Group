class CfgPatches
{
	class IMP_ChestHolster
	{
		units[] = {"chestholster_quad_black","chestholster_quad_green","chestholster_quad_tan","chestholster_quad_winter"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Characters","DZ_Characters_Backpacks","DZ_Weapons_Firearms"};
	};
};

class CfgVehicles
{
	class Clothing;
	class IMP_Chestholster_ColorBase: Clothing
	{
		scope = 0;
		displayName = "$STR_IMP_ChestHolster";
		descriptionShort = "$STR_IMP_ChestHolster2";
		model = "IMPGMOD\Equipment\Belts\ChestHolster\models\chestholster_g.p3d";
		inventorySlot = "Vest";
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Vest"};
		rotationFlags = 0;
		itemSize[] = {7,3};
		itemsCargoSize[] = {5,2};
		weight = 500;
		absorbency = 0.2;
		heatIsolation = 0.13;
		repairableWithKits[] = {5,3};
		repairCosts[] = {30,25};
		canBeDigged = 1;
		soundAttType = "Outdoor";
		attachments[] = {"Pistol"};
		hiddenSelections[] = {"camoflage"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Belts\ChestHolster\data\chestholster_co.paa"};
		class ClothingTypes
		{
			male = "IMPGMOD\Equipment\Belts\ChestHolster\models\chestholster_m.p3d";
			female = "IMPGMOD\Equipment\Belts\ChestHolster\models\chestholster_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 130;
					healthLevels[] = {{1.0,{"IMPGMOD\Equipment\Sling\Sling\data\riflesling.rvmat"}},{0.7,{"IMPGMOD\Equipment\Sling\Sling\data\riflesling.rvmat"}},{0.5,{"IMPGMOD\Equipment\Sling\Sling\data\rifle_sling_damaged.rvmat"}},{0.3,{"IMPGMOD\Equipment\Sling\Sling\data\rifle_sling_badlydamaged.rvmat"}},{0.0,{"IMPGMOD\Equipment\Sling\Sling\data\rifle_sling_ruined.rvmat"}}};
				};
			};
		};
	};
	class IMP_Chestholster_Black: IMP_Chestholster_ColorBase
	{
		scope = 2;
		displayName = "Chest Holster Black";
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Belts\ChestHolster\data\chestholster_black.paa"};
	};
	class IMP_Chestholster_Green: IMP_Chestholster_ColorBase
	{
		scope = 2;
		displayName = "Chest Holster Green";
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Belts\ChestHolster\data\chestholster_co.paa"};
	};
	class IMP_Chestholster_Tan: IMP_Chestholster_ColorBase
	{
		scope = 2;
		displayName = "Chest Holster Tan";
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Belts\ChestHolster\data\chestholster_tan.paa"};
	};
};