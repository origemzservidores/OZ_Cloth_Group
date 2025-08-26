class CfgPatches 
{
	class IMP_Helmet_AM95 
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Characters","DZ_Scripts","DZ_Characters_Headgear"};
	};
};

class cfgVehicles 
{
	class Clothing_Base;
	class Clothing: Clothing_Base {};
	
	class IMP_Helmet_AM95_ColorBase : Clothing {
		scope = 0;
		RankLevel = 4;
		displayName = "$STR_IMP_AM95";
		descriptionShort = "$STR_IMP_AM95D";
		model = "IMPGMOD\Equipment\Helmet\AM95\models\AM95_g.p3d";
		attachments[] = {"HPouch"};
		repairableWithKits[] = {8};
		repairCosts[] = {25.0};
		inventorySlot[] = {"Headgear","Helmet1","Helmet2"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Headgear"};
		weight = 2000;
		quickBarBonus=1;
		itemSize[] = {4, 4};
		noMask = 0;
		noNVStrap = 0;
		noEyewear = 0;
		varWetMax=0.048999999;
		heatIsolation=1;
		hiddenSelections[] = {"camoflage","balaclava","golova"};
		headSelectionsToHide[] = {"Clipping_Mich2001"};
				
		class ClothingTypes 
		{
			male = "IMPGMOD\Equipment\Helmet\AM95\models\AM95_m.p3d";
			female = "IMPGMOD\Equipment\Helmet\AM95\models\AM95_f.p3d";
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
						{1.0, {"IMPGMOD\Equipment\Helmet\AM95\data\AM95.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Helmet\AM95\data\AM95.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Helmet\AM95\data\AM95_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Helmet\AM95\data\AM95_damage.rvmat"}}, 
						{0.0, {"IMPGMOD\Equipment\Helmet\AM95\data\AM95_destruct.rvmat"}}
					};
				};
			};
			
			class GlobalArmor {
				class Projectile {
					class Health {
						damage = 0.3;
					};
					
					class Blood {
						damage = 0.3;
					};
					
					class Shock {
						damage = 0.3;
					};
				};
				
				class Melee {
					class Health {
						damage = 0.3;
					};
					
					class Blood {
						damage = 0.3;
					};
					
					class Shock {
						damage = 0.3;
					};
				};
				
				class Infected {
					class Health {
						damage = 0.3;
					};
					
					class Blood {
						damage = 0.3;
					};
					
					class Shock {
						damage = 0.3;
					};
				};
				
				class FragGrenade 
				{
					class Health 
					{
						damage = 0.3;
					};
						
					class Blood 
					{
						damage = 0.3;
					};
						
					class Shock 
					{
						damage = 0.3;
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
	
	class IMP_Helmet_AM95_Green : IMP_Helmet_AM95_ColorBase 
	{
		scope = 2;
		color="Green";
		simpleHiddenSelections[] = {"balaclava","golova"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\AM95\data\AM95_Green.paa","IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_co.paa","IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_co.paa"};
	};
	
	class IMP_Helmet_AM95_Black : IMP_Helmet_AM95_ColorBase 
	{
		scope = 2;
		color="Black";
		simpleHiddenSelections[] = {"balaclava","golova"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\AM95\data\AM95_Black.paa","IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_black.paa","IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_black.paa"};
	};
	
	class IMP_Helmet_AM95_Tan : IMP_Helmet_AM95_ColorBase 
	{
		scope = 2;
		color="Tan";
		simpleHiddenSelections[] = {"balaclava","golova"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\AM95\data\AM95_Tan.paa","IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_black.paa","IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_black.paa"};
	};
	
	class IMP_Helmet_AM95_EMR : IMP_Helmet_AM95_ColorBase 
	{
		scope = 2;
		color="EMR";
		simpleHiddenSelections[] = {"balaclava","golova"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\AM95\data\AM95_EMR.paa","IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_co.paa","IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_co.paa"};
	};
	
	class IMP_Helmet_AM95_NWU : IMP_Helmet_AM95_ColorBase 
	{
		scope = 2;
		color="NWU";
		simpleHiddenSelections[] = {"balaclava","golova"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\AM95\data\AM95_NWU.paa","IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_black.paa","IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_black.paa"};
	};
	
	class IMP_Helmet_AM95_UCP : IMP_Helmet_AM95_ColorBase 
	{
		scope = 2;
		color="UCP";
		simpleHiddenSelections[] = {"balaclava","golova"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\AM95\data\AM95_UCP.paa","IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_black.paa","IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_black.paa"};
	};
	
	class IMP_Helmet_AM95_MARPAT : IMP_Helmet_AM95_ColorBase 
	{
		scope = 2;
		color="MARPAT";
		simpleHiddenSelections[] = {"balaclava","golova"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\AM95\data\AM95_MARPAT.paa","IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_black.paa","IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_black.paa"};
	};
	
	class IMP_Helmet_AM95_Raised_ColorBase : Clothing {
		scope = 0;
		RankLevel = 3;
		displayName = "$STR_IMP_AM95";
		descriptionShort = "$STR_IMP_AM95D";
		model = "IMPGMOD\Equipment\Helmet\AM95\models\AM95_g_Raised.p3d";
		attachments[] = {"HPouch"};
		repairableWithKits[] = {8};
		repairCosts[] = {25.0};
		inventorySlot[] = {"Headgear","Helmet1","Helmet2"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Headgear"};
		weight = 3000;
		quickBarBonus=1;
		itemSize[] = {4, 4};
		noMask = 0;
		noNVStrap = 0;
		noEyewear = 0;
		varWetMax=0.048999999;
		heatIsolation=1;
		hiddenSelections[] = {"camoflage","balaclava","golova"};
		headSelectionsToHide[] = {"Clipping_Mich2001"};
				
		class ClothingTypes 
		{
			male = "IMPGMOD\Equipment\Helmet\AM95\models\AM95_m_Raised.p3d";
			female = "IMPGMOD\Equipment\Helmet\AM95\models\AM95_f_Raised.p3d";
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
						{1.0, {"IMPGMOD\Equipment\Helmet\AM95\data\AM95.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Helmet\AM95\data\AM95.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Helmet\AM95\data\AM95_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Helmet\AM95\data\AM95_damage.rvmat"}}, 
						{0.0, {"IMPGMOD\Equipment\Helmet\AM95\data\AM95_destruct.rvmat"}}
					};
				};
			};
			
			class GlobalArmor {
				class Projectile {
					class Health {
						damage = 0.3;
					};
					
					class Blood {
						damage = 0.3;
					};
					
					class Shock {
						damage = 0.3;
					};
				};
				
				class Melee {
					class Health {
						damage = 0.3;
					};
					
					class Blood {
						damage = 0.3;
					};
					
					class Shock {
						damage = 0.3;
					};
				};
				
				class Infected {
					class Health {
						damage = 0.3;
					};
					
					class Blood {
						damage = 0.3;
					};
					
					class Shock {
						damage = 0.3;
					};
				};
				
				class FragGrenade 
				{
					class Health 
					{
						damage = 0.3;
					};
						
					class Blood 
					{
						damage = 0.3;
					};
						
					class Shock 
					{
						damage = 0.3;
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
	
	class IMP_Helmet_AM95_Raised_Green : IMP_Helmet_AM95_Raised_ColorBase 
	{
		scope = 2;
		color="Green";
		simpleHiddenSelections[] = {"balaclava","golova"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\AM95\data\AM95_Green.paa","IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_co.paa","IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_co.paa"};
	};
	
	class IMP_Helmet_AM95_Raised_Black : IMP_Helmet_AM95_Raised_ColorBase 
	{
		scope = 2;
		color="Black";
		simpleHiddenSelections[] = {"balaclava","golova"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\AM95\data\AM95_Black.paa","IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_black.paa","IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_black.paa"};
	};
	
	class IMP_Helmet_AM95_Raised_Tan : IMP_Helmet_AM95_Raised_ColorBase 
	{
		scope = 2;
		color="Tan";
		simpleHiddenSelections[] = {"balaclava","golova"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\AM95\data\AM95_Tan.paa","IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_black.paa","IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_black.paa"};
	};
	
	class IMP_Helmet_AM95_Raised_EMR : IMP_Helmet_AM95_Raised_ColorBase 
	{
		scope = 2;
		color="EMR";
		simpleHiddenSelections[] = {"balaclava","golova"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\AM95\data\AM95_EMR.paa","IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_co.paa","IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_co.paa"};
	};
	
	class IMP_Helmet_AM95_Raised_NWU : IMP_Helmet_AM95_Raised_ColorBase 
	{
		scope = 2;
		color="NWU";
		simpleHiddenSelections[] = {"balaclava","golova"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\AM95\data\AM95_NWU.paa","IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_black.paa","IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_black.paa"};
	};
	
	class IMP_Helmet_AM95_Raised_UCP : IMP_Helmet_AM95_Raised_ColorBase 
	{
		scope = 2;
		color="UCP";
		simpleHiddenSelections[] = {"balaclava","golova"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\AM95\data\AM95_UCP.paa","IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_black.paa","IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_black.paa"};
	};
	
	class IMP_Helmet_AM95_Raised_MARPAT : IMP_Helmet_AM95_Raised_ColorBase 
	{
		scope = 2;
		color="MARPAT";
		simpleHiddenSelections[] = {"balaclava","golova"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\AM95\data\AM95_MARPAT.paa","IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_black.paa","IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_black.paa"};
	};
};