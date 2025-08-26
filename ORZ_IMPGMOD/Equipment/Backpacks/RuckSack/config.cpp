class CfgPatches 
{
	class IMP_Bag_RuckSack 
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
	
	class IMP_Bag_RuckSack_ColorBase : Clothing 
	{
		scope = 0;
		RankLevel = 4;
		displayName = "$STR_IMP_RuckSack";
		descriptionShort = "$STR_IMP_Bag_Dscr";
		model = "IMPGMOD\Equipment\Backpacks\RuckSack\models\Rucksack_g.p3d";
		inventorySlot[] = {"Back", "Backpack1"};
		itemInfo[] = {"Clothing", "Back"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemSize[] = {6, 7};
		quickBarBonus = 5;
		itemsCargoSize[] = {10, 12};
		weight = 5600;
		heatIsolation=1;
		varWetMax=0.249;
		repairableWithKits[] = {5, 3};
		repairCosts[] = {30.0, 25.0};
		soundAttType = "Outdoor";
		randomQuantity = 4;
		canBeDigged = 0;
		attachments[] = {"PatchSmall", };
		hiddenSelections[] = {"camoflage"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\RuckSack\data\Rucksack_co_Black.paa"};
		
		class ClothingTypes 
		{
			male = "IMPGMOD\Equipment\Backpacks\RuckSack\models\Rucksack.p3d";
			female = "IMPGMOD\Equipment\Backpacks\RuckSack\models\Rucksack.p3d";
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
						{1, {"IMPGMOD\Equipment\Backpacks\RuckSack\data\Rucksack.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Backpacks\RuckSack\data\Rucksack.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Backpacks\RuckSack\data\Rucksack_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Backpacks\RuckSack\data\Rucksack_damage.rvmat"}}, 
						{0, {"IMPGMOD\Equipment\Backpacks\RuckSack\data\Rucksack_destruct.rvmat"}}
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
	
	class IMP_Bag_RuckSack_Black : IMP_Bag_RuckSack_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\RuckSack\data\Rucksack_co_Black.paa"};
	};
	
	class IMP_Bag_RuckSack_Tan : IMP_Bag_RuckSack_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\RuckSack\data\Rucksack_co_Tan.paa"};
	};
	
	class IMP_Bag_RuckSack_Green : IMP_Bag_RuckSack_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\RuckSack\data\Rucksack_co_Green.paa"};
	};
	
	class IMP_Bag_RuckSack_EMR : IMP_Bag_RuckSack_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\RuckSack\data\Rucksack_co_EMR.paa"};
	};
	
	class IMP_Bag_RuckSack_NWU : IMP_Bag_RuckSack_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\RuckSack\data\Rucksack_co_NWU.paa"};
	};
	
	class IMP_Bag_RuckSack_UCP : IMP_Bag_RuckSack_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\RuckSack\data\Rucksack_co_UCP.paa"};
	};
	
	class IMP_Bag_RuckSack_MARPAT : IMP_Bag_RuckSack_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\RuckSack\data\Rucksack_co_MARPAT.paa"};
	};
};