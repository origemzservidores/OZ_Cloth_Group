class CfgPatches 
{
	class IMP_AUVest_ArsArmaA18
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data", "DZ_Characters", "DZ_Scripts","DZ_Characters_Vests"};
	};
};

class cfgVehicles 
{
	class Clothing_Base;
	class Clothing: Clothing_Base {};
	
	class IMP_AUVest_ArsArmaA18_ColorBase : Clothing 
	{
		scope = 0;
		RankLevel = 3;
		displayName = "$STR_IMP_ArsArmaA18";
		descriptionShort = "$STR_IMP_ArsArmaA182";
		model = "IMPGMOD\Equipment\ArmorUnlVest\ArsArmaA18\models\ArsArma18_g.p3d";
		attachments[] = {};
		inventorySlot[] = {"Vest", "Vest1"};
		itemInfo[] = {"Clothing", "Vest"};
		weight = 10000;
		itemSize[] = {5, 5};
		itemsCargoSize[] = {6, 3};
		noUNLVest = 1;
		quickBarBonus = 2;
		varWetMax=0.048999999;
		heatIsolation=1;
		repairableWithKits[] = {3, 8};
		repairCosts[] = {75.0, 50.0};
		hiddenSelections[] = {"camoflage"};
		
		class ClothingTypes 
		{
			male = "IMPGMOD\Equipment\ArmorUnlVest\ArsArmaA18\models\ArsArma18_m.p3d";
			female = "IMPGMOD\Equipment\ArmorUnlVest\ArsArmaA18\models\ArsArma18_f.p3d";
		};
		
		class DamageSystem 
		{
			class GlobalHealth 
			{
				class Health 
				{
					hitpoints = 500;
					transferToAttachmentsCoef = 0.5;
					healthLevels[] = 
					{
						{1.0, {"IMPGMOD\Equipment\ArmorUnlVest\ArsArmaA18\data\ArsArma18.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\ArmorUnlVest\ArsArmaA18\data\ArsArma18.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\ArmorUnlVest\ArsArmaA18\data\ArsArma18_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\ArmorUnlVest\ArsArmaA18\data\ArsArma18_damage.rvmat"}}, 
						{0.0, {"IMPGMOD\Equipment\ArmorUnlVest\ArsArmaA18\data\ArsArma18_destruct.rvmat"}}
					};
				};
			};
			
			class GlobalArmor 
			{
				class Projectile 
				{
					class Health 
					{
						damage = 0.7;
					};
					
					class Blood 
					{
						damage = 0.7;
					};
					
					class Shock 
					{
						damage = 0.7;
					};
				};
				
				class Melee 
				{
					class Health 
					{
						damage = 0.7;
					};
					
					class Blood 
					{
						damage = 0.7;
					};
					
					class Shock 
					{
						damage = 0.7;
					};
				};
				
				class Infected 
				{
					class Health 
					{
						damage = 0.7;
					};
					
					class Blood 
					{
						damage = 0.7;
					};
					
					class Shock 
					{
						damage = 0.7;
					};
				};
				
				class FragGrenade 
				{
					class Health 
					{
						damage = 0.7;
					};
					
					class Blood 
					{
						damage = 0.7;
					};
					
					class Shock 
					{
						damage = 0.7;
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
					soundSet = "SmershVest_pickup_SoundSet";
					id = 797;
				};
				
				class drop 
				{
					soundset = "SmershVest_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	
	class IMP_AUVest_ArsArmaA18 : IMP_AUVest_ArsArmaA18_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\ArmorUnlVest\ArsArmaA18\data\ArsArmaA18_co.paa"};
	};
};
