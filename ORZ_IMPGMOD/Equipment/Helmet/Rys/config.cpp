class CfgPatches 
{
	class IMP_Helmet_Rys 
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
	
	class IMP_Helmet_Rys_ColorBase : Clothing {
		scope = 0;
		RankLevel = 5;
		displayName = "$STR_IMP_RysT";
		descriptionShort = "$STR_IMP_HelmetALL";
		model = "IMPGMOD\Equipment\Helmet\Rys\models\Rys_g.p3d";
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
		hiddenSelections[] = {"camoflage", "Visor", "balaclava", "golova"};
		simpleHiddenSelections[] = {"balaclava", "golova"};
		headSelectionsToHide[] = {"Clipping_Mich2001"};
				
		class ClothingTypes 
		{
			male = "IMPGMOD\Equipment\Helmet\Rys\models\Rys_m.p3d";
			female = "IMPGMOD\Equipment\Helmet\Rys\models\Rys_f.p3d";
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
						{1.0, {"IMPGMOD\Equipment\Helmet\Rys\data\Rys.rvmat", "IMPGMOD\Equipment\Helmet\Rys\data\RysVisor.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Helmet\Rys\data\Rys.rvmat", "IMPGMOD\Equipment\Helmet\Rys\data\RysVisor.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Helmet\Rys\data\Rys_damage.rvmat", "IMPGMOD\Equipment\Helmet\Rys\data\RysVisor_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Helmet\Rys\data\Rys_damage.rvmat", "IMPGMOD\Equipment\Helmet\Rys\data\RysVisor_damage.rvmat"}}, 
						{0.0, {"IMPGMOD\Equipment\Helmet\Rys\data\Rys_destruct.rvmat", "IMPGMOD\Equipment\Helmet\Rys\data\RysVisor_destruct.rvmat"}}
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
						damage = 0.18;
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
	
	class IMP_Helmet_Rys_Black : IMP_Helmet_Rys_ColorBase 
	{
		scope = 2;
		color="Black";
		simpleHiddenSelections[] = {"balaclava", "golova"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\Rys\data\Rys_co.paa", "IMPGMOD\Equipment\Helmet\Rys\data\RysVisor_co.paa", "IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_black.paa", "IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_black.paa"};
	};
	
	class IMP_Helmet_Rys_Raised_ColorBase : Clothing {
		scope = 0;
		RankLevel = 5;
		displayName = "$STR_IMP_RysT";
		descriptionShort = "$STR_IMP_HelmetALL";
		model = "IMPGMOD\Equipment\Helmet\Rys\models\Rys_Raised_g.p3d";
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
		hiddenSelections[] = {"camoflage", "Visor", "balaclava", "golova"};
		headSelectionsToHide[] = {"Clipping_Mich2001"};
				
		class ClothingTypes 
		{
			male = "IMPGMOD\Equipment\Helmet\Rys\models\Rys_Raised_m.p3d";
			female = "IMPGMOD\Equipment\Helmet\Rys\models\Rys_Raised_f.p3d";
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
						{1.0, {"IMPGMOD\Equipment\Helmet\Rys\data\Rys.rvmat", "IMPGMOD\Equipment\Helmet\Rys\data\RysVisor.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Helmet\Rys\data\Rys.rvmat", "IMPGMOD\Equipment\Helmet\Rys\data\RysVisor.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Helmet\Rys\data\Rys_damage.rvmat", "IMPGMOD\Equipment\Helmet\Rys\data\RysVisor_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Helmet\Rys\data\Rys_damage.rvmat", "IMPGMOD\Equipment\Helmet\Rys\data\RysVisor_damage.rvmat"}}, 
						{0.0, {"IMPGMOD\Equipment\Helmet\Rys\data\Rys_destruct.rvmat", "IMPGMOD\Equipment\Helmet\Rys\data\RysVisor_destruct.rvmat"}}
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
						damage = 0.18;
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
	
	class IMP_Helmet_Rys_Raised_Black : IMP_Helmet_Rys_Raised_ColorBase 
	{
		scope = 2;
		color="Black";
		simpleHiddenSelections[] = {"balaclava", "golova"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\Rys\data\Rys_co.paa", "IMPGMOD\Equipment\Helmet\Rys\data\RysVisor_co.paa", "IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_black.paa", "IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_black.paa"};
	};
};