class CfgPatches 
{
	class IMP_Bag_MarchingBag
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
	
	class IMP_Bag_MarchingBag_ColorBase : Clothing 
	{
		scope = 0;
		RankLevel = 4;
		displayName = "$STR_IMP_MarchingBag";
		descriptionShort = "$STR_IMP_Bag_Dscr";
		model = "IMPGMOD\Equipment\Backpacks\MarchingBag\models\MarchingBag_g.p3d";
		attachments[] = {"PatchSmall", "Chemlight", "PersonalRadio", "Knife1"};
		inventorySlot[] = {"Back", "Backpack1"};
		itemInfo[] = {"Clothing", "Back"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemSize[] = {6, 7};
		quickBarBonus = 4;
		itemsCargoSize[] = {10, 10};
		weight = 5600;
		varWetMax=0.048999999;
		heatIsolation=0.5;
		repairableWithKits[] = {5, 3};
		repairCosts[] = {30.0, 25.0};
		soundAttType = "Outdoor";
		randomQuantity = 4;
		canBeDigged = 0;
		hiddenSelections[] = {"camoflage"};
		
		class ClothingTypes 
		{
			male = "IMPGMOD\Equipment\Backpacks\MarchingBag\models\MarchingBag_m.p3d";
			female = "IMPGMOD\Equipment\Backpacks\MarchingBag\models\MarchingBag_m.p3d";
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
						{1, {"DZ\Characters\backpacks\data\tortila.rvmat"}}, 
						{0.7, {"DZ\Characters\backpacks\data\tortila.rvmat"}}, 
						{0.5, {"DZ\Characters\backpacks\data\tortila_damage.rvmat"}}, 
						{0.3, {"DZ\Characters\backpacks\data\tortila_damage.rvmat"}}, 
						{0, {"DZ\Characters\backpacks\data\tortila_destruct.rvmat"}}
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
	
	class IMP_Bag_MarchingBag_co : IMP_Bag_MarchingBag_ColorBase 
	{
		scope = 2;
		visibilityModifier = 0.8;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\MarchingBag\data\MarchingBag_co.paa"};
	};
	
	class IMP_Bag_MarchingBag_black : IMP_Bag_MarchingBag_ColorBase 
	{
		scope = 2;
		visibilityModifier = 0.8;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\MarchingBag\data\MarchingBag_black_co.paa"};
	};
};
