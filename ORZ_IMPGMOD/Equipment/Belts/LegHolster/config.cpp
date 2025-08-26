class CfgPatches 
{
	class IMP_Belt_LegHolster 
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
	class Man;
	
	class IMP_Belt_LegHolster_ColorBase : Clothing 
	{
		scope = 0;
		RankLevel = 1;
		displayName = "$STR_IMP_LegHolster";
		descriptionShort = "$STR_IMP_LegHolsterD";
		model = "\IMPGMOD\Equipment\Belts\LegHolster\models\LegHolster_g.p3d";
		attachments[] = {"Pistol"};
		vehicleClass = "Clothing";
		simulation = "clothing";
		inventorySlot[] = {"Hips"};
		itemInfo[] = {"Clothing", "Hips"};
		itemSize[] = {4, 4};
		quickBarBonus=1;
		itemsCargoSize[] = {6, 6};
		repairableWithKits[] = {5, 3};
		repairCosts[] = {30.0, 25.0};
		weight = 800;
		varWetMax=0.048999999;
		heatIsolation=0.5;
		lootCategory = "Crafted";
		hiddenSelections[] = {"camoflage"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Belts\LegHolster\data\LegHolster_NWU.paa"};
		
		class ClothingTypes 
		{
			male = "\IMPGMOD\Equipment\Belts\LegHolster\models\LegHolster_m.p3d";
			female = "\IMPGMOD\Equipment\Belts\LegHolster\models\LegHolster_f.p3d";
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
						{1, {"IMPGMOD\Equipment\Belts\LegHolster\data\LegHolster.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Belts\LegHolster\data\LegHolster.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Belts\LegHolster\data\LegHolster_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Belts\LegHolster\data\LegHolster_damage.rvmat"}}, 
						{0, {"IMPGMOD\Equipment\Belts\LegHolster\data\LegHolster_destruct.rvmat"}}
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
	
	class IMP_Belt_LegHolster_NWU : IMP_Belt_LegHolster_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Belts\LegHolster\data\LegHolster_NWU.paa"};
	};
	
	class IMP_Belt_LegHolster_EMR : IMP_Belt_LegHolster_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Belts\LegHolster\data\LegHolster_EMR.paa"};
	};
	
	class IMP_Belt_LegHolster_MARPAT : IMP_Belt_LegHolster_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Belts\LegHolster\data\LegHolster_MARPAT.paa"};
	};
	
	class IMP_Belt_LegHolster_UCP : IMP_Belt_LegHolster_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Belts\LegHolster\data\LegHolster_UCP.paa"};
	};
	
	class IMP_Belt_LegHolster_Black : IMP_Belt_LegHolster_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Belts\LegHolster\data\LegHolster_Black.paa"};
	};
	
	class IMP_Belt_LegHolster_Green : IMP_Belt_LegHolster_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Belts\LegHolster\data\LegHolster_Green.paa"};
	};
	
	class IMP_Belt_LegHolster_Tan : IMP_Belt_LegHolster_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Belts\LegHolster\data\LegHolster_Tan.paa"};
	};
};