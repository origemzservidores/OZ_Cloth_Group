class CfgPatches 
{
	class IMP_Bag_RedFoxBag 
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
	
	class IMP_Bag_RedFoxBag_ColorBase : Clothing 
	{
		scope = 0;
		RankLevel = 2;
		displayName = "$STR_IMP_RedFox";
		descriptionShort = "$STR_IMP_Bag_Dscr";
		model = "\IMPGMOD\Equipment\Backpacks\RedFoxBag\models\RedFoxBag_g.p3d";
		inventorySlot[] = {"Back", "Backpack1"};
		itemInfo[] = {"Clothing", "Back"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemSize[] = {6, 7};
		quickBarBonus = 2;
		itemsCargoSize[] = {7, 9};
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
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\RedFoxBag\data\RedFoxBag_co.paa"};
		
		class ClothingTypes 
		{
			male = "\IMPGMOD\Equipment\Backpacks\RedFoxBag\models\RedFoxBag_m.p3d";
			female = "\IMPGMOD\Equipment\Backpacks\RedFoxBag\models\RedFoxBag_m.p3d";
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
						{1, {"IMPGMOD\Equipment\Backpacks\RedFoxBag\data\RedFoxBag.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Backpacks\RedFoxBag\data\RedFoxBag.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Backpacks\RedFoxBag\data\RedFoxBag_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Backpacks\RedFoxBag\data\RedFoxBag_damage.rvmat"}}, 
						{0, {"IMPGMOD\Equipment\Backpacks\RedFoxBag\data\RedFoxBag_destruct.rvmat"}}
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
	
	class IMP_Bag_RedFoxBag : IMP_Bag_RedFoxBag_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\RedFoxBag\data\RedFoxBag_co.paa"};
	};
};
