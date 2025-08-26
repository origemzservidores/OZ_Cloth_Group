class CfgPatches 
{
	class IMP_Helmet_Mandalor 
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data", "DZ_Characters", "DZ_Scripts", "DZ_Characters_Headgear", "IMPGMOD"};
	};
};

class cfgVehicles 
{
	class Clothing_Base;
	class Clothing: Clothing_Base {};
	
	class IMP_Helmet_Mandalor_ColorBase : Clothing 
	{
		scope = 0;
		RankLevel = 4;
		displayName = "$STR_IMP_MandalorHelmet";
		descriptionShort = "$STR_IMP_HelmetALL";
		model = "IMPGMOD\Equipment\Helmet\MandalorianHelmet\models\Mandalor_g.p3d";
		attachments[] = {"NVG","helmetFlashlight", "HPouch"};
		repairableWithKits[] = {8};
		repairCosts[] = {25.0};
		inventorySlot[] = {"Headgear", "Helmet1", "Helmet2"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing", "Headgear"};
		weight = 4000;
		quickBarBonus=1;
		itemSize[] = {4, 4};
		noMask = 1;
		noNVStrap = 0;
		noEyewear = 1;
		varWetMax=0.048999999;
		heatIsolation=1;
		headSelectionsToHide[] = {"Clipping_Mich2001"};
		hiddenSelections[] = {"camoflage", "mandalor", "visor"};
		hiddenSelectionsMaterials[]= {"IMPGMOD\Equipment\Helmet\MandalorianHelmet\data\opscore.rvmat", "IMPGMOD\Equipment\Helmet\MandalorianHelmet\data\mandalorianhelmet.rvmat", "impgmod\equipment\data\glassnew_exp.rvmat"};
		
		class ClothingTypes 
		{
			male = "IMPGMOD\Equipment\Helmet\MandalorianHelmet\models\Mandalor.p3d";
			female = "IMPGMOD\Equipment\Helmet\MandalorianHelmet\models\Mandalor.p3d";
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
						{1.0, {"IMPGMOD\Equipment\Helmet\MandalorianHelmet\data\OpsCore.rvmat", "IMPGMOD\Equipment\Helmet\MandalorianHelmet\data\MandalorianHelmet.rvmat", "IMPGMOD\Equipment\data\GlassNew_Exp.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Helmet\MandalorianHelmet\data\OpsCore.rvmat", "IMPGMOD\Equipment\Helmet\MandalorianHelmet\data\MandalorianHelmet.rvmat", "IMPGMOD\Equipment\data\GlassNew_Exp.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Helmet\MandalorianHelmet\data\OpsCore_damage.rvmat", "IMPGMOD\Equipment\Helmet\MandalorianHelmet\data\MandalorianHelmet_damage.rvmat", "IMPGMOD\Equipment\data\GlassNew_Exp_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Helmet\MandalorianHelmet\data\OpsCore_damage.rvmat", "IMPGMOD\Equipment\Helmet\MandalorianHelmet\data\MandalorianHelmet_damage.rvmat", "IMPGMOD\Equipment\data\GlassNew_Exp_damage.rvmat"}}, 
						{0.0, {"IMPGMOD\Equipment\Helmet\MandalorianHelmet\data\OpsCore_destruct.rvmat", "IMPGMOD\Equipment\Helmet\MandalorianHelmet\data\MandalorianHelmet_destruct.rvmat", "IMPGMOD\Equipment\data\GlassNew_Exp_destruct.rvmat"}}
					};
				};
			};
			
			class GlobalArmor 
			{
				class Projectile 
				{
					class Health 
					{
						damage = 0.1;
					};
					
					class Blood 
					{
						damage = 0.1;
					};
					
					class Shock 
					{
						damage = 0.1;
					};
				};
				
				class Melee 
				{
					class Health 
					{
						damage = 0.1;
					};
					
					class Blood 
					{
						damage = 0.1;
					};
					
					class Shock 
					{
						damage = 0.1;
					};
				};
				
				class Infected 
				{
					class Health 
					{
						damage = 0.1;
					};
					
					class Blood 
					{
						damage = 0.1;
					};
					
					class Shock 
					{
						damage = 0.1;
					};
				};
				
				class FragGrenade 
				{
					class Health 
					{
						damage = 0.1;
					};
						
					class Blood 
					{
						damage = 0.1;
					};
						
					class Shock 
					{
						damage = 0.1;
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
	
	class IMP_Helmet_Mandalor_Black : IMP_Helmet_Mandalor_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\MandalorianHelmet\data\OpsCore_Black.paa", "IMPGMOD\Equipment\Helmet\MandalorianHelmet\data\Mandalorian_Helmet_Black.paa", "IMPGMOD\Equipment\data\Glass_Black_ca_new.paa"};
		hiddenSelectionsMaterials[]= {"IMPGMOD\Equipment\Helmet\MandalorianHelmet\data\opscore.rvmat", "IMPGMOD\Equipment\Helmet\MandalorianHelmet\data\mandalorianhelmet.rvmat", "impgmod\equipment\data\glassnew_exp.rvmat"};
	};
	
	class IMP_Helmet_Mandalor_Green : IMP_Helmet_Mandalor_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\MandalorianHelmet\data\OpsCore_Green.paa", "IMPGMOD\Equipment\Helmet\MandalorianHelmet\data\Mandalorian_Helmet_Green.paa", "IMPGMOD\Equipment\data\Glass_Black_ca_new.paa"};
		hiddenSelectionsMaterials[]= {"IMPGMOD\Equipment\Helmet\MandalorianHelmet\data\opscore.rvmat", "IMPGMOD\Equipment\Helmet\MandalorianHelmet\data\mandalorianhelmet.rvmat", "impgmod\equipment\data\glassnew_exp.rvmat"};
	};
	
	class IMP_Helmet_Mandalor_Tan : IMP_Helmet_Mandalor_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\MandalorianHelmet\data\OpsCore_Tan.paa", "IMPGMOD\Equipment\Helmet\MandalorianHelmet\data\Mandalorian_Helmet_Tan.paa", "IMPGMOD\Equipment\data\Glass_Black_ca_new.paa"};
		hiddenSelectionsMaterials[]= {"IMPGMOD\Equipment\Helmet\MandalorianHelmet\data\opscore.rvmat", "IMPGMOD\Equipment\Helmet\MandalorianHelmet\data\mandalorianhelmet.rvmat", "impgmod\equipment\data\glassnew_exp.rvmat"};
	};
	
	class IMP_Helmet_Mandalor_EMR : IMP_Helmet_Mandalor_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\MandalorianHelmet\data\OpsCore_EMR.paa", "IMPGMOD\Equipment\Helmet\MandalorianHelmet\data\Mandalorian_Helmet_EMR.paa", "IMPGMOD\Equipment\data\Glass_Black_ca_new.paa"};
		hiddenSelectionsMaterials[]= {"IMPGMOD\Equipment\Helmet\MandalorianHelmet\data\opscore.rvmat", "IMPGMOD\Equipment\Helmet\MandalorianHelmet\data\mandalorianhelmet.rvmat", "impgmod\equipment\data\glassnew_exp.rvmat"};
	};
	
	class IMP_Helmet_Mandalor_NWU : IMP_Helmet_Mandalor_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\MandalorianHelmet\data\OpsCore_NWU.paa", "IMPGMOD\Equipment\Helmet\MandalorianHelmet\data\Mandalorian_Helmet_NWU.paa", "IMPGMOD\Equipment\data\Glass_Black_ca_new.paa"};
		hiddenSelectionsMaterials[]= {"IMPGMOD\Equipment\Helmet\MandalorianHelmet\data\opscore.rvmat", "IMPGMOD\Equipment\Helmet\MandalorianHelmet\data\mandalorianhelmet.rvmat", "impgmod\equipment\data\glassnew_exp.rvmat"};
	};
	
	class IMP_Helmet_Mandalor_UCP : IMP_Helmet_Mandalor_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\MandalorianHelmet\data\OpsCore_UCP.paa", "IMPGMOD\Equipment\Helmet\MandalorianHelmet\data\Mandalorian_Helmet_UCP.paa", "IMPGMOD\Equipment\data\Glass_Black_ca_new.paa"};
		hiddenSelectionsMaterials[]= {"IMPGMOD\Equipment\Helmet\MandalorianHelmet\data\opscore.rvmat", "IMPGMOD\Equipment\Helmet\MandalorianHelmet\data\mandalorianhelmet.rvmat", "impgmod\equipment\data\glassnew_exp.rvmat"};
	};
	
	class IMP_Helmet_Mandalor_MARPAT : IMP_Helmet_Mandalor_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\MandalorianHelmet\data\OpsCore_MARPAT.paa", "IMPGMOD\Equipment\Helmet\MandalorianHelmet\data\Mandalorian_Helmet_MARPAT.paa", "IMPGMOD\Equipment\data\Glass_Black_ca_new.paa"};
		hiddenSelectionsMaterials[]= {"IMPGMOD\Equipment\Helmet\MandalorianHelmet\data\opscore.rvmat", "IMPGMOD\Equipment\Helmet\MandalorianHelmet\data\mandalorianhelmet.rvmat", "impgmod\equipment\data\glassnew_exp.rvmat"};
	};
	
	class IMP_Helmet_Mandalor_BlueMetall : IMP_Helmet_Mandalor_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\MandalorianHelmet\data\BlueMetall\BlueMetall_OpsCore_co.paa", "IMPGMOD\Equipment\Helmet\MandalorianHelmet\data\BlueMetall\BlueMetall_Mandalor_co.paa", "IMPGMOD\Equipment\Helmet\MandalorianHelmet\data\Hexagon\Hexagon_Glass_co.paa"};
		hiddenSelectionsMaterials[]= {"IMPGMOD\Equipment\Helmet\MandalorianHelmet\data\BlueMetall\BlueMetall_OpsCore.rvmat", "IMPGMOD\Equipment\Helmet\MandalorianHelmet\data\BlueMetall\BlueMetall_Mandalor.rvmat", "IMPGMOD\Equipment\Helmet\MandalorianHelmet\data\Hexagon\Hexagon_Glass.rvmat"};
	};
	
	class IMP_Helmet_Mandalor_Gold : IMP_Helmet_Mandalor_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\MandalorianHelmet\data\Gold\Gold_OpsCore_co.paa", "IMPGMOD\Equipment\Helmet\MandalorianHelmet\data\Gold\Gold_Mandalor_co.paa", "IMPGMOD\Equipment\Helmet\MandalorianHelmet\data\Ice\Glass_Ice.paa"};
		hiddenSelectionsMaterials[]= {"IMPGMOD\Equipment\Helmet\MandalorianHelmet\data\Gold\Gold_OpsCore.rvmat", "IMPGMOD\Equipment\Helmet\MandalorianHelmet\data\Gold\Gold_Mandalor.rvmat", "IMPGMOD\Equipment\Helmet\MandalorianHelmet\data\Ice\Ice_Glass.rvmat"};
	};
	
	class IMP_Helmet_Mandalor_Hexagon : IMP_Helmet_Mandalor_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\MandalorianHelmet\data\Hexagon\Hexagon_OpsCore_co.paa", "IMPGMOD\Equipment\Helmet\MandalorianHelmet\data\Hexagon\Hexagon_Mandalor_co.paa", "IMPGMOD\Equipment\Helmet\MandalorianHelmet\data\Hexagon\Hexagon_Glass_co.paa"};
		hiddenSelectionsMaterials[]= {"IMPGMOD\Equipment\Helmet\MandalorianHelmet\data\Hexagon\Hexagon_OpsCore.rvmat", "IMPGMOD\Equipment\Helmet\MandalorianHelmet\data\Hexagon\Hexagon_Mandalor.rvmat", "IMPGMOD\Equipment\Helmet\MandalorianHelmet\data\Hexagon\Hexagon_Glass.rvmat"};
	};
	
	class IMP_Helmet_Mandalor_Ice : IMP_Helmet_Mandalor_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\MandalorianHelmet\data\Ice\Ops_co.paa", "IMPGMOD\Equipment\Helmet\MandalorianHelmet\data\Ice\Mandalor_co.paa", "IMPGMOD\Equipment\Helmet\MandalorianHelmet\data\Ice\Glass_Ice.paa"};
		hiddenSelectionsMaterials[]= {"IMPGMOD\Equipment\Helmet\MandalorianHelmet\data\Ice\OpsCore.rvmat", "IMPGMOD\Equipment\Helmet\MandalorianHelmet\data\Ice\Mandalor_Ice.rvmat", "IMPGMOD\Equipment\Helmet\MandalorianHelmet\data\Ice\Ice_Glass.rvmat"};
	};
	
	class IMP_Helmet_Mandalor_Med : IMP_Helmet_Mandalor_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\MandalorianHelmet\data\Med\Med_OpsCore_co.paa", "IMPGMOD\Equipment\Helmet\MandalorianHelmet\data\Med\Med_Mandalor_co.paa", "IMPGMOD\Equipment\Helmet\MandalorianHelmet\data\Hexagon\Hexagon_Glass_co.paa"};
		hiddenSelectionsMaterials[]= {"IMPGMOD\Equipment\Helmet\MandalorianHelmet\data\Med\Med_OpsCore.rvmat", "IMPGMOD\Equipment\Helmet\MandalorianHelmet\data\Med\Med_Mandalor.rvmat", "IMPGMOD\Equipment\Helmet\MandalorianHelmet\data\Hexagon\Hexagon_Glass.rvmat"};
	};
	
	class IMP_Helmet_Mandalor_WhiteBlood : IMP_Helmet_Mandalor_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\MandalorianHelmet\data\WhiteBlood\WhiteBlood_OpsCore_co.paa", "IMPGMOD\Equipment\Helmet\MandalorianHelmet\data\WhiteBlood\WhiteBlood_Mandalor_co.paa", "IMPGMOD\Equipment\Helmet\MandalorianHelmet\data\WhiteBlood\WhiteBlood_Glass_co.paa"};
		hiddenSelectionsMaterials[]= {"IMPGMOD\Equipment\Helmet\MandalorianHelmet\data\WhiteBlood\WhiteBlood_OpsCore.rvmat", "IMPGMOD\Equipment\Helmet\MandalorianHelmet\data\WhiteBlood\WhiteBlood_Mandalor.rvmat", "IMPGMOD\Equipment\Helmet\MandalorianHelmet\data\WhiteBlood\WhiteBlood_Glass.rvmat"};
	};
};
