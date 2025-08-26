class CfgPatches 
{
	class IMP_Bag_BigMilitaryBag 
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
	
	class IMP_Bag_BigMilitaryBag_ColorBase : Clothing 
	{
		scope = 0;
		RankLevel = 4;
		displayName = "$STR_IMP_BigMilitaryBag";
		descriptionShort = "$STR_IMP_Bag_Dscr";
		model = "IMPGMOD\Equipment\Backpacks\BigBackpack\models\combatBackpack_G.p3d";
		inventorySlot[] = {"Back", "Backpack1"};
		itemInfo[] = {"Clothing", "Back"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemSize[] = {6, 7};
		itemsCargoSize[] = {10, 10};
		weight = 5600;
		quickBarBonus = 4;
		varWetMax=0.048999999;
		heatIsolation=1;
		repairableWithKits[] = {5, 3};
		repairCosts[] = {30, 25};
		canBeDigged = 0;
		randomQuantity = 4;
		soundAttType = "Outdoor";
		hiddenSelections[] = {"camoflage"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\BigBackpack\data\combatBackpack_Black_co.paa"};
		attachments[] = {"PatchSmall", "NBCBag", "Canteen"};
		
		class ClothingTypes 
		{
			male = "IMPGMOD\Equipment\Backpacks\BigBackpack\models\combatBackpack_M.p3d";
			female = "IMPGMOD\Equipment\Backpacks\BigBackpack\models\combatBackpack_M.p3d";
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
						{1, {"IMPGMOD\Equipment\Backpacks\BigBackpack\data\CombatBackpack.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Backpacks\BigBackpack\data\CombatBackpack.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Backpacks\BigBackpack\data\CombatBackpack_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Backpacks\BigBackpack\data\CombatBackpack_damage.rvmat"}}, 
						{0, {"IMPGMOD\Equipment\Backpacks\BigBackpack\data\CombatBackpack_destruct.rvmat"}}
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
	
	class IMP_Bag_BigMilitaryBag_Black : IMP_Bag_BigMilitaryBag_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\BigBackpack\data\combatBackpack_Black_co.paa"};
	};
	
	class IMP_Bag_BigMilitaryBag_Tan : IMP_Bag_BigMilitaryBag_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\BigBackpack\data\CombatBackpack_Tan_co.paa"};
	};
	
	class IMP_Bag_BigMilitaryBag_Green : IMP_Bag_BigMilitaryBag_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\BigBackpack\data\CombatBackpack_Green_co.paa"};
	};
	
	class IMP_Bag_BigMilitaryBag_Green_Donate : IMP_Bag_BigMilitaryBag_ColorBase 
	{
		scope = 2;
		RankLevel = 1;
		itemsCargoSize[] = {10, 24};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\BigBackpack\data\CombatBackpack_Green_co.paa"};
	};
	
	class IMP_Bag_BigMilitaryBag_NWU : IMP_Bag_BigMilitaryBag_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\BigBackpack\data\CombatBackpack_NWU.paa"};
	};
	
	class IMP_Bag_BigMilitaryBag_EMR : IMP_Bag_BigMilitaryBag_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\BigBackpack\data\CombatBackpack_EMR.paa"};
	};
	
	class IMP_Bag_BigMilitaryBag_UCP : IMP_Bag_BigMilitaryBag_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\BigBackpack\data\CombatBackpack_UCP.paa"};
	};
	
	class IMP_Bag_BigMilitaryBag_MARPAT : IMP_Bag_BigMilitaryBag_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\BigBackpack\data\CombatBackpack_MARPAT.paa"};
	};
};