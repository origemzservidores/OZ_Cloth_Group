class CfgPatches 
{
	class IMP_Pants_SWAT
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data", "DZ_Characters", "DZ_Scripts", "DZ_Characters_Pants"};
	};
};

class cfgVehicles 
{
	class Clothing_Base;
	class Clothing: Clothing_Base {};
	
	class IMP_Pants_SWAT_ColorBase : Clothing 
	{
		scope = 0;
		RankLevel = 2;
		displayName = "$STR_IMP_SWATPANTS";
		descriptionShort = "$STR_IMP_SWATPANTSD";
		model = "IMPGMOD\Equipment\Pants\SWATPants\models\SWATPants_g.p3d";
		inventorySlot[] = {"Legs"};
		simulation = "clothing";
		itemInfo[] = {"Clothing", "Legs"};
		itemSize[] = {4, 4};
		itemsCargoSize[] = {5, 4};
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
			male = "IMPGMOD\Equipment\Pants\SWATPants\models\SWATPants_m.p3d";
			female = "IMPGMOD\Equipment\Pants\SWATPants\models\SWATPants_f.p3d";
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
						{1.0,{"IMPGMOD\Equipment\Pants\SWATPants\data\SWATPants.rvmat"}},
						{0.7,{"IMPGMOD\Equipment\Pants\SWATPants\data\SWATPants.rvmat"}},
						{0.5,{"IMPGMOD\Equipment\Pants\SWATPants\data\SWATPants_damage.rvmat"}},
						{0.3,{"IMPGMOD\Equipment\Pants\SWATPants\data\SWATPants_damage.rvmat"}},
						{0.0,{"IMPGMOD\Equipment\Pants\SWATPants\data\SWATPants_destruct.rvmat"}}
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
	
	class IMP_Pants_SWAT : IMP_Pants_SWAT_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Pants\SWATPants\data\LowerBody_co.paa"};
	};
	
	class IMP_Pants_SWAT_Black : IMP_Pants_SWAT_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Pants\SWATPants\data\LowerBody_co_black.paa"};
	};
	
	class IMP_Pants_SWAT_UCP : IMP_Pants_SWAT_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Pants\SWATPants\data\LowerBody_UCP.paa"};
	};
	
	class IMP_Pants_SWAT_EMR : IMP_Pants_SWAT_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Pants\SWATPants\data\LowerBody_EMR.paa"};
	};
	
	class IMP_Pants_SWAT_MARPAT : IMP_Pants_SWAT_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Pants\SWATPants\data\LowerBody_MARPAT.paa"};
	};
	
	class IMP_Pants_SWAT_NWU : IMP_Pants_SWAT_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Pants\SWATPants\data\LowerBody_NWU.paa"};
	};
	
	class IMP_Pants_SWAT_60_UCP : IMP_Pants_SWAT_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Pants\SWATPants\data\LowerBody_UCP.paa"};
		itemsCargoSize[] = {6, 10};
	};
	
	class IMP_Pants_SWAT_60_EMR : IMP_Pants_SWAT_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Pants\SWATPants\data\LowerBody_EMR.paa"};
		itemsCargoSize[] = {6, 10};
	};
	
	class IMP_Pants_SWAT_60_MARPAT : IMP_Pants_SWAT_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Pants\SWATPants\data\LowerBody_MARPAT.paa"};
		itemsCargoSize[] = {6, 10};
	};
	
	class IMP_Pants_SWAT_60_NWU : IMP_Pants_SWAT_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Pants\SWATPants\data\LowerBody_NWU.paa"};
		itemsCargoSize[] = {6, 10};
	};
	
	class IMP_Pants_SWAT_80_UCP : IMP_Pants_SWAT_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Pants\SWATPants\data\LowerBody_UCP.paa"};
		itemsCargoSize[] = {8, 10};
	};
	
	class IMP_Pants_SWAT_80_EMR : IMP_Pants_SWAT_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Pants\SWATPants\data\LowerBody_EMR.paa"};
		itemsCargoSize[] = {8, 10};
	};
	
	class IMP_Pants_SWAT_80_MARPAT : IMP_Pants_SWAT_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Pants\SWATPants\data\LowerBody_MARPAT.paa"};
		itemsCargoSize[] = {8, 10};
	};
	
	class IMP_Pants_SWAT_80_NWU : IMP_Pants_SWAT_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Pants\SWATPants\data\LowerBody_NWU.paa"};
		itemsCargoSize[] = {8, 10};
	};
	
	class IMP_Pants_SWAT_80_Black : IMP_Pants_SWAT_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Pants\SWATPants\data\LowerBody_co_black.paa"};
		itemsCargoSize[] = {8, 10};
	};
	
	class IMP_Pants_SWAT_60_Black : IMP_Pants_SWAT_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Pants\SWATPants\data\LowerBody_co_black.paa"};
		itemsCargoSize[] = {6, 10};
	};
	
	class IMP_Pants_SWAT_80_UltraBlack : IMP_Pants_SWAT_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Pants\SWATPants\data\LowerBody_co_black1.paa"};
		itemsCargoSize[] = {8, 10};
	};
};