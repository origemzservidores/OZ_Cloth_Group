class CfgPatches 
{
	class IMP_Helmet_RoninHeavy {
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
	
	class IMP_Helmet_RoninHeavy_ColorBase : Clothing 
	{
		scope = 0;
		RankLevel = 6;
		displayName = "$STR_IMP_DevRoninHeavy";
		descriptionShort = "$STR_IMP_DevRoninHeavyD";
		model = "IMPGMOD\Equipment\Helmet\DevtacRoninHeavy\models\RoninHeavy_g.p3d";
		attachments[] = {"NVG", "helmetFlashlight"};
		repairableWithKits[] = {8};
		repairCosts[] = {25.0};
		inventorySlot[] = {"Headgear", "Helmet1", "Helmet2"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing", "Headgear"};
		quickBarBonus=2;
		weight = 4000;
		itemSize[] = {4, 4};
		noMask = 1;
		noNVStrap = 1;
		noEyewear = 1;
		noEars = 1;
		varWetMax=0.048999999;
		heatIsolation=1;
		hiddenSelections[] = {"camoflage", "glass"};
		headSelectionsToHide[] = {"Clipping_GP5GasMask"};
		
		class ClothingTypes 
		{
			male = "IMPGMOD\Equipment\Helmet\DevtacRoninHeavy\models\RoninHeavy.p3d";
			female = "IMPGMOD\Equipment\Helmet\DevtacRoninHeavy\models\RoninHeavy_f.p3d";
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
						{1.0, {"IMPGMOD\Equipment\Helmet\DevtacRoninHeavy\data\RoninHeavy.rvmat", "dz\weapons\attachments\optics\data\lensglass_clearer.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Helmet\DevtacRoninHeavy\data\RoninHeavy.rvmat", "dz\weapons\attachments\optics\data\lensglass_clearer.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Helmet\DevtacRoninHeavy\data\RoninHeavy_damage.rvmat", "dz\weapons\attachments\optics\data\lensglass_clearer.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Helmet\DevtacRoninHeavy\data\RoninHeavy_damage.rvmat", "dz\weapons\attachments\optics\data\lensglass_clearer.rvmat"}}, 
						{0.0, {"IMPGMOD\Equipment\Helmet\DevtacRoninHeavy\data\RoninHeavy_destruct.rvmat", "dz\weapons\attachments\optics\data\lensglass_clearer.rvmat"}}
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
	
	class IMP_Helmet_RoninHeavy_Black : IMP_Helmet_RoninHeavy_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\DevtacRoninHeavy\data\RoninHeavy_Black.paa", "impgmod\equipment\helmet\devtacroninlight\data\glass_ca.paa"};
	};
	
	class IMP_Helmet_RoninHeavy_Green : IMP_Helmet_RoninHeavy_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\DevtacRoninHeavy\data\RoninHeavy_Green.paa", "impgmod\equipment\helmet\devtacroninlight\data\glass_ca.paa"};
	};
	
	class IMP_Helmet_RoninHeavy_Tan : IMP_Helmet_RoninHeavy_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\DevtacRoninHeavy\data\RoninHeavy_Tan.paa", "impgmod\equipment\helmet\devtacroninlight\data\glass_ca.paa"};
	};
};
