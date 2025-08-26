class CfgPatches 
{
	class IMP_Helmet_Tactic 
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
	
	class IMP_Helmet_Tactic_ColorBase : Clothing 
	{
		scope = 0;
		RankLevel = 4;
		displayName="$STR_CfgVehicles_Mich2001Helmet0";
		descriptionShort="$STR_CfgVehicles_Mich2001Helmet1";
		model = "\IMPGMOD\Equipment\Helmet\TacticHelmet\models\TacticHelmet_g.p3d";
		attachments[] = {"NVG", "HPouch"};
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
		noNVStrap = 0;
		noEyewear = 0;
		varWetMax=0.048999999;
		heatIsolation=0.5;
		headSelectionsToHide[] = {"Clipping_Mich2001"};
		hiddenSelections[] = {"camoflage", "Visor", "balaclava", "golova"};
		
		class ClothingTypes 
		{
			male = "IMPGMOD\Equipment\Helmet\TacticHelmet\models\TacticHelmet.p3d";
			female = "IMPGMOD\Equipment\Helmet\TacticHelmet\models\TacticHelmet.p3d";
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
						{1.0, {"IMPGMOD\Equipment\Helmet\TacticHelmet\data\TacticHelmet.rvmat", "IMPGMOD\Equipment\Helmet\TacticHelmet\data\TacticVisor.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Helmet\TacticHelmet\data\TacticHelmet.rvmat", "IMPGMOD\Equipment\Helmet\TacticHelmet\data\TacticVisor.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Helmet\TacticHelmet\data\TacticHelmet_damage.rvmat", "IMPGMOD\Equipment\Helmet\TacticHelmet\data\TacticVisor_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Helmet\TacticHelmet\data\TacticHelmet_damage.rvmat", "IMPGMOD\Equipment\Helmet\TacticHelmet\data\TacticVisor_damage.rvmat"}}, 
						{0.01, {"IMPGMOD\Equipment\Helmet\TacticHelmet\data\TacticHelmet_destruct.rvmat", "IMPGMOD\Equipment\Helmet\TacticHelmet\data\TacticVisor_destruct.rvmat"}}
					};
				};
			};
			
			class GlobalArmor 
			{
				class Projectile 
				{
					class Health 
					{
						damage = 0.45;
					};
					
					class Blood 
					{
						damage = 0.45;
					};
					
					class Shock 
					{
						damage = 0.45;
					};
				};
				
				class Melee 
				{
					class Health 
					{
						damage = 0.45;
					};
					
					class Blood 
					{
						damage = 0.45;
					};
					
					class Shock 
					{
						damage = 0.45;
					};
				};
				
				class Infected 
				{
					class Health 
					{
						damage = 0.45;
					};
					
					class Blood 
					{
						damage = 0.45;
					};
					
					class Shock 
					{
						damage = 0.45;
					};
				};
				
				class FragGrenade 
				{
					class Health 
					{
						damage = 0.45;
					};
						
					class Blood 
					{
						damage = 0.45;
					};
						
					class Shock 
					{
						damage = 0.45;
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
	
	class IMP_Helmet_Tactic_Beige : IMP_Helmet_Tactic_ColorBase 
	{
		scope = 2;
		color="Beige";
		simpleHiddenSelections[] = {"balaclava", "golova"};
		hiddenSelectionsTextures[]={"IMPGMOD\Equipment\Helmet\TacticHelmet\data\TacticHelmet_beige_co.paa", "IMPGMOD\Equipment\Helmet\TacticHelmet\data\TacticVisor_beige_ca.paa", "IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_black.paa", "IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_black.paa"};
	};
	
	class IMP_Helmet_Tactic_Black : IMP_Helmet_Tactic_ColorBase 
	{
		scope = 2;
		color="Black";
		simpleHiddenSelections[] = {"balaclava", "golova"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\TacticHelmet\data\TacticHelmet_black_co.paa","IMPGMOD\Equipment\Helmet\TacticHelmet\data\TacticVisor_black_ca.paa", "IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_black.paa", "IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_black.paa"};
	};
	
	class IMP_Helmet_Tactic_Green : IMP_Helmet_Tactic_ColorBase 
	{
		scope = 2;
		color="Green";
		simpleHiddenSelections[] = {"balaclava", "golova"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\TacticHelmet\data\TacticHelmet_green_co.paa","IMPGMOD\Equipment\Helmet\TacticHelmet\data\TacticVisor_green_ca.paa", "IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_co.paa", "IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_co.paa"};
	};
	
	class IMP_Helmet_Tactic_Camo : IMP_Helmet_Tactic_ColorBase 
	{
		scope = 2;
		color="Camo";
		simpleHiddenSelections[] = {"balaclava", "golova"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\TacticHelmet\data\TacticHelmet_camo_co.paa", "IMPGMOD\Equipment\Helmet\TacticHelmet\data\TacticVisor_beige_ca.paa", "IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_black.paa", "IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_black.paa"};
	};
	
	class IMP_Helmet_Tactic_Raised_ColorBase : Clothing 
	{
		scope = 0;
		RankLevel = 3;
		displayName="$STR_CfgVehicles_Mich2001Helmet0";
		descriptionShort="$STR_CfgVehicles_Mich2001Helmet1";
		model = "\IMPGMOD\Equipment\Helmet\TacticHelmet\models\TacticHelmet_g_Raised.p3d";
		attachments[] = {"NVG", "HPouch"};
		repairableWithKits[] = {8};
		repairCosts[] = {25.0};
		inventorySlot[] = {"Headgear", "Helmet1", "Helmet2"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing", "Headgear"};
		weight = 2200;
		quickBarBonus=1;
		itemSize[] = {4, 4};
		noMask = 0;
		noNVStrap = 0;
		noEyewear = 0;
		varWetMax=0.048999999;
		heatIsolation=0.5;
		headSelectionsToHide[] = {"Clipping_Mich2001"};
		hiddenSelections[] = {"camoflage", "Visor", "balaclava", "golova"};
		
		class ClothingTypes 
		{
			male = "IMPGMOD\Equipment\Helmet\TacticHelmet\models\TacticHelmet_Raised.p3d";
			female = "IMPGMOD\Equipment\Helmet\TacticHelmet\models\TacticHelmet_Raised.p3d";
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
						{1.0, {"IMPGMOD\Equipment\Helmet\TacticHelmet\data\TacticHelmet.rvmat", "IMPGMOD\Equipment\Helmet\TacticHelmet\data\TacticVisor.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Helmet\TacticHelmet\data\TacticHelmet.rvmat", "IMPGMOD\Equipment\Helmet\TacticHelmet\data\TacticVisor.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Helmet\TacticHelmet\data\TacticHelmet_damage.rvmat", "IMPGMOD\Equipment\Helmet\TacticHelmet\data\TacticVisor_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Helmet\TacticHelmet\data\TacticHelmet_damage.rvmat", "IMPGMOD\Equipment\Helmet\TacticHelmet\data\TacticVisor_damage.rvmat"}}, 
						{0.01, {"IMPGMOD\Equipment\Helmet\TacticHelmet\data\TacticHelmet_destruct.rvmat", "IMPGMOD\Equipment\Helmet\TacticHelmet\data\TacticVisor_destruct.rvmat"}}
					};
				};
			};
			
			class GlobalArmor 
			{
				class Projectile 
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
				
				class Melee 
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
				
				class Infected 
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
	
	class IMP_Helmet_Tactic_Raised_Beige : IMP_Helmet_Tactic_Raised_ColorBase 
	{
		scope = 2;
		color="Beige";
		simpleHiddenSelections[] = {"balaclava", "golova"};
		hiddenSelectionsTextures[]={"IMPGMOD\Equipment\Helmet\TacticHelmet\data\TacticHelmet_beige_co.paa", "IMPGMOD\Equipment\Helmet\TacticHelmet\data\TacticVisor_beige_ca.paa", "IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_black.paa", "IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_black.paa"};
	};
	
	class IMP_Helmet_Tactic_Raised_Black : IMP_Helmet_Tactic_Raised_ColorBase 
	{
		scope = 2;
		color="Black";
		simpleHiddenSelections[] = {"balaclava", "golova"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\TacticHelmet\data\TacticHelmet_black_co.paa","IMPGMOD\Equipment\Helmet\TacticHelmet\data\TacticVisor_black_ca.paa", "IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_black.paa", "IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_black.paa"};
	};
	
	class IMP_Helmet_Tactic_Raised_Green : IMP_Helmet_Tactic_Raised_ColorBase 
	{
		scope = 2;
		color="Green";
		simpleHiddenSelections[] = {"balaclava", "golova"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\TacticHelmet\data\TacticHelmet_green_co.paa","IMPGMOD\Equipment\Helmet\TacticHelmet\data\TacticVisor_green_ca.paa", "IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_co.paa", "IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_co.paa"};
	};
	
	class IMP_Helmet_Tactic_Raised_Camo : IMP_Helmet_Tactic_Raised_ColorBase 
	{
		scope = 2;
		color="Camo";
		simpleHiddenSelections[] = {"balaclava", "golova"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\TacticHelmet\data\TacticHelmet_camo_co.paa", "IMPGMOD\Equipment\Helmet\TacticHelmet\data\TacticVisor_beige_ca.paa", "IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_black.paa", "IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_black.paa"};
	};
};