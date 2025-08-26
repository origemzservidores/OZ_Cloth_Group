class CfgPatches 
{
	class IMP_Bag_Ataka3 
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
	
	class IMP_Bag_Ataka3_ColorBase : Clothing 
	{
		scope = 0;
		RankLevel = 3;
		displayName = "$STR_IMP_Ataka3";
		descriptionShort = "$STR_IMP_Bag_Dscr";
		model = "\IMPGMOD\Equipment\Backpacks\Ataka3\models\ataka3_g.p3d";
		quickBarBonus=2;
		inventorySlot[] = {"Back", "Backpack1"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing", "Back"};
		rotationFlags = 16;
		itemSize[] = {6, 7};
		itemsCargoSize[] = {7, 9};
		weight = 3400;
		varWetMax=0.048999999;
		heatIsolation=0.5;
		repairableWithKits[] = {5, 3};
		repairCosts[] = {30, 25};
		canBeDigged = 0;
		randomQuantity = 4;
		soundAttType = "Outdoor";
		attachments[] = {"PatchSmall", "ataka3bag"};
		hiddenSelections[] = {"camoflage"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\ataka3\data\ataka3_co.paa"};
		hiddenSelectionsMaterials[] = {"IMPGMOD\Equipment\Backpacks\ataka3\data\Ataka3.rvmat"};
		
		class ClothingTypes 
		{
			male = "\IMPGMOD\Equipment\Backpacks\Ataka3\models\ataka3_m.p3d";
			female = "\IMPGMOD\Equipment\Backpacks\Ataka3\models\ataka3_m.p3d";
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
						{1, {"IMPGMOD\Equipment\Backpacks\Ataka3\data\Ataka3.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Backpacks\Ataka3\data\ataka3.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Backpacks\Ataka3\data\ataka3_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Backpacks\Ataka3\data\ataka3_damage.rvmat"}}, 
						{0, {"IMPGMOD\Equipment\Backpacks\Ataka3\data\ataka3_destruct.rvmat"}}
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

	class IMP_Bag_Ataka3 : IMP_Bag_Ataka3_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\IMPGMOD\Equipment\Backpacks\Ataka3\data\ataka3_co.paa"};
	};
};

class CfgSlots 
{	
	class Slot_ataka3bag 
	{
		name = "ataka3bag";
		displayName = "$STR_IMP_Ataka3P";
		modGhostIcon = "set:Slots image:ataka3bag";
	};
};