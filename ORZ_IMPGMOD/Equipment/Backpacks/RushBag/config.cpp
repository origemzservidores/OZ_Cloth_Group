class CfgPatches 
{
	class IMP_Bag_RushBag 
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
	
	class IMP_Bag_RushBag_ColorBase : Clothing 
	{
		scope = 0;
		RankLevel = 3;
		displayName = "$STR_IMP_Rush";
		descriptionShort = "$STR_IMP_Bag_Dscr";
		model = "IMPGMOD\Equipment\Backpacks\RushBag\models\RushBag_g.p3d";
		inventorySlot[] = {"Back", "Backpack1"};
		itemInfo[] = {"Clothing", "Back"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemSize[] = {6, 7};
		quickBarBonus = 3;
		itemsCargoSize[] = {9, 9};
		weight = 2600;
		varWetMax=0.048999999;
		heatIsolation=0.5;
		repairableWithKits[] = {5, 3};
		repairCosts[] = {30.0, 25.0};
		soundAttType = "Outdoor";
		randomQuantity = 4;
		canBeDigged = 0;
		attachments[] = {"PatchSmall", };
		hiddenSelections[] = {"camoflage"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\RushBag\data\Rush_Black.paa"};
		
		class ClothingTypes 
		{
			male = "IMPGMOD\Equipment\Backpacks\RushBag\models\RushBag.p3d";
			female = "IMPGMOD\Equipment\Backpacks\RushBag\models\RushBag.p3d";
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
						{1, {"IMPGMOD\Equipment\Backpacks\RushBag\data\RushBag.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Backpacks\RushBag\data\RushBag.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Backpacks\RushBag\data\RushBag_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Backpacks\RushBag\data\RushBag_damage.rvmat"}}, 
						{0, {"IMPGMOD\Equipment\Backpacks\RushBag\data\RushBag_destruct.rvmat"}}
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
	
	class IMP_Bag_RushBag_Black : IMP_Bag_RushBag_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\RushBag\data\Rush_Black.paa"};
	};
	
	class IMP_Bag_RushBag_Green : IMP_Bag_RushBag_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\RushBag\data\Rush_Green.paa"};
	};
	
	class IMP_Bag_RushBag_Tan : IMP_Bag_RushBag_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\RushBag\data\Rush_Tan.paa"};
	};
	
	class IMP_Bag_RushBag_EMR : IMP_Bag_RushBag_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\RushBag\data\Rush_EMR.paa"};
	};
	
	class IMP_Bag_RushBag_UCP : IMP_Bag_RushBag_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\RushBag\data\Rush_UCP.paa"};
	};
	
	class IMP_Bag_RushBag_NWU : IMP_Bag_RushBag_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\RushBag\data\Rush_NWU.paa"};
	};
	
	class IMP_Bag_RushBag_MARPAT : IMP_Bag_RushBag_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\RushBag\data\Rush_MARPAT.paa"};
	};
};