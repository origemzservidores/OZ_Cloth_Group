class CfgPatches 
{
	class IMP_Bag_F4Terminator 
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
	
	class IMP_Bag_F4Terminator_ColorBase : Clothing 
	{
		scope = 0;
		RankLevel = 3;
		displayName = "$STR_IMP_F4Terminator";
		descriptionShort = "$STR_IMP_Bag_Dscr";
		model = "\IMPGMOD\Equipment\Backpacks\F4Terminator\models\F4Terminator_g.p3d";
		inventorySlot[] = {"Back", "Backpack1"};
		itemInfo[] = {"Clothing", "Back"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemSize[] = {6, 7};
		quickBarBonus = 5;
		itemsCargoSize[] = {10, 12};
		weight = 2300;
		varWetMax=0.048999999;
		heatIsolation=0.5;
		repairableWithKits[] = {5, 3};
		repairCosts[] = {30.0, 25.0};
		soundAttType = "Outdoor";
		randomQuantity = 4;
		canBeDigged = 0;
		attachments[] = {};
		hiddenSelections[] = {"camoflage"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\F4Terminator\data\F4Terminator_co.paa"};
		
		class ClothingTypes 
		{
			male = "\IMPGMOD\Equipment\Backpacks\F4Terminator\models\F4Terminator_m.p3d";
			female = "\IMPGMOD\Equipment\Backpacks\F4Terminator\models\F4Terminator_m.p3d";
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
						{1, {"IMPGMOD\Equipment\Backpacks\F4Terminator\data\F4Terminator.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Backpacks\F4Terminator\data\F4Terminator.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Backpacks\F4Terminator\data\F4Terminator_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Backpacks\F4Terminator\data\F4Terminator_damage.rvmat"}}, 
						{0, {"IMPGMOD\Equipment\Backpacks\F4Terminator\data\F4Terminator_destruct.rvmat"}}
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
	
	class IMP_Bag_F4Terminator : IMP_Bag_F4Terminator_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\F4Terminator\data\F4Terminator_co.paa"};
	};
};
