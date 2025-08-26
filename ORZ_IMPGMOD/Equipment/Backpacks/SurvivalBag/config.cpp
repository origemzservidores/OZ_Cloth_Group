class CfgPatches 
{
	class IMP_Bag_Mountain 
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
	
	class IMP_Bag_Mountain_ColorBase : Clothing 
	{
		scope = 0;
		RankLevel = 3;
		displayName = "$STR_IMP_MountainBag";
		descriptionShort = "$STR_IMP_Bag_Dscr";
		model = "IMPGMOD\Equipment\Backpacks\SurvivalBag\models\SurvivalBag_g.p3d";
		inventorySlot[] = {"Back", "Backpack1"};
		itemInfo[] = {"Clothing", "Back"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemSize[] = {6, 7};
		rotationFlags=16;
		quickBarBonus = 3;
		itemsCargoSize[] = {9, 9};
		weight = 3400;
		heatIsolation=1;
		varWetMax=0.249;
		repairableWithKits[] = {5, 3};
		repairCosts[] = {30.0, 25.0};
		soundAttType = "Outdoor";
		randomQuantity = 4;
		canBeDigged = 0;
		attachments[] = {"PatchSmall", "Chemlight","PersonalRadio", "Canteen"};
		hiddenSelections[] = {"camoflage"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\SurvivalBag\data\SurvivalBag_Blue_co.paa"};
		
		class ClothingTypes 
		{
			male = "IMPGMOD\Equipment\Backpacks\SurvivalBag\models\SurvivalBag_m.p3d";
			female = "IMPGMOD\Equipment\Backpacks\SurvivalBag\models\SurvivalBag_f.p3d";
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
						{1, {"IMPGMOD\Equipment\Backpacks\SurvivalBag\data\SurvivalBag.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Backpacks\SurvivalBag\data\SurvivalBag.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Backpacks\SurvivalBag\data\SurvivalBag_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Backpacks\SurvivalBag\data\SurvivalBag_damage.rvmat"}}, 
						{0, {"IMPGMOD\Equipment\Backpacks\SurvivalBag\data\SurvivalBag_destruct.rvmat"}}
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
	
	class IMP_Bag_Mountain_Blue : IMP_Bag_Mountain_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\SurvivalBag\data\SurvivalBag_Blue_co.paa"};
	};
	
	class IMP_Bag_Mountain_Green : IMP_Bag_Mountain_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\SurvivalBag\data\SurvivalBag_Green_co.paa"};
	};
	
	class IMP_Bag_Mountain_Red : IMP_Bag_Mountain_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\SurvivalBag\data\SurvivalBag_Red_co.paa"};
	};
	
	class IMP_Bag_Mountain_Yellow : IMP_Bag_Mountain_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\SurvivalBag\data\SurvivalBag_Yellow_co.paa"};
	};
};
