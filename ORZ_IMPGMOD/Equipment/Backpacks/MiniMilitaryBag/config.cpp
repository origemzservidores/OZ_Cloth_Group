class CfgPatches 
{
	class IMP_Bag_MiniMilitaryBag 
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
	
	class IMP_Bag_MiniMilitaryBag_ColorBase : Clothing 
	{
		scope = 0;
		RankLevel = 1;
		displayName = "$STR_IMP_MiniMilitaryBag";
		descriptionShort = "$STR_IMP_Bag_Dscr";
		model = "IMPGMOD\Equipment\Backpacks\MiniMilitaryBag\models\MiniMilitaryBag_g.p3d";
		attachments[] = {"PatchSmall", "TacticalBag1", "TacticalBag2", "Chemlight", "NBCBag", "PersonalRadio"};
		inventorySlot[] = {"Back", "Backpack1"};
		rotationFlags=16;
		itemInfo[] = {"Clothing", "Back"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemSize[] = {6, 7};
		quickBarBonus = 3;
		itemsCargoSize[] = {9, 9};
		weight = 2000;
		varWetMax=0.048999999;
		heatIsolation=0.5;
		repairableWithKits[] = {5, 3};
		repairCosts[] = {30.0, 25.0};
		soundAttType = "Outdoor";
		randomQuantity = 4;
		canBeDigged = 0;
		hiddenSelections[] = {"camoflage"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\MiniMilitaryBag\data\MiniMilitaryBag_Black_co.paa"};
		
		class ClothingTypes 
		{
			male = "IMPGMOD\Equipment\Backpacks\MiniMilitaryBag\models\MiniMilitaryBag_m.p3d";
			female = "IMPGMOD\Equipment\Backpacks\MiniMilitaryBag\models\MiniMilitaryBag_f.p3d";
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
						{1, {"IMPGMOD\Equipment\Backpacks\MiniMilitaryBag\data\MiniMilitaryBag.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Backpacks\MiniMilitaryBag\data\MiniMilitaryBag.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Backpacks\MiniMilitaryBag\data\MiniMilitaryBag_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Backpacks\MiniMilitaryBag\data\MiniMilitaryBag_damage.rvmat"}}, 
						{0, {"IMPGMOD\Equipment\Backpacks\MiniMilitaryBag\data\MiniMilitaryBag_destruct.rvmat"}}
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
	
	class IMP_Bag_MiniMilitaryBag_Black : IMP_Bag_MiniMilitaryBag_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\MiniMilitaryBag\data\MiniMilitaryBag_Black_co.paa"};
	};
	
	class IMP_Bag_MiniMilitaryBag_Green : IMP_Bag_MiniMilitaryBag_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\MiniMilitaryBag\data\MiniMilitaryBag_Green_co.paa"};
	};
	
	class IMP_Bag_MiniMilitaryBag_Tan : IMP_Bag_MiniMilitaryBag_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\MiniMilitaryBag\data\MiniMilitaryBag_Tan_co.paa"};
	};
	
	class IMP_Bag_MiniMilitaryBag_EMR : IMP_Bag_MiniMilitaryBag_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\MiniMilitaryBag\data\MiniMilitaryBag_EMR.paa"};
	};
	
	class IMP_Bag_MiniMilitaryBag_NWU : IMP_Bag_MiniMilitaryBag_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\MiniMilitaryBag\data\MiniMilitaryBag_NWU.paa"};
	};
	
	class IMP_Bag_MiniMilitaryBag_UCP : IMP_Bag_MiniMilitaryBag_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\MiniMilitaryBag\data\MiniMilitaryBag_UCP.paa"};
	};
	
	class IMP_Bag_MiniMilitaryBag_MARPAT : IMP_Bag_MiniMilitaryBag_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\MiniMilitaryBag\data\MiniMilitaryBag_MARPAT.paa"};
	};
};
