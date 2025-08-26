class CfgPatches 
{
	class IMP_Belt_VX600 
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
	
	class IMP_Belt_VX600_ColorBase : Clothing 
	{
		scope = 0;
		RankLevel = 3;
		displayName = "$STR_IMP_BAGBELT";
		descriptionShort = "$STR_IMP_BAGBELTD";
		model = "\IMPGMOD\Equipment\Belts\VX600Belt\models\VX600_g.p3d";
		attachments[] = {};
		vehicleClass = "Clothing";
		simulation = "clothing";
		inventorySlot[] = {"Hips"};
		itemInfo[] = {"Clothing", "Hips"};
		itemSize[] = {5, 2};
		quickBarBonus=1;
		varWetMax=0.048999999;
		heatIsolation=0.5;
		itemsCargoSize[] = {6, 8};
		repairableWithKits[] = {5, 3};
		repairCosts[] = {30.0, 25.0};
		weight = 1000;
		lootCategory = "Crafted";
		hiddenSelections[] = {"camoflage"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Belts\VX600Belt\data\VX600_Black.paa"};
		
		class ClothingTypes 
		{
			male = "\IMPGMOD\Equipment\Belts\VX600Belt\models\VX600.p3d";
			female = "\IMPGMOD\Equipment\Belts\VX600Belt\models\VX600.p3d";
		};
		
		class DamageSystem 
		{
			class GlobalHealth 
			{
				class Health 
				{
					hitpoints = 500;
					healthLevels[] = 
					{
						{1, {"IMPGMOD\Equipment\Belts\VX600Belt\data\Belt.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Belts\VX600Belt\data\Belt.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Belts\VX600Belt\data\Belt_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Belts\VX600Belt\data\Belt_damage.rvmat"}}, 
						{0, {"IMPGMOD\Equipment\Belts\VX600Belt\data\Belt_destruct.rvmat"}}
					};
				};
			};
		};
		
		class AnimEvents 
		{
			class SoundWeapon 
			{
				class pickUpItem 
				{
					soundSet = "WorkingGloves_pickup_SoundSet";
					id = 797;
				};
				
				class drop 
				{
					soundset = "WorkingGloves_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	
	class IMP_Belt_VX600_Black : IMP_Belt_VX600_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Belts\VX600Belt\data\VX600_Black.paa"};
	};
	
	class IMP_Belt_VX600_Green : IMP_Belt_VX600_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Belts\VX600Belt\data\VX600_Green.paa"};
	};
	
	class IMP_Belt_VX600_Tan : IMP_Belt_VX600_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Belts\VX600Belt\data\VX600_Tan.paa"};
	};
	
	class IMP_Belt_VX600_NWU : IMP_Belt_VX600_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Belts\VX600Belt\data\VX600_NWU.paa"};
	};
	
	class IMP_Belt_VX600_EMR : IMP_Belt_VX600_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Belts\VX600Belt\data\VX600_EMR.paa"};
	};
	
	class IMP_Belt_VX600_UCP : IMP_Belt_VX600_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Belts\VX600Belt\data\VX600_UCP.paa"};
	};
	
	class IMP_Belt_VX600_MARPAT : IMP_Belt_VX600_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Belts\VX600Belt\data\VX600_MARPAT.paa"};
	};
};