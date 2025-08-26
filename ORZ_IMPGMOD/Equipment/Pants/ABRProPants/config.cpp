class CfgPatches 
{
	class IMP_Pants_ABR
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
	
	class IMP_Pants_ABR_ColorBase : Clothing 
	{
		scope = 0;
		RankLevel = 1;
		displayName = "$STR_IMP_ABR";
		descriptionShort = "$STR_IMP_ABRD";
		model = "IMPGMOD\Equipment\Pants\ABRProPants\models\ABR_g.p3d";
		ContinuouActions[] = {AT_WRING_CLOTHES};
		inventorySlot[] = {"Legs"};
		simulation = "clothing";
		itemInfo[] = {"Clothing", "Legs"};
		itemSize[] = {4, 3};
		itemsCargoSize[] = {6, 7};
		weight = 800;
		ragQuantity = 3;
		varWetMax = 1.0;
		heatIsolation = 0.8;
		repairableWithKits[] = {5, 2};
		repairCosts[] = {30.0, 25.0};
		quickBarBonus = 1;
		hiddenSelections[] = {"camoflage"};
		
		class ClothingTypes 
		{
			male = "IMPGMOD\Equipment\Pants\ABRProPants\models\ABR_m.p3d";
			female = "IMPGMOD\Equipment\Pants\ABRProPants\models\ABR_f.p3d";
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
						{1.0,{"IMPGMOD\Equipment\Pants\ABRProPants\data\ABR.rvmat"}},
						{0.7,{"IMPGMOD\Equipment\Pants\ABRProPants\data\ABR.rvmat"}},
						{0.5,{"IMPGMOD\Equipment\Pants\ABRProPants\data\ABR_damage.rvmat"}},
						{0.3,{"IMPGMOD\Equipment\Pants\ABRProPants\data\ABR_damage.rvmat"}},
						{0.0,{"IMPGMOD\Equipment\Pants\ABRProPants\data\ABR_destruct.rvmat"}}
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
	
	class IMP_Pants_ABR_Black : IMP_Pants_ABR_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Pants\ABRProPants\data\ABR_Black_co.paa"};
	};
	class IMP_Pants_ABR_Green : IMP_Pants_ABR_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Pants\ABRProPants\data\ABR_Green_co.paa"};
	};
	class IMP_Pants_ABR_Tan : IMP_Pants_ABR_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Pants\ABRProPants\data\ABR_Tan_co.paa"};
	};
	class IMP_Pants_ABR_UCP : IMP_Pants_ABR_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Pants\ABRProPants\data\ABR_UCP.paa"};
	};
	class IMP_Pants_ABR_NWU : IMP_Pants_ABR_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Pants\ABRProPants\data\ABR_NWU.paa"};
	};
	class IMP_Pants_ABR_EMR : IMP_Pants_ABR_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Pants\ABRProPants\data\ABR_EMR.paa"};
	};
	class IMP_Pants_ABR_MARPAT : IMP_Pants_ABR_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Pants\ABRProPants\data\ABR_MARPAT.paa"};
	};
};