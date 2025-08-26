class CfgPatches 
{
	class IMP_Bag_MLTMilitary 
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
	
	class IMP_Bag_MLTMilitary_ColorBase : Clothing 
	{
		scope = 0;
		RankLevel = 1;
		displayName = "$STR_IMP_MLTB";
		descriptionShort = "$STR_IMP_Bag_Dscr";
		model = "\IMPGMOD\Equipment\Backpacks\MLTMilitaryBag\models\MLT_Military_Backpack_g.p3d";
		attachments[] = {"PatchSmall", "Shoulder40"};
		inventorySlot[] = {"Back", "Backpack1"};
		itemInfo[] = {"Clothing", "Back"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		rotationFlags=16;
		itemSize[] = {6, 7};
		quickBarBonus = 2;
		itemsCargoSize[] = {7, 9};
		weight = 1800;
		varWetMax=0.048999999;
		heatIsolation=0.5;
		repairableWithKits[] = {5, 3};
		repairCosts[] = {30.0, 25.0};
		soundAttType = "Outdoor";
		randomQuantity = 4;
		canBeDigged = 0;
		hiddenSelections[] = {"camoflage"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\MLTMilitaryBag\data\TX_Bag_01a_ALB.paa"};
		
		class ClothingTypes 
		{
			male = "\IMPGMOD\Equipment\Backpacks\MLTMilitaryBag\models\MLT_Military_Backpack.p3d";
			female = "\IMPGMOD\Equipment\Backpacks\MLTMilitaryBag\models\MLT_Military_Backpack.p3d";
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
						{1, {"IMPGMOD\Equipment\Backpacks\MLTMilitaryBag\data\TX_Bag_01a_ALB.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Backpacks\MLTMilitaryBag\data\TX_Bag_01a_ALB.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Backpacks\MLTMilitaryBag\data\TX_Bag_01a_ALB_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Backpacks\MLTMilitaryBag\data\TX_Bag_01a_ALB_damage.rvmat"}}, 
						{0, {"IMPGMOD\Equipment\Backpacks\MLTMilitaryBag\data\TX_Bag_01a_ALB_destruct.rvmat"}}
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
	
	class IMP_Bag_MLTMilitary	: IMP_Bag_MLTMilitary_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\MLTMilitaryBag\data\TX_Bag_01a_ALB.paa"};
	};
};
