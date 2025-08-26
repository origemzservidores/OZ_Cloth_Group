class CfgPatches 
{
	class IMP_Helmet_SWAT 
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data", "DZ_Characters", "DZ_Scripts", "DZ_Characters_Headgear"};
	};
};

class cfgVehicles 
{
	class Clothing_Base;
	class Clothing: Clothing_Base {};
	
	class IMP_Helmet_SWAT_ColorBase : Clothing 
	{
		scope = 0;
		RankLevel = 2;
		displayName = "$STR_IMP_SWATH";
		descriptionShort = "$STR_IMP_SWATHD";
		model = "\IMPGMOD\Equipment\Helmet\SWATHelmet\models\SWATHelmet_gt.p3d";
		repairableWithKits[] = {8};
		repairCosts[] = {25.0};
		inventorySlot[] = {"Headgear", "Helmet1", "Helmet2"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing", "Headgear"};
		quickBarBonus=1;
		weight = 1800;
		itemSize[] = {4, 4};
		noMask = 0;
		noNVStrap = 0;
		noEyewear = 0;
		varWetMax=0.048999999;
		heatIsolation=0.1;
		headSelectionsToHide[] = {"Clipping_Mich2001"};
		hiddenSelections[] = {"camoflage", "glass", "balaclavaswat"};
		hiddenSelectionsMaterials[] = {"IMPGMOD\Equipment\Helmet\SWATHelmet\data\Helmet.rvmat", "IMPGMOD\Equipment\Helmet\SWATHelmet\data\Govno.rvmat", "IMPGMOD\Equipment\Helmet\SWATHelmet\data\BalaclavaSWAT.rvmat"};
		
		class ClothingTypes 
		{
			male = "IMPGMOD\Equipment\Helmet\SWATHelmet\models\SWATHelmet_t.p3d";
			female = "IMPGMOD\Equipment\Helmet\SWATHelmet\models\SWATHelmet_t.p3d";
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
						{1.0, {"IMPGMOD\Equipment\Helmet\SWATHelmet\data\Helmet.rvmat","IMPGMOD\Equipment\Helmet\SWATHelmet\data\Govno.rvmat","IMPGMOD\Equipment\Helmet\SWATHelmet\data\BalaclavaSWAT.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Helmet\SWATHelmet\data\Helmet.rvmat","IMPGMOD\Equipment\Helmet\SWATHelmet\data\Govno.rvmat","IMPGMOD\Equipment\Helmet\SWATHelmet\data\BalaclavaSWAT.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Helmet\SWATHelmet\data\Helmet_damage.rvmat","IMPGMOD\Equipment\Helmet\SWATHelmet\data\Govno.rvmat","IMPGMOD\Equipment\Helmet\SWATHelmet\data\BalaclavaSWAT_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Helmet\SWATHelmet\data\Helmet_damage.rvmat","IMPGMOD\Equipment\Helmet\SWATHelmet\data\Govno.rvmat","IMPGMOD\Equipment\Helmet\SWATHelmet\data\BalaclavaSWAT_damage.rvmat"}}, 
						{0.0, {"IMPGMOD\Equipment\Helmet\SWATHelmet\data\Helmet_destruct.rvmat","IMPGMOD\Equipment\Helmet\SWATHelmet\data\Govno.rvmat","IMPGMOD\Equipment\Helmet\SWATHelmet\data\BalaclavaSWAT_destruct.rvmat"}}
					};
				};
			};
			
			class GlobalArmor 
			{
				class Projectile 
				{
					class Health 
					{
						damage = 0.25;
					};
					
					class Blood 
					{
						damage = 0.25;
					};
					
					class Shock 
					{
						damage = 0.25;
					};
				};
				
				class Melee 
				{
					class Health 
					{
						damage = 0.25;
					};
					
					class Blood 
					{
						damage = 0.25;
					};
					
					class Shock 
					{
						damage = 0.25;
					};
				};
				
				class Infected 
				{
					class Health 
					{
						damage = 0.25;
					};
					
					class Blood 
					{
						damage = 0.25;
					};
					
					class Shock 
					{
						damage = 0.25;
					};
				};
				
				class FragGrenade 
				{
					class Health 
					{
						damage = 0.25;
					};
					
					class Blood 
					{
						damage = 0.25;
					};
					
					class Shock 
					{
						damage = 0.25;
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
					soundSet="pickUpPot_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="BallisticHelmet_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	
	class IMP_Helmet_SWAT : IMP_Helmet_SWAT_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\SWATHelmet\data\Helmet_ca.paa", "impgmod\equipment\data\glass_dark_ca.paa", "IMPGMOD\Equipment\Helmet\SWATHelmet\data\Helmet_ca.paa"};
		hiddenSelectionsMaterials[] = {"IMPGMOD\Equipment\Helmet\SWATHelmet\data\Helmet.rvmat", "impgmod\equipment\data\glassnew.rvmat", "IMPGMOD\Equipment\Helmet\SWATHelmet\data\BalaclavaSWAT.rvmat"};
		
		class DamageSystem 
		{
			class GlobalHealth 
			{
				class Health 
				{
					hitpoints = 500;
					healthLevels[] = 
					{
						{1.0, {"IMPGMOD\Equipment\Helmet\SWATHelmet\data\Helmet.rvmat","IMPGMOD\Equipment\data\GlassNew.rvmat","IMPGMOD\Equipment\Helmet\SWATHelmet\data\BalaclavaSWAT.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Helmet\SWATHelmet\data\Helmet.rvmat","IMPGMOD\Equipment\data\GlassNew.rvmat","IMPGMOD\Equipment\Helmet\SWATHelmet\data\BalaclavaSWAT.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Helmet\SWATHelmet\data\Helmet_damage.rvmat","IMPGMOD\Equipment\data\GlassNew_damage.rvmat","IMPGMOD\Equipment\Helmet\SWATHelmet\data\BalaclavaSWAT_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Helmet\SWATHelmet\data\Helmet_damage.rvmat","IMPGMOD\Equipment\data\GlassNew_damage.rvmat","IMPGMOD\Equipment\Helmet\SWATHelmet\data\BalaclavaSWAT_damage.rvmat"}}, 
						{0.0, {"IMPGMOD\Equipment\Helmet\SWATHelmet\data\Helmet_destruct.rvmat","IMPGMOD\Equipment\data\GlassNew_destruct.rvmat","IMPGMOD\Equipment\Helmet\SWATHelmet\data\BalaclavaSWAT_destruct.rvmat"}}
					};
				};
			};
		};
	};
	
	class IMP_Helmet_SWAT_BlackGlass : IMP_Helmet_SWAT_ColorBase 
	{
		scope = 2;
		displayName = "$STR_IMP_SWATH";
		descriptionShort = "$STR_IMP_SWATHD";
		noMask = 1;
		noNVStrap = 0;
		noEyewear = 1;
		model = "\IMPGMOD\Equipment\Helmet\SWATHelmet\models\SWATHelmet_gt.p3d";
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\SWATHelmet\data\Helmet_ca.paa", "IMPGMOD\Equipment\Helmet\SWATHelmet\data\Helmet_ca.paa", "IMPGMOD\Equipment\Helmet\SWATHelmet\data\Helmet_ca.paa"};
		hiddenSelectionsMaterials[] = {"IMPGMOD\Equipment\Helmet\SWATHelmet\data\Helmet.rvmat", "IMPGMOD\Equipment\Helmet\SWATHelmet\data\Govno.rvmat", "IMPGMOD\Equipment\Helmet\SWATHelmet\data\BalaclavaSWAT.rvmat"};
	};
};
