class CfgPatches 
{
	class IMP_Helmet_6B47CoveredT 
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
	
	class IMP_Helmet_6B47CoveredT_ColorBase : Clothing {
		scope = 0;
		RankLevel = 4;
		displayName = "$STR_IMP_6B47HelmCover";
		descriptionShort = "$STR_IMP_HelmetALL";
		model = "IMPGMOD\Equipment\Helmet\6B47CoveredT\models\6B47CoveredT_g.p3d";
		attachments[] = {"NVG", "helmetFlashlight", "HPouch"};
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
		hiddenSelections[] = {"camoflage", "balaclava","golova"};
		headSelectionsToHide[] = {"Clipping_Mich2001"};
				
		class ClothingTypes 
		{
			male = "IMPGMOD\Equipment\Helmet\6B47CoveredT\models\6B47CoveredT_m.p3d";
			female = "IMPGMOD\Equipment\Helmet\6B47CoveredT\models\6B47CoveredT_f.p3d";
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
						{1.0, {"IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_damage.rvmat"}}, 
						{0.0, {"IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_destruct.rvmat"}}
					};
				};
			};
			
			class GlobalArmor {
				class Projectile {
					class Health {
						damage = 0.25;
					};
					
					class Blood {
						damage = 0.25;
					};
					
					class Shock {
						damage = 0.25;
					};
				};
				
				class Melee {
					class Health {
						damage = 0.25;
					};
					
					class Blood {
						damage = 0.25;
					};
					
					class Shock {
						damage = 0.25;
					};
				};
				
				class Infected {
					class Health {
						damage = 0.25;
					};
					
					class Blood {
						damage = 0.25;
					};
					
					class Shock {
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
	
	class IMP_Helmet_6B47CoveredT : IMP_Helmet_6B47CoveredT_ColorBase 
	{
		scope = 2;
		simpleHiddenSelections[] = {"balaclava","golova"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_green.paa", "IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_black.paa", "IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_black.paa"};
	};
	
	class IMP_Helmet_6B47CoveredT_Black : IMP_Helmet_6B47CoveredT_ColorBase 
	{
		scope = 2;
		simpleHiddenSelections[] = {"balaclava","golova"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_black.paa", "IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_black.paa", "IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_black.paa"};
	};
};