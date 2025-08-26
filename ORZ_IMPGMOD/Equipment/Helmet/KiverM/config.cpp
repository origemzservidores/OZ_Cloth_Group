class CfgPatches 
{
	class IMP_Helmet_KiverMT 
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
	
	class IMP_Helmet_KiverMT_ColorBase : Clothing {
		scope = 0;
		RankLevel = 3;
		displayName = "$STR_IMP_HelmKiverM";
		descriptionShort = "$STR_IMP_HelmetALL";
		model = "IMPGMOD\Equipment\Helmet\KiverM\models\KiverM_g.p3d";
		attachments[] = {};
		repairableWithKits[] = {8};
		repairCosts[] = {25.0};
		inventorySlot[] = {"Headgear", "Helmet1", "Helmet2"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing", "Headgear"};
		weight = 3000;
		quickBarBonus=1;
		itemSize[] = {4, 4};
		noMask = 0;
		noNVStrap = 1;
		noEyewear = 0;
		varWetMax=0.048999999;
		heatIsolation=1;
		hiddenSelections[] = {"camoflage", "balaclava", "golova"};
		headSelectionsToHide[] = {"Clipping_Mich2001"};
				
		class ClothingTypes 
		{
			male = "IMPGMOD\Equipment\Helmet\KiverM\models\KiverM_m.p3d";
			female = "IMPGMOD\Equipment\Helmet\KiverM\models\KiverM_f.p3d";
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
						{1.0, {"IMPGMOD\Equipment\Helmet\KiverM\data\KiverM.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Helmet\KiverM\data\KiverM.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Helmet\KiverM\data\KiverM_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Helmet\KiverM\data\KiverM_damage.rvmat"}}, 
						{0.0, {"IMPGMOD\Equipment\Helmet\KiverM\data\KiverM_destruct.rvmat"}}
					};
				};
			};
			
			class GlobalArmor {
				class Projectile {
					class Health {
						damage = 0.2;
					};
					
					class Blood {
						damage = 0.2;
					};
					
					class Shock {
						damage = 0.2;
					};
				};
				
				class Melee {
					class Health {
						damage = 0.2;
					};
					
					class Blood {
						damage = 0.2;
					};
					
					class Shock {
						damage = 0.2;
					};
				};
				
				class Infected {
					class Health {
						damage = 0.2;
					};
					
					class Blood {
						damage = 0.2;
					};
					
					class Shock {
						damage = 0.2;
					};
				};
				
				class FragGrenade 
				{
					class Health 
					{
						damage = 0.2;
					};
						
					class Blood 
					{
						damage = 0.2;
					};
						
					class Shock 
					{
						damage = 0.2;
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
					soundSet = "pickUpPot_SoundSet";
					id = 797;
				};
				
				class drop 
				{
					soundset = "BallisticHelmet_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	
	class IMP_Helmet_KiverMT : IMP_Helmet_KiverMT_ColorBase 
	{
		scope = 2;
		simpleHiddenSelections[] = { "balaclava", "golova"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\KiverM\data\KiverM_co.paa", "IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_black.paa", "IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_black.paa"};
	};
};