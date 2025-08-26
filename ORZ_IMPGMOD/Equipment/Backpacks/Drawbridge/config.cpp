class CfgPatches 
{
	class IMP_Bag_DrawBridge 
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
	
	class IMP_Bag_DrawBridge_ColorBase : Clothing 
	{
		scope = 0;
		RankLevel = 2;
		displayName = "$STR_IMP_Hazard4DrawBridge";
		descriptionShort = "$STR_IMP_Bag_Dscr";
		model = "\IMPGMOD\Equipment\Backpacks\DrawBridge\models\DrawBridge_g.p3d";
		inventorySlot[] = {"Back", "Backpack1"};
		itemInfo[] = {"Clothing", "Back"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemSize[] = {6, 7};
		quickBarBonus = 3;
		itemsCargoSize[] = {9, 9};
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
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\DrawBridge\data\DrawBridge_co.paa"};
		
		class ClothingTypes 
		{
			male = "\IMPGMOD\Equipment\Backpacks\DrawBridge\models\DrawBridge_m.p3d";
			female = "\IMPGMOD\Equipment\Backpacks\DrawBridge\models\DrawBridge_m.p3d";
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
						{1, {"IMPGMOD\Equipment\Backpacks\DrawBridge\data\DrawBridge.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Backpacks\DrawBridge\data\DrawBridge.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Backpacks\DrawBridge\data\DrawBridge_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Backpacks\DrawBridge\data\DrawBridge_damage.rvmat"}}, 
						{0, {"IMPGMOD\Equipment\Backpacks\DrawBridge\data\DrawBridge_destruct.rvmat"}}
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
	
	class IMP_Bag_DrawBridge : IMP_Bag_DrawBridge_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\DrawBridge\data\DrawBridge_co.paa"};
	};
};
