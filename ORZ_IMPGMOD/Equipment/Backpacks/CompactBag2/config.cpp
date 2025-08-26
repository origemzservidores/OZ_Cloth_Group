class CfgPatches 
{
	class IMP_Bag_CompactBag2 
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
	
	class IMP_Bag_CompactBag2_ColorBase : Clothing 
	{
		scope = 0;
		RankLevel = 1;
		displayName = "$STR_IMP_CompactBag";
		descriptionShort = "$STR_IMP_Bag_Dscr";
		model = "IMPGMOD\Equipment\Backpacks\CompactBag2\models\Compact_2_g.p3d";
		attachments[] = {"PatchSmall", "NBCBag", "Shoulder40", "Canteen", "ifak_pouch", "TacticalBag1"};
		inventorySlot[] = {"Back", "Backpack1"};
		itemInfo[] = {"Clothing", "Back"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		rotationFlags=16;
		itemSize[] = {6, 7};
		quickBarBonus = 3;
		itemsCargoSize[] = {9, 9};
		weight = 1300;
		varWetMax=0.048999999;
		heatIsolation=0.5;
		repairableWithKits[] = {5, 3};
		repairCosts[] = {30.0, 25.0};
		soundAttType = "Outdoor";
		randomQuantity = 4;
		canBeDigged = 0;
		hiddenSelections[] = {"camoflage", "camoflage1"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\CompactBag2\data\Compact_2_co_Black.paa", "IMPGMOD\Equipment\Backpacks\CompactBag2\data\Compact_2_co_Details_Black.paa"};
		
		class ClothingTypes 
		{
			male = "IMPGMOD\Equipment\Backpacks\CompactBag2\models\Compact_2.p3d";
			female = "IMPGMOD\Equipment\Backpacks\CompactBag2\models\Compact_2.p3d";
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
						{1, {"IMPGMOD\Equipment\Backpacks\CompactBag2\data\Compact_2.rvmat","IMPGMOD\Equipment\Backpacks\CompactBag2\data\Compact_2_Detail.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Backpacks\CompactBag2\data\Compact_2.rvmat", "IMPGMOD\Equipment\Backpacks\CompactBag2\data\Compact_2_Detail.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Backpacks\CompactBag2\data\Compact_2_Detail_damage.rvmat", "IMPGMOD\Equipment\Backpacks\CompactBag2\data\Compact_2_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Backpacks\CompactBag2\data\Compact_2_damage.rvmat", "IMPGMOD\Equipment\Backpacks\CompactBag2\data\Compact_2_Detail_damage.rvmat"}}, 
						{0, {"IMPGMOD\Equipment\Backpacks\CompactBag2\data\Compact_2_destruct.rvmat", "IMPGMOD\Equipment\Backpacks\CompactBag2\data\Compact_2_Detail_destruct.rvmat"}}
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
	
	class IMP_Bag_CompactBag2_Green : IMP_Bag_CompactBag2_ColorBase {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\CompactBag2\data\Compact_2_co_Olive.paa", "IMPGMOD\Equipment\Backpacks\CompactBag2\data\Compact_2_co_Details_Tan.paa"};
	};
	
	class IMP_Bag_CompactBag2_Black : IMP_Bag_CompactBag2_ColorBase {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\CompactBag2\data\Compact_2_co_Black.paa", "IMPGMOD\Equipment\Backpacks\CompactBag2\data\Compact_2_co_Details_Black.paa"};
	};
	
	class IMP_Bag_CompactBag2_Tan : IMP_Bag_CompactBag2_ColorBase {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\CompactBag2\data\Compact_2_co_Tan.paa", "IMPGMOD\Equipment\Backpacks\CompactBag2\data\Compact_2_co_Details_Tan.paa"};
	};
	
	class IMP_Bag_CompactBag2_UCP : IMP_Bag_CompactBag2_ColorBase {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\CompactBag2\data\Compact_2_co_UCP.paa", "IMPGMOD\Equipment\Backpacks\CompactBag2\data\Compact_2_co_Details_Black.paa"};
	};
	
	class IMP_Bag_CompactBag2_EMR : IMP_Bag_CompactBag2_ColorBase {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\CompactBag2\data\Compact_2_co_EMR.paa", "IMPGMOD\Equipment\Backpacks\CompactBag2\data\Compact_2_co_Details_Black.paa"};
	};
	
	class IMP_Bag_CompactBag2_NWU : IMP_Bag_CompactBag2_ColorBase {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\CompactBag2\data\Compact_2_co_NWU.paa", "IMPGMOD\Equipment\Backpacks\CompactBag2\data\Compact_2_co_Details_Black.paa"};
	};
	
	class IMP_Bag_CompactBag2_MARPAT : IMP_Bag_CompactBag2_ColorBase {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\CompactBag2\data\Compact_2_co_MARPAT.paa", "IMPGMOD\Equipment\Backpacks\CompactBag2\data\Compact_2_co_Details_Black.paa"};
	};
};
