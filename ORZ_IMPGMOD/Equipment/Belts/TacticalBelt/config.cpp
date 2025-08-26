class CfgPatches
{
	class TacticalBelt_New
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Characters","DZ_Characters_Backpacks","DZ_Weapons_Firearms"};
	};
};

class CfgVehicles
{
	class Clothing_Base;
	class Clothing: Clothing_Base{};
	class IMP_Belt_TacticalBelt_ColorBase: Clothing
	{
		scope = 0;
		displayName = "$STR_IMP_TacticalBelt";
		descriptionShort = "$STR_IMP_TacticalBelt2";
		model = "IMPGMOD\Equipment\Belts\TacticalBelt\models\belt_g.p3d";
		inventorySlot = "Hips";
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Hips"};
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
		attachments[] = {"Belt_Back", "ifak_pouch", "mag_pouch_a", "mag_pouch_b", "MapPouch", "PMP", "Pistol"};
		hiddenSelections[] = {"camoflage","camoflage1"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Belts\MilitaryBelt\data\MilitaryBelt_EMR.paa","IMPGMOD\Equipment\Belts\TacticalBelt\data\tacticalbelt_black_co.paa"};
		class ClothingTypes
		{
			male = "IMPGMOD\Equipment\Belts\TacticalBelt\models\belt_m.p3d";
			female = "IMPGMOD\Equipment\Belts\TacticalBelt\models\belt_m.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 130;
					healthLevels[] = {{1.0,{"IMPGMOD\Equipment\Belts\MilitaryBelt\data\MilitaryBelt.rvmat", "IMPGMOD\Equipment\Belts\TacticalBelt\data\tacticalbelt.rvmat"}},{0.7,{"IMPGMOD\Equipment\Belts\MilitaryBelt\data\MilitaryBelt.rvmat", "IMPGMOD\Equipment\Belts\TacticalBelt\data\tacticalbelt.rvmat"}},{0.5,{"IMPGMOD\Equipment\Belts\MilitaryBelt\data\MilitaryBelt_damage.rvmat", "IMPGMOD\Equipment\Belts\TacticalBelt\data\tacticalbelt_damage.rvmat"}},{0.3,{"IMPGMOD\Equipment\Belts\MilitaryBelt\data\MilitaryBelt_damage.rvmat", "IMPGMOD\Equipment\Belts\TacticalBelt\data\tacticalbelt_damage.rvmat"}},{0.0,{"IMPGMOD\Equipment\Belts\MilitaryBelt\data\MilitaryBelt_destruct.rvmat", "IMPGMOD\Equipment\Belts\TacticalBelt\data\tacticalbelt_destruct.rvmat"}}};
				};
			};
		};
	};
	class IMP_Belt_TacticalBelt_Black: IMP_Belt_TacticalBelt_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Belts\MilitaryBelt\data\MilitaryBelt_Black_co.paa","IMPGMOD\Equipment\Belts\TacticalBelt\data\tacticalbelt_black_co.paa"};
	};
	class IMP_Belt_TacticalBelt_Green: IMP_Belt_TacticalBelt_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Belts\MilitaryBelt\data\MilitaryBelt_Green_co.paa","IMPGMOD\Equipment\Belts\TacticalBelt\data\tacticalbelt_co.paa"};
	};
	class IMP_Belt_TacticalBelt_Tan: IMP_Belt_TacticalBelt_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Belts\MilitaryBelt\data\MilitaryBelt_Tan_co.paa","IMPGMOD\Equipment\Belts\TacticalBelt\data\tacticalbelt_tan_co.paa"};
	};
};