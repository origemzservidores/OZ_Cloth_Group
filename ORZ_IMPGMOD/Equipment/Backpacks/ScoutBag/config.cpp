class CfgPatches 
{
	class IMP_Bag_ScoutBag 
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
	
	class IMP_Bag_ScoutBag_ColorBase : Clothing 
	{
		scope = 0;
		RankLevel = 2;
		displayName = "$STR_IMP_Scout";
		descriptionShort = "$STR_IMP_Bag_Dscr";
		model = "IMPGMOD\Equipment\Backpacks\ScoutBag\models\ScoutBag_g.p3d";
		inventorySlot[] = {"Back", "Backpack1"};
		rotationFlags=16;
		itemInfo[] = {"Clothing", "Back"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemSize[] = {6, 7};
		quickBarBonus = 3;
		itemsCargoSize[] = {9, 9};
		weight = 2000;
		varWetMax=0.249;
		heatIsolation=1;
		repairableWithKits[] = {5, 3};
		repairCosts[] = {30.0, 25.0};
		soundAttType = "Outdoor";
		randomQuantity = 4;
		canBeDigged = 0;
		attachments[] = {"PatchSmall", "Chemlight","PersonalRadio","Canteen", "Shoulder40"};
		hiddenSelections[] = {"camoflage"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\ScoutBag\data\ScoutBag_Black.paa"};
		
		class ClothingTypes 
		{
			male = "IMPGMOD\Equipment\Backpacks\ScoutBag\models\ScoutBag.p3d";
			female = "IMPGMOD\Equipment\Backpacks\ScoutBag\models\ScoutBag.p3d";
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
						{1, {"IMPGMOD\Equipment\Backpacks\ScoutBag\data\ScoutBag.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Backpacks\ScoutBag\data\ScoutBag.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Backpacks\ScoutBag\data\ScoutBag_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Backpacks\ScoutBag\data\ScoutBag_damage.rvmat"}}, 
						{0, {"IMPGMOD\Equipment\Backpacks\ScoutBag\data\ScoutBag_destruct.rvmat"}}
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
	
	class IMP_Bag_ScoutBag_Black : IMP_Bag_ScoutBag_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\ScoutBag\data\ScoutBag_Black.paa"};
	};
	
	class IMP_Bag_ScoutBag_Tan : IMP_Bag_ScoutBag_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\ScoutBag\data\ScoutBag_Tan.paa"};
	};
	
	class IMP_Bag_ScoutBag_Green : IMP_Bag_ScoutBag_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\ScoutBag\data\ScoutBag_Green.paa"};
	};
	
	class IMP_Bag_ScoutBag_EMR : IMP_Bag_ScoutBag_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\ScoutBag\data\ScoutBag_EMR.paa"};
	};
	
	class IMP_Bag_ScoutBag_UCP : IMP_Bag_ScoutBag_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\ScoutBag\data\ScoutBag_UCP.paa"};
	};
	
	class IMP_Bag_ScoutBag_NWU : IMP_Bag_ScoutBag_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\ScoutBag\data\ScoutBag_NWU.paa"};
	};
	
	class IMP_Bag_ScoutBag_MARPAT : IMP_Bag_ScoutBag_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\ScoutBag\data\ScoutBag_MARPAT.paa"};
	};
};