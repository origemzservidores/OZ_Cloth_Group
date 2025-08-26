class CfgPatches 
{
	class IMP_Vest_Trooper 
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
	
	class IMP_Vest_Trooper_ColorBase : Clothing {
		scope = 0;
		RankLevel = 2;
		displayName = "$STR_IMP_Trooper";
		descriptionShort = "$STR_IMP_VestALL";
		model = "IMPGMOD\Equipment\Vest\Trooper\models\Trooper_g.p3d";
		attachments[] = {};
		inventorySlot[] = {"Vest", "Vest1"};
		itemInfo[] = {"Clothing", "Vest"};
		quickBarBonus = 3;
		weight = 6000;
		itemSize[] = {5, 5};
		noUNLVest = 0;
		varWetMax=0.048999999;
		heatIsolation=0.5;
		repairableWithKits[] = {3, 8};
		repairCosts[] = {75.0, 50.0};
		hiddenSelections[] = {"camoflage"};
		
		class ClothingTypes {
			male = "IMPGMOD\Equipment\Vest\Trooper\models\Trooper_m.p3d";
			female = "IMPGMOD\Equipment\Vest\Trooper\models\Trooper_f.p3d";
		};
		
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints = 500;
					transferToAttachmentsCoef = 0.5;
					healthLevels[] = 
					{
						{1.0, {"IMPGMOD\Equipment\Vest\Trooper\data\Trooper.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Vest\Trooper\data\Trooper.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Vest\Trooper\data\Trooper_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Vest\Trooper\data\Trooper_damage.rvmat"}}, 
						{0.0, {"IMPGMOD\Equipment\Vest\Trooper\data\Trooper_destruct.rvmat"}}
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
		
		class AnimEvents {
			class SoundWeapon {
				class pickUpItem {
					soundSet = "SmershVest_pickup_SoundSet";
					id = 797;
				};
				
				class drop {
					soundset = "SmershVest_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	
	class IMP_Vest_Trooper : IMP_Vest_Trooper_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Vest\Trooper\data\Trooper_co.paa"};
	};
	
	class IMP_Vest_Trooper_black : IMP_Vest_Trooper_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Vest\Trooper\data\Trooper_black_co.paa"};
	};
};
