class CfgPatches 
{
	class IMP_Pants_Gorka
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
	
	class IMP_Pants_Gorka_ColorBase : Clothing 
	{
		scope = 0;
		RankLevel = 2;
		displayName="$STR_CfgVehicles_GorkaPants_ColorBase0";
		descriptionShort="$STR_CfgVehicles_GorkaPants_ColorBase1";
		model = "IMPGMOD\Equipment\Pants\GorkaPants\models\GorkaP_g.p3d";
		inventorySlot[] = {"Legs"};
		simulation = "clothing";
		itemInfo[] = {"Clothing", "Legs"};
		itemSize[] = {4, 4};
		itemsCargoSize[] = {6, 11};
		weight = 800;
		ragQuantity = 3;
		varWetMax = 1.0;
		heatIsolation = 0.8;
		repairableWithKits[] = {5, 2};
		repairCosts[] = {30.0, 25.0};
		quickBarBonus = 1;
		hiddenSelections[] = {"camoflage", "personality"};
		
		class ClothingTypes 
		{
			male = "IMPGMOD\Equipment\Pants\GorkaPants\models\GorkaP_m.p3d";
			female = "IMPGMOD\Equipment\Pants\GorkaPants\models\GorkaP_f.p3d";
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
						{1.0,{"IMPGMOD\Equipment\Pants\GorkaPants\data\GorkaP.rvmat"}},
						{0.7,{"IMPGMOD\Equipment\Pants\GorkaPants\data\GorkaP.rvmat"}},
						{0.5,{"IMPGMOD\Equipment\Pants\GorkaPants\data\GorkaP_damage.rvmat"}},
						{0.3,{"IMPGMOD\Equipment\Pants\GorkaPants\data\GorkaP_damage.rvmat"}},
						{0.0,{"IMPGMOD\Equipment\Pants\GorkaPants\data\GorkaP_destruct.rvmat"}}
					};
				};
			};
			
			class GlobalArmor 
			{
				class Melee 
				{
					class Health 
					{
						damage = 1;
					};
					class Blood 
					{
						damage = 1;
					};
					class Shock 
					{
						damage = 1;
					};
				};
				
				class Infected 
				{
					class Health 
					{
						damage = 1;
					};
					class Blood 
					{
						damage = 1;
					};
					class Shock 
					{
						damage = 1;
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
					soundSet = "Shirt_pickup_SoundSet";
					id = 797;
				};
				
				class drop 
				{
					soundset = "Shirt_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	
	class IMP_Pants_Gorka : IMP_Pants_Gorka_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Pants\GorkaPants\data\GorkaP_co.paa"};
	};
	
	class IMP_Pants_Gorka_Gray : IMP_Pants_Gorka_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Pants\GorkaPants\data\GorkaP_grey.paa"};
	};
};