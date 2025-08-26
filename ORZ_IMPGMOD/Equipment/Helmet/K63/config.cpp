class CfgPatches 
{
	class IMP_Helmet_K63 
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
	
	class IMP_Helmet_K63_ColorBase : Clothing 
	{
		scope = 0;
		RankLevel = 4;
		displayName = "$STR_IMP_K63";
		descriptionShort = "$STR_IMP_K63D";
		model = "IMPGMOD\Equipment\Helmet\K63\models\K63Helmet_G.p3d";
		attachments[] = {"HPouch"};
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
		hiddenSelections[] = {"camoflage", "balaclava", "golova"};
		headSelectionsToHide[] = {"Clipping_Mich2001"};
		
		class ClothingTypes 
		{
			male = "IMPGMOD\Equipment\Helmet\K63\models\K63Helmet.p3d";
			female = "IMPGMOD\Equipment\Helmet\K63\models\K63Helmet.p3d";
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
						{1.0, {"IMPGMOD\Equipment\Helmet\K63\data\K63Helmet.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Helmet\K63\data\K63Helmet.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Helmet\K63\data\K63Helmet_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Helmet\K63\data\K63Helmet_damage.rvmat"}}, 
						{0.0, {"IMPGMOD\Equipment\Helmet\K63\data\K63Helmet_destruct.rvmat"}}
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
	
	class IMP_Helmet_K63_Green : IMP_Helmet_K63_ColorBase 
	{
		scope = 2;
		color="Green";
		simpleHiddenSelections[] = { "balaclava", "golova"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\K63\data\K63Helmet_green.paa", "IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_co.paa", "IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_co.paa"};
	};
	
	class IMP_Helmet_K63_Black : IMP_Helmet_K63_ColorBase 
	{
		scope = 2;
		color="Black";
		simpleHiddenSelections[] = { "balaclava", "golova"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\K63\data\K63Helmet_ca.paa", "IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_black.paa", "IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_black.paa"};
	};
	
	class IMP_Helmet_K63_NWU : IMP_Helmet_K63_ColorBase 
	{
		scope = 2;
		color="NWU";
		simpleHiddenSelections[] = { "balaclava", "golova"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\K63\data\K63Helmet_NWU.paa", "IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_black.paa", "IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_black.paa"};
	};
	
	class IMP_Helmet_K63_EMR : IMP_Helmet_K63_ColorBase 
	{
		scope = 2;
		color="EMR";
		simpleHiddenSelections[] = { "balaclava", "golova"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\K63\data\K63Helmet_EMR.paa", "IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_co.paa", "IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_co.paa"};
	};
	
	class IMP_Helmet_K63_UCP : IMP_Helmet_K63_ColorBase 
	{
		scope = 2;
		color="UCP";
		simpleHiddenSelections[] = { "balaclava", "golova"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\K63\data\K63Helmet_UCP.paa", "IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_black.paa", "IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_black.paa"};
	};
	
	class IMP_Helmet_K63_MARPAT : IMP_Helmet_K63_ColorBase 
	{
		scope = 2;
		color="MARPAT";
		simpleHiddenSelections[] = { "balaclava", "golova"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\K63\data\K63Helmet_MARPAT.paa", "IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_black.paa", "IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_black.paa"};
	};
	
	class IMP_Helmet_K63_Raised_ColorBase : Clothing 
	{
		scope = 0;
		RankLevel = 4;
		displayName = "$STR_IMP_K63";
		descriptionShort = "$STR_IMP_K63D";
		model = "IMPGMOD\Equipment\Helmet\K63\models\K63Helmet_G_Raised.p3d";
		attachments[] = {"HPouch"};
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
		noNVStrap = 0;
		noEyewear = 0;
		varWetMax=0.048999999;
		heatIsolation=0.5;
		hiddenSelections[] = {"camoflage", "balaclava", "golova"};
		headSelectionsToHide[] = {"Clipping_Mich2001"};
		
		class ClothingTypes 
		{
			male = "IMPGMOD\Equipment\Helmet\K63\models\K63Helmet_Raised.p3d";
			female = "IMPGMOD\Equipment\Helmet\K63\models\K63Helmet_Raised.p3d";
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
						{1.0, {"IMPGMOD\Equipment\Helmet\K63\data\K63Helmet.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Helmet\K63\data\K63Helmet.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Helmet\K63\data\K63Helmet_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Helmet\K63\data\K63Helmet_damage.rvmat"}}, 
						{0.0, {"IMPGMOD\Equipment\Helmet\K63\data\K63Helmet_destruct.rvmat"}}
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
	
	class IMP_Helmet_K63_Raised_Green : IMP_Helmet_K63_Raised_ColorBase 
	{
		scope = 2;
		color="Green";
		simpleHiddenSelections[] = { "balaclava", "golova"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\K63\data\K63Helmet_green.paa", "IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_co.paa", "IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_co.paa"};
	};
	
	class IMP_Helmet_K63_Raised_Black : IMP_Helmet_K63_Raised_ColorBase 
	{
		scope = 2;
		color="Black";
		simpleHiddenSelections[] = { "balaclava", "golova"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\K63\data\K63Helmet_ca.paa", "IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_black.paa", "IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_black.paa"};
	};
	
	class IMP_Helmet_K63_Raised_NWU : IMP_Helmet_K63_Raised_ColorBase 
	{
		scope = 2;
		color="NWU";
		simpleHiddenSelections[] = { "balaclava", "golova"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\K63\data\K63Helmet_NWU.paa", "IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_black.paa", "IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_black.paa"};
	};
	
	class IMP_Helmet_K63_Raised_EMR : IMP_Helmet_K63_Raised_ColorBase 
	{
		scope = 2;
		color="EMR";
		simpleHiddenSelections[] = { "balaclava", "golova"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\K63\data\K63Helmet_EMR.paa", "IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_co.paa", "IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_co.paa"};
	};
	
	class IMP_Helmet_K63_Raised_UCP : IMP_Helmet_K63_Raised_ColorBase 
	{
		scope = 2;
		color="UCP";
		simpleHiddenSelections[] = { "balaclava", "golova"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\K63\data\K63Helmet_UCP.paa", "IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_black.paa", "IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_black.paa"};
	};
	
	class IMP_Helmet_K63_Raised_MARPAT : IMP_Helmet_K63_Raised_ColorBase 
	{
		scope = 2;
		color="MARPAT";
		simpleHiddenSelections[] = { "balaclava", "golova"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\K63\data\K63Helmet_MARPAT.paa", "IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_black.paa", "IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_black.paa"};
	};
};
