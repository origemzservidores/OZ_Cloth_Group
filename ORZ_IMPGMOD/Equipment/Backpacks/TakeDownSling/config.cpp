class CfgPatches 
{
	class IMP_Bag_TakeDownSling 
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data", "DZ_Characters", "DZ_Scripts"};
	};
};

class cfgVehicles 
{
	class Clothing_Base;
	class Clothing: Clothing_Base {};
	
	class IMP_Bag_TakeDownSling_ColorBase : Clothing 
	{
		scope = 0;
		RankLevel = 3;
		displayName = "$STR_IMP_Hazard4";
		descriptionShort = "$STR_IMP_Bag_Dscr";
		model = "\IMPGMOD\Equipment\Backpacks\TakeDownSling\models\TakeDownSling_g.p3d";
		inventorySlot[] = {"Back", "Backpack1"};
		itemInfo[] = {"Clothing", "Back"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemSize[] = {6, 7};
		quickBarBonus = 4;
		itemsCargoSize[] = {10, 10};
		weight = 2300;
		varWetMax=0.048999999;
		heatIsolation=0.5;
		repairableWithKits[] = {5, 3};
		repairCosts[] = {30.0, 25.0};
		soundAttType = "Outdoor";
		randomQuantity = 4;
		canBeDigged = 0;
		attachments[] = {};
		hiddenSelections[] = {"camoflage"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\TakeDownSling\data\TakeDownSling_black_co.paa"};
		
		class ClothingTypes 
		{
			male = "\IMPGMOD\Equipment\Backpacks\TakeDownSling\models\TakeDownSling_m.p3d";
			female = "\IMPGMOD\Equipment\Backpacks\TakeDownSling\models\TakeDownSling_m.p3d";
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
						{1, {"IMPGMOD\Equipment\Backpacks\TakeDownSling\data\TakeDownSling.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Backpacks\TakeDownSling\data\TakeDownSling.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Backpacks\TakeDownSling\data\TakeDownSling_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Backpacks\TakeDownSling\data\TakeDownSling_damage.rvmat"}}, 
						{0, {"IMPGMOD\Equipment\Backpacks\TakeDownSling\data\TakeDownSling_destruct.rvmat"}}
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
	
	class IMP_Bag_TakeDownSling_black : IMP_Bag_TakeDownSling_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\TakeDownSling\data\TakeDownSling_black_co.paa"};
	};
	
	class IMP_Bag_TakeDownSling_multicam : IMP_Bag_TakeDownSling_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\TakeDownSling\data\TakeDownSling_multicam_co.paa"};
	};
};
