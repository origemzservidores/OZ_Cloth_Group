class CfgPatches 
{
	class IMP_Helmet_SOBR 
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
	
	class IMP_Helmet_SOBR_ColorBase : Clothing 
	{
		scope = 0;
		RankLevel = 4;
		displayName = "$STR_IMP_SOBRH";
		descriptionShort = "$STR_IMP_SOBRHD";
		model = "\IMPGMOD\Equipment\Helmet\SOBR\models\sobr_g.p3d";
		attachments[] = {"NVG", "helmetFlashlight", "HPouch"};
		repairableWithKits[] = {8};
		repairCosts[] = {25.0};
		inventorySlot[] = {"Headgear", "Helmet1", "Helmet2"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing", "Headgear"};
		weight = 4000;
		quickBarBonus=1;
		itemSize[] = {4, 4};
		noMask = 0;
		noNVStrap = 0;
		noEyewear = 0;
		varWetMax=0.048999999;
		heatIsolation=0.5;
		headSelectionsToHide[] = {"Clipping_Mich2001"};
		hiddenSelections[] = {"camoflage", "balaclava", "golova"};
		
		class ClothingTypes 
		{
			male = "IMPGMOD\Equipment\Helmet\SOBR\models\sobr_m.p3d";
			female = "IMPGMOD\Equipment\Helmet\SOBR\models\sobr_f.p3d";
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
						{1.0, {"IMPGMOD\Equipment\Helmet\SOBR\data\Helmet.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Helmet\SOBR\data\Helmet.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Helmet\SOBR\data\Helmet_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Helmet\SOBR\data\Helmet_damage.rvmat"}}, 
						{0.0, {"IMPGMOD\Equipment\Helmet\SOBR\data\Helmet_destruct.rvmat"}}
					};
				};
			};
			
			class GlobalArmor 
			{
				class Projectile 
				{
					class Health 
					{
						damage = 0.4;
					};
					
					class Blood 
					{
						damage = 0.4;
					};
					
					class Shock 
					{
						damage = 0.4;
					};
				};
				
				class Melee 
				{
					class Health 
					{
						damage = 0.4;
					};
					
					class Blood 
					{
						damage = 0.4;
					};
					
					class Shock 
					{
						damage = 0.4;
					};
				};
				
				class Infected 
				{
					class Health 
					{
						damage = 0.4;
					};
					
					class Blood 
					{
						damage = 0.4;
					};
					
					class Shock 
					{
						damage = 0.4;
					};
				};
				
				class FragGrenade 
				{
					class Health 
					{
						damage = 0.4;
					};
						
					class Blood 
					{
						damage = 0.4;
					};
						
					class Shock 
					{
						damage = 0.4;
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
	
	class IMP_Helmet_SOBR_Green : IMP_Helmet_SOBR_ColorBase 
	{
		scope = 2;
		simpleHiddenSelections[] = {"balaclava", "golova"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\SOBR\data\sobr_green_co.paa", "IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_co.paa", "IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_co.paa"};
	};
	class IMP_Helmet_SOBR_Black : IMP_Helmet_SOBR_ColorBase 
	{
		scope = 2;
		simpleHiddenSelections[] = {"balaclava", "golova"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\SOBR\data\sobr_black_co.paa", "IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_black.paa", "IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_black.paa"};
	};
	class IMP_Helmet_SOBR_Tan : IMP_Helmet_SOBR_ColorBase 
	{
		scope = 2;
		simpleHiddenSelections[] = {"balaclava", "golova"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\SOBR\data\sobr_tan_co.paa", "IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_black.paa", "IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_black.paa"};
	};
	class IMP_Helmet_SOBR_UCP : IMP_Helmet_SOBR_ColorBase 
	{
		scope = 2;
		simpleHiddenSelections[] = {"balaclava", "golova"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\SOBR\data\sobr_ucp_co.paa", "IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_black.paa", "IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_black.paa"};
	};
	class IMP_Helmet_SOBR_NWU : IMP_Helmet_SOBR_ColorBase 
	{
		scope = 2;
		simpleHiddenSelections[] = {"balaclava", "golova"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\SOBR\data\sobr_nwu_co.paa", "IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_black.paa", "IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_black.paa"};
	};
	class IMP_Helmet_SOBR_EMR : IMP_Helmet_SOBR_ColorBase 
	{
		scope = 2;
		simpleHiddenSelections[] = {"balaclava", "golova"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\SOBR\data\sobr_emr_co.paa", "IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_black.paa", "IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_black.paa"};
	};
	class IMP_Helmet_SOBR_MARPAT : IMP_Helmet_SOBR_ColorBase 
	{
		scope = 2;
		simpleHiddenSelections[] = {"balaclava", "golova"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\SOBR\data\sobr_marpat_co.paa", "IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_black.paa", "IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_black.paa"};
	};
};
