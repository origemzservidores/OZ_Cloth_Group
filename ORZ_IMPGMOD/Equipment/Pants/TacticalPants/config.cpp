class CfgPatches 
{
	class IMP_Pants_Tactical
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
	
	class IMP_Pants_Tactical_ColorBase : Clothing 
	{
		scope = 0;
		RankLevel = 1;
		displayName = "$STR_IMP_MilJogger";
		descriptionShort = "$STR_IMP_MilJoggerD";
		model = "IMPGMOD\Equipment\Pants\TacticalPants\models\TacticalPants_g.p3d";
		ContinuouActions[] = {AT_WRING_CLOTHES};
		inventorySlot[] = {"Legs"};
		simulation = "clothing";
		itemInfo[] = {"Clothing", "Legs"};
		itemSize[] = {4, 4};
		itemsCargoSize[] = {6, 7};
		weight = 530;
		ragQuantity = 3;
		varWetMax = 1.0;
		heatIsolation = 0.8;
		repairableWithKits[] = {5, 2};
		repairCosts[] = {30.0, 25.0};
		quickBarBonus = 1;
		hiddenSelections[] = {"camoflage", "personality"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Pants\TacticalPants\data\tacticalpants_Green.paa"};
		hiddenSelectionsMaterials[] = {"IMPGMOD\Equipment\Pants\TacticalPants\data\tacticalpants.rvmat"};
		
		class ClothingTypes 
		{
			male = "IMPGMOD\Equipment\Pants\TacticalPants\models\TacticalPants_m.p3d";
			female = "IMPGMOD\Equipment\Pants\TacticalPants\models\TacticalPants_f.p3d";
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
						{1.0,{"IMPGMOD\Equipment\Pants\TacticalPants\data\tacticalpants.rvmat"}},
						{0.7,{"IMPGMOD\Equipment\Pants\TacticalPants\data\tacticalpants.rvmat"}},
						{0.5,{"IMPGMOD\Equipment\Pants\TacticalPants\data\tacticalpants_damage.rvmat"}},
						{0.3,{"IMPGMOD\Equipment\Pants\TacticalPants\data\tacticalpants_damage.rvmat"}},
						{0.0,{"IMPGMOD\Equipment\Pants\TacticalPants\data\tacticalpants_destruct.rvmat"}}
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
	
	class IMP_Pants_Tactical_Black : IMP_Pants_Tactical_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Pants\TacticalPants\data\tacticalpants_Black.paa"};
	};
	class IMP_Pants_Tactical_Green : IMP_Pants_Tactical_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Pants\TacticalPants\data\tacticalpants_Green.paa"};
	};
	class IMP_Pants_Tactical_Tan : IMP_Pants_Tactical_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Pants\TacticalPants\data\tacticalpants_Tan.paa"};
	};
	class IMP_Pants_Tactical_UCP : IMP_Pants_Tactical_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Pants\TacticalPants\data\tacticalpants_UCP.paa"};
	};
	class IMP_Pants_Tactical_NWU : IMP_Pants_Tactical_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Pants\TacticalPants\data\tacticalpants_NWU.paa"};
	};
	class IMP_Pants_Tactical_EMR : IMP_Pants_Tactical_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Pants\TacticalPants\data\tacticalpants_EMR.paa"};
	};
	class IMP_Pants_Tactical_MARPAT : IMP_Pants_Tactical_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Pants\TacticalPants\data\tacticalpants_MARPAT.paa"};
	};
};