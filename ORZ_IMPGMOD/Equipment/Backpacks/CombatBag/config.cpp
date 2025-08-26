class CfgPatches 
{
	class IMP_Bag_CombatBag 
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = 
		{
			"DZ_Data", 
			"DZ_Characters", 
			"DZ_Scripts",
			"DZ_Characters_Vests"
		};
	};
};

class cfgVehicles 
{
	class Clothing_Base;
	class Clothing: Clothing_Base {};
	
	class IMP_Bag_CombatBag_ColorBase : Clothing 
	{
		scope = 0;
		RankLevel = 2;
		displayName = "$STR_IMP_MiniMilitaryBag";
		descriptionShort = "$STR_IMP_Bag_Dscr";
		model = "IMPGMOD\Equipment\Backpacks\CombatBag\models\CombatBag_g.p3d";
		attachments[] = {"PatchSmall", "Chemlight", "PersonalRadio", "VestHolster"};
		inventorySlot[] = {"Back", "Backpack1"};
		itemInfo[] = {"Clothing", "Back"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemSize[] = {6, 7};
		quickBarBonus = 1;
		itemsCargoSize[] = {6, 7};
		weight = 2600;
		varWetMax=0.048999999;
		heatIsolation=0.5;
		repairableWithKits[] = {5, 3};
		repairCosts[] = {30.0, 25.0};
		soundAttType = "Outdoor";
		randomQuantity = 4;
		canBeDigged = 0;
		hiddenSelections[] = {"camoflage"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\CombatBag\data\CombatBag_co"};
		
		class ClothingTypes 
		{
			male = "IMPGMOD\Equipment\Backpacks\CombatBag\models\CombatBag_m.p3d";
			female = "IMPGMOD\Equipment\Backpacks\CombatBag\models\CombatBag_f.p3d";
		};
		
		class DamageSystem 
		{
			class GlobalHealth 
			{
				class Health 
				{
					hitpoints = 500;
					transferToAttachmentsCoef = 0.5;
					healthLevels[] = 
					{
						{1.01, {"IMPGMOD\Equipment\Backpacks\CombatBag\data\CombatBag.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Backpacks\CombatBag\data\CombatBag.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Backpacks\CombatBag\data\CombatBag_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Backpacks\CombatBag\data\CombatBag_damage.rvmat"}}, 
						{0.01, {"IMPGMOD\Equipment\Backpacks\CombatBag\data\CombatBag_destruct.rvmat"}}
					};
				};
			};
		};
		
		class AnimEvents 
		{
			class SoundWeapon 
			{
				class pickUpItem_Light 
				{
					soundSet = "pickUpBackPack_Plastic_Light_SoundSet";
					id = 796;
				};
				
				class pickUpItem 
				{
					soundSet = "pickUpBackPack_Plastic_SoundSet";
					id = 797;
				};
				
				class drop 
				{
					soundset = "taloonbag_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	
	class IMP_Bag_CombatBag : IMP_Bag_CombatBag_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\CombatBag\data\CombatBag_co"};
	};
};
