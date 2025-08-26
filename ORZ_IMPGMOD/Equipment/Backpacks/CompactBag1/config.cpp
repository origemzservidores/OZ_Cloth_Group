class CfgPatches 
{
	class IMP_Bag_CompactBag 
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
	
	class IMP_Bag_CompactBag_ColorBase : Clothing 
	{
		scope = 0;
		RankLevel = 1;
		displayName = "$STR_IMP_CompactBag";
		descriptionShort = "$STR_IMP_Bag_Dscr";
		model = "IMPGMOD\Equipment\Backpacks\CompactBag1\models\CompactBag_g.p3d";
		attachments[] = {"PatchSmall", "Chemlight","PersonalRadio"};
		rotationFlags=16;
		inventorySlot[] = {"Back", "Backpack1"};
		itemInfo[] = {"Clothing", "Back"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemSize[] = {6, 7};
		quickBarBonus = 2;
		itemsCargoSize[] = {7, 9};
		weight = 1300;
		varWetMax=0.048999999;
		heatIsolation=0.5;
		repairableWithKits[] = {5, 3};
		repairCosts[] = {30.0, 25.0};
		soundAttType = "Outdoor";
		randomQuantity = 4;
		canBeDigged = 0;
		hiddenSelections[] = {"camoflage"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\CompactBag1\data\Compact_1_co.paa"};
		
		class ClothingTypes 
		{
			male = "IMPGMOD\Equipment\Backpacks\CompactBag1\models\CompactBag.p3d";
			female = "IMPGMOD\Equipment\Backpacks\CompactBag1\models\CompactBag.p3d";
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
						{1, {"IMPGMOD\Equipment\Backpacks\CompactBag1\data\Compact_1.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Backpacks\CompactBag1\data\Compact_1.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Backpacks\CompactBag1\data\Compact_1_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Backpacks\CompactBag1\data\Compact_1_damage.rvmat"}}, 
						{0, {"IMPGMOD\Equipment\Backpacks\CompactBag1\data\Compact_1_destruct.rvmat"}}
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
	
	class IMP_Bag_CompactBag_Green : IMP_Bag_CompactBag_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\CompactBag1\data\Compact_1_co.paa"};
	};
	
	class IMP_Bag_CompactBag_Black : IMP_Bag_CompactBag_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\CompactBag1\data\Compact_1_co_Black.paa"};
	};
	
	class IMP_Bag_CompactBag_Tan : IMP_Bag_CompactBag_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\CompactBag1\data\Compact_1_co_Tan.paa"};
	};
	
	class IMP_Bag_CompactBag_NWU : IMP_Bag_CompactBag_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\CompactBag1\data\Compact_1_NWU.paa"};
	};
	
	class IMP_Bag_CompactBag_EMR : IMP_Bag_CompactBag_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\CompactBag1\data\Compact_1_EMR.paa"};
	};
	
	class IMP_Bag_CompactBag_UCP : IMP_Bag_CompactBag_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\CompactBag1\data\Compact_1_UCP.paa"};
	};
	
	class IMP_Bag_CompactBag_MARPAT : IMP_Bag_CompactBag_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\CompactBag1\data\Compact_1_MARPAT.paa"};
	};
};
