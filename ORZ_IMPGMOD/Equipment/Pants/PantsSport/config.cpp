class CfgPatches 
{
	class IMP_Pants_Sport
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
	
	class IMP_Pants_Sport_ColorBase : Clothing 
	{
		scope = 0;
		displayName = "$STR_IMP_SportPants";
		descriptionShort = "Abibas";
		model = "IMPGMOD\Equipment\Pants\PantsSport\models\PantsSport_g.p3d";
		inventorySlot[] = {"Legs"};
		simulation = "clothing";
		itemInfo[] = {"Clothing", "Legs"};
		itemSize[] = {4, 4};
		itemsCargoSize[] = {6, 5};
		weight = 530;
		ragQuantity = 3;
		varWetMax = 1.0;
		heatIsolation = 0.8;
		repairableWithKits[] = {5, 2};
		repairCosts[] = {30.0, 25.0};
		quickBarBonus = 1;
		hiddenSelections[] = {"camoflage", "personality"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Pants\PantsSport\data\PantsSport_co.paa"};
		hiddenSelectionsMaterials[] = {"IMPGMOD\Equipment\Pants\PantsSport\data\PantsSport.rvmat"};
		
		class ClothingTypes 
		{
			male = "IMPGMOD\Equipment\Pants\PantsSport\models\PantsSport_m.p3d";
			female = "IMPGMOD\Equipment\Pants\PantsSport\models\PantsSport_f.p3d";
		};
		
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0,{"IMPGMOD\Equipment\Pants\PantsSport\data\PantsSport.rvmat"}},
						{0.7,{"IMPGMOD\Equipment\Pants\PantsSport\data\PantsSport.rvmat"}},
						{0.5,{"IMPGMOD\Equipment\Pants\PantsSport\data\PantsSport_damage.rvmat"}},
						{0.3,{"IMPGMOD\Equipment\Pants\PantsSport\data\PantsSport_damage.rvmat"}},
						{0.0,{"IMPGMOD\Equipment\Pants\PantsSport\data\PantsSport_destruct.rvmat"}}
					};
				};
			};
			
			class GlobalArmor 
			{
				class Melee 
				{
					class Health 
					{
						damage = 0.7;
					};
					
					class Blood 
					{
						damage = 0.7;
					};
					
					class Shock 
					{
						damage = 0.7;
					};
				};
				
				class Infected 
				{
					class Health 
					{
						damage = 0.7;
					};
					
					class Blood 
					{
						damage = 0.7;
					};
					
					class Shock 
					{
						damage = 0.7;
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
	
	class IMP_Pants_Sport_Black : IMP_Pants_Sport_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Pants\PantsSport\data\PantsSport_co.paa"};
	};
};