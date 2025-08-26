class CfgPatches 
{
	class IMP_Bag_MilitaryBag 
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
	
	class IMP_Bag_MilitaryBag_ColorBase : Clothing 
	{
		scope = 0;
		RankLevel = 3;
		displayName = "$STR_IMP_MilitaryBag";
		model = "IMPGMOD\Equipment\Backpacks\MilitaryBag\models\MilitaryBag_G.p3d";
		descriptionShort = "$STR_IMP_Bag_Dscr";
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
		attachments[] = {"PatchSmall", "Canteen", "Shoulder40", "Chemlight", "NBCBag"};
		hiddenSelections[] = {"camoflage"};
		
		class ClothingTypes 
		{
			male = "IMPGMOD\Equipment\Backpacks\MilitaryBag\models\MilitaryBag_M.p3d";
			female = "IMPGMOD\Equipment\Backpacks\MilitaryBag\models\MilitaryBag_F.p3d";
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
						{1, {"IMPGMOD\Equipment\Backpacks\MilitaryBag\data\MilitaryBag.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Backpacks\MilitaryBag\data\MilitaryBag.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Backpacks\MilitaryBag\data\MilitaryBag_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Backpacks\MilitaryBag\data\MilitaryBag_damage.rvmat"}}, 
						{0, {"IMPGMOD\Equipment\Backpacks\MilitaryBag\data\MilitaryBag_destruct.rvmat"}}
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
	
	class IMP_Bag_MilitaryBag_Black : IMP_Bag_MilitaryBag_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\MilitaryBag\data\MilitaryBag_Black_co.paa"};
	};
	
	class IMP_Bag_MilitaryBag_Green : IMP_Bag_MilitaryBag_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\MilitaryBag\data\MilitaryBag_Green_co.paa"};
	};
	
	class IMP_Bag_MilitaryBag_Tan : IMP_Bag_MilitaryBag_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\MilitaryBag\data\MilitaryBag_Tan_co.paa"};
	};
	
	class IMP_Bag_MilitaryBag_EMR : IMP_Bag_MilitaryBag_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\MilitaryBag\data\MilitaryBag_EMR.paa"};
	};
	
	class IMP_Bag_MilitaryBag_NWU : IMP_Bag_MilitaryBag_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\MilitaryBag\data\MilitaryBag_NWU.paa"};
	};
	
	class IMP_Bag_MilitaryBag_UCP : IMP_Bag_MilitaryBag_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\MilitaryBag\data\MilitaryBag_UCP.paa"};
	};
	
	class IMP_Bag_MilitaryBag_MARPAT : IMP_Bag_MilitaryBag_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\MilitaryBag\data\MilitaryBag_MARPAT.paa"};
	};
};
