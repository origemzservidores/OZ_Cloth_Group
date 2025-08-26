class CfgPatches 
{
	class IMP_Helmet_Sfera 
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
	
	class IMP_Helmet_Sfera_ColorBase : Clothing 
	{
		scope = 0;
		RankLevel = 3;
		displayName = "$STR_IMP_Sfera";
		descriptionShort = "$STR_IMP_SferaD";
		model = "IMPGMOD\Equipment\Helmet\Sfera\models\Sfera_g.p3d";
		attachments[] = {};
		repairableWithKits[] = {8};
		repairCosts[] = {25.0};
		inventorySlot[] = {"Headgear", "Helmet1", "Helmet2"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing", "Headgear"};
		quickBarBonus=1;
		weight = 3000;
		itemSize[] = {4, 4};
		noMask = 0;
		noNVStrap = 0;
		noEyewear = 0;
		varWetMax=0;
		heatIsolation=1;
		hiddenSelections[] = {"camoflage", "balaclava", "golova"};
		headSelectionsToHide[] = {"Clipping_Mich2001"};
		
		class ClothingTypes 
		{
			male = "IMPGMOD\Equipment\Helmet\Sfera\models\Sfera_m.p3d";
			female = "IMPGMOD\Equipment\Helmet\Sfera\models\Sfera_f.p3d";
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
						{1.0, {"IMPGMOD\Equipment\Helmet\Sfera\data\Sfera.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Helmet\Sfera\data\Sfera.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Helmet\Sfera\data\Sfera_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Helmet\Sfera\data\Sfera_damage.rvmat"}}, 
						{0.0, {"IMPGMOD\Equipment\Helmet\Sfera\data\Sfera_destruct.rvmat"}}
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
	
	class IMP_Helmet_Sfera : IMP_Helmet_Sfera_ColorBase 
	{
        scope = 2;
		simpleHiddenSelections[] = {"balaclava","golova"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\Sfera\data\Sfera_co.paa", "IMPGMOD\Equipment\Helmet\Sfera\data\Sfera_co.paa", "IMPGMOD\Equipment\Helmet\Sfera\data\Sfera_co.paa"};
    };
};
