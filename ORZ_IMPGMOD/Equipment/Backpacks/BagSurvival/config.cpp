class CfgPatches 
{
	class IMP_Bag_Survival 
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
	
	class IMP_Bag_Survival_ColorBase : Clothing 
	{
		scope = 0;
		RankLevel = 3;
		quickBarBonus=3;
		displayName = "$STR_IMP_SurvivalBag";
		descriptionShort = "$STR_IMP_Bag_Dscr";
		model = "IMPGMOD\Equipment\Backpacks\BagSurvival\models\Bag_Survival_g.p3d";
		inventorySlot[] = {"Back", "Backpack1"};
		itemInfo[] = {"Clothing", "Back"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemSize[] = {6, 7};
		itemsCargoSize[] = {7, 9};
		weight = 3400;
		varWetMax=0.249;
		heatIsolation=1;
		repairableWithKits[] = {5, 3};
		repairCosts[] = {30.0, 25.0};
		soundAttType = "Outdoor";
		randomQuantity = 4;
		canBeDigged = 0;
		attachments[] = {"PatchSmall", "Chemlight","PersonalRadio", "NBCBag"};
		hiddenSelections[] = {"camoflage"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\BagSurvival\data\SurvivalBag_co.paa"};
		
		class ClothingTypes 
		{
			male = "IMPGMOD\Equipment\Backpacks\BagSurvival\models\Bag_Survival_m.p3d";
			female = "IMPGMOD\Equipment\Backpacks\BagSurvival\models\Bag_Survival_f.p3d";
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
						{1, {"IMPGMOD\Equipment\Backpacks\BagSurvival\data\SurvivalBag.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Backpacks\BagSurvival\data\SurvivalBag.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Backpacks\BagSurvival\data\SurvivalBag_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Backpacks\BagSurvival\data\SurvivalBag_damage.rvmat"}}, 
						{0, {"IMPGMOD\Equipment\Backpacks\BagSurvival\data\SurvivalBag_destruct.rvmat"}}
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
	
	class IMP_Bag_Survival : IMP_Bag_Survival_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\BagSurvival\data\SurvivalBag_co.paa"};
	};
};
