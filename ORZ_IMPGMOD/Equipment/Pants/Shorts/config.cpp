class CfgPatches 
{
	class IMP_Pants_Shorts
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
	
	class IMP_Pants_Shorts_ColorBase : Clothing 
	{
		scope = 0;
		displayName = "$STR_IMP_FlexPants";
		descriptionShort = "Flex Flex Flex Skrr";
		model = "IMPGMOD\Equipment\Pants\Shorts\models\Shorts_g.p3d";
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
		hiddenSelections[] = {"camoflage", "Lyamki", "personality"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Pants\Shorts\data\Shorts_black_co.paa", "IMPGMOD\Equipment\Pants\Shorts\data\Lyamki_co.paa"};
		hiddenSelectionsMaterials[] = {"IMPGMOD\Equipment\Pants\Shorts\data\Shorts.rvmat"};
		
		class ClothingTypes 
		{
			male = "IMPGMOD\Equipment\Pants\Shorts\models\Shorts_m.p3d";
			female = "IMPGMOD\Equipment\Pants\Shorts\models\Shorts_f.p3d";
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
						{1.0,{"IMPGMOD\Equipment\Pants\Shorts\data\Shorts.rvmat"}},
						{0.7,{"IMPGMOD\Equipment\Pants\Shorts\data\Shorts.rvmat"}},
						{0.5,{"IMPGMOD\Equipment\Pants\Shorts\data\Shorts_damage.rvmat"}},
						{0.3,{"IMPGMOD\Equipment\Pants\Shorts\data\Shorts_damage.rvmat"}},
						{0.0,{"IMPGMOD\Equipment\Pants\Shorts\data\Shorts_destruct.rvmat"}}
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
	
	class IMP_Pants_Shorts_Black : IMP_Pants_Shorts_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Pants\Shorts\data\Shorts_black_co.paa", "IMPGMOD\Equipment\Pants\Shorts\data\Lyamki_co.paa"};
	};
	class IMP_Pants_Shorts_Green : IMP_Pants_Shorts_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Pants\Shorts\data\Shorts_green_co.paa", "IMPGMOD\Equipment\Pants\Shorts\data\Lyamki_co.paa"};
	};
	class IMP_Pants_Shorts_Tan : IMP_Pants_Shorts_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Pants\Shorts\data\Shorts_tan_co.paa", "IMPGMOD\Equipment\Pants\Shorts\data\Lyamki_co.paa"};
	};
	class IMP_Pants_Shorts_UCP : IMP_Pants_Shorts_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Pants\Shorts\data\Shorts_ucp_co.paa", "IMPGMOD\Equipment\Pants\Shorts\data\Lyamki_co.paa"};
	};
	class IMP_Pants_Shorts_NWU : IMP_Pants_Shorts_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Pants\Shorts\data\Shorts_nwu_co.paa", "IMPGMOD\Equipment\Pants\Shorts\data\Lyamki_co.paa"};
	};
	class IMP_Pants_Shorts_EMR : IMP_Pants_Shorts_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Pants\Shorts\data\Shorts_emr_co.paa", "IMPGMOD\Equipment\Pants\Shorts\data\Lyamki_co.paa"};
	};
	class IMP_Pants_Shorts_MARPAT : IMP_Pants_Shorts_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Pants\Shorts\data\Shorts_marpat_co.paa", "IMPGMOD\Equipment\Pants\Shorts\data\Lyamki_co.paa"};
	};
};