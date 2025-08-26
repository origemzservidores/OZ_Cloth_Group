class CfgPatches 
{
	class IMP_Helmet_1sch
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
	
	class IMP_Helmet_1sch_ColorBase : Clothing 
	{
		scope = 0;
		RankLevel = 6;
		displayName = "$STR_IMP_Sch1";
		descriptionShort = "$STR_IMP_Sch1D";
		model = "IMPGMOD\Equipment\Helmet\KillaHelm\models\KillaHelmet_g.p3d";
		attachments[] = {};
		repairableWithKits[] = {8};
		repairCosts[] = {25.0};
		inventorySlot[] = {"Headgear", "Helmet1", "Helmet2"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing", "Headgear"};
		weight = 5000;
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
			male = "IMPGMOD\Equipment\Helmet\KillaHelm\models\KillaHelmet_m.p3d";
			female = "IMPGMOD\Equipment\Helmet\KillaHelm\models\KillaHelmet_f.p3d";
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
						{1.01, {"IMPGMOD\Equipment\Helmet\KillaHelm\data\1Sch.rvmat"}}, 
						{0.71, {"IMPGMOD\Equipment\Helmet\KillaHelm\data\1Sch.rvmat"}}, 
						{0.51, {"IMPGMOD\Equipment\Helmet\KillaHelm\data\1Sch_damage.rvmat"}}, 
						{0.31, {"IMPGMOD\Equipment\Helmet\KillaHelm\data\1Sch_damage.rvmat"}}, 
						{0.01, {"IMPGMOD\Equipment\Helmet\KillaHelm\data\1Sch_destruct.rvmat"}}
					};
				};
			};
			
			class GlobalArmor 
			{
				class Projectile 
				{
					class Health 
					{
						damage = 0.05;
					};
					
					class Blood 
					{
						damage = 0.05;
					};
					
					class Shock 
					{
						damage = 0.05;
					};
				};
				
				class Melee 
				{
					class Health 
					{
						damage = 0.05;
					};
					
					class Blood 
					{
						damage = 0.05;
					};
					
					class Shock 
					{
						damage = 0.05;
					};
				};
				
				class Infected 
				{
					class Health 
					{
						damage = 0.05;
					};
					
					class Blood 
					{
						damage = 0.05;
					};
					
					class Shock 
					{
						damage = 0.05;
					};
				};
				
				class FragGrenade 
				{
					class Health 
					{
						damage = 0.05;
					};
						
					class Blood 
					{
						damage = 0.05;
					};
						
					class Shock 
					{
						damage = 0.05;
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
	
	class IMP_Helmet_1sch_Killa : IMP_Helmet_1sch_ColorBase
	{
		scope = 2;
		color="Killa";
		simpleHiddenSelections[] = { "balaclava", "golova"};
		hiddenSelectionsTextures[]={"IMPGMOD\Equipment\Helmet\KillaHelm\data\1Sch_killa_co.paa", "IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_black.paa", "IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_black.paa"};
	};
	
	class IMP_Helmet_1sch_Green : IMP_Helmet_1sch_ColorBase
	{
		scope = 2;
		color="Green";
		simpleHiddenSelections[] = { "balaclava", "golova"};
		hiddenSelectionsTextures[]={"IMPGMOD\Equipment\Helmet\KillaHelm\data\1Sch_co.paa", "IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_co.paa", "IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_co.paa"};
	};
	
	class IMP_Helmet_1sch_Raised_ColorBase : Clothing 
	{
		scope = 0;
		RankLevel = 5;
		displayName = "$STR_IMP_Sch1";
		descriptionShort = "$STR_IMP_Sch1D";
		model = "IMPGMOD\Equipment\Helmet\KillaHelm\models\KillaHelmet_Raised_g.p3d";
		attachments[] = {};
		repairableWithKits[] = {8};
		repairCosts[] = {25.0};
		inventorySlot[] = {"Headgear", "Helmet1", "Helmet2"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing", "Headgear"};
		weight = 3500;
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
			male = "IMPGMOD\Equipment\Helmet\KillaHelm\models\KillaHelmet_Raised_m.p3d";
			female = "IMPGMOD\Equipment\Helmet\KillaHelm\models\KillaHelmet_Raised_f.p3d";
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
						{1.01, {"IMPGMOD\Equipment\Helmet\KillaHelm\data\1Sch.rvmat"}}, 
						{0.71, {"IMPGMOD\Equipment\Helmet\KillaHelm\data\1Sch.rvmat"}}, 
						{0.51, {"IMPGMOD\Equipment\Helmet\KillaHelm\data\1Sch_damage.rvmat"}}, 
						{0.31, {"IMPGMOD\Equipment\Helmet\KillaHelm\data\1Sch_damage.rvmat"}}, 
						{0.01, {"IMPGMOD\Equipment\Helmet\KillaHelm\data\1Sch_destruct.rvmat"}}
					};
				};
			};
			
			class GlobalArmor 
			{
				class Projectile 
				{
					class Health 
					{
						damage = 0.05;
					};
					
					class Blood 
					{
						damage = 0.05;
					};
					
					class Shock 
					{
						damage = 0.05;
					};
				};
				
				class Melee 
				{
					class Health 
					{
						damage = 0.05;
					};
					
					class Blood 
					{
						damage = 0.05;
					};
					
					class Shock 
					{
						damage = 0.05;
					};
				};
				
				class Infected 
				{
					class Health 
					{
						damage = 0.05;
					};
					
					class Blood 
					{
						damage = 0.05;
					};
					
					class Shock 
					{
						damage = 0.05;
					};
				};
				
				class FragGrenade 
				{
					class Health 
					{
						damage = 0.05;
					};
						
					class Blood 
					{
						damage = 0.05;
					};
						
					class Shock 
					{
						damage = 0.05;
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
	
	class IMP_Helmet_1sch_Raised_Killa : IMP_Helmet_1sch_Raised_ColorBase
	{
		scope = 2;
		color="Killa";
		simpleHiddenSelections[] = { "balaclava", "golova"};
		hiddenSelectionsTextures[]={"IMPGMOD\Equipment\Helmet\KillaHelm\data\1Sch_killa_co.paa", "IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_black.paa", "IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_black.paa"};
	};
	
	class IMP_Helmet_1sch_Raised_Green : IMP_Helmet_1sch_Raised_ColorBase
	{
		scope = 2;
		color="Green";
		simpleHiddenSelections[] = { "balaclava", "golova"};
		hiddenSelectionsTextures[]={"IMPGMOD\Equipment\Helmet\KillaHelm\data\1Sch_co.paa", "IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_co.paa", "IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_co.paa"};
	};
};
