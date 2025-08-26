class CfgPatches 
{
	class IMP_Bag_BattleBag 
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
	
	class IMP_Bag_BattleBag_ColorBase : Clothing 
	{
		scope = 0;
		RankLevel = 2;
		displayName = "$STR_IMP_AssaultBag";
		descriptionShort = "$STR_IMP_Bag_Dscr";
		model = "IMPGMOD\Equipment\Backpacks\BattleBag\models\BattleBag_g.p3d";
		inventorySlot[] = {"Back", "Backpack1"};
		itemInfo[] = {"Clothing", "Back"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		rotationFlags = 16;
		itemSize[] = {6, 7};
		quickBarBonus = 3;
		itemsCargoSize[] = {9, 9};
		weight = 2500;
		varWetMax=0.048999999;
		heatIsolation=0.5;
		repairableWithKits[] = {5, 3};
		repairCosts[] = {30.0, 25.0};
		soundAttType = "Outdoor";
		randomQuantity = 4;
		canBeDigged = 0;
		attachments[] = {"PatchSmall", "TacticalBag1", "TacticalBag2", "Chemlight", "NBCBag", "PersonalRadio", "VestHolster"};
		
		class ClothingTypes 
		{
			male = "IMPGMOD\Equipment\Backpacks\BattleBag\models\BattleBag_m.p3d";
			female = "IMPGMOD\Equipment\Backpacks\BattleBag\models\BattleBag_f.p3d";
		};
		hiddenSelections[] = {"camoflage"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\BattleBag\data\BattleBag_black_co.paa"};
		hiddenSelectionsMaterials[] = {"IMPGMOD\Equipment\Backpacks\BattleBag\data\BattleBag.rvmat"};
		
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
						{1, {"IMPGMOD\Equipment\Backpacks\BattleBag\data\BattleBag.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Backpacks\BattleBag\data\BattleBag.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Backpacks\BattleBag\data\BattleBag_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Backpacks\BattleBag\data\BattleBag_damage.rvmat"}}, 
						{0, {"IMPGMOD\Equipment\Backpacks\BattleBag\data\BattleBag_destruct.rvmat"}}
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
	
	class IMP_Bag_BattleBag_Black : IMP_Bag_BattleBag_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\BattleBag\data\BattleBag_black_co.paa"};
	};
	
	class IMP_Bag_BattleBag_Green : IMP_Bag_BattleBag_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\BattleBag\data\BattleBag_green_co.paa"};
	};
	
	class IMP_Bag_BattleBag_Tan : IMP_Bag_BattleBag_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\BattleBag\data\BattleBag_tan_co.paa"};
	};
	
	class IMP_Bag_BattleBag_UCP : IMP_Bag_BattleBag_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\BattleBag\data\BattleBag_UCP.paa"};
	};
	
	class IMP_Bag_BattleBag_EMR : IMP_Bag_BattleBag_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\BattleBag\data\BattleBag_EMR.paa"};
	};
	
	class IMP_Bag_BattleBag_NWU : IMP_Bag_BattleBag_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\BattleBag\data\BattleBag_NWU.paa"};
	};
	
	class IMP_Bag_BattleBag_MARPAT : IMP_Bag_BattleBag_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\BattleBag\data\BattleBag_MARPAT.paa"};
	};
};
